// Name: core_pendulum.cpp_CPendulum_processInEditor_FUN_0054a790
// Address: 0054a790
// Address Range: [[0054a790, 0054a7ac]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_processInEditor_FUN_0054a790(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_processInEditor_FUN_0054a790(CPendulum *this_ptr)

{
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  core_pendulum_cpp_CPendulum_updateSwing_FUN_00549b90(this_ptr,0.0);
  return;
}
