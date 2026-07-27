// Name: cockpit_ckptutil.c_FUN_0042ee00
// Address: 0042ee00
// Address Range: [[0042ee00, 0042ef5e]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042ee00(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042ee00(uint param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte local_6c [80];
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    INT_01cc4804 = 0x4f8;
    core_main_c_FUN_004c8440("Edge list array is empty!");
  }
  iVar7 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"wt");
  if (iVar7 == 0) {
    _sprintf(local_6c,"Could not create output file (%s).",param_1);
    INT_01cc4804 = 0x4ff;
    PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004c8440(local_6c);
  }
  _fprintf(iVar7,"%d\n",param_3);
  if (0 < param_3) {
    local_1c = param_3 << 3;
    local_18 = param_2;
    local_14 = 0;
    do {
      _fprintf(iVar7,"%d\n",*(uint *)(local_18 + 4));
      iVar6 = local_14;
      iVar9 = 0;
      for (iVar8 = 0; iVar8 < ((int *)(param_2 + iVar6))[1]; iVar8 = iVar8 + 1) {
        iVar5 = *(int *)(param_2 + iVar6);
        uVar4 = *(ushort *)(iVar9 + 6 + iVar5);
        iVar2 = iVar9 + 4;
        iVar3 = iVar9 + 2;
        psVar1 = (short *)(iVar9 + iVar5);
        iVar9 = iVar9 + 8;
        _fprintf(iVar7,"%3d %3d %3d %3d %d\n",(int)*psVar1,(int)*(short *)(iVar3 + iVar5),
                   (int)*(short *)(iVar2 + iVar5),(int)((short)(uVar4 * 2) >> 1),uVar4 >> 0xf);
      }
      local_14 = local_14 + 8;
      local_18 = local_18 + 8;
    } while (local_14 < local_1c);
  }
  _fclose(iVar7);
  return;
}
