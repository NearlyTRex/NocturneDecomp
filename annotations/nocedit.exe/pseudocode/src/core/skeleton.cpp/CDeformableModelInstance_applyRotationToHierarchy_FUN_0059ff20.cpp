// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// Address Range: [[0059ff20, 005a00ed]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5483 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8810 (004f8810) at 004f8926 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526a3b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf120 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf7d0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005c0030 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064ee30 = 0.0000100000000000000
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
//   core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
//   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
//   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
          (CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int iVar2;
  CVector3f *start_bone_index;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  undefined4 auStackY_1858 [1484];
  undefined4 uStack_f4;
  CVector3f *axis_ptr;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f *in_stack_ffffff20;
  CQuaternion4f *in_stack_ffffff24;
  CMatrix3x4f CStack_d4;
  float afStack_a4 [10];
  float fStack_7c;
  undefined4 auStack_78 [4];
  undefined4 uStack_68;
  float fStack_64;
  CQuaternion4f CStack_60;
  undefined4 uStack_4c;
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [4];
  float local_28;
  float local_24;
  CSkeleton *local_20;
  CSkeleton *local_1c;
  CDeformableModelInstance *pCStack_18;
  CQuaternion4f *pCStack_14;
  
  bVar7 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = (CVector3f *)0x0;
  uStack_f4 = 0x59ff5f;
  local_20 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,&local_24,(CVector3f *)(auStack_48 + 0x18));
  if (0 < pCVar1->bone_count) {
    pCStack_14 = (this_ptr->bone_transform).bone_rotations;
    pCStack_18 = this_ptr;
    do {
      axis_ptr = start_bone_index;
      quat2_ptr = (CQuaternion4f *)bone_index;
      iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (local_1c,(int)start_bone_index,bone_index);
      if (-1 < iVar2) {
        pCStack_18 = (CDeformableModelInstance *)
                     (*blend_callback)((int)start_bone_index,bone_index,blend_weight,iVar2,this_ptr)
        ;
        in_stack_ffffff20 = (CQuaternion4f *)((float)pCStack_18 * local_28);
        if ((float)DOUBLE_0064ee30 < ABS((float)in_stack_ffffff20)) {
          uStack_f4 = 0x5a0037;
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (in_stack_ffffff20,(float)(auStack_48 + 0x14),axis_ptr);
          fStack_64 = (float)auStack_48._8_4_;
          puVar4 = (undefined4 *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
          *(undefined4 *)((int)&CStack_60 + (uint)bVar7 * -8) =
               *(undefined4 *)(auStack_48 + (uint)bVar7 * -8 + 0xc);
          *puVar4 = *(undefined4 *)(auStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0xc);
          puVar4[(uint)bVar7 * -2 + 1] =
               *(undefined4 *)
                ((int)(auStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0xc) +
                ((uint)bVar7 * -2 + 1) * 4);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)pCStack_18,&CStack_60,quat2_ptr);
          puVar4 = (undefined4 *)((int)pCStack_18 + (uint)bVar7 * -8 + 0x6b4);
          (pCStack_18->bone_transform).bone_rotations[0].w = fStack_7c;
          puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
          *puVar4 = auStack_78[(uint)bVar7 * -2];
          *puVar5 = auStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          puVar5[(uint)bVar7 * -2 + 1] =
               (auStack_78 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        }
      }
      pCStack_18 = (CDeformableModelInstance *)&(pCStack_18->motion_controller).tween_speed;
      start_bone_index = (CVector3f *)((int)&start_bone_index->x + 1);
      pCStack_14 = pCStack_14 + 1;
    } while ((int)start_bone_index < local_1c->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            ((CQuaternion4f *)((float)local_20 * blend_weight),(float)auStack_2c,
             (CVector3f *)in_stack_ffffff20);
  uStack_4c = uStack_68;
  puVar4 = (undefined4 *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(float *)(auStack_48 + (uint)bVar7 * -8) = (&fStack_64)[(uint)bVar7 * -2];
  *(undefined4 *)(auStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) = *puVar4;
  *(undefined4 *)
   ((int)(auStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) + ((uint)bVar7 * -2 + 1) * 4) =
       puVar4[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)auStack_48,in_stack_ffffff24);
  pfVar3 = afStack_a4;
  pCVar6 = &CStack_d4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,&CStack_d4);
  return;
}


