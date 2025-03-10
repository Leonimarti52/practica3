// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  Init_Sphere_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::Sphere radius(::interfaces::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Sphere>()
{
  return interfaces::msg::builder::Init_Sphere_radius();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
