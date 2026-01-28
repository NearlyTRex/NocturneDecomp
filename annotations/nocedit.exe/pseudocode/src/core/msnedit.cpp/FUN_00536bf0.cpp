// Name: core_msnedit.cpp_FUN_00536bf0
// Address: 00536bf0
// Address Range: [[00536bf0, 00536cc6]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_00536bf0(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00536bf0(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_00536bf0(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  CStrList *in_stack_00000008;
  char local_d8 [200];
  uint local_10;
  
  cVar2 = *in_stack_00000004;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while (((cVar2 = *in_stack_00000004, pcVar4 = local_d8,
            (g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) != 0 ||
            (pcVar4 = local_d8, cVar2 == '-')) || (pcVar4 = local_d8, cVar2 == '_'))) {
      do {
        do {
          *pcVar4 = *in_stack_00000004;
          pbVar1 = (byte *)(in_stack_00000004 + 1);
          local_10 = (uint)*pbVar1;
          in_stack_00000004 = in_stack_00000004 + 1;
          pcVar4 = pcVar4 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
      } while ((local_10 == 0x2d) || (local_10 == 0x5f));
      *pcVar4 = '\0';
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_d8,"none");
      if ((iVar3 == 0) ||
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_d8,"true"), iVar3 == 0))
      goto LAB_00536c76;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000008,local_d8);
      if (*in_stack_00000004 == '\0') {
        return;
      }
    }
    in_stack_00000004 = in_stack_00000004 + 1;
LAB_00536c76:
    cVar2 = *in_stack_00000004;
  } while( true );
}
