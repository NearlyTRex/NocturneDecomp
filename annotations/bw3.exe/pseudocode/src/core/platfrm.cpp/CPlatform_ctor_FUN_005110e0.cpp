// Name: core_platfrm.cpp_CPlatform_ctor_FUN_005110e0
// Address: 005110e0
// Address Range: [[005110e0, 005112a2]]
// Convention: __cdecl
// Signature: CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_005110e0(CPlatform *this_ptr)

#include "nocturne.h"

CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_005110e0(CPlatform *this_ptr)

{
  CCourse *pCVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CKeyFramedModelInstance *pCVar4;
  CCourse *pCVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  uint auStackY_17ec [509];
  CCourseFrame *apCStackY_ff8 [1014];
  CCourseFrame *pCStack_10;
  
  bVar11 = 0;
  pCVar3 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar3 + 1));
  pCVar5 = core_course_cpp_CCourse_ctor_FUN_004448d0
                     ((CCourse *)(pCVar4[1].part_visibility_flags + 0xf));
  pCVar5[-0x25].len = (int)&g_CPlatformVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar5[-0x25].frames,"question.kfm");
  *(byte *)&pCVar5[5].loop = 0;
  *(byte *)&pCVar5[0xe].len = 0;
  *(byte *)&pCVar5[0x16].frames = 0;
  *(byte *)&pCVar5[0x1e].loop = 0;
  *(byte *)&pCVar5[0x20].frames = 0;
  *(byte *)&pCVar5[0x22].len = 0;
  pCVar5[-5].len = 0;
  pCVar5[-5].loop = 0;
  pCVar5[-3].len = 0x40000000;
  pCVar5[-4].loop = 0x40000000;
  pCVar5[-5].frames = (CCourseFrame *)0x0;
  pCVar1 = pCVar5 + 2;
  *(byte *)&pCVar5[-3].frames = 0;
  if (pCVar1 != (CCourse *)&pCVar5[-0x3f].frames) {
    pCVar1->len = (int)pCVar5[-0x3f].frames;
    pCVar5[2].frames = (CCourseFrame *)pCVar5[-0x3f].loop;
    pCVar5[2].loop = pCVar5[-0x3e].len;
  }
  if (pCVar5 + 1 != pCVar1) {
    pCVar5[1].len = pCVar1->len;
    pCVar5[1].frames = pCVar5[2].frames;
    pCVar5[1].loop = pCVar5[2].loop;
  }
  core_xform_cpp_FUN_005860b0(&pCVar5[-0x3e].loop);
  puVar7 = (uint *)((int)pCVar5 + (uint)bVar11 * -8 + 0x38);
  pCVar5[4].frames = pCStack_10;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar7 = *(uint *)(&stack0xfffffff4 + (uint)bVar11 * -8);
  *puVar8 = *(uint *)(&stack0xfffffff8 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  puVar8[(uint)bVar11 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffff8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
        ((uint)bVar11 * -2 + 1) * 4);
  puVar9 = (uint *)((int)pCVar5 + (uint)bVar11 * -8 + 0x28);
  puVar7 = (uint *)((int)pCVar5 + (uint)bVar11 * -8 + 0x38);
  pCVar5[3].len = (int)pCVar5[4].frames;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  puVar8 = puVar7 + (uint)bVar11 * -2 + 1;
  *puVar9 = *puVar7;
  *puVar10 = *puVar8;
  puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
  pCVar5[0x24].len = 0;
  pCVar5[0x24].frames = (CCourseFrame *)0x0;
  pCVar5[0x24].loop = 0;
  *(byte *)&pCVar5[0x25].len = 0;
  pCVar5[0x57].len = 0;
  pCVar5[-0x39].len = 0x32;
  pCVar5[0x2a].frames = (CCourseFrame *)0x0;
  pCVar5[-4].len = 0;
  pCVar5[-4].frames = (CCourseFrame *)0x0;
  piVar6 = &pCVar5[-0x42].loop;
  do {
    iVar2 = (int)(piVar6 + 0xd);
    piVar6[0x147] = 0;
    piVar6 = (int *)iVar2;
  } while ((CCourse *)iVar2 != pCVar5 + -0x16);
  pCVar5[0x2b].len = 0;
  pCVar5[0x2b].frames = (CCourseFrame *)0x1;
  pCVar5[0x2a].loop = 0;
  return (CPlatform *)&pCVar5[-0x42].loop;
}
