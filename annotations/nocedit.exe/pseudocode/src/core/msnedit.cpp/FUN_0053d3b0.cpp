// Name: core_msnedit.cpp_FUN_0053d3b0
// Address: 0053d3b0
// Address Range: [[0053d3b0, 0053d7a3]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d3b0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053d3b0(uint param_1) */

void core_msnedit_cpp_FUN_0053d3b0(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  int in_stack_00000004;
  uint in_stack_ffffef80;
  uint in_stack_ffffef84;
  uint in_stack_ffffef88;
  uint in_stack_ffffef8c;
  uint in_stack_ffffef90;
  uint in_stack_ffffef94;
  uint in_stack_ffffef98;
  uint in_stack_ffffef9c;
  CPickList local_d1c;
  CPickList local_974;
  CPickList local_5cc;
  char local_224 [500];
  double local_30;
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
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      local_14 = 1.0;
      if (pCVar2->create_event[0] != '\0') {
        local_18 = pCVar2->create_event;
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_18,"none");
        if ((iVar3 != 0) &&
           (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_18,"true"), iVar3 != 0)) {
          local_14 = pCVar2->create_prob;
        }
      }
      fVar1 = (float)pCVar2[0x1a].next_actor * local_14;
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * 100f));
      local_28 = (int)ROUND(dVar4);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",pCVar2,(double)(float)pCVar2[0x1a].next_actor,
                 local_28,(double)fVar1);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
      local_20 = (float)pCVar2[0x1a].next_actor * local_14 + local_20;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"%s\t%s\t%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
      local_1c = local_1c + pCVar2[2].health;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar2,
                 (double)pCVar2[2].location.position.z,pCVar2[2].location.position.y,
                 (double)((float)(int)pCVar2[2].location.position.y * pCVar2[2].location.position.z)
                );
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
      local_24 = (float)(int)pCVar2[2].location.position.y * pCVar2[2].location.position.z +
                 local_24;
    }
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5cc);
  local_30 = (double)local_20;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total enemy HP\t%g");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total ammo\t%d");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t%d");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
  local_30 = (double)local_24;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total health items\t%g");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp");
  iVar3 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
  while( true ) {
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_5cc,"Mission difficulty stats.  Select an item for details",iVar3,0);
    if (iVar3 < 0) break;
    if (iVar3 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    if (iVar3 == 1) {
      in_stack_ffffef80 = 0;
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
    }
    if (iVar3 == 2) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xffffef3c,"Health detail",-1,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_5cc,0,in_stack_ffffef80,in_stack_ffffef84,in_stack_ffffef88,in_stack_ffffef8c,
             in_stack_ffffef90);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xffffef3c,0,in_stack_ffffef84,in_stack_ffffef88,in_stack_ffffef8c,
             in_stack_ffffef90,in_stack_ffffef94);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_974,0,in_stack_ffffef88,in_stack_ffffef8c,in_stack_ffffef90,in_stack_ffffef94,
             in_stack_ffffef98);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_d1c,0,in_stack_ffffef8c,in_stack_ffffef90,in_stack_ffffef94,in_stack_ffffef98,
             in_stack_ffffef9c);
  return;
}
