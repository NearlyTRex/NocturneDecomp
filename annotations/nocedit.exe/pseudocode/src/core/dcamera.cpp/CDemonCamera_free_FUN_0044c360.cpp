// Name: core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
// Address: 0044c360
// Address Range: [[0044c360, 0044c3d8]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 (0044c090) at 0044c0a4 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 (0044c190) at 0044c19c [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d2d0 (0056d2d0) at 0056d35a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_00619f8a
//   TerminatedCString s_core_dcamera_cpp_00619f9e
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera *this_ptr)

{
  if (this_ptr->framebuffer_raw != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->framebuffer_raw,"..\\core\\dcamera.cpp",0x25a);
  }
  this_ptr->framebuffer_raw = (void *)0x0;
  this_ptr->framebuffer_aligned = (void *)0x0;
  if (this_ptr->zbuffer_raw != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->zbuffer_raw,"..\\core\\dcamera.cpp",0x25e)
    ;
  }
  this_ptr->zbuffer_raw = (void *)0x0;
  this_ptr->rect_array_count = 0;
  this_ptr->zbuffer_aligned = (void *)0x0;
  return;
}


// Assembly code:
// 0044c360: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
// 0044c361: PUSH ESI
// 0044c362: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044c366: MOV EDX,dword ptr [EBX + 0x160]
// 0044c36c: TEST EDX,EDX
// 0044c36e: JNZ 0x0044c3af
//   XREF to: 0044c3af (CONDITIONAL_JUMP)
// 0044c370: MOV dword ptr [EBX + 0x160],0x0
//   Label: LAB_0044c370
// 0044c37a: MOV ESI,dword ptr [EBX + 0x164]
// 0044c380: MOV dword ptr [EBX + 0x158],0x0
// 0044c38a: TEST ESI,ESI
// 0044c38c: JNZ 0x0044c3c4
//   XREF to: 0044c3c4 (CONDITIONAL_JUMP)
// 0044c38e: MOV dword ptr [EBX + 0x164],0x0
//   Label: LAB_0044c38e
// 0044c398: MOV dword ptr [EBX + 0x1d0],0x0
// 0044c3a2: MOV dword ptr [EBX + 0x15c],0x0
// 0044c3ac: POP ESI
// 0044c3ad: POP EBX
// 0044c3ae: RET
// 0044c3af: PUSH 0x25a
//   Label: LAB_0044c3af
// 0044c3b4: PUSH 0x619f8a
//   XREF to: 00619f8a (DATA)
// 0044c3b9: PUSH EDX
// 0044c3ba: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0044c3bf: ADD ESP,0xc
// 0044c3c2: JMP 0x0044c370
//   XREF to: 0044c370 (UNCONDITIONAL_JUMP)
// 0044c3c4: PUSH 0x25e
//   Label: LAB_0044c3c4
// 0044c3c9: PUSH 0x619f9e
//   XREF to: 00619f9e (DATA)
// 0044c3ce: PUSH ESI
// 0044c3cf: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0044c3d4: ADD ESP,0xc
// 0044c3d7: JMP 0x0044c38e
//   XREF to: 0044c38e (UNCONDITIONAL_JUMP)
