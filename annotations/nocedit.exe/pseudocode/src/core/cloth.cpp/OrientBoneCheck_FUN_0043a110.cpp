// Name: core_cloth.cpp_OrientBoneCheck_FUN_0043a110
// Address: 0043a110
// Address Range: [[0043a110, 0043a2af]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_OrientBoneCheck_FUN_0043a110()
// Cross-references:
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439c9b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_00618460
//   TerminatedCString s_Can_t_orient_bone_with_n_00618472
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_OrientBoneCheck(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_cloth_cpp_OrientBoneCheck_FUN_0043a110(void)

{
  CSkeleton *this_ptr;
  int iVar1;
  char *bone_name;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar2;
  undefined4 *puVar3;
  CSkeleton *pCVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CDeformableModelInstance *in_stack_0000000c;
  float local_94;
  CMatrix3x4f *in_stack_ffffff84;
  undefined4 local_64 [12];
  CVector3f local_34;
  CVector3f local_28;
  CSkeleton *local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(in_stack_0000000c);
  local_94 = 1.4013e-45;
  bone_name = (char *)(in_stack_00000004 + 0x3ce90 + in_stack_00000008 * 0xac);
  local_1c = this_ptr;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,bone_name);
  bone_name[0x44] = '\0';
  bone_name[0x45] = '\0';
  bone_name[0x46] = '\0';
  bone_name[0x47] = '\0';
  local_18 = -1;
  *(int *)(bone_name + 0x40) = iVar1;
  iVar1 = 0;
  if (0 < this_ptr->bone_count) {
    pCVar2 = in_stack_0000000c->transformed_vertices;
    pCVar4 = this_ptr;
    do {
      if ((*(int *)(bone_name + 0x40) == pCVar4->bone_list[0].parent_index) &&
         (local_14 = SQRT(pCVar2->z * pCVar2->z + pCVar2->x * pCVar2->x + pCVar2->y * pCVar2->y),
         *(float *)(bone_name + 0x44) < local_14)) {
        *(float *)(bone_name + 0x44) = local_14;
        local_18 = iVar1;
      }
      pCVar4 = (CSkeleton *)((pCVar4->motion_list).state_names[1] + 2);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < local_1c->bone_count);
  }
  if (local_18 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x2bf;
    local_94 = 6.211016e-39;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't orient bone with no children!");
  }
  local_94 = 6.21107e-39;
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            (&local_34,in_stack_0000000c->transformed_vertices + local_18);
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  local_94 = 6.211114e-39;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)(bone_name + 0x48),&local_28,&local_34);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)&local_94,(CVector3f *)(bone_name + 0x1c),
             (CVector3f *)(bone_name + 0x28));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(bone_name + 0x48),(CMatrix3x4f *)&local_94,in_stack_ffffff84);
  puVar3 = local_64;
  pcVar5 = bone_name + 0x48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
  }
  *(float *)(bone_name + 0x38) = 1.0 / *(float *)(bone_name + 0x14);
  *(float *)(bone_name + 0x3c) = 1.0 / *(float *)(bone_name + 0x18);
  if (*(float *)(bone_name + 0x34) <= 0.0) {
    return;
  }
  *(undefined4 *)(bone_name + 0x44) = *(undefined4 *)(bone_name + 0x34);
  return;
}


