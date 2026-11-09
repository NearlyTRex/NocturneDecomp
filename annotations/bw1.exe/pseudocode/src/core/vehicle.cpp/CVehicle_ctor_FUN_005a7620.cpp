// Name: core_vehicle.cpp_CVehicle_ctor_FUN_005a7620
// Address: 005a7620
// Address Range: [[005a7620, 005a786a]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005a7620(CVehicle *this_ptr)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005a7620(CVehicle *this_ptr)

{
  CCourse CVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  int iVar4;
  CCourse *pCVar5;
  char *pcVar6;
  CCourse *pCVar7;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  iVar4 = __arrinit(pCVar3 + 1,4,&g_CKeyFramedModelInstanceTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x668,4,&g_CTireTypeInfo);
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_00447d10((CCourse *)(iVar4 + 0x6e4));
  *(byte **)(pCVar5 + -0xecc) = &g_CVehicleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5 + -0xec8),(char *)0x5f8f84);
  *(uint *)(pCVar5 + -0x6e8) = 4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5 + -0x6d0),(char *)0x5f8f8f);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5 + -0x368),(char *)0x5f8f9b);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5 + -0x51c),(char *)0x5f8fa7);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar5 + -0x1b4),(char *)0x5f8fb3);
  *(uint *)(pCVar5 + -0x6e4) = 0xc0200000;
  *(uint *)(pCVar5 + -0x6e0) = 0xc0200000;
  *(uint *)(pCVar5 + -0x6dc) = 0x40a00000;
  *(uint *)(pCVar5 + -0x6d8) = 0x3fa00000;
  *(uint *)(pCVar5 + -0x6d4) = 0x3e800000;
  *(uint *)(pCVar5 + -0x530) = 0x40200000;
  *(uint *)(pCVar5 + -0x52c) = 0xc0200000;
  *(uint *)(pCVar5 + -0x528) = 0x40a00000;
  *(uint *)(pCVar5 + -0x524) = 0x3fa00000;
  *(uint *)(pCVar5 + -0x520) = 0x3e800000;
  *(uint *)(pCVar5 + -0x37c) = 0xc0200000;
  *(uint *)(pCVar5 + -0x378) = 0xc0200000;
  *(uint *)(pCVar5 + -0x374) = 0xc0900000;
  *(uint *)(pCVar5 + -0x370) = 0x3fa00000;
  *(uint *)(pCVar5 + -0x36c) = 0x3e800000;
  *(uint *)(pCVar5 + -0x1c8) = 0x40200000;
  *(uint *)(pCVar5 + -0x1c4) = 0xc0200000;
  *(uint *)(pCVar5 + -0x1c0) = 0xc0900000;
  *(uint *)(pCVar5 + -0x1bc) = 0x3fa00000;
  *(uint *)(pCVar5 + -0x1b8) = 0x3e800000;
  *(uint *)(pCVar5 + -0x708) = 0x44fa0000;
  *(uint *)(pCVar5 + -0x748) = 0;
  *(uint *)(pCVar5 + -0x74c) = *(uint *)(pCVar5 + -0x748);
  *(uint *)(pCVar5 + -0x750) = *(uint *)(pCVar5 + -0x74c);
  *(uint *)(pCVar5 + -0x754) = 0;
  *(uint *)(pCVar5 + -0x758) = *(uint *)(pCVar5 + -0x754);
  *(uint *)(pCVar5 + -0x75c) = *(uint *)(pCVar5 + -0x758);
  *(uint *)(pCVar5 + -0x724) = 0;
  pcVar6 = "chicpath.pth";
  *(uint *)(pCVar5 + -0x728) = *(uint *)(pCVar5 + -0x724);
  *(uint *)(pCVar5 + -0x72c) = *(uint *)(pCVar5 + -0x728);
  *(uint *)(pCVar5 + 0xc) = 0;
  pCVar7 = pCVar5 + 0x14;
  *(uint *)(pCVar5 + 0x10) = 0x42c80000;
  do {
    CVar1 = (CCourse)*pcVar6;
    *pCVar7 = CVar1;
    if (CVar1 == (CCourse)0x0) break;
    CVar1 = *(CCourse *)(pcVar6 + 1);
    pcVar6 = pcVar6 + 2;
    pCVar7[1] = CVar1;
    pCVar7 = pCVar7 + 2;
  } while (CVar1 != (CCourse)0x0);
  *(uint *)(pCVar5 + 0x4c) = 0;
  *(uint *)(pCVar5 + 0x50) = 0;
  *(uint *)(pCVar5 + 0x54) = 0;
  return (CVehicle *)(pCVar5 + -0x1020);
}
