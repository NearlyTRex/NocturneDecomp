// Name: core_course.cpp_CCourse_load_FUN_00438af0
// Address: 00438af0
// Address Range: [[00438af0, 00438c19]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  uint local_14;
  
  core_course_cpp_FUN_00438c20(this_ptr);
  file = engine_dosio_cpp_FUN_00460c70(&DAT_005ce01c,filename,&DAT_005ce019);
  if (file == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\course.cpp";
    _DAT_01d046a4 = 0x7c;
    core_main_c_FUN_004e4500("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,&DAT_005ce057);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d,%d\n");
  core_course_cpp_FUN_00438a90(this_ptr,local_14);
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
