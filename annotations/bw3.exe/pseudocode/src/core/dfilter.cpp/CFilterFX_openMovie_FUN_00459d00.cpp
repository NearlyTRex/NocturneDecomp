// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00
// Address: 00459d00
// Address Range: [[00459d00, 00459e85]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX *this_ptr,char *filename)

{
  _FILE *p_Var1;
  void *pvVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char acStack_108 [252];
  
  core_dfilter_cpp_FUN_00459ce0(this_ptr);
  if (filename != (char *)0x0) {
    FUN_005a28c0(acStack_108,0x5bac22,filename);
    p_Var1 = engine_dosio_cpp_FUN_004659c0(filename,acStack_108,(char *)0x5bac29);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d71de0 = "..\\core\\dfilter.cpp";
      _DAT_01d71de4 = 0x15a;
      core_main_c_FUN_004e4330("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,0x5bac58,this_ptr);
    _fclose(p_Var1);
    pvVar2 = FUN_005a3650(*(int *)this_ptr << 0xd);
    *(void **)&this_ptr->field_0x4 = pvVar2;
    FUN_005a28c0(acStack_108,0x5bac5c,filename);
    p_Var1 = engine_dosio_cpp_FUN_004659c0(filename,acStack_108,(char *)0x5bac63);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d71de0 = "..\\core\\dfilter.cpp";
      _DAT_01d71de4 = 0x166;
      core_main_c_FUN_004e4330("Can't open movie %s.mov",filename);
    }
    _fread(*(uint *)&this_ptr->field_0x4,0x2000,*(uint *)this_ptr,p_Var1);
    _fclose(p_Var1);
    for (iVar3 = 0; iVar3 < *(int *)this_ptr * 0x2000; iVar3 = iVar3 + 1) {
      *(char *)(iVar3 + *(int *)&this_ptr->field_0x4) =
           (char)((uint)((int)(uint)*(byte *)(iVar3 + *(int *)&this_ptr->field_0x4) >> 2) / 2);
    }
    *(uint *)&this_ptr->field_0x8 = 0;
    return;
  }
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_00459850
                          (g_CFilterCachePtr,"?movscrn.raw" + 1);
  core_dfilter_cpp_CDemonFilter_load_FUN_00459980(this_ptr_00,"movscrn.raw");
  return;
}
