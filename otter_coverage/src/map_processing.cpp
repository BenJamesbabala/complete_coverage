#include <map_processing/map_processing.h>

#include <ros/ros.h>
#include <tf2_ros/transform_listener.h>
#include <tf/tf.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>

#include <queue>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

namespace otter_coverage {

    MapProcessor::MapProcessor() {

        ros::NodeHandle nh;


    }

    MapProcessor::~MapProcessor() {

    }


}
