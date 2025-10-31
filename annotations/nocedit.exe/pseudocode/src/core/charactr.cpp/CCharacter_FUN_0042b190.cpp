// Name: core_charactr.cpp_CCharacter_FUN_0042b190
// Address: 0042b190
// Address Range: [[0042b190, 0042b2e8] [0042b566, 0042b5aa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b190(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c521 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03261388
//   undefined4 DAT_0326138c
//   undefined4 DAT_03261390
//   undefined4 DAT_03261394
//   undefined4 DAT_03261398
//   undefined4 DAT_0326139c
//   undefined4 DAT_032613c0
//   undefined4 DAT_032613c4
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b190(CCharacter *this_ptr)

{
  CDemonSet *pCVar1;
  float fVar2;
  CVector3f *euler_angles;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  float *pfVar6;
  undefined4 *puVar7;
  byte bVar8;
  CMatrix3x4f *pCStack00000008;
  CMatrix3x4f *pCStack00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  float in_stack_fffffd28;
  float in_stack_fffffd2c;
  CMatrix3x4f *in_stack_fffffd30;
  CMatrix3x4f *in_stack_fffffd34;
  CMatrix3x4f *in_stack_fffffd38;
  CMatrix3x4f *in_stack_fffffd3c;
  CMatrix3x4f *in_stack_fffffd44;
  CMatrix3x4f *in_stack_fffffd48;
  CMatrix3x4f *in_stack_fffffd4c;
  undefined4 auStack_29c [20];
  undefined4 auStack_24c [4];
  undefined4 auStack_23c [17];
  undefined4 uStack_1f8;
  CMatrix3x4f CStack_1f4;
  undefined4 auStack_1c0 [8];
  undefined4 auStack_1a0 [10];
  undefined4 uStack_178;
  CMatrix3x4f CStack_174;
  undefined4 auStack_144 [12];
  undefined4 uStack_114;
  CMatrix3x4f CStack_110;
  undefined1 local_dc [56];
  undefined4 uStack_a4;
  undefined1 auStack_a0 [36];
  float local_7c [2];
  CMatrix3x4f CStack_74;
  float local_40;
  CVector3f CStack_3c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  char *local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar8 = 0;
  iVar3 = *(int *)(this_ptr->cloth_data + 0x35c);
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->field11_0x14d148)) {
    *(int *)(this_ptr->cloth_data + 0x35c) = *(int *)(this_ptr->cloth_data + 0x35c) + 1;
    local_18 = this_ptr->cloth_data + iVar3 * 0x38 + 0x360;
    *(int *)local_18 = pCVar1->field11_0x14d148;
    iVar3 = pCVar1->field12_0x14d14c;
    *(int *)(local_18 + 4) = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(this_ptr->base_actor).metadata.vtable[1].getBlockVirtualDirectorFlag)
                        (&this_ptr->base_actor);
      *(int *)(unaff_EDI + 4) = iVar3;
    }
    local_40 = (g_CDemonSetPtr->collision_result_vec2).x - (g_CDemonSetPtr->collision_result_vec1).x
    ;
    CStack_3c.x = (g_CDemonSetPtr->collision_result_vec2).y -
                  (g_CDemonSetPtr->collision_result_vec1).y;
    CStack_3c.y = (g_CDemonSetPtr->collision_result_vec2).z -
                  (g_CDemonSetPtr->collision_result_vec1).z;
    local_20 = SQRT(CStack_3c.y * CStack_3c.y + CStack_3c.x * CStack_3c.x + local_40 * local_40);
    if (local_20 <= 0.0) {
      local_24 = 0.0;
      local_30.z = 0.0;
      local_20 = 0.0;
    }
    else {
      local_20 = 1.0 / local_20;
      local_30.z = local_40 * local_20;
      local_24 = CStack_3c.x * local_20;
      local_20 = CStack_3c.y * local_20;
    }
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.3,0.6);
    local_24 = local_24 * fVar2;
    local_20 = local_20 * fVar2;
    local_1c = local_1c * fVar2;
    local_18 = (char *)((g_CDemonSetPtr->collision_result_vec3).x - local_24);
    local_14 = (g_CDemonSetPtr->collision_result_vec3).y - local_20;
    euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_30,&CStack_3c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)(auStack_a0 + 8),(CVector3f *)&local_14,euler_angles);
    pCStack00000008 =
         (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(pCStack00000008,in_stack_fffffd28);
    puVar5 = auStack_23c;
    puVar7 = auStack_29c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    pCStack00000010 =
         (CMatrix3x4f *)core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(pCStack00000010,in_stack_fffffd2c);
    puVar5 = auStack_144;
    puVar7 = &uStack_178;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_174,in_stack_fffffd30,in_stack_fffffd34);
    puVar5 = auStack_1a0;
    puVar7 = &uStack_114;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_110,in_stack_fffffd38,in_stack_fffffd3c);
    pfVar4 = &CStack_74.m[2].y;
    pfVar6 = local_7c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)local_dc,&(this_ptr->base_actor).location.position,
               (CVector3f *)&(this_ptr->base_actor).orient);
    core_xform_cpp_inverse_FUN_005f6210
              ((CMatrix3x4f *)
               ((this_ptr->model).padding_0x0 + *(int *)(in_stack_0000001c + 4) * 0x30 + 0xe80),
               in_stack_fffffd44);
    puVar5 = (undefined4 *)&stack0xfffffd4c;
    puVar7 = &uStack_1f8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&CStack_74,(CMatrix3x4f *)(local_dc + 8),&CStack_1f4);
    puVar5 = auStack_1c0;
    puVar7 = &uStack_a4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)auStack_a0,in_stack_fffffd48,in_stack_fffffd4c);
    puVar5 = auStack_24c;
    puVar7 = (undefined4 *)(in_stack_00000028 + 8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
  }
  return;
}


