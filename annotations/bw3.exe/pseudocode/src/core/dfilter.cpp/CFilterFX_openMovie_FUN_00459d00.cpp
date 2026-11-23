// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00
// Address: 00459d00
// Address Range: [[00459d00, 00459e85]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX *this_ptr,char *filename)

{
  _FILE *p_Var1;
  SMovieFrame *pSVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char acStack_108 [252];
  
  core_dfilter_cpp_CFilterFX_free_FUN_00459ce0(this_ptr);
  if (filename != (char *)0x0) {
    _sprintf(acStack_108,"%s.txt");
    p_Var1 = engine_dosio_cpp_getFile_FUN_004659c0(filename,acStack_108,"rt");
    if (p_Var1 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 346;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Can't open movie %s.txt");
    }
    _fscanf(p_Var1,"%d\n");
    _fclose(p_Var1);
    pSVar2 = (SMovieFrame *)malloc(this_ptr->frame_count << 0xd);
    this_ptr->movie_data = pSVar2;
    _sprintf(acStack_108,"%s.mov");
    p_Var1 = engine_dosio_cpp_getFile_FUN_004659c0(filename,acStack_108,"rb");
    if (p_Var1 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 358;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Can't open movie %s.mov");
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
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_00459850
                          (g_CFilterCachePtr,"movscrn.raw");
  core_dfilter_cpp_CDemonFilter_load_FUN_00459980(this_ptr_00,"movscrn.raw");
  return;
}
