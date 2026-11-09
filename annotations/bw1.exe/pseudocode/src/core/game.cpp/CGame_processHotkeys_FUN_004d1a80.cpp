// Name: core_game.cpp_CGame_processHotkeys_FUN_004d1a80
// Address: 004d1a80
// Address Range: [[004d1a80, 004d24b8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004d1a80(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004d1a80(CGame *this_ptr)

{
  char cVar1;
  CFieldNotes *pCVar2;
  CScript *pCVar3;
  CDemonSet *pCVar4;
  int iVar5;
  int iVar6;
  _FILE *p_Var7;
  char *pcVar8;
  char *pcVar9;
  uint clear_enabled;
  float fVar10;
  float fStack_220;
  char acStack_21c [256];
  char acStack_11c [256];
  float fStack_1c;
  uint uStack_18;
  
  if (_DAT_01cd01f8 != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0xe0 != 0) goto LAB_004d1aac;
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if (iVar5 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"GoToMap");
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if (iVar5 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"GoToCompass");
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if ((iVar5 != 0) && (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 == 0)) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"UseSPS");
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  pCVar2 = g_CFieldNotesPtr;
  if (iVar5 != 0) {
    if (*(int *)&g_CFieldNotesPtr->field_0x40 == 0) {
      *(uint *)&g_CFieldNotesPtr->field_0x40 = 1;
      if (*(int *)&this_ptr->field_0x244 != 0) {
        *(uint *)&pCVar2->field_0x40 = 0;
      }
      if (DAT_007c3978 == 0) goto LAB_004d1fc8;
    }
    *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  }
