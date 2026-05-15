// Name: core_course.cpp_CCourse_save_FUN_00442a90
// Address: 00442a90
// MANUAL RECONSTRUCTION
// Address Range: [[00442a90, 00442bb1]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar9;
  int iVar10;
  CCourseFrame *pCVar8;
  float *pfVar1;
  float *pfVar7;
  float *pfVar4;
  float *pfVar3;
  float *pfVar6;
  float *pfVar5;
  float *pfVar2;
  
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"wt");
  if (file == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create data\\%s",filename);
    return;
  }
  _fprintf(file,"// version\n");
  _fprintf(file,"%d\n",1);
  _fprintf(file,"// len,loop\n");
  _fprintf(file,"%d,%d\n",this_ptr->len,this_ptr->loop);
  iVar10 = 0;
  _fprintf(file,"// frameList: pos(x,y,z), orient(w,x,y,z)\n");
  if (0 < this_ptr->len) {
    iVar9 = 0;
    do {
      pCVar8 = this_ptr->frames;
      pfVar2 = (float *)((int)&(pCVar8->orient).z + iVar9);
      pfVar3 = (float *)((int)&(pCVar8->orient).y + iVar9);
      pfVar4 = (float *)((int)&(pCVar8->orient).x + iVar9);
      pfVar5 = (float *)((int)&(pCVar8->orient).w + iVar9);
      pfVar6 = (float *)((int)&(pCVar8->pos).z + iVar9);
      pfVar7 = (float *)((int)&(pCVar8->pos).y + iVar9);
      pfVar1 = (float *)((int)&(pCVar8->pos).x + iVar9);
      iVar9 = iVar9 + 0x1c;
      iVar10 = iVar10 + 1;
      _fprintf(file,"%g,%g,%g, %g,%g,%g,%g\n",(double)*pfVar1,(double)*pfVar7,(double)*pfVar6,
                 (double)*pfVar5,(double)*pfVar4,(double)*pfVar3,(double)*pfVar2);
    } while (iVar10 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x140);
  return;
}
