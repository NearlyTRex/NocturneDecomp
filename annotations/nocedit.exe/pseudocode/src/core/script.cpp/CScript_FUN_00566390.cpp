// Name: core_script.cpp_CScript_FUN_00566390
// Address: 00566390
// Address Range: [[00566390, 005664c4]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566390(CScript *this_ptr,char *param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566390(CScript *this_ptr,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  SIZE_T n;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *src;
  byte bVar6;
  byte *local_18;
  int local_14;
  
  bVar6 = 0;
  uVar2 = core_script_cpp_CScript_FUN_00566a90(this_ptr,DAT_0310fd48,DAT_0310fd44);
  cVar1 = *param_2;
  local_14 = DAT_0310fd48;
  do {
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        DAT_0310fd44 = core_script_cpp_CScript_FUN_00566b30(this_ptr,local_14,uVar2);
        DAT_0310fd48 = local_14;
        return;
      }
      return;
    }
    core_script_cpp_CScript_FUN_00566230(this_ptr,local_14);
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_031101c0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    for (iVar4 = ~uVar3 - 1; iVar4 < (int)uVar2; iVar4 = iVar4 + 1) {
      (&DAT_031101c0)[iVar4] = 0x20;
    }
    local_18 = &DAT_031101c1 + uVar2;
    src = &DAT_031101c0 + uVar2;
    for (; (cVar1 = *param_2, cVar1 != '\0' && (cVar1 != '\n')); param_2 = param_2 + 1) {
      uVar3 = uVar2;
      if (cVar1 != '\r') {
        n = iVar4 - uVar2;
        iVar4 = iVar4 + 1;
        uVar3 = uVar2 + 1;
        memmove(local_18,src,n);
        src = src + 1;
        local_18 = local_18 + 1;
        (&DAT_031101c0)[uVar2] = *param_2;
      }
      uVar2 = uVar3;
    }
    (&DAT_031101c0)[iVar4] = 0;
    core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,local_14);
    if (*param_2 == '\n') {
      param_2 = param_2 + 1;
      core_script_cpp_CScript_FUN_00566330(this_ptr,uVar2,local_14);
      local_14 = local_14 + 1;
      uVar2 = 0;
    }
    cVar1 = *param_2;
  } while( true );
}
