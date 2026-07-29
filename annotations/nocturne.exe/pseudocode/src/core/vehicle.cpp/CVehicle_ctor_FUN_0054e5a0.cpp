// Name: core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0
// Address: 0054e5a0
// Address Range: [[0054e5a0, 0054e7ea]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0(CVehicle *this_ptr)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_0054e5a0(CVehicle *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  void *pvVar4;
  CCourse *pCVar5;
  char *pcVar6;
  int *piVar7;
  
  pCVar2 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pvVar4 = __arrinit
                     (pCVar3 + 1,4,&g_CKeyFramedModelInstanceTypeInfo_0059b030);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x668),4,&g_CTireTypeInfo_005a3d20);
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_0043b5d0((CCourse *)((int)pvVar4 + 0x6e4));
  pCVar5[-0x13c].frames = (CCourseFrame *)&g_CVehicleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar5[-0x13c].loop,"32ford.kfm");
  pCVar5[-0x94].loop = 4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar5[-0x92].loop,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar5[-0x49].frames,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)(pCVar5 + -0x6d),"32rtire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar5[-0x25].loop,"32rtire.kfm");
  pCVar5[-0x93].len = -0x3fe00000;
  pCVar5[-0x93].frames = (CCourseFrame *)0xc0200000;
  pCVar5[-0x93].loop = 0x40a00000;
  pCVar5[-0x92].len = 0x3fa00000;
  pCVar5[-0x92].frames = (CCourseFrame *)0x3e800000;
  pCVar5[-0x6f].frames = (CCourseFrame *)0x40200000;
  pCVar5[-0x6f].loop = -0x3fe00000;
  pCVar5[-0x6e].len = 0x40a00000;
  pCVar5[-0x6e].frames = (CCourseFrame *)0x3fa00000;
  pCVar5[-0x6e].loop = 0x3e800000;
  pCVar5[-0x4b].loop = -0x3fe00000;
  pCVar5[-0x4a].len = -0x3fe00000;
  pCVar5[-0x4a].frames = (CCourseFrame *)0xc0900000;
  pCVar5[-0x4a].loop = 0x3fa00000;
  pCVar5[-0x49].len = 0x3e800000;
  pCVar5[-0x26].len = 0x40200000;
  pCVar5[-0x26].frames = (CCourseFrame *)0xc0200000;
  pCVar5[-0x26].loop = -0x3f700000;
  pCVar5[-0x25].len = 0x3fa00000;
  pCVar5[-0x25].frames = (CCourseFrame *)0x3e800000;
  pCVar5[-0x96].len = 0x44fa0000;
  pCVar5[-0x9c].loop = 0;
  pCVar5[-0x9c].frames = (CCourseFrame *)pCVar5[-0x9c].loop;
  pCVar5[-0x9c].len = (int)pCVar5[-0x9c].frames;
  pCVar5[-0x9d].loop = 0;
  pCVar5[-0x9d].frames = (CCourseFrame *)pCVar5[-0x9d].loop;
  pCVar5[-0x9d].len = (int)pCVar5[-0x9d].frames;
  pCVar5[-0x99].loop = 0;
  pcVar6 = "chicpath.pth";
  pCVar5[-0x99].frames = (CCourseFrame *)pCVar5[-0x99].loop;
  pCVar5[-0x99].len = (int)pCVar5[-0x99].frames;
  pCVar5[1].len = 0;
  piVar7 = &pCVar5[1].loop;
  pCVar5[1].frames = (CCourseFrame *)0x42c80000;
  do {
    cVar1 = *pcVar6;
    *(char *)piVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)piVar7 + 1) = cVar1;
    piVar7 = (int *)((int)piVar7 + 2);
  } while (cVar1 != '\0');
  pCVar5[6].frames = (CCourseFrame *)0x0;
  pCVar5[6].loop = 0;
  pCVar5[7].len = 0;
  return (CVehicle *)&pCVar5[-0x158].loop;
}
