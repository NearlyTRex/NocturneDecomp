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
  float fVar3;
  float fVar4;
  char *pcVar5;
  char *pcVar6;
  BADSPACEBASE *in_ESP;
  uint *in_stack_00000008;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  uint local_1c;
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
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0xc),0.0);
  *(float *)(this_ptr->field0_0x0 + 0x10) = fVar2;
  pcVar5 = this_ptr->field0_0x0;
  do {
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-in_stack_00000014,in_stack_00000014);
    *(float *)(pcVar5 + 0x1c) =
         fVar3 * (float)0.5 + *(float *)(this_ptr->field0_0x0 + 0xc);
    *(uint *)(pcVar5 + 0x20) = *(uint *)(this_ptr->field0_0x0 + 0x10);
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar2,in_stack_00000018);
    pcVar6 = pcVar5 + 0xc;
    *(float *)(pcVar5 + 0x24) =
         fVar4 * (float)0.5 + *(float *)(this_ptr->field0_0x0 + 0x14);
    pcVar5 = pcVar6;
  } while (pcVar6 != this_ptr->field0_0x0 + 0x24);
  local_38 = *(float *)(this_ptr->field0_0x0 + 0xc) + fVar3;
  local_34 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_30 = *(float *)(this_ptr->field0_0x0 + 0x14) + fVar3;
  if ((float *)(this_ptr->field0_0x0 + 0x40) != &local_38) {
    *(float *)(this_ptr->field0_0x0 + 0x40) = local_38;
    *(uint *)(this_ptr->field0_0x0 + 0x44) = local_34;
    *(float *)(this_ptr->field0_0x0 + 0x48) = local_30;
  }
  local_14 = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 0x4c) != &local_14) {
    *(float *)(this_ptr->field0_0x0 + 0x4c) = local_14;
    *(uint *)(this_ptr->field0_0x0 + 0x50) = *(uint *)(this_ptr->field0_0x0 + 0x10);
    *(float *)(this_ptr->field0_0x0 + 0x54) =
         *(float *)(this_ptr->field0_0x0 + 0x14) + -in_stack_0000001c;
  }
  local_2c = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000001c;
  local_28 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_24 = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 0x58) != &local_2c) {
    *(float *)(this_ptr->field0_0x0 + 0x58) = local_2c;
    *(uint *)(this_ptr->field0_0x0 + 0x5c) = local_28;
    *(float *)(this_ptr->field0_0x0 + 0x60) = local_24;
  }
  local_20 = -in_stack_0000001c;
  local_1c = 0;
  local_44 = *(float *)(this_ptr->field0_0x0 + 0xc) + local_20;
  local_40 = *(uint *)(this_ptr->field0_0x0 + 0x10);
  local_3c = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 100) != &local_44) {
    *(float *)(this_ptr->field0_0x0 + 100) = local_44;
    *(uint *)(this_ptr->field0_0x0 + 0x68) = local_40;
    *(float *)(this_ptr->field0_0x0 + 0x6c) = local_3c;
  }
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,(CVector3f *)(this_ptr->field0_0x0 + 0x40),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x44) = fVar2 + (float)0.14999999999999999;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x4c),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x50) = fVar2 + (float)0.14999999999999999;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x58),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x5c) = fVar2 + (float)0.14999999999999999;
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
