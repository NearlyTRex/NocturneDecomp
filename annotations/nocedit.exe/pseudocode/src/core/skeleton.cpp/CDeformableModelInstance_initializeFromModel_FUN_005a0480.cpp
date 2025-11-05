// Name: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
// Address: 005a0480
// Address Range: [[005a0480, 005a05dc]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
// Cross-references:
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e71c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e4e0 (0058e4e0) at 0058e53f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 (005a0450) at 005a0468 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c382 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d525 [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_FUN_0052dcb0
//   core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
//   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
//   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
          (CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDeformableModel *pCVar6;
  CSkeleton *pCVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  BADSPACEBASE *in_ESP;
  int index;
  float *pfVar10;
  CDeformableModelInstance *in_stack_0000000c;
  CDeformableModelInstance *in_stack_00000010;
  CDeformableModelInstance *in_stack_00000014;
  CDeformableModelInstance *pCVar11;
  
  this_ptr->model_ptr = model_ptr;
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_FUN_0052dcb0();
  iVar5 = pCVar7->bone_count;
  pCVar6 = in_stack_0000000c->model_ptr;
  fVar1 = (pCVar6->model_scale).y;
  fVar2 = in_stack_0000000c->scale_factor;
  fVar3 = (pCVar6->model_scale).z;
  fVar4 = in_stack_0000000c->scale_factor;
  if (&in_stack_0000000c->scaled_model_dimensions != (CVector3f *)&stack0xffffffe4) {
    (in_stack_0000000c->scaled_model_dimensions).x =
         (pCVar6->model_scale).x * in_stack_0000000c->scale_factor;
    (in_stack_0000000c->scaled_model_dimensions).y = fVar1 * fVar2;
    (in_stack_0000000c->scaled_model_dimensions).z = fVar3 * fVar4;
  }
  index = 0;
  if (0 < iVar5) {
    pfVar10 = &in_stack_0000000c->scale_factor;
    pCVar9 = in_stack_0000000c->transformed_vertices;
    pCVar11 = in_stack_0000000c;
    do {
      pCVar8 = core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
                         (in_stack_0000000c->model_ptr,index);
      if (pCVar9 != pCVar8) {
        pCVar9->x = pCVar8->x;
        pCVar9->y = pCVar8->y;
        pCVar9->z = pCVar8->z;
      }
      pCVar11->rest_pose_data[0] = in_stack_0000000c->scale_factor;
      if (pCVar7->bone_list[0].parent_index < 0) {
        pCVar9->x = *pfVar10 * pCVar9->x;
        pCVar9->y = *pfVar10 * pCVar9->y;
        pCVar9->z = *pfVar10 * pCVar9->z;
      }
      pCVar7 = (CSkeleton *)((pCVar7->motion_list).state_names[1] + 2);
      pCVar9 = pCVar9 + 1;
      pCVar11 = (CDeformableModelInstance *)&(pCVar11->motion_controller).current_motion_index;
      index = index + 1;
    } while (index < iVar5);
  }
  core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(in_stack_0000000c);
  core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(in_stack_00000010);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (in_stack_00000014);
  return;
}


// Assembly code:
// 005a0480: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
// 005a0481: PUSH ESI
// 005a0482: PUSH EDI
// 005a0483: PUSH EBP
// 005a0484: SUB ESP,0x14
// 005a0487: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a048b: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005a048f: PUSH EAX
// 005a0490: MOV dword ptr [EAX + 0x22b0],EBX
// 005a0496: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a049b: ADD ESP,0x4
// 005a049e: PUSH EAX
// 005a049f: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005a04a3: PUSH ECX
// 005a04a4: MOV EBX,EAX
// 005a04a6: MOV EBP,EAX
// 005a04a8: CALL core_motion.cpp_FUN_0052dcb0
//   XREF to: 0052dcb0 (UNCONDITIONAL_CALL)
// 005a04ad: ADD ESP,0x8
// 005a04b0: MOV EAX,dword ptr [EBX + 0x28558]
// 005a04b6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a04ba: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a04be: MOV EAX,dword ptr [EAX + 0x22b0]
// 005a04c4: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a04c8: FLD float ptr [EAX + 0x7c84]
// 005a04ce: FMUL float ptr [EBX + 0x54]
// 005a04d1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005a04d4: FLD float ptr [EAX + 0x7c88]
// 005a04da: FMUL float ptr [EBX + 0x54]
// 005a04dd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 005a04e1: FLD float ptr [EAX + 0x7c8c]
// 005a04e7: FMUL float ptr [EBX + 0x54]
// 005a04ea: ADD EBX,0x508
// 005a04f0: MOV EAX,ESP
// 005a04f2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 005a04f6: CMP EBX,EAX
// 005a04f8: JNZ 0x005a05ad
//   XREF to: 005a05ad (CONDITIONAL_JUMP)
// 005a04fe: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_005a04fe
//   XREF to: Stack[-0x14] (READ)
// 005a0502: XOR ESI,ESI
// 005a0504: TEST EBX,EBX
// 005a0506: JLE 0x005a057e
//   XREF to: 005a057e (CONDITIONAL_JUMP)
// 005a050c: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a0510: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a0514: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a0518: ADD EDI,0x54
// 005a051b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a051f: ADD EBX,0x58
// 005a0522: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005a0522
//   XREF to: Stack[0x4] (READ)
// 005a0526: PUSH ESI
// 005a0527: MOV ECX,dword ptr [EAX + 0x22b0]
// 005a052d: PUSH ECX
// 005a052e: CALL core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
//   XREF to: 0059a860 (UNCONDITIONAL_CALL)
// 005a0533: ADD ESP,0x8
// 005a0536: CMP EBX,EAX
// 005a0538: JZ 0x005a054a
//   XREF to: 005a054a (CONDITIONAL_JUMP)
// 005a053a: MOV EDX,dword ptr [EAX]
// 005a053c: MOV dword ptr [EBX],EDX
// 005a053e: MOV EDX,dword ptr [EAX + 0x4]
// 005a0541: MOV dword ptr [EBX + 0x4],EDX
// 005a0544: MOV EDX,dword ptr [EAX + 0x8]
// 005a0547: MOV dword ptr [EBX + 0x8],EDX
// 005a054a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005a054a
//   XREF to: Stack[0x4] (READ)
// 005a054e: FLD float ptr [EAX + 0x54]
// 005a0551: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005a0555: FSTP float ptr [EAX + 0x514]
// 005a055b: CMP dword ptr [EBP + 0x2857c],0x0
// 005a0562: JL 0x005a05c5
//   XREF to: 005a05c5 (CONDITIONAL_JUMP)
// 005a0564: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005a0564
//   XREF to: Stack[-0x18] (READ)
// 005a0568: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005a056c: ADD EBP,0x24
// 005a056f: ADD EBX,0xc
// 005a0572: ADD EAX,0x4
// 005a0575: INC ESI
// 005a0576: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a057a: CMP ESI,EDX
// 005a057c: JL 0x005a0522
//   XREF to: 005a0522 (CONDITIONAL_JUMP)
// 005a057e: MOV EDX,dword ptr [ESP + 0x28]
//   Label: LAB_005a057e
//   XREF to: Stack[0x4] (READ)
// 005a0582: PUSH EDX
// 005a0583: CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
//   XREF to: 0059deb0 (UNCONDITIONAL_CALL)
// 005a0588: ADD ESP,0x4
// 005a058b: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a058f: PUSH ECX
// 005a0590: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
//   XREF to: 005a05e0 (UNCONDITIONAL_CALL)
// 005a0595: ADD ESP,0x4
// 005a0598: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a059c: PUSH EBX
// 005a059d: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005a05a2: ADD ESP,0x4
// 005a05a5: ADD ESP,0x14
// 005a05a8: POP EBP
// 005a05a9: POP EDI
// 005a05aa: POP ESI
// 005a05ab: POP EBX
// 005a05ac: RET
// 005a05ad: MOV EAX,dword ptr [ESP]
//   Label: LAB_005a05ad
//   XREF to: Stack[-0x24] (DATA)
// 005a05b0: MOV dword ptr [EBX],EAX
// 005a05b2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 005a05b6: MOV dword ptr [EBX + 0x4],EAX
// 005a05b9: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 005a05bd: MOV dword ptr [EBX + 0x8],EAX
// 005a05c0: JMP 0x005a04fe
//   XREF to: 005a04fe (UNCONDITIONAL_JUMP)
// 005a05c5: FLD float ptr [EDI]
//   Label: LAB_005a05c5
// 005a05c7: FMUL float ptr [EBX]
// 005a05c9: FSTP float ptr [EBX]
// 005a05cb: FLD float ptr [EDI]
// 005a05cd: FMUL float ptr [EBX + 0x4]
// 005a05d0: FSTP float ptr [EBX + 0x4]
// 005a05d3: FLD float ptr [EDI]
// 005a05d5: FMUL float ptr [EBX + 0x8]
// 005a05d8: FSTP float ptr [EBX + 0x8]
// 005a05db: JMP 0x005a0564
//   XREF to: 005a0564 (UNCONDITIONAL_JUMP)
