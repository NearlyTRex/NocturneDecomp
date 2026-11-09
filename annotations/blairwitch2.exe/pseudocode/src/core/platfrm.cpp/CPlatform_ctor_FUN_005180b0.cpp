// Name: core_platfrm.cpp_CPlatform_ctor_FUN_005180b0
// Address: 005180b0
// Address Range: [[005180b0, 00518272]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(CPlatform *this_ptr)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_005180b0(CPlatform *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CCourse *pCVar3;
  CPlatform *pCVar4;
  CCourse *pCVar6;
  CCourse *pCVar7;
  byte bVar8;
  uint auStackY_17ec [509];
  uint auStackY_ff8 [1014];
  uint uStack_10;
  byte *puVar5;
  
  bVar8 = 0;
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)&pCVar2[1].field_0x3c);
  *(byte **)(pCVar3 + -0x1bc) = &g_CPlatformVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar3 + -0x1b8),"question.kfm");
  pCVar3[0x44] = (CCourse)0x0;
  pCVar3[0xa8] = (CCourse)0x0;
  pCVar3[0x10c] = (CCourse)0x0;
  pCVar3[0x170] = (CCourse)0x0;
  pCVar3[0x184] = (CCourse)0x0;
  pCVar3[0x198] = (CCourse)0x0;
  *(uint *)(pCVar3 + -0x3c) = 0;
  *(uint *)(pCVar3 + -0x34) = 0;
  *(uint *)(pCVar3 + -0x24) = 0x40000000;
  *(uint *)(pCVar3 + -0x28) = 0x40000000;
  *(uint *)(pCVar3 + -0x38) = 0;
  pCVar6 = pCVar3 + 0x18;
  pCVar3[-0x20] = (CCourse)0x0;
  if (pCVar6 != pCVar3 + -0x44c) {
    *(uint *)pCVar6 = *(uint *)(pCVar3 + -0x44c);
    *(uint *)(pCVar3 + 0x1c) = *(uint *)(pCVar3 + -0x448);
    *(uint *)(pCVar3 + 0x20) = *(uint *)(pCVar3 + -0x444);
  }
  if (pCVar3 + 0xc != pCVar6) {
    *(uint *)(pCVar3 + 0xc) = *(uint *)pCVar6;
    *(uint *)(pCVar3 + 0x10) = *(uint *)(pCVar3 + 0x1c);
    *(uint *)(pCVar3 + 0x14) = *(uint *)(pCVar3 + 0x20);
  }
  core_xform_cpp_FUN_00594380(pCVar3 + -0x43c);
  pCVar6 = pCVar3 + (uint)bVar8 * -8 + 0x38;
  *(uint *)(pCVar3 + 0x34) = uStack_10;
  *(uint *)pCVar6 = *(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8);
  *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4 + (uint)bVar8 * -8 + 4) =
       *(uint *)
        ((int)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4)
  ;
  pCVar7 = pCVar3 + (uint)bVar8 * -8 + 0x28;
  pCVar6 = pCVar3 + (uint)bVar8 * -8 + 0x38;
  *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x34);
  *(uint *)pCVar7 = *(uint *)pCVar6;
  *(uint *)(pCVar7 + (uint)bVar8 * -8 + 4) = *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4);
  *(uint *)(pCVar7 + (uint)bVar8 * -8 + 4 + (uint)bVar8 * -8 + 4) =
       *(uint *)(pCVar6 + (uint)bVar8 * -8 + 4 + (uint)bVar8 * -8 + 4);
  *(uint *)(pCVar3 + 0x1b0) = 0;
  *(uint *)(pCVar3 + 0x1b4) = 0;
  *(uint *)(pCVar3 + 0x1b8) = 0;
  pCVar3[0x1bc] = (CCourse)0x0;
  *(uint *)(pCVar3 + 0x414) = 0;
  *(uint *)(pCVar3 + -0x408) = 0x32;
  *(uint *)(pCVar3 + 0x1fc) = 0;
  *(uint *)(pCVar3 + -0x30) = 0;
  *(uint *)(pCVar3 + -0x2c) = 0;
  pCVar4 = (CPlatform *)(pCVar3 + -0x46c);
  do {
    puVar5 = &pCVar4->field_0x34;
    *(uint *)&pCVar4->field_0x678 = 0;
    pCVar4 = (CPlatform *)puVar5;
  } while ((CCourse *)puVar5 != pCVar3 + -0x264);
  *(uint *)(pCVar3 + 0x204) = 0;
  *(uint *)(pCVar3 + 0x208) = 1;
  *(uint *)(pCVar3 + 0x200) = 0;
  return (CPlatform *)(pCVar3 + -0x46c);
}
