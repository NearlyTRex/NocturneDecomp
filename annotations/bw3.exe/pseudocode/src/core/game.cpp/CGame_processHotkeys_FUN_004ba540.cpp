// Name: core_game.cpp_CGame_processHotkeys_FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004baf4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004ba540(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CScript *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int iVar6;
  CDemonActor *pCVar7;
  _FILE *p_Var8;
  char *pcVar9;
  char *pcVar10;
  uint clear_enabled;
  float fVar11;
  float fStack_220;
  char acStack_21c [256];
  char acStack_11c [256];
  float fStack_1c;
  uint uStack_18;
  
  if (_DAT_01d22200 != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0xe8 != 0) goto LAB_004ba56c;
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"GoToMap");
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if ((iVar5 != 0) &&
     (pCVar7 = core_inv_cpp_FUN_004db990
                         ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),
                          "voodoo_doll"), pCVar7 != (CDemonActor *)0x0)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"UseSPS");
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  pCVar2 = g_CFieldNotesPtr;
  if (iVar5 != 0) {
    if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
      *(uint *)&g_CFieldNotesPtr->field_0x40 = 1;
      if (*(int *)&this_ptr->field_0x24c != 0) {
        *(uint *)&pCVar2->field_0x40 = 0;
      }
      if (DAT_007dffb4 == 0) goto LAB_004baa7c;
    }
    *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  }
