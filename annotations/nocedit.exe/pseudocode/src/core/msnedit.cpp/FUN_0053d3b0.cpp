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
  uint uVar1;
  CDemonActor *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  int in_stack_00000004;
  char **in_stack_ffffef44;
  char **ppcVar5;
  CStrList_vtable *in_stack_ffffef48;
  CStrList_vtable *pCVar6;
  uint in_stack_ffffef4c;
  uint in_stack_ffffef50;
  uint in_stack_ffffef54;
  uint in_stack_ffffef58;
  uint in_stack_ffffef5c;
  uint in_stack_ffffef60;
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
  dVar4 = (double)CONCAT44 /* combine 2-byte values */(in_stack_ffffef48,in_stack_ffffef44);
  actor_ptr = *(CDemonActor **)(in_stack_00000004 + 0x548);
  local_20 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  for (; actor_ptr != (CDemonActor *)0x0; actor_ptr = actor_ptr->next_actor) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CEnemyClassInfo.name_hash);
    pCVar6 = (CStrList_vtable *)((ulonglong)dVar4 >> 0x20);
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
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * 100f));
      local_28 = (int)ROUND(dVar4);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%i%%\t=\t%g hp",pCVar2,
                 SUB84 /* extract 2-byte value */((double)(float)pCVar2[0x1a].next_actor,0),
                 (int)((ulonglong)(double)(float)pCVar2[0x1a].next_actor >> 0x20));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
      local_20 = (float)pCVar2[0x1a].next_actor * local_14 + local_20;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"%s\t%s\t%s\t%d",pCVar2);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
      local_1c = local_1c + pCVar2[2].health;
    }
    ppcVar5 = (char **)g_CHealthItemClassInfo.name_hash;
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHealthItemClassInfo.name_hash)
    ;
    dVar4 = (double)CONCAT44 /* combine 2-byte values */(pCVar6,ppcVar5);
    if (pCVar2 != (CDemonActor *)0x0) {
      dVar4 = (double)((float)(int)pCVar2[2].location.position.y * pCVar2[2].location.position.z);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_224,"%s\t%g hp\tx\t%d uses\t=\t%g hp",pCVar2,
                 SUB84 /* extract 2-byte value */((double)pCVar2[2].location.position.z,0));
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
      local_24 = (float)(int)pCVar2[2].location.position.y * pCVar2[2].location.position.z +
                 local_24;
    }
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5cc);
  local_30 = (double)local_20;
  uVar1 = local_30._0_4_;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total enemy HP\t%g");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp",uVar1);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_d1c.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total ammo\t%d");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t%d");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_974.base_strlist,local_224);
  local_30 = (double)local_24;
  uVar1 = local_30._0_4_;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total health items\t%g",local_30._0_4_);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5cc.base_strlist,local_224);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_224,"Total\t\t\t\t\t%g hp",uVar1);
  iVar3 = 0;
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffef3c,local_224);
  while( true ) {
    iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_5cc,"Mission difficulty stats.  Select an item for details",iVar3,0);
    pCVar6 = (CStrList_vtable *)((ulonglong)dVar4 >> 0x20);
    if (iVar3 < 0) break;
    if (iVar3 == 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_d1c,"Enemy detail",-1,0);
    }
    pCVar6 = (CStrList_vtable *)((ulonglong)dVar4 >> 0x20);
    if (iVar3 == 1) {
      ppcVar5 = (char **)0x0;
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_974,"Ammo detail",-1,0);
      dVar4 = (double)CONCAT44 /* combine 2-byte values */(pCVar6,ppcVar5);
    }
    if (iVar3 == 2) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xffffef3c,"Health detail",-1,0);
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_5cc,0,(uint)SUB84 /* extract 2-byte value */(dVar4,0),(uint)pCVar6,in_stack_ffffef4c,in_stack_ffffef50,
             in_stack_ffffef54);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xffffef3c,0,(uint)pCVar6,in_stack_ffffef4c,in_stack_ffffef50,
             in_stack_ffffef54,in_stack_ffffef58);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_974,0,in_stack_ffffef4c,in_stack_ffffef50,in_stack_ffffef54,in_stack_ffffef58,
             in_stack_ffffef5c);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_d1c,0,in_stack_ffffef50,in_stack_ffffef54,in_stack_ffffef58,in_stack_ffffef5c,
             in_stack_ffffef60);
  return;
}
