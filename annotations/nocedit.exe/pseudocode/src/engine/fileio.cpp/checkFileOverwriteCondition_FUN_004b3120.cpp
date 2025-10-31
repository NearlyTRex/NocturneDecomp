// Name: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
// Address: 004b3120
// Address Range: [[004b3120, 004b31d2]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120(char * target_filename, char * source_directory)
// Globals:
//   TerminatedCString s_You_currently_have_s_che_00626502
//   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
//   SVersionControlSession g_VersionControlSession
//   undefined4 g_VersionControlSession.field1_0x20[0]
//   undefined4 g_VersionControlSession.field1_0x20[4]
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_checkFileOverwriteCondition_FUN_004b3120
          (char *target_filename,char *source_directory)

{
  uint uVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int aiStack_3e8 [124];
  char acStack_1f8 [4];
  int aiStack_1f4 [122];
  
  uVar1 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,target_filename);
  if (-1 < (int)uVar1) {
    if (((source_directory != (char *)0x0) && (*source_directory != '\0')) &&
       (iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                          (source_directory,g_VersionControlSession.primary_username), iVar2 == 0))
    {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffc14,"You currently have %s checked out.  Replace local copy with network copy?",target_filename);
      iVar2 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                        (aiStack_3e8,g_VersionControlSession.field1_0x20);
      return iVar2;
    }
    if ((uVar1 & 8) == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1f8,"A writable copy of %s exists.  Replace it?",target_filename);
      iVar2 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                        (aiStack_1f4,g_VersionControlSession.field1_0x20 + 4);
      return iVar2;
    }
  }
  return 1;
}


// Assembly code:
// 004b3120: PUSH EBX
//   Label: engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120
// 004b3121: PUSH ESI
// 004b3122: PUSH EDI
// 004b3123: SUB ESP,0x3e8
// 004b3129: MOV ESI,dword ptr [ESP + 0x3f8]
//   XREF to: Stack[0x4] (READ)
// 004b3130: MOV EDI,dword ptr [ESP + 0x3fc]
//   XREF to: Stack[0x8] (READ)
// 004b3137: PUSH ESI
// 004b3138: PUSH 0x0
// 004b313a: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b313f: ADD ESP,0x8
// 004b3142: MOV EBX,EAX
// 004b3144: TEST EAX,EAX
// 004b3146: JL 0x004b3168
//   XREF to: 004b3168 (CONDITIONAL_JUMP)
// 004b3148: TEST EDI,EDI
// 004b314a: JZ 0x004b3163
//   XREF to: 004b3163 (CONDITIONAL_JUMP)
// 004b314c: CMP byte ptr [EDI],0x0
// 004b314f: JZ 0x004b3163
//   XREF to: 004b3163 (CONDITIONAL_JUMP)
// 004b3151: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b3156: PUSH EDI
// 004b3157: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b315c: ADD ESP,0x8
// 004b315f: TEST EAX,EAX
// 004b3161: JZ 0x004b3177
//   XREF to: 004b3177 (CONDITIONAL_JUMP)
// 004b3163: TEST BL,0x8
//   Label: LAB_004b3163
// 004b3166: JZ 0x004b319e
//   XREF to: 004b319e (CONDITIONAL_JUMP)
// 004b3168: MOV EAX,0x1
//   Label: LAB_004b3168
// 004b316d: ADD ESP,0x3e8
//   Label: LAB_004b316d
// 004b3173: POP EDI
// 004b3174: POP ESI
// 004b3175: POP EBX
// 004b3176: RET
// 004b3177: PUSH ESI
//   Label: LAB_004b3177
// 004b3178: PUSH 0x626502
//   XREF to: 00626502 (DATA)
// 004b317d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3f4] (DATA)
// 004b3181: PUSH EAX
// 004b3182: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b3187: ADD ESP,0xc
// 004b318a: PUSH 0x2d12bf0
//   XREF to: 02d12bf0 (DATA)
// 004b318f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3f4] (DATA)
// 004b3193: PUSH EAX
// 004b3194: CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
// 004b3199: ADD ESP,0x8
// 004b319c: JMP 0x004b316d
//   XREF to: 004b316d (UNCONDITIONAL_JUMP)
// 004b319e: PUSH ESI
//   Label: LAB_004b319e
// 004b319f: PUSH 0x62654c
//   XREF to: 0062654c (DATA)
// 004b31a4: LEA EAX,[ESP + 0x1fc]
//   XREF to: Stack[-0x200] (DATA)
// 004b31ab: PUSH EAX
// 004b31ac: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b31b1: ADD ESP,0xc
// 004b31b4: PUSH 0x2d12bf4
//   XREF to: 02d12bf4 (DATA)
// 004b31b9: LEA EAX,[ESP + 0x1f8]
//   XREF to: Stack[-0x200] (DATA)
// 004b31c0: PUSH EAX
// 004b31c1: CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
// 004b31c6: ADD ESP,0x8
// 004b31c9: ADD ESP,0x3e8
// 004b31cf: POP EDI
// 004b31d0: POP ESI
// 004b31d1: POP EBX
// 004b31d2: RET