LAB_004baa7c:
  if (*(char *)g_CFieldNotesPtr == '\0') {
    *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  }
  if ((((*(int *)&this_ptr->field_0x234 != 0) &&
       (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = 1 - *(int *)&this_ptr->field_0x324, *(int *)&this_ptr->field_0x324 = iVar5, iVar5 != 0
     )) {
    core_setdir_cpp_FUN_0053f940(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc);
    *(uint *)&g_CScriptPtr->field_0x10 = 0;
  }
  if ((*(int *)&this_ptr->field_0x324 == 0) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
    pCVar4 = g_CDemonSetPtr;
    if (iVar5 == 0) {
      iVar5 = *(int *)&this_ptr->field_0x320 + 1;
      *(int *)&this_ptr->field_0x320 = iVar5;
      if (*(int *)pCVar4 <= iVar5) {
        *(uint *)&this_ptr->field_0x320 = 0;
      }
    }
    else {
      iVar5 = *(int *)&this_ptr->field_0x320 + -1;
      *(int *)&this_ptr->field_0x320 = iVar5;
      if (iVar5 < 0) {
        *(int *)&this_ptr->field_0x320 = *(int *)g_CDemonSetPtr + -1;
      }
    }
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,*(int *)&this_ptr->field_0x320)
    ;
  }
LAB_004ba56c:
  if (((*(int *)&this_ptr->field_0x234 != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    iVar5 = 1 - *(int *)&this_ptr->field_0x220;
    *(int *)&this_ptr->field_0x220 = iVar5;
    if (iVar5 == 0) {
      core_sound_cpp_FUN_0055fd30(0x02CF5680);
    }
    else {
      _DAT_01c5fae4 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
    }
  }
  if ((((*(int *)&this_ptr->field_0x234 != 0) ||
       (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    *(int *)&this_ptr->field_0x208 = 1 - *(int *)&this_ptr->field_0x208;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    _DAT_01d8e40c = (uint)(_DAT_01d8e40c == 0);
  }
  if (((*(int *)&this_ptr->field_0x200 == 0) &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) ||
     ((iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0 &&
      (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)))) {
    iVar5 = sound_sndmain_cpp_FUN_00556750();
    if (iVar5 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0055fee0(0x02CF5680);
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(1);
    }
    else {
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(0);
      core_sound_cpp_FUN_0055fd30(0x02CF5680);
    }
  }
  if ((((*(int *)&this_ptr->field_0x234 != 0) &&
       (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
      (iVar6 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 = DAT_005fba1c, iVar6 != 0)) &&
     (0x1df < DAT_005fba1c)) {
    iVar6 = 1 - *(int *)&this_ptr->field_0x328;
    *(int *)&this_ptr->field_0x328 = iVar6;
    if (iVar6 != 0) {
      iVar5 = 0xf0;
    }
    clear_enabled = (uint)(iVar6 != 0);
    core_set_cpp_FUN_005353b0(g_CDemonSetPtr,clear_enabled,clear_enabled,iVar5);
  }
  if (((*(int *)&this_ptr->field_0x234 != 0) && (_DAT_01d22c40 == 0)) &&
     ((iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0 &&
      ((iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0 && (0x1df < DAT_005fba1c)
       ))))) {
    *(uint *)&this_ptr->field_0x20c = (uint)(*(int *)&this_ptr->field_0x20c == 0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if (((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) &&
     (*(int *)&this_ptr->field_0x24c == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (*(int *)&this_ptr->field_0x24c == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if (iVar5 != 0) {
    core_game_cpp_FUN_004bfa40(this_ptr);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
  if ((iVar5 != 0) && (*(int *)&this_ptr->field_0x24c == 0)) {
    core_game_cpp_FUN_004bda10(this_ptr,"quicksavedgame.sav");
    fVar11 = 2.0;
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar9,fVar11);
  }
  if ((*(int *)&this_ptr->field_0x200 == 0) &&
     (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) {
    p_Var8 = engine_dosio_cpp_FUN_004659c0
                       (&DAT_005c28a2,"quicksavedgame.sav",&DAT_005c288c);
    if (p_Var8 == (_FILE *)0x0) {
      fVar11 = 2.0;
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,pcVar9,fVar11);
    }
    else {
      _fclose();
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Restore quick saved game?");
      iVar5 = shape_edittool_cpp_FUN_0047d8c0(g_CEditorToolsPtr,pcVar9);
      if (iVar5 != 0) {
        pcVar10 = "quicksavedgame.sav";
        pcVar9 = &this_ptr->field_0xa7c;
        *(uint *)&this_ptr->field_0xa78 = 1;
        do {
          cVar1 = *pcVar10;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    *(uint *)&this_ptr->field_0xb7c = (uint)(*(int *)&this_ptr->field_0xb7c == 0);
  }
  if (((*(int *)&this_ptr->field_0x234 != 0) ||
      (pcVar9 = getenv("SPOOKHOUSE"), pcVar9 != (char *)0x0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    *(uint *)&this_ptr->field_0x330 = (uint)(*(int *)&this_ptr->field_0x330 == 0);
  }
  if (*(int *)&this_ptr->field_0x220 == 0) {
    if ((*(int *)&g_CScriptPtr->field_0x1c != 2) &&
       (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), pCVar4 = g_CDemonSetPtr, iVar5 != 0)
       ) {
      *(uint *)&this_ptr->field_0x328 = 1;
      core_set_cpp_FUN_005353b0(pCVar4,0,0,0xf0);
      pCVar3 = g_CScriptPtr;
      *(uint *)&this_ptr->field_0x200 = 1;
      if (*(int *)&pCVar3->field_0x1c == 1) {
        *(uint *)&pCVar3->field_0x1c = 0;
      }
      else {
        *(uint *)&pCVar3->field_0x1c = 1;
      }
    }
    if (*(int *)&this_ptr->field_0x200 != 0) {
      if ((*(int *)&g_CScriptPtr->field_0x1c == 2) &&
         (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
        *(uint *)&g_CScriptPtr->field_0x1c = 1;
      }
      iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
      if (iVar5 != 0) {
        *(uint *)&g_CScriptPtr->field_0x1c = 0;
      }
      iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
      if (iVar5 != 0) {
        core_script_cpp_FUN_00530500();
      }
    }
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    iVar5 = *(int *)&this_ptr->field_0x248 + -0x400;
    *(int *)&this_ptr->field_0x248 = iVar5;
    if (iVar5 < 0x8000) {
      *(uint *)&this_ptr->field_0x248 = 0x8000;
    }
    FUN_005a28c0
              (acStack_11c,"Gamma : %f",(double)*(int *)&this_ptr->field_0x248 * _DAT_005c2918
              );
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,acStack_11c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x248);
  }
  iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78);
  if (iVar5 != 0) {
    iVar5 = *(int *)&this_ptr->field_0x248 + 0x400;
    *(int *)&this_ptr->field_0x248 = iVar5;
    if (0x10000 < iVar5) {
      *(uint *)&this_ptr->field_0x248 = 0x10000;
    }
    FUN_005a28c0
              (acStack_21c,"Gamma : %f",(double)*(int *)&this_ptr->field_0x248 * _DAT_005c2918
              );
    core_game_cpp_CGame_displayMessage_FUN_004b46b0(this_ptr,acStack_21c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x248);
  }
  if (((*(int *)&this_ptr->field_0x234 != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    *(uint *)&g_CDemonSetPtr->field_0x15aeb4 = (uint)(*(int *)&g_CDemonSetPtr->field_0x15aeb4 == 0);
  }
  if (((*(int *)&this_ptr->field_0x234 != 0) &&
      (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78), iVar5 != 0)) {
    fStack_1c = 0.02;
    iVar5 = (**(code **)*0x01D70A78)(0x01D70A78);
    if (iVar5 != 0) {
      fStack_1c = -0.02;
    }
    uStack_18 = g_CDemonCameraInstance._4584_4_;
    fStack_220 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005c2920 + fStack_1c;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar5 = 0; iVar5 < *(int *)g_CDemonSetPtr; iVar5 = iVar5 + 1) {
      core_set_cpp_FUN_0053b280(g_CDemonSetPtr,iVar5,fStack_220);
    }
  }
  return;
}
