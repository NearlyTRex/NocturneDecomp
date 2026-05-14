// Name: core_fire.cpp_CLightningBolt_activateDirectional_FUN_004c5680
// Address: 004c5680
// MANUAL RECONSTRUCTION
// Address Range: [[004c5680, 004c56dd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_004c5680(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_004c5680(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

{
  if (&this_ptr->start_position != start_position) {
    this_ptr->start_position = *start_position;
  }
  if (&this_ptr->end_position != end_position) {
    this_ptr->end_position = *end_position;
  }
  this_ptr->mode = 1;
  this_ptr->lifetime = 0.25;
  this_ptr->end_width = end_width;
  this_ptr->end_spread = end_spread;
  return;
}
