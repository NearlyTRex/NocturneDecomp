// Name: core_inv.cpp_CInventory_select_FUN_004ff800
// Address: 004ff800
// Address Range: [[004ff800, 004ffaaa]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_select_FUN_004ff800(CInventory * this_ptr, CDemonActor * actor_ptr)
// Cross-references:
//   core_hero.cpp_CallInventorySelectHealth_FUN_004f3760 (004f3760) at 004f37b0 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570 (00501570) at 005015f4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CAmmo_00630a01
//   TerminatedCString s_core_inv_cpp_00630a07
//   TerminatedCString s_CInventory_select_Catch__00630a17
//   TerminatedCString s_CWeapon_00630a35
//   TerminatedCString s_CHealthItem_00630a3d
//   TerminatedCString s_core_inv_cpp_00630a49
//   TerminatedCString s_CInventory_select_Catch__00630a59
//   TerminatedCString s_You_have_used_00630a77
//   TerminatedCString s_anon_00630a88
//   TerminatedCString s_CGasMask_00630a8a
//   TerminatedCString s_CBoxActor_00630a93
//   double DOUBLE_00630aa2 = 98
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CAmmoClassInfo.name_hash
//   undefined4 g_CBoxActorClassInfo.name_hash
//   undefined4 DAT_02d05310
//   CGame g_CGameInstance
//   undefined4 g_CGasMaskClassInfo.name_hash
//   undefined4 DAT_02db8780.name_hash
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_event.cpp_FUN_004aabe0
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_health.cpp_FUN_004f1fd0
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CLightGun *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CGasMask");
      if (iVar2 != 0) {
        pCVar5 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CGasMaskClassInfo.name_hash);
        (pCVar5->base_weapon).weapon_state = (uint)((pCVar5->base_weapon).weapon_state == 0);
        this_ptr->light_gun_ptr = pCVar5;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBoxActor");
      if (iVar2 != 0) {
        core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CBoxActorClassInfo.name_hash);
        core_event_cpp_FUN_004aabe0();
        return 0;
      }
    }
    else {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (actor_ptr,g_CHealthItemClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\inv.cpp";
        g_CurrentLineNumber = 0x5c9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::select - Catch 22");
      }
      if ((float)DOUBLE_00630aa2 < (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points) {
        return 1;
      }
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have used : ");
      pcVar6 = &stack0xffffff04;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(actor_ptr);
      iVar2 = -1;
      pcVar4 = &stack0xffffff08;
      do {
        pcVar7 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      iVar2 = -1;
      pcVar4 = &stack0xffffff0c;
      do {
        pcVar7 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,&stack0xffffff0c,5.0);
      iVar2 = core_health_cpp_FUN_004f1fd0();
      if (iVar2 < 1) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(this_ptr,actor_ptr,1);
        return 1;
      }
    }
  }
  else {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 0x5c3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::select - Catch 22");
    }
    core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
  }
  return 0;
}


