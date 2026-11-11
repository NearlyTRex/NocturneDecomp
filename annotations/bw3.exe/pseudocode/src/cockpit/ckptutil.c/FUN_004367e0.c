// Name: cockpit_ckptutil.c_FUN_004367e0
// Address: 004367e0
// Address Range: [[004367e0, 00436a0b]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_004367e0(char *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_004367e0(char *param_1,int *param_2,int param_3)

{
  ulong size;
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  byte *puStack_68;
  byte auStack_64 [76];
  int iStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_FUN_004659c0((char *)0x5b89d1,param_1,(char *)0x5b89ce);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf((char *)&puStack_68,"Unable to open edge list file (%s).");
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x486;
    core_main_c_FUN_004e4330(&puStack_68);
  }
  iVar1 = _fread(&iStack_18,4,1,p_Stack_14);
  if (iVar1 != 1) {
    _sprintf((char *)&puStack_68,"Unable to read number of edge lists (%s).");
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x48f;
    core_main_c_FUN_004e4330(&puStack_68);
  }
  if (iStack_18 != param_3) {
    _sprintf((char *)&puStack_68,"Invalid number of edge lists in file (%s).");
    _DAT_01d71de4 = 0x498;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004e4330(&puStack_68);
  }
  iVar1 = 0;
  if (0 < param_3) {
    piVar4 = param_2 + 1;
    do {
      iVar2 = _fread(piVar4,4,1,p_Stack_14);
      if (iVar2 != 1) {
        _sprintf((char *)&puStack_68,"Unable to read number of edges (%s).");
        _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
        _DAT_01d71de4 = 0x4a3;
        core_main_c_FUN_004e4330(&puStack_68);
      }
      if (*param_2 != 0) {
        FUN_005a3770(*param_2);
      }
      if (0 < param_2[1]) {
        size = param_2[1] * 8;
        pvVar3 = malloc(size);
        *param_2 = (int)pvVar3;
        if (pvVar3 == (void *)0x0) {
          printf("\nUnable to allocate memory for edge list.\n");
          puStack_68 = auStack_64;
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x4b9;
          core_main_c_FUN_004e4330();
        }
        iVar2 = _fread(*param_2,size,1,p_Stack_14);
        if (iVar2 != 1) {
          _sprintf((char *)&puStack_68,"Unable to read edge list (%s).");
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x4c0;
          core_main_c_FUN_004e4330(&puStack_68);
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
