// Name: cockpit_ckptutil.c_FUN_0042dec0
// Address: 0042dec0
// Address Range: [[0042dec0, 0042e0eb]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042dec0(char *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042dec0(char *param_1,int *param_2,int param_3)

{
  ulong size;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  byte auStack_68 [80];
  int iStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_FUN_00460c70((char *)0x5cd4a3,param_1,(char *)0x5cd4a0);
  if (p_Stack_14 == (_FILE *)0x0) {
    FUN_005b7790(auStack_68,"Unable to open edge list file (%s).",param_1);
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x4b4;
    core_main_c_FUN_004e4500(auStack_68);
  }
  iVar1 = _fread(&iStack_18,4,1,p_Stack_14);
  if (iVar1 != 1) {
    FUN_005b7790(auStack_68,"Unable to read number of edge lists (%s).",param_1);
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x4bd;
    core_main_c_FUN_004e4500(auStack_68);
  }
  if (iStack_18 != param_3) {
    FUN_005b7790(auStack_68,"Invalid number of edge lists in file (%s).",param_1);
    _DAT_01d046a4 = 0x4c6;
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4500(auStack_68);
  }
  iVar1 = 0;
  if (0 < param_3) {
    piVar4 = param_2 + 1;
    do {
      iVar2 = _fread(piVar4,4,1,p_Stack_14);
      if (iVar2 != 1) {
        FUN_005b7790(auStack_68,"Unable to read number of edges (%s).",param_1);
        _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
        _DAT_01d046a4 = 0x4d1;
        core_main_c_FUN_004e4500(auStack_68);
      }
      if (*param_2 != 0) {
        FUN_005b86a0(*param_2);
      }
      if (0 < param_2[1]) {
        size = param_2[1] * 8;
        pvVar3 = FUN_005b8580(size);
        *param_2 = (int)pvVar3;
        if (pvVar3 == (void *)0x0) {
          FUN_005b8e10("\nUnable to allocate memory for edge list.\n");
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x4e7;
          core_main_c_FUN_004e4500(auStack_68);
        }
        iVar2 = _fread(*param_2,size,1,p_Stack_14);
        if (iVar2 != 1) {
          FUN_005b7790(auStack_68,"Unable to read edge list (%s).",param_1);
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x4ee;
          core_main_c_FUN_004e4500(auStack_68);
        }
      }
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 2;
    } while (iVar1 < param_3);
  }
  _fclose(p_Stack_14);
  return;
}
