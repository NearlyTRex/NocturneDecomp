// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
// Address: 005a05e0
// Address Range: [[005a05e0, 005a0797]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 (005a0480) at 005a0590 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0064eeec = 0.05000000
//   float FLOAT_00662ea0 = 0.00390625
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
          (CDeformableModelInstance *this_ptr)

{
  CBoundingBox3D *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDeformableModel *pCVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar10;
  int *piVar11;
  int *piVar12;
  byte bVar13;
  int aiStackY_101c [1010];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar13 = 0;
  local_2c = 0x7fffffff;
  local_30 = 0x7fffffff;
  local_34 = 0x7fffffff;
  local_44 = 0x80000001;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar4 = pCVar8->vertex_count[0];
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(this_ptr,0,0.0);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,0);
  if (0 < iVar4) {
    iVar9 = 0;
    do {
      piVar11 = (int *)(this_ptr->current_lod_index + iVar9);
      piVar12 = piVar11 + (uint)bVar13 * -2 + 1;
      local_34 = *piVar11;
      *(int *)((int)&stack0xffffffd0 + (uint)bVar13 * -8) = *piVar12;
      *(int *)((int)&stack0xffffffd4 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
           piVar12[(uint)bVar13 * -2 + 1];
      if (local_34 < local_28) {
        local_28 = local_34;
      }
      if (local_40 < local_34) {
        local_40 = local_34;
      }
      if (local_30 < local_24) {
        local_24 = local_30;
      }
      if (local_3c < local_30) {
        local_3c = local_30;
      }
      if (local_2c < local_20) {
        local_20 = local_2c;
      }
      if (local_38 < local_2c) {
        local_38 = local_2c;
      }
      iVar9 = iVar9 + 0xc;
    } while (iVar9 < iVar4 * 0xc);
  }
  pCVar1 = &this_ptr->bounding_box;
  (pCVar1->min).x = (float)local_28 * FLOAT_00662ea0;
  (this_ptr->bounding_box).min.y = (float)local_24 * FLOAT_00662ea0;
  (this_ptr->bounding_box).min.z = (float)local_20 * FLOAT_00662ea0;
  pCVar10 = &(this_ptr->bounding_box).max;
  pCVar10->x = (float)local_40 * FLOAT_00662ea0;
  (this_ptr->bounding_box).max.y = (float)local_3c * FLOAT_00662ea0;
  (this_ptr->bounding_box).max.z = (float)local_38 * FLOAT_00662ea0;
  fVar5 = (pCVar10->x - (pCVar1->min).x) * FLOAT_0064eeec;
  fVar6 = ((this_ptr->bounding_box).max.y - (this_ptr->bounding_box).min.y) * FLOAT_0064eeec;
  fVar7 = ((this_ptr->bounding_box).max.z - (this_ptr->bounding_box).min.z) * FLOAT_0064eeec;
  fVar2 = (this_ptr->bounding_box).min.y;
  (pCVar1->min).x = (pCVar1->min).x - fVar5;
  fVar3 = (this_ptr->bounding_box).min.z;
  (this_ptr->bounding_box).min.y = fVar2 - fVar6;
  (this_ptr->bounding_box).min.z = fVar3 - fVar7;
  fVar2 = (this_ptr->bounding_box).max.y;
  pCVar10->x = pCVar10->x + fVar5;
  fVar3 = (this_ptr->bounding_box).max.z;
  (this_ptr->bounding_box).max.y = fVar2 + fVar6;
  (this_ptr->bounding_box).max.z = fVar3 + fVar7;
  return;
}


