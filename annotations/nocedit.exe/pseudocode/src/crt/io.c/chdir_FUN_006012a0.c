// Name: crt_io.c_chdir_FUN_006012a0
// Address: 006012a0
// Address Range: [[006012a0, 006012b6]]
// Convention: __cdecl
// Signature: int crt_io.c_chdir_FUN_006012a0(char * path)
// Cross-references:
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607f63 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f9a2 [UNCONDITIONAL_CALL]
// Globals:
//   SetCurrentDirectoryA* SetCurrentDirectoryA = 00212138
// Function calls:
//   SetCurrentDirectoryA

#include "nocturne.h"

int __cdecl crt_io_c_chdir_FUN_006012a0(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*SetCurrentDirectoryA)(path);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*GetLastError)();
  iVar2 = crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(windows_error);
  return iVar2;
}


// Assembly code:
// 006012a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_chdir_FUN_006012a0
//   XREF to: Stack[0x4] (READ)
// 006012a4: PUSH EDX
// 006012a5: CALL dword ptr CS:[0x611614]
//   XREF to: EXTERNAL:00000090 (COMPUTED_CALL)
//   XREF to: 00611614 (READ)
// 006012ac: TEST EAX,EAX
// 006012ae: JZ 0x006083fc
//   XREF to: 006083fc (CONDITIONAL_JUMP)
// 006012b4: XOR EAX,EAX
// 006012b6: RET
