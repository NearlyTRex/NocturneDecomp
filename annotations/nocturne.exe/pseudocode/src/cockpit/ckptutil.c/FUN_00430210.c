// Name: FUN_00430210
// Address: 00430210
// Address Range: [[00430210, 004303ce]]
// Convention: unknown
// Signature: int FUN_00430210(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00430210(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  byte local_6c [80];
  int local_1c;
  uint local_18;
  int local_14;
  
  local_1c = param_3 * param_4;
  if (param_2 == 0) {
    param_2 = malloc(local_1c);
    if (param_2 == 0) {
      _sprintf(local_6c,"Unable to allocate %u bytes for rotated bitmap file (%s).",local_1c,param_1);
      _DAT_01cc4804 = 0x7b8;
      _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
      FUN_004c8440(local_6c);
    }
  }
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (iVar1 == 0) {
    _sprintf(local_6c,"Unable to open bitmap file (%s).",param_1);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x7c1;
    FUN_004c8440(local_6c);
  }
  local_18 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      puVar3 = (byte *)(param_2 + (param_4 - local_18) + -1);
      if (param_3 != 0) {
        do {
          local_14 = _fgetc(iVar1);
          if (local_14 == -1) {
            _sprintf(local_6c,"Unable to read bitmap file (%s).",param_1);
            _fclose(iVar1);
            _DAT_01cc4804 = 0x7ce;
            _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
            FUN_004c8440(local_6c);
          }
          uVar2 = uVar2 + 1;
          *puVar3 = (byte)local_14;
          puVar3 = puVar3 + param_4;
        } while (uVar2 < param_3);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_4);
  }
  _fclose(iVar1);
  if (param_5 == 0) {
    return param_2;
  }
  FUN_0042d370(param_1,param_2,local_1c,param_6);
  return param_2;
}
