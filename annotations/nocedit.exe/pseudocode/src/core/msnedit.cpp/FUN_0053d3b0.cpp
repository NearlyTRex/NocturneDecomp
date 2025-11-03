// Name: core_msnedit.cpp_FUN_0053d3b0
// Address: 0053d3b0
// Address Range: [[0053d3b0, 0053d7a3]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d3b0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053883c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063cbe7
//   TerminatedCString s_none_0063cbe8
//   TerminatedCString s_true_0063cbed
//   TerminatedCString s_s_g_hp_x_i_g_hp_0063cbf2
//   TerminatedCString s_s_s_s_d_0063cc0a
//   TerminatedCString s_s_g_hp_x_d_uses_g_hp_0063cc16
//   TerminatedCString s_Total_enemy_HP_g_0063cc31
//   TerminatedCString s_Total_g_hp_0063cc43
//   TerminatedCString s_Total_ammo_d_0063cc53
//   TerminatedCString s_Total_d_0063cc61
//   TerminatedCString s_Total_health_items_g_0063cc6c
//   TerminatedCString s_Total_g_hp_0063cc82
//   TerminatedCString s_Mission_difficulty_stats_0063cc92
//   TerminatedCString s_Enemy_detail_0063ccc8
//   TerminatedCString s_Ammo_detail_0063ccd5
//   TerminatedCString s_Health_detail_0063cce1
//   undefined4 DAT_0063ccf0
//   undefined4 g_CAmmoClassInfo.name_hash
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 DAT_02db8780.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_msnedit.cpp_FUN_0053d3b0(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053d3b0(void)

{
  CDemonActor *actor_ptr;
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
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
      fVar5 = (float10)(float)local_14 * (float10)_DAT_0063ccf0;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar3,pCVar2));
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


