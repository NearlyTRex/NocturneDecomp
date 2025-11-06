// Name: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
// Address: 005a1040
// Address Range: [[005a1040, 005a10df]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b49e [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042bd8c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_005a0fe0 (005a0fe0) at 005a1015 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
          (CDeformableModelInstance *this_ptr,CBodyPart *body_part,int part_index)

{
  CDeformableModel *this_ptr_00;
  uint lod_index;
  int *piVar1;
  CVector3i *unaff_EDI;
  CBodyPart *in_stack_00000010;
  
  if (body_part == (CBodyPart *)0x0) {
    this_ptr->part_visibility_flags[part_index] = 0;
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  lod_index = (uint)(1 < this_ptr_00->num_lods);
  for (piVar1 = &this_ptr_00->lod_info[lod_index - 1].shadow_only_flag;
      (0 < (int)lod_index && (piVar1[2] != 0)); piVar1 = piVar1 + -2) {
    lod_index = lod_index - 1;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,lod_index);
  }
  core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0
            (this_ptr_00,this_ptr->cached_skinned_lod_index,in_stack_00000010,part_index,
             (int)this_ptr->skinned_vertices_buffer,this_ptr->texture_set_indices[part_index],
             unaff_EDI);
  this_ptr->part_visibility_flags[part_index] = 0;
  return;
}


// Assembly code:
// 005a1040: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
// 005a1041: PUSH EDI
// 005a1042: PUSH EBP
// 005a1043: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a1047: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005a104b: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0x8] (READ)
// 005a1050: JNZ 0x005a1061
//   XREF to: 005a1061 (CONDITIONAL_JUMP)
// 005a1052: MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0
// 005a105d: POP EBP
// 005a105e: POP EDI
// 005a105f: POP EBX
// 005a1060: RET
// 005a1061: PUSH ESI
//   Label: LAB_005a1061
// 005a1062: PUSH EBX
// 005a1063: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a1068: MOV EDX,EAX
// 005a106a: ADD ESP,0x4
// 005a106d: MOV ESI,EAX
// 005a106f: MOV ECX,dword ptr [EDX]
// 005a1071: MOV EAX,0x1
// 005a1076: CMP ECX,0x2
// 005a1079: JL 0x005a1095
//   XREF to: 005a1095 (CONDITIONAL_JUMP)
// 005a107b: LEA EDX,[EAX*0x8 + 0x0]
//   Label: LAB_005a107b
// 005a1082: ADD EDX,ESI
// 005a1084: XOR ECX,ECX
// 005a1086: TEST EAX,EAX
//   Label: LAB_005a1086
// 005a1088: JLE 0x005a1099
//   XREF to: 005a1099 (CONDITIONAL_JUMP)
// 005a108a: CMP ECX,dword ptr [EDX + 0x8]
// 005a108d: JZ 0x005a1099
//   XREF to: 005a1099 (CONDITIONAL_JUMP)
// 005a108f: DEC EAX
// 005a1090: SUB EDX,0x8
// 005a1093: JMP 0x005a1086
//   XREF to: 005a1086 (UNCONDITIONAL_JUMP)
// 005a1095: XOR EAX,EAX
//   Label: LAB_005a1095
// 005a1097: JMP 0x005a107b
//   XREF to: 005a107b (UNCONDITIONAL_JUMP)
// 005a1099: CMP EAX,dword ptr [EBX + 0x2230]
//   Label: LAB_005a1099
// 005a109f: JZ 0x005a10ab
//   XREF to: 005a10ab (CONDITIONAL_JUMP)
// 005a10a1: PUSH EAX
// 005a10a2: PUSH EBX
// 005a10a3: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a10a8: ADD ESP,0x8
// 005a10ab: MOV ECX,dword ptr [EBX + EDI*0x4 + 0x21b8]
//   Label: LAB_005a10ab
// 005a10b2: PUSH ECX
// 005a10b3: MOV EBP,dword ptr [EBX + 0x2234]
// 005a10b9: PUSH EBP
// 005a10ba: PUSH EDI
// 005a10bb: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005a10bf: PUSH EAX
// 005a10c0: MOV EDX,dword ptr [EBX + 0x2230]
// 005a10c6: PUSH EDX
// 005a10c7: PUSH ESI
// 005a10c8: CALL core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
//   XREF to: 0059c5e0 (UNCONDITIONAL_CALL)
// 005a10cd: ADD ESP,0x18
// 005a10d0: POP ESI
// 005a10d1: MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0
// 005a10dc: POP EBP
// 005a10dd: POP EDI
// 005a10de: POP EBX
// 005a10df: RET
