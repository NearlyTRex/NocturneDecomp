// Name: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
// Address: 00555500
// Address Range: [[00555500, 005556e7]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500(CColorQuantizer * this_ptr, int num_entries)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 (00556180) at 0055619c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640c73
//   TerminatedCString s_shape_quantize_cpp_00640c89
//   TerminatedCString s_shape_quantize_cpp_00640c9f
//   TerminatedCString s_shape_quantize_cpp_00640cb5
//   TerminatedCString s_shape_quantize_cpp_00640ccb
//   TerminatedCString s_shape_quantize_cpp_00640ce1
//   TerminatedCString s_shape_quantize_cpp_00640cf7
//   TerminatedCString s_shape_quantize_cpp_00640d0d
//   TerminatedCString s_shape_quantize_cpp_00640d23
//   TerminatedCString s_shape_quantize_cpp_00640d39
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

int __cdecl
shape_quantize_cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
          (CColorQuantizer *this_ptr,int num_entries)

{
  ulong count;
  float *pfVar1;
  
  this_ptr->current_g = 0.0;
  this_ptr->current_b = 0.0;
  this_ptr->current_i = 0.0;
  this_ptr->current_r = 0.0;
  if (this_ptr->error_buffer_r != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x287;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_r);
  }
  if (this_ptr->error_buffer_g != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x288;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_g);
  }
  if (this_ptr->error_buffer_b != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x289;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_b);
  }
  if (this_ptr->error_buffer_i != (float *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x28a;
    crt_memory_c_free_FUN_005fe659(this_ptr->error_buffer_i);
  }
  if (this_ptr->flags_buffer != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x28b;
    crt_memory_c_free_FUN_005fe659(this_ptr->flags_buffer);
  }
  count = num_entries * 8;
  pfVar1 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (count,"..\\shape\\quantize.cpp",0x28d);
  this_ptr->error_buffer_r = pfVar1;
  if (pfVar1 != (float *)0x0) {
    pfVar1 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (count,"..\\shape\\quantize.cpp",0x290);
    this_ptr->error_buffer_g = pfVar1;
    if (pfVar1 != (float *)0x0) {
      pfVar1 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                  (count,"..\\shape\\quantize.cpp",0x293);
      this_ptr->error_buffer_b = pfVar1;
      if (pfVar1 != (float *)0x0) {
        pfVar1 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                    (count,"..\\shape\\quantize.cpp",0x296);
        this_ptr->error_buffer_i = pfVar1;
        if (pfVar1 != (float *)0x0) {
          pfVar1 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                      (num_entries,"..\\shape\\quantize.cpp",0x299);
          this_ptr->flags_buffer = (uchar *)pfVar1;
          if (pfVar1 != (float *)0x0) {
            crt_memory_c_memset_FUN_005fde40(this_ptr->error_buffer_r,0,count);
            crt_memory_c_memset_FUN_005fde40(this_ptr->error_buffer_g,0,count);
            crt_memory_c_memset_FUN_005fde40(this_ptr->error_buffer_b,0,count);
            crt_memory_c_memset_FUN_005fde40(this_ptr->error_buffer_i,0,count);
            crt_memory_c_memset_FUN_005fde40(this_ptr->flags_buffer,0,num_entries);
            this_ptr->serpentine_toggle = 0;
            this_ptr->status = -1;
            return 1;
          }
        }
      }
    }
  }
  return (int)pfVar1;
}


