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
  _FILE *file;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char local_10c [256];
  
  core_dfilter_cpp_CFilterFX_free_FUN_00470700(this_ptr);
  if (filename != (char *)0x0) {
    _sprintf(local_10c,"%s.txt",filename);
    p_Var1 = engine_dosio_cpp_getFile_FUN_00481a50(filename,local_10c,"rt");
    if (p_Var1 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 346;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,"%d\n",this_ptr);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var1,"..\\core\\dfilter.cpp",348);
    pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->frame_count << 0xd,"..\\core\\dfilter.cpp",352);
    this_ptr->movie_data = pvVar2;
    _sprintf(local_10c,"%s.mov",filename);
    file = engine_dosio_cpp_getFile_FUN_00481a50(filename,local_10c,"rb");
    if (file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\dfilter.cpp";
      g_CurrentLineNumber = 358;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open movie %s.mov",filename);
    }
    _fread(this_ptr->movie_data,0x2000,this_ptr->frame_count,file);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dfilter.cpp",360);
    for (iVar3 = 0; iVar3 < this_ptr->frame_count * 0x2000; iVar3 = iVar3 + 1) {
      this_ptr->movie_data->pixels[iVar3] =
           (uchar)((uint)((int)(uint)this_ptr->movie_data->pixels[iVar3] >> 2) / 2);
    }
    this_ptr->current_frame = 0.0;
    return;
  }
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                          (g_CFilterCachePtr,"movscrn.raw");
  core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_00,"movscrn.raw");
  return;
}
