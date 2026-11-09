// Name: core_game.cpp_FUN_004b82e0
// Address: 004b82e0
// Address Range: [[004b82e0, 004b8d8d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b82e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b82e0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  _FILE *p_Var9;
  char *pcVar10;
  char *pcVar11;
  uint clear_enabled;
  float fVar12;
  float fStack_228;
  char acStack_224 [256];
  char acStack_124 [268];
  float fStack_18;
  uint uStack_14;
  
  if (_DAT_01cb7788 == 0) {
    if (*(int *)&this_ptr->field_0xe0 == 0) {
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"GoToMap");
      }
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"GoToCompass");
      }
      iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
      if (iVar7 != 0) {
        core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,"UseSPS");
      }
      if (*(int *)&g_CFieldNotesPtr->field_0x40 != 0) {
        iVar7 = 0;
        for (iVar8 = 0; iVar8 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar8 = iVar8 + 1) {
          iVar2 = *(int *)(&g_CDemonSetPtr->field_0x150ff0 + iVar7);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          if ((*(int *)(iVar2 + 0x10a78) == iVar3) &&
             (fVar12 = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x20),
             fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(iVar3 + 0x24),
             fVar4 = *(float *)(iVar2 + 0x28) - *(float *)(iVar3 + 0x28),
             SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar12 * fVar12) < (float)_DAT_005d79eb)) {
            *(uint *)&g_CFieldNotesPtr->field_0x40 = 0;
          }
          iVar7 = iVar7 + 4;
        }
      }
      if ((((*(int *)&this_ptr->field_0x22c != 0) &&
           (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
          (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) &&
         (iVar7 = 1 - *(int *)&this_ptr->field_0x294, *(int *)&this_ptr->field_0x294 = iVar7,
         iVar7 != 0)) {
        core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc);
        *(uint *)&g_CScriptPtr->field_0x10 = 0;
      }
      if ((*(int *)&this_ptr->field_0x294 == 0) &&
         (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
        iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
        pCVar6 = g_CDemonSetPtr;
        if (iVar7 == 0) {
          iVar7 = *(int *)&this_ptr->field_0x290 + 1;
          *(int *)&this_ptr->field_0x290 = iVar7;
          if (*(int *)pCVar6 <= iVar7) {
            *(uint *)&this_ptr->field_0x290 = 0;
          }
        }
        else {
          iVar7 = *(int *)&this_ptr->field_0x290 + -1;
          *(int *)&this_ptr->field_0x290 = iVar7;
          if (iVar7 < 0) {
            *(int *)&this_ptr->field_0x290 = *(int *)g_CDemonSetPtr + -1;
          }
        }
        core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                  (g_CDemonSetPtr,*(int *)&this_ptr->field_0x290);
      }
    }
    if (((*(int *)&this_ptr->field_0x22c != 0) &&
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      iVar7 = 1 - *(int *)&this_ptr->field_0x218;
      *(int *)&this_ptr->field_0x218 = iVar7;
      if (iVar7 == 0) {
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
      else {
        _DAT_01c2a384 = 0;
        core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
      }
    }
    if ((((*(int *)&this_ptr->field_0x22c != 0) ||
         (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0))
        && (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      *(int *)&this_ptr->field_0x200 = 1 - *(int *)&this_ptr->field_0x200;
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      _DAT_01d1cdc8 = (uint)(_DAT_01d1cdc8 == 0);
    }
    if (((*(int *)&this_ptr->field_0x1f8 == 0) &&
        (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) ||
       ((iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0 &&
        (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)))) {
      iVar7 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      if (iVar7 == 0) {
        core_sound_cpp_CSound_shutdown_FUN_0055a360(0x0264B290);
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(1);
      }
      else {
        sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(0);
        core_sound_cpp_FUN_0055a1d0(0x0264B290);
      }
    }
    if ((((*(int *)&this_ptr->field_0x22c != 0) &&
         (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
        (iVar8 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 = DAT_006141bc, iVar8 != 0))
       && (0x1df < DAT_006141bc)) {
      iVar8 = 1 - *(int *)&this_ptr->field_0x298;
      *(int *)&this_ptr->field_0x298 = iVar8;
      if (iVar8 != 0) {
        iVar7 = 0xf0;
      }
      clear_enabled = (uint)(iVar8 != 0);
      core_set_cpp_FUN_0052e910(g_CDemonSetPtr,clear_enabled,clear_enabled,iVar7);
    }
    if (((*(int *)&this_ptr->field_0x22c != 0) && (_DAT_01cb80d0 == 0)) &&
       ((iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0 &&
        ((iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0 &&
         (0x1df < DAT_006141bc)))))) {
      *(uint *)&this_ptr->field_0x204 = (uint)(*(int *)&this_ptr->field_0x204 == 0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if (((iVar7 != 0) && (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) &&
       (*(int *)&this_ptr->field_0x244 == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (*(int *)&this_ptr->field_0x244 == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,(char *)0x0);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if (iVar7 != 0) {
      core_game_cpp_FUN_004bdb10(this_ptr);
    }
    iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
    if ((iVar7 != 0) && (*(int *)&this_ptr->field_0x244 == 0)) {
      core_game_cpp_FUN_004bb9b0(this_ptr,"quicksavedgame.noc");
      fVar12 = 2.0;
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Quick Save");
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar10,fVar12);
    }
    if ((*(int *)&this_ptr->field_0x1f8 == 0) &&
       (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) {
      p_Var9 = engine_dosio_cpp_FUN_00460c70
                         (&DAT_005d7965,"quicksavedgame.noc",&DAT_005d794f);
      if (p_Var9 == (_FILE *)0x0) {
        fVar12 = 2.0;
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            ("No quicked saved game to load");
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,pcVar10,fVar12);
      }
      else {
        _fclose();
        pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                            ("Restore quick saved game?");
        iVar7 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760
                          (g_CEditorToolsPtr,pcVar10);
        if (iVar7 != 0) {
          pcVar11 = "quicksavedgame.noc";
          pcVar10 = &this_ptr->field_0x9ec;
          *(uint *)&this_ptr->field_0x9e8 = 1;
          do {
            cVar1 = *pcVar11;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
        }
      }
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      *(uint *)&this_ptr->field_0xaec = (uint)(*(int *)&this_ptr->field_0xaec == 0);
    }
    if (((*(int *)&this_ptr->field_0x22c != 0) ||
        (pcVar10 = getenv("SPOOKHOUSE"), pcVar10 != (char *)0x0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      *(uint *)&this_ptr->field_0x2a0 = (uint)(*(int *)&this_ptr->field_0x2a0 == 0);
    }
    if (*(int *)&this_ptr->field_0x218 == 0) {
      if ((*(int *)&g_CScriptPtr->field_0x1c != 2) &&
         (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), pCVar6 = g_CDemonSetPtr,
         iVar7 != 0)) {
        *(uint *)&this_ptr->field_0x298 = 1;
        core_set_cpp_FUN_0052e910(pCVar6,0,0,0xf0);
        *(uint *)&this_ptr->field_0x1f8 = 1;
        if (*(int *)&g_CScriptPtr->field_0x1c == 1) {
          *(uint *)&g_CScriptPtr->field_0x1c = 0;
        }
        else {
          *(uint *)&g_CScriptPtr->field_0x1c = 1;
        }
      }
      if (*(int *)&this_ptr->field_0x1f8 != 0) {
        if ((*(int *)&g_CScriptPtr->field_0x1c == 2) &&
           (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
          *(uint *)&g_CScriptPtr->field_0x1c = 1;
        }
        iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar7 != 0) {
          *(uint *)&g_CScriptPtr->field_0x1c = 0;
        }
        iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar7 != 0) {
          core_script_cpp_FUN_00529b00();
        }
      }
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      iVar7 = *(int *)&this_ptr->field_0x240 + -0x400;
      *(int *)&this_ptr->field_0x240 = iVar7;
      if (iVar7 < 0x8000) {
        *(uint *)&this_ptr->field_0x240 = 0x8000;
      }
      FUN_005b7790
                (acStack_124,"Gamma : %f",
                 (double)*(int *)&this_ptr->field_0x240 * _DAT_005d79db);
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,acStack_124,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
    }
    iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar7 != 0) {
      iVar7 = *(int *)&this_ptr->field_0x240 + 0x400;
      *(int *)&this_ptr->field_0x240 = iVar7;
      if (0x10000 < iVar7) {
        *(uint *)&this_ptr->field_0x240 = 0x10000;
      }
      FUN_005b7790
                (acStack_224,"Gamma : %f",
                 (double)*(int *)&this_ptr->field_0x240 * _DAT_005d79db);
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(this_ptr,acStack_224,1.0);
      core_set_cpp_CDemonSet_setGamma_FUN_00534580(g_CDemonSetPtr,*(int *)&this_ptr->field_0x240);
    }
    if (((*(int *)&this_ptr->field_0x22c != 0) &&
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      *(uint *)&g_CDemonSetPtr->field_0x15aeb4 =
           (uint)(*(int *)&g_CDemonSetPtr->field_0x15aeb4 == 0);
    }
    if (((*(int *)&this_ptr->field_0x22c != 0) &&
        (iVar7 = (**(code **)*0x01D02F84)(0x01D02F84), iVar7 != 0)) &&
       (iVar7 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar7 != 0)) {
      fStack_18 = 0.02;
      iVar7 = (**(code **)*0x01D02F84)(0x01D02F84);
      if (iVar7 != 0) {
        fStack_18 = -0.02;
      }
      uStack_14 = g_CDemonCameraInstance._4584_4_;
      fStack_228 = (float)(int)g_CDemonCameraInstance._4584_4_ * (float)_DAT_005d79e3 + fStack_18;
      if (fStack_228 < 0.0) {
        fStack_228 = 0.0;
      }
      if (1.0 < fStack_228) {
        fStack_228 = 1.0;
      }
      for (iVar7 = 0; iVar7 < *(int *)g_CDemonSetPtr; iVar7 = iVar7 + 1) {
        core_set_cpp_FUN_00534640(g_CDemonSetPtr,iVar7,fStack_228);
      }
    }
    unkaddr_0059c270_cpp_FUN_0059c3d0(g_CGameHookPtr,*(uint *)&this_ptr->field_0x22c);
  }
  return;
}
