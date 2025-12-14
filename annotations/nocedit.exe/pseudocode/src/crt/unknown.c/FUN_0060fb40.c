// Name: crt_unknown.c_FUN_0060fb40
// Address: 0060fb40
// Address Range: [[0060fb40, 0060fcf0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fb40()

#include "nocturne.h"

int crt_unknown_c_FUN_0060fb40(void)

{
  SIZE_T count;
  LPWSTR pWVar1;
  int iVar2;
  void *dest;
  ulong uVar3;
  void *dest_00;
  char *dest_01;
  void *unaff_retaddr;
  LPWSTR in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  
  pWVar1 = (LPWSTR)crt_unknown_c_FUN_006107c0();
  if (pWVar1 == (LPWSTR)0x0) {
    iVar2 = -1;
  }
  else {
    if (pWVar1 == in_stack_00000004) {
      return -1;
    }
    count = ((int)pWVar1 - (int)in_stack_00000004 >> 1) * 2;
    dest = crt_memory_c_malloc_FUN_00601bb0(count + 2);
    if (dest == (void *)0x0) {
      return -1;
    }
    crt_string_c_memcpy_FUN_0060cd60(dest,in_stack_00000004,count);
    *(ushort *)((int)dest + count) = 0;
    uVar3 = crt_string_c_wcslen_FUN_0060cd30(pWVar1 + 1);
    if (uVar3 == 0) {
      dest_00 = (void *)0x0;
    }
    else {
      dest_00 = crt_memory_c_malloc_FUN_00601bb0((int)(uVar3 * 2) + 2);
      if (dest_00 == (void *)0x0) {
        crt_memory_c_free_FUN_00601cd0(dest);
        return -1;
      }
      crt_string_c_memcpy_FUN_0060cd60(dest_00,(void *)(uVar3 * 2),(SIZE_T)unaff_retaddr);
      *(ushort *)((int)dest_00 + (int)in_stack_00000004) = 0;
    }
    iVar2 = crt_unknown_c_FUN_006107f0();
    crt_memory_c_free_FUN_00601cd0(unaff_retaddr);
    crt_memory_c_free_FUN_00601cd0(dest_00);
    if (iVar2 == 0) {
      return -1;
    }
    if (g_EnvironInitialized == 0) {
      crt_unknown_c_FUN_00610900();
    }
    iVar2 = crt_unknown_c_FUN_0060fcf4();
    if (iVar2 != 0) {
      return -1;
    }
    uVar3 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
    dest_01 = crt_memory_c_malloc_FUN_00601bb0(in_stack_0000000c * (uVar3 + 1));
    if (dest_01 == (char *)0x0) {
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
      return -1;
    }
    iVar2 = crt_string_c_wcstombs_FUN_0060c0c0
                      (dest_01,in_stack_00000004,(uVar3 + 1) * in_stack_00000014);
    if (iVar2 == -1) {
      crt_memory_c_free_FUN_00601cd0(dest_01);
      return -1;
    }
    iVar2 = crt_env_c_updateEnvironTable_FUN_0060f04c(dest_01);
  }
  return iVar2;
}
