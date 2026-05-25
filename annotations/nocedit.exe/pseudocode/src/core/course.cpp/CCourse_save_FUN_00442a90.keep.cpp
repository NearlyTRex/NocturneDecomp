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
  int iVar10;
  CCourseFrame *pCVar8;

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
    do {
      pCVar8 = this_ptr->frames + iVar10;
      _fprintf(file,"%g,%g,%g, %g,%g,%g,%g\n",(double)(pCVar8->pos).x,(double)(pCVar8->pos).y,
                 (double)(pCVar8->pos).z,(double)(pCVar8->orient).w,(double)(pCVar8->orient).x,
                 (double)(pCVar8->orient).y,(double)(pCVar8->orient).z);
      iVar10 = iVar10 + 1;
    } while (iVar10 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x140);
  return;
}
