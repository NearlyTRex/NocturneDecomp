// Name: cockpit_ckptutil.c_FUN_0042f330
// Address: 0042f330
// Address Range: [[0042f330, 0042f4ee]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_FUN_0042f330(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * cockpit_ckptutil_c_FUN_0042f330(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

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
    param_2 = malloc(uStack_1c);
    if (param_2 == (void *)0x0) {
      _sprintf(acStack_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).");
      _DAT_01d046a4 = 0x7e5;
      _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
      core_main_c_FUN_004e4500(acStack_6c);
    }
  }
  p_Var1 = engine_dosio_cpp_FUN_00460c70((char *)0x5cd754,param_1,(char *)0x5cd751);
  if (p_Var1 == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to open bitmap file (%s).");
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x7ee;
    core_main_c_FUN_004e4500(acStack_6c);
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
            _DAT_01d046a4 = 0x7fb;
            _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
            core_main_c_FUN_004e4500(acStack_6c);
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
  cockpit_ckptutil_c_applyActPalette_FUN_0042c670(param_1,param_2,uStack_1c,(int)param_6);
  return param_6;
}
