// Name: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
// Address: 00554d40
// Address Range: [[00554d40, 00554e6b]]
// Convention: __cdecl
// Signature: CColorQuantizer * shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer * this_ptr)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 (005563d0) at 0055642a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640ab5
//   TerminatedCString s_shape_quantize_cpp_00640bb8
//   TerminatedCString s_shape_quantize_cpp_00640bce
//   TerminatedCString s_shape_quantize_cpp_00640be4
//   TerminatedCString s_shape_quantize_cpp_00640bfa
//   TerminatedCString s_shape_quantize_cpp_00640c10
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_reset_FUN_00554d40(CColorQuantizer *this_ptr)

{
  CColorQuantizer_ProgressCallback *pCVar1;
  int iVar2;
  CColorQuantizer *pCVar3;
  
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 499;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 500;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f5;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f6;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x1f7;
    crt_memory_c_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  if (this_ptr->scanline_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->scanline_buffer,"..\\shape\\quantize.cpp",0x79);
  }
  if (this_ptr->pixel_data != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",0x79)
    ;
  }
  pCVar1 = this_ptr->progress_callback;
  iVar2 = this_ptr->num_colors;
  pCVar3 = (CColorQuantizer *)crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x4b44);
  this_ptr->status = -1;
  this_ptr->progress_callback = pCVar1;
  this_ptr->num_colors = iVar2;
  return pCVar3;
}


// Assembly code:
// 00554d40: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_reset_FUN_00554d40
// 00554d41: PUSH ESI
// 00554d42: PUSH EDI
// 00554d43: PUSH EBP
// 00554d44: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00554d48: MOV EDX,dword ptr [EBX + 0x10]
// 00554d4b: TEST EDX,EDX
// 00554d4d: JNZ 0x00554e36
//   XREF to: 00554e36 (CONDITIONAL_JUMP)
// 00554d53: MOV EBP,dword ptr [EBX + 0x14]
//   Label: LAB_00554d53
// 00554d56: TEST EBP,EBP
// 00554d58: JZ 0x00554d78
//   XREF to: 00554d78 (CONDITIONAL_JUMP)
// 00554d5a: MOV EAX,0x640bce
//   XREF to: 00640bce (PARAM)
// 00554d5f: MOV EDX,0x1f4
// 00554d64: PUSH EBP
// 00554d65: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 00554d6a: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00554d70: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554d75: ADD ESP,0x4
// 00554d78: MOV ESI,dword ptr [EBX + 0x18]
//   Label: LAB_00554d78
// 00554d7b: TEST ESI,ESI
// 00554d7d: JZ 0x00554d9e
//   XREF to: 00554d9e (CONDITIONAL_JUMP)
// 00554d7f: MOV EDI,0x640be4
//   XREF to: 00640be4 (DATA)
// 00554d84: MOV EBP,0x1f5
// 00554d89: PUSH ESI
// 00554d8a: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00554d90: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00554d96: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554d9b: ADD ESP,0x4
// 00554d9e: MOV EDX,dword ptr [EBX + 0x1c]
//   Label: LAB_00554d9e
// 00554da1: TEST EDX,EDX
// 00554da3: JZ 0x00554dc4
//   XREF to: 00554dc4 (CONDITIONAL_JUMP)
// 00554da5: MOV ECX,0x640bfa
//   XREF to: 00640bfa (PARAM)
// 00554daa: MOV ESI,0x1f6
// 00554daf: PUSH EDX
// 00554db0: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00554db6: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00554dbc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554dc1: ADD ESP,0x4
// 00554dc4: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_00554dc4
// 00554dc7: TEST EBP,EBP
// 00554dc9: JZ 0x00554de9
//   XREF to: 00554de9 (CONDITIONAL_JUMP)
// 00554dcb: MOV EAX,0x640c10
//   XREF to: 00640c10 (PARAM)
// 00554dd0: MOV EDX,0x1f7
// 00554dd5: PUSH EBP
// 00554dd6: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 00554ddb: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00554de1: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554de6: ADD ESP,0x4
// 00554de9: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_00554de9
// 00554dec: TEST ESI,ESI
// 00554dee: JZ 0x00554e00
//   XREF to: 00554e00 (CONDITIONAL_JUMP)
// 00554df0: PUSH 0x79
// 00554df2: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 00554df7: PUSH ESI
// 00554df8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00554dfd: ADD ESP,0xc
// 00554e00: MOV EDI,dword ptr [EBX + 0x4]
//   Label: LAB_00554e00
// 00554e03: TEST EDI,EDI
// 00554e05: JNZ 0x00554e5a
//   XREF to: 00554e5a (CONDITIONAL_JUMP)
// 00554e07: PUSH 0x4b44
//   Label: LAB_00554e07
// 00554e0c: PUSH 0x0
// 00554e0e: PUSH EBX
// 00554e0f: MOV EDI,dword ptr [EBX]
// 00554e11: MOV ESI,dword ptr [EBX + 0x4b40]
// 00554e17: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00554e1c: MOV dword ptr [EBX + 0x4b34],0xffffffff
// 00554e26: MOV dword ptr [EBX],EDI
// 00554e28: ADD ESP,0xc
// 00554e2b: MOV dword ptr [EBX + 0x4b40],ESI
// 00554e31: POP EBP
// 00554e32: POP EDI
// 00554e33: POP ESI
// 00554e34: POP EBX
// 00554e35: RET
// 00554e36: MOV ECX,0x640bb8
//   Label: LAB_00554e36
//   XREF to: 00640bb8 (PARAM)
// 00554e3b: MOV ESI,0x1f3
// 00554e40: PUSH EDX
// 00554e41: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00554e47: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00554e4d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554e52: ADD ESP,0x4
// 00554e55: JMP 0x00554d53
//   XREF to: 00554d53 (UNCONDITIONAL_JUMP)
// 00554e5a: PUSH 0x79
//   Label: LAB_00554e5a
// 00554e5c: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 00554e61: PUSH EDI
// 00554e62: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00554e67: ADD ESP,0xc
// 00554e6a: JMP 0x00554e07
//   XREF to: 00554e07 (UNCONDITIONAL_JUMP)