// Assembly code:
// 0042b190: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b190
// 0042b191: PUSH ESI
// 0042b192: PUSH EDI
// 0042b193: PUSH EBP
// 0042b194: MOV EBP,ESP
// 0042b196: SUB ESP,0x2e0
// 0042b19c: AND ESP,0xfffffff8
// 0042b19f: MOV EBX,dword ptr [EBP + 0x14]
// 0042b1a2: MOV EDX,dword ptr [EBX + 0x2df4]
// 0042b1a8: CMP EDX,0x5
// 0042b1ab: JGE 0x0042b566
//   XREF to: 0042b566 (CONDITIONAL_JUMP)
// 0042b1b1: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042b1b7: CMP dword ptr [ECX + 0x14d148],0x0
//   XREF to: 032613c0 (READ)
// 0042b1be: JL 0x0042b566
//   XREF to: 0042b566 (CONDITIONAL_JUMP)
// 0042b1c4: LEA EAX,[EDX*0x8 + 0x0]
// 0042b1cb: MOV EDI,dword ptr [EBX + 0x2df4]
// 0042b1d1: MOV EDX,EAX
// 0042b1d3: SHL EAX,0x3
// 0042b1d6: INC EDI
// 0042b1d7: SUB EAX,EDX
// 0042b1d9: LEA EDX,[EBX + 0x2df8]
// 0042b1df: MOV dword ptr [EBX + 0x2df4],EDI
// 0042b1e5: ADD EDX,EAX
// 0042b1e7: MOV EAX,dword ptr [ECX + 0x14d148]
//   XREF to: 032613c0 (READ)
// 0042b1ed: MOV dword ptr [EDX],EAX
// 0042b1ef: MOV EAX,dword ptr [ECX + 0x14d14c]
//   XREF to: 032613c4 (READ)
// 0042b1f5: MOV dword ptr [ESP + 0x2d8],EDX
// 0042b1fc: MOV dword ptr [EDX + 0x4],EAX
// 0042b1ff: TEST EAX,EAX
// 0042b201: JL 0x0042b56d
//   XREF to: 0042b56d (CONDITIONAL_JUMP)
// 0042b207: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_0042b207
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042b20d: LEA EAX,[EDX + 0x14d11c]
//   XREF to: 03261394 (DATA)
// 0042b213: FLD float ptr [EAX]
//   XREF to: 03261394 (READ)
// 0042b215: FSUB float ptr [EDX + 0x14d110]
//   XREF to: 03261388 (READ)
// 0042b21b: FSTP float ptr [ESP + 0x2a4]
// 0042b222: FLD float ptr [EAX + 0x4]
//   XREF to: 03261398 (READ)
// 0042b225: FSUB float ptr [EDX + 0x14d114]
//   XREF to: 0326138c (READ)
// 0042b22b: FSTP float ptr [ESP + 0x2a8]
// 0042b232: FLD float ptr [EAX + 0x8]
//   XREF to: 0326139c (READ)
// 0042b235: MOV EAX,dword ptr [ESP + 0x2a4]
// 0042b23c: FSUB float ptr [EDX + 0x14d118]
//   XREF to: 03261390 (READ)
// 0042b242: MOV dword ptr [ESP + 0x2bc],EAX
// 0042b249: MOV EAX,dword ptr [ESP + 0x2a8]
// 0042b250: MOV dword ptr [ESP + 0x2c0],EAX
// 0042b257: FLD float ptr [ESP + 0x2c0]
// 0042b25e: FMUL ST0
// 0042b260: FLD float ptr [ESP + 0x2bc]
// 0042b267: FMUL ST0
// 0042b269: FXCH ST2
// 0042b26b: FSTP float ptr [ESP + 0x2ac]
// 0042b272: MOV EAX,dword ptr [ESP + 0x2ac]
// 0042b279: FADDP
// 0042b27b: MOV dword ptr [ESP + 0x2c4],EAX
// 0042b282: FLD float ptr [ESP + 0x2c4]
// 0042b289: FMUL ST0
// 0042b28b: FADDP
// 0042b28d: FSQRT
// 0042b28f: FST float ptr [ESP]
// 0042b292: FLDZ
// 0042b294: FCOMPP
// 0042b296: FNSTSW AX
// 0042b298: SAHF
// 0042b299: JNC 0x0042b58f
//   XREF to: 0042b58f (CONDITIONAL_JUMP)
// 0042b29f: FLD1
// 0042b2a1: FLD float ptr [ESP + 0x2bc]
// 0042b2a8: FXCH
// 0042b2aa: FDIV float ptr [ESP]
// 0042b2ad: FXCH
// 0042b2af: FMUL ST1
// 0042b2b1: FLD float ptr [ESP + 0x2c0]
// 0042b2b8: FMUL ST2
// 0042b2ba: FLD float ptr [ESP + 0x2c4]
// 0042b2c1: FMULP ST3
// 0042b2c3: FXCH
// 0042b2c5: FSTP float ptr [ESP + 0x2bc]
// 0042b2cc: FSTP float ptr [ESP + 0x2c0]
// 0042b2d3: FSTP float ptr [ESP + 0x2c4]
// 0042b2da: PUSH 0x3f19999a
//   Label: LAB_0042b2da
// 0042b2df: PUSH 0x3e99999a
// 0042b2e4: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0042b566: MOV ESP,EBP
//   Label: LAB_0042b566
// 0042b568: POP EBP
// 0042b569: POP EDI
// 0042b56a: POP ESI
// 0042b56b: POP EBX
// 0042b56c: RET
// 0042b56d: MOV ECX,dword ptr [EDX]
//   Label: LAB_0042b56d
// 0042b56f: PUSH ECX
// 0042b570: MOV EAX,dword ptr [EBX + 0x154]
// 0042b576: PUSH EBX
// 0042b577: CALL dword ptr [EAX + 0x12c]
// 0042b57d: ADD ESP,0x8
// 0042b580: MOV EDX,dword ptr [ESP + 0x2d8]
// 0042b587: MOV dword ptr [EDX + 0x4],EAX
// 0042b58a: JMP 0x0042b207
//   XREF to: 0042b207 (UNCONDITIONAL_JUMP)
// 0042b58f: XOR ESI,ESI
//   Label: LAB_0042b58f
// 0042b591: MOV dword ptr [ESP + 0x2c0],ESI
// 0042b598: MOV dword ptr [ESP + 0x2bc],ESI
// 0042b59f: MOV dword ptr [ESP + 0x2c4],ESI
// 0042b5a6: JMP 0x0042b2da
//   XREF to: 0042b2da (UNCONDITIONAL_JUMP)
