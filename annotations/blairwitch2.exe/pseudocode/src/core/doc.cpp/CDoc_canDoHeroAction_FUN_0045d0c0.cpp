// Name: core_doc.cpp_CDoc_canDoHeroAction_FUN_0045d0c0
// Address: 0045d0c0
// Address Range: [[0045d0c0, 0045d1ee]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_0045d0c0(CDoc *this_ptr,int action_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_0045d0c0(CDoc *this_ptr,int action_type)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if ((*(int *)&this_ptr->field_0x256a4 == 0) && (*(int *)&this_ptr->field_0x25640 == 0)) {
    puVar1 = &this_ptr->field_0x2b4;
    fVar2 = (float)core_motion_cpp_FUN_005038a0(puVar1,0);
    fVar3 = (float)core_motion_cpp_FUN_005038a0(puVar1,1);
    fVar4 = (float)core_motion_cpp_FUN_005038a0(puVar1,3);
    fVar5 = (float)core_motion_cpp_FUN_005038a0(puVar1,4);
    fVar6 = (float)core_motion_cpp_FUN_005038a0(puVar1,5);
    fVar8 = (float)_DAT_005d07cf;
    switch(action_type) {
    case 4:
      fVar9 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,0);
      if (fVar9 < (float)_DAT_005d07d7) {
        return 0;
      }
    case 3:
      if (fVar6 + fVar5 + fVar4 + fVar3 + fVar2 <= fVar8) {
        return 0;
      }
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      fVar8 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,0);
      if (fVar8 < (float)_DAT_005d07d7) {
        return 0;
      }
    }
    iVar7 = core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0((CHero *)this_ptr,action_type);
    return iVar7;
  }
  return 0;
}
