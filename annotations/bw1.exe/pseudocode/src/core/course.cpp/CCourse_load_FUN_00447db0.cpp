// Name: core_course.cpp_CCourse_load_FUN_00447db0
// Address: 00447db0
// Address Range: [[00447db0, 00447ed9]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_load_FUN_00447db0(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_load_FUN_00447db0(CCourse *this_ptr,char *filename)

{
  _FILE *p_Var1;
  int iVar2;
  CCourseFrame *pCVar3;
  int iVar4;
  byte auStack_18 [4];
  uint local_14;
  
  core_course_cpp_FUN_00447ee0(this_ptr);
  p_Var1 = engine_dosio_cpp_FUN_00479180(&DAT_005d7188,filename,&DAT_005d7185);
  if (p_Var1 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\course.cpp";
    _DAT_01d1d404 = 0x7c;
    core_main_c_FUN_005030e0("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,&DAT_005d71c3,auStack_18);
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,"%d,%d\n",&local_14,&this_ptr->loop);
  core_course_cpp_FUN_00447d50(this_ptr,local_14);
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < this_ptr->len) {
    iVar4 = 0;
    do {
      pCVar3 = this_ptr->frames + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      _fscanf(p_Var1,"%f,%f,%f, %f,%f,%f,%f\n",pCVar3,pCVar3 + 4,pCVar3 + 8,pCVar3 + 0xc,
                 pCVar3 + 0x10,pCVar3 + 0x14,pCVar3 + 0x18);
    } while (iVar2 < this_ptr->len);
  }
  _fclose(p_Var1);
  return;
}
