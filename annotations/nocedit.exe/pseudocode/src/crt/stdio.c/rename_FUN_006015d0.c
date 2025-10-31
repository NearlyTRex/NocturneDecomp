// Name: crt_stdio.c_rename_FUN_006015d0
// Address: 006015d0
// Address Range: [[006015d0, 006015f0]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_rename_FUN_006015d0(char * old_filename, char * new_filename)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b49d2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbaa9 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb87d [UNCONDITIONAL_CALL]
// Globals:
//   MoveFileA* PTR_MoveFileA_006115f0 = 00212086
// Function calls:
//   crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   MoveFileA

#include "nocturne.h"

int __watcallStack crt_stdio_c_rename_FUN_006015d0(char *old_filename,char *new_filename)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = (*PTR_MoveFileA_006115f0)(old_filename,new_filename);
  if (BVar1 == 0) {
    DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar2;
  }
  return 0;
}


// Assembly code:
// 006015d0: PUSH EBX
//   Label: crt_stdio.c_rename_FUN_006015d0
// 006015d1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 006015d5: PUSH EDX
// 006015d6: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006015da: PUSH EBX
// 006015db: CALL dword ptr CS:[0x6115f0]
//   XREF to: EXTERNAL:00000087 (COMPUTED_CALL)
//   XREF to: 006115f0 (READ)
// 006015e2: TEST EAX,EAX
// 006015e4: JNZ 0x006015ed
//   XREF to: 006015ed (CONDITIONAL_JUMP)
// 006015e6: CALL crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
//   XREF to: 006083fc (UNCONDITIONAL_CALL)
// 006015eb: POP EBX
// 006015ec: RET
// 006015ed: XOR EAX,EAX
//   Label: LAB_006015ed
// 006015ef: POP EBX
// 006015f0: RET