// Assembly code:
// 0043a110: PUSH EBX
//   Label: core_cloth.cpp_OrientBoneCheck_FUN_0043a110
// 0043a111: PUSH ESI
// 0043a112: PUSH EDI
// 0043a113: PUSH EBP
// 0043a114: MOV EBP,ESP
// 0043a116: SUB ESP,0x84
// 0043a11c: SUB EBP,0x76
// 0043a11f: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 0043a125: PUSH EDX
// 0043a126: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0043a12b: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 0043a131: MOV EDI,EAX
// 0043a133: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043a136: IMUL EAX,ECX,0xac
// 0043a13c: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 0043a142: ADD ESP,0x4
// 0043a145: ADD EBX,0x3ce90
// 0043a14b: PUSH 0x1
// 0043a14d: ADD EBX,EAX
// 0043a14f: PUSH EBX
// 0043a150: PUSH EDI
// 0043a151: MOV ESI,0xffffffff
// 0043a156: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043a15b: MOV dword ptr [EBX + 0x44],0x0
// 0043a162: MOV dword ptr [EBP + 0x6e],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0043a165: MOV dword ptr [EBX + 0x40],EAX
// 0043a168: ADD ESP,0xc
// 0043a16b: MOV EAX,dword ptr [EDI + 0x28558]
// 0043a171: XOR ECX,ECX
// 0043a173: TEST EAX,EAX
// 0043a175: JLE 0x0043a1a3
//   XREF to: 0043a1a3 (CONDITIONAL_JUMP)
// 0043a177: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 0043a17d: ADD ESI,0x58
// 0043a180: MOV EDX,dword ptr [EBX + 0x40]
//   Label: LAB_0043a180
// 0043a183: CMP EDX,dword ptr [EDI + 0x2857c]
// 0043a189: JZ 0x0043a271
//   XREF to: 0043a271 (CONDITIONAL_JUMP)
// 0043a18f: MOV EAX,dword ptr [EBP + 0x6a]
//   Label: LAB_0043a18f
//   XREF to: Stack[-0x1c] (READ)
// 0043a192: ADD EDI,0x24
// 0043a195: INC ECX
// 0043a196: MOV EDX,dword ptr [EAX + 0x28558]
// 0043a19c: ADD ESI,0xc
// 0043a19f: CMP ECX,EDX
// 0043a1a1: JL 0x0043a180
//   XREF to: 0043a180 (CONDITIONAL_JUMP)
// 0043a1a3: CMP dword ptr [EBP + 0x6e],0x0
//   Label: LAB_0043a1a3
//   XREF to: Stack[-0x18] (READ)
// 0043a1a7: JGE 0x0043a1cc
//   XREF to: 0043a1cc (CONDITIONAL_JUMP)
// 0043a1a9: MOV ESI,0x618460
//   XREF to: 00618460 (DATA)
// 0043a1ae: MOV EDI,0x2bf
// 0043a1b3: PUSH 0x618472
//   XREF to: 00618472 (DATA)
// 0043a1b8: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0043a1be: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0043a1c4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043a1c9: ADD ESP,0x4
// 0043a1cc: MOV ECX,dword ptr [EBP + 0x6e]
//   Label: LAB_0043a1cc
//   XREF to: Stack[-0x18] (READ)
// 0043a1cf: LEA EAX,[ECX*0x4 + 0x0]
// 0043a1d6: SUB EAX,ECX
// 0043a1d8: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0xc] (READ)
// 0043a1de: SHL EAX,0x2
// 0043a1e1: ADD ECX,0x58
// 0043a1e4: ADD EAX,ECX
// 0043a1e6: PUSH EAX
// 0043a1e7: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x34] (DATA)
// 0043a1ea: PUSH EAX
// 0043a1eb: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0043a1f0: ADD ESP,0x8
// 0043a1f3: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x34] (DATA)
// 0043a1f6: PUSH EAX
// 0043a1f7: XOR EAX,EAX
// 0043a1f9: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0043a1fc: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043a1ff: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043a202: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x28] (DATA)
// 0043a205: PUSH EAX
// 0043a206: LEA ESI,[EBX + 0x48]
// 0043a209: PUSH ESI
// 0043a20a: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0043a20f: ADD ESP,0xc
// 0043a212: LEA EAX,[EBX + 0x28]
// 0043a215: PUSH EAX
// 0043a216: LEA EAX,[EBX + 0x1c]
// 0043a219: PUSH EAX
// 0043a21a: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x94] (DATA)
// 0043a21d: PUSH EAX
// 0043a21e: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0043a223: ADD ESP,0xc
// 0043a226: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x94] (DATA)
// 0043a229: PUSH EAX
// 0043a22a: PUSH ESI
// 0043a22b: LEA ESI,[EBP + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 0043a22e: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0043a233: MOV ECX,0xc
// 0043a238: LEA ESI,[EBP + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 0043a23b: LEA EDI,[EBX + 0x48]
// 0043a23e: MOVSD.REP ES:EDI,ESI
// 0043a240: FLD float ptr [EBX + 0x14]
// 0043a243: FLD1
// 0043a245: FDIVRP
// 0043a247: FLD float ptr [EBX + 0x18]
// 0043a24a: FLD1
// 0043a24c: FDIVRP
// 0043a24e: ADD ESP,0x8
// 0043a251: FLD float ptr [EBX + 0x34]
// 0043a254: FLDZ
// 0043a256: FXCH ST3
// 0043a258: FSTP float ptr [EBX + 0x38]
// 0043a25b: FXCH
// 0043a25d: FSTP float ptr [EBX + 0x3c]
// 0043a260: FXCH
// 0043a262: FCOMPP
// 0043a264: FNSTSW AX
// 0043a266: SAHF
// 0043a267: JC 0x0043a2a2
//   XREF to: 0043a2a2 (CONDITIONAL_JUMP)
// 0043a269: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 0043a26c: POP EBP
// 0043a26d: POP EDI
// 0043a26e: POP ESI
// 0043a26f: POP EBX
// 0043a270: RET
// 0043a271: FLD float ptr [ESI + 0x4]
//   Label: LAB_0043a271
// 0043a274: FMUL ST0
// 0043a276: FLD float ptr [ESI]
// 0043a278: FMUL ST0
// 0043a27a: FADDP
// 0043a27c: FLD float ptr [ESI + 0x8]
// 0043a27f: FMUL ST0
// 0043a281: FADDP
// 0043a283: FSQRT
// 0043a285: FST float ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (WRITE)
// 0043a288: FCOMP float ptr [EBX + 0x44]
// 0043a28b: FNSTSW AX
// 0043a28d: SAHF
// 0043a28e: JBE 0x0043a18f
//   XREF to: 0043a18f (CONDITIONAL_JUMP)
// 0043a294: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (READ)
// 0043a297: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0043a29a: MOV dword ptr [EBX + 0x44],EAX
// 0043a29d: JMP 0x0043a18f
//   XREF to: 0043a18f (UNCONDITIONAL_JUMP)
// 0043a2a2: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_0043a2a2
// 0043a2a5: MOV dword ptr [EBX + 0x44],EAX
// 0043a2a8: LEA ESP,[EBP + 0x76]
//   XREF to: Stack[-0x10] (DATA)
// 0043a2ab: POP EBP
// 0043a2ac: POP EDI
// 0043a2ad: POP ESI
// 0043a2ae: POP EBX
// 0043a2af: RET
