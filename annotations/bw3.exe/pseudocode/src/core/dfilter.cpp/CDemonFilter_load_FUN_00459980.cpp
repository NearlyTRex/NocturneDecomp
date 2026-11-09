// Name: core_dfilter.cpp_CDemonFilter_load_FUN_00459980
// Address: 00459980
// Address Range: [[00459980, 00459b7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_00459980(CDemonFilter *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_load_FUN_00459980(CDemonFilter *this_ptr,char *filename)

{
  char cVar1;
  _FILE *p_Var2;
  int iVar3;
  int extraout_EDX;
  char *pcVar4;
  float10 fVar5;
  
  p_Var2 = engine_dosio_cpp_FUN_004659c0(&DAT_005baabe,filename,&DAT_005baabb);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0xab;
    core_main_c_FUN_004e4330("CDemonFilter::load - Bad filename : %s",filename);
  }
  _fclose(p_Var2);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0(&DAT_005baafd,filename);
  fVar5 = SQRT((float10)iVar3);
  round();
  *(int *)this_ptr = (int)ROUND(fVar5);
  *(int *)&this_ptr->field_0x4 = extraout_EDX / *(int *)this_ptr;
  if (*(int *)this_ptr != *(int *)&this_ptr->field_0x4) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0xb7;
    core_main_c_FUN_004e4330
              ("CDemonFilter::load - Non-square filter %dx%d",*(uint *)this_ptr,
               *(int *)&this_ptr->field_0x4);
  }
  if ((*(int *)this_ptr < 0x40) || (0x100 < *(int *)this_ptr)) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0xb9;
    core_main_c_FUN_004e4330("CDemonFilter::load - Bad filter size %d",*(uint *)this_ptr);
  }
  if ((*(int *)&this_ptr->field_0x4 < 0x40) || (0x100 < *(int *)&this_ptr->field_0x4)) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0xbc;
    core_main_c_FUN_004e4330
              ("CDemonFilter::load - Bad filter size %d",*(uint *)&this_ptr->field_0x4);
  }
  core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(this_ptr);
  p_Var2 = engine_dosio_cpp_FUN_004659c0(&DAT_005babbd,filename,&DAT_005babba);
  if (p_Var2 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\dfilter.cpp";
    _DAT_01d71de4 = 0xc6;
    core_main_c_FUN_004e4330("CDemonFilter::load - Bad filename");
  }
  _fread(*(uint *)&this_ptr->field_0x48,*(uint *)this_ptr,
             *(uint *)&this_ptr->field_0x4,p_Var2);
  _fclose(p_Var2);
  for (iVar3 = 0; iVar3 < *(int *)this_ptr * *(int *)&this_ptr->field_0x4; iVar3 = iVar3 + 1) {
    *(char *)(iVar3 + *(int *)&this_ptr->field_0x48) =
         (char)((int)(uint)*(byte *)(iVar3 + *(int *)&this_ptr->field_0x48) >> 2);
  }
  pcVar4 = &this_ptr->field_0x8;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
