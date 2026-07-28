// Name: core_course.cpp_CCourse_load_FUN_0043b690
// Address: 0043b690
// Address Range: [[0043b690, 0043b7b9]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_0043b690(CCourse *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_load_FUN_0043b690(CCourse *this_ptr,char *filename)

{
  _FILE *file;
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_18 [4];
  int local_14;
  
  core_course_cpp_CCourse_free_FUN_0043b7c0(this_ptr);
  file = engine_dosio_cpp_getFile_FUN_00456a60("data",filename,"rt");
  if (file == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\course.cpp";
    INT_01cc4804 = 0x7c;
    core_main_c_FUN_004c8440("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d\n",auStack_18);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file,"%d,%d\n",&local_14,&this_ptr->loop);
  core_course_cpp_CCourse_allocMemory_FUN_0043b610(this_ptr,local_14);
  do {
    iVar1 = _fgetc(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < this_ptr->len) {
    iVar3 = 0;
    do {
      iVar2 = (int)&(this_ptr->frames->pos).x + iVar3;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
      _fscanf(file,"%f,%f,%f, %f,%f,%f,%f\n",iVar2,iVar2 + 4,iVar2 + 8,iVar2 + 0xc,iVar2 + 0x10,
                 iVar2 + 0x14,iVar2 + 0x18);
    } while (iVar1 < this_ptr->len);
  }
  _fclose(file);
  return;
}
