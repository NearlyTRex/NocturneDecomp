// Name: core_msnedit.cpp_FUN_0053d3b0
// Address: 0053d3b0
// Address Range: [[0053d3b0, 0053d7a3]]
// Convention: unknown
// Signature: void core_msnedit_cpp_FUN_0053d3b0(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053d3b0(uint param_1) */

void core_msnedit_cpp_FUN_0053d3b0(void)

{
  double dVar1;
  CDemonActor *actor_ptr;
  float fVar2;
  uint uVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  int iVar6;
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
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    if (pCVar5 != (CDemonActor *)0x0) {
      local_14 = 1.0;
      if (pCVar5->create_event[0] != '\0') {
        local_18 = pCVar5->create_event;
        iVar6 = stricmp(local_18,"none");
        if ((iVar6 != 0) &&
           (iVar6 = stricmp(local_18,"true"), iVar6 != 0)) {
          local_14 = pCVar5->create_prob;
        }
      }
      fVar2 = (float)pCVar5[0x1a].next_actor * local_14;
      dVar7 = round((double)(local_14 * 100.0f));
      local_28 = (int)ROUND(dVar7);
      dVar7 = (double)fVar2;
      sprintf
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",pCVar5,
                 SUB84((double)(float)pCVar5[0x1a].next_actor,0),
                 (int)((ulonglong)(double)(float)pCVar5[0x1a].next_actor >> 0x20),local_28,
                 SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base,local_224);
      local_20 = (float)pCVar5[0x1a].next_actor * local_14 + local_20;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar5 != (CDemonActor *)0x0) {
      sprintf
                (local_224,"%s\t%s\t%s\t%d",pCVar5,&pCVar5[2].location.position.y,&DAT_0063cbe7,
                 pCVar5[2].health);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base,local_224);
      local_1c = local_1c + pCVar5[2].health;
    }
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    if (pCVar5 != (CDemonActor *)0x0) {
      dVar7 = (double)((float)(int)pCVar5[2].location.position.y * pCVar5[2].location.position.z);
      dVar1 = (double)pCVar5[2].location.position.z;
      sprintf
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar5,SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20),pCVar5[2].location.position.y,SUB84(dVar7,0),
                 (int)((ulonglong)dVar7 >> 0x20));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
      local_24 = (float)(int)pCVar5[2].location.position.y * pCVar5[2].location.position.z +
                 local_24;
    }
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5cc);
  dVar7 = (double)local_20;
  local_30._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
  uVar4 = local_30._4_4_;
  local_30._0_4_ = SUB84(dVar7,0);
  uVar3 = (uint)local_30;
  local_30 = dVar7;
  sprintf(local_224,"Total enemy HP\t%g",uVar3,uVar4);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  sprintf(local_224,"Total\t\t\t\t\t%g hp",uVar3,uVar4);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base,local_224);
  sprintf(local_224,"Total ammo\t%d",local_1c);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  sprintf(local_224,"Total\t\t\t%d",local_1c);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base,local_224);
  dVar7 = (double)local_24;
  local_30._4_4_ = (uint)((ulonglong)dVar7 >> 0x20);
  uVar4 = local_30._4_4_;
  local_30._0_4_ = SUB84(dVar7,0);
  uVar3 = (uint)local_30;
  local_30 = dVar7;
  sprintf(local_224,"Total health items\t%g",uVar3,uVar4);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base,local_224);
  sprintf(local_224,"Total\t\t\t\t\t%g hp",uVar3,uVar4);
  iVar6 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
  while( true ) {
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_5cc,"Mission difficulty stats.  Select an item for details",iVar6,0);
    if (iVar6 < 0) break;
    if (iVar6 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    if (iVar6 == 1) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
    }
    if (iVar6 == 2) {
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
