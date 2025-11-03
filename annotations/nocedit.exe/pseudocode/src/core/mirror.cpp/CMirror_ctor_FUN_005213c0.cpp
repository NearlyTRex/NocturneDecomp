// Name: core_mirror.cpp_CMirror_ctor_FUN_005213c0
// Address: 005213c0
// Address Range: [[005213c0, 005213de]]
// Convention: __cdecl
// Signature: CMirror * core_mirror.cpp_CMirror_ctor_FUN_005213c0(CMirror * this_ptr)
// Cross-references:
//   core_glass.cpp_CGlass_ctor_FUN_004e9040 (004e9040) at 004e9055 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SClipPlaneTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005213c0(CMirror *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->clip_planes,5,&g_SClipPlaneTypeInfo);
  return (CMirror *)((int)pvVar1 + -0x98);
}


// Assembly code:
// 005213c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mirror.cpp_CMirror_ctor_FUN_005213c0
//   XREF to: Stack[0x4] (READ)
// 005213c4: PUSH 0x661700
//   XREF to: 00661700 (DATA)
// 005213c9: PUSH 0x5
// 005213cb: ADD EAX,0x98
// 005213d0: PUSH EAX
// 005213d1: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005213d6: ADD ESP,0xc
// 005213d9: SUB EAX,0x98
// 005213de: RET
