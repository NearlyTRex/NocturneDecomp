// Name: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// Address: 004b2640
// Address Range: [[004b2640, 004b2760]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640(char * filename)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b446b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb696 [UNCONDITIONAL_CALL]
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_rt_006261e5
//   TerminatedCString s_engine_fileio_cpp_006261e8
// Function calls:
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640(char *filename)

{
  FILE *stream_ptr;
  int *piVar1;
  void *pvVar2;
  void *unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  char *in_stack_00000008;
  int *in_stack_0000000c;
  STimestampRecord *file_ptr;
  
  iVar4 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (in_stack_00000008,(char *)0x0,"rt","..\\engine\\fileio.cpp"
                            ,0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b2681;
    }
    piVar1 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar1 != 6) break;
    iVar4 = iVar4 + 1;
    (*Sleep)(500);
  } while (iVar4 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b2681:
  if (stream_ptr == (FILE *)0x0) {
    return 0;
  }
  file_ptr = (STimestampRecord *)0x0;
  iVar4 = engine_fileio_cpp_readTimestampFile_FUN_004b23a0
                    ((FILE *)&stack0xfffffff0,(STimestampRecord **)&stack0xfffffff4,
                     in_stack_0000000c);
  if (file_ptr != (STimestampRecord *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)file_ptr,"..\\engine\\fileio.cpp",0xc4);
  }
  iVar5 = -1;
  if (-1 < iVar4) {
    iVar3 = 0;
    iVar5 = 0;
    pvVar2 = unaff_EBX;
    if (0 < iVar4) {
      do {
        if (iVar5 < *(int *)((int)pvVar2 + 0x100)) {
          iVar5 = *(int *)((int)pvVar2 + 0x100);
        }
        iVar3 = iVar3 + 1;
        pvVar2 = (void *)((int)pvVar2 + 0x148);
      } while (iVar3 < iVar4);
    }
  }
  if (unaff_EBX != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EBX,"..\\engine\\fileio.cpp",0x201);
  }
  return iVar5;
}


// Assembly code:
// 004b2640: PUSH EBX
//   Label: engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
// 004b2641: PUSH ESI
// 004b2642: PUSH EDI
// 004b2643: PUSH EBP
// 004b2644: SUB ESP,0x8
// 004b2647: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004b264b: XOR ESI,ESI
// 004b264d: PUSH 0x153
//   Label: LAB_004b264d
// 004b2652: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b2657: PUSH 0x6261e5
//   XREF to: 006261e5 (DATA)
// 004b265c: PUSH 0x0
// 004b265e: PUSH EDI
// 004b265f: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b2664: MOV EBX,EAX
// 004b2666: ADD ESP,0x14
// 004b2669: TEST EAX,EAX
// 004b266b: JNZ 0x004b2740
//   XREF to: 004b2740 (CONDITIONAL_JUMP)
// 004b2671: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b2676: CMP dword ptr [EAX],0x6
// 004b2679: JZ 0x004b2725
//   XREF to: 004b2725 (CONDITIONAL_JUMP)
// 004b267f: XOR EBX,EBX
//   Label: LAB_004b267f
// 004b2681: MOV dword ptr [ESP],EBX
//   Label: LAB_004b2681
//   XREF to: Stack[-0x18] (DATA)
// 004b2684: TEST EBX,EBX
// 004b2686: JZ 0x004b2757
//   XREF to: 004b2757 (CONDITIONAL_JUMP)
// 004b268c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004b2690: PUSH EBX
// 004b2691: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004b2695: PUSH ESI
// 004b2696: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 004b269a: PUSH EAX
// 004b269b: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 004b269f: XOR ECX,ECX
// 004b26a1: PUSH EAX
// 004b26a2: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004b26a6: CALL engine_fileio.cpp_readTimestampFile_FUN_004b23a0
//   XREF to: 004b23a0 (UNCONDITIONAL_CALL)
// 004b26ab: ADD ESP,0x10
// 004b26ae: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004b26b1: MOV EDI,EAX
// 004b26b3: TEST EBP,EBP
// 004b26b5: JZ 0x004b26cf
//   XREF to: 004b26cf (CONDITIONAL_JUMP)
// 004b26b7: PUSH 0xc4
// 004b26bc: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b26c1: PUSH EBP
// 004b26c2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b26c7: ADD ESP,0xc
// 004b26ca: XOR EDX,EDX
// 004b26cc: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 004b26cf: MOV ESI,0xffffffff
//   Label: LAB_004b26cf
// 004b26d4: TEST EDI,EDI
// 004b26d6: JL 0x004b26fa
//   XREF to: 004b26fa (CONDITIONAL_JUMP)
// 004b26d8: XOR EBX,EBX
// 004b26da: XOR ESI,ESI
// 004b26dc: TEST EDI,EDI
// 004b26de: JLE 0x004b26fa
//   XREF to: 004b26fa (CONDITIONAL_JUMP)
// 004b26e0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004b26e4: MOV ECX,dword ptr [EAX + 0x100]
//   Label: LAB_004b26e4
// 004b26ea: CMP ESI,ECX
// 004b26ec: JGE 0x004b26f0
//   XREF to: 004b26f0 (CONDITIONAL_JUMP)
// 004b26ee: MOV ESI,ECX
// 004b26f0: INC EBX
//   Label: LAB_004b26f0
// 004b26f1: ADD EAX,0x148
// 004b26f6: CMP EBX,EDI
// 004b26f8: JL 0x004b26e4
//   XREF to: 004b26e4 (CONDITIONAL_JUMP)
// 004b26fa: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_004b26fa
//   XREF to: Stack[-0x14] (READ)
// 004b26fe: TEST EBX,EBX
// 004b2700: JZ 0x004b271b
//   XREF to: 004b271b (CONDITIONAL_JUMP)
// 004b2702: PUSH 0x201
// 004b2707: PUSH 0x6261e8
//   XREF to: 006261e8 (DATA)
// 004b270c: PUSH EBX
// 004b270d: XOR EBP,EBP
// 004b270f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004b2714: ADD ESP,0xc
// 004b2717: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004b271b: MOV EAX,ESI
//   Label: LAB_004b271b
// 004b271d: ADD ESP,0x8
// 004b2720: POP EBP
// 004b2721: POP EDI
// 004b2722: POP ESI
// 004b2723: POP EBX
// 004b2724: RET
// 004b2725: PUSH 0x1f4
//   Label: LAB_004b2725
// 004b272a: INC ESI
// 004b272b: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b2732: CMP ESI,0xa
// 004b2735: JL 0x004b264d
//   XREF to: 004b264d (CONDITIONAL_JUMP)
// 004b273b: JMP 0x004b267f
//   XREF to: 004b267f (UNCONDITIONAL_JUMP)
// 004b2740: PUSH 0x400
//   Label: LAB_004b2740
// 004b2745: PUSH 0x0
// 004b2747: PUSH 0x0
// 004b2749: PUSH EAX
// 004b274a: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b274f: ADD ESP,0x10
// 004b2752: JMP 0x004b2681
//   XREF to: 004b2681 (UNCONDITIONAL_JUMP)
// 004b2757: XOR EAX,EAX
//   Label: LAB_004b2757
// 004b2759: ADD ESP,0x8
// 004b275c: POP EBP
// 004b275d: POP EDI
// 004b275e: POP ESI
// 004b275f: POP EBX
// 004b2760: RET
