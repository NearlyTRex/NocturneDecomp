// Name: core_course.cpp_CCourse_load_FUN_00442580
// Address: 00442580
// Address Range: [[00442580, 004426b3]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

{
  FILE *file;
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_18 [4];
  byte local_14 [4];
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  file = engine_dosio_c_getFile_FUN_00481a50("data",filename,"rt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\course.cpp";
    g_CurrentLineNumber = 0x7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",auStack_18);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n",local_14,&this_ptr->loop);
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->len) {
    iVar3 = 0;
    do {
      iVar2 = (int)&(this_ptr->frame_list->frame1).pos.x + iVar3;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file,"%f,%f,%f, %f,%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8,iVar2 + 0xc,iVar2 + 0x10,
                 iVar2 + 0x14,iVar2 + 0x18);
    } while (iVar1 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x9e);
  return;
}
