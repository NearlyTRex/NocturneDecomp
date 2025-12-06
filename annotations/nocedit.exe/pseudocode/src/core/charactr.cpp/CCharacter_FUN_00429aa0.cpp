// Name: core_charactr.cpp_CCharacter_FUN_00429aa0
// Address: 00429aa0
// Address Range: [[00429aa0, 00429b3b]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00429aa0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (&this_ptr->model,-1,0xffffffff,1,0);
    core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320();
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x74) == 0) {
      core_charactr_cpp_CCharacter_FUN_0042ad00(this_ptr);
    }
    if (0.0 < *(float *)(this_ptr->cloth_data + 0x8d48)) {
      core_charactr_cpp_CCharacter_FUN_0042af60(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_FUN_0042a420(this_ptr);
  if (g_CGamePtr->field72_0x21c == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_00429b40(this_ptr);
  return;
}
