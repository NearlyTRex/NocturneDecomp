// Name: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
// Address: 00554940
// Address Range: [[00554940, 00554a48]]
// Convention: __cdecl
// Signature: CColorQuantizer * shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer * this_ptr)
// Cross-references:
//   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 (00556490) at 00556768 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640ab5
//   TerminatedCString s_shape_quantize_cpp_00640acb
//   TerminatedCString s_shape_quantize_cpp_00640ae1
//   TerminatedCString s_shape_quantize_cpp_00640af7
//   TerminatedCString s_shape_quantize_cpp_00640b0d
//   TerminatedCString s_shape_quantize_cpp_00640b23
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer *this_ptr)

{
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x17f;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x180;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x181;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x182;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x183;
    crt_memory_c_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  if (this_ptr->scanline_buffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->scanline_buffer,"..\\shape\\quantize.cpp",0x79);
  }
  if (this_ptr->pixel_data == (void *)0x0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",0x79);
  return this_ptr;
}


// Assembly code:
// 00554940: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
// 00554941: PUSH ESI
// 00554942: PUSH EDI
// 00554943: PUSH EBP
// 00554944: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00554948: MOV EDX,dword ptr [EBX + 0x10]
// 0055494b: TEST EDX,EDX
// 0055494d: JNZ 0x00554a0e
//   XREF to: 00554a0e (CONDITIONAL_JUMP)
// 00554953: MOV EBP,dword ptr [EBX + 0x14]
//   Label: LAB_00554953
// 00554956: TEST EBP,EBP
// 00554958: JZ 0x00554978
//   XREF to: 00554978 (CONDITIONAL_JUMP)
// 0055495a: MOV EAX,0x640ae1
//   XREF to: 00640ae1 (PARAM)
// 0055495f: MOV EDX,0x180
// 00554964: PUSH EBP
// 00554965: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 0055496a: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00554970: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554975: ADD ESP,0x4
// 00554978: MOV ESI,dword ptr [EBX + 0x18]
//   Label: LAB_00554978
// 0055497b: TEST ESI,ESI
// 0055497d: JZ 0x0055499e
//   XREF to: 0055499e (CONDITIONAL_JUMP)
// 0055497f: MOV EDI,0x640af7
//   XREF to: 00640af7 (DATA)
// 00554984: MOV EBP,0x181
// 00554989: PUSH ESI
// 0055498a: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00554990: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00554996: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0055499b: ADD ESP,0x4
// 0055499e: MOV EDX,dword ptr [EBX + 0x1c]
//   Label: LAB_0055499e
// 005549a1: TEST EDX,EDX
// 005549a3: JZ 0x005549c4
//   XREF to: 005549c4 (CONDITIONAL_JUMP)
// 005549a5: MOV ECX,0x640b0d
//   XREF to: 00640b0d (PARAM)
// 005549aa: MOV ESI,0x182
// 005549af: PUSH EDX
// 005549b0: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 005549b6: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 005549bc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005549c1: ADD ESP,0x4
// 005549c4: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_005549c4
// 005549c7: TEST EBP,EBP
// 005549c9: JZ 0x005549e9
//   XREF to: 005549e9 (CONDITIONAL_JUMP)
// 005549cb: MOV EAX,0x640b23
//   XREF to: 00640b23 (PARAM)
// 005549d0: MOV EDX,0x183
// 005549d5: PUSH EBP
// 005549d6: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 005549db: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 005549e1: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005549e6: ADD ESP,0x4
// 005549e9: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_005549e9
// 005549ec: TEST ESI,ESI
// 005549ee: JZ 0x00554a00
//   XREF to: 00554a00 (CONDITIONAL_JUMP)
// 005549f0: PUSH 0x79
// 005549f2: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 005549f7: PUSH ESI
// 005549f8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005549fd: ADD ESP,0xc
// 00554a00: MOV EDI,dword ptr [EBX + 0x4]
//   Label: LAB_00554a00
// 00554a03: TEST EDI,EDI
// 00554a05: JNZ 0x00554a32
//   XREF to: 00554a32 (CONDITIONAL_JUMP)
// 00554a07: MOV EAX,EBX
// 00554a09: POP EBP
// 00554a0a: POP EDI
// 00554a0b: POP ESI
// 00554a0c: POP EBX
// 00554a0d: RET
// 00554a0e: MOV ECX,0x640acb
//   Label: LAB_00554a0e
//   XREF to: 00640acb (PARAM)
// 00554a13: MOV ESI,0x17f
// 00554a18: PUSH EDX
// 00554a19: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00554a1f: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00554a25: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00554a2a: ADD ESP,0x4
// 00554a2d: JMP 0x00554953
//   XREF to: 00554953 (UNCONDITIONAL_JUMP)
// 00554a32: PUSH 0x79
//   Label: LAB_00554a32
// 00554a34: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 00554a39: PUSH EDI
// 00554a3a: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00554a3f: ADD ESP,0xc
// 00554a42: MOV EAX,EBX
// 00554a44: POP EBP
// 00554a45: POP EDI
// 00554a46: POP ESI
// 00554a47: POP EBX
// 00554a48: RET
