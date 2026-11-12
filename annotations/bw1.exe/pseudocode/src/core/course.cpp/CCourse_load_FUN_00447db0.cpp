// Name: core_course.cpp_CCourse_load_FUN_00447db0
// Address: 00447db0
// Address Range: [[00447db0, 00447ed9]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00447db0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_load_FUN_00447db0(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  uint local_14;
  
  core_course_cpp_FUN_00447ee0(this_ptr);
  file = engine_dosio_cpp_FUN_00479180(&DAT_005d7188,filename,&DAT_005d7185);
  if (file == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\course.cpp";
    _DAT_01d1d404 = 0x7c;
    core_main_c_FUN_005030e0("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,&DAT_005d71c3);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d,%d\n");
  core_course_cpp_FUN_00447d50(this_ptr,local_14);
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
