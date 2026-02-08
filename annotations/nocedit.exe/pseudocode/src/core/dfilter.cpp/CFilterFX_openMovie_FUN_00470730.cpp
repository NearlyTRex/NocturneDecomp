// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
// Address: 00470730
// Address Range: [[00470730, 004708d3]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx *this_ptr,char *filename)

{
  _FILE *p_Var1;
  void *pvVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char local_10c [256];
  
  core_dfilter_cpp_CFilterFX_free_FUN_00470700(this_ptr);
  if (filename != (char *)0x0) {
    _sprintf(local_10c,"%s.txt",filename);
    p_Var1 = engine_dosio_c_getFile_FUN_00481a50(filename,local_10c,"rt");
    if (p_Var1 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 0x15a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,"%d\n",this_ptr);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\dfilter.cpp",0x15c);
    pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->frame_count << 0xd,"..\\core\\dfilter.cpp",0x160);
    this_ptr->movie_data = pvVar2;
    _sprintf(local_10c,"%s.mov",filename);
    p_Var1 = engine_dosio_c_getFile_FUN_00481a50(filename,local_10c,"rb");
    if (p_Var1 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 0x166;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.mov",filename);
    }
    _fread(this_ptr->movie_data,0x2000,this_ptr->frame_count,p_Var1);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\dfilter.cpp",0x168);
    for (iVar3 = 0; iVar3 < this_ptr->frame_count * 0x2000; iVar3 = iVar3 + 1) {
      *(char *)(iVar3 + (int)this_ptr->movie_data) =
           (char)((uint)((int)(uint)*(byte *)(iVar3 + (int)this_ptr->movie_data) >> 2) / 2);
    }
    this_ptr->current_frame = 0;
    return;
  }
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                          (g_CFilterCachePtr,"movscrn.raw");
  core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_00,"movscrn.raw");
  return;
}
