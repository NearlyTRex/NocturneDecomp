// Name: crt_io.c_getcwd_wrapper_FUN_00608d20
// Address: 0060128c
// Address Range: [[0060128c, 00601290]]
// Convention: __cdecl
// Signature: char * crt_io.c_getcwd_wrapper_FUN_00608d20(char * buffer, SIZE_T size)
// Cross-references:
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004b9fca [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f49a [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_io_c_getcwd_wrapper_FUN_00608d20(char *buffer,SIZE_T size)

{
  DWORD DVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  CHAR aCStack_110 [4];
  undefined4 uStack_10c;
  char acStack_100 [244];
  
  bVar5 = 0;
  DVar1 = (*GetCurrentDirectoryA)(0x104,aCStack_110);
  if (DVar1 == 0) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    buffer = (char *)0x0;
  }
  else {
    if (buffer == (char *)0x0) {
      uVar2 = DVar1 + 1;
      if (DVar1 + 1 < size) {
        uVar2 = size;
      }
      uStack_10c = 0x608d66;
      buffer = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar2);
      if (buffer == (char *)0x0) {
        crt_errno_c_setErrno_FUN_00602790(5);
        return (char *)0x0;
      }
    }
    else if (size < DVar1) {
      uStack_10c = 0x608d90;
      crt_errno_c_setErrno_FUN_00602790(0xe);
      return (char *)0x0;
    }
    pcVar3 = acStack_100;
    pcVar4 = buffer;
    for (uVar2 = DVar1 + 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -8 + 4;
      pcVar4 = pcVar4 + (uint)bVar5 * -8 + 4;
    }
    for (uVar2 = DVar1 + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  return buffer;
}


// Assembly code:
// 0060128c: JMP 0x00608d20
//   Label: crt_io.c_getcwd_wrapper_FUN_00608d20
//   XREF to: 00608d20 (UNCONDITIONAL_JUMP)
