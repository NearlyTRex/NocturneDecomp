// Name: shape_superopt.cpp_logToFile_FUN_005c7910
// Address: 005c7910
// Address Range: [[005c7910, 005c7994]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_logToFile_FUN_005c7910(char * format, ...)
// Cross-references:
//   shape_superopt.cpp_CObj_FUN_005d2320 (005d2320) at 005d236f [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2410 (005d2410) at 005d24cb [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2500 (005d2500) at 005d2541 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2580 (005d2580) at 005d25ec [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2650 (005d2650) at 005d2709 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d2720 (005d2720) at 005d2861 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d71e0 (005d71e0) at 005d7261 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7290 (005d7290) at 005d730c [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7350 (005d7350) at 005d7420 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7690 (005d7690) at 005d76d0 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 (005ca590) at 005cb062 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_log_txt_006541e2
//   TerminatedCString s_shape_superopt_cpp_006541ea
//   TerminatedCString s_at_00654200
//   TerminatedCString s_log_txt_00654203
//   TerminatedCString s_shape_superopt_cpp_0065420b
//   int g_LogInitialized
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fprintf_FUN_006021c0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)

{
  FILE *stream;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  
  if (g_LogInitialized == 0) {
    crt_io_c_deleteFile_FUN_005ff9d0("log.txt");
    g_LogInitialized = 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("log.txt",(char *)0x0,"at","..\\shape\\superopt.cpp",
                      0x34);
  if (stream == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fprintf_FUN_006021c0(stream,in_stack_0000000c,&stack0x00000000);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\shape\\superopt.cpp",0x3a);
  return;
}


// Assembly code:
// 005c7910: PUSH EBX
//   Label: shape_superopt.cpp_logToFile_FUN_005c7910
// 005c7911: SUB ESP,0x4
// 005c7914: CMP dword ptr [0x03f6bbe0],0x0
//   XREF to: 03f6bbe0 (READ)
// 005c791b: JNZ 0x005c7935
//   XREF to: 005c7935 (CONDITIONAL_JUMP)
// 005c791d: PUSH 0x6541e2
//   XREF to: 006541e2 (DATA)
// 005c7922: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005c7927: MOV ECX,0x1
// 005c792c: ADD ESP,0x4
// 005c792f: MOV dword ptr [0x03f6bbe0],ECX
//   XREF to: 03f6bbe0 (WRITE)
// 005c7935: PUSH 0x34
//   Label: LAB_005c7935
// 005c7937: PUSH 0x6541ea
//   XREF to: 006541ea (DATA)
// 005c793c: PUSH 0x654200
//   XREF to: 00654200 (DATA)
// 005c7941: PUSH 0x0
// 005c7943: PUSH 0x654203
//   XREF to: 00654203 (DATA)
// 005c7948: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005c794d: MOV EBX,EAX
// 005c794f: ADD ESP,0x14
// 005c7952: TEST EAX,EAX
// 005c7954: JNZ 0x005c795b
//   XREF to: 005c795b (CONDITIONAL_JUMP)
// 005c7956: ADD ESP,0x4
// 005c7959: POP EBX
// 005c795a: RET
// 005c795b: PUSH EDI
//   Label: LAB_005c795b
// 005c795c: PUSH ESI
// 005c795d: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 005c7961: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005c7965: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x8] (DATA)
// 005c7969: PUSH EAX
// 005c796a: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c796e: PUSH ESI
// 005c796f: PUSH EBX
// 005c7970: CALL crt_stdio.c_fprintf_FUN_006021c0
//   XREF to: 006021c0 (UNCONDITIONAL_CALL)
// 005c7975: ADD ESP,0xc
// 005c7978: PUSH 0x3a
// 005c797a: PUSH 0x65420b
//   XREF to: 0065420b (DATA)
// 005c797f: XOR EDI,EDI
// 005c7981: PUSH EBX
// 005c7982: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x8] (WRITE)
// 005c7986: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005c798b: ADD ESP,0xc
// 005c798e: POP ESI
// 005c798f: POP EDI
// 005c7990: ADD ESP,0x4
// 005c7993: POP EBX
// 005c7994: RET
