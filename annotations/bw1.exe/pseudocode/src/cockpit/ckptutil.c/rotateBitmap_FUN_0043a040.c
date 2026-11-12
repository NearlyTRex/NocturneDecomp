// Name: cockpit_ckptutil.c_rotateBitmap_FUN_0043a040
// Address: 0043a040
// Address Range: [[0043a040, 0043a1fe]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_rotateBitmap_FUN_0043a040(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * cockpit_ckptutil_c_rotateBitmap_FUN_0043a040(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)

{
  _FILE *file;
  uint uVar1;
  byte *puVar2;
  char acStack_6c [80];
  ulong uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  uStack_1c = param_3 * param_4;
  if (param_2 == (void *)0x0) {
    param_2 = malloc(uStack_1c);
    if (param_2 == (void *)0x0) {
      _sprintf(acStack_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).");
      _DAT_01d1d404 = 0x7b7;
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      core_main_c_FUN_005030e0(acStack_6c);
    }
  }
  file = engine_dosio_cpp_FUN_00479180((char *)0x5d6412,param_1,(char *)0x5d640f);
  if (file == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Unable to open bitmap file (%s).");
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x7c0;
    core_main_c_FUN_005030e0(acStack_6c);
  }
  uStack_18 = 0;
  if (param_4 != 0) {
    do {
      uVar1 = 0;
      puVar2 = (byte *)((int)param_2 + (param_4 - uStack_18) + -1);
      if (param_3 != 0) {
        do {
          iStack_14 = _fgetc(file);
          if (iStack_14 == -1) {
            _sprintf(acStack_6c,"Unable to read bitmap file (%s).");
            _fclose(file);
            _DAT_01d1d404 = 0x7cd;
            _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
            core_main_c_FUN_005030e0(acStack_6c);
          }
          uVar1 = uVar1 + 1;
          *puVar2 = (byte)iStack_14;
          puVar2 = puVar2 + param_4;
        } while (uVar1 < param_3);
      }
      uStack_18 = uStack_18 + 1;
    } while (uStack_18 < param_4);
  }
  _fclose(file);
  if (param_5 == 0) {
    return param_2;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_00437380(param_1,param_2,uStack_1c,(int)param_6);
  return param_6;
}
