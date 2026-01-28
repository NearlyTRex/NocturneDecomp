// Name: crt_unknown.c_FUN_0060fb40
// Address: 0060fb40
// Address Range: [[0060fb40, 0060fcf0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fb40(void)

#include "nocturne.h"

int crt_unknown_c_FUN_0060fb40(void)

{
  SIZE_T SVar1;
  LPWSTR pWVar2;
  int iVar3;
  void *dest;
  ulong uVar4;
  void *dest_00;
  char *dest_01;
  LPWSTR in_stack_00000004;
  
  pWVar2 = (LPWSTR)crt_unknown_c_FUN_006107c0();
  if (pWVar2 == (LPWSTR)0x0) {
    iVar3 = -1;
  }
  else {
    if (pWVar2 == in_stack_00000004) {
      return -1;
    }
    SVar1 = ((int)pWVar2 - (int)in_stack_00000004 >> 1) * 2;
    dest = crt_memory_c_malloc_FUN_00601bb0(SVar1 + 2);
    if (dest == (void *)0x0) {
      return -1;
    }
    crt_string_c_memcpy_FUN_0060cd60(dest,in_stack_00000004,SVar1);
    *(ushort *)((int)dest + SVar1) = 0;
    uVar4 = crt_string_c_wcslen_FUN_0060cd30(pWVar2 + 1);
    if (uVar4 == 0) {
      dest_00 = (void *)0x0;
    }
    else {
      SVar1 = uVar4 * 2;
      dest_00 = crt_memory_c_malloc_FUN_00601bb0(SVar1 + 2);
      if (dest_00 == (void *)0x0) {
        crt_memory_c_free_FUN_00601cd0(dest);
        return -1;
      }
      crt_string_c_memcpy_FUN_0060cd60(dest_00,pWVar2 + 1,SVar1);
      *(ushort *)((int)dest_00 + SVar1) = 0;
    }
    iVar3 = crt_unknown_c_FUN_006107f0();
    crt_memory_c_free_FUN_00601cd0(dest);
    crt_memory_c_free_FUN_00601cd0(dest_00);
    if (iVar3 == 0) {
      return -1;
    }
    if (g_EnvironInitialized == 0) {
      crt_unknown_c_FUN_00610900();
    }
    iVar3 = crt_unknown_c_FUN_0060fcf4();
    if (iVar3 != 0) {
      return -1;
    }
    uVar4 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
    dest_01 = crt_memory_c_malloc_FUN_00601bb0((uVar4 + 1) * 2);
    if (dest_01 == (char *)0x0) {
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
      return -1;
    }
    iVar3 = crt_string_c_wcstombs_FUN_0060c0c0(dest_01,in_stack_00000004,(uVar4 + 1) * 2);
    if (iVar3 == -1) {
      crt_memory_c_free_FUN_00601cd0(dest_01);
      return -1;
    }
    iVar3 = crt_env_c_updateEnvironTable_FUN_0060f04c(dest_01);
  }
  return iVar3;
}
