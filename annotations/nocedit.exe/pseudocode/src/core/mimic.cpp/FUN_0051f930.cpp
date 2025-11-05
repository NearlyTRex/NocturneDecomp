// Name: core_mimic.cpp_FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051fcb8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_0051f930()
// Cross-references:
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f894 [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
//   core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_0051f930(undefined4 param_1) */

void core_mimic_cpp_FUN_0051f930(void)

{
  CQuaternion4f *pCVar1;
  CHero *pCVar2;
  int iVar3;
  CSkeleton *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  SBoneTransformData *pSVar10;
  BADSPACEBASE *in_ESP;
  float fVar11;
  CMatrix3x4f *pCVar12;
  float fVar13;
  undefined4 *puVar14;
  undefined4 unaff_EDI;
  undefined4 *puVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 *puVar18;
  byte bVar19;
  float in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_0000002c;
  int in_stack_00000030;
  CMatrix3x4f *in_stack_fffffd40;
  CMatrix3x4f *in_stack_fffffd44;
  CMatrix3x4f *in_stack_fffffd48;
  CMatrix3x4f *in_stack_fffffd4c;
  CMatrix3x4f *in_stack_fffffd50;
  CMatrix3x4f *in_stack_fffffd54;
  undefined4 uStack_290;
  CMatrix3x4f CStack_28c;
  undefined4 uStack_258;
  CMatrix3x4f CStack_254;
  undefined4 uStack_220;
  CMatrix3x4f CStack_21c;
  undefined4 auStack_1c4 [13];
  undefined4 auStack_190 [13];
  undefined4 auStack_15c [13];
  undefined4 auStack_128 [3];
  undefined1 auStack_11c [56];
  undefined1 auStack_e4 [44];
  CMatrix3x4f CStack_b8;
  undefined4 auStack_7c [14];
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  CVector3f CStack_38;
  undefined4 local_2c;
  undefined4 uStack_1c;
  int local_14;
  
  bVar19 = 0;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)((int)in_stack_00000004 + 0x158));
  local_14 = pCVar4->bone_count;
  pfVar9 = (float *)((int)in_stack_00000008 + 0x1b0);
  fVar11 = in_stack_00000008;
  fVar13 = in_stack_00000008;
  for (iVar5 = 0; iVar3 = g_LocalHeroIndex, iVar5 < local_14; iVar5 = iVar5 + 1) {
    pCVar1 = (g_HeroActors[g_LocalHeroIndex]->base_character).model.bone_transform.bone_rotations +
             iVar5;
    puVar15 = (undefined4 *)((int)fVar11 + 0x80c + (uint)bVar19 * -8);
    puVar14 = (undefined4 *)((int)pCVar1 + ((uint)bVar19 * -2 + 1) * 4);
    *(float *)((int)fVar11 + 0x808) = pCVar1->w;
    puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
    puVar18 = puVar14 + (uint)bVar19 * -2 + 1;
    *puVar15 = *puVar14;
    *puVar16 = *puVar18;
    puVar16[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
    pCVar12 = (g_HeroActors[iVar3]->base_character).model.bone_transform.bone_world_matrices + iVar5
    ;
    puVar14 = (undefined4 *)((int)fVar13 + 0xfd8);
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = pCVar12->m[0].w;
      pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
    }
    pCVar6 = (g_HeroActors[iVar3]->base_character).model.transformed_vertices + iVar5;
    if ((CVector3f *)pfVar9 != pCVar6) {
      *pfVar9 = pCVar6->x;
      pfVar9[1] = pCVar6->y;
      pfVar9[2] = pCVar6->z;
    }
    fVar11 = (float)((int)fVar11 + 0x10);
    fVar13 = (float)((int)fVar13 + 0x30);
    pfVar9 = pfVar9 + 3;
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar10 = &(pCVar2->base_character).model.bone_transform;
  if ((SBoneTransformData *)((int)in_stack_00000008 + 0x7fc) != pSVar10) {
    *(float *)((int)in_stack_00000008 + 0x7fc) = (pSVar10->root_position).x;
    *(float *)((int)in_stack_00000008 + 0x800) =
         (pCVar2->base_character).model.bone_transform.root_position.y;
    *(float *)((int)in_stack_00000008 + 0x804) =
         (pCVar2->base_character).model.bone_transform.root_position.z;
  }
  *(undefined4 *)((int)in_stack_00000008 + 0x2388) = 0xffffffff;
  iVar5 = *(int *)((g_HeroActors[g_LocalHeroIndex]->base_character).cloth_data + 400);
  puVar14 = *(undefined4 **)(iVar5 + 0x10c);
  puVar18 = *(undefined4 **)((int)in_stack_00000008 + 0xc090);
  for (uVar7 = (uint)(*(int *)(iVar5 + 0x104) * 0xc) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar18 = *puVar14;
    puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
    puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar18 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar19 * -2 + 1);
    puVar18 = (undefined4 *)((int)puVar18 + (uint)bVar19 * -2 + 1);
  }
  iVar5 = *(int *)((int)in_stack_00000008 + 0x4bdf8);
  if (iVar5 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              ((CMatrix3x4f *)auStack_11c,(CVector3f *)(iVar5 + 0x20),(CVector3f *)(iVar5 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&CStack_b8,(CVector3f *)(*(int *)((int)in_stack_0000000c + 0x4bdf8) + 0x20),
               (CVector3f *)(*(int *)((int)in_stack_0000000c + 0x4bdf8) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_e4,
               &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.position,
               (CVector3f *)&(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.orient);
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)&CStack_b8.m[0].y);
    puVar14 = auStack_7c;
    puVar18 = &uStack_290;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_e4 + 8),(CMatrix3x4f *)(auStack_11c + 0x10),&CStack_28c);
    pfVar9 = &CStack_21c.m[2].x;
    pfVar17 = (float *)&stack0xfffffd44;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar17 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar19 * -2 + 1;
      pfVar17 = pfVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)&stack0xfffffd48,in_stack_fffffd40,in_stack_fffffd44);
    puVar14 = auStack_1c4;
    puVar18 = &uStack_258;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_254,in_stack_fffffd48,in_stack_fffffd4c);
    puVar14 = auStack_190;
    puVar18 = &local_44;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0((CMatrix3x4f *)0x0,(float)auStack_40);
    puVar14 = auStack_15c;
    puVar18 = &uStack_220;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_21c,in_stack_fffffd50,in_stack_fffffd54);
    puVar14 = auStack_128;
    puVar18 = &uStack_3c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar18 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
    }
    *(undefined4 *)(in_stack_0000002c + 0x20) = local_2c;
    *(undefined4 *)(in_stack_0000002c + 0x24) = uStack_1c;
    *(undefined4 *)(in_stack_0000002c + 0x28) = unaff_EDI;
    pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       (&CStack_38,(CMatrix3x3f *)&stack0x00000004);
    if ((CVector3f *)(in_stack_00000030 + 0x30) != pCVar6) {
      ((CVector3f *)(in_stack_00000030 + 0x30))->x = pCVar6->x;
      *(float *)(in_stack_00000030 + 0x34) = pCVar6->y;
      *(float *)(in_stack_00000030 + 0x38) = pCVar6->z;
      return;
    }
  }
  return;
}


