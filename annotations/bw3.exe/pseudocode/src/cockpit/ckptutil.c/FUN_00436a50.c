// Name: cockpit_ckptutil.c_FUN_00436a50
// Address: 00436a50
// Address Range: [[00436a50, 00436bae]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_00436a50(char *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_00436a50(char *param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  _FILE *p_Var7;
  int iVar8;
  int iVar9;
  byte auStack_6c [80];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_2 == 0) {
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x4f7;
    core_main_c_FUN_004e4330("Edge list array is empty!");
  }
  p_Var7 = engine_dosio_cpp_FUN_004659c0((char *)0x5b8b74,param_1,(char *)0x5b8b71);
  if (p_Var7 == (_FILE *)0x0) {
    FUN_005a28c0(auStack_6c,"Could not create output file (%s).",param_1);
    _DAT_01d71de4 = 0x4fe;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4330(auStack_6c);
  }
  FUN_005a3140(p_Var7,0x5b8bb1,param_3);
  if (0 < param_3) {
    iStack_1c = param_3 << 3;
    iStack_18 = param_2;
    iStack_14 = 0;
    do {
      FUN_005a3140(p_Var7,0x5b8bb5,*(uint *)(iStack_18 + 4));
      iVar6 = iStack_14;
      iVar9 = 0;
      for (iVar8 = 0; iVar8 < ((int *)(param_2 + iVar6))[1]; iVar8 = iVar8 + 1) {
        iVar5 = *(int *)(param_2 + iVar6);
        uVar4 = *(ushort *)(iVar9 + 6 + iVar5);
        iVar2 = iVar9 + 4;
        iVar3 = iVar9 + 2;
        psVar1 = (short *)(iVar9 + iVar5);
        iVar9 = iVar9 + 8;
        FUN_005a3140
                  (p_Var7,"%3d %3d %3d %3d %d\n",(int)*psVar1,(int)*(short *)(iVar3 + iVar5),
                   (int)*(short *)(iVar2 + iVar5),(int)((short)(uVar4 * 2) >> 1),uVar4 >> 0xf);
      }
      iStack_14 = iStack_14 + 8;
      iStack_18 = iStack_18 + 8;
    } while (iStack_14 < iStack_1c);
  }
  _fclose(p_Var7);
  return;
}
