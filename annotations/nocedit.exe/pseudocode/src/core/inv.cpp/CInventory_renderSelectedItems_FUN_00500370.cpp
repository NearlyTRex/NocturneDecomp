// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 00500688]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c962 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00630b0a = 65535
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   int g_InventoryWidth = 0xd0
//   int g_InventoryHeight = 0x60
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   int g_InventoryScreenHeight
// Function calls:
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
//   core_inv.cpp_drawItemIconBackground_FUN_005001e0
//   core_inv.cpp_drawWeaponIconBackground_FUN_00500050
//   core_inv.cpp_loadInventory_FUN_004fd220
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int alpha;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  float10 fVar7;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex])) {
    if (g_WindowHeight != g_InventoryScreenHeight) {
      core_inv_cpp_loadInventory_FUN_004fd220();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar2 = 8;
      iVar6 = 0x50;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar6 = 0x28;
        iVar2 = 4;
      }
      fVar1 = this_ptr->weapon_highlight_timer;
      local_2c = (g_WindowHeight - iVar6) - iVar2;
      local_18 = 0xffff;
      if (1.0 >= fVar1 && (fVar1 == 1.0) == 0) {
        fVar7 = (float10)this_ptr->weapon_highlight_timer * (float10)FLOAT_00630b0a;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(local_2c,(uint)(ushort)((ushort)(1.0 < fVar1) << 8 |
                                                            (ushort)NAN(fVar1) << 10 |
                                                           (ushort)(fVar1 == 1.0) << 0xe)));
        local_18 = (int)ROUND(fVar7);
        iVar5 = extraout_ECX;
      }
      iVar2 = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,&this_ptr->selected_weapon->base_actor,iVar2,local_30,iVar6,0x3fc90fdb,
                 local_1c);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar2 = 0x10;
      iVar6 = 0x40;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar6 = 0x20;
        iVar2 = 8;
      }
      iVar3 = g_WindowWidth - iVar6;
      fVar1 = this_ptr->item_highlight_timer;
      local_14 = 0xffff;
      if (1.0 >= fVar1 && (fVar1 == 1.0) == 0) {
        fVar7 = (float10)this_ptr->item_highlight_timer * (float10)FLOAT_00630b0a;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(0xffff,CONCAT22((short)((uint)((g_WindowHeight - iVar6) - iVar2)
                                                           >> 0x10),
                                                    (ushort)(1.0 < fVar1) << 8 |
                                                    (ushort)NAN(fVar1) << 10 |
                                                    (ushort)(fVar1 == 1.0) << 0xe)));
        local_14 = (int)ROUND(fVar7);
        iVar5 = extraout_ECX_00;
      }
      alpha = (local_14 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,this_ptr->selected_item,local_2c,iVar3 - iVar2,iVar6,0,3);
    }
  }
  return;
}


