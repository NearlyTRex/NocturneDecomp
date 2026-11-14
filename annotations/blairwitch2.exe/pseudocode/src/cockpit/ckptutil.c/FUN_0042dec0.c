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
  SIZE_T SVar1;
  void *pvVar2;
  int *buffer;
  int iVar3;
  byte *puStack_68;
  byte auStack_64 [76];
  int iStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_FUN_00460c70((char *)0x5cd4a3,param_1,(char *)0x5cd4a0);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf((char *)&puStack_68,"Unable to open edge list file (%s).");
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x4b4;
    core_main_c_FUN_004e4500(&puStack_68);
  }
  SVar1 = _fread(&iStack_18,4,1,p_Stack_14);
  if (SVar1 != 1) {
    _sprintf((char *)&puStack_68,"Unable to read number of edge lists (%s).");
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x4bd;
    core_main_c_FUN_004e4500(&puStack_68);
  }
  if (iStack_18 != param_3) {
    _sprintf((char *)&puStack_68,"Invalid number of edge lists in file (%s).");
    _DAT_01d046a4 = 0x4c6;
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4500(&puStack_68);
  }
  iVar3 = 0;
  if (0 < param_3) {
    buffer = param_2 + 1;
    do {
      SVar1 = _fread(buffer,4,1,p_Stack_14);
      if (SVar1 != 1) {
        _sprintf((char *)&puStack_68,"Unable to read number of edges (%s).");
        _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
        _DAT_01d046a4 = 0x4d1;
        core_main_c_FUN_004e4500(&puStack_68);
      }
      if (*param_2 != 0) {
        FUN_005b86a0(*param_2);
      }
      if (0 < param_2[1]) {
        size = param_2[1] * 8;
        pvVar2 = malloc(size);
        *param_2 = (int)pvVar2;
        if (pvVar2 == (void *)0x0) {
          printf("\nUnable to allocate memory for edge list.\n");
          puStack_68 = auStack_64;
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x4e7;
          core_main_c_FUN_004e4500();
        }
        SVar1 = _fread((void *)*param_2,size,1,p_Stack_14);
        if (SVar1 != 1) {
          _sprintf((char *)&puStack_68,"Unable to read edge list (%s).");
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x4ee;
          core_main_c_FUN_004e4500(&puStack_68);
        }
      }
      buffer = buffer + 2;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 2;
    } while (iVar3 < param_3);
  }
  _fclose(p_Stack_14);
  return;
}
