
#include <ros/ros.h>
#include <motor_test/motor_node.h>
#include <motor_test/pid.h>
#include <stdio.h>



int main(int argc, char** argv)
{
  ros::init(argc, argv, "motor_node");
  ros::NodeHandle nh;
  Initialize();
 ros::Rate loop_rate(Control_cycle);

  while(ros::ok())
  {
    //Motor_Controller(1, true, 100);
    //Motor_Controller(2, true, 100);
    //Accel_Controller(1, true, 100);
    //Accel_Controller(2, true, 100);
    //Switch_Turn_Example(100, 100);
    //Theta_Distance(180,100,30,110);
    Motor_View();
    ros::spinOnce();
    loop_rate.sleep();
  }
  Motor_Controller(1, true, 0);
  Motor_Controller(2, true, 0);
  return 0;
}

/* //PID EXAMPLE
int main() {

    PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

    double val = 20;
    for (int i = 0; i < 100; i++) {
        double inc = pid.calculate(0, val);
        printf("val:% 7.3f inc:% 7.3f\n", val, inc);
        val += inc;
    }

    return 0;
}
*/