// Assembly code:
// 0051f930: PUSH EBX
//   Label: core_mimic.cpp_FUN_0051f930
// 0051f931: PUSH ESI
// 0051f932: PUSH EDI
// 0051f933: PUSH EBP
// 0051f934: SUB ESP,0x2c0
// 0051f93a: MOV EAX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051f941: ADD EAX,0x158
// 0051f946: PUSH EAX
// 0051f947: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0051f94c: ADD ESP,0x4
// 0051f94f: MOV EAX,dword ptr [EAX + 0x28558]
// 0051f955: MOV EDX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051f95c: MOV ECX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051f963: MOV dword ptr [ESP + 0x2b8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051f96a: ADD EDX,0x1b0
// 0051f970: MOV dword ptr [ESP + 0x2bc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0051f977: MOV EBP,ECX
// 0051f979: XOR EAX,EAX
// 0051f97b: MOV EBX,dword ptr [0x02db87d0]
//   Label: LAB_0051f97b
//   XREF to: 02db87d0 (READ)
// 0051f981: MOV ECX,dword ptr [ESP + 0x2b8]
//   XREF to: Stack[-0x18] (READ)
// 0051f988: SHL EBX,0x2
// 0051f98b: CMP EAX,ECX
// 0051f98d: JL 0x0051fa37
//   XREF to: 0051fa37 (CONDITIONAL_JUMP)
// 0051f993: MOV EAX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051f99a: MOV EDX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f9a0: ADD EAX,0x7fc
// 0051f9a5: ADD EDX,0x7fc
// 0051f9ab: CMP EAX,EDX
// 0051f9ad: JZ 0x0051f9bf
//   XREF to: 0051f9bf (CONDITIONAL_JUMP)
// 0051f9af: MOV ECX,dword ptr [EDX]
// 0051f9b1: MOV dword ptr [EAX],ECX
// 0051f9b3: MOV ECX,dword ptr [EDX + 0x4]
// 0051f9b6: MOV dword ptr [EAX + 0x4],ECX
// 0051f9b9: MOV ECX,dword ptr [EDX + 0x8]
// 0051f9bc: MOV dword ptr [EAX + 0x8],ECX
// 0051f9bf: MOV EAX,dword ptr [ESP + 0x2d4]
//   Label: LAB_0051f9bf
//   XREF to: Stack[0x4] (READ)
// 0051f9c6: MOV dword ptr [EAX + 0x2388],0xffffffff
// 0051f9d0: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051f9d5: MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f9dc: MOV ESI,dword ptr [ESI + 0x2c28]
// 0051f9e2: MOV EDX,dword ptr [ESI + 0x104]
// 0051f9e8: MOV EDI,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051f9ef: LEA ECX,[EDX*0x4 + 0x0]
// 0051f9f6: MOV EDI,dword ptr [EDI + 0xc090]
// 0051f9fc: SUB ECX,EDX
// 0051f9fe: MOV ESI,dword ptr [ESI + 0x10c]
// 0051fa04: SHL ECX,0x2
// 0051fa07: PUSH EDI
// 0051fa08: MOV EAX,ECX
// 0051fa0a: SHR ECX,0x2
// 0051fa0d: MOVSD.REP ES:EDI,ESI
// 0051fa0f: MOV CL,AL
// 0051fa11: AND CL,0x3
// 0051fa14: MOVSB.REP ES:EDI,ESI
// 0051fa16: POP EDI
// 0051fa17: MOV EAX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051fa1e: MOV EBX,dword ptr [EAX + 0x4bdf8]
// 0051fa24: TEST EBX,EBX
// 0051fa26: JNZ 0x0051faba
//   XREF to: 0051faba (CONDITIONAL_JUMP)
// 0051fa2c: ADD ESP,0x2c0
//   Label: LAB_0051fa2c
// 0051fa32: POP EBP
// 0051fa33: POP EDI
// 0051fa34: POP ESI
// 0051fa35: POP EBX
// 0051fa36: RET
// 0051fa37: MOV ESI,EAX
//   Label: LAB_0051fa37
// 0051fa39: MOV ECX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fa3f: SHL ESI,0x4
// 0051fa42: LEA EDI,[EBP + 0x808]
// 0051fa48: LEA ESI,[ECX + ESI*0x1 + 0x808]
// 0051fa4f: MOVSD ES:EDI,ESI
// 0051fa50: MOVSD ES:EDI,ESI
// 0051fa51: MOVSD ES:EDI,ESI
// 0051fa52: MOVSD ES:EDI,ESI
// 0051fa53: IMUL ESI,EAX,0x30
// 0051fa56: MOV ECX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fa5c: MOV EDI,dword ptr [ESP + 0x2bc]
//   XREF to: Stack[-0x14] (READ)
// 0051fa63: ADD ESI,ECX
// 0051fa65: LEA EDI,[EDI + 0xfd8]
// 0051fa6b: MOV ECX,0xc
// 0051fa70: LEA ESI,[ESI + 0xfd8]
// 0051fa76: MOVSD.REP ES:EDI,ESI
// 0051fa78: MOV ECX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fa7e: IMUL EBX,EAX,0xc
// 0051fa81: ADD ECX,0x1b0
// 0051fa87: ADD ECX,EBX
// 0051fa89: CMP EDX,ECX
// 0051fa8b: JZ 0x0051fa9d
//   XREF to: 0051fa9d (CONDITIONAL_JUMP)
// 0051fa8d: MOV EBX,dword ptr [ECX]
// 0051fa8f: MOV dword ptr [EDX],EBX
// 0051fa91: MOV EBX,dword ptr [ECX + 0x4]
// 0051fa94: MOV dword ptr [EDX + 0x4],EBX
// 0051fa97: MOV EBX,dword ptr [ECX + 0x8]
// 0051fa9a: MOV dword ptr [EDX + 0x8],EBX
// 0051fa9d: MOV ESI,dword ptr [ESP + 0x2bc]
//   Label: LAB_0051fa9d
//   XREF to: Stack[-0x14] (READ)
// 0051faa4: ADD EBP,0x10
// 0051faa7: INC EAX
// 0051faa8: ADD ESI,0x30
// 0051faab: ADD EDX,0xc
// 0051faae: MOV dword ptr [ESP + 0x2bc],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0051fab5: JMP 0x0051f97b
//   XREF to: 0051f97b (UNCONDITIONAL_JUMP)
// 0051faba: LEA EDX,[EBX + 0x30]
//   Label: LAB_0051faba
// 0051fabd: PUSH EDX
// 0051fabe: LEA EAX,[EBX + 0x20]
// 0051fac1: PUSH EAX
// 0051fac2: LEA EAX,[ESP + 0x1b8]
//   XREF to: Stack[-0x120] (DATA)
// 0051fac9: PUSH EAX
// 0051faca: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0051facf: ADD ESP,0xc
// 0051fad2: MOV EAX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051fad9: MOV EAX,dword ptr [EAX + 0x4bdf8]
// 0051fadf: LEA EDX,[EAX + 0x30]
// 0051fae2: PUSH EDX
// 0051fae3: ADD EAX,0x20
// 0051fae6: PUSH EAX
// 0051fae7: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0xc0] (DATA)
// 0051faee: PUSH EAX
// 0051faef: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0051faf4: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051faf9: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051fb00: ADD ESP,0xc
// 0051fb03: LEA EDX,[EAX + 0x30]
// 0051fb06: PUSH EDX
// 0051fb07: ADD EAX,0x20
// 0051fb0a: PUSH EAX
// 0051fb0b: LEA EAX,[ESP + 0x1e8]
//   XREF to: Stack[-0xf0] (DATA)
// 0051fb12: PUSH EAX
// 0051fb13: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0051fb18: ADD ESP,0xc
// 0051fb1b: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0xc0] (DATA)
// 0051fb22: PUSH EAX
// 0051fb23: LEA ESI,[ESP + 0x244]
//   XREF to: Stack[-0x90] (DATA)
// 0051fb2a: PUSH 0x0
// 0051fb2c: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0x2a0] (DATA)
// 0051fb30: CALL core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
//   XREF to: 005f6fa0 (UNCONDITIONAL_CALL)
// 0051fb35: ADD ESP,0x4
// 0051fb38: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x2a0] (DATA)
// 0051fb3c: MOV ECX,0xc
// 0051fb41: PUSH EAX
// 0051fb42: LEA EAX,[ESP + 0x1b8]
//   XREF to: Stack[-0x120] (DATA)
// 0051fb49: LEA ESI,[ESP + 0x248]
//   XREF to: Stack[-0x90] (DATA)
// 0051fb50: PUSH EAX
// 0051fb51: LEA EAX,[ESP + 0x1ec]
//   XREF to: Stack[-0xf0] (DATA)
// 0051fb58: MOVSD.REP ES:EDI,ESI
// 0051fb5a: PUSH EAX
// 0051fb5b: LEA ESI,[ESP + 0xd0]
//   XREF to: Stack[-0x210] (DATA)
// 0051fb62: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0x2d0] (DATA)
// 0051fb66: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0051fb6b: MOV ECX,0xc
// 0051fb70: LEA ESI,[ESP + 0xd0]
//   XREF to: Stack[-0x210] (DATA)
// 0051fb77: ADD ESP,0x8
// 0051fb7a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2d0] (DATA)
// 0051fb7e: MOVSD.REP ES:EDI,ESI
// 0051fb80: PUSH EAX
// 0051fb81: LEA ESI,[ESP + 0xfc]
//   XREF to: Stack[-0x1e0] (DATA)
// 0051fb88: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x270] (DATA)
// 0051fb8c: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0051fb91: MOV ECX,0xc
// 0051fb96: LEA ESI,[ESP + 0xfc]
//   XREF to: Stack[-0x1e0] (DATA)
// 0051fb9d: ADD ESP,0x8
// 0051fba0: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x270] (DATA)
// 0051fba4: MOVSD.REP ES:EDI,ESI
// 0051fba6: PUSH EAX
// 0051fba7: LEA ESI,[ESP + 0x128]
//   XREF to: Stack[-0x1b0] (DATA)
// 0051fbae: LEA EDI,[ESP + 0x278]
//   XREF to: Stack[-0x60] (DATA)
// 0051fbb5: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0051fbba: MOV ECX,0xc
// 0051fbbf: ADD ESP,0x8
// 0051fbc2: LEA EAX,[ESP + 0x270]
//   XREF to: Stack[-0x60] (DATA)
// 0051fbc9: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0x1b0] (DATA)
// 0051fbd0: PUSH EAX
// 0051fbd1: MOVSD.REP ES:EDI,ESI
// 0051fbd3: PUSH 0x0
// 0051fbd5: LEA ESI,[ESP + 0x158]
//   XREF to: Stack[-0x180] (DATA)
// 0051fbdc: LEA EDI,[ESP + 0x98]
//   XREF to: Stack[-0x240] (DATA)
// 0051fbe3: CALL core_xform.cpp_buildXFlipMatrix_FUN_005f6ee0
//   XREF to: 005f6ee0 (UNCONDITIONAL_CALL)
// 0051fbe8: MOV ECX,0xc
// 0051fbed: LEA ESI,[ESP + 0x158]
//   XREF to: Stack[-0x180] (DATA)
// 0051fbf4: ADD ESP,0x4
// 0051fbf7: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x240] (DATA)
// 0051fbfe: MOVSD.REP ES:EDI,ESI
// 0051fc00: PUSH EAX
// 0051fc01: LEA ESI,[ESP + 0x188]
//   XREF to: Stack[-0x150] (DATA)
// 0051fc08: LEA EDI,[ESP + 0x278]
//   XREF to: Stack[-0x60] (DATA)
// 0051fc0f: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0051fc14: MOV ECX,0xc
// 0051fc19: LEA ESI,[ESP + 0x188]
//   XREF to: Stack[-0x150] (DATA)
// 0051fc20: ADD ESP,0x8
// 0051fc23: MOVSD.REP ES:EDI,ESI
// 0051fc25: MOV EAX,dword ptr [ESP + 0x27c]
//   XREF to: Stack[-0x54] (READ)
// 0051fc2c: MOV dword ptr [ESP + 0x2a0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0051fc33: MOV EAX,dword ptr [ESP + 0x28c]
//   XREF to: Stack[-0x44] (READ)
// 0051fc3a: MOV dword ptr [ESP + 0x2a4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051fc41: MOV EAX,dword ptr [ESP + 0x29c]
//   XREF to: Stack[-0x34] (READ)
// 0051fc48: MOV EDX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051fc4f: MOV dword ptr [ESP + 0x2a8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0051fc56: MOV EAX,dword ptr [ESP + 0x27c]
//   XREF to: Stack[-0x54] (READ)
// 0051fc5d: MOV dword ptr [EDX + 0x20],EAX
// 0051fc60: MOV EAX,dword ptr [ESP + 0x2a4]
//   XREF to: Stack[-0x2c] (READ)
// 0051fc67: MOV dword ptr [EDX + 0x24],EAX
// 0051fc6a: MOV EAX,dword ptr [ESP + 0x2a8]
//   XREF to: Stack[-0x28] (READ)
// 0051fc71: MOV dword ptr [EDX + 0x28],EAX
// 0051fc74: LEA EAX,[ESP + 0x2ac]
//   XREF to: Stack[-0x24] (DATA)
// 0051fc7b: PUSH EAX
// 0051fc7c: LEA EAX,[ESP + 0x274]
//   XREF to: Stack[-0x60] (DATA)
// 0051fc83: PUSH EAX
// 0051fc84: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0051fc89: ADD ESP,0x8
// 0051fc8c: MOV EDX,dword ptr [ESP + 0x2d4]
//   XREF to: Stack[0x4] (READ)
// 0051fc93: ADD EDX,0x30
// 0051fc96: CMP EDX,EAX
// 0051fc98: JZ 0x0051fa2c
//   XREF to: 0051fa2c (CONDITIONAL_JUMP)
// 0051fc9e: MOV ECX,dword ptr [EAX]
// 0051fca0: MOV dword ptr [EDX],ECX
// 0051fca2: MOV ECX,dword ptr [EAX + 0x4]
// 0051fca5: MOV dword ptr [EDX + 0x4],ECX
// 0051fca8: MOV ECX,dword ptr [EAX + 0x8]
// 0051fcab: MOV dword ptr [EDX + 0x8],ECX
// 0051fcae: ADD ESP,0x2c0
// 0051fcb4: POP EBP
// 0051fcb5: POP EDI
// 0051fcb6: POP ESI
// 0051fcb7: POP EBX
// 0051fcb8: RET