// Assembly code:
// 0053d3b0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053d3b0
// 0053d3b1: PUSH ESI
// 0053d3b2: PUSH EDI
// 0053d3b3: PUSH EBP
// 0053d3b4: MOV EBP,ESP
// 0053d3b6: SUB ESP,0x10b4
// 0053d3bc: LEA EAX,[EBP + 0xfffff2f4]
//   XREF to: Stack[-0xd1c] (DATA)
// 0053d3c2: PUSH EAX
// 0053d3c3: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053d3c8: ADD ESP,0x4
// 0053d3cb: LEA EAX,[EBP + 0xfffff69c]
//   XREF to: Stack[-0x974] (DATA)
// 0053d3d1: PUSH EAX
// 0053d3d2: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053d3d7: ADD ESP,0x4
// 0053d3da: LEA EAX,[EBP + 0xffffef4c]
//   XREF to: Stack[-0x10c4] (DATA)
// 0053d3e0: PUSH EAX
// 0053d3e1: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053d3e4: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053d3e9: ADD ESP,0x4
// 0053d3ec: XOR EDX,EDX
// 0053d3ee: MOV ESI,dword ptr [ESI + 0x548]
// 0053d3f4: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0053d3f7: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053d3fa: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0053d3fd: TEST ESI,ESI
// 0053d3ff: JZ 0x0053d5b1
//   XREF to: 0053d5b1 (CONDITIONAL_JUMP)
// 0053d405: MOV ECX,dword ptr [0x02cf2bf0]
//   Label: LAB_0053d405
//   XREF to: 02cf2bf0 (READ)
// 0053d40b: PUSH ECX
// 0053d40c: PUSH ESI
// 0053d40d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0053d412: MOV EBX,EAX
// 0053d414: ADD ESP,0x8
// 0053d417: MOV EDI,EAX
// 0053d419: TEST EAX,EAX
// 0053d41b: JZ 0x0053d4cb
//   XREF to: 0053d4cb (CONDITIONAL_JUMP)
// 0053d421: MOV dword ptr [EBP + -0x4],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 0053d428: CMP byte ptr [EBX + 0x78],0x0
// 0053d42c: JZ 0x0053d461
//   XREF to: 0053d461 (CONDITIONAL_JUMP)
// 0053d42e: PUSH 0x63cbe8
//   XREF to: 0063cbe8 (DATA)
// 0053d433: LEA EAX,[EBX + 0x78]
// 0053d436: PUSH EAX
// 0053d437: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053d43a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053d43f: ADD ESP,0x8
// 0053d442: TEST EAX,EAX
// 0053d444: JZ 0x0053d461
//   XREF to: 0053d461 (CONDITIONAL_JUMP)
// 0053d446: PUSH 0x63cbed
//   XREF to: 0063cbed (DATA)
// 0053d44b: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0053d44e: PUSH ECX
// 0053d44f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053d454: ADD ESP,0x8
// 0053d457: TEST EAX,EAX
// 0053d459: JZ 0x0053d461
//   XREF to: 0053d461 (CONDITIONAL_JUMP)
// 0053d45b: MOV EAX,dword ptr [EBX + 0x74]
// 0053d45e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053d461: FLD float ptr [EDI + 0x243c]
//   Label: LAB_0053d461
// 0053d467: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053d46a: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053d46d: FMUL float ptr [0x0063ccf0]
//   XREF to: 0063ccf0 (READ)
// 0053d473: SUB ESP,0x8
// 0053d476: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0053d47b: FISTP dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 0053d47e: MOV EBX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0053d481: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10cc] (DATA)
// 0053d484: PUSH EBX
// 0053d485: SUB ESP,0x8
// 0053d488: FLD float ptr [EDI + 0x243c]
// 0053d48e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10d8] (DATA)
// 0053d491: PUSH EDI
// 0053d492: PUSH 0x63cbf2
//   XREF to: 0063cbf2 (DATA)
// 0053d497: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d49d: PUSH EAX
// 0053d49e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d4a3: ADD ESP,0x20
// 0053d4a6: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d4ac: PUSH EAX
// 0053d4ad: LEA EAX,[EBP + 0xfffff2f4]
//   XREF to: Stack[-0xd1c] (DATA)
// 0053d4b3: PUSH EAX
// 0053d4b4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d4b9: FLD float ptr [EDI + 0x243c]
// 0053d4bf: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053d4c2: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0053d4c5: ADD ESP,0x8
// 0053d4c8: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0053d4cb: MOV EDI,dword ptr [0x008223a4]
//   Label: LAB_0053d4cb
//   XREF to: 008223a4 (READ)
// 0053d4d1: PUSH EDI
// 0053d4d2: PUSH ESI
// 0053d4d3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0053d4d8: MOV EBX,EAX
// 0053d4da: ADD ESP,0x8
// 0053d4dd: TEST EAX,EAX
// 0053d4df: JZ 0x0053d52b
//   XREF to: 0053d52b (CONDITIONAL_JUMP)
// 0053d4e1: MOV EAX,dword ptr [EAX + 0x314]
// 0053d4e7: PUSH EAX
// 0053d4e8: PUSH 0x63cbe7
//   XREF to: 0063cbe7 (DATA)
// 0053d4ed: LEA EAX,[EBX + 0x2d4]
// 0053d4f3: PUSH EAX
// 0053d4f4: PUSH EBX
// 0053d4f5: PUSH 0x63cc0a
//   XREF to: 0063cc0a (DATA)
// 0053d4fa: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d500: PUSH EAX
// 0053d501: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d506: ADD ESP,0x18
// 0053d509: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d50f: PUSH EAX
// 0053d510: LEA EAX,[EBP + 0xfffff69c]
//   XREF to: Stack[-0x974] (DATA)
// 0053d516: PUSH EAX
// 0053d517: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d51c: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053d51f: ADD EDX,dword ptr [EBX + 0x314]
// 0053d525: ADD ESP,0x8
// 0053d528: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053d52b: MOV ECX,dword ptr [0x02db87b8]
//   Label: LAB_0053d52b
//   XREF to: 02db87b8 (READ)
// 0053d531: PUSH ECX
// 0053d532: PUSH ESI
// 0053d533: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0053d538: MOV EBX,EAX
// 0053d53a: ADD ESP,0x8
// 0053d53d: TEST EAX,EAX
// 0053d53f: JZ 0x0053d5a3
//   XREF to: 0053d5a3 (CONDITIONAL_JUMP)
// 0053d541: FILD dword ptr [EAX + 0x2d4]
// 0053d547: FMUL float ptr [EAX + 0x2d8]
// 0053d54d: SUB ESP,0x8
// 0053d550: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10cc] (DATA)
// 0053d553: MOV EDI,dword ptr [EAX + 0x2d4]
// 0053d559: PUSH EDI
// 0053d55a: SUB ESP,0x8
// 0053d55d: FLD float ptr [EAX + 0x2d8]
// 0053d563: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10d8] (DATA)
// 0053d566: PUSH EAX
// 0053d567: PUSH 0x63cc16
//   XREF to: 0063cc16 (DATA)
// 0053d56c: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d572: PUSH EAX
// 0053d573: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d578: ADD ESP,0x20
// 0053d57b: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d581: PUSH EAX
// 0053d582: LEA EAX,[EBP + 0xffffef4c]
//   XREF to: Stack[-0x10c4] (DATA)
// 0053d588: PUSH EAX
// 0053d589: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d58e: FILD dword ptr [EBX + 0x2d4]
// 0053d594: FMUL float ptr [EBX + 0x2d8]
// 0053d59a: FADD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0053d59d: ADD ESP,0x8
// 0053d5a0: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0053d5a3: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_0053d5a3
// 0053d5a9: TEST ESI,ESI
// 0053d5ab: JNZ 0x0053d405
//   XREF to: 0053d405 (CONDITIONAL_JUMP)
// 0053d5b1: LEA EAX,[EBP + 0xfffffa44]
//   Label: LAB_0053d5b1
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d5b7: PUSH EAX
// 0053d5b8: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053d5bd: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0053d5c0: ADD ESP,0x4
// 0053d5c3: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0053d5c6: MOV ESI,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0053d5c9: PUSH ESI
// 0053d5ca: MOV EDI,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0053d5cd: PUSH EDI
// 0053d5ce: PUSH 0x63cc31
//   XREF to: 0063cc31 (DATA)
// 0053d5d3: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d5d9: PUSH EAX
// 0053d5da: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d5df: ADD ESP,0x10
// 0053d5e2: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d5e8: PUSH EAX
// 0053d5e9: LEA EAX,[EBP + 0xfffffa44]
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d5ef: PUSH EAX
// 0053d5f0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d5f5: ADD ESP,0x8
// 0053d5f8: PUSH ESI
// 0053d5f9: PUSH EDI
// 0053d5fa: PUSH 0x63cc43
//   XREF to: 0063cc43 (DATA)
// 0053d5ff: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d605: PUSH EAX
// 0053d606: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d60b: ADD ESP,0x10
// 0053d60e: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d614: PUSH EAX
// 0053d615: LEA EAX,[EBP + 0xfffff2f4]
//   XREF to: Stack[-0xd1c] (DATA)
// 0053d61b: PUSH EAX
// 0053d61c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d621: ADD ESP,0x8
// 0053d624: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053d627: PUSH ECX
// 0053d628: PUSH 0x63cc53
//   XREF to: 0063cc53 (DATA)
// 0053d62d: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d633: PUSH EAX
// 0053d634: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d639: ADD ESP,0xc
// 0053d63c: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d642: PUSH EAX
// 0053d643: LEA EAX,[EBP + 0xfffffa44]
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d649: PUSH EAX
// 0053d64a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d64f: ADD ESP,0x8
// 0053d652: MOV EBX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0053d655: PUSH EBX
// 0053d656: PUSH 0x63cc61
//   XREF to: 0063cc61 (DATA)
// 0053d65b: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d661: PUSH EAX
// 0053d662: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d667: ADD ESP,0xc
// 0053d66a: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d670: PUSH EAX
// 0053d671: LEA EAX,[EBP + 0xfffff69c]
//   XREF to: Stack[-0x974] (DATA)
// 0053d677: PUSH EAX
// 0053d678: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d67d: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0053d680: ADD ESP,0x8
// 0053d683: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0053d686: MOV ESI,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0053d689: PUSH ESI
// 0053d68a: MOV EDI,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0053d68d: PUSH EDI
// 0053d68e: PUSH 0x63cc6c
//   XREF to: 0063cc6c (DATA)
// 0053d693: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d699: PUSH EAX
// 0053d69a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d69f: ADD ESP,0x10
// 0053d6a2: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d6a8: PUSH EAX
// 0053d6a9: LEA EAX,[EBP + 0xfffffa44]
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d6af: PUSH EAX
// 0053d6b0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d6b5: ADD ESP,0x8
// 0053d6b8: PUSH ESI
// 0053d6b9: PUSH EDI
// 0053d6ba: PUSH 0x63cc82
//   XREF to: 0063cc82 (DATA)
// 0053d6bf: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d6c5: PUSH EAX
// 0053d6c6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d6cb: ADD ESP,0x10
// 0053d6ce: LEA EAX,[EBP + 0xfffffdec]
//   XREF to: Stack[-0x224] (DATA)
// 0053d6d4: PUSH EAX
// 0053d6d5: LEA EAX,[EBP + 0xffffef4c]
//   XREF to: Stack[-0x10c4] (DATA)
// 0053d6db: PUSH EAX
// 0053d6dc: XOR EBX,EBX
// 0053d6de: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d6e3: ADD ESP,0x8
// 0053d6e6: MOV EDI,0xffffffff
// 0053d6eb: XOR ESI,ESI
// 0053d6ed: PUSH ESI
//   Label: LAB_0053d6ed
// 0053d6ee: PUSH EBX
// 0053d6ef: PUSH 0x63cc92
//   XREF to: 0063cc92 (DATA)
// 0053d6f4: LEA EAX,[EBP + 0xfffffa44]
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d6fa: PUSH EAX
// 0053d6fb: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d700: ADD ESP,0x10
// 0053d703: MOV EBX,EAX
// 0053d705: TEST EAX,EAX
// 0053d707: JL 0x0053d759
//   XREF to: 0053d759 (CONDITIONAL_JUMP)
// 0053d709: JNZ 0x0053d721
//   XREF to: 0053d721 (CONDITIONAL_JUMP)
// 0053d70b: PUSH ESI
// 0053d70c: PUSH EDI
// 0053d70d: PUSH 0x63ccc8
//   XREF to: 0063ccc8 (DATA)
// 0053d712: LEA EAX,[EBP + 0xfffff2f4]
//   XREF to: Stack[-0xd1c] (DATA)
// 0053d718: PUSH EAX
// 0053d719: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d71e: ADD ESP,0x10
// 0053d721: CMP EBX,0x1
//   Label: LAB_0053d721
// 0053d724: JNZ 0x0053d73c
//   XREF to: 0053d73c (CONDITIONAL_JUMP)
// 0053d726: PUSH ESI
// 0053d727: PUSH EDI
// 0053d728: PUSH 0x63ccd5
//   XREF to: 0063ccd5 (DATA)
// 0053d72d: LEA EAX,[EBP + 0xfffff69c]
//   XREF to: Stack[-0x974] (DATA)
// 0053d733: PUSH EAX
// 0053d734: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d739: ADD ESP,0x10
// 0053d73c: CMP EBX,0x2
//   Label: LAB_0053d73c
// 0053d73f: JNZ 0x0053d6ed
//   XREF to: 0053d6ed (CONDITIONAL_JUMP)
// 0053d741: PUSH ESI
// 0053d742: PUSH EDI
// 0053d743: PUSH 0x63cce1
//   XREF to: 0063cce1 (DATA)
// 0053d748: LEA EAX,[EBP + 0xffffef4c]
//   XREF to: Stack[-0x10c4] (DATA)
// 0053d74e: PUSH EAX
// 0053d74f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d754: ADD ESP,0x10
// 0053d757: JMP 0x0053d6ed
//   XREF to: 0053d6ed (UNCONDITIONAL_JUMP)
// 0053d759: PUSH 0x0
//   Label: LAB_0053d759
// 0053d75b: LEA EAX,[EBP + 0xfffffa44]
//   XREF to: Stack[-0x5cc] (DATA)
// 0053d761: PUSH EAX
// 0053d762: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d767: ADD ESP,0x8
// 0053d76a: PUSH 0x0
// 0053d76c: LEA EAX,[EBP + 0xffffef4c]
//   XREF to: Stack[-0x10c4] (DATA)
// 0053d772: PUSH EAX
// 0053d773: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d778: ADD ESP,0x8
// 0053d77b: PUSH 0x0
// 0053d77d: LEA EAX,[EBP + 0xfffff69c]
//   XREF to: Stack[-0x974] (DATA)
// 0053d783: PUSH EAX
// 0053d784: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d789: ADD ESP,0x8
// 0053d78c: PUSH 0x0
// 0053d78e: LEA EAX,[EBP + 0xfffff2f4]
//   XREF to: Stack[-0xd1c] (DATA)
// 0053d794: PUSH EAX
// 0053d795: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053d79a: ADD ESP,0x8
// 0053d79d: MOV ESP,EBP
// 0053d79f: POP EBP
// 0053d7a0: POP EDI
// 0053d7a1: POP ESI
// 0053d7a2: POP EBX
// 0053d7a3: RET
