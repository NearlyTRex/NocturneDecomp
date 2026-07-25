// Name: FUN_0042eb90
// Address: 0042eb90
// Address Range: [[0042eb90, 0042edbb]]
// Convention: unknown
// Signature: void FUN_0042eb90(undefined4 param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042eb90(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte local_68 [80];
  int local_18;
  int local_14;
  
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (local_14 == 0) {
    _sprintf(local_68,"Unable to open edge list file (%s).",param_1);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x49f;
    FUN_004c8440(local_68);
  }
  iVar1 = _fread(&local_18,4,1,local_14);
  if (iVar1 != 1) {
    _sprintf(local_68,"Unable to read number of edge lists (%s).",param_1);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x4a8;
    FUN_004c8440(local_68);
  }
  if (local_18 != param_3) {
    _sprintf(local_68,"Invalid number of edge lists in file (%s).",param_1);
    _DAT_01cc4804 = 0x4af;
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    FUN_004c8440(local_68);
  }
  iVar1 = 0;
  if (0 < param_3) {
    piVar4 = param_2 + 1;
    do {
      iVar2 = _fread(piVar4,4,1,local_14);
      if (iVar2 != 1) {
        _sprintf(local_68,"Unable to read number of edges (%s).",param_1);
        _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
        _DAT_01cc4804 = 0x4ba;
        FUN_004c8440(local_68);
      }
      if (*param_2 != 0) {
        FUN_005638d0(*param_2);
      }
      if (0 < param_2[1]) {
        iVar2 = param_2[1] * 8;
        iVar3 = malloc(iVar2);
        *param_2 = iVar3;
        if (iVar3 == 0) {
          FUN_00564c30("\nUnable to allocate memory for edge list.\n");
          _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
          _DAT_01cc4804 = 0x4ce;
          FUN_004c8440(local_68);
        }
        iVar2 = _fread(*param_2,iVar2,1,local_14);
        if (iVar2 != 1) {
          _sprintf(local_68,"Unable to read edge list (%s).",param_1);
          _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
          _DAT_01cc4804 = 0x4d5;
          FUN_004c8440(local_68);
        }
      }
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 2;
    } while (iVar1 < param_3);
  }
  _fclose(local_14);
  return;
}
