// Name: core_course.cpp_FUN_00444970
// Address: 00444970
// Address Range: [[00444970, 00444a99]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00444970(CCourse *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_FUN_00444970(CCourse *this_ptr,char *filename)

{
  _FILE *p_Var1;
  int iVar2;
  CCourseFrame *pCVar3;
  int iVar4;
  byte auStack_18 [4];
  uint uStack_14;
  
  core_course_cpp_FUN_00444aa0(this_ptr);
  p_Var1 = engine_dosio_cpp_FUN_004659c0((char *)0x5b983f,filename,(char *)0x5b983c);
  if (p_Var1 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\course.cpp";
    _DAT_01d71de4 = 0x7c;
    core_main_c_FUN_004e4330("CCourse::load - can't open data\\%s",filename);
  }
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,0x5b987a,auStack_18);
  do {
    iVar2 = _fgetc(p_Var1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(p_Var1,0x5b987e,&uStack_14,&this_ptr->loop);
  core_course_cpp_FUN_00444910(this_ptr,uStack_14);
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
      _fscanf(p_Var1,0x5b9885,pCVar3,pCVar3 + 4,pCVar3 + 8,pCVar3 + 0xc,pCVar3 + 0x10,
                 pCVar3 + 0x14,pCVar3 + 0x18);
    } while (iVar2 < this_ptr->len);
  }
  _fclose(p_Var1);
  return;
}
