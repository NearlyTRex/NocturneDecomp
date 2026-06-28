// Name: core_course.cpp_CCourse_load_FUN_00442580
// Address: 00442580
// MANUAL RECONSTRUCTION
// Address Range: [[00442580, 004426b3]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  int iVar4;
  int auStack_18;
  int local_14;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"rt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\course.cpp";
    g_CurrentLineNumber = 0x7c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",&auStack_18);
  do {
    iVar4 = _fgetc(file);
    if (iVar4 < 0) break;
  } while (iVar4 != 10);
  _fscanf(file,"%d,%d\n",&local_14,&this_ptr->loop);
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr,local_14);
  do {
    iVar4 = _fgetc(file);
    if (iVar4 < 0) break;
  } while (iVar4 != 10);
  iVar4 = 0;
  if (0 < this_ptr->len) {
    do {
      CCourseFrame *frame = &this_ptr->frames[iVar4];
      iVar4 = iVar4 + 1;
      _fscanf(file,"%f,%f,%f, %f,%f,%f,%f\n",
                 &frame->pos.x,&frame->pos.y,&frame->pos.z,
                 &frame->orient.w,&frame->orient.x,&frame->orient.y,&frame->orient.z);
    } while (iVar4 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x9e);
  return;
}
