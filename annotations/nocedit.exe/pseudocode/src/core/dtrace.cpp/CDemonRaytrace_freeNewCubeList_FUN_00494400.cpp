// Name: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// Address: 00494400
// Address Range: [[00494400, 0049444f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 (00494240) at 00494258 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 004947b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_0062265d
//   WatcomTypeInfo g_CDemonCubeTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr)

{
  int iVar1;
  void *ptr;
  
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0xb8;
  ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr->cube_data,&g_CDemonCubeTypeInfo);
  crt_memory_c_free_FUN_005fe659(ptr);
  this_ptr->cube_data = (CDemonCube *)0x0;
  (this_ptr->grid_coord).z = 0;
  iVar1 = (this_ptr->grid_coord).z;
  (this_ptr->grid_coord).y = iVar1;
  (this_ptr->grid_coord).x = iVar1;
  return;
}


// Assembly code:
// 00494400: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// 00494401: PUSH ESI
// 00494402: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00494406: MOV EDX,0x62265d
//   XREF to: 0062265d (PARAM)
// 0049440b: PUSH 0x65d290
//   XREF to: 0065d290 (DATA)
// 00494410: MOV ESI,dword ptr [EBX + 0x50]
// 00494413: MOV ECX,0xb8
// 00494418: PUSH ESI
// 00494419: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0049441f: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00494425: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0049442a: ADD ESP,0x8
// 0049442d: PUSH EAX
// 0049442e: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00494433: MOV dword ptr [EBX + 0x50],0x0
// 0049443a: MOV dword ptr [EBX + 0x48],0x0
// 00494441: MOV EAX,dword ptr [EBX + 0x48]
// 00494444: MOV dword ptr [EBX + 0x44],EAX
// 00494447: ADD ESP,0x4
// 0049444a: MOV dword ptr [EBX + 0x40],EAX
// 0049444d: POP ESI
// 0049444e: POP EBX
// 0049444f: RET
