// Name: cockpit_ckptutil.c_FUN_00430210
// Address: 00430210
// Address Range: [[00430210, 004303ce]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_FUN_00430210(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,int param_6)

#include "nocturne.h"

void * cockpit_ckptutil_c_FUN_00430210(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  _FILE *file;
  uint uVar1;
  byte *puVar2;
  byte local_6c [80];
  ulong local_1c;
  uint local_18;
  int local_14;
  
  local_1c = param_3 * param_4;
  if (param_2 == (void *)0x0) {
    param_2 = malloc(local_1c);
    if (param_2 == (void *)0x0) {
      _sprintf(local_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).",local_1c,param_1);
      INT_01cc4804 = 0x7b8;
      PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
      core_main_c_FUN_004c8440(local_6c);
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (file == (_FILE *)0x0) {
    _sprintf(local_6c,"Unable to open bitmap file (%s).",param_1);
    PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    INT_01cc4804 = 0x7c1;
    core_main_c_FUN_004c8440(local_6c);
  }
  local_18 = 0;
  if (param_4 != 0) {
    do {
      uVar1 = 0;
      puVar2 = (byte *)((int)param_2 + (param_4 - local_18) + -1);
      if (param_3 != 0) {
        do {
          local_14 = _fgetc(file);
          if (local_14 == -1) {
            _sprintf(local_6c,"Unable to read bitmap file (%s).",param_1);
            _fclose(file);
            INT_01cc4804 = 0x7ce;
            PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
            core_main_c_FUN_004c8440(local_6c);
          }
          uVar1 = uVar1 + 1;
          *puVar2 = (byte)local_14;
          puVar2 = puVar2 + param_4;
        } while (uVar1 < param_3);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_4);
  }
  _fclose(file);
  if (param_5 == 0) {
    return param_2;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370(param_1,param_2,local_1c,param_6);
  return param_2;
}
