// Name: core_course.cpp_CCourse_load_FUN_00442580
// Address: 00442580
// Address Range: [[00442580, 004426b3]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_00442580(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  int iVar4;
  int iVar2;
  int iVar3;
  byte auStack_18 [4];
  int local_14;
  
  core_course_cpp_CCourse_free_FUN_004426c0(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"rt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\course.cpp";
    g_CurrentLineNumber = 124;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",auStack_18);
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
    iVar3 = 0;
    do {
      iVar2 = (int)&(this_ptr->frames->pos).x + iVar3;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1c;
      _fscanf(file,"%f,%f,%f, %f,%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8,iVar2 + 0xc,iVar2 + 0x10,
                 iVar2 + 0x14,iVar2 + 0x18);
    } while (iVar4 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",158);
  return;
}
