// Name: core_platfrm.cpp_FUN_004f5d90
// Address: 004f5d90
// Address Range: [[004f5d90, 004f5f52]]
// Convention: unknown
// Signature: CCourseFrame ** core_platfrm_cpp_FUN_004f5d90(CDemonActor *param_1)

#include "nocturne.h"

CCourseFrame ** core_platfrm_cpp_FUN_004f5d90(CDemonActor *param_1)

{
  CCourse *pCVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CCourse *pCVar4;
  CCourseFrame **ppCVar5;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  CCourseFrame *apCStackY_17f0 [1523];
  CCourseFrame *local_14;
  CCourseFrame **ppCVar6;
  
  bVar11 = 0;
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_course_cpp_CCourse_ctor_FUN_0043b5d0
                     ((CCourse *)(pCVar3[1].part_visibility_flags + 0xf));
  pCVar4[-0x25].len = (int)&g_CPlatformVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar4[-0x25].frames,"slider1.kfm");
  *(byte *)&pCVar4[5].loop = 0;
  *(byte *)&pCVar4[0xe].len = 0;
  *(byte *)&pCVar4[0x16].frames = 0;
  *(byte *)&pCVar4[0x1e].loop = 0;
  *(byte *)&pCVar4[0x20].frames = 0;
  *(byte *)&pCVar4[0x22].len = 0;
  pCVar4[-5].len = 0;
  pCVar4[-5].loop = 0;
  pCVar4[-3].len = 0x40000000;
  pCVar4[-4].loop = 0x40000000;
  pCVar4[-5].frames = (CCourseFrame *)0x0;
  pCVar1 = pCVar4 + 2;
  *(byte *)&pCVar4[-3].frames = 0;
  if (pCVar1 != pCVar4 + -0x3e) {
    pCVar1->len = pCVar4[-0x3e].len;
    pCVar4[2].frames = pCVar4[-0x3e].frames;
    pCVar4[2].loop = pCVar4[-0x3e].loop;
  }
  if (pCVar4 + 1 != pCVar1) {
    pCVar4[1].len = pCVar1->len;
    pCVar4[1].frames = pCVar4[2].frames;
    pCVar4[1].loop = pCVar4[2].loop;
  }
  core_xform_cpp_eulerToQuaternion_FUN_0055d610(&pCVar4[-0x3d].frames);
  puVar7 = (uint *)((int)pCVar4 + (uint)bVar11 * -8 + 0x38);
  pCVar4[4].frames = local_14;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar7 = *(uint *)(&stack0xfffffff0 + (uint)bVar11 * -8);
  *puVar8 = *(uint *)(&stack0xfffffff4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  puVar8[(uint)bVar11 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffff4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
        ((uint)bVar11 * -2 + 1) * 4);
  puVar9 = (uint *)((int)pCVar4 + (uint)bVar11 * -8 + 0x28);
  puVar7 = (uint *)((int)pCVar4 + (uint)bVar11 * -8 + 0x38);
  pCVar4[3].len = (int)pCVar4[4].frames;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar9 = *puVar7;
  *puVar10 = *puVar8;
  puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
  pCVar4[0x24].len = 0;
  pCVar4[0x24].frames = (CCourseFrame *)0x0;
  pCVar4[0x24].loop = 0;
  *(byte *)&pCVar4[0x25].len = 0;
  pCVar4[0x57].len = 0;
  pCVar4[-0x39].loop = 0x32;
  pCVar4[0x2a].frames = (CCourseFrame *)0x0;
  pCVar4[-4].len = 0;
  pCVar4[-4].frames = (CCourseFrame *)0x0;
  ppCVar5 = &pCVar4[-0x41].frames;
  do {
    ppCVar6 = ppCVar5 + 0xd;
    ppCVar5[0x145] = (CCourseFrame *)0x0;
    ppCVar5 = ppCVar6;
  } while (ppCVar6 != (CCourseFrame **)&pCVar4[-0x16].loop);
  pCVar4[0x2b].len = 0;
  pCVar4[0x2b].frames = (CCourseFrame *)0x1;
  pCVar4[0x2a].loop = 0;
  return &pCVar4[-0x41].frames;
}
