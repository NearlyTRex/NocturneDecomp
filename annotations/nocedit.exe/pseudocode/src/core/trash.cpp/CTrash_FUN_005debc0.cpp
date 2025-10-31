// Name: core_trash.cpp_CTrash_FUN_005debc0
// Address: 005debc0
// Address Range: [[005debc0, 005debcd]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005debc0(CTrash * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005debc0(CTrash *this_ptr)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&this_ptr->model_name);
  this_ptr->field4_0x2e0[0x28] = '\0';
  this_ptr->field4_0x2e0[0x29] = '\0';
  this_ptr->field4_0x2e0[0x2a] = '\0';
  this_ptr->field4_0x2e0[0x2b] = '\0';
  *(undefined4 *)(this_ptr->field4_0x2e0 + 0x24) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0x28);
  *(undefined4 *)(this_ptr->field4_0x2e0 + 0x20) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0x24);
  this_ptr->field4_0x2e0[0x10] = '\0';
  this_ptr->field4_0x2e0[0x11] = '\0';
  this_ptr->field4_0x2e0[0x12] = '\0';
  this_ptr->field4_0x2e0[0x13] = '\0';
  *(undefined4 *)(this_ptr->field4_0x2e0 + 0xc) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0x10);
  *(undefined4 *)(this_ptr->field4_0x2e0 + 8) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0xc);
  this_ptr->field4_0x2e0[0] = '\0';
  this_ptr->field4_0x2e0[1] = '\0';
  this_ptr->field4_0x2e0[2] = '\0';
  this_ptr->field4_0x2e0[3] = '?';
  this_ptr->field4_0x2e0[4] = '\0';
  this_ptr->field4_0x2e0[5] = '\0';
  this_ptr->field4_0x2e0[6] = '\0';
  this_ptr->field4_0x2e0[7] = '@';
  this_ptr->field4_0x2e0[0x2c] = '\0';
  this_ptr->field4_0x2e0[0x2d] = '\0';
  this_ptr->field4_0x2e0[0x2e] = -0x80;
  this_ptr->field4_0x2e0[0x2f] = '?';
  this_ptr->field4_0x2e0[0x30] = '\0';
  this_ptr->field4_0x2e0[0x31] = '\0';
  this_ptr->field4_0x2e0[0x32] = -0x80;
  this_ptr->field4_0x2e0[0x33] = '?';
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
  *(float *)(this_ptr->field4_0x2e0 + 0x34) = fVar1;
  this_ptr->field4_0x2e0[0x40] = '\0';
  this_ptr->field4_0x2e0[0x41] = '\0';
  this_ptr->field4_0x2e0[0x42] = '\0';
  this_ptr->field4_0x2e0[0x43] = '\0';
  *(undefined4 *)(this_ptr->field4_0x2e0 + 0x3c) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0x40);
  *(undefined4 *)(this_ptr->field4_0x2e0 + 0x38) = *(undefined4 *)(this_ptr->field4_0x2e0 + 0x3c);
  this_ptr->field4_0x2e0[0x44] = '\0';
  this_ptr->field4_0x2e0[0x45] = '\0';
  this_ptr->field4_0x2e0[0x46] = '\0';
  this_ptr->field4_0x2e0[0x47] = 'A';
  return;
}


// Assembly code:
// 005debc0: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005debc0
// 005debc1: SUB ESP,0x4
// 005debc4: MOV EBX,dword ptr [ESP + 0xc]
// 005debc8: PUSH EBX
// 005debc9: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
