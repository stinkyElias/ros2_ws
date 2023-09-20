// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorials_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIALS_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define TUTORIALS_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorials_interfaces/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorials_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::tutorials_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::tutorials_interfaces::srv::AddThreeInts_Request c(::tutorials_interfaces::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorials_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::tutorials_interfaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::tutorials_interfaces::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::tutorials_interfaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::tutorials_interfaces::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::tutorials_interfaces::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorials_interfaces::srv::AddThreeInts_Request>()
{
  return tutorials_interfaces::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace tutorials_interfaces


namespace tutorials_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorials_interfaces::srv::AddThreeInts_Response sum(::tutorials_interfaces::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorials_interfaces::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorials_interfaces::srv::AddThreeInts_Response>()
{
  return tutorials_interfaces::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace tutorials_interfaces

#endif  // TUTORIALS_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
