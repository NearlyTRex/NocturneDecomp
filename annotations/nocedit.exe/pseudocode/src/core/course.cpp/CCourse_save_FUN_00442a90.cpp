// Name: core_course.cpp_CCourse_save_FUN_00442a90
// Address: 00442a90
// Address Range: [[00442a90, 00442bb1]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_save_FUN_00442a90(CCourse * this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  CCourseFrameList *pCVar8;
  FILE *file;
  int iVar9;
  int iVar10;
  char *in_stack_00000008;
  
  file = engine_dosio_c_getFile_FUN_00481a50("data",in_stack_00000008,"wt");
  if (file == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create data\\%s");
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// len,loop\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n",this_ptr->len);
  iVar10 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// frameList: pos(x,y,z), orient(w,x,y,z)\n");
  if (0 < this_ptr->len) {
    iVar9 = 0;
    do {
      pCVar8 = this_ptr->frame_list;
      pfVar2 = (float *)((int)&(pCVar8->frame1).orient.z + iVar9);
      pfVar3 = (float *)((int)&(pCVar8->frame1).orient.y + iVar9);
      pfVar4 = (float *)((int)&(pCVar8->frame1).orient.x + iVar9);
      pfVar5 = (float *)((int)&(pCVar8->frame1).orient.w + iVar9);
      pfVar6 = (float *)((int)&(pCVar8->frame1).pos.z + iVar9);
      pfVar7 = (float *)((int)&(pCVar8->frame1).pos.y + iVar9);
      pfVar1 = (float *)((int)&(pCVar8->frame1).pos.x + iVar9);
      iVar9 = iVar9 + 0x1c;
      iVar10 = iVar10 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g, %g,%g,%g,%g\n",(double)*pfVar1,(double)*pfVar7,(double)*pfVar6,
                 (double)*pfVar5,(double)*pfVar4,(double)*pfVar3,(double)*pfVar2);
    } while (iVar10 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x140);
  return;
}
