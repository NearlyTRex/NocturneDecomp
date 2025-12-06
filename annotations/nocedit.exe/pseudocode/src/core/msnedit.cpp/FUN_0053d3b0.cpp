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
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar3;
  int config_param1;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  float10 fVar5;
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
  CDemonActor *local_14;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_d1c);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_974);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffef3c);
  actor_ptr = *(CDemonActor **)(in_stack_00000004 + 0x548);
  local_20 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      local_14 = (CDemonActor *)0x3f800000;
      pCVar2 = pCVar1;
      uVar3 = extraout_EDX;
      if (pCVar1->create_event[0] != '\0') {
        local_18 = pCVar1->create_event;
        pCVar2 = (CDemonActor *)crt_string_c_stricmp_FUN_005fe7f0(local_18,"none");
        uVar3 = extraout_EDX_00;
        if ((pCVar2 != (CDemonActor *)0x0) &&
           (pCVar2 = (CDemonActor *)crt_string_c_stricmp_FUN_005fe7f0(local_18,"true"),
           uVar3 = extraout_EDX_01, pCVar2 != (CDemonActor *)0x0)) {
          pCVar2 = (CDemonActor *)pCVar1->create_prob;
          local_14 = pCVar2;
        }
      }
      fVar4 = (float10)(float)pCVar1[0x1a].next_actor * (float10)(float)local_14;
      fVar5 = (float10)(float)local_14 * (float10)100f;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,pCVar2));
      local_28 = (int)ROUND(fVar5);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",pCVar1,(double)(float)pCVar1[0x1a].next_actor,
                 local_28,(double)fVar4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
      local_20 = (float)pCVar1[0x1a].next_actor * (float)local_14 + local_20;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"%s\t%s\t%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
      local_1c = local_1c + pCVar1[2].health;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    if (pCVar1 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar1,
                 (double)pCVar1[2].location.position.z,pCVar1[2].location.position.y,
                 (double)((float)(int)pCVar1[2].location.position.y * pCVar1[2].location.position.z)
                );
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
      local_24 = (float)(int)pCVar1[2].location.position.y * pCVar1[2].location.position.z +
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
  config_param1 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
  while( true ) {
    config_param1 =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                   (&local_5cc,"Mission difficulty stats.  Select an item for details",config_param1,0);
    if (config_param1 < 0) break;
    if (config_param1 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    if (config_param1 == 1) {
      in_stack_ffffef80 = 0;
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
    }
    if (config_param1 == 2) {
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