// Assembly code:
// 0059ff20: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// 0059ff21: PUSH ESI
// 0059ff22: PUSH EDI
// 0059ff23: PUSH EBP
// 0059ff24: MOV EBP,ESP
// 0059ff26: SUB ESP,0xd4
// 0059ff2c: AND ESP,0xfffffff8
// 0059ff2f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ff32: PUSH EDX
// 0059ff33: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059ff38: ADD ESP,0x4
// 0059ff3b: MOV ESI,EAX
// 0059ff3d: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059ff44: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x34] (DATA)
// 0059ff4b: PUSH EAX
// 0059ff4c: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x28] (DATA)
// 0059ff53: PUSH EAX
// 0059ff54: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059ff57: PUSH ECX
// 0059ff58: XOR EBX,EBX
// 0059ff5a: CALL core_xform.cpp_quaternionToAxisAngle_FUN_005f7730
//   XREF to: 005f7730 (UNCONDITIONAL_CALL)
// 0059ff5f: MOV EDI,dword ptr [ESI + 0x28558]
// 0059ff65: ADD ESP,0xc
// 0059ff68: TEST EDI,EDI
// 0059ff6a: JLE 0x0059ffd2
//   XREF to: 0059ffd2 (CONDITIONAL_JUMP)
// 0059ff6c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ff6f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ff72: ADD EAX,0x6b0
// 0059ff77: MOV dword ptr [ESP + 0xc8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0059ff7e: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059ff85: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_0059ff85
//   XREF to: Stack[0x10] (READ)
// 0059ff88: PUSH ESI
// 0059ff89: PUSH EBX
// 0059ff8a: MOV EDI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 0059ff91: PUSH EDI
// 0059ff92: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059ff97: ADD ESP,0xc
// 0059ff9a: TEST EAX,EAX
// 0059ff9c: JGE 0x0059ffe3
//   XREF to: 0059ffe3 (CONDITIONAL_JUMP)
// 0059ff9e: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0059ff9e
//   XREF to: Stack[-0x20] (READ)
// 0059ffa5: ADD EAX,0x10
// 0059ffa8: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x1c] (READ)
// 0059ffaf: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059ffb6: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x24] (READ)
// 0059ffbd: INC EBX
// 0059ffbe: ADD EDX,0x10
// 0059ffc1: MOV ECX,dword ptr [EAX + 0x28558]
// 0059ffc7: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059ffce: CMP EBX,ECX
// 0059ffd0: JL 0x0059ff85
//   XREF to: 0059ff85 (CONDITIONAL_JUMP)
// 0059ffd2: CMP dword ptr [EBP + 0x20],0x0
//   Label: LAB_0059ffd2
//   XREF to: Stack[0x10] (READ)
// 0059ffd6: JL 0x005a007b
//   XREF to: 005a007b (CONDITIONAL_JUMP)
// 0059ffdc: MOV ESP,EBP
// 0059ffde: POP EBP
// 0059ffdf: POP EDI
// 0059ffe0: POP ESI
// 0059ffe1: POP EBX
// 0059ffe2: RET
// 0059ffe3: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0059ffe3
//   XREF to: Stack[0x4] (READ)
// 0059ffe6: PUSH EDX
// 0059ffe7: PUSH EAX
// 0059ffe8: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059ffeb: PUSH ESI
// 0059ffec: PUSH EBX
// 0059ffed: CALL dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0059fff0: MOV dword ptr [ESP + 0xe4],EAX
// 0059fff7: FLD float ptr [ESP + 0xe4]
// 0059fffe: ADD ESP,0x14
// 005a0001: FMUL float ptr [ESP + 0xc0]
// 005a0008: FST float ptr [ESP]
// 005a000b: FABS
// 005a000d: FCOMP double ptr [0x0064ee30]
//   XREF to: 0064ee30 (READ)
// 005a0013: FNSTSW AX
// 005a0015: SAHF
// 005a0016: JBE 0x0059ff9e
//   XREF to: 0059ff9e (CONDITIONAL_JUMP)
// 005a0018: LEA EAX,[ESP + 0xb4]
// 005a001f: PUSH EAX
// 005a0020: LEA ESI,[ESP + 0xa8]
// 005a0027: PUSH dword ptr [ESP + 0x4]
// 005a002b: LEA EDI,[ESP + 0x8c]
// 005a0032: CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
//   XREF to: 005f7a70 (UNCONDITIONAL_CALL)
// 005a0037: LEA ESI,[ESP + 0xac]
// 005a003e: ADD ESP,0x8
// 005a0041: LEA EAX,[ESP + 0x84]
// 005a0048: MOVSD ES:EDI,ESI
// 005a0049: MOVSD ES:EDI,ESI
// 005a004a: MOVSD ES:EDI,ESI
// 005a004b: MOVSD ES:EDI,ESI
// 005a004c: PUSH EAX
// 005a004d: MOV ESI,dword ptr [ESP + 0xd0]
// 005a0054: PUSH ESI
// 005a0055: LEA ESI,[ESP + 0x6c]
// 005a0059: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005a005e: ADD ESP,0x8
// 005a0061: MOV EDI,dword ptr [ESP + 0xc8]
// 005a0068: LEA ESI,[ESP + 0x64]
// 005a006c: LEA EDI,[EDI + 0x6b0]
// 005a0072: MOVSD ES:EDI,ESI
// 005a0073: MOVSD ES:EDI,ESI
// 005a0074: MOVSD ES:EDI,ESI
// 005a0075: MOVSD ES:EDI,ESI
// 005a0076: JMP 0x0059ff9e
//   XREF to: 0059ff9e (UNCONDITIONAL_JUMP)
// 005a007b: FLD float ptr [ESP + 0xc0]
//   Label: LAB_005a007b
//   XREF to: Stack[-0x28] (READ)
// 005a0082: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x34] (DATA)
// 005a0089: FMUL float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a008c: PUSH EAX
// 005a008d: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x74] (DATA)
// 005a0091: SUB ESP,0x4
// 005a0094: LEA EDI,[ESP + 0x9c]
//   XREF to: Stack[-0x54] (DATA)
// 005a009b: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 005a009e: CALL core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
//   XREF to: 005f7a70 (UNCONDITIONAL_CALL)
// 005a00a3: LEA ESI,[ESP + 0x7c]
//   XREF to: Stack[-0x74] (DATA)
// 005a00a7: ADD ESP,0x8
// 005a00aa: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x54] (DATA)
// 005a00b1: MOVSD ES:EDI,ESI
// 005a00b2: MOVSD ES:EDI,ESI
// 005a00b3: MOVSD ES:EDI,ESI
// 005a00b4: MOVSD ES:EDI,ESI
// 005a00b5: PUSH EAX
// 005a00b6: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xb4] (DATA)
// 005a00ba: CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
//   XREF to: 005f73e0 (UNCONDITIONAL_CALL)
// 005a00bf: ADD ESP,0x4
// 005a00c2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xe4] (DATA)
// 005a00c6: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0xe4] (DATA)
// 005a00ca: PUSH EAX
// 005a00cb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a00ce: MOV ECX,0xc
// 005a00d3: ADD EAX,0x6a4
// 005a00d8: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xb4] (DATA)
// 005a00dc: PUSH EAX
// 005a00dd: MOVSD.REP ES:EDI,ESI
// 005a00df: CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
//   XREF to: 005f4e20 (UNCONDITIONAL_CALL)
// 005a00e4: ADD ESP,0x8
// 005a00e7: MOV ESP,EBP
// 005a00e9: POP EBP
// 005a00ea: POP EDI
// 005a00eb: POP ESI
// 005a00ec: POP EBX
// 005a00ed: RET
