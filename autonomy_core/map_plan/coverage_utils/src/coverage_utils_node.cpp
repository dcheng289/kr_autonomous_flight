#include <coverage_utils.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "coverage_planner");
  ros::NodeHandle nh;
  CoveragePlanner planner;
  ros::Rate r(0.1);
  while (nh.ok()) {
    planner.RunPlanner();
    ros::spinOnce();
    ROS_INFO("Publishing data for coverage...");
    r.sleep();
  }
}