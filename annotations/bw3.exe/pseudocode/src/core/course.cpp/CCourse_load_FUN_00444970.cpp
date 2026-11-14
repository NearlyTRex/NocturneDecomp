// Name: core_course.cpp_CCourse_load_FUN_00444970
// Address: 00444970
// Address Range: [[00444970, 00444a99]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00444970(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_load_FUN_00444970(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  uint uStack_14;
  
  core_course_cpp_FUN_00444aa0(this_ptr);
  file = engine_dosio_cpp_FUN_004659c0((char *)0x5b983f,filename,(char *)0x5b983c);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\course.cpp";
    _DAT_01d71de4 = 0x7c;
    core_main_c_FUN_004e4330("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,(char *)0x5b987a);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,(char *)0x5b987e);
  core_course_cpp_FUN_00444910(this_ptr,uStack_14);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->len) {
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file,(char *)0x5b9885);
    } while (iVar1 < this_ptr->len);
  }
  _fclose(file);
  return;
}
