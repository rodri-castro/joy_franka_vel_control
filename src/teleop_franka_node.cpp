/*

ROS Package: joy_franka_vel_control
File: teleop_franka_node.cpp
Author: Rodrigo Castro Ochoa, rcastro@uma.es, University of Málaga.

Description:
Teleoperation of the cartesian velocity controller for the Franka Emika Panda manipulator using a joystick. 
This node subscribes to the topic /Joy and publishes a Twist message in the topic /cmd_franka_vel.

Credits:
This code is based on the teleop_twist_joy project, available at: http://wiki.ros.org/teleop_twist_joy

*/

#include "ros/ros.h"
#include "teleop_franka_joy/teleop_franka_joy.h"

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "teleop_franka_joy_node");
  ros::NodeHandle nh(""), nh_param("~");
  teleop_franka_joy::TeleopFrankaJoy joy_teleop(&nh, &nh_param);

  ros::spin();
}
