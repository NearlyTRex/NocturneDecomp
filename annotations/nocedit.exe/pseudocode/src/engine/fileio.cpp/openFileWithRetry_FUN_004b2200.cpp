// Name: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
// Address: 004b2200
// Address Range: [[004b2200, 004b2265]]
// Convention: __cdecl
// Signature: FILE * engine_fileio.cpp_openFileWithRetry_FUN_004b2200(char * filename, char * mode)
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_00626129
// Function calls:
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

FILE * __cdecl engine_fileio_cpp_openFileWithRetry_FUN_004b2200(char *filename,char *mode)

{
  FILE *stream_ptr;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (filename,(char *)0x0,mode,"..\\engine\\fileio.cpp",0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      return stream_ptr;
    }
    piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar1 != 6) break;
    iVar2 = iVar2 + 1;
    (*Sleep)(500);
    if (9 < iVar2) {
      return (FILE *)0x0;
    }
  }
  return (FILE *)0x0;
}


// Assembly code:
// 004b2200: PUSH EBX
//   Label: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
// 004b2201: PUSH ESI
// 004b2202: PUSH EDI
// 004b2203: PUSH EBP
// 004b2204: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b2208: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b220c: XOR ESI,ESI
// 004b220e: PUSH 0x153
//   Label: LAB_004b220e
// 004b2213: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b2218: PUSH EDI
// 004b2219: PUSH 0x0
// 004b221b: PUSH EBP
// 004b221c: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b2221: MOV EBX,EAX
// 004b2223: ADD ESP,0x14
// 004b2226: TEST EAX,EAX
// 004b2228: JNZ 0x004b224d
//   XREF to: 004b224d (CONDITIONAL_JUMP)
// 004b222a: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b222f: CMP dword ptr [EAX],0x6
// 004b2232: JNZ 0x004b2246
//   XREF to: 004b2246 (CONDITIONAL_JUMP)
// 004b2234: PUSH 0x1f4
// 004b2239: INC ESI
// 004b223a: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b2241: CMP ESI,0xa
// 004b2244: JL 0x004b220e
//   XREF to: 004b220e (CONDITIONAL_JUMP)
// 004b2246: XOR EAX,EAX
//   Label: LAB_004b2246
// 004b2248: POP EBP
// 004b2249: POP EDI
// 004b224a: POP ESI
// 004b224b: POP EBX
// 004b224c: RET
// 004b224d: PUSH 0x400
//   Label: LAB_004b224d
// 004b2252: PUSH 0x0
// 004b2254: PUSH 0x0
// 004b2256: PUSH EAX
// 004b2257: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b225c: ADD ESP,0x10
// 004b225f: MOV EAX,EBX
// 004b2261: POP EBP
// 004b2262: POP EDI
// 004b2263: POP ESI
// 004b2264: POP EBX
// 004b2265: RET
