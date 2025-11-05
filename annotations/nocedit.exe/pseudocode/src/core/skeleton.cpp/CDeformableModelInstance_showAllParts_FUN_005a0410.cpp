// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
// Address: 005a0410
// Address Range: [[005a0410, 005a042a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bb32 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c256 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005971eb [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 (005a0840) at 005a0876 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  int *piVar2;
  
  pCVar1 = this_ptr;
  do {
    piVar2 = &(pCVar1->motion_controller).current_motion_index;
    pCVar1->part_visibility_flags[0] = 1;
    pCVar1 = (CDeformableModelInstance *)piVar2;
  } while ((float *)piVar2 != &this_ptr->transformed_vertices[2].z);
  return;
}


// Assembly code:
// 005a0410: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
//   XREF to: Stack[0x4] (READ)
// 005a0414: MOV EAX,EDX
// 005a0416: ADD EDX,0x78
// 005a0419: ADD EAX,0x4
//   Label: LAB_005a0419
// 005a041c: MOV dword ptr [EAX + 0x213c],0x1
// 005a0426: CMP EAX,EDX
// 005a0428: JNZ 0x005a0419
//   XREF to: 005a0419 (CONDITIONAL_JUMP)
// 005a042a: RET
