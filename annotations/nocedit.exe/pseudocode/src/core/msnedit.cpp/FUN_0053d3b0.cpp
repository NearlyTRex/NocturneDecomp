// Name: core_msnedit.cpp_FUN_0053d3b0
// Address: 0053d3b0
// Address Range: [[0053d3b0, 0053d7a3]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d3b0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053d3b0(uint param_1) */

void core_msnedit_cpp_FUN_0053d3b0(void)

{
  double dVar1;
  CDemonActor *actor_ptr;
  uint uVar2;
  uint uVar3;
  CDemonActor *pCVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  int in_stack_00000004;
  uint in_stack_ffffef3c;
  uint in_stack_ffffef40;
  char **in_stack_ffffef44;
  CStrList_vtable *in_stack_ffffef48;
  uint in_stack_ffffef4c;
  CPickList local_d1c;
  CPickList local_974;
  CPickList local_5cc;
  char local_224 [500];
  ulonglong local_30;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  char *local_18;
  float local_14;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_d1c);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_974);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffef3c);
  actor_ptr = *(CDemonActor **)(in_stack_00000004 + 0x548);
  local_20 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    if (pCVar4 != (CDemonActor *)0x0) {
      local_14 = 1.0;
      if (pCVar4->create_event[0] != '\0') {
        local_18 = pCVar4->create_event;
        iVar5 = crt_string_c_stricmp_FUN_005fe7f0(local_18,"none");
        if ((iVar5 != 0) &&
           (iVar5 = crt_string_c_stricmp_FUN_005fe7f0(local_18,"true"), iVar5 != 0)) {
          local_14 = pCVar4->create_prob;
        }
      }
      fVar6 = (float10)(float)pCVar4[0x1a].next_actor * (float10)local_14;
      dVar7 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * 100.0f));
      local_28 = (int)ROUND(dVar7);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",pCVar4,
                 SUB84((double)(float)pCVar4[0x1a].next_actor,0),
                 (int)((ulonglong)(double)(float)pCVar4[0x1a].next_actor >> 0x20),local_28,
                 SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
      local_20 = (float)pCVar4[0x1a].next_actor * local_14 + local_20;
    }
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar4 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%s\t%s\t%d",pCVar4,&pCVar4[2].location.position.y,&DAT_0063cbe7,
                 pCVar4[2].health);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
      local_1c = local_1c + pCVar4[2].health;
    }
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    if (pCVar4 != (CDemonActor *)0x0) {
      dVar7 = (double)((float)(int)pCVar4[2].location.position.y * pCVar4[2].location.position.z);
      dVar1 = (double)pCVar4[2].location.position.z;
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar4,SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20),pCVar4[2].location.position.y,SUB84(dVar7,0),
                 (int)((ulonglong)dVar7 >> 0x20));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
      local_24 = (float)(int)pCVar4[2].location.position.y * pCVar4[2].location.position.z +
                 local_24;
    }
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5cc);
  dVar7 = (double)local_20;
  local_30._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
  uVar3 = local_30._4_4_;
  local_30._0_4_ = SUB84(dVar7,0);
  uVar2 = (uint)local_30;
  local_30 = dVar7;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total enemy HP\t%g",uVar2,uVar3);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp",uVar2,uVar3);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total ammo\t%d",local_1c);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t%d",local_1c);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
  dVar7 = (double)local_24;
  local_30._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
  uVar3 = local_30._4_4_;
  local_30._0_4_ = SUB84(dVar7,0);
  uVar2 = (uint)local_30;
  local_30 = dVar7;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total health items\t%g",uVar2,uVar3);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp",uVar2,uVar3);
  iVar5 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
  while( true ) {
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_5cc,"Mission difficulty stats.  Select an item for details",iVar5,0);
    if (iVar5 < 0) break;
    if (iVar5 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    if (iVar5 == 1) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
    }
    if (iVar5 == 2) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xffffef3c,"Health detail",-1,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_5cc,0,in_stack_ffffef3c,in_stack_ffffef40,(uint)in_stack_ffffef44,
             (uint)in_stack_ffffef48,in_stack_ffffef4c);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xffffef3c,0,in_stack_ffffef3c,in_stack_ffffef40,
             (uint)in_stack_ffffef44,(uint)in_stack_ffffef48,in_stack_ffffef4c);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_974,0,in_stack_ffffef3c,in_stack_ffffef40,(uint)in_stack_ffffef44,
             (uint)in_stack_ffffef48,in_stack_ffffef4c);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_d1c,0,in_stack_ffffef3c,in_stack_ffffef40,(uint)in_stack_ffffef44,
             (uint)in_stack_ffffef48,in_stack_ffffef4c);
  return;
}