LAB_004d1fc8:
  if (*(char *)g_CFieldNotesPtr == '\0') {
    *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
  }
  if ((((*(int *)&this_ptr->field_0x22c != 0) &&
       (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) &&
     (iVar5 = 1 - *(int *)&this_ptr->field_0x2a4, *(int *)&this_ptr->field_0x2a4 = iVar5, iVar5 != 0
     )) {
    core_setdir_cpp_FUN_00559f80(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc);
    *(uint *)&g_CScriptPtr->field_0x10 = 0;
  }
  if ((*(int *)&this_ptr->field_0x2a4 == 0) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
    pCVar4 = g_CDemonSetPtr;
    if (iVar5 == 0) {
      iVar5 = *(int *)&this_ptr->field_0x2a0 + 1;
      *(int *)&this_ptr->field_0x2a0 = iVar5;
      if (*(int *)pCVar4 <= iVar5) {
        *(uint *)&this_ptr->field_0x2a0 = 0;
      }
    }
    else {
      iVar5 = *(int *)&this_ptr->field_0x2a0 + -1;
      *(int *)&this_ptr->field_0x2a0 = iVar5;
      if (iVar5 < 0) {
        *(int *)&this_ptr->field_0x2a0 = *(int *)g_CDemonSetPtr + -1;
      }
    }
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(g_CDemonSetPtr,*(int *)&this_ptr->field_0x2a0)
    ;
  }
LAB_004d1aac:
  if (((*(int *)&this_ptr->field_0x22c != 0) &&
      (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    iVar5 = 1 - *(int *)&this_ptr->field_0x218;
    *(int *)&this_ptr->field_0x218 = iVar5;
    if (iVar5 == 0) {
      core_sound_cpp_FUN_0057cc00(0x02C82A60);
    }
    else {
      _DAT_01c43544 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
    }
  }
  if ((((*(int *)&this_ptr->field_0x22c != 0) ||
       (pcVar8 = getenv("SPOOKHOUSE"), pcVar8 != (char *)0x0)) &&
      (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    *(int *)&this_ptr->field_0x200 = 1 - *(int *)&this_ptr->field_0x200;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    _DAT_01d39d34 = (uint)(_DAT_01d39d34 == 0);
  }
  if (((*(int *)&this_ptr->field_0x1f8 == 0) &&
      (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) ||
     ((iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0 &&
      (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)))) {
    iVar5 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
    if (iVar5 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0057cdb0(0x02C82A60);
      sound_sndmain_cpp_setSoundMuted_FUN_00573600(1);
    }
    else {
      sound_sndmain_cpp_setSoundMuted_FUN_00573600(0);
      core_sound_cpp_FUN_0057cc00(0x02C82A60);
    }
  }
  if ((((*(int *)&this_ptr->field_0x22c != 0) &&
       (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
      (iVar6 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 = DAT_0061b49c, iVar6 != 0)) &&
     (0x1df < DAT_0061b49c)) {
    iVar6 = 1 - *(int *)&this_ptr->field_0x2a8;
    *(int *)&this_ptr->field_0x2a8 = iVar6;
    if (iVar6 != 0) {
      iVar5 = 0xf0;
    }
    clear_enabled = (uint)(iVar6 != 0);
    core_set_cpp_FUN_0054fbf0(g_CDemonSetPtr,clear_enabled,clear_enabled,iVar5);
  }
  if (((*(int *)&this_ptr->field_0x22c != 0) && (_DAT_01cd0c38 == 0)) &&
     ((iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0 &&
      ((iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0 && (0x1df < DAT_0061b49c)
       ))))) {
    *(uint *)&this_ptr->field_0x204 = (uint)(*(int *)&this_ptr->field_0x204 == 0);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if (((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) &&
     (*(int *)&this_ptr->field_0x244 == 0)) {
    core_game_cpp_FUN_004d6420(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    core_game_cpp_FUN_004d6420(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if ((iVar5 != 0) && (*(int *)&this_ptr->field_0x244 == 0)) {
    core_game_cpp_FUN_004d6420(this_ptr,(char *)0x0);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if (iVar5 != 0) {
    core_game_cpp_FUN_004d85f0(this_ptr);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
  if ((iVar5 != 0) && (*(int *)&this_ptr->field_0x244 == 0)) {
    core_game_cpp_FUN_004d6420(this_ptr,"quicksavedgame.noc");
    fVar10 = 2.0;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Quick Save");
    core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar10);
  }
  if ((*(int *)&this_ptr->field_0x1f8 == 0) &&
     (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) {
    p_Var7 = engine_dosio_cpp_FUN_00479180
                       (&DAT_005e1a66,"quicksavedgame.noc",&DAT_005e1a50);
    if (p_Var7 == (_FILE *)0x0) {
      fVar10 = 2.0;
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("No quicked saved game to load");
      core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,pcVar8,fVar10);
    }
    else {
      _fclose();
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("Restore quick saved game?");
      iVar5 = shape_edittool_cpp_FUN_00494d20(g_CEditorToolsPtr,pcVar8);
      if (iVar5 != 0) {
        pcVar9 = "quicksavedgame.noc";
        pcVar8 = &this_ptr->field_0x9fc;
        *(uint *)&this_ptr->field_0x9f8 = 1;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if (iVar5 != 0) {
    *(uint *)&this_ptr->field_0xafc = (uint)(*(int *)&this_ptr->field_0xafc == 0);
  }
  if (((*(int *)&this_ptr->field_0x22c != 0) ||
      (pcVar8 = getenv("SPOOKHOUSE"), pcVar8 != (char *)0x0)) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    *(uint *)&this_ptr->field_0x2b0 = (uint)(*(int *)&this_ptr->field_0x2b0 == 0);
  }
  if (*(int *)&this_ptr->field_0x218 == 0) {
    if ((*(int *)&g_CScriptPtr->field_0x1c != 2) &&
       (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), pCVar4 = g_CDemonSetPtr, iVar5 != 0)
       ) {
      *(uint *)&this_ptr->field_0x2a8 = 1;
      core_set_cpp_FUN_0054fbf0(pCVar4,0,0,0xf0);
      pCVar3 = g_CScriptPtr;
      *(uint *)&this_ptr->field_0x1f8 = 1;
      if (*(int *)&pCVar3->field_0x1c == 1) {
        *(uint *)&pCVar3->field_0x1c = 0;
      }
      else {
        *(uint *)&pCVar3->field_0x1c = 1;
      }
    }
    if (*(int *)&this_ptr->field_0x1f8 != 0) {
      if ((*(int *)&g_CScriptPtr->field_0x1c == 2) &&
         (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
        *(uint *)&g_CScriptPtr->field_0x1c = 1;
      }
      iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
      if (iVar5 != 0) {
        *(uint *)&g_CScriptPtr->field_0x1c = 0;
      }
      iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
      if (iVar5 != 0) {
        core_script_cpp_FUN_0054ae10();
      }
    }
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if (iVar5 != 0) {
    iVar5 = *(int *)&this_ptr->field_0x240 + -0x400;
    *(int *)&this_ptr->field_0x240 = iVar5;
    if (iVar5 < 0x8000) {
      *(uint *)&this_ptr->field_0x240 = 0x8000;
    }
    FUN_005bfb40
              (acStack_21c,"Gamma : %f",(double)*(int *)&this_ptr->field_0x240 * _DAT_005e1adc
              );
    core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,acStack_21c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
  }
  iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0);
  if (iVar5 != 0) {
    iVar5 = *(int *)&this_ptr->field_0x240 + 0x400;
    *(int *)&this_ptr->field_0x240 = iVar5;
    if (0x10000 < iVar5) {
      *(uint *)&this_ptr->field_0x240 = 0x10000;
    }
    FUN_005bfb40
              (acStack_11c,"Gamma : %f",(double)*(int *)&this_ptr->field_0x240 * _DAT_005e1adc
              );
    core_game_cpp_CGame_displayMessage_FUN_004cc190(this_ptr,acStack_11c,1.0);
    core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
  }
  if (((*(int *)&this_ptr->field_0x22c != 0) &&
      (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    *(uint *)&g_CDemonSetPtr->field_0x15aeb4 = (uint)(*(int *)&g_CDemonSetPtr->field_0x15aeb4 == 0);
  }
  if (((*(int *)&this_ptr->field_0x22c != 0) &&
      (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0), iVar5 != 0)) {
    fStack_1c = 0.02;
    iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0);
    if (iVar5 != 0) {
      fStack_1c = -0.02;
    }
    uStack_18 = g_CDemonCameraInstance._4584_4_;
    fStack_220 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005e1ae4 + fStack_1c;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar5 = 0; iVar5 < *(int *)g_CDemonSetPtr; iVar5 = iVar5 + 1) {
      core_set_cpp_FUN_005558f0(g_CDemonSetPtr,iVar5,fStack_220);
    }
  }
  return;
}
