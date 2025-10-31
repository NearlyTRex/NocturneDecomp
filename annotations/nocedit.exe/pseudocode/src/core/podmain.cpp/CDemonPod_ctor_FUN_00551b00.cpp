// Name: core_podmain.cpp_CDemonPod_ctor_FUN_00551b00
// Address: 00551b00
// Address Range: [[00551b00, 00551b17]]
// Convention: __cdecl
// Signature: CDemonPod * core_podmain.cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod * this_ptr)
// Globals:
//   CDemonPod_vtable g_CDemonPodVTable
// Function calls:
//   engine_pod.cpp_CPod_ctor_FUN_00550980

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod *this_ptr)

{
  CPod *pCVar1;
  
  pCVar1 = engine_pod_cpp_CPod_ctor_FUN_00550980((CPod *)this_ptr);
  pCVar1->vtable = (CPod_vtable *)&g_CDemonPodVTable;
  return (CDemonPod *)pCVar1;
}


// Assembly code:
// 00551b00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_podmain.cpp_CDemonPod_ctor_FUN_00551b00
//   XREF to: Stack[0x4] (READ)
// 00551b04: PUSH EDX
// 00551b05: CALL engine_pod.cpp_CPod_ctor_FUN_00550980
//   XREF to: 00550980 (UNCONDITIONAL_CALL)
// 00551b0a: ADD ESP,0x4
// 00551b0d: MOV dword ptr [EAX + 0x194],0x662404
//   XREF to: 00662404 (DATA)
// 00551b17: RET
