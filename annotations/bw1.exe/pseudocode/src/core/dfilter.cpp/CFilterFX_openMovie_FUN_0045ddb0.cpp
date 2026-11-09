// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_0045ddb0
// Address: 0045ddb0
// Address Range: [[0045ddb0, 0045df35]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0045ddb0(CFilterFX *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0045ddb0(CFilterFX *this_ptr,char *filename)

{
  _FILE *p_Var1;
  void *pvVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char acStack_108 [252];
  
  core_dfilter_cpp_FUN_0045dd90(this_ptr);
  if (filename != (char *)0x0) {
    FUN_005bfb40(acStack_108,0x5d85c9,filename);
    p_Var1 = engine_dosio_cpp_FUN_00479180(filename,acStack_108,(char *)0x5d85d0);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\dfilter.cpp";
      _DAT_01d1d404 = 0x15a;
      core_main_c_FUN_005030e0("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,0x5d85ff,this_ptr);
    _fclose(p_Var1);
    pvVar2 = FUN_005c08d0(*(int *)this_ptr << 0xd);
    *(void **)&this_ptr->field_0x4 = pvVar2;
    FUN_005bfb40(acStack_108,0x5d8603,filename);
    p_Var1 = engine_dosio_cpp_FUN_00479180(filename,acStack_108,(char *)0x5d860a);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d1d400 = "..\\core\\dfilter.cpp";
      _DAT_01d1d404 = 0x166;
      core_main_c_FUN_005030e0("Can't open movie %s.mov",filename);
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
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_0045d900
                          (g_CFilterCachePtr,"?movscrn.raw" + 1);
  core_dfilter_cpp_CDemonFilter_load_FUN_0045da30(this_ptr_00,"movscrn.raw");
  return;
}
