// Name: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
// Address: 00478d00
// Address Range: [[00478d00, 00478d16]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 (00478ce0) at 00478cf4 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 (00478dd0) at 00478e02 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(CKeyFramedModelInstance *this_ptr)

{
  char *pcVar1;
  
  pcVar1 = this_ptr->model_name;
  do {
    this_ptr->part_visibility_flags[0] = 1;
    this_ptr = (CKeyFramedModelInstance *)(this_ptr->part_visibility_flags + 1);
  } while (this_ptr != (CKeyFramedModelInstance *)pcVar1);
  return this_ptr;
}


// Assembly code:
// 00478d00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
//   XREF to: Stack[0x4] (READ)
// 00478d04: MOV EAX,EDX
// 00478d06: ADD EDX,0x78
// 00478d09: MOV dword ptr [EAX],0x1
//   Label: LAB_00478d09
// 00478d0f: ADD EAX,0x4
// 00478d12: CMP EAX,EDX
// 00478d14: JNZ 0x00478d09
//   XREF to: 00478d09 (CONDITIONAL_JUMP)
// 00478d16: RET
