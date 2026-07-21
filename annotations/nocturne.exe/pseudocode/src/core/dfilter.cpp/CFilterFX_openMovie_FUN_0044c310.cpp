// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310
// Address: 0044c310
// Address Range: [[0044c310, 0044c495]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte local_10c [256];
  
  core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(param_1);
  if (param_2 != 0) {
    _sprintf(local_10c,"%s.txt",param_2);
    iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(param_2,local_10c,&DAT_0057c08c);
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\dfilter.cpp";
      _DAT_01cc4804 = 0x15a;
      FUN_004c8440("Can't open movie %s.txt",param_2);
    }
    _fscanf(iVar1,&DAT_0057c0bb,param_1);
    _fclose(iVar1);
    iVar1 = malloc(*param_1 << 0xd);
    param_1[1] = iVar1;
    _sprintf(local_10c,"%s.mov",param_2);
    iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(param_2,local_10c,&DAT_0057c0c6);
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\dfilter.cpp";
      _DAT_01cc4804 = 0x166;
      FUN_004c8440("Can't open movie %s.mov",param_2);
    }
    _fread(param_1[1],0x2000,*param_1,iVar1);
    _fclose(iVar1);
    for (iVar1 = 0; iVar1 < *param_1 * 0x2000; iVar1 = iVar1 + 1) {
      *(char *)(iVar1 + param_1[1]) =
           (char)((uint)((int)(uint)*(byte *)(iVar1 + param_1[1]) >> 2) / 2);
    }
    param_1[2] = 0;
    return;
  }
  uVar2 = core_dfilter_cpp_CFilterCache_findFilter_FUN_0044be60
                    (0x014B8DE8,"?movscrn.raw" + 1);
  core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(uVar2,"movscrn.raw");
  return;
}
