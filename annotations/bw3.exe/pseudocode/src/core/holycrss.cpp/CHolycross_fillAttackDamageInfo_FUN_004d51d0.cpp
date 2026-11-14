// Name: core_holycrss.cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0
// Address: 004d51d0
// Address Range: [[004d51d0, 004d525a]]
// Convention: __cdecl
// Signature: void __cdecl core_holycrss_cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0(CHolycross *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_holycrss_cpp_CHolycross_fillAttackDamageInfo_FUN_004d51d0(CHolycross *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim)

{
  uint class_name_hash;
  float fVar1;
  CDemonActor *pCVar2;
  int unaff_EDI;
  CDemonActor *in_stack_0000001c;
  CDemonActor *in_stack_fffffff0;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040aca0
            ((CDemonActor *)this_ptr,attack_flags,out_damage_info,victim);
  fVar1 = (float)(*(((this_ptr->base).base.vtable._uc)->_uc).getGrabbed)
                           ((CCharacter *)this_ptr,in_stack_fffffff0,unaff_EDI);
  class_name_hash = g_CCharacterClassInfo.name_hash;
  out_damage_info->damage_type = DAMAGE_TYPE_HOLY_CROSS;
  out_damage_info->damage_amount = fVar1;
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(in_stack_0000001c,class_name_hash);
  if (((pCVar2 != (CDemonActor *)0x0) &&
      ((*(uint *)(pCVar2[0x25].create_event + 0x24) & 0x7fffffff) != 0)) &&
     (*(int *)(pCVar2[0x25].create_event + 0x28) == 0)) {
    out_damage_info->damage_amount = out_damage_info->damage_amount * _DAT_005c51db;
    return;
  }
  return;
}