// Assembly code:
// 005a05e0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
// 005a05e1: PUSH ESI
// 005a05e2: PUSH EDI
// 005a05e3: PUSH EBP
// 005a05e4: SUB ESP,0x3c
// 005a05e7: MOV EBP,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 005a05eb: MOV EDX,0x7fffffff
// 005a05f0: MOV ESI,0x80000001
// 005a05f5: PUSH EBP
// 005a05f6: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a05fa: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a05fe: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005a0602: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005a0606: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 005a060a: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005a060e: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0613: ADD ESP,0x4
// 005a0616: PUSH 0x0
// 005a0618: PUSH 0x0
// 005a061a: PUSH EBP
// 005a061b: MOV ESI,dword ptr [EAX + 0x2c]
// 005a061e: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 005a0623: ADD ESP,0xc
// 005a0626: PUSH 0x0
// 005a0628: PUSH EBP
// 005a0629: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a062e: ADD ESP,0x8
// 005a0631: TEST ESI,ESI
// 005a0633: JLE 0x005a06b1
//   XREF to: 005a06b1 (CONDITIONAL_JUMP)
// 005a0639: LEA ECX,[ESI*0x4 + 0x0]
// 005a0640: SUB ECX,ESI
// 005a0642: XOR EDX,EDX
// 005a0644: SHL ECX,0x2
// 005a0647: MOV ESI,dword ptr [EBP + 0x2234]
//   Label: LAB_005a0647
// 005a064d: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 005a0651: ADD ESI,EDX
// 005a0653: MOVSD ES:EDI,ESI
// 005a0654: MOVSD ES:EDI,ESI
// 005a0655: MOVSD ES:EDI,ESI
// 005a0656: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 005a065a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 005a065e: CMP EAX,EBX
// 005a0660: JGE 0x005a0666
//   XREF to: 005a0666 (CONDITIONAL_JUMP)
// 005a0662: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005a0666: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005a0666
//   XREF to: Stack[-0x40] (READ)
// 005a066a: CMP EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 005a066d: JLE 0x005a0672
//   XREF to: 005a0672 (CONDITIONAL_JUMP)
// 005a066f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4c] (DATA)
// 005a0672: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005a0672
//   XREF to: Stack[-0x3c] (READ)
// 005a0676: CMP EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a067a: JGE 0x005a0680
//   XREF to: 005a0680 (CONDITIONAL_JUMP)
// 005a067c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005a0680: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005a0680
//   XREF to: Stack[-0x3c] (READ)
// 005a0684: CMP EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005a0688: JLE 0x005a068e
//   XREF to: 005a068e (CONDITIONAL_JUMP)
// 005a068a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005a068e: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005a068e
//   XREF to: Stack[-0x38] (READ)
// 005a0692: CMP EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0696: JGE 0x005a069c
//   XREF to: 005a069c (CONDITIONAL_JUMP)
// 005a0698: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a069c: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005a069c
//   XREF to: Stack[-0x38] (READ)
// 005a06a0: CMP EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005a06a4: JLE 0x005a06aa
//   XREF to: 005a06aa (CONDITIONAL_JUMP)
// 005a06a6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005a06aa: ADD EDX,0xc
//   Label: LAB_005a06aa
// 005a06ad: CMP EDX,ECX
// 005a06af: JL 0x005a0647
//   XREF to: 005a0647 (CONDITIONAL_JUMP)
// 005a06b1: LEA EDX,[EBP + 0x2238]
//   Label: LAB_005a06b1
// 005a06b7: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x34] (DATA)
// 005a06bb: MOV EBX,EDX
// 005a06bd: FILD dword ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 005a06bf: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06c5: FSTP float ptr [EBX]
// 005a06c7: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 005a06ca: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06d0: FSTP float ptr [EBX + 0x4]
// 005a06d3: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 005a06d6: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06dc: FSTP float ptr [EBX + 0x8]
// 005a06df: ADD EBP,0x2244
// 005a06e5: MOV EAX,ESP
// 005a06e7: MOV EBX,EBP
// 005a06e9: FILD dword ptr [EAX]
//   XREF to: Stack[-0x4c] (DATA)
// 005a06eb: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06f1: FSTP float ptr [EBX]
// 005a06f3: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005a06f6: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a06fc: FSTP float ptr [EBX + 0x4]
// 005a06ff: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005a0702: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 005a0708: FSTP float ptr [EBX + 0x8]
// 005a070b: FLD float ptr [EBP]
// 005a070e: FSUB float ptr [EDX]
// 005a0710: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0714: FLD float ptr [EBP + 0x4]
// 005a0717: FSUB float ptr [EDX + 0x4]
// 005a071a: FXCH
// 005a071c: FLD float ptr [0x0064eeec]
//   XREF to: 0064eeec (READ)
// 005a0722: FXCH
// 005a0724: FMUL ST1
// 005a0726: FXCH ST2
// 005a0728: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (WRITE)
// 005a072c: FLD float ptr [EBP + 0x8]
// 005a072f: FSUB float ptr [EDX + 0x8]
// 005a0732: FXCH
// 005a0734: FMUL ST2
// 005a0736: FXCH
// 005a0738: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (WRITE)
// 005a073c: FMULP ST2
// 005a073e: FXCH ST2
// 005a0740: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0744: FXCH
// 005a0746: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (WRITE)
// 005a074a: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (WRITE)
// 005a074e: FLD float ptr [EDX]
// 005a0750: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0754: FLD float ptr [EDX + 0x4]
// 005a0757: FXCH
// 005a0759: FSTP float ptr [EDX]
// 005a075b: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 005a075f: FLD float ptr [EDX + 0x8]
// 005a0762: FXCH
// 005a0764: FSTP float ptr [EDX + 0x4]
// 005a0767: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 005a076b: FSTP float ptr [EDX + 0x8]
// 005a076e: FLD float ptr [EBP]
// 005a0771: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0775: FLD float ptr [EBP + 0x4]
// 005a0778: FXCH
// 005a077a: FSTP float ptr [EBP]
// 005a077d: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 005a0781: FLD float ptr [EBP + 0x8]
// 005a0784: FXCH
// 005a0786: FSTP float ptr [EBP + 0x4]
// 005a0789: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x20] (READ)
// 005a078d: FSTP float ptr [EBP + 0x8]
// 005a0790: ADD ESP,0x3c
// 005a0793: POP EBP
// 005a0794: POP EDI
// 005a0795: POP ESI
// 005a0796: POP EBX
// 005a0797: RET
