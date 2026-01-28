// Name: core_set.cpp_CDemonSet_dtor_FUN_00569350
// Address: 00569350
// Address Range: [[00569350, 005693b0]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  core_set_cpp_freeVDBoxes_FUN_00571590((SVDBox **)this_ptr->vdir_boxes);
  core_set_cpp_freeRooms_FUN_00571570((SRoom **)(extraout_EAX + -0x554));
  core_set_cpp_free3DSLights_FUN_00571550((C3DSLight **)(extraout_EAX_00 + -0x141490));
  core_set_cpp_free3DSCameras_FUN_00571530((C3DSCamera **)(extraout_EAX_01 + -0x19a2c));
  return (CDemonSet *)(extraout_EAX_02 + -4);
}
