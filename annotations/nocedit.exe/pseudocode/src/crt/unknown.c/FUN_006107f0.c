// Name: crt_unknown.c_FUN_006107f0
// Address: 006107f0
// Address Range: [[006107f0, 006108f1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006107f0()

#include "nocturne.h"

char * crt_unknown_c_FUN_006107f0(void)

{
  char *pcVar1;
  ulong uVar2;
  char *dest;
  int iVar3;
  LPCWSTR in_stack_00000004;
  LPCWSTR in_stack_00000008;
  LPWSTR in_stack_00000010;
  wchar_t *in_stack_00000014;
  wchar_t *in_stack_0000001c;
  
  if (g_WindowsPlatformVersion < 0x8000) {
    pcVar1 = (char *)(*PTR_SetEnvironmentVariableW_00611620)(in_stack_00000004,in_stack_00000008);
    return pcVar1;
  }
  uVar2 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
  uVar2 = uVar2 * 2 + 1;
  dest = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar2);
  pcVar1 = dest;
  if (dest != (char *)0x0) {
    if (in_stack_00000010 != (LPWSTR)0x0) {
      uVar2 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000010);
      uVar2 = uVar2 * 2 + 1;
      in_stack_00000010 = (LPWSTR)crt_memory_c_malloc_FUN_00601bb0(uVar2);
      if (in_stack_00000010 == (LPWSTR)0x0) {
        crt_memory_c_free_FUN_00601cd0(dest);
        return (char *)0x0;
      }
    }
    iVar3 = crt_string_c_wcstombs_FUN_0060c0c0(dest,in_stack_00000014,uVar2);
    if (iVar3 == -1) {
      crt_memory_c_free_FUN_00601cd0(dest);
      if (in_stack_00000010 != (LPWSTR)0x0) {
        crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
      }
      return (char *)0x0;
    }
    if ((in_stack_00000010 != (LPWSTR)0x0) &&
       (iVar3 = crt_string_c_wcstombs_FUN_0060c0c0
                          ((char *)in_stack_00000010,in_stack_0000001c,uVar2), iVar3 == -1)) {
      crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
      return (char *)0x0;
    }
    pcVar1 = (char *)(*PTR_SetEnvironmentVariableA_0061161c)(dest,(LPCSTR)in_stack_00000010);
    crt_memory_c_free_FUN_00601cd0(dest);
    if (in_stack_00000010 != (LPWSTR)0x0) {
      crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
    }
  }
  return pcVar1;
}
