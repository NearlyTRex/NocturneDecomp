// Name: core_camview.cpp_CCameraView_dtor_FUN_00427d00
// Address: 00427d00
// Address Range: [[00427d00, 00427d1f] [00427d21, 00427d48]]
// Convention: __cdecl
// Signature: CCameraView * core_camview.cpp_CCameraView_dtor_FUN_00427d00(CCameraView * this_ptr, uint d1)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 (0044c090) at 0044c0af [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CCameraViewVTable
//   WatcomTypeInfo g_CCameraViewTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00427d00(CCameraView *this_ptr,uint d1)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCameraViewTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCameraViewVTable;
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00427d00: PUSH EBX
//   Label: core_camview.cpp_CCameraView_dtor_FUN_00427d00
// 00427d01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427d05: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00427d09: TEST AL,0x4
// 00427d0b: JNZ 0x00427d21
//   XREF to: 00427d21 (CONDITIONAL_JUMP)
// 00427d0d: MOV dword ptr [EBX + 0x3c],0x65b7d4
//   XREF to: 0065b7d4 (DATA)
// 00427d14: TEST AL,0x2
// 00427d16: JNZ 0x00427d3c
//   XREF to: 00427d3c (CONDITIONAL_JUMP)
// 00427d18: MOV EAX,EBX
// 00427d1a: POP EBX
// 00427d1b: LEA EAX,[EAX]
// 00427d1e: MOV ECX,ECX
// 00427d21: PUSH 0x65b7f0
//   Label: LAB_00427d21
//   XREF to: 0065b7f0 (DATA)
// 00427d26: PUSH EBX
// 00427d27: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00427d2c: ADD ESP,0x8
// 00427d2f: PUSH EAX
// 00427d30: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00427d35: ADD ESP,0x4
// 00427d38: MOV EAX,EBX
// 00427d3a: POP EBX
// 00427d3b: RET
// 00427d3c: PUSH EBX
//   Label: LAB_00427d3c
// 00427d3d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00427d42: ADD ESP,0x4
// 00427d45: MOV EAX,EBX
// 00427d47: POP EBX
// 00427d48: RET
