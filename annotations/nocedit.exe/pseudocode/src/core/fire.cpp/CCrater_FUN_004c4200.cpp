// Name: core_fire.cpp_CCrater_FUN_004c4200
// Address: 004c4200
// Address Range: [[004c4200, 004c4287]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_FUN_004c4200(CCrater * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8ea0 (004c8ea0) at 004c8ebe [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_fire.cpp_CCrater_FUN_004c4620
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0

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
  undefined4 *in_stack_00000008;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_14;
  
  if (this_ptr->field0_0x0 + 0xc != (char *)in_stack_00000008) {
    *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = *in_stack_00000008;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = in_stack_00000008[1];
    *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = in_stack_00000008[2];
  }
  core_fire_cpp_CCrater_FUN_004c4620(this_ptr);
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
         fVar3 * (float)DOUBLE_00629e33 + *(float *)(this_ptr->field0_0x0 + 0xc);
    *(undefined4 *)(pcVar5 + 0x20) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar2,in_stack_00000018);
    pcVar6 = pcVar5 + 0xc;
    *(float *)(pcVar5 + 0x24) =
         fVar4 * (float)DOUBLE_00629e33 + *(float *)(this_ptr->field0_0x0 + 0x14);
    pcVar5 = pcVar6;
  } while (pcVar6 != this_ptr->field0_0x0 + 0x24);
  local_38 = *(float *)(this_ptr->field0_0x0 + 0xc) + fVar3;
  local_34 = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  local_30 = *(float *)(this_ptr->field0_0x0 + 0x14) + fVar3;
  if ((float *)(this_ptr->field0_0x0 + 0x40) != &local_38) {
    *(float *)(this_ptr->field0_0x0 + 0x40) = local_38;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x44) = local_34;
    *(float *)(this_ptr->field0_0x0 + 0x48) = local_30;
  }
  local_14 = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 0x4c) != &local_14) {
    *(float *)(this_ptr->field0_0x0 + 0x4c) = local_14;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x50) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
    *(float *)(this_ptr->field0_0x0 + 0x54) =
         *(float *)(this_ptr->field0_0x0 + 0x14) + -in_stack_0000001c;
  }
  local_2c = *(float *)(this_ptr->field0_0x0 + 0xc) + in_stack_0000001c;
  local_28 = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  local_24 = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 0x58) != &local_2c) {
    *(float *)(this_ptr->field0_0x0 + 0x58) = local_2c;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x5c) = local_28;
    *(float *)(this_ptr->field0_0x0 + 0x60) = local_24;
  }
  local_20 = -in_stack_0000001c;
  local_1c = 0;
  local_44 = *(float *)(this_ptr->field0_0x0 + 0xc) + local_20;
  local_40 = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  local_3c = *(float *)(this_ptr->field0_0x0 + 0x14) + in_stack_0000001c;
  if ((float *)(this_ptr->field0_0x0 + 100) != &local_44) {
    *(float *)(this_ptr->field0_0x0 + 100) = local_44;
    *(undefined4 *)(this_ptr->field0_0x0 + 0x68) = local_40;
    *(float *)(this_ptr->field0_0x0 + 0x6c) = local_3c;
  }
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,(CVector3f *)(this_ptr->field0_0x0 + 0x40),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x44) = fVar2 + (float)DOUBLE_00629e3b;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x4c),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x50) = fVar2 + (float)DOUBLE_00629e3b;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 0x58),0.0);
  pCVar1 = g_CDemonSetPtr;
  *(float *)(this_ptr->field0_0x0 + 0x5c) = fVar2 + (float)DOUBLE_00629e3b;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar1,(CVector3f *)(this_ptr->field0_0x0 + 100),0.0);
  *(float *)(this_ptr->field0_0x0 + 0x68) = fVar2 + (float)DOUBLE_00629e3b;
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x44) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(undefined4 *)(this_ptr->field0_0x0 + 0x44) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  }
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x50) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(undefined4 *)(this_ptr->field0_0x0 + 0x50) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  }
  if (1.0 < ABS(*(float *)(this_ptr->field0_0x0 + 0x5c) - *(float *)(this_ptr->field0_0x0 + 0x10)))
  {
    *(undefined4 *)(this_ptr->field0_0x0 + 0x5c) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  }
  if (ABS(*(float *)(this_ptr->field0_0x0 + 0x68) - *(float *)(this_ptr->field0_0x0 + 0x10)) <= 1.0)
  {
    return;
  }
  *(undefined4 *)(this_ptr->field0_0x0 + 0x68) = *(undefined4 *)(this_ptr->field0_0x0 + 0x10);
  return;
}


// Assembly code:
// 004c4200: PUSH EBX
//   Label: core_fire.cpp_CCrater_FUN_004c4200
// 004c4201: PUSH ESI
// 004c4202: PUSH EDI
// 004c4203: PUSH EBP
// 004c4204: SUB ESP,0x68
// 004c4207: MOV ESI,dword ptr [ESP + 0x7c]
// 004c420b: MOV EBX,dword ptr [ESP + 0x80]
// 004c4212: LEA EAX,[ESI + 0xc]
// 004c4215: CMP EAX,EBX
// 004c4217: JZ 0x004c4229
//   XREF to: 004c4229 (CONDITIONAL_JUMP)
// 004c4219: MOV EDX,dword ptr [EBX]
// 004c421b: MOV dword ptr [EAX],EDX
// 004c421d: MOV EDX,dword ptr [EBX + 0x4]
// 004c4220: MOV dword ptr [EAX + 0x4],EDX
// 004c4223: MOV EDX,dword ptr [EBX + 0x8]
// 004c4226: MOV dword ptr [EAX + 0x8],EDX
// 004c4229: PUSH ESI
//   Label: LAB_004c4229
// 004c422a: CALL core_fire.cpp_CCrater_FUN_004c4620
//   XREF to: 004c4620 (UNCONDITIONAL_CALL)
// 004c422f: ADD ESP,0x4
// 004c4232: LEA EAX,[ESI + 0xc]
// 004c4235: PUSH 0x0
// 004c4237: MOV dword ptr [ESI],0x1
// 004c423d: PUSH EAX
// 004c423e: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004c4244: MOV dword ptr [ESI + 0x4],0x0
// 004c424b: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004c424c: MOV dword ptr [ESI + 0x8],0x3dcccccd
// 004c4253: MOV EBX,ESI
// 004c4255: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 004c425a: MOV dword ptr [ESP + 0x70],EAX
// 004c425e: LEA EDI,[ESI + 0x24]
// 004c4261: MOV EAX,dword ptr [ESP + 0x70]
// 004c4265: MOV dword ptr [ESI + 0x10],EAX
// 004c4268: ADD ESP,0xc
// 004c426b: PUSH dword ptr [ESP + 0x84]
//   Label: LAB_004c426b
// 004c4272: FLD float ptr [ESP + 0x88]
// 004c4279: FCHS
// 004c427b: FSTP float ptr [ESP + 0x64]
// 004c427f: PUSH dword ptr [ESP + 0x64]
// 004c4283: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
