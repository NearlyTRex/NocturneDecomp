// Name: core_script.cpp_FUN_00566390
// Address: 00566390
// Address Range: [[00566390, 005664c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566390()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566390(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00566390(void)

{
  char cVar1;
  int iVar2;
  byte *dest;
  SIZE_T n;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte *src;
  byte bVar7;
  char *in_stack_00000008;
  int in_stack_00000010;
  int local_14;
  int iVar8;
  
  bVar7 = 0;
  iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
  cVar1 = *in_stack_00000008;
  iVar8 = DAT_0310fd48;
  do {
    if (cVar1 == '\0') {
      if (in_stack_00000010 != 0) {
        DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
        DAT_0310fd48 = iVar8;
        return;
      }
      return;
    }
    core_script_cpp_FUN_00566230();
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_031101c0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar4 = ~uVar3 - 1; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (&DAT_031101c0)[iVar4] = 0x20;
    }
    dest = &DAT_031101c1 + iVar2;
    src = &DAT_031101c0 + iVar2;
    for (; (cVar1 = *in_stack_00000008, cVar1 != '\0' && (cVar1 != '\n'));
        in_stack_00000008 = in_stack_00000008 + 1) {
      iVar5 = iVar2;
      if (cVar1 != '\r') {
        n = iVar4 - iVar2;
        iVar4 = iVar4 + 1;
        iVar5 = iVar2 + 1;
        crt_string_c_memmove_FUN_005fe5e0(dest,src,n);
        src = src + 1;
        (&DAT_031101c0)[iVar2] = *in_stack_00000008;
      }
      iVar2 = iVar5;
    }
    (&DAT_031101c0)[iVar4] = 0;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0();
    if (*in_stack_00000008 == '\n') {
      in_stack_00000008 = in_stack_00000008 + 1;
      core_script_cpp_CScript_insertAndEditorPutLine_FUN_00566330();
      iVar8 = local_14 + 1;
      iVar2 = 0;
    }
    cVar1 = *in_stack_00000008;
  } while( true );
}