// Assembly code:
// 00500370: PUSH EBX
//   Label: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// 00500371: PUSH ESI
// 00500372: PUSH EDI
// 00500373: PUSH EBP
// 00500374: SUB ESP,0x2c
// 00500377: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0050037b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 00500380: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 00500387: JNZ 0x005005e9
//   XREF to: 005005e9 (CONDITIONAL_JUMP)
// 0050038d: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00500393: MOV EAX,dword ptr [EBX + 0x4]
// 00500396: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0050039d: JNZ 0x005005e9
//   XREF to: 005005e9 (CONDITIONAL_JUMP)
// 005003a3: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005003a9: CMP ESI,dword ptr [0x02dcd790]
//   XREF to: 02dcd790 (READ)
// 005003af: JNZ 0x005005f1
//   XREF to: 005005f1 (CONDITIONAL_JUMP)
// 005003b5: CMP dword ptr [EBX + 0x330],0x0
//   Label: LAB_005003b5
// 005003bc: JZ 0x005004d1
//   XREF to: 005004d1 (CONDITIONAL_JUMP)
// 005003c2: FLD float ptr [EBX + 0x338]
// 005003c8: FLDZ
// 005003ca: FCOMPP
// 005003cc: FNSTSW AX
// 005003ce: SAHF
// 005003cf: JNC 0x005004d1
//   XREF to: 005004d1 (CONDITIONAL_JUMP)
// 005003d5: MOV EAX,0x8
// 005003da: MOV EDI,0x50
// 005003df: MOV ESI,dword ptr [0x0067ce40]
//   XREF to: 0067ce40 (READ)
// 005003e5: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005003eb: MOV ECX,dword ptr [0x0067ce44]
//   XREF to: 0067ce44 (READ)
// 005003f1: CMP EBP,0x180
// 005003f7: JGE 0x00500406
//   XREF to: 00500406 (CONDITIONAL_JUMP)
// 005003f9: CMP dword ptr [EBX + 0x44c],0x0
// 00500400: JZ 0x005005fb
//   XREF to: 005005fb (CONDITIONAL_JUMP)
// 00500406: MOV EDX,dword ptr [0x00679394]
//   Label: LAB_00500406
//   XREF to: 00679394 (READ)
// 0050040c: SUB EDX,EDI
// 0050040e: SUB EDX,EAX
// 00500410: FLD float ptr [EBX + 0x338]
// 00500416: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x3c] (DATA)
// 00500419: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0050041f: MOV EBP,0xffff
// 00500424: SUB EDX,EDI
// 00500426: FLD1
// 00500428: SUB EDX,EAX
// 0050042a: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0050042e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00500432: FCOMPP
// 00500434: FNSTSW AX
// 00500436: SAHF
// 00500437: JBE 0x0050044e
//   XREF to: 0050044e (CONDITIONAL_JUMP)
// 00500439: FLD float ptr [EBX + 0x338]
// 0050043f: FMUL float ptr [0x00630b0a]
//   XREF to: 00630b0a (READ)
// 00500445: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050044a: FISTP dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 0050044e: MOV EAX,[0x00679394]
//   Label: LAB_0050044e
//   XREF to: 00679394 (READ)
// 00500453: DEC EAX
// 00500454: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00500458: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0050045d: DEC EAX
// 0050045e: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 00500462: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00500466: MOV EAX,0x3
// 0050046b: ADD EDX,EDX
// 0050046d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00500471: MOV EAX,EDX
// 00500473: SAR EDX,0x1f
// 00500476: IDIV dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050047a: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500480: MOV EDX,dword ptr [EBX + 0x44c]
// 00500486: SUB EBP,ECX
// 00500488: TEST EDX,EDX
// 0050048a: JZ 0x00500624
//   XREF to: 00500624 (CONDITIONAL_JUMP)
// 00500490: PUSH EAX
// 00500491: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00500495: PUSH EDX
// 00500496: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 0050049a: PUSH ECX
// 0050049b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005004a0: PUSH EBP
// 005004a1: SUB EAX,ESI
// 005004a3: PUSH EAX
// 005004a4: CALL core_inv.cpp_drawItemIconBackground_FUN_005001e0
//   XREF to: 005001e0 (UNCONDITIONAL_CALL)
// 005004a9: ADD ESP,0x14
//   Label: LAB_005004a9
// 005004ac: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005004b0: PUSH ESI
// 005004b1: PUSH 0x3fc90fdb
// 005004b6: PUSH EDI
// 005004b7: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005004bb: PUSH EDI
// 005004bc: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (READ)
// 005004c0: PUSH EBP
// 005004c1: MOV EAX,dword ptr [EBX + 0x330]
// 005004c7: PUSH EAX
// 005004c8: PUSH EBX
// 005004c9: CALL core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
//   XREF to: 004fee00 (UNCONDITIONAL_CALL)
// 005004ce: ADD ESP,0x1c
// 005004d1: CMP dword ptr [EBX + 0x334],0x0
//   Label: LAB_005004d1
// 005004d8: JZ 0x005005e9
//   XREF to: 005005e9 (CONDITIONAL_JUMP)
// 005004de: FLD float ptr [EBX + 0x33c]
// 005004e4: FLDZ
// 005004e6: FCOMPP
// 005004e8: FNSTSW AX
// 005004ea: SAHF
// 005004eb: JNC 0x005005e9
//   XREF to: 005005e9 (CONDITIONAL_JUMP)
// 005004f1: MOV EDX,0x10
// 005004f6: MOV EDI,0x40
// 005004fb: MOV ESI,dword ptr [0x0067ce40]
//   XREF to: 0067ce40 (READ)
// 00500501: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500507: MOV ECX,dword ptr [0x0067ce44]
//   XREF to: 0067ce44 (READ)
// 0050050d: CMP EBP,0x180
// 00500513: JGE 0x00500522
//   XREF to: 00500522 (CONDITIONAL_JUMP)
// 00500515: CMP dword ptr [EBX + 0x44c],0x0
// 0050051c: JZ 0x00500642
//   XREF to: 00500642 (CONDITIONAL_JUMP)
// 00500522: MOV EAX,[0x00679394]
//   Label: LAB_00500522
//   XREF to: 00679394 (READ)
// 00500527: SUB EAX,EDI
// 00500529: SUB EAX,EDX
// 0050052b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0050052f: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00500534: FLD float ptr [EBX + 0x33c]
// 0050053a: SUB EAX,EDI
// 0050053c: FLD1
// 0050053e: SUB EAX,EDX
// 00500540: MOV EDX,0xffff
// 00500545: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00500549: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0050054d: FCOMPP
// 0050054f: FNSTSW AX
// 00500551: SAHF
// 00500552: JBE 0x00500569
//   XREF to: 00500569 (CONDITIONAL_JUMP)
// 00500554: FLD float ptr [EBX + 0x33c]
// 0050055a: FMUL float ptr [0x00630b0a]
//   XREF to: 00630b0a (READ)
// 00500560: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00500565: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (WRITE)
// 00500569: MOV EAX,[0x00679394]
//   Label: LAB_00500569
//   XREF to: 00679394 (READ)
// 0050056e: DEC EAX
// 0050056f: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00500573: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00500578: DEC EAX
// 00500579: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0050057d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00500581: MOV EAX,0x3
// 00500586: ADD EDX,EDX
// 00500588: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050058c: MOV EAX,EDX
// 0050058e: SAR EDX,0x1f
// 00500591: IDIV dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 00500595: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0050059b: MOV EDX,dword ptr [EBX + 0x44c]
// 005005a1: SUB EBP,ECX
// 005005a3: TEST EDX,EDX
// 005005a5: JZ 0x0050066b
//   XREF to: 0050066b (CONDITIONAL_JUMP)
// 005005ab: PUSH EAX
// 005005ac: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 005005b0: PUSH EDX
// 005005b1: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (READ)
// 005005b5: PUSH ECX
// 005005b6: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005005bb: PUSH EBP
// 005005bc: SUB EAX,ESI
// 005005be: PUSH EAX
// 005005bf: CALL core_inv.cpp_drawItemIconBackground_FUN_005001e0
//   XREF to: 005001e0 (UNCONDITIONAL_CALL)
// 005005c4: ADD ESP,0x14
//   Label: LAB_005005c4
// 005005c7: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 005005cb: PUSH ESI
// 005005cc: PUSH 0x0
// 005005ce: PUSH EDI
// 005005cf: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 005005d3: PUSH EDI
// 005005d4: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 005005d8: PUSH EBP
// 005005d9: MOV EAX,dword ptr [EBX + 0x334]
// 005005df: PUSH EAX
// 005005e0: PUSH EBX
// 005005e1: CALL core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
//   XREF to: 004fee00 (UNCONDITIONAL_CALL)
// 005005e6: ADD ESP,0x1c
// 005005e9: ADD ESP,0x2c
//   Label: LAB_005005e9
// 005005ec: POP EBP
// 005005ed: POP EDI
// 005005ee: POP ESI
// 005005ef: POP EBX
// 005005f0: RET
// 005005f1: CALL core_inv.cpp_loadInventory_FUN_004fd220
//   Label: LAB_005005f1
//   XREF to: 004fd220 (UNCONDITIONAL_CALL)
// 005005f6: JMP 0x005003b5
//   XREF to: 005003b5 (UNCONDITIONAL_JUMP)
// 005005fb: MOV EDX,ESI
//   Label: LAB_005005fb
// 005005fd: MOV EAX,ESI
// 005005ff: SAR EDX,0x1f
// 00500602: SUB EAX,EDX
// 00500604: SAR EAX,0x1
// 00500606: MOV ESI,EAX
// 00500608: MOV EDX,ECX
// 0050060a: MOV EAX,ECX
// 0050060c: SAR EDX,0x1f
// 0050060f: SUB EAX,EDX
// 00500611: SAR EAX,0x1
// 00500613: MOV EDI,0x28
// 00500618: MOV ECX,EAX
// 0050061a: MOV EAX,0x4
// 0050061f: JMP 0x00500406
//   XREF to: 00500406 (UNCONDITIONAL_JUMP)
// 00500624: PUSH EAX
//   Label: LAB_00500624
// 00500625: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00500629: PUSH ESI
// 0050062a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 0050062e: PUSH EAX
// 0050062f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00500634: PUSH EBP
// 00500635: SUB EAX,ECX
// 00500637: PUSH EAX
// 00500638: CALL core_inv.cpp_drawWeaponIconBackground_FUN_00500050
//   XREF to: 00500050 (UNCONDITIONAL_CALL)
// 0050063d: JMP 0x005004a9
//   XREF to: 005004a9 (UNCONDITIONAL_JUMP)
// 00500642: MOV EDX,ESI
//   Label: LAB_00500642
// 00500644: MOV EAX,ESI
// 00500646: SAR EDX,0x1f
// 00500649: SUB EAX,EDX
// 0050064b: SAR EAX,0x1
// 0050064d: MOV ESI,EAX
// 0050064f: MOV EDX,ECX
// 00500651: MOV EAX,ECX
// 00500653: SAR EDX,0x1f
// 00500656: SUB EAX,EDX
// 00500658: SAR EAX,0x1
// 0050065a: MOV EDI,0x20
// 0050065f: MOV EDX,0x8
// 00500664: MOV ECX,EAX
// 00500666: JMP 0x00500522
//   XREF to: 00500522 (UNCONDITIONAL_JUMP)
// 0050066b: PUSH EAX
//   Label: LAB_0050066b
// 0050066c: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00500670: PUSH ESI
// 00500671: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x24] (READ)
// 00500675: PUSH EAX
// 00500676: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0050067b: PUSH EBP
// 0050067c: SUB EAX,ECX
// 0050067e: PUSH EAX
// 0050067f: CALL core_inv.cpp_drawWeaponIconBackground_FUN_00500050
//   XREF to: 00500050 (UNCONDITIONAL_CALL)
// 00500684: JMP 0x005005c4
//   XREF to: 005005c4 (UNCONDITIONAL_JUMP)
