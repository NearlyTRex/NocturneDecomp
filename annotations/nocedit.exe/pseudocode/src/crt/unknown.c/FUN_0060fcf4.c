// Name: crt_unknown.c_FUN_0060fcf4
// Address: 0060fcf4
// Address Range: [[0060fcf4, 0060fe91]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fcf4()

#include "nocturne.h"

uint crt_unknown_c_FUN_0060fcf4(short *param_1)

{
  short sVar1;
  uint *ptr;
  int iVar2;
  uint n;
  SIZE_T count;
  ulong new_size;
  ulong unaff_EDI;
  bool bVar3;
  short *in_stack_00000004;
  uint in_stack_00000010;
  
  ptr = (uint *)g_EnvironInitialized;
  if (in_stack_00000004 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*in_stack_00000004 != 0) {
    sVar1 = in_stack_00000004[1];
    for (param_1 = in_stack_00000004 + 1; (sVar1 != 0 && (*param_1 != 0x3d)); param_1 = param_1 + 1)
    {
      sVar1 = param_1[1];
    }
  }
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  bVar3 = param_1[1] == 0;
  n = (uint)bVar3;
  if (g_EnvironInitialized == 0) {
    if (bVar3) {
      return 0;
    }
    ptr = (uint *)crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    g_EnvironStringArea = (char **)(ptr + 2);
    g_EnvironInitialized = (int)ptr;
    *ptr = n;
    ptr[1] = n;
  }
  else {
    iVar2 = crt_unknown_c_FUN_0060fe94();
    if (bVar3) {
      return 0;
    }
    if (iVar2 < 1) {
      n = -iVar2;
      count = iVar2 * -4;
      new_size = iVar2 * -5 + 9;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = (uint *)crt_memory_c_malloc_FUN_00601bb0(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memcpy_FUN_0060cd60(ptr,(void *)g_EnvironInitialized,count);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar2));
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,unaff_EDI);
      }
      else {
        ptr = (uint *)crt_memory_c_realloc_FUN_00601df0(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memmove_FUN_005fe5e0(ptr + (2 - iVar2),g_EnvironStringArea,n);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar2));
      }
      ptr[1 - iVar2] = 0;
      g_EnvironInitialized = (int)ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = in_stack_00000010;
  *(byte *)(n + (int)g_EnvironStringArea) = 0;
  return 0;
}
