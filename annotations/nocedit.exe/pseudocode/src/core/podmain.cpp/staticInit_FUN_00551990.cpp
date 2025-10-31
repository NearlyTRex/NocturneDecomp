// Name: core_podmain.cpp_staticInit_FUN_00551990
// Address: 00551990
// Address Range: [[00551990, 005519b5]]
// Convention: __cdecl
// Signature: void core_podmain.cpp_staticInit_FUN_00551990(void)
// Globals:
//   CDemonPod_vtable g_CDemonPodVTable
//   WatcomStaticDestructorNode g_CDemonPodDestructorNode
//   CDemonPod g_CDemonPodInstance
//   undefined4 DAT_030e5224
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_pod.cpp_CPod_ctor_FUN_00550980

#include "nocturne.h"

void __cdecl core_podmain_cpp_staticInit_FUN_00551990(void)

{
  engine_pod_cpp_CPod_ctor_FUN_00550980((CPod *)&g_CDemonPodInstance);
  g_CDemonPodInstance.vtable = &g_CDemonPodVTable;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonPodDestructorNode);
  return;
}


// Assembly code:
// 00551990: PUSH 0x30e5090
//   Label: core_podmain.cpp_staticInit_FUN_00551990
//   XREF to: 030e5090 (DATA)
// 00551995: CALL engine_pod.cpp_CPod_ctor_FUN_00550980
//   XREF to: 00550980 (UNCONDITIONAL_CALL)
// 0055199a: ADD ESP,0x4
// 0055199d: MOV EDX,0x662404
//   XREF to: 00662404 (PARAM)
// 005519a2: PUSH 0x680ccc
//   XREF to: 00680ccc (DATA)
// 005519a7: MOV dword ptr [0x030e5224],EDX
//   XREF to: 030e5224 (WRITE)
// 005519ad: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005519b2: ADD ESP,0x4
// 005519b5: RET
