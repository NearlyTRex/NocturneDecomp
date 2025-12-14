// Name: crt_env.c_putenv_internal_FUN_0060ee80
// Address: 0060ee80
// Address Range: [[0060ee80, 0060f04b]]
// Convention: __cdecl
// Signature: int crt_env.c_putenv_internal_FUN_0060ee80(char * envstr)

#include "nocturne.h"

int __cdecl crt_env_c_putenv_internal_FUN_0060ee80(char *envstr)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  BOOL BVar4;
  void *ptr;
  uint uVar5;
  uint uVar6;
  char *unaff_ESI;
  char *pcVar7;
  LPCSTR unaff_EDI;
  char *pcVar8;
  byte bVar9;
  void *unaff_retaddr;
  char *in_stack_00000008;
  int in_stack_0000000c;
  char *in_stack_00000028;
  
  bVar9 = 0;
  pcVar1 = crt_string_c_char_in_set_FUN_0060e340(envstr,L'=');
  if (pcVar1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    if (pcVar1 == in_stack_00000008) {
      return -1;
    }
    pcVar3 = crt_memory_c_malloc_FUN_00601bb0((ulong)(pcVar1 + (1 - (int)in_stack_00000008)));
    if (pcVar3 == (char *)0x0) {
      return -1;
    }
    pcVar7 = in_stack_00000008;
    pcVar8 = pcVar3;
    for (uVar5 = (uint)unaff_EDI >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pcVar8 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar5 = (uint)unaff_EDI & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    pcVar3[(int)unaff_EDI] = '\0';
    uVar5 = crt_unknown_c_FUN_0060fa90();
    if (uVar5 == 0) {
      unaff_EDI = (LPCSTR)0x0;
    }
    else {
      unaff_ESI = crt_memory_c_malloc_FUN_00601bb0(uVar5 + 1);
      if (unaff_ESI == (char *)0x0) {
        crt_memory_c_free_FUN_00601cd0(pcVar3);
        return -1;
      }
      pcVar1 = pcVar1 + 1;
      pcVar3 = unaff_ESI;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar3 = *(uint *)pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -8 + 4;
        pcVar3 = pcVar3 + (uint)bVar9 * -8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar1;
        pcVar1 = pcVar1 + (uint)bVar9 * -2 + 1;
        pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
      }
      unaff_ESI[uVar5] = '\0';
    }
    BVar4 = (*PTR_SetEnvironmentVariableA_0061161c)(unaff_EDI,unaff_ESI);
    crt_memory_c_free_FUN_00601cd0(unaff_retaddr);
    crt_memory_c_free_FUN_00601cd0(in_stack_00000008);
    if (BVar4 == 0) {
      return -1;
    }
    iVar2 = crt_env_c_updateEnvironTable_FUN_0060f04c(in_stack_00000028);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = 0;
    if (g_EnvironInitialized != 0) {
      iVar2 = crt_unknown_c_FUN_0060fa90();
      ptr = crt_memory_c_malloc_FUN_00601bb0(in_stack_0000000c * (iVar2 + 1));
      if (ptr == (void *)0x0) {
        crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
        return -1;
      }
      iVar2 = crt_unknown_c_FUN_0060fac0();
      if (iVar2 == -1) {
        crt_memory_c_free_FUN_00601cd0(ptr);
        return -1;
      }
      iVar2 = crt_unknown_c_FUN_0060fcf4();
    }
  }
  return iVar2;
}
