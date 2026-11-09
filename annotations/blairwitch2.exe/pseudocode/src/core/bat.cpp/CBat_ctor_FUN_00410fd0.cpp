// Name: core_bat.cpp_CBat_ctor_FUN_00410fd0
// Address: 00410fd0
// Address Range: [[00410fd0, 0041109f]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_00410fd0(CBat *this_ptr)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_ctor_FUN_00410fd0(CBat *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)&pCVar2[1].field_0x20);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar3 + 0x10));
  *(byte **)&this_ptr_00[-1].field_0x148 = &g_CBatVTable;
  *(uint *)&this_ptr_00[-1].field_0x178 = 0;
  *(uint *)(this_ptr_00 + 1) = 0;
  pcVar4 = "batpath.pth";
  *(uint *)&this_ptr_00[1].field_0x4 = 0x41f00000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0x3f800000;
  pcVar5 = &this_ptr_00[-1].field_0x14c;
  *(uint *)&this_ptr_00[1].field_0xc = 0x41f00000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr_00,(char *)0x5cb667);
  this_ptr_00[1].field_0x10 = 0;
  *(uint *)&this_ptr_00[1].field_0x74 = 0x41700000;
  *(uint *)&this_ptr_00[1].field_0x78 = 0x41f00000;
  *(uint *)&this_ptr_00[1].field_0x80 = 0;
  return (CBat *)&this_ptr_00[-2].field_0x14;
}