// Assembly code:
// 00555500: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
// 00555501: PUSH ESI
// 00555502: PUSH EDI
// 00555503: PUSH EBP
// 00555504: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00555508: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055550c: MOV dword ptr [EBX + 0x24],0x0
// 00555513: MOV dword ptr [EBX + 0x28],0x0
// 0055551a: MOV dword ptr [EBX + 0x2c],0x0
// 00555521: MOV EDX,dword ptr [EBX + 0x10]
// 00555524: MOV dword ptr [EBX + 0x20],0x0
// 0055552b: TEST EDX,EDX
// 0055552d: JNZ 0x005555ef
//   XREF to: 005555ef (CONDITIONAL_JUMP)
// 00555533: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_00555533
// 00555536: TEST EAX,EAX
// 00555538: JZ 0x00555559
//   XREF to: 00555559 (CONDITIONAL_JUMP)
// 0055553a: MOV EDX,0x640c89
//   XREF to: 00640c89 (PARAM)
// 0055553f: MOV ECX,0x288
// 00555544: PUSH EAX
// 00555545: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0055554b: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00555551: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00555556: ADD ESP,0x4
// 00555559: MOV EBP,dword ptr [EBX + 0x18]
//   Label: LAB_00555559
// 0055555c: TEST EBP,EBP
// 0055555e: JZ 0x0055557e
//   XREF to: 0055557e (CONDITIONAL_JUMP)
// 00555560: MOV EAX,0x640c9f
//   XREF to: 00640c9f (PARAM)
// 00555565: MOV EDX,0x289
// 0055556a: PUSH EBP
// 0055556b: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 00555570: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 00555576: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0055557b: ADD ESP,0x4
// 0055557e: MOV ESI,dword ptr [EBX + 0x1c]
//   Label: LAB_0055557e
// 00555581: TEST ESI,ESI
// 00555583: JZ 0x005555a3
//   XREF to: 005555a3 (CONDITIONAL_JUMP)
// 00555585: MOV EBP,0x640cb5
//   XREF to: 00640cb5 (DATA)
// 0055558a: MOV EAX,0x28a
// 0055558f: PUSH ESI
// 00555590: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 00555596: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0055559b: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005555a0: ADD ESP,0x4
// 005555a3: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_005555a3
// 005555a6: TEST ECX,ECX
// 005555a8: JZ 0x005555c9
//   XREF to: 005555c9 (CONDITIONAL_JUMP)
// 005555aa: MOV ESI,0x640ccb
//   XREF to: 00640ccb (DATA)
// 005555af: MOV EBP,0x28b
// 005555b4: PUSH ECX
// 005555b5: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 005555bb: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 005555c1: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005555c6: ADD ESP,0x4
// 005555c9: PUSH 0x28d
//   Label: LAB_005555c9
// 005555ce: PUSH 0x640ce1
//   XREF to: 00640ce1 (DATA)
// 005555d3: LEA ESI,[EDI*0x8 + 0x0]
// 005555da: PUSH ESI
// 005555db: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 005555e0: ADD ESP,0xc
// 005555e3: MOV dword ptr [EBX + 0x10],EAX
// 005555e6: TEST EAX,EAX
// 005555e8: JNZ 0x00555613
//   XREF to: 00555613 (CONDITIONAL_JUMP)
// 005555ea: POP EBP
//   Label: LAB_005555ea
// 005555eb: POP EDI
// 005555ec: POP ESI
// 005555ed: POP EBX
// 005555ee: RET
// 005555ef: MOV ECX,0x640c73
//   Label: LAB_005555ef
//   XREF to: 00640c73 (PARAM)
// 005555f4: MOV ESI,0x287
// 005555f9: PUSH EDX
// 005555fa: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00555600: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00555606: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0055560b: ADD ESP,0x4
// 0055560e: JMP 0x00555533
//   XREF to: 00555533 (UNCONDITIONAL_JUMP)
// 00555613: PUSH 0x290
//   Label: LAB_00555613
// 00555618: PUSH 0x640cf7
//   XREF to: 00640cf7 (DATA)
// 0055561d: PUSH ESI
// 0055561e: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00555623: ADD ESP,0xc
// 00555626: MOV dword ptr [EBX + 0x14],EAX
// 00555629: TEST EAX,EAX
// 0055562b: JZ 0x005555ea
//   XREF to: 005555ea (CONDITIONAL_JUMP)
// 0055562d: PUSH 0x293
// 00555632: PUSH 0x640d0d
//   XREF to: 00640d0d (DATA)
// 00555637: PUSH ESI
// 00555638: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0055563d: ADD ESP,0xc
// 00555640: MOV dword ptr [EBX + 0x18],EAX
// 00555643: TEST EAX,EAX
// 00555645: JZ 0x005555ea
//   XREF to: 005555ea (CONDITIONAL_JUMP)
// 00555647: PUSH 0x296
// 0055564c: PUSH 0x640d23
//   XREF to: 00640d23 (DATA)
// 00555651: PUSH ESI
// 00555652: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00555657: ADD ESP,0xc
// 0055565a: MOV dword ptr [EBX + 0x1c],EAX
// 0055565d: TEST EAX,EAX
// 0055565f: JZ 0x005555ea
//   XREF to: 005555ea (CONDITIONAL_JUMP)
// 00555661: PUSH 0x299
// 00555666: PUSH 0x640d39
//   XREF to: 00640d39 (DATA)
// 0055566b: PUSH EDI
// 0055566c: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00555671: ADD ESP,0xc
// 00555674: MOV dword ptr [EBX + 0x8],EAX
// 00555677: TEST EAX,EAX
// 00555679: JZ 0x005555ea
//   XREF to: 005555ea (CONDITIONAL_JUMP)
// 0055567f: PUSH ESI
// 00555680: PUSH 0x0
// 00555682: MOV ECX,dword ptr [EBX + 0x10]
// 00555685: PUSH ECX
// 00555686: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0055568b: ADD ESP,0xc
// 0055568e: PUSH ESI
// 0055568f: PUSH 0x0
// 00555691: MOV EBP,dword ptr [EBX + 0x14]
// 00555694: PUSH EBP
// 00555695: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0055569a: ADD ESP,0xc
// 0055569d: PUSH ESI
// 0055569e: PUSH 0x0
// 005556a0: MOV EAX,dword ptr [EBX + 0x18]
// 005556a3: PUSH EAX
// 005556a4: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005556a9: ADD ESP,0xc
// 005556ac: PUSH ESI
// 005556ad: PUSH 0x0
// 005556af: MOV EDX,dword ptr [EBX + 0x1c]
// 005556b2: PUSH EDX
// 005556b3: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005556b8: ADD ESP,0xc
// 005556bb: PUSH EDI
// 005556bc: PUSH 0x0
// 005556be: MOV ECX,dword ptr [EBX + 0x8]
// 005556c1: PUSH ECX
// 005556c2: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005556c7: MOV EAX,0x1
// 005556cc: MOV dword ptr [EBX + 0x4b30],0x0
// 005556d6: ADD ESP,0xc
// 005556d9: MOV dword ptr [EBX + 0x4b34],0xffffffff
// 005556e3: POP EBP
// 005556e4: POP EDI
// 005556e5: POP ESI
// 005556e6: POP EBX
// 005556e7: RET
