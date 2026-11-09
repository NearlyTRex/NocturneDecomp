// Name: core_course.cpp_CCourse_load_FUN_00438af0
// Address: 00438af0
// Address Range: [[00438af0, 00438c19]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_load_FUN_00438af0(CCourse *this_ptr,char *filename)

{
  _FILE *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_18 [4];
  uint local_14;
  
  core_course_cpp_FUN_00438c20(this_ptr);
  p_Var1 = engine_dosio_cpp_FUN_00460c70(&DAT_005ce01c,filename,&DAT_005ce019);
  if (p_Var1 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\course.cpp";
    _DAT_01d046a4 = 0x7c;
    core_main_c_FUN_004e4500("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,&DAT_005ce057,auStack_18);
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,"%d,%d\n",&local_14,this_ptr + 8);
  core_course_cpp_FUN_00438a90(this_ptr,local_14);
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(this_ptr + 4) + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      _fscanf(p_Var1,"%f,%f,%f, %f,%f,%f,%f\n",iVar3,iVar3 + 4,iVar3 + 8,iVar3 + 0xc,iVar3 + 0x10,
                 iVar3 + 0x14,iVar3 + 0x18);
    } while (iVar2 < *(int *)this_ptr);
  }
  _fclose(p_Var1);
  return;
}
