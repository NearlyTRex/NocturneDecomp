// Name: core_script.cpp_CScript_ctor_FUN_005597f0
// Address: 005597f0
// Address Range: [[005597f0, 00559834]]
// Convention: __cdecl
// Signature: CScript * core_script.cpp_CScript_ctor_FUN_005597f0(CScript * this_ptr)
// Cross-references:
//   core_script.cpp_staticInit_FUN_005591b0 (005591b0) at 005591cf [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005597f0(CScript *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_004a2a20
                     ((CStrList *)(this_ptr->padding_0x18 + 0x20));
  pCVar1[-1].data_array = (char **)0x0;
  pCVar1[-1].vtable = (CStrList_vtable *)0x0;
  pCVar1[-2].capacity = 0;
  pCVar1[-2].data_array = (char **)0x0;
  pCVar1[-2].vtable = (CStrList_vtable *)0x0;
  pCVar1[-1].item_count = 0;
  pCVar1[-1].capacity = 0;
  return (CScript *)&pCVar1[-4].data_array;
}


// Assembly code:
// 005597f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_script.cpp_CScript_ctor_FUN_005597f0
//   XREF to: Stack[0x4] (READ)
// 005597f4: ADD EAX,0x38
// 005597f7: PUSH EAX
// 005597f8: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005597fd: MOV dword ptr [EAX + -0x8],0x0
// 00559804: MOV dword ptr [EAX + -0x4],0x0
// 0055980b: MOV dword ptr [EAX + -0x1c],0x0
// 00559812: MOV dword ptr [EAX + -0x18],0x0
// 00559819: MOV dword ptr [EAX + -0x14],0x0
// 00559820: MOV dword ptr [EAX + -0x10],0x0
// 00559827: ADD ESP,0x4
// 0055982a: MOV dword ptr [EAX + -0xc],0x0
// 00559831: SUB EAX,0x38
// 00559834: RET
