// Name: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
// Address: 00470510
// Address Range: [[00470510, 0047059a]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_save_FUN_00470510(CDemonFilter * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_wb_0061e713
//   TerminatedCString s_art_0061e716
//   TerminatedCString s_core_dfilter_cpp_0061e71a
//   TerminatedCString s_CDemonFilter_save_Bad_fi_0061e72e
//   TerminatedCString s_core_dfilter_cpp_0061e750
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fputc_FUN_006007a0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_save_FUN_00470510(CDemonFilter *this_ptr,char *filename)

{
  FILE *file;
  int iVar1;
  
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"wb");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dfilter.cpp";
    g_CurrentLineNumber = 0xeb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::save - Bad filename");
  }
  for (iVar1 = 0; iVar1 < this_ptr->size * this_ptr->count; iVar1 = iVar1 + 1) {
    crt_stdio_c_fputc_FUN_006007a0((uint)*(byte *)(iVar1 + (int)this_ptr->data_buffer) << 2,file);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dfilter.cpp",0xf5);
  return;
}


// Assembly code:
// 00470510: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
// 00470511: PUSH ESI
// 00470512: PUSH EDI
// 00470513: PUSH EBP
// 00470514: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00470518: PUSH 0x61e713
//   XREF to: 0061e713 (DATA)
// 0047051d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00470521: PUSH EDX
// 00470522: PUSH 0x61e716
//   XREF to: 0061e716 (DATA)
// 00470527: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0047052c: ADD ESP,0xc
// 0047052f: MOV EDI,EAX
// 00470531: TEST EAX,EAX
// 00470533: JZ 0x0047055b
//   XREF to: 0047055b (CONDITIONAL_JUMP)
// 00470535: XOR EBX,EBX
//   Label: LAB_00470535
// 00470537: MOV EBP,dword ptr [ESI + 0x4]
//   Label: LAB_00470537
// 0047053a: MOV EAX,dword ptr [ESI]
// 0047053c: IMUL EAX,EBP
// 0047053f: CMP EBX,EAX
// 00470541: JL 0x00470580
//   XREF to: 00470580 (CONDITIONAL_JUMP)
// 00470543: PUSH 0xf5
// 00470548: PUSH 0x61e750
//   XREF to: 0061e750 (DATA)
// 0047054d: PUSH EDI
// 0047054e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00470553: ADD ESP,0xc
// 00470556: POP EBP
// 00470557: POP EDI
// 00470558: POP ESI
// 00470559: POP EBX
// 0047055a: RET
// 0047055b: MOV ECX,0x61e71a
//   Label: LAB_0047055b
//   XREF to: 0061e71a (DATA)
// 00470560: MOV EBX,0xeb
// 00470565: PUSH 0x61e72e
//   XREF to: 0061e72e (DATA)
// 0047056a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00470570: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00470576: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047057b: ADD ESP,0x4
// 0047057e: JMP 0x00470535
//   XREF to: 00470535 (UNCONDITIONAL_JUMP)
// 00470580: MOV EAX,dword ptr [ESI + 0x48]
//   Label: LAB_00470580
// 00470583: PUSH EDI
// 00470584: MOV AL,byte ptr [EBX + EAX*0x1]
// 00470587: AND EAX,0xff
// 0047058c: SHL EAX,0x2
// 0047058f: PUSH EAX
// 00470590: INC EBX
// 00470591: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00470596: ADD ESP,0x8
// 00470599: JMP 0x00470537
//   XREF to: 00470537 (UNCONDITIONAL_JUMP)
