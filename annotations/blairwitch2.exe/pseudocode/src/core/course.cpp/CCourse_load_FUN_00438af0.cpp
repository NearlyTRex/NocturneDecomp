// Name: core_course.cpp_CCourse_load_FUN_00438af0
// Address: 00438af0
// Address Range: [[00438af0, 00438c19]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  int local_14;
  
  core_course_cpp_CCourse_free_FUN_00438c20(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00460c70("data",filename,"rt");
  if (file == (_FILE *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\course.cpp";
    g_INT_01d046a4 = 0x7c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CCourse::load - can't open data\\%s");
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n");
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d,%d\n");
  core_course_cpp_CCourse_allocMemory_FUN_00438a90(this_ptr,local_14);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->len) {
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file,"%f,%f,%f, %f,%f,%f,%f\n");
    } while (iVar1 < this_ptr->len);
  }
  _fclose(file);
  return;
}
