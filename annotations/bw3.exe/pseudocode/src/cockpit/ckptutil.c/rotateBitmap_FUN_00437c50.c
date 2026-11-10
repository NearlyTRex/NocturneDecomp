// Name: cockpit_ckptutil.c_rotateBitmap_FUN_00437c50
// Address: 00437c50
// Address Range: [[00437c50, 00437e0e]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_rotateBitmap_FUN_00437c50(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * cockpit_ckptutil_c_rotateBitmap_FUN_00437c50(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

{
  _FILE *p_Var1;
  uint uVar2;
  byte *puVar3;
  char acStack_6c [80];
  ulong uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  uStack_1c = param_3 * param_4;
  if (param_2 == (void *)0x0) {
    param_2 = FUN_005a3650(uStack_1c);
    if (param_2 == (void *)0x0) {
      _sprintf(acStack_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).");
      _DAT_01d71de4 = 0x7b7;
      _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
      core_main_c_FUN_004e4330(acStack_6c);
    }
  }
  p_Var1 = engine_dosio_cpp_FUN_004659c0((char *)0x5b8c82,param_1,(char *)0x5b8c7f);
  if (p_Var1 == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to open bitmap file (%s).");
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x7c0;
    core_main_c_FUN_004e4330(acStack_6c);
  }
  uStack_18 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      puVar3 = (byte *)((int)param_2 + (param_4 - uStack_18) + -1);
      if (param_3 != 0) {
        do {
          iStack_14 = _fgetc(p_Var1);
          if (iStack_14 == -1) {
            _sprintf(acStack_6c,"Unable to read bitmap file (%s).");
            _fclose(p_Var1);
            _DAT_01d71de4 = 0x7cd;
            _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
            core_main_c_FUN_004e4330(acStack_6c);
          }
          uVar2 = uVar2 + 1;
          *puVar3 = (byte)iStack_14;
          puVar3 = puVar3 + param_4;
        } while (uVar2 < param_3);
      }
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < param_4);
  }
  _fclose(p_Var1);
  if (param_5 == 0) {
    return param_2;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_00434f90(param_1,param_2,uStack_1c,(int)param_6);
  return param_6;
}
