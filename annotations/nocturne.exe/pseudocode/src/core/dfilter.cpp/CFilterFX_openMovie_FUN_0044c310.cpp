// Name: core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310
// Address: 0044c310
// Address Range: [[0044c310, 0044c495]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(CFilterFx *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(CFilterFx *this_ptr,char *filename)

{
  _FILE *p_Var1;
  SMovieFrame *pSVar2;
  CDemonFilter *this_ptr_00;
  int iVar3;
  char local_10c [256];
  
  core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(this_ptr);
  if (filename != (char *)0x0) {
    _sprintf(local_10c,"%s.txt",filename);
    p_Var1 = engine_dosio_cpp_getFile_FUN_00456a60(filename,local_10c,"rt");
    if (p_Var1 == (_FILE *)0x0) {
      PTR_01cc4800 = "..\\core\\dfilter.cpp";
      INT_01cc4804 = 0x15a;
      core_main_c_FUN_004c8440("Can't open movie %s.txt",filename);
    }
    _fscanf(p_Var1,"%d\n",this_ptr);
    _fclose(p_Var1);
    pSVar2 = (SMovieFrame *)malloc(this_ptr->frame_count << 0xd);
    this_ptr->movie_data = pSVar2;
    _sprintf(local_10c,"%s.mov",filename);
    p_Var1 = engine_dosio_cpp_getFile_FUN_00456a60(filename,local_10c,"rb");
    if (p_Var1 == (_FILE *)0x0) {
      PTR_01cc4800 = "..\\core\\dfilter.cpp";
      INT_01cc4804 = 0x166;
      core_main_c_FUN_004c8440("Can't open movie %s.mov",filename);
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
  this_ptr_00 = core_dfilter_cpp_CFilterCache_findFilter_FUN_0044be60
                          (0x014B8DE8,"movscrn.raw");
  core_dfilter_cpp_CDemonFilter_load_FUN_0044bf90(this_ptr_00,"movscrn.raw");
  return;
}
