// Name: core_fire.cpp_CCrater_FUN_004c4200
// Address: 004c4200
// Address Range: [[004c4200, 004c4287]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_FUN_004c4200(CCrater * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_FUN_004c4200(CCrater *this_ptr)

{
  CDemonSet *pCVar1;
  float fVar2;
  char *pcVar3;
  char *pcVar4;
  uint *in_stack_00000008;
  float in_stack_0000000c;
  float local_54;
  uint local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (this_ptr->field0_0x0 + 0xc != (char *)in_stack_00000008) {
    *(uint *)(this_ptr->field0_0x0 + 0xc) = *in_stack_00000008;
    *(uint *)(this_ptr->field0_0x0 + 0x10) = in_stack_00000008[1];
    *(uint *)(this_ptr->field0_0x0 + 0x14) = in_stack_00000008[2];
  }
  core_fire_cpp_CCrater_render_FUN_004c4620(this_ptr);
  this_ptr->field0_0x0[0] = '\x01';
  pCVar1 = g_CDemonSetPtr;
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  this_ptr->field0_0x0[4] = '\0';
  this_ptr->field0_0x0[5] = '\0';
  this_ptr->field0_0x0[6] = '\0';
  this_ptr->field0_0x0[7] = '\0';
  this_ptr->field0_0x0[8] = -0x33;
  this_ptr->field0_0x0[9] = -0x34;
  this_ptr->field0_0x0[10] = -0x34;
  this_ptr->field0_0x0[0xb] = '=';
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0xc),0.0);
  *(float *)(this_ptr->field0_0x0 + 0x10) = local_14;
  pcVar3 = this_ptr->field0_0x0;
  do {
    local_18 = -in_stack_0000000c;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,in_stack_0000000c);
    *(float *)(pcVar3 + 0x1c) =
         local_14 * (float)0.5 + *(float *)(this_ptr->field0_0x0 + 0xc);
    *(uint *)(pcVar3 + 0x20) = *(uint *)(this_ptr->field0_0x0 + 0x10);
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,in_stack_0000000c);
    pcVar4 = pcVar3 + 0xc;
    *(float *)(pcVar3 + 0x24) =
         local_14 * (float)0.5 + *(float *)(this_ptr->field0_0x0 + 0x14);
    pcVar3 = pcVar4;
  } while (pcVar4 != this_ptr->field0_0x0 + 0x24);
  local_48 = *(float *)(this_ptr->field0_0x0 + 0xc) + local_18;
  local_44 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_40 = *(float *)(this_ptr->field0_0x0 + 0x14) + local_18;
  if ((float *)(this_ptr->field0_0x0 + 0x40) != &local_48) {
    *(float *)(this_ptr->field0_0x0 + 0x40) = local_48;
    *(uint *)(this_ptr->field0_0x0 + 0x44) = local_44;
    *(float *)(this_ptr->field0_0x0 + 0x48) = local_40;
  }
  local_24 = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000000c;
  local_20 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_1c = *(float *)(this_ptr->field0_0x0 + 0x14) + -in_stack_0000000c;
  if ((float *)(this_ptr->field0_0x0 + 0x4c) != &local_24) {
    *(float *)(this_ptr->field0_0x0 + 0x4c) = local_24;
    *(uint *)(this_ptr->field0_0x0 + 0x50) = local_20;
    *(float *)(this_ptr->field0_0x0 + 0x54) = local_1c;
  }
  local_3c = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000000c;
  local_38 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_34 = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000000c;
  if ((float *)(this_ptr->field0_0x0 + 0x58) != &local_3c) {
    *(float *)(this_ptr->field0_0x0 + 0x58) = local_3c;
    *(uint *)(this_ptr->field0_0x0 + 0x5c) = local_38;
    *(float *)(this_ptr->field0_0x0 + 0x60) = local_34;
  }
  local_30 = -in_stack_0000000c;
  local_2c = 0;
  local_54 = *(float *)(this_ptr->field0_0x0 + 0xc) + local_30;
  local_50 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_4c = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000000c;
  if ((float *)(this_ptr->field0_0x0 + 100) != &local_54) {
    *(float *)(this_ptr->field0_0x0 + 100) = local_54;
    *(uint *)(this_ptr->field0_0x0 + 0x68) = local_50;
    *(float *)(this_ptr->field0_0x0 + 0x6c) = local_4c;
  }
  local_14 = local_30;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,(CVector3f *)(this_ptr->field0_0x0 + 0x40),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x44) = local_14 + (float)0.14999999999999999;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x4c),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x50) = local_14 + (float)0.14999999999999999;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x58),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x5c) = local_14 + (float)0.14999999999999999;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 100),0.0);
  *(float *)(this_ptr->field0_0x0 + 0x68) = fVar2 + (float)0.14999999999999999;
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x44) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(uint *)(this_ptr->field0_0x0 + 0x44) = *(uint *)(this_ptr->field0_0x0 + 0x10);
  }
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x50) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(uint *)(this_ptr->field0_0x0 + 0x50) = *(uint *)(this_ptr->field0_0x0 + 0x10);
  }
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x5c) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(uint *)(this_ptr->field0_0x0 + 0x5c) = *(uint *)(this_ptr->field0_0x0 + 0x10);
  }
  if (ABS(*(float *)(this_ptr->field0_0x0 + 0x68) - *(float *)(this_ptr->field0_0x0 + 0x10)) <= 1.0)
  {
    return;
  }
  *(uint *)(this_ptr->field0_0x0 + 0x68) = *(uint *)(this_ptr->field0_0x0 + 0x10);
  return;
}
