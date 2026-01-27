// Name: core_anvil.cpp_CAnvil_serialize_FUN_00411f50
// Address: 00411f50
// Address Range: [[00411f50, 00411fc3]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_serialize_FUN_00411f50(CAnvil * this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_serialize_FUN_00411f50(CAnvil *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->drop_condition,"dropCondition");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->drop_height,"dropHeight");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->triggered,"triggered");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->yvel,"yvel");
  return;
}