// Assembly code:
// 004ff800: PUSH EBX
//   Label: core_inv.cpp_CInventory_select_FUN_004ff800
// 004ff801: PUSH ESI
// 004ff802: PUSH EDI
// 004ff803: PUSH EBP
// 004ff804: SUB ESP,0x104
// 004ff80a: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 004ff811: MOV EBX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 004ff818: PUSH 0x630a01
//   XREF to: 00630a01 (DATA)
// 004ff81d: PUSH EBX
// 004ff81e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ff823: ADD ESP,0x8
// 004ff826: TEST EAX,EAX
// 004ff828: JZ 0x004ff880
//   XREF to: 004ff880 (CONDITIONAL_JUMP)
// 004ff82a: MOV EDX,dword ptr [0x008223a4]
//   XREF to: 008223a4 (READ)
// 004ff830: PUSH EDX
// 004ff831: PUSH EBX
// 004ff832: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ff837: ADD ESP,0x8
// 004ff83a: MOV EBX,EAX
// 004ff83c: TEST EAX,EAX
// 004ff83e: JNZ 0x004ff863
//   XREF to: 004ff863 (CONDITIONAL_JUMP)
// 004ff840: MOV ECX,0x630a07
//   XREF to: 00630a07 (PARAM)
// 004ff845: MOV ESI,0x5c3
// 004ff84a: PUSH 0x630a17
//   XREF to: 00630a17 (DATA)
// 004ff84f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004ff855: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004ff85b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ff860: ADD ESP,0x4
// 004ff863: MOV EDI,dword ptr [EBX + 0x318]
//   Label: LAB_004ff863
// 004ff869: PUSH EDI
// 004ff86a: PUSH EBP
// 004ff86b: CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   XREF to: 004ffe10 (UNCONDITIONAL_CALL)
// 004ff870: ADD ESP,0x8
// 004ff873: XOR EAX,EAX
//   Label: LAB_004ff873
// 004ff875: ADD ESP,0x104
// 004ff87b: POP EBP
// 004ff87c: POP EDI
// 004ff87d: POP ESI
// 004ff87e: POP EBX
// 004ff87f: RET
// 004ff880: PUSH 0x630a35
//   Label: LAB_004ff880
//   XREF to: 00630a35 (DATA)
// 004ff885: PUSH EBX
// 004ff886: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ff88b: ADD ESP,0x8
// 004ff88e: TEST EAX,EAX
// 004ff890: JNZ 0x004ff916
//   XREF to: 004ff916 (CONDITIONAL_JUMP)
// 004ff896: PUSH 0x630a3d
//   XREF to: 00630a3d (DATA)
// 004ff89b: PUSH EBX
// 004ff89c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ff8a1: ADD ESP,0x8
// 004ff8a4: TEST EAX,EAX
// 004ff8a6: JZ 0x004ffa16
//   XREF to: 004ffa16 (CONDITIONAL_JUMP)
// 004ff8ac: MOV EAX,[0x02db87b8]
//   XREF to: 02db87b8 (READ)
// 004ff8b1: PUSH EAX
// 004ff8b2: PUSH EBX
// 004ff8b3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ff8b8: ADD ESP,0x8
// 004ff8bb: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004ff8c2: TEST EAX,EAX
// 004ff8c4: JNZ 0x004ff8e9
//   XREF to: 004ff8e9 (CONDITIONAL_JUMP)
// 004ff8c6: MOV EDX,0x630a49
//   XREF to: 00630a49 (PARAM)
// 004ff8cb: MOV ECX,0x5c9
// 004ff8d0: PUSH 0x630a59
//   XREF to: 00630a59 (DATA)
// 004ff8d5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004ff8db: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004ff8e1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ff8e6: ADD ESP,0x4
// 004ff8e9: MOV EAX,[0x02db87d0]
//   Label: LAB_004ff8e9
//   XREF to: 02db87d0 (READ)
// 004ff8ee: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004ff8f5: FLD float ptr [EAX + 0x243c]
// 004ff8fb: FCOMP double ptr [0x00630aa2]
//   XREF to: 00630aa2 (READ)
// 004ff901: FNSTSW AX
// 004ff903: SAHF
// 004ff904: JBE 0x004ff931
//   XREF to: 004ff931 (CONDITIONAL_JUMP)
// 004ff906: MOV EAX,0x1
// 004ff90b: ADD ESP,0x104
// 004ff911: POP EBP
// 004ff912: POP EDI
// 004ff913: POP ESI
// 004ff914: POP EBX
// 004ff915: RET
// 004ff916: PUSH 0x1
//   Label: LAB_004ff916
// 004ff918: PUSH 0x5
// 004ff91a: PUSH EBX
// 004ff91b: PUSH EBP
// 004ff91c: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004ff921: ADD ESP,0x10
// 004ff924: XOR EAX,EAX
// 004ff926: ADD ESP,0x104
// 004ff92c: POP EBP
// 004ff92d: POP EDI
// 004ff92e: POP ESI
// 004ff92f: POP EBX
// 004ff930: RET
// 004ff931: PUSH 0x630a77
//   Label: LAB_004ff931
//   XREF to: 00630a77 (DATA)
// 004ff936: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ff93b: ADD ESP,0x4
// 004ff93e: MOV EDI,ESP
// 004ff940: MOV ESI,EAX
// 004ff942: PUSH EDI
// 004ff943: MOV AL,byte ptr [ESI]
//   Label: LAB_004ff943
// 004ff945: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 004ff947: CMP AL,0x0
// 004ff949: JZ 0x004ff95b
//   XREF to: 004ff95b (CONDITIONAL_JUMP)
// 004ff94b: MOV AL,byte ptr [ESI + 0x1]
// 004ff94e: ADD ESI,0x2
// 004ff951: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 004ff954: ADD EDI,0x2
// 004ff957: CMP AL,0x0
// 004ff959: JNZ 0x004ff943
//   XREF to: 004ff943 (CONDITIONAL_JUMP)
// 004ff95b: POP EDI
//   Label: LAB_004ff95b
// 004ff95c: PUSH EBX
// 004ff95d: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 004ff962: ADD ESP,0x4
// 004ff965: MOV EDI,ESP
// 004ff967: MOV ESI,EAX
// 004ff969: PUSH EDI
// 004ff96a: SUB ECX,ECX
// 004ff96c: DEC ECX
// 004ff96d: MOV AL,0x0
// 004ff96f: SCASB.REPNE ES:EDI
// 004ff971: DEC EDI
// 004ff972: MOV AL,byte ptr [ESI]
//   Label: LAB_004ff972
// 004ff974: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 004ff976: CMP AL,0x0
// 004ff978: JZ 0x004ff98a
//   XREF to: 004ff98a (CONDITIONAL_JUMP)
// 004ff97a: MOV AL,byte ptr [ESI + 0x1]
// 004ff97d: ADD ESI,0x2
// 004ff980: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 004ff983: ADD EDI,0x2
// 004ff986: CMP AL,0x0
// 004ff988: JNZ 0x004ff972
//   XREF to: 004ff972 (CONDITIONAL_JUMP)
// 004ff98a: POP EDI
//   Label: LAB_004ff98a
// 004ff98b: PUSH 0x630a88
//   XREF to: 00630a88 (DATA)
// 004ff990: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ff995: ADD ESP,0x4
// 004ff998: MOV EDI,ESP
// 004ff99a: MOV ESI,EAX
// 004ff99c: PUSH EDI
// 004ff99d: SUB ECX,ECX
// 004ff99f: DEC ECX
// 004ff9a0: MOV AL,0x0
// 004ff9a2: SCASB.REPNE ES:EDI
// 004ff9a4: DEC EDI
// 004ff9a5: MOV AL,byte ptr [ESI]
//   Label: LAB_004ff9a5
// 004ff9a7: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 004ff9a9: CMP AL,0x0
// 004ff9ab: JZ 0x004ff9bd
//   XREF to: 004ff9bd (CONDITIONAL_JUMP)
// 004ff9ad: MOV AL,byte ptr [ESI + 0x1]
// 004ff9b0: ADD ESI,0x2
// 004ff9b3: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 004ff9b6: ADD EDI,0x2
// 004ff9b9: CMP AL,0x0
// 004ff9bb: JNZ 0x004ff9a5
//   XREF to: 004ff9a5 (CONDITIONAL_JUMP)
// 004ff9bd: POP EDI
//   Label: LAB_004ff9bd
// 004ff9be: MOV EAX,ESP
// 004ff9c0: PUSH 0x40a00000
// 004ff9c5: PUSH EAX
// 004ff9c6: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004ff9cc: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 004ff9cd: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ff9d2: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004ff9d7: ADD ESP,0xc
// 004ff9da: MOV EDI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004ff9e1: PUSH EDI
// 004ff9e2: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 004ff9e9: PUSH EAX
// 004ff9ea: CALL core_health.cpp_FUN_004f1fd0
//   XREF to: 004f1fd0 (UNCONDITIONAL_CALL)
// 004ff9ef: ADD ESP,0x8
// 004ff9f2: TEST EAX,EAX
// 004ff9f4: JG 0x004ff873
//   XREF to: 004ff873 (CONDITIONAL_JUMP)
// 004ff9fa: PUSH 0x1
// 004ff9fc: PUSH EBX
// 004ff9fd: PUSH EBP
// 004ff9fe: CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   XREF to: 004fea70 (UNCONDITIONAL_CALL)
// 004ffa03: MOV EAX,0x1
// 004ffa08: ADD ESP,0xc
// 004ffa0b: ADD ESP,0x104
// 004ffa11: POP EBP
// 004ffa12: POP EDI
// 004ffa13: POP ESI
// 004ffa14: POP EBX
// 004ffa15: RET
// 004ffa16: PUSH 0x630a8a
//   Label: LAB_004ffa16
//   XREF to: 00630a8a (DATA)
// 004ffa1b: PUSH EBX
// 004ffa1c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ffa21: ADD ESP,0x8
// 004ffa24: TEST EAX,EAX
// 004ffa26: JZ 0x004ffa63
//   XREF to: 004ffa63 (CONDITIONAL_JUMP)
// 004ffa28: MOV ESI,dword ptr [0x02d832a4]
//   XREF to: 02d832a4 (READ)
// 004ffa2e: PUSH ESI
// 004ffa2f: PUSH EBX
// 004ffa30: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffa35: ADD ESP,0x8
// 004ffa38: MOV EDI,dword ptr [EAX + 0x2d4]
// 004ffa3e: MOV EBX,EAX
// 004ffa40: TEST EDI,EDI
// 004ffa42: SETZ AL
// 004ffa45: AND EAX,0xff
// 004ffa4a: MOV dword ptr [EBX + 0x2d4],EAX
// 004ffa50: MOV dword ptr [EBP + 0x454],EBX
// 004ffa56: XOR EAX,EAX
// 004ffa58: ADD ESP,0x104
// 004ffa5e: POP EBP
// 004ffa5f: POP EDI
// 004ffa60: POP ESI
// 004ffa61: POP EBX
// 004ffa62: RET
// 004ffa63: PUSH 0x630a93
//   Label: LAB_004ffa63
//   XREF to: 00630a93 (DATA)
// 004ffa68: PUSH EBX
// 004ffa69: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ffa6e: ADD ESP,0x8
// 004ffa71: TEST EAX,EAX
// 004ffa73: JZ 0x004ff873
//   XREF to: 004ff873 (CONDITIONAL_JUMP)
// 004ffa79: MOV EDX,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 004ffa7f: PUSH EDX
// 004ffa80: PUSH EBX
// 004ffa81: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffa86: ADD ESP,0x8
// 004ffa89: ADD EAX,0x600
// 004ffa8e: PUSH EAX
// 004ffa8f: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004ffa95: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004ffa96: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004ffa9b: ADD ESP,0x8
// 004ffa9e: XOR EAX,EAX
// 004ffaa0: ADD ESP,0x104
// 004ffaa6: POP EBP
// 004ffaa7: POP EDI
// 004ffaa8: POP ESI
// 004ffaa9: POP EBX
// 004ffaaa: RET
