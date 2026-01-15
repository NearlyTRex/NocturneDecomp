// Name: crt_unknown.c_FUN_0060fcf4
// Address: 0060fcf4
// Address Range: [[0060fcf4, 0060fe91]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fcf4()

#include "nocturne.h"

uint crt_unknown_c_FUN_0060fcf4(short *param_1)

{
  short sVar1;
  short *psVar2;
  uint *ptr;
  int iVar3;
  SIZE_T n;
  ulong new_size;
  short *in_stack_00000004;
  
  ptr = (uint *)g_EnvironInitialized;
  if (in_stack_00000004 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*in_stack_00000004 != 0) {
    sVar1 = in_stack_00000004[1];
    psVar2 = in_stack_00000004;
    while ((param_1 = psVar2 + 1, sVar1 != 0 && (*param_1 != 0x3d))) {
      sVar1 = psVar2[2];
      psVar2 = param_1;
    }
  }
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  sVar1 = param_1[1];
  if (g_EnvironInitialized == 0) {
    if (sVar1 == 0) {
      return 0;
    }
    ptr = crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    g_EnvironStringArea = (char **)(ptr + 2);
    g_EnvironInitialized = (int)ptr;
    *ptr = 0;
    ptr[1] = 0;
    n = 0;
  }
  else {
    iVar3 = crt_unknown_c_FUN_0060fe94();
    if (sVar1 == 0) {
      return 0;
    }
    if (iVar3 < 1) {
      n = -iVar3;
      new_size = n + 1 + iVar3 * -4 + 8U;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = crt_memory_c_malloc_FUN_00601bb0(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memcpy_FUN_0060cd60(ptr,(void *)g_EnvironInitialized,iVar3 * -4);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar3));
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,n + 1);
      }
      else {
        ptr = crt_memory_c_realloc_FUN_00601df0(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memmove_FUN_005fe5e0(ptr + (2 - iVar3),g_EnvironStringArea,n);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar3));
      }
      ptr[1 - iVar3] = 0;
      g_EnvironInitialized = (int)ptr;
    }
    else {
      n = iVar3 - 1;
    }
  }
  ptr[n] = in_stack_00000004;
  *(byte *)(n + (int)g_EnvironStringArea) = 0;
  return 0;
}
