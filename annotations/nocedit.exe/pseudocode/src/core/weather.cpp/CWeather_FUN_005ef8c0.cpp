// Name: core_weather.cpp_CWeather_FUN_005ef8c0
// Address: 005ef8c0
// Address Range: [[005ef8c0, 005ef8e8] [005ef92c, 005ef934]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_FUN_005ef8c0(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_FUN_005ef8c0(CWeather *this_ptr)

{
  float fVar1;
  float fVar2;
  int in_stack_00000008;
  
  *(int *)this_ptr->unk = in_stack_00000008;
  if (in_stack_00000008 == 1) {
    this_ptr->unk[4] = '\0';
    this_ptr->unk[5] = '\0';
    this_ptr->unk[6] = ' ';
    this_ptr->unk[7] = 'B';
  }
  else {
    this_ptr->unk[4] = '\0';
    this_ptr->unk[5] = '\0';
    this_ptr->unk[6] = -0x60;
    this_ptr->unk[7] = '@';
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '\0';
  this_ptr->unk[0x34] = '\0';
  this_ptr->unk[0x35] = '\0';
  this_ptr->unk[0x36] = ' ';
  this_ptr->unk[0x37] = 'A';
  fVar2 = *(float *)(this_ptr->unk + 0x34);
  this_ptr->unk[0x28] = '\0';
  this_ptr->unk[0x29] = '\0';
  this_ptr->unk[0x2a] = '\0';
  this_ptr->unk[0x2b] = '\0';
  *(float *)(this_ptr->unk + 0x20) = fVar1;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,fVar2);
  *(float *)(this_ptr->unk + 0x2c) = fVar2;
  return;
}
