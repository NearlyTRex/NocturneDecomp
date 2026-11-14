// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_00447c50
// Address: 00447c50
// Address Range: [[00447c50, 00447dd5]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00447c50(CFilterFX *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00447c50(CFilterFX *this_ptr,char *filename)

{
  _FILE *p_Var1;
  SMovieFrame *pSVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char acStack_108 [252];
  
  core_dfilter_cpp_CFilterFX_free_FUN_00447c30(this_ptr);
  if (filename != (char *)0x0) {
    _sprintf(acStack_108,(char *)0x5cecd0);
    p_Var1 = engine_dosio_cpp_FUN_00460c70(filename,acStack_108,(char *)0x5cecd7);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d046a0 = "..\\core\\dfilter.cpp";
      _DAT_01d046a4 = 0x15a;
      core_main_c_FUN_004e4500("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,(char *)0x5ced06);
    _fclose(p_Var1);
    pSVar2 = (SMovieFrame *)malloc(this_ptr->frame_count << 0xd);
    this_ptr->movie_data = pSVar2;
    _sprintf(acStack_108,(char *)0x5ced0a);
    p_Var1 = engine_dosio_cpp_FUN_00460c70(filename,acStack_108,(char *)0x5ced11);
    if (p_Var1 == (_FILE *)0x0) {
      _DAT_01d046a0 = "..\\core\\dfilter.cpp";
      _DAT_01d046a4 = 0x166;
      core_main_c_FUN_004e4500("Can't open movie %s.mov",filename);
    }
    _fread(this_ptr->movie_data,0x2000,this_ptr->frame_count,p_Var1);
    _fclose(p_Var1);
    for (iVar3 = 0; iVar3 < this_ptr->frame_count * 0x2000; iVar3 = iVar3 + 1) {
      this_ptr->movie_data->pixels[iVar3] =
           (uchar)((uint)((int)(uint)this_ptr->movie_data->pixels[iVar3] >> 2) / 2);
    }
    this_ptr->current_frame = 0.0;
    return;
  }
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004477a0
                          (g_CFilterCachePtr,"?movscrn.raw" + 1);
  core_dfilter_cpp_CDemonFilter_load_FUN_004478d0(this_ptr_00,"movscrn.raw");
  return;
}
