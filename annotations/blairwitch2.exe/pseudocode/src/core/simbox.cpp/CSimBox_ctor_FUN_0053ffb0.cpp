// Name: core_simbox.cpp_CSimBox_ctor_FUN_0053ffb0
// Address: 0053ffb0
// Address Range: [[0053ffb0, 0054006e]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_0053ffb0(CSimBox *this_ptr)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_0053ffb0(CSimBox *this_ptr)

{
  CBox CVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CBox *pCVar4;
  CBox *pCVar5;
  CBox *pCVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)&pCVar3[1].field_0x84);
  *(byte **)(pCVar4 + -0x204) = &g_CSimBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar4 + -0x200),"question.kfm");
  pCVar5 = (CBox *)0x5e688e;
  pCVar6 = pCVar4 + -0x7c;
  do {
    CVar1 = *pCVar5;
    *pCVar6 = CVar1;
    if (CVar1 == (CBox)0x0) break;
    CVar1 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CBox)0x0);
  *(uint *)(pCVar4 + -0x10) = 0;
  *(uint *)(pCVar4 + -0x14) = *(uint *)(pCVar4 + -0x10);
  *(uint *)(pCVar4 + -0x18) = *(uint *)(pCVar4 + -0x14);
  *(uint *)(pCVar4 + -4) = 0;
  *(uint *)(pCVar4 + -8) = *(uint *)(pCVar4 + -4);
  *(uint *)(pCVar4 + -0xc) = *(uint *)(pCVar4 + -8);
  *(uint *)(pCVar4 + -0x84) = 0;
  *(uint *)(pCVar4 + -0x80) = 0x42c80000;
  return (CSimBox *)(pCVar4 + -0x4b4);
}
