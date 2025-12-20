; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0()
;
; Local Variables:
; undefined4       Stack[-0x9b4]:4  local_9b4
; undefined1       Stack[-0x60c]:1  local_60c
; undefined1       Stack[-0x4e0]:1  local_4e0
; undefined1       Stack[-0x3b4]:1  local_3b4
; undefined1       Stack[-0x2b0]:1  local_2b0
; undefined1       Stack[-0x1e8]:1  local_1e8
; undefined1       Stack[-0x1c0]:1  local_1c0
; undefined1       Stack[-0x198]:1  local_198
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x124]:1  local_124
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 0053870d
;
; Referenced Globals:
;   void* switchdataD_005390c8 = 005393a2
;   void* switchdataD_005390dc = 0053aa5d
;   TerminatedCString s_Preparing_set_0063c34c
;   TerminatedCString s_Preparing_actors_0063c35b
;   TerminatedCString s_Setting_initial_camera_v_0063c36d
;   TerminatedCString s_Static_cam_s_0063c38a
;   TerminatedCString s_Custom_cam_camera_fixed__0063c399
;   TerminatedCString s_Slew_cam_actor_fixed_sle_0063c3c3
;   TerminatedCString s_s_1st_person_cam_0063c3eb
;   TerminatedCString s_Chase_spot_cam_0063c3fa
;   TerminatedCString s_core_msnedit_cpp_0063c409
;   TerminatedCString s_Invalid_cameraMode_0063c41d
;   TerminatedCString s_Virtual_Director_ENABLED_0063c431
;   TerminatedCString s_Virtual_Director_DISABLE_0063c44a
;   TerminatedCString s_StaticCam_0063c464
;   ... and 92 more
;
; Called Functions:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0
;   core_actor.cpp_CActorProperty_FUN_0040ea50
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_FUN_0040e150
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
;   ... and 81 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005390f0
        ;   Label: core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0
    PUSH ESI                            ; 005390f1
    PUSH EDI                            ; 005390f2
    PUSH EBP                            ; 005390f3
    MOV EBP,ESP                         ; 005390f4
    SUB ESP,0x9a4                       ; 005390f6
    SUB EBP,0x7e                        ; 005390fc
    PUSH 0x680800                       ; 005390ff | = "$$UNDO$$.TMP"
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 00539104
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00539109
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053910c
    PUSH 0x2f7a024                      ; 00539112 | DAT_02f7a024
    MOV dword ptr [EAX + 0x4],0x1       ; 00539117
    CALL core_actor.cpp_FUN_0040e150    ; 0053911e
        ;   XREF to: 0040e150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040e150()
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539123
    ADD ESP,0x4                         ; 00539129
    MOV EDX,dword ptr [0x0067b654]      ; 0053912c | g_CGameInstance | g_CGamePtr
    MOV dword ptr [EAX + 0x28],0x0      ; 00539132
    PUSH EDX                            ; 00539139 | g_CGameInstance
    MOV dword ptr [EAX + 0x2c],0x0      ; 0053913a
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 00539141
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00539146
    PUSH 0x63c34c                       ; 00539149 | = "Preparing set."
    MOV ECX,dword ptr [0x00678a60]      ; 0053914e | g_CEditorToolsPtr
    PUSH ECX                            ; 00539154 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00539155
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053915a
    PUSH 0x2d7eaf0                      ; 0053915d | g_CDemonLightInstance
    MOV ESI,0x42800000                  ; 00539162
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 00539167
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0053916c
    MOV EDI,dword ptr [0x006810c8]      ; 0053916f | g_CDemonSetPtr
    XOR EBX,EBX                         ; 00539175
    PUSH EDI                            ; 00539177 | g_CDemonSetInstance
    MOV dword ptr [0x02d807a4],EBX      ; 00539178 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d7ec30],ESI      ; 0053917e | g_CDemonLightInstance.base.max_distance
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 00539184
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00539189
    PUSH EBX                            ; 0053918c
    MOV EAX,[0x006810c8]                ; 0053918d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00539192 | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 ; 00539193
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00539198
    MOV EDX,dword ptr [0x006810c8]      ; 0053919b | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 005391a1 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20 ; 005391a2
        ;   XREF to: 00575b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005391a7
    PUSH 0x63c35b                       ; 005391aa | = "Preparing actors."
    MOV ECX,dword ptr [0x00678a60]      ; 005391af | g_CEditorToolsPtr
    PUSH ECX                            ; 005391b5 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005391b6
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 005391bb
    MOV EBX,dword ptr [EBP + 0x92]      ; 005391be
    PUSH EBX                            ; 005391c4
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 005391c5
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005391ca
    PUSH 0x63c36d                       ; 005391cd | = "Setting initial camera view."
    MOV ESI,dword ptr [0x00678a60]      ; 005391d2 | g_CEditorToolsPtr
    PUSH ESI                            ; 005391d8 | g_CEditorToolsPtr
    MOV EDI,dword ptr [EBP + 0x96]      ; 005391d9
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005391df
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 005391e4
    TEST EDI,EDI                        ; 005391e7
    JZ 0x00539205                       ; 005391e9
        ;   XREF to: 00539205 (CONDITIONAL_JUMP)  ; LAB_00539205
    XOR EAX,EAX                         ; 005391eb
    MOV EDX,0x1                         ; 005391ed
    MOV [0x02f7c53c],EAX                ; 005391f2 | DAT_02f7c53c
    MOV dword ptr [EBX + 0x10],EAX      ; 005391f7
    MOV [0x02f7c634],EAX                ; 005391fa | DAT_02f7c634
    MOV dword ptr [0x02f7c548],EDX      ; 005391ff | g_CEdCheckInstance.checked_state
    MOV EBX,dword ptr [EBP + 0x92]      ; 00539205
        ;   Label: LAB_00539205
    FLD float ptr [0x00661c44]          ; 0053920b | DAT_00661c44
    PUSH EBX                            ; 00539211
    FSTP float ptr [0x02f7c540]         ; 00539212 | DAT_02f7c540
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00539218
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053921d
    MOV ESI,dword ptr [EBX + 0x10]      ; 00539220
    PUSH ESI                            ; 00539223
    MOV EDI,dword ptr [0x006810c8]      ; 00539224 | g_CDemonSetPtr
    PUSH EDI                            ; 0053922a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053922b
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    MOV EDX,dword ptr [0x00679398]      ; 00539230 | g_WindowHeight
    ADD ESP,0x8                         ; 00539236
    MOV dword ptr [EBX + 0x24],0xffffffff ; 00539239
    CMP EDX,0x190                       ; 00539240
    SETG AL                             ; 00539246
    AND EAX,0xff                        ; 00539249
    PUSH EAX                            ; 0053924e
    PUSH EBX                            ; 0053924f
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 00539250
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
    ADD ESP,0x8                         ; 00539255
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00539258
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053925d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539262
    MOV EAX,dword ptr [EAX + 0x548]     ; 00539268
    MOV dword ptr [EBP + 0x3e],EAX      ; 0053926e
    MOV EAX,[0x006810c8]                ; 00539271 | g_CDemonSetInstance | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x14d154],0x0  ; 00539276 | g_CDemonSetInstance.actor_list_ptr
    JLE 0x005392a2                      ; 0053927d
        ;   XREF to: 005392a2 (CONDITIONAL_JUMP)  ; LAB_005392a2
    MOV EDI,0xf423f                     ; 0053927f
    MOV EAX,dword ptr [EAX + 0x14d158]  ; 00539284 | g_CDemonSetInstance.actor_list_data[0]
    XOR EBX,EBX                         ; 0053928a
    XOR ESI,ESI                         ; 0053928c
    MOV dword ptr [EBP + 0x3e],EAX      ; 0053928e
    MOV EAX,[0x006810c8]                ; 00539291 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00539291
    CMP EBX,dword ptr [EAX + 0x14d154]  ; 00539296 | g_CDemonSetInstance.actor_list_ptr
    JL 0x00539e75                       ; 0053929c
        ;   XREF to: 00539e75 (CONDITIONAL_JUMP)  ; LAB_00539e75
    MOV EBX,dword ptr [EBP + 0x3e]      ; 005392a2
        ;   Label: LAB_005392a2
    PUSH EBX                            ; 005392a5
    MOV ESI,dword ptr [EBP + 0x92]      ; 005392a6
    PUSH ESI                            ; 005392ac
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 005392ad
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
    ADD ESP,0x8                         ; 005392b2
    MOV EDI,dword ptr [0x0067a3d0]      ; 005392b5 | g_CFireEffectPtr
    PUSH EDI                            ; 005392bb | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 005392bc
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 005392c1
    MOV EAX,[0x0067b654]                ; 005392c4 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 005392c9 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 005392ca
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
    ADD ESP,0x4                         ; 005392cf
    LEA EAX,[EBP + 0xffffff1e]          ; 005392d2
    PUSH EAX                            ; 005392d8
    MOV ESI,0x41200000                  ; 005392d9
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 005392de
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    XOR EDX,EDX                         ; 005392e3
    MOV EAX,[0x03276acc]                ; 005392e5 | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [EBP + 0x12],EDX      ; 005392ea
    MOV dword ptr [EBP + 0x16],EDX      ; 005392ed
    MOV dword ptr [EBP + 0x32],EAX      ; 005392f0
    MOV EAX,[0x006810c8]                ; 005392f3 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x1a],EDX      ; 005392f8
    MOV dword ptr [EBP + 0x76],ESI      ; 005392fb
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 005392fe | g_CDemonSetInstance.selected_camera_index
    ADD ESP,0x4                         ; 00539304
    MOV dword ptr [EBP + 0x46],EAX      ; 00539307
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053930a
    XOR ECX,ECX                         ; 00539310
    ADD EAX,0x44                        ; 00539312
    MOV dword ptr [EBP + 0x66],EDX      ; 00539315
    MOV dword ptr [EBP + 0x42],EAX      ; 00539318
    MOV EAX,0x32758e8                   ; 0053931b | DAT_032758e8
    MOV dword ptr [EBP + 0x6a],EDX      ; 00539320
    ADD EAX,0x4                         ; 00539323
    MOV dword ptr [EBP + 0x2e],ECX      ; 00539326
    MOV dword ptr [EBP + 0x3a],EAX      ; 00539329 | g_CDemonCameraInstance.base.position.y
    MOV EAX,0x32758e8                   ; 0053932c | DAT_032758e8
    MOV EDX,0x60ad78ec                  ; 00539331
    ADD EAX,0x8                         ; 00539336
    MOV dword ptr [0x00680818],EDX      ; 00539339 | DAT_00680818
    MOV dword ptr [EBP + 0x36],EAX      ; 0053933f | g_CDemonCameraInstance.base.position.z
    MOV EAX,[0x006810c8]                ; 00539342 | g_CDemonSetPtr
        ;   Label: LAB_00539342
    MOV ESI,0xffffffff                  ; 00539347
    XOR EBX,EBX                         ; 0053934c
    MOV EAX,dword ptr [EAX + 0x15aea4]  ; 0053934e | g_CDemonSetInstance.selected_camera_index
    MOV dword ptr [EBP + 0x2a],EBX      ; 00539354
    MOV dword ptr [EBP + 0x4a],EAX      ; 00539357
    MOV EAX,[0x02cf6a94]                ; 0053935a | g_MouseButtonFlags
    MOV dword ptr [EBP + 0x7a],ESI      ; 0053935f
    MOV dword ptr [EBP + 0x5e],EAX      ; 00539362
    CALL wincore_winrun.cpp_doNothing_FUN_005f2f80 ; 00539365
        ;   XREF to: 005f2f80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing_FUN_005f2f80()
    MOV EAX,[0x02f7c634]                ; 0053936a | DAT_02f7c634
    MOV dword ptr [EBP + 0x56],ESI      ; 0053936f
    CMP EAX,0x2                         ; 00539372
    JZ 0x0053991f                       ; 00539375
        ;   XREF to: 0053991f (CONDITIONAL_JUMP)  ; LAB_0053991f
    MOV ECX,0x32                        ; 0053937b
    LEA EDI,[EBP + 0xfffffdde]          ; 00539380
    MOV ESI,0x680830                    ; 00539386 | DAT_00680830
    MOV EAX,[0x02f7c53c]                ; 0053938b | DAT_02f7c53c
    MOVSD.REP ES:EDI,ESI                ; 00539390 | DAT_00680830 | DAT_00680834
    CMP EAX,0x4                         ; 00539392
    JA 0x0053a292                       ; 00539395
        ;   XREF to: 0053a292 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5390c8]  ; 0053939b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [0x02f7c548],0x0      ; 005393a2 | g_CEdCheckInstance.checked_state
        ;   Label: caseD_0
    JZ 0x005393ce                       ; 005393a9
        ;   XREF to: 005393ce (CONDITIONAL_JUMP)  ; LAB_005393ce
    CMP dword ptr [0x02cf6a94],0x0      ; 005393ab | g_MouseButtonFlags
    JNZ 0x005393ce                      ; 005393b2
        ;   XREF to: 005393ce (CONDITIONAL_JUMP)  ; LAB_005393ce
    MOV EAX,dword ptr [EBP + 0x92]      ; 005393b4
    PUSH EBX                            ; 005393ba
    MOV EBX,dword ptr [EAX + 0x28]      ; 005393bb
    PUSH EBX                            ; 005393be
    MOV ESI,dword ptr [0x006810c8]      ; 005393bf | g_CDemonSetPtr
    PUSH ESI                            ; 005393c5 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 005393c6
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 005393cb
    PUSH 0x3275924                      ; 005393ce | DAT_03275924
        ;   Label: LAB_005393ce
    PUSH 0x63c38a                       ; 005393d3 | = "Static cam: %s"
    LEA EAX,[EBP + 0xfffffdde]          ; 005393d8
    PUSH EAX                            ; 005393de
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005393df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x032758e8]                ; 005393e4 | DAT_032758e8
    MOV dword ptr [EBP + -0x7e],EAX     ; 005393e9
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005393ec
    MOV EAX,dword ptr [EAX]             ; 005393ef | g_CDemonCameraInstance.base.position.y
    MOV dword ptr [EBP + -0x7a],EAX     ; 005393f1
    MOV EAX,dword ptr [EBP + 0x36]      ; 005393f4
    MOV EAX,dword ptr [EAX]             ; 005393f7 | g_CDemonCameraInstance.base.position.z
    LEA EBX,[EBP + -0x7e]               ; 005393f9
    MOV dword ptr [EBP + -0x76],EAX     ; 005393fc
    LEA EAX,[EBP + 0xffffff1e]          ; 005393ff
    ADD ESP,0xc                         ; 00539405
    CMP EAX,EBX                         ; 00539408
    JZ 0x00539427                       ; 0053940a
        ;   XREF to: 00539427 (CONDITIONAL_JUMP)  ; LAB_00539427
    MOV EAX,dword ptr [EBP + -0x7e]     ; 0053940c
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0053940f
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00539415
    MOV dword ptr [EBP + 0xffffff22],EAX ; 00539418
    MOV EAX,dword ptr [EBP + -0x76]     ; 0053941e
    MOV dword ptr [EBP + 0xffffff26],EAX ; 00539421
    MOV ECX,0xa                         ; 00539427
        ;   Label: LAB_00539427
    LEA EDI,[EBP + 0xfffffea6]          ; 0053942c
    MOV ESI,0x32758f4                   ; 00539432 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    LEA EAX,[EBP + -0x4e]               ; 00539437
    MOVSD.REP ES:EDI,ESI                ; 0053943a | g_CDemonCameraInstance.base.rotation_matrix.m[0].x | DAT_032758f8
    PUSH EAX                            ; 0053943c
    MOV ECX,0xa                         ; 0053943d
    LEA EDI,[EBP + 0xfffffece]          ; 00539442
    LEA EAX,[EBP + 0xfffffece]          ; 00539448
    LEA ESI,[EBP + 0xfffffea6]          ; 0053944e
    PUSH EAX                            ; 00539454
    MOVSD.REP ES:EDI,ESI                ; 00539455
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 00539457
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EBX,EAX                         ; 0053945c
    LEA EAX,[EBP + 0xffffff2a]          ; 0053945e
    ADD ESP,0x8                         ; 00539464
    CMP EAX,EBX                         ; 00539467
    JZ 0x00539485                       ; 00539469
        ;   XREF to: 00539485 (CONDITIONAL_JUMP)  ; LAB_00539485
    MOV EAX,dword ptr [EBX]             ; 0053946b
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 0053946d
    MOV EAX,dword ptr [EBX + 0x4]       ; 00539473
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 00539476
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053947c
    MOV dword ptr [EBP + 0xffffff32],EAX ; 0053947f
    MOV EAX,[0x0327591c]                ; 00539485 | g_CDemonCameraInstance.base.projection_scale
        ;   Label: LAB_00539485
    MOV dword ptr [EBP + 0xffffff36],EAX ; 0053948a
    MOV EDI,dword ptr [EBP + 0x92]      ; 00539490
        ;   Label: LAB_00539490
    PUSH EDI                            ; 00539496
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00539497
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    MOV EDX,dword ptr [EDI + 0x24]      ; 0053949c
    ADD ESP,0x4                         ; 0053949f
    TEST EDX,EDX                        ; 005394a2
    JZ 0x005394ab                       ; 005394a4
        ;   XREF to: 005394ab (CONDITIONAL_JUMP)  ; LAB_005394ab
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005394a6
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [0x02f7c53c]      ; 005394ab | DAT_02f7c53c
        ;   Label: LAB_005394ab
    TEST ECX,ECX                        ; 005394b1
    JNZ 0x0053a2d8                      ; 005394b3
        ;   XREF to: 0053a2d8 (CONDITIONAL_JUMP)  ; LAB_0053a2d8
    MOV EAX,dword ptr [EBP + 0x92]      ; 005394b9
    CMP dword ptr [EAX + 0x38],0x0      ; 005394bf
    JZ 0x0053a2ba                       ; 005394c3
        ;   XREF to: 0053a2ba (CONDITIONAL_JUMP)  ; LAB_0053a2ba
    MOV dword ptr [0x03276acc],0xffff   ; 005394c9 | g_CDemonCameraInstance.corona_blend_factor
    MOV EAX,[0x006810c8]                ; 005394d3 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 005394d8 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac84],0x1  ; 005394e2 | g_CDemonSetInstance.unk_lighting_param1
    MOV EAX,dword ptr [EBP + 0x92]      ; 005394ec
        ;   Label: LAB_005394ec
    MOV EDX,dword ptr [EAX + 0x30]      ; 005394f2
    XOR EBX,EBX                         ; 005394f5
    TEST EDX,EDX                        ; 005394f7
    SETZ AL                             ; 005394f9
    MOV BL,AL                           ; 005394fc
    MOV EAX,[0x006810c8]                ; 005394fe | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac8c],EBX  ; 00539503 | g_CDemonSetInstance.unk_lighting_param3
    MOV EBX,dword ptr [EBP + 0x92]      ; 00539509
    CMP dword ptr [EBX + 0x34],0x0      ; 0053950f
    SETZ BL                             ; 00539513
    PUSH 0x1                            ; 00539516
    AND EBX,0xff                        ; 00539518
    PUSH EAX                            ; 0053951e | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ac90],EBX  ; 0053951f | g_CDemonSetInstance.unk_lighting_param4
    CALL core_set.cpp_CDemonSet_FUN_0056c1a0 ; 00539525
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0053952a
    MOV EBX,dword ptr [0x006810c8]      ; 0053952d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00539533 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056be80 ; 00539534
        ;   XREF to: 0056be80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00539539
    PUSH 0x32758e4                      ; 0053953c | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 ; 00539541
        ;   XREF to: 0044c860 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00539546
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539549
        ;   Label: LAB_00539549
    CMP dword ptr [EAX + 0x24],0x0      ; 0053954f
    JZ 0x00539605                       ; 00539553
        ;   XREF to: 00539605 (CONDITIONAL_JUMP)  ; LAB_00539605
    MOV EDI,dword ptr [0x02f7c634]      ; 00539559 | DAT_02f7c634
    TEST EDI,EDI                        ; 0053955f
    JNZ 0x00539605                      ; 00539561
        ;   XREF to: 00539605 (CONDITIONAL_JUMP)  ; LAB_00539605
    PUSH EDI                            ; 00539567
    MOV EAX,[0x006810c8]                ; 00539568 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0053956d | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_FUN_00577af0 ; 0053956e
        ;   XREF to: 00577af0 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_FUN_00577af0(CDemonSet * this_ptr)
    MOV EBX,EAX                         ; 00539573
    ADD ESP,0x8                         ; 00539575
    MOV dword ptr [EBP + 0x56],EAX      ; 00539578
    TEST EAX,EAX                        ; 0053957b
    JL 0x00539605                       ; 0053957d
        ;   XREF to: 00539605 (CONDITIONAL_JUMP)  ; LAB_00539605
    PUSH 0x38                           ; 00539583
    MOV EAX,[0x0067cf44]                ; 00539585 | g_CKeysPtr
    PUSH EAX                            ; 0053958a | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0053958b | g_CKeysInstance
    CALL dword ptr [ESI]                ; 0053958d
    ADD ESP,0x8                         ; 0053958f
    TEST EAX,EAX                        ; 00539592
    JZ 0x0053a3b1                       ; 00539594
        ;   XREF to: 0053a3b1 (CONDITIONAL_JUMP)  ; LAB_0053a3b1
    IMUL EBX,EBX,0x1a4                  ; 0053959a
    MOV ESI,dword ptr [0x00679398]      ; 005395a0 | g_WindowHeight
    DEC ESI                             ; 005395a6
    MOV EAX,[0x00679394]                ; 005395a7 | g_WindowWidth
    PUSH ESI                            ; 005395ac
    DEC EAX                             ; 005395ad
    PUSH EAX                            ; 005395ae
    PUSH 0x101                          ; 005395af
    PUSH EDI                            ; 005395b4
    MOV ECX,dword ptr [0x00680d50]      ; 005395b5 | g_CScriptInstance | g_CScriptPtr
    PUSH ECX                            ; 005395bb | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 005395bc
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 005395c1
    MOV ESI,0x1                         ; 005395c4
    PUSH ESI                            ; 005395c9
    MOV EDI,dword ptr [0x0067d550]      ; 005395ca | g_CDemonMissionPtr
    PUSH EDI                            ; 005395d0 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],ESI      ; 005395d1 | DAT_02f7c634
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 005395d7
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
    ADD ESP,0x8                         ; 005395dc
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005395df
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,[0x006810c8]                ; 005395e4 | g_CDemonSetPtr
    ADD EAX,0x4                         ; 005395e9
    ADD EBX,EAX                         ; 005395ec
    PUSH EBX                            ; 005395ee
    MOV EAX,[0x00680d50]                ; 005395ef | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 005395f4 | g_CScriptInstance
    CALL core_script.cpp_FUN_00565f70   ; 005395f5
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565f70()
    MOV EDX,0xffffffff                  ; 005395fa
    ADD ESP,0x8                         ; 005395ff
    MOV dword ptr [EBP + 0x56],EDX      ; 00539602
    PUSH 0x1                            ; 00539605
        ;   Label: LAB_00539605
    PUSH 0x32758e4                      ; 00539607 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0053960c
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV ECX,dword ptr [0x02f7c538]      ; 00539611 | DAT_02f7c538
    ADD ESP,0x8                         ; 00539617
    TEST ECX,ECX                        ; 0053961a
    JZ 0x0053a3b9                       ; 0053961c
        ;   XREF to: 0053a3b9 (CONDITIONAL_JUMP)  ; LAB_0053a3b9
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539622
        ;   Label: LAB_00539622
    MOV dword ptr [EAX + 0x2c],0x0      ; 00539628
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053962f
        ;   Label: LAB_0053962f
    CMP dword ptr [EAX + 0x28],0x0      ; 00539635
    JZ 0x005396fb                       ; 00539639
        ;   XREF to: 005396fb (CONDITIONAL_JUMP)  ; LAB_005396fb
    MOV EDI,dword ptr [0x00678a60]      ; 0053963f | g_CEditorToolsPtr
    PUSH EDI                            ; 00539645 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 00539646
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0053964b
    PUSH EAX                            ; 0053964e
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053964f
    MOV EDX,dword ptr [EAX + 0x28]      ; 00539655
    PUSH EDX                            ; 00539658
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 00539659
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 0053965e
    LEA ESI,[EBP + 0xffffff6a]          ; 00539661
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539667
    PUSH ESI                            ; 0053966d
    MOV EAX,dword ptr [EAX + 0x28]      ; 0053966e
    PUSH EAX                            ; 00539671
    MOV EBX,dword ptr [EAX + 0x154]     ; 00539672
    CALL dword ptr [EBX + 0x14]         ; 00539678
    LEA EBX,[EAX + 0xc]                 ; 0053967b
    FLD float ptr [EBX]                 ; 0053967e
    FSUB float ptr [EAX]                ; 00539680
    FSTP float ptr [EBP + -0x36]        ; 00539682
    FLD float ptr [EBX + 0x4]           ; 00539685
    FSUB float ptr [EAX + 0x4]          ; 00539688
    FST float ptr [EBP + -0x32]         ; 0053968b
    FMUL float ptr [EBP + -0x32]        ; 0053968e
    FLD float ptr [EBP + -0x36]         ; 00539691
    FMUL ST0                            ; 00539694
    FLD float ptr [EBX + 0x8]           ; 00539696
    FSUB float ptr [EAX + 0x8]          ; 00539699
    FXCH                                ; 0053969c
    FADDP ST2,ST0                       ; 0053969e
    FST float ptr [EBP + -0x2e]         ; 005396a0
    FMUL float ptr [EBP + -0x2e]        ; 005396a3
    FADDP                               ; 005396a6
    FSQRT                               ; 005396a8
    FMUL double ptr [0x0063c57c]        ; 005396aa | DOUBLE_0063c57c
    ADD ESP,0x8                         ; 005396b0
    FST float ptr [EBP + 0x4e]          ; 005396b3
    FCOMP double ptr [0x0063c5a4]       ; 005396b6 | DOUBLE_0063c5a4
    FNSTSW AX                           ; 005396bc
    SAHF                                ; 005396be
    JNC 0x005396c8                      ; 005396bf
        ;   XREF to: 005396c8 (CONDITIONAL_JUMP)  ; LAB_005396c8
    MOV dword ptr [EBP + 0x4e],0x3f000000 ; 005396c1
    MOV EAX,dword ptr [EBP + 0x92]      ; 005396c8
        ;   Label: LAB_005396c8
    MOV EAX,dword ptr [EAX + 0x28]      ; 005396ce
    LEA EBX,[EAX + 0x30]                ; 005396d1
    PUSH EBX                            ; 005396d4
    ADD EAX,0x20                        ; 005396d5
    PUSH EAX                            ; 005396d8
    MOV EBX,dword ptr [0x00678a60]      ; 005396d9 | g_CEditorToolsPtr
    PUSH EBX                            ; 005396df | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 005396e0
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005396e5
    PUSH EAX                            ; 005396e8
    MOV ESI,dword ptr [0x00678a60]      ; 005396e9 | g_CEditorToolsPtr
    PUSH dword ptr [EBP + 0x4e]         ; 005396ef
    PUSH ESI                            ; 005396f2 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 ; 005396f3
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90(CEditorTools * this_ptr, int param2, CQuaternion4f * world_position, CQuaternion4f * label_offset, ...)
    ADD ESP,0x14                        ; 005396f8
    PUSH 0x0                            ; 005396fb
        ;   Label: LAB_005396fb
    PUSH 0x32758e4                      ; 005396fd | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 00539702
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    MOV EAX,[0x00679398]                ; 00539707 | g_WindowHeight
    ADD ESP,0x8                         ; 0053970c
    DEC EAX                             ; 0053970f
    PUSH EAX                            ; 00539710
    MOV EAX,[0x00679394]                ; 00539711 | g_WindowWidth
    DEC EAX                             ; 00539716
    PUSH EAX                            ; 00539717
    PUSH 0x0                            ; 00539718
    PUSH 0x0                            ; 0053971a
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 0053971c
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 00539721
    MOV EDI,dword ptr [EBP + 0x92]      ; 00539724
    PUSH EDI                            ; 0053972a
    CALL core_msnedit.cpp_FUN_0053c4f0  ; 0053972b
        ;   XREF to: 0053c4f0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053c4f0()
    MOV EDX,dword ptr [EDI + 0x2c]      ; 00539730
    ADD ESP,0x4                         ; 00539733
    TEST EDX,EDX                        ; 00539736
    JZ 0x00539751                       ; 00539738
        ;   XREF to: 00539751 (CONDITIONAL_JUMP)  ; LAB_00539751
    MOV ECX,dword ptr [0x02cf6a90]      ; 0053973a | g_MouseY
    PUSH ECX                            ; 00539740
    MOV EBX,dword ptr [0x02cf6a8c]      ; 00539741 | g_MouseX
    PUSH EBX                            ; 00539747
    PUSH EDX                            ; 00539748
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00539749
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0053974e
    FLD float ptr [0x02f7c540]          ; 00539751 | DAT_02f7c540
        ;   Label: LAB_00539751
    FLDZ                                ; 00539757
    FCOMPP                              ; 00539759
    FNSTSW AX                           ; 0053975b
    SAHF                                ; 0053975d
    JNC 0x005397c2                      ; 0053975e
        ;   XREF to: 005397c2 (CONDITIONAL_JUMP)  ; LAB_005397c2
    PUSH 0x0                            ; 00539760
    PUSH 0x0                            ; 00539762
    LEA EAX,[EBP + 0xfffffdde]          ; 00539764
    PUSH EAX                            ; 0053976a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053976b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EDI,dword ptr [0x02f7c53c]      ; 00539770 | DAT_02f7c53c
    ADD ESP,0xc                         ; 00539776
    TEST EDI,EDI                        ; 00539779
    JNZ 0x0053979a                      ; 0053977b
        ;   XREF to: 0053979a (CONDITIONAL_JUMP)  ; LAB_0053979a
    CMP dword ptr [0x02f7c548],0x0      ; 0053977d | g_CEdCheckInstance.checked_state
    JZ 0x0053a415                       ; 00539784
        ;   XREF to: 0053a415 (CONDITIONAL_JUMP)  ; LAB_0053a415
    PUSH 0xb                            ; 0053978a
    PUSH EDI                            ; 0053978c
    PUSH 0x63c431                       ; 0053978d | = "Virtual Director ENABLED"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00539792
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   Label: LAB_00539792
    ADD ESP,0xc                         ; 00539797
    MOV EAX,[0x0067b654]                ; 0053979a | g_CGamePtr
        ;   Label: LAB_0053979a
    FLD float ptr [EAX + 0x264]         ; 0053979f | g_CGameInstance.delta_time_float
    FSUBR float ptr [0x02f7c540]        ; 005397a5 | DAT_02f7c540
    FST float ptr [0x02f7c540]          ; 005397ab | DAT_02f7c540
    FLDZ                                ; 005397b1
    FCOMPP                              ; 005397b3
    FNSTSW AX                           ; 005397b5
    SAHF                                ; 005397b7
    JBE 0x005397c2                      ; 005397b8
        ;   XREF to: 005397c2 (CONDITIONAL_JUMP)  ; LAB_005397c2
    XOR EDX,EDX                         ; 005397ba
    MOV dword ptr [0x02f7c540],EDX      ; 005397bc | DAT_02f7c540
    MOV EAX,dword ptr [EBP + 0x92]      ; 005397c2
        ;   Label: LAB_005397c2
    CMP dword ptr [EAX + 0x24],0x0      ; 005397c8
    JZ 0x0053991f                       ; 005397cc
        ;   XREF to: 0053991f (CONDITIONAL_JUMP)  ; LAB_0053991f
    MOV EBX,0x3                         ; 005397d2
    MOV EDI,dword ptr [0x02f7c53c]      ; 005397d7 | DAT_02f7c53c
    MOV ESI,0xf3                        ; 005397dd
    TEST EDI,EDI                        ; 005397e2
    SETZ AL                             ; 005397e4
    AND EAX,0xff                        ; 005397e7
    PUSH EAX                            ; 005397ec
    PUSH 0x1                            ; 005397ed
    PUSH ESI                            ; 005397ef
    PUSH EBX                            ; 005397f0
    PUSH 0x63c464                       ; 005397f1 | = " StaticCam "
    CALL core_msnedit.cpp_FUN_00536cd0  ; 005397f6
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536cd0()
    ADD ESP,0x14                        ; 005397fb
    TEST EAX,EAX                        ; 005397fe
    JZ 0x0053980f                       ; 00539800
        ;   XREF to: 0053980f (CONDITIONAL_JUMP)  ; LAB_0053980f
    MOV EDX,0x1                         ; 00539802
    XOR EAX,EAX                         ; 00539807
    MOV dword ptr [EBP + 0x2a],EDX      ; 00539809
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053980c
    MOV ECX,dword ptr [0x02f7c53c]      ; 0053980f | DAT_02f7c53c
        ;   Label: LAB_0053980f
    ADD EBX,0x46                        ; 00539815
    CMP ECX,0x1                         ; 00539818
    SETZ AL                             ; 0053981b
    AND EAX,0xff                        ; 0053981e
    PUSH EAX                            ; 00539823
    PUSH 0x1                            ; 00539824
    PUSH ESI                            ; 00539826
    PUSH EBX                            ; 00539827
    PUSH 0x63c470                       ; 00539828 | = " CustomCam "
    CALL core_msnedit.cpp_FUN_00536cd0  ; 0053982d
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536cd0()
    ADD ESP,0x14                        ; 00539832
    TEST EAX,EAX                        ; 00539835
    JZ 0x00539840                       ; 00539837
        ;   XREF to: 00539840 (CONDITIONAL_JUMP)  ; LAB_00539840
    MOV dword ptr [EBP + 0x7a],0x1      ; 00539839
    MOV EDX,dword ptr [0x02f7c53c]      ; 00539840 | DAT_02f7c53c
        ;   Label: LAB_00539840
    ADD EBX,0x46                        ; 00539846
    CMP EDX,0x2                         ; 00539849
    SETZ AL                             ; 0053984c
    AND EAX,0xff                        ; 0053984f
    PUSH EAX                            ; 00539854
    PUSH 0x1                            ; 00539855
    PUSH ESI                            ; 00539857
    PUSH EBX                            ; 00539858
    PUSH 0x63c47c                       ; 00539859 | = " SlewCam "
    CALL core_msnedit.cpp_FUN_00536cd0  ; 0053985e
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536cd0()
    ADD ESP,0x14                        ; 00539863
    TEST EAX,EAX                        ; 00539866
    JZ 0x00539871                       ; 00539868
        ;   XREF to: 00539871 (CONDITIONAL_JUMP)  ; LAB_00539871
    MOV dword ptr [EBP + 0x7a],0x2      ; 0053986a
    MOV EDI,dword ptr [0x02f7c53c]      ; 00539871 | DAT_02f7c53c
        ;   Label: LAB_00539871
    ADD EBX,0x38                        ; 00539877
    CMP EDI,0x3                         ; 0053987a
    SETZ AL                             ; 0053987d
    AND EAX,0xff                        ; 00539880
    PUSH EAX                            ; 00539885
    PUSH 0x1                            ; 00539886
    PUSH ESI                            ; 00539888
    PUSH EBX                            ; 00539889
    PUSH 0x63c486                       ; 0053988a | = " 1stPersonCam "
    CALL core_msnedit.cpp_FUN_00536cd0  ; 0053988f
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536cd0()
    ADD ESP,0x14                        ; 00539894
    TEST EAX,EAX                        ; 00539897
    JZ 0x005398a2                       ; 00539899
        ;   XREF to: 005398a2 (CONDITIONAL_JUMP)  ; LAB_005398a2
    MOV dword ptr [EBP + 0x7a],0x3      ; 0053989b
    MOV EDX,dword ptr [0x02f7c53c]      ; 005398a2 | DAT_02f7c53c
        ;   Label: LAB_005398a2
    ADD EBX,0x5b                        ; 005398a8
    CMP EDX,0x4                         ; 005398ab
    SETZ AL                             ; 005398ae
    AND EAX,0xff                        ; 005398b1
    PUSH EAX                            ; 005398b6
    PUSH 0x1                            ; 005398b7
    PUSH ESI                            ; 005398b9
    PUSH EBX                            ; 005398ba
    PUSH 0x63c495                       ; 005398bb | = " SpotCam "
    CALL core_msnedit.cpp_FUN_00536cd0  ; 005398c0
        ;   XREF to: 00536cd0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_00536cd0()
    ADD ESP,0x14                        ; 005398c5
    TEST EAX,EAX                        ; 005398c8
    JZ 0x005398d3                       ; 005398ca
        ;   XREF to: 005398d3 (CONDITIONAL_JUMP)  ; LAB_005398d3
    MOV dword ptr [EBP + 0x7a],0x4      ; 005398cc
    CMP dword ptr [0x02f7c53c],0x0      ; 005398d3 | DAT_02f7c53c
        ;   Label: LAB_005398d3
    JNZ 0x0053991f                      ; 005398da
        ;   XREF to: 0053991f (CONDITIONAL_JUMP)  ; LAB_0053991f
    PUSH 0x63c49f                       ; 005398dc | = "Virtual Director"
    MOV EAX,[0x00679394]                ; 005398e1 | g_WindowWidth
    PUSH ESI                            ; 005398e6
    SUB EAX,0x8c                        ; 005398e7
    PUSH EAX                            ; 005398ec
    MOV EDI,0xff                        ; 005398ed
    PUSH 0x2f7c544                      ; 005398f2 | g_CEdCheckInstance
    MOV dword ptr [0x02f7c550],EDI      ; 005398f7 | g_CEdCheckInstance.coord_unk
    CALL shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 ; 005398fd
        ;   XREF to: 004a6a60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60(CEdCheck * this_ptr, int x_pos, int y_pos, char * checkbox_text)
    ADD ESP,0x10                        ; 00539902
    PUSH 0x2f7c544                      ; 00539905 | g_CEdCheckInstance
    CALL shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20 ; 0053990a
        ;   XREF to: 004a6d20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0053990f
    PUSH 0x2f7c544                      ; 00539912 | g_CEdCheckInstance
    CALL shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 ; 00539917
        ;   XREF to: 004a6c00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdCheck_render_FUN_004a6c00(CEdCheck * this_ptr)
    ADD ESP,0x4                         ; 0053991c
    MOV EAX,[0x0067a3d0]                ; 0053991f | g_CFireEffectInstance | g_CFireEffectPtr
        ;   Label: LAB_0053991f
    PUSH EAX                            ; 00539924 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0 ; 00539925
        ;   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0053992a
    MOV EDX,dword ptr [0x0067b9a0]      ; 0053992d | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 00539933 | g_CGoreInstance
    CALL core_gore.cpp_CGore_process_FUN_004ed9e0 ; 00539934
        ;   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_process_FUN_004ed9e0()
    MOV ECX,dword ptr [0x02f7c634]      ; 00539939 | DAT_02f7c634
    ADD ESP,0x4                         ; 0053993f
    TEST ECX,ECX                        ; 00539942
    JZ 0x00539955                       ; 00539944
        ;   XREF to: 00539955 (CONDITIONAL_JUMP)  ; LAB_00539955
    MOV EBX,dword ptr [0x00680d50]      ; 00539946 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 0053994c | g_CScriptInstance
    CALL core_script.cpp_FUN_005645d0   ; 0053994d
        ;   XREF to: 005645d0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005645d0()
    ADD ESP,0x4                         ; 00539952
    PUSH 0x0                            ; 00539955
        ;   Label: LAB_00539955
    PUSH 0x0                            ; 00539957
    PUSH 0x0                            ; 00539959
    MOV ESI,dword ptr [0x00678a60]      ; 0053995b | g_CEditorToolsPtr
    PUSH ESI                            ; 00539961 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920 ; 00539962
        ;   XREF to: 004a2920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
    MOV EDI,dword ptr [0x02f7c634]      ; 00539967 | DAT_02f7c634
    ADD ESP,0x10                        ; 0053996d
    TEST EDI,EDI                        ; 00539970
    JZ 0x00539982                       ; 00539972
        ;   XREF to: 00539982 (CONDITIONAL_JUMP)  ; LAB_00539982
    MOV EAX,[0x00680d50]                ; 00539974 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 00539979 | g_CScriptInstance
    CALL core_script.cpp_FUN_00566bc0   ; 0053997a
        ;   XREF to: 00566bc0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566bc0()
    ADD ESP,0x4                         ; 0053997f
    PUSH 0x0                            ; 00539982
        ;   Label: LAB_00539982
    MOV EDX,dword ptr [0x00678a60]      ; 00539984 | g_CEditorToolsPtr
    PUSH EDX                            ; 0053998a | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0053998b
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, bool use_clipping)
    ADD ESP,0x8                         ; 00539990
    PUSH 0x0                            ; 00539993
    PUSH 0x0                            ; 00539995
    PUSH 0x0                            ; 00539997
    MOV ECX,dword ptr [0x00678a60]      ; 00539999 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053999f | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920 ; 005399a0
        ;   XREF to: 004a2920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
    ADD ESP,0x10                        ; 005399a5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005399a8
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067b654]      ; 005399ad | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 005399b3 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 005399b4
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 005399b9
    MOV ESI,dword ptr [0x006810c8]      ; 005399bc | g_CDemonSetPtr
    PUSH ESI                            ; 005399c2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_005743e0 ; 005399c3
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_005743e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005399c8
    MOV EAX,[0x0067cf44]                ; 005399cb | g_CKeysPtr
    PUSH 0x1                            ; 005399d0
    MOV EBX,dword ptr [EAX]             ; 005399d2 | g_CKeysInstance
    PUSH EAX                            ; 005399d4 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 005399d5
    ADD ESP,0x8                         ; 005399d8
    TEST EAX,EAX                        ; 005399db
    JZ 0x005399fb                       ; 005399dd
        ;   XREF to: 005399fb (CONDITIONAL_JUMP)  ; LAB_005399fb
    PUSH 0x63c4b0                       ; 005399df | = "Exit editor?"
    MOV EDI,dword ptr [0x00678a60]      ; 005399e4 | g_CEditorToolsPtr
    PUSH EDI                            ; 005399ea | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 005399eb
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 005399f0
    TEST EAX,EAX                        ; 005399f3
    JNZ 0x00539e00                      ; 005399f5
        ;   XREF to: 00539e00 (CONDITIONAL_JUMP)  ; LAB_00539e00
    CMP dword ptr [0x02f7c634],0x0      ; 005399fb | DAT_02f7c634
        ;   Label: LAB_005399fb
    JNZ 0x0053a4cf                      ; 00539a02
        ;   XREF to: 0053a4cf (CONDITIONAL_JUMP)  ; LAB_0053a4cf
    CMP dword ptr [0x02f7c53c],0x4      ; 00539a08 | DAT_02f7c53c
    JNZ 0x00539c7c                      ; 00539a0f
        ;   XREF to: 00539c7c (CONDITIONAL_JUMP)  ; LAB_00539c7c
    MOV EAX,[0x0067b654]                ; 00539a15 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 00539a1a | g_CGameInstance.delta_time_float
    PUSH 0x38                           ; 00539a20
    MOV dword ptr [EBP + 0x52],EAX      ; 00539a22
    MOV dword ptr [EBP + 0x62],EAX      ; 00539a25
    MOV EAX,[0x0067cf44]                ; 00539a28 | g_CKeysPtr
    PUSH EAX                            ; 00539a2d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539a2e | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539a30
    ADD ESP,0x8                         ; 00539a32
    TEST EAX,EAX                        ; 00539a35
    JZ 0x0053a422                       ; 00539a37
        ;   XREF to: 0053a422 (CONDITIONAL_JUMP)  ; LAB_0053a422
    FLD float ptr [EBP + 0x52]          ; 00539a3d
    FMUL double ptr [0x0063c58c]        ; 00539a40 | DOUBLE_0063c58c
    FSTP float ptr [EBP + 0x62]         ; 00539a46
        ;   Label: LAB_00539a46
    FLD float ptr [EBP + 0x62]          ; 00539a49
        ;   Label: LAB_00539a49
    FMUL double ptr [0x0063c594]        ; 00539a4c | DOUBLE_0063c594
    FLD float ptr [EBP + 0x76]          ; 00539a52
    FMUL double ptr [0x0063c59c]        ; 00539a55 | DOUBLE_0063c59c
    FXCH                                ; 00539a5b
    FSTP float ptr [EBP + 0x5a]         ; 00539a5d
    FST float ptr [EBP + 0x72]          ; 00539a60
    FLD1                                ; 00539a63
    FCOMPP                              ; 00539a65
    FNSTSW AX                           ; 00539a67
    SAHF                                ; 00539a69
    JBE 0x00539a73                      ; 00539a6a
        ;   XREF to: 00539a73 (CONDITIONAL_JUMP)  ; LAB_00539a73
    MOV dword ptr [EBP + 0x72],0x3f800000 ; 00539a6c
    FLD float ptr [EBP + 0x72]          ; 00539a73
        ;   Label: LAB_00539a73
    FMUL float ptr [EBP + 0x62]         ; 00539a76
    FLD float ptr [EBP + 0x76]          ; 00539a79
    MOV EAX,dword ptr [EBP + 0x76]      ; 00539a7c
    FLD1                                ; 00539a7f
    MOV dword ptr [EBP + 0x6e],EAX      ; 00539a81
    FXCH ST2                            ; 00539a84
    FSTP float ptr [EBP + 0x72]         ; 00539a86
    FXCH                                ; 00539a89
    FCOMPP                              ; 00539a8b
    FNSTSW AX                           ; 00539a8d
    SAHF                                ; 00539a8f
    JBE 0x00539a99                      ; 00539a90
        ;   XREF to: 00539a99 (CONDITIONAL_JUMP)  ; LAB_00539a99
    MOV dword ptr [EBP + 0x6e],0x3f800000 ; 00539a92
    FLD float ptr [EBP + 0x6e]          ; 00539a99
        ;   Label: LAB_00539a99
    PUSH 0x4a                           ; 00539a9c
    MOV EAX,[0x0067cf44]                ; 00539a9e | g_CKeysPtr
    FMUL float ptr [EBP + 0x62]         ; 00539aa3
    PUSH EAX                            ; 00539aa6 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539aa7 | g_CKeysInstance
    FSTP float ptr [EBP + 0x6e]         ; 00539aa9
    CALL dword ptr [EBX]                ; 00539aac
    ADD ESP,0x8                         ; 00539aae
    TEST EAX,EAX                        ; 00539ab1
    JZ 0x00539abe                       ; 00539ab3
        ;   XREF to: 00539abe (CONDITIONAL_JUMP)  ; LAB_00539abe
    FLD float ptr [EBP + 0x12]          ; 00539ab5
    FADD float ptr [EBP + 0x5a]         ; 00539ab8
    FSTP float ptr [EBP + 0x12]         ; 00539abb
    PUSH 0x4e                           ; 00539abe
        ;   Label: LAB_00539abe
    MOV EAX,[0x0067cf44]                ; 00539ac0 | g_CKeysPtr
    PUSH EAX                            ; 00539ac5 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539ac6 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539ac8
    ADD ESP,0x8                         ; 00539aca
    TEST EAX,EAX                        ; 00539acd
    JZ 0x00539ada                       ; 00539acf
        ;   XREF to: 00539ada (CONDITIONAL_JUMP)  ; LAB_00539ada
    FLD float ptr [EBP + 0x12]          ; 00539ad1
    FSUB float ptr [EBP + 0x5a]         ; 00539ad4
    FSTP float ptr [EBP + 0x12]         ; 00539ad7
    PUSH 0x52                           ; 00539ada
        ;   Label: LAB_00539ada
    MOV EAX,[0x0067cf44]                ; 00539adc | g_CKeysPtr
    PUSH EAX                            ; 00539ae1 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539ae2 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539ae4
    ADD ESP,0x8                         ; 00539ae6
    TEST EAX,EAX                        ; 00539ae9
    JZ 0x00539af6                       ; 00539aeb
        ;   XREF to: 00539af6 (CONDITIONAL_JUMP)  ; LAB_00539af6
    FLD float ptr [EBP + 0x16]          ; 00539aed
    FADD float ptr [EBP + 0x5a]         ; 00539af0
    FSTP float ptr [EBP + 0x16]         ; 00539af3
    PUSH 0x53                           ; 00539af6
        ;   Label: LAB_00539af6
    MOV EAX,[0x0067cf44]                ; 00539af8 | g_CKeysPtr
    PUSH EAX                            ; 00539afd | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539afe | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b00
    ADD ESP,0x8                         ; 00539b02
    TEST EAX,EAX                        ; 00539b05
    JZ 0x00539b12                       ; 00539b07
        ;   XREF to: 00539b12 (CONDITIONAL_JUMP)  ; LAB_00539b12
    FLD float ptr [EBP + 0x16]          ; 00539b09
    FSUB float ptr [EBP + 0x5a]         ; 00539b0c
    FSTP float ptr [EBP + 0x16]         ; 00539b0f
    PUSH 0xd                            ; 00539b12
        ;   Label: LAB_00539b12
    MOV EAX,[0x0067cf44]                ; 00539b14 | g_CKeysPtr
    PUSH EAX                            ; 00539b19 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539b1a | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b1c
    ADD ESP,0x8                         ; 00539b1e
    TEST EAX,EAX                        ; 00539b21
    JZ 0x00539b2e                       ; 00539b23
        ;   XREF to: 00539b2e (CONDITIONAL_JUMP)  ; LAB_00539b2e
    FLD float ptr [EBP + 0x76]          ; 00539b25
    FSUB float ptr [EBP + 0x72]         ; 00539b28
    FSTP float ptr [EBP + 0x76]         ; 00539b2b
    PUSH 0xc                            ; 00539b2e
        ;   Label: LAB_00539b2e
    MOV EAX,[0x0067cf44]                ; 00539b30 | g_CKeysPtr
    PUSH EAX                            ; 00539b35 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539b36 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b38
    ADD ESP,0x8                         ; 00539b3a
    TEST EAX,EAX                        ; 00539b3d
    JZ 0x00539b4a                       ; 00539b3f
        ;   XREF to: 00539b4a (CONDITIONAL_JUMP)  ; LAB_00539b4a
    FLD float ptr [EBP + 0x76]          ; 00539b41
    FADD float ptr [EBP + 0x72]         ; 00539b44
    FSTP float ptr [EBP + 0x76]         ; 00539b47
    PUSH 0x29                           ; 00539b4a
        ;   Label: LAB_00539b4a
    MOV EAX,[0x0067cf44]                ; 00539b4c | g_CKeysPtr
    PUSH EAX                            ; 00539b51 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539b52 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b54
    ADD ESP,0x8                         ; 00539b56
    TEST EAX,EAX                        ; 00539b59
    JZ 0x00539c09                       ; 00539b5b
        ;   XREF to: 00539c09 (CONDITIONAL_JUMP)  ; LAB_00539c09
    PUSH 0x4b                           ; 00539b61
    MOV EAX,[0x0067cf44]                ; 00539b63 | g_CKeysPtr
    PUSH EAX                            ; 00539b68 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539b69 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b6b
    ADD ESP,0x8                         ; 00539b6d
    TEST EAX,EAX                        ; 00539b70
    JZ 0x00539b7d                       ; 00539b72
        ;   XREF to: 00539b7d (CONDITIONAL_JUMP)  ; LAB_00539b7d
    FLD float ptr [EBP + 0x66]          ; 00539b74
    FSUB float ptr [EBP + 0x6e]         ; 00539b77
    FSTP float ptr [EBP + 0x66]         ; 00539b7a
    PUSH 0x4d                           ; 00539b7d
        ;   Label: LAB_00539b7d
    MOV EAX,[0x0067cf44]                ; 00539b7f | g_CKeysPtr
    PUSH EAX                            ; 00539b84 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539b85 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539b87
    ADD ESP,0x8                         ; 00539b89
    TEST EAX,EAX                        ; 00539b8c
    JZ 0x00539b99                       ; 00539b8e
        ;   XREF to: 00539b99 (CONDITIONAL_JUMP)  ; LAB_00539b99
    FLD float ptr [EBP + 0x66]          ; 00539b90
    FADD float ptr [EBP + 0x6e]         ; 00539b93
    FSTP float ptr [EBP + 0x66]         ; 00539b96
    PUSH 0x10                           ; 00539b99
        ;   Label: LAB_00539b99
    MOV EAX,[0x0067cf44]                ; 00539b9b | g_CKeysPtr
    PUSH EAX                            ; 00539ba0 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539ba1 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539ba3
    ADD ESP,0x8                         ; 00539ba5
    TEST EAX,EAX                        ; 00539ba8
    JZ 0x00539bb5                       ; 00539baa
        ;   XREF to: 00539bb5 (CONDITIONAL_JUMP)  ; LAB_00539bb5
    FLD float ptr [EBP + 0x6a]          ; 00539bac
    FADD float ptr [EBP + 0x6e]         ; 00539baf
    FSTP float ptr [EBP + 0x6a]         ; 00539bb2
    PUSH 0x1e                           ; 00539bb5
        ;   Label: LAB_00539bb5
    MOV EAX,[0x0067cf44]                ; 00539bb7 | g_CKeysPtr
    PUSH EAX                            ; 00539bbc | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539bbd | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539bbf
    ADD ESP,0x8                         ; 00539bc1
    TEST EAX,EAX                        ; 00539bc4
    JZ 0x00539bd1                       ; 00539bc6
        ;   XREF to: 00539bd1 (CONDITIONAL_JUMP)  ; LAB_00539bd1
    FLD float ptr [EBP + 0x6a]          ; 00539bc8
    FSUB float ptr [EBP + 0x6e]         ; 00539bcb
    FSTP float ptr [EBP + 0x6a]         ; 00539bce
    PUSH 0x48                           ; 00539bd1
        ;   Label: LAB_00539bd1
    MOV EAX,[0x0067cf44]                ; 00539bd3 | g_CKeysPtr
    PUSH EAX                            ; 00539bd8 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539bd9 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539bdb
    ADD ESP,0x8                         ; 00539bdd
    TEST EAX,EAX                        ; 00539be0
    JZ 0x00539bed                       ; 00539be2
        ;   XREF to: 00539bed (CONDITIONAL_JUMP)  ; LAB_00539bed
    FLD float ptr [EBP + 0x76]          ; 00539be4
    FSUB float ptr [EBP + 0x72]         ; 00539be7
    FSTP float ptr [EBP + 0x76]         ; 00539bea
    PUSH 0x50                           ; 00539bed
        ;   Label: LAB_00539bed
    MOV EAX,[0x0067cf44]                ; 00539bef | g_CKeysPtr
    PUSH EAX                            ; 00539bf4 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539bf5 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539bf7
    ADD ESP,0x8                         ; 00539bf9
    TEST EAX,EAX                        ; 00539bfc
    JZ 0x00539c09                       ; 00539bfe
        ;   XREF to: 00539c09 (CONDITIONAL_JUMP)  ; LAB_00539c09
    FLD float ptr [EBP + 0x76]          ; 00539c00
    FADD float ptr [EBP + 0x72]         ; 00539c03
    FSTP float ptr [EBP + 0x76]         ; 00539c06
    FLD float ptr [EBP + 0x12]          ; 00539c09
        ;   Label: LAB_00539c09
    FCOMP double ptr [0x0063c5ac]       ; 00539c0c | DOUBLE_0063c5ac
    FNSTSW AX                           ; 00539c12
    SAHF                                ; 00539c14
    JNC 0x00539c1e                      ; 00539c15
        ;   XREF to: 00539c1e (CONDITIONAL_JUMP)  ; LAB_00539c1e
    MOV dword ptr [EBP + 0x12],0xbfc90fdb ; 00539c17
    FLD float ptr [EBP + 0x12]          ; 00539c1e
        ;   Label: LAB_00539c1e
    FCOMP double ptr [0x0063c594]       ; 00539c21 | DOUBLE_0063c594
    FNSTSW AX                           ; 00539c27
    SAHF                                ; 00539c29
    JBE 0x00539c33                      ; 00539c2a
        ;   XREF to: 00539c33 (CONDITIONAL_JUMP)  ; LAB_00539c33
    MOV dword ptr [EBP + 0x12],0x3fc90fdb ; 00539c2c
    FLD float ptr [EBP + 0x16]          ; 00539c33
        ;   Label: LAB_00539c33
    FCOMP double ptr [0x0063c5ac]       ; 00539c36 | DOUBLE_0063c5ac
    FNSTSW AX                           ; 00539c3c
    SAHF                                ; 00539c3e
    JNC 0x00539c4d                      ; 00539c3f
        ;   XREF to: 00539c4d (CONDITIONAL_JUMP)  ; LAB_00539c4d
    FLD float ptr [EBP + 0x16]          ; 00539c41
    FADD float ptr [0x0063c5b4]         ; 00539c44 | FLOAT_0063c5b4
    FSTP float ptr [EBP + 0x16]         ; 00539c4a
    FLD float ptr [EBP + 0x16]          ; 00539c4d
        ;   Label: LAB_00539c4d
    FCOMP double ptr [0x0063c594]       ; 00539c50 | DOUBLE_0063c594
    FNSTSW AX                           ; 00539c56
    SAHF                                ; 00539c58
    JBE 0x00539c67                      ; 00539c59
        ;   XREF to: 00539c67 (CONDITIONAL_JUMP)  ; LAB_00539c67
    FLD float ptr [EBP + 0x16]          ; 00539c5b
    FADD float ptr [0x0063c5b8]         ; 00539c5e | FLOAT_0063c5b8
    FSTP float ptr [EBP + 0x16]         ; 00539c64
    FLD float ptr [EBP + 0x76]          ; 00539c67
        ;   Label: LAB_00539c67
    FCOMP double ptr [0x0063c5a4]       ; 00539c6a | DOUBLE_0063c5a4
    FNSTSW AX                           ; 00539c70
    SAHF                                ; 00539c72
    JNC 0x00539c7c                      ; 00539c73
        ;   XREF to: 00539c7c (CONDITIONAL_JUMP)  ; LAB_00539c7c
    MOV dword ptr [EBP + 0x76],0x3f000000 ; 00539c75
    CMP dword ptr [0x02f7c53c],0x2      ; 00539c7c | DAT_02f7c53c
        ;   Label: LAB_00539c7c
    JNZ 0x0053a44b                      ; 00539c83
        ;   XREF to: 0053a44b (CONDITIONAL_JUMP)  ; LAB_0053a44b
    LEA EAX,[EBP + 0xffffff1e]          ; 00539c89
    PUSH EAX                            ; 00539c8f
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 00539c90
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 00539c95
        ;   Label: LAB_00539c95
    PUSH 0xe                            ; 00539c98
        ;   Label: LAB_00539c98
    MOV EAX,[0x0067cf44]                ; 00539c9a | g_CKeysPtr
    PUSH EAX                            ; 00539c9f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539ca0 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00539ca2
    ADD ESP,0x8                         ; 00539ca5
    TEST EAX,EAX                        ; 00539ca8
    JZ 0x00539cbb                       ; 00539caa
        ;   XREF to: 00539cbb (CONDITIONAL_JUMP)  ; LAB_00539cbb
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539cac
    PUSH EAX                            ; 00539cb2
    CALL core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 ; 00539cb3
        ;   XREF to: 0053c0b0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0()
    ADD ESP,0x4                         ; 00539cb8
    PUSH 0xf                            ; 00539cbb
        ;   Label: LAB_00539cbb
    MOV EAX,[0x0067cf44]                ; 00539cbd | g_CKeysPtr
    PUSH EAX                            ; 00539cc2 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539cc3 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00539cc5
    ADD ESP,0x8                         ; 00539cc8
    TEST EAX,EAX                        ; 00539ccb
    JZ 0x00539d07                       ; 00539ccd
        ;   XREF to: 00539d07 (CONDITIONAL_JUMP)  ; LAB_00539d07
    PUSH 0x2a                           ; 00539ccf
    MOV EAX,[0x0067cf44]                ; 00539cd1 | g_CKeysPtr
    PUSH EAX                            ; 00539cd6 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539cd7 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539cd9
    ADD ESP,0x8                         ; 00539cdb
    TEST EAX,EAX                        ; 00539cde
    JZ 0x0053a480                       ; 00539ce0
        ;   XREF to: 0053a480 (CONDITIONAL_JUMP)  ; LAB_0053a480
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539ce6
    MOV ESI,dword ptr [EAX + 0x28]      ; 00539cec
    PUSH ESI                            ; 00539cef
    PUSH EAX                            ; 00539cf0
    MOV EDI,EAX                         ; 00539cf1
    CALL core_msnedit.cpp_FUN_0053ca80  ; 00539cf3
        ;   XREF to: 0053ca80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053ca80()
    ADD ESP,0x8                         ; 00539cf8
    PUSH EAX                            ; 00539cfb
    MOV EAX,EDI                         ; 00539cfc
    PUSH EAX                            ; 00539cfe
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 00539cff
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
        ;   Label: LAB_00539cff
    ADD ESP,0x8                         ; 00539d04
    PUSH 0x3c                           ; 00539d07
        ;   Label: LAB_00539d07
    MOV EAX,[0x0067cf44]                ; 00539d09 | g_CKeysPtr
    PUSH EAX                            ; 00539d0e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539d0f | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00539d11
    ADD ESP,0x8                         ; 00539d14
    TEST EAX,EAX                        ; 00539d17
    JZ 0x00539d75                       ; 00539d19
        ;   XREF to: 00539d75 (CONDITIONAL_JUMP)  ; LAB_00539d75
    PUSH 0x2a                           ; 00539d1b
    MOV EAX,[0x0067cf44]                ; 00539d1d | g_CKeysPtr
    PUSH EAX                            ; 00539d22 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539d23 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539d25
    MOV EBX,dword ptr [0x00679394]      ; 00539d27 | g_WindowWidth
    MOV ESI,dword ptr [0x00679398]      ; 00539d2d | g_WindowHeight
    ADD ESP,0x8                         ; 00539d33
    DEC EBX                             ; 00539d36
    DEC ESI                             ; 00539d37
    TEST EAX,EAX                        ; 00539d38
    JZ 0x0053a4a0                       ; 00539d3a
        ;   XREF to: 0053a4a0 (CONDITIONAL_JUMP)  ; LAB_0053a4a0
    PUSH ESI                            ; 00539d40
    PUSH EBX                            ; 00539d41
    PUSH 0x0                            ; 00539d42
    PUSH 0x0                            ; 00539d44
    MOV ESI,dword ptr [0x00680d50]      ; 00539d46 | g_CScriptPtr
    PUSH ESI                            ; 00539d4c | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 00539d4d
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 00539d52
    PUSH 0x1                            ; 00539d55
    MOV EAX,[0x0067d550]                ; 00539d57 | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV EDI,0x2                         ; 00539d5c
    PUSH EAX                            ; 00539d61 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],EDI      ; 00539d62 | DAT_02f7c634
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 00539d68
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
        ;   Label: LAB_00539d68
    ADD ESP,0x8                         ; 00539d6d
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00539d70
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH 0x1d                           ; 00539d75
        ;   Label: LAB_00539d75
    MOV EAX,[0x0067cf44]                ; 00539d77 | g_CKeysPtr
    PUSH EAX                            ; 00539d7c | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539d7d | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539d7f
    ADD ESP,0x8                         ; 00539d81
    TEST EAX,EAX                        ; 00539d84
    JZ 0x00539dca                       ; 00539d86
        ;   XREF to: 00539dca (CONDITIONAL_JUMP)  ; LAB_00539dca
    PUSH 0x1f                           ; 00539d88
    MOV EAX,[0x0067cf44]                ; 00539d8a | g_CKeysPtr
    PUSH EAX                            ; 00539d8f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539d90 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00539d92
    ADD ESP,0x8                         ; 00539d95
    TEST EAX,EAX                        ; 00539d98
    JZ 0x00539dca                       ; 00539d9a
        ;   XREF to: 00539dca (CONDITIONAL_JUMP)  ; LAB_00539dca
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00539d9c
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539da1
    CMP byte ptr [EAX + 0x44],0x0       ; 00539da7
    JNZ 0x0053a5fa                      ; 00539dab
        ;   XREF to: 0053a5fa (CONDITIONAL_JUMP)  ; LAB_0053a5fa
    PUSH 0x63c4bd                       ; 00539db1 | = "No mission name!"
    MOV EDI,dword ptr [0x00678a60]      ; 00539db6 | g_CEditorToolsPtr
    PUSH EDI                            ; 00539dbc | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00539dbd
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00539dc2
        ;   Label: LAB_00539dc2
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00539dc5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00539dc5
    PUSH 0x1d                           ; 00539dca
        ;   Label: LAB_00539dca
    MOV EAX,[0x0067cf44]                ; 00539dcc | g_CKeysPtr
    PUSH EAX                            ; 00539dd1 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539dd2 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 00539dd4
    ADD ESP,0x8                         ; 00539dd6
    TEST EAX,EAX                        ; 00539dd9
    JZ 0x0053a64a                       ; 00539ddb
        ;   XREF to: 0053a64a (CONDITIONAL_JUMP)  ; LAB_0053a64a
    PUSH 0x19                           ; 00539de1
    MOV EAX,[0x0067cf44]                ; 00539de3 | g_CKeysPtr
    PUSH EAX                            ; 00539de8 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00539de9 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00539deb
    ADD ESP,0x8                         ; 00539dee
    TEST EAX,EAX                        ; 00539df1
    JZ 0x0053a64a                       ; 00539df3
        ;   XREF to: 0053a64a (CONDITIONAL_JUMP)  ; LAB_0053a64a
    MOV dword ptr [EBP + 0x2e],0x1      ; 00539df9
    MOV EDX,dword ptr [0x006810c8]      ; 00539e00 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_00539e00
    PUSH EDX                            ; 00539e06 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 00539e07
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00539e0c
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00539e0f
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [0x0067b654]      ; 00539e14 | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 00539e1a | g_CGameInstance
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 00539e1b
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    MOV EAX,[0x006810c8]                ; 00539e20 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 00539e25 | g_CDemonSetInstance.lighting_quality_mode
    ADD ESP,0x4                         ; 00539e2f
    MOV dword ptr [EAX + 0x15ac84],0x0  ; 00539e32 | g_CDemonSetInstance.unk_lighting_param1
    PUSH 0x680800                       ; 00539e3c | = "$$UNDO$$.TMP"
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 00539e41 | g_CDemonSetInstance.unk_lighting_param3
    MOV EBX,dword ptr [EBP + 0x2e]      ; 00539e4b
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 00539e4e | g_CDemonSetInstance.unk_lighting_param4
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 00539e58
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00539e5d
    TEST EBX,EBX                        ; 00539e60
    JZ 0x0053af19                       ; 00539e62
        ;   XREF to: 0053af19 (CONDITIONAL_JUMP)  ; LAB_0053af19
    MOV EAX,0x2                         ; 00539e68
    LEA ESP,[EBP + 0x7e]                ; 00539e6d
    POP EBP                             ; 00539e70
    POP EDI                             ; 00539e71
    POP ESI                             ; 00539e72
    POP EBX                             ; 00539e73
    RET                                 ; 00539e74
    MOV ECX,dword ptr [0x02db8848]      ; 00539e75 | g_CHeroPlaceholderClassInfo.name_hash
        ;   Label: LAB_00539e75
    PUSH ECX                            ; 00539e7b
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158] ; 00539e7c | g_CDemonSetInstance.actor_list_data[0]
    PUSH EDX                            ; 00539e83
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00539e84
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00539e89
    TEST EAX,EAX                        ; 00539e8c
    JZ 0x00539e9f                       ; 00539e8e
        ;   XREF to: 00539e9f (CONDITIONAL_JUMP)  ; LAB_00539e9f
    MOV ECX,dword ptr [EAX + 0x158]     ; 00539e90
    CMP EDI,ECX                         ; 00539e96
    JLE 0x00539e9f                      ; 00539e98
        ;   XREF to: 00539e9f (CONDITIONAL_JUMP)  ; LAB_00539e9f
    MOV EDI,ECX                         ; 00539e9a
    MOV dword ptr [EBP + 0x3e],EAX      ; 00539e9c
    INC EBX                             ; 00539e9f
        ;   Label: LAB_00539e9f
    ADD ESI,0x4                         ; 00539ea0
    JMP 0x00539291                      ; 00539ea3
        ;   XREF to: 00539291 (UNCONDITIONAL_JUMP)  ; LAB_00539291
    PUSH 0x63c399                       ; 00539ea8 | = "Custom cam (camera fixed, slew the ac..."
        ;   Label: caseD_1
    LEA EAX,[EBP + 0xfffffdde]          ; 00539ead
    PUSH EAX                            ; 00539eb3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00539eb4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EAX,[EBP + 0xffffff1e]          ; 00539eb9
    ADD ESP,0x8                         ; 00539ebf
    CMP EAX,0x32758e8                   ; 00539ec2 | DAT_032758e8
    JZ 0x00539eea                       ; 00539ec7
        ;   XREF to: 00539eea (CONDITIONAL_JUMP)  ; LAB_00539eea
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 00539ec9
    MOV [0x032758e8],EAX                ; 00539ecf | DAT_032758e8
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 00539ed4
    MOV [0x032758ec],EAX                ; 00539eda | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 00539edf
    MOV [0x032758f0],EAX                ; 00539ee5 | g_CDemonCameraInstance.base.position.z
    LEA EAX,[EBP + 0xffffff2a]          ; 00539eea
        ;   Label: LAB_00539eea
    PUSH EAX                            ; 00539ef0
    PUSH 0x32758f4                      ; 00539ef1 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00539ef6
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 00539efb
    ADD ESP,0x8                         ; 00539f01
    MOV [0x0327591c],EAX                ; 00539f04 | g_CDemonCameraInstance.base.projection_scale
    JMP 0x00539490                      ; 00539f09
        ;   XREF to: 00539490 (UNCONDITIONAL_JUMP)  ; LAB_00539490
    PUSH 0x63c3c3                       ; 00539f0e | = "Slew cam (actor fixed, slew the camera)"
        ;   Label: caseD_2
    LEA EAX,[EBP + 0xfffffdde]          ; 00539f13
    PUSH EAX                            ; 00539f19
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00539f1a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    LEA EAX,[EBP + 0xffffff1e]          ; 00539f1f
    ADD ESP,0x8                         ; 00539f25
    CMP EAX,0x32758e8                   ; 00539f28 | DAT_032758e8
    JZ 0x00539f50                       ; 00539f2d
        ;   XREF to: 00539f50 (CONDITIONAL_JUMP)  ; LAB_00539f50
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 00539f2f
    MOV [0x032758e8],EAX                ; 00539f35 | DAT_032758e8
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 00539f3a
    MOV [0x032758ec],EAX                ; 00539f40 | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 00539f45
    MOV [0x032758f0],EAX                ; 00539f4b | g_CDemonCameraInstance.base.position.z
    LEA EAX,[EBP + 0xffffff2a]          ; 00539f50
        ;   Label: LAB_00539f50
    PUSH EAX                            ; 00539f56
    PUSH 0x32758f4                      ; 00539f57 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00539f5c
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 00539f61
    ADD ESP,0x8                         ; 00539f67
    MOV [0x0327591c],EAX                ; 00539f6a | g_CDemonCameraInstance.base.projection_scale
    JMP 0x00539490                      ; 00539f6f
        ;   XREF to: 00539490 (UNCONDITIONAL_JUMP)  ; LAB_00539490
    PUSH 0x63c3eb                       ; 00539f74 | = "1st person cam"
        ;   Label: caseD_3
    LEA EAX,[EBP + 0xfffffdde]          ; 00539f79
    PUSH EAX                            ; 00539f7f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00539f80
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539f85
    MOV EDI,dword ptr [EAX + 0x28]      ; 00539f8b
    ADD ESP,0x8                         ; 00539f8e
    TEST EDI,EDI                        ; 00539f91
    JZ 0x0053a072                       ; 00539f93
        ;   XREF to: 0053a072 (CONDITIONAL_JUMP)  ; LAB_0053a072
    LEA EBX,[EBP + 0xffffff52]          ; 00539f99
    PUSH EBX                            ; 00539f9f
    MOV ESI,dword ptr [EDI + 0x154]     ; 00539fa0
    PUSH EDI                            ; 00539fa6
    CALL dword ptr [ESI + 0x14]         ; 00539fa7
    LEA EBX,[EAX + 0xc]                 ; 00539faa
    FLD float ptr [EAX]                 ; 00539fad
    FADD float ptr [EBX]                ; 00539faf
    FST float ptr [EBP + -0x66]         ; 00539fb1
    FLD float ptr [EAX + 0x4]           ; 00539fb4
    FADD float ptr [EBX + 0x4]          ; 00539fb7
    FXCH                                ; 00539fba
    FLD float ptr [0x0063c574]          ; 00539fbc | FLOAT_0063c574
    FXCH                                ; 00539fc2
    FMUL ST1                            ; 00539fc4
    FXCH ST2                            ; 00539fc6
    FST float ptr [EBP + -0x62]         ; 00539fc8
    FLD float ptr [EAX + 0x8]           ; 00539fcb
    FADD float ptr [EBX + 0x8]          ; 00539fce
    FXCH                                ; 00539fd1
    FMUL ST2                            ; 00539fd3
    FXCH                                ; 00539fd5
    FST float ptr [EBP + -0x5e]         ; 00539fd7
    FMULP ST2                           ; 00539fda
    MOV EAX,dword ptr [EBP + 0x92]      ; 00539fdc
    FXCH ST2                            ; 00539fe2
    FSTP float ptr [EBP + -0x72]        ; 00539fe4
    FXCH                                ; 00539fe7
    FSTP float ptr [EBP + -0x6e]        ; 00539fe9
    FSTP float ptr [EBP + -0x6a]        ; 00539fec
    MOV EAX,dword ptr [EAX + 0x28]      ; 00539fef
    FLD float ptr [EAX + 0x20]          ; 00539ff2
    FADD float ptr [EBP + -0x72]        ; 00539ff5
    ADD ESP,0x8                         ; 00539ff8
    FSTP float ptr [EBP + -0x1e]        ; 00539ffb
    FLD float ptr [EAX + 0x24]          ; 00539ffe
    FADD float ptr [EBP + -0x6e]        ; 0053a001
    LEA EBX,[EBP + 0xffffff1e]          ; 0053a004
    FSTP float ptr [EBP + -0x1a]        ; 0053a00a
    FLD float ptr [EAX + 0x28]          ; 0053a00d
    FADD float ptr [EBP + -0x6a]        ; 0053a010
    LEA EAX,[EBP + -0x1e]               ; 0053a013
    FSTP float ptr [EBP + -0x16]        ; 0053a016
    CMP EBX,EAX                         ; 0053a019
    JZ 0x0053a038                       ; 0053a01b
        ;   XREF to: 0053a038 (CONDITIONAL_JUMP)  ; LAB_0053a038
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0053a01d
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0053a020
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0053a026
    MOV dword ptr [EBP + 0xffffff22],EAX ; 0053a029
    MOV EAX,dword ptr [EBP + -0x16]     ; 0053a02f
    MOV dword ptr [EBP + 0xffffff26],EAX ; 0053a032
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a038
        ;   Label: LAB_0053a038
    MOV EBX,dword ptr [EBX + 0x28]      ; 0053a03e
    LEA EAX,[EBP + 0xffffff2a]          ; 0053a041
    ADD EBX,0x30                        ; 0053a047
    CMP EAX,EBX                         ; 0053a04a
    JZ 0x0053a068                       ; 0053a04c
        ;   XREF to: 0053a068 (CONDITIONAL_JUMP)  ; LAB_0053a068
    MOV EAX,dword ptr [EBX]             ; 0053a04e
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 0053a050
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053a056
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 0053a059
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053a05f
    MOV dword ptr [EBP + 0xffffff32],EAX ; 0053a062
    MOV dword ptr [EBP + 0xffffff36],0x41e00000 ; 0053a068
        ;   Label: LAB_0053a068
    LEA EAX,[EBP + 0xffffff1e]          ; 0053a072
        ;   Label: LAB_0053a072
    CMP EAX,0x32758e8                   ; 0053a078 | DAT_032758e8
    JZ 0x0053a0a0                       ; 0053a07d
        ;   XREF to: 0053a0a0 (CONDITIONAL_JUMP)  ; LAB_0053a0a0
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 0053a07f
    MOV [0x032758e8],EAX                ; 0053a085 | DAT_032758e8
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 0053a08a
    MOV [0x032758ec],EAX                ; 0053a090 | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0053a095
    MOV [0x032758f0],EAX                ; 0053a09b | g_CDemonCameraInstance.base.position.z
    LEA EAX,[EBP + 0xffffff2a]          ; 0053a0a0
        ;   Label: LAB_0053a0a0
    PUSH EAX                            ; 0053a0a6
    PUSH 0x32758f4                      ; 0053a0a7 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0053a0ac
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 0053a0b1
    ADD ESP,0x8                         ; 0053a0b7
    MOV [0x0327591c],EAX                ; 0053a0ba | g_CDemonCameraInstance.base.projection_scale
    JMP 0x00539490                      ; 0053a0bf
        ;   XREF to: 00539490 (UNCONDITIONAL_JUMP)  ; LAB_00539490
    PUSH 0x63c3fa                       ; 0053a0c4 | = "Chase/spot cam"
        ;   Label: caseD_4
    LEA EAX,[EBP + 0xfffffdde]          ; 0053a0c9
    PUSH EAX                            ; 0053a0cf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053a0d0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a0d5
    MOV EBX,dword ptr [EAX + 0x28]      ; 0053a0db
    ADD ESP,0x8                         ; 0053a0de
    TEST EBX,EBX                        ; 0053a0e1
    JZ 0x0053a240                       ; 0053a0e3
        ;   XREF to: 0053a240 (CONDITIONAL_JUMP)  ; LAB_0053a240
    LEA EAX,[EBP + 0xffffff2a]          ; 0053a0e9
    LEA EBX,[EBP + 0x12]                ; 0053a0ef
    CMP EAX,EBX                         ; 0053a0f2
    JZ 0x0053a111                       ; 0053a0f4
        ;   XREF to: 0053a111 (CONDITIONAL_JUMP)  ; LAB_0053a111
    MOV EAX,dword ptr [EBP + 0x12]      ; 0053a0f6
    MOV dword ptr [EBP + 0xffffff2a],EAX ; 0053a0f9
    MOV EAX,dword ptr [EBP + 0x16]      ; 0053a0ff
    MOV dword ptr [EBP + 0xffffff2e],EAX ; 0053a102
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0053a108
    MOV dword ptr [EBP + 0xffffff32],EAX ; 0053a10b
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a111
        ;   Label: LAB_0053a111
    MOV EAX,dword ptr [EAX + 0x28]      ; 0053a117
    FLD float ptr [EBP + 0xffffff2e]    ; 0053a11a
    FADD float ptr [EAX + 0x34]         ; 0053a120
    LEA EAX,[EBP + 0xffffff2a]          ; 0053a123
    PUSH EAX                            ; 0053a129
    LEA EAX,[EBP + 0xfffffef6]          ; 0053a12a
    LEA ESI,[EBP + 0xffffff3a]          ; 0053a130
    PUSH EAX                            ; 0053a136
    FSTP float ptr [EBP + 0xffffff2e]   ; 0053a137
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0053a13d
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBP + 0x76]          ; 0053a142
    MOV EAX,dword ptr [EBP + 0x66]      ; 0053a145
    FCHS                                ; 0053a148
    MOV dword ptr [EBP + -0x6],EAX      ; 0053a14a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0053a14d
    FSTP float ptr [EBP + 0x26]         ; 0053a150
    MOV dword ptr [EBP + -0x2],EAX      ; 0053a153
    MOV EAX,dword ptr [EBP + 0x26]      ; 0053a156
    ADD ESP,0x8                         ; 0053a159
    MOV dword ptr [EBP + 0x2],EAX       ; 0053a15c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a15f
    PUSH ESI                            ; 0053a165
    MOV EAX,dword ptr [EAX + 0x28]      ; 0053a166
    PUSH EAX                            ; 0053a169
    MOV EBX,dword ptr [EAX + 0x154]     ; 0053a16a
    CALL dword ptr [EBX + 0x14]         ; 0053a170
    LEA EBX,[EAX + 0xc]                 ; 0053a173
    FLD float ptr [EAX]                 ; 0053a176
    FADD float ptr [EBX]                ; 0053a178
    FST float ptr [EBP + -0x5a]         ; 0053a17a
    FLD float ptr [EAX + 0x4]           ; 0053a17d
    FADD float ptr [EBX + 0x4]          ; 0053a180
    FXCH                                ; 0053a183
    FLD float ptr [0x0063c574]          ; 0053a185 | FLOAT_0063c574
    FXCH                                ; 0053a18b
    FMUL ST1                            ; 0053a18d
    FXCH ST2                            ; 0053a18f
    FST float ptr [EBP + -0x56]         ; 0053a191
    FLD float ptr [EAX + 0x8]           ; 0053a194
    FADD float ptr [EBX + 0x8]          ; 0053a197
    FXCH                                ; 0053a19a
    FMUL ST2                            ; 0053a19c
    FXCH                                ; 0053a19e
    FST float ptr [EBP + -0x52]         ; 0053a1a0
    FMULP ST2                           ; 0053a1a3
    ADD ESP,0x8                         ; 0053a1a5
    LEA EAX,[EBP + -0x6]                ; 0053a1a8
    FXCH ST2                            ; 0053a1ab
    FSTP float ptr [EBP + -0x42]        ; 0053a1ad
    PUSH EAX                            ; 0053a1b0
    LEA EAX,[EBP + -0x12]               ; 0053a1b1
    FXCH                                ; 0053a1b4
    FSTP float ptr [EBP + -0x3e]        ; 0053a1b6
    PUSH EAX                            ; 0053a1b9
    LEA EAX,[EBP + 0xfffffef6]          ; 0053a1ba
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a1c0
    PUSH EAX                            ; 0053a1c6
    FSTP float ptr [EBP + -0x3a]        ; 0053a1c7
    MOV EBX,dword ptr [EBX + 0x28]      ; 0053a1ca
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0053a1cd
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 0053a1d2
    FADD float ptr [EBX + 0x20]         ; 0053a1d4
    ADD ESP,0xc                         ; 0053a1d7
    FST float ptr [EBP + 0x6]           ; 0053a1da
    FLD float ptr [EAX + 0x4]           ; 0053a1dd
    FADD float ptr [EBX + 0x24]         ; 0053a1e0
    FXCH                                ; 0053a1e3
    FADD float ptr [EBP + -0x42]        ; 0053a1e5
    FXCH                                ; 0053a1e8
    FST float ptr [EBP + 0xa]           ; 0053a1ea
    FLD float ptr [EAX + 0x8]           ; 0053a1ed
    LEA EAX,[EBP + -0x2a]               ; 0053a1f0
    FADD float ptr [EBX + 0x28]         ; 0053a1f3
    FXCH                                ; 0053a1f6
    FADD float ptr [EBP + -0x3e]        ; 0053a1f8
    FXCH                                ; 0053a1fb
    FSTP float ptr [EBP + 0xe]          ; 0053a1fd
    FXCH                                ; 0053a200
    FSTP float ptr [EBP + -0x2a]        ; 0053a202
    FSTP float ptr [EBP + -0x26]        ; 0053a205
    FLD float ptr [EBP + 0xe]           ; 0053a208
    FADD float ptr [EBP + -0x3a]        ; 0053a20b
    LEA EBX,[EBP + 0xffffff1e]          ; 0053a20e
    FSTP float ptr [EBP + -0x22]        ; 0053a214
    CMP EBX,EAX                         ; 0053a217
    JZ 0x0053a236                       ; 0053a219
        ;   XREF to: 0053a236 (CONDITIONAL_JUMP)  ; LAB_0053a236
    MOV EAX,dword ptr [EBP + -0x2a]     ; 0053a21b
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0053a21e
    MOV EAX,dword ptr [EBP + -0x26]     ; 0053a224
    MOV dword ptr [EBP + 0xffffff22],EAX ; 0053a227
    MOV EAX,dword ptr [EBP + -0x22]     ; 0053a22d
    MOV dword ptr [EBP + 0xffffff26],EAX ; 0053a230
    MOV dword ptr [EBP + 0xffffff36],0x41e00000 ; 0053a236
        ;   Label: LAB_0053a236
    LEA EAX,[EBP + 0xffffff1e]          ; 0053a240
        ;   Label: LAB_0053a240
    CMP EAX,0x32758e8                   ; 0053a246 | DAT_032758e8
    JZ 0x0053a26e                       ; 0053a24b
        ;   XREF to: 0053a26e (CONDITIONAL_JUMP)  ; LAB_0053a26e
    MOV EAX,dword ptr [EBP + 0xffffff1e] ; 0053a24d
    MOV [0x032758e8],EAX                ; 0053a253 | DAT_032758e8
    MOV EAX,dword ptr [EBP + 0xffffff22] ; 0053a258
    MOV [0x032758ec],EAX                ; 0053a25e | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + 0xffffff26] ; 0053a263
    MOV [0x032758f0],EAX                ; 0053a269 | g_CDemonCameraInstance.base.position.z
    LEA EAX,[EBP + 0xffffff2a]          ; 0053a26e
        ;   Label: LAB_0053a26e
    PUSH EAX                            ; 0053a274
    PUSH 0x32758f4                      ; 0053a275 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0053a27a
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 0053a27f
    ADD ESP,0x8                         ; 0053a285
    MOV [0x0327591c],EAX                ; 0053a288 | g_CDemonCameraInstance.base.projection_scale
    JMP 0x00539490                      ; 0053a28d
        ;   XREF to: 00539490 (UNCONDITIONAL_JUMP)  ; LAB_00539490
    MOV EDX,0x63c409                    ; 0053a292 | = "..\\core\\msnedit.cpp"
        ;   Label: default
    MOV ECX,0x595                       ; 0053a297
    PUSH 0x63c41d                       ; 0053a29c | = "Invalid cameraMode!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0053a2a1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0053a2a7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053a2ad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053a2b2
    JMP 0x00539490                      ; 0053a2b5
        ;   XREF to: 00539490 (UNCONDITIONAL_JUMP)  ; LAB_00539490
    MOV EAX,dword ptr [EBP + 0x32]      ; 0053a2ba
        ;   Label: LAB_0053a2ba
    MOV [0x03276acc],EAX                ; 0053a2bd | g_CDemonCameraInstance.corona_blend_factor
    MOV EAX,[0x006810c8]                ; 0053a2c2 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],ECX  ; 0053a2c7 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac84],ECX  ; 0053a2cd | g_CDemonSetInstance.unk_lighting_param1
    JMP 0x005394ec                      ; 0053a2d3
        ;   XREF to: 005394ec (UNCONDITIONAL_JUMP)  ; LAB_005394ec
    MOV EAX,[0x006810c8]                ; 0053a2d8 | g_CDemonSetPtr
        ;   Label: LAB_0053a2d8
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 0053a2dd | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 0053a2e7 | g_CDemonSetInstance.unk_lighting_param3
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0053a2f1 | g_CDemonSetInstance.unk_lighting_param4
    MOV EAX,[0x00680810]                ; 0053a2fb | g_DynamicRenderMode
    MOV [0x03277d14],EAX                ; 0053a300 | g_CDemonRaytraceInstance
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a305
    CMP dword ptr [EAX + 0x24],0x0      ; 0053a30b
    JNZ 0x0053a316                      ; 0053a30f
        ;   XREF to: 0053a316 (CONDITIONAL_JUMP)  ; LAB_0053a316
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053a311
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0053a316
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   Label: LAB_0053a316
    PUSH 0x1                            ; 0053a31b
    PUSH 0x32758e4                      ; 0053a31d | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 0053a322
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0053a327
    PUSH 0x0                            ; 0053a32a
    MOV ESI,dword ptr [0x006810c8]      ; 0053a32c | g_CDemonSetPtr
    PUSH 0x43160000                     ; 0053a332
    PUSH ESI                            ; 0053a337 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0053a338
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0053a33d
    PUSH -0x1                           ; 0053a340
    MOV EDI,dword ptr [0x006810c8]      ; 0053a342 | g_CDemonSetPtr
    PUSH EDI                            ; 0053a348 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056fbd0 ; 0053a349
        ;   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fbd0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0053a34e
    MOV EAX,[0x006810c8]                ; 0053a351 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0053a356 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056cd60 ; 0053a357
        ;   XREF to: 0056cd60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056cd60(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053a35c
    MOV EDX,dword ptr [0x006810c8]      ; 0053a35f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0053a365 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056cf00 ; 0053a366
        ;   XREF to: 0056cf00 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056cf00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053a36b
    MOV ECX,dword ptr [0x0067a3d0]      ; 0053a36e | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 0053a374 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_render_FUN_004c7180 ; 0053a375
        ;   XREF to: 004c7180 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0053a37a
    MOV EBX,dword ptr [0x0067b9a0]      ; 0053a37d | g_CGoreInstance | g_CGorePtr
    PUSH EBX                            ; 0053a383 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ed7b0 ; 0053a384
        ;   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
    ADD ESP,0x4                         ; 0053a389
    PUSH 0x1                            ; 0053a38c
    MOV ESI,dword ptr [0x006703ec]      ; 0053a38e | g_CDemonRendererPtr
    PUSH ESI                            ; 0053a394 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0053a395
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053a39a
    PUSH 0x0                            ; 0053a39d
    PUSH 0x32758e4                      ; 0053a39f | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 0053a3a4
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 0053a3a9
    JMP 0x00539549                      ; 0053a3ac
        ;   XREF to: 00539549 (UNCONDITIONAL_JUMP)  ; LAB_00539549
    MOV dword ptr [EBP + 0x7a],EDI      ; 0053a3b1
        ;   Label: LAB_0053a3b1
    JMP 0x00539605                      ; 0053a3b4
        ;   XREF to: 00539605 (UNCONDITIONAL_JUMP)  ; LAB_00539605
    CMP dword ptr [0x02cf2b00],0x0      ; 0053a3b9 | g_ActiveButton
        ;   Label: LAB_0053a3b9
    JNZ 0x00539622                      ; 0053a3c0
        ;   XREF to: 00539622 (CONDITIONAL_JUMP)  ; LAB_00539622
    MOV ESI,dword ptr [0x02cf6a90]      ; 0053a3c6 | g_MouseY
    PUSH ESI                            ; 0053a3cc
    MOV EDI,dword ptr [0x02cf6a8c]      ; 0053a3cd | g_MouseX
    PUSH EDI                            ; 0053a3d3
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a3d4
    PUSH EAX                            ; 0053a3da
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a3db
    CALL core_msnedit.cpp_FUN_0053c340  ; 0053a3e1
        ;   XREF to: 0053c340 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053c340()
    ADD ESP,0xc                         ; 0053a3e6
    MOV dword ptr [EBX + 0x2c],EAX      ; 0053a3e9
    TEST EAX,EAX                        ; 0053a3ec
    JZ 0x0053962f                       ; 0053a3ee
        ;   XREF to: 0053962f (CONDITIONAL_JUMP)  ; LAB_0053962f
    MOV ECX,dword ptr [0x00678a60]      ; 0053a3f4 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053a3fa | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0053a3fb
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0053a400
    PUSH EAX                            ; 0053a403
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0053a404
    PUSH EBX                            ; 0053a407
    CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940 ; 0053a408
        ;   XREF to: 0040d940 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor * this_ptr, uint32_t color)
    ADD ESP,0x8                         ; 0053a40d
    JMP 0x0053962f                      ; 0053a410
        ;   XREF to: 0053962f (UNCONDITIONAL_JUMP)  ; LAB_0053962f
    PUSH 0xb                            ; 0053a415
        ;   Label: LAB_0053a415
    PUSH EDI                            ; 0053a417
    PUSH 0x63c44a                       ; 0053a418 | = "Virtual Director DISABLED"
    JMP 0x00539792                      ; 0053a41d
        ;   XREF to: 00539792 (UNCONDITIONAL_JUMP)  ; LAB_00539792
    PUSH 0x2a                           ; 0053a422
        ;   Label: LAB_0053a422
    MOV EAX,[0x0067cf44]                ; 0053a424 | g_CKeysPtr
    PUSH EAX                            ; 0053a429 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a42a | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a42c
    ADD ESP,0x8                         ; 0053a42e
    TEST EAX,EAX                        ; 0053a431
    JZ 0x00539a49                       ; 0053a433
        ;   XREF to: 00539a49 (CONDITIONAL_JUMP)  ; LAB_00539a49
    FLD float ptr [EBP + 0x52]          ; 0053a439
    FLD ST0                             ; 0053a43c
    FMUL double ptr [0x0063c584]        ; 0053a43e | DOUBLE_0063c584
    FSTP ST1                            ; 0053a444
    JMP 0x00539a46                      ; 0053a446
        ;   XREF to: 00539a46 (UNCONDITIONAL_JUMP)  ; LAB_00539a46
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a44b
        ;   Label: LAB_0053a44b
    MOV ESI,dword ptr [EAX + 0x28]      ; 0053a451
    TEST ESI,ESI                        ; 0053a454
    JZ 0x00539c98                       ; 0053a456
        ;   XREF to: 00539c98 (CONDITIONAL_JUMP)  ; LAB_00539c98
    PUSH ESI                            ; 0053a45c
    MOV EBX,dword ptr [ESI + 0x154]     ; 0053a45d
    CALL dword ptr [EBX + 0xd0]         ; 0053a463
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a469
    ADD ESP,0x4                         ; 0053a46f
    MOV EDI,dword ptr [EAX + 0x28]      ; 0053a472
    PUSH EDI                            ; 0053a475
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0053a476
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    JMP 0x00539c95                      ; 0053a47b
        ;   XREF to: 00539c95 (UNCONDITIONAL_JUMP)  ; LAB_00539c95
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a480
        ;   Label: LAB_0053a480
    MOV EDX,dword ptr [EAX + 0x28]      ; 0053a486
    PUSH EDX                            ; 0053a489
    PUSH EAX                            ; 0053a48a
    CALL core_msnedit.cpp_FUN_0053ca30  ; 0053a48b
        ;   XREF to: 0053ca30 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053ca30()
    ADD ESP,0x8                         ; 0053a490
    PUSH EAX                            ; 0053a493
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a494
    PUSH EBX                            ; 0053a49a
    JMP 0x00539cff                      ; 0053a49b
        ;   XREF to: 00539cff (UNCONDITIONAL_JUMP)  ; LAB_00539cff
    PUSH ESI                            ; 0053a4a0
        ;   Label: LAB_0053a4a0
    PUSH EBX                            ; 0053a4a1
    PUSH 0x101                          ; 0053a4a2
    PUSH EAX                            ; 0053a4a7
    MOV EDX,dword ptr [0x00680d50]      ; 0053a4a8 | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 0053a4ae | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053a4af
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053a4b4
    MOV ECX,0x1                         ; 0053a4b7
    PUSH ECX                            ; 0053a4bc
    MOV EBX,dword ptr [0x0067d550]      ; 0053a4bd | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EBX                            ; 0053a4c3 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],ECX      ; 0053a4c4 | DAT_02f7c634
    JMP 0x00539d68                      ; 0053a4ca
        ;   XREF to: 00539d68 (UNCONDITIONAL_JUMP)  ; LAB_00539d68
    MOV EDX,dword ptr [0x00680d50]      ; 0053a4cf | g_CScriptInstance | g_CScriptPtr
        ;   Label: LAB_0053a4cf
    PUSH EDX                            ; 0053a4d5 | g_CScriptInstance
    CALL core_script.cpp_CScript_Unk20_FUN_00565130 ; 0053a4d6
        ;   XREF to: 00565130 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_Unk20_FUN_00565130()
    ADD ESP,0x4                         ; 0053a4db
    MOV EAX,[0x0067cf44]                ; 0053a4de | g_CKeysPtr
    PUSH 0x3c                           ; 0053a4e3
    MOV EBX,dword ptr [EAX]             ; 0053a4e5 | g_CKeysInstance
    PUSH EAX                            ; 0053a4e7 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a4e8
    ADD ESP,0x8                         ; 0053a4eb
    TEST EAX,EAX                        ; 0053a4ee
    JZ 0x00539d75                       ; 0053a4f0
        ;   XREF to: 00539d75 (CONDITIONAL_JUMP)  ; LAB_00539d75
    CMP dword ptr [0x02f7c634],0x1      ; 0053a4f6 | DAT_02f7c634
    JNZ 0x0053a57d                      ; 0053a4fd
        ;   XREF to: 0053a57d (CONDITIONAL_JUMP)  ; LAB_0053a57d
    PUSH 0x2a                           ; 0053a503
    MOV EAX,[0x0067cf44]                ; 0053a505 | g_CKeysPtr
    PUSH EAX                            ; 0053a50a | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a50b | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a50d
    MOV EBX,dword ptr [0x00679394]      ; 0053a50f | g_WindowWidth
    MOV ESI,dword ptr [0x00679398]      ; 0053a515 | g_WindowHeight
    ADD ESP,0x8                         ; 0053a51b
    DEC EBX                             ; 0053a51e
    DEC ESI                             ; 0053a51f
    TEST EAX,EAX                        ; 0053a520
    JZ 0x0053a551                       ; 0053a522
        ;   XREF to: 0053a551 (CONDITIONAL_JUMP)  ; LAB_0053a551
    PUSH ESI                            ; 0053a524
    PUSH EBX                            ; 0053a525
    PUSH 0x101                          ; 0053a526
    PUSH 0x0                            ; 0053a52b
    MOV EAX,[0x00680d50]                ; 0053a52d | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 0053a532 | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053a533
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053a538
    PUSH 0x1                            ; 0053a53b
    MOV ECX,dword ptr [0x0067d550]      ; 0053a53d | g_CDemonMissionInstance | g_CDemonMissionPtr
    XOR EDX,EDX                         ; 0053a543
    PUSH ECX                            ; 0053a545 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],EDX      ; 0053a546 | DAT_02f7c634
    JMP 0x00539d68                      ; 0053a54c
        ;   XREF to: 00539d68 (UNCONDITIONAL_JUMP)  ; LAB_00539d68
    PUSH ESI                            ; 0053a551
        ;   Label: LAB_0053a551
    PUSH EBX                            ; 0053a552
    PUSH EAX                            ; 0053a553
    PUSH EAX                            ; 0053a554
    MOV EBX,dword ptr [0x00680d50]      ; 0053a555 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 0053a55b | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053a55c
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053a561
    PUSH 0x1                            ; 0053a564
    MOV EDI,dword ptr [0x0067d550]      ; 0053a566 | g_CDemonMissionPtr
    MOV ESI,0x2                         ; 0053a56c
    PUSH EDI                            ; 0053a571 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],ESI      ; 0053a572 | DAT_02f7c634
    JMP 0x00539d68                      ; 0053a578
        ;   XREF to: 00539d68 (UNCONDITIONAL_JUMP)  ; LAB_00539d68
    PUSH 0x2a                           ; 0053a57d
        ;   Label: LAB_0053a57d
    MOV EAX,[0x0067cf44]                ; 0053a57f | g_CKeysPtr
    PUSH EAX                            ; 0053a584 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a585 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a587
    MOV ESI,dword ptr [0x00679394]      ; 0053a589 | g_WindowWidth
    MOV EBX,dword ptr [0x00679398]      ; 0053a58f | g_WindowHeight
    ADD ESP,0x8                         ; 0053a595
    DEC ESI                             ; 0053a598
    DEC EBX                             ; 0053a599
    TEST EAX,EAX                        ; 0053a59a
    JZ 0x0053a5cd                       ; 0053a59c
        ;   XREF to: 0053a5cd (CONDITIONAL_JUMP)  ; LAB_0053a5cd
    PUSH EBX                            ; 0053a59e
    PUSH ESI                            ; 0053a59f
    PUSH 0x101                          ; 0053a5a0
    PUSH 0x0                            ; 0053a5a5
    MOV EAX,[0x00680d50]                ; 0053a5a7 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 0053a5ac | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053a5ad
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053a5b2
    MOV EDX,0x1                         ; 0053a5b5
    PUSH EDX                            ; 0053a5ba
    MOV ECX,dword ptr [0x0067d550]      ; 0053a5bb | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 0053a5c1 | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],EDX      ; 0053a5c2 | DAT_02f7c634
    JMP 0x00539d68                      ; 0053a5c8
        ;   XREF to: 00539d68 (UNCONDITIONAL_JUMP)  ; LAB_00539d68
    PUSH EBX                            ; 0053a5cd
        ;   Label: LAB_0053a5cd
    PUSH ESI                            ; 0053a5ce
    PUSH 0x101                          ; 0053a5cf
    PUSH EAX                            ; 0053a5d4
    MOV EBX,dword ptr [0x00680d50]      ; 0053a5d5 | g_CScriptInstance | g_CScriptPtr
    PUSH EBX                            ; 0053a5db | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053a5dc
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053a5e1
    PUSH 0x1                            ; 0053a5e4
    MOV EDI,dword ptr [0x0067d550]      ; 0053a5e6 | g_CDemonMissionPtr
    XOR ESI,ESI                         ; 0053a5ec
    PUSH EDI                            ; 0053a5ee | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],ESI      ; 0053a5ef | DAT_02f7c634
    JMP 0x00539d68                      ; 0053a5f5
        ;   XREF to: 00539d68 (UNCONDITIONAL_JUMP)  ; LAB_00539d68
    MOV EDX,dword ptr [EBP + 0x42]      ; 0053a5fa
        ;   Label: LAB_0053a5fa
    PUSH EDX                            ; 0053a5fd
    PUSH 0x63c4ce                       ; 0053a5fe | = "%s.msn"
    LEA EAX,[EBP + 0xfffffcda]          ; 0053a603
    PUSH EAX                            ; 0053a609
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053a60a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053a60f
    MOV ECX,dword ptr [EBP + 0x42]      ; 0053a612
    PUSH ECX                            ; 0053a615
    PUSH 0x63c4d5                       ; 0053a616 | = "Save mission to %s.msn"
    MOV EBX,dword ptr [0x00678a60]      ; 0053a61b | g_CEditorToolsPtr
    PUSH EBX                            ; 0053a621 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 0053a622
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 0053a627
    TEST EAX,EAX                        ; 0053a62a
    JZ 0x00539dc5                       ; 0053a62c
        ;   XREF to: 00539dc5 (CONDITIONAL_JUMP)  ; LAB_00539dc5
    LEA EAX,[EBP + 0xfffffcda]          ; 0053a632
    PUSH EAX                            ; 0053a638
    MOV ESI,dword ptr [EBP + 0x92]      ; 0053a639
    PUSH ESI                            ; 0053a63f
    CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190 ; 0053a640
        ;   XREF to: 0053d190 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()
    JMP 0x00539dc2                      ; 0053a645
        ;   XREF to: 00539dc2 (UNCONDITIONAL_JUMP)  ; LAB_00539dc2
    CMP dword ptr [0x02f7c634],0x0      ; 0053a64a | DAT_02f7c634
        ;   Label: LAB_0053a64a
    JNZ 0x0053ab3c                      ; 0053a651
        ;   XREF to: 0053ab3c (CONDITIONAL_JUMP)  ; LAB_0053ab3c
    PUSH 0x12                           ; 0053a657
        ;   Label: LAB_0053a657
    MOV EAX,[0x0067cf44]                ; 0053a659 | g_CKeysPtr
    PUSH EAX                            ; 0053a65e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a65f | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a661
    ADD ESP,0x8                         ; 0053a664
    TEST EAX,EAX                        ; 0053a667
    JZ 0x0053a698                       ; 0053a669
        ;   XREF to: 0053a698 (CONDITIONAL_JUMP)  ; LAB_0053a698
    CMP dword ptr [0x02f7c548],0x0      ; 0053a66b | g_CEdCheckInstance.checked_state
    SETZ AL                             ; 0053a672
    AND EAX,0xff                        ; 0053a675
    MOV [0x02f7c548],EAX                ; 0053a67a | g_CEdCheckInstance.checked_state
    JZ 0x0053a68e                       ; 0053a67f
        ;   XREF to: 0053a68e (CONDITIONAL_JUMP)  ; LAB_0053a68e
    MOV EBX,0x1                         ; 0053a681
    XOR ECX,ECX                         ; 0053a686
    MOV dword ptr [EBP + 0x2a],EBX      ; 0053a688
    MOV dword ptr [EBP + 0x7a],ECX      ; 0053a68b
    MOV EAX,[0x00661c44]                ; 0053a68e | DAT_00661c44
        ;   Label: LAB_0053a68e
    MOV [0x02f7c540],EAX                ; 0053a693 | DAT_02f7c540
    PUSH 0x17                           ; 0053a698
        ;   Label: LAB_0053a698
    MOV EAX,[0x0067cf44]                ; 0053a69a | g_CKeysPtr
    PUSH EAX                            ; 0053a69f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a6a0 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a6a2
    ADD ESP,0x8                         ; 0053a6a5
    TEST EAX,EAX                        ; 0053a6a8
    JZ 0x0053a6bb                       ; 0053a6aa
        ;   XREF to: 0053a6bb (CONDITIONAL_JUMP)  ; LAB_0053a6bb
    MOV ESI,dword ptr [EBP + 0x92]      ; 0053a6ac
    PUSH ESI                            ; 0053a6b2
    CALL core_msnedit.cpp_FUN_0053b9f0  ; 0053a6b3
        ;   XREF to: 0053b9f0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053b9f0()
    ADD ESP,0x4                         ; 0053a6b8
    PUSH 0x20                           ; 0053a6bb
        ;   Label: LAB_0053a6bb
    MOV EAX,[0x0067cf44]                ; 0053a6bd | g_CKeysPtr
    PUSH EAX                            ; 0053a6c2 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a6c3 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a6c5
    ADD ESP,0x8                         ; 0053a6c8
    TEST EAX,EAX                        ; 0053a6cb
    JZ 0x0053a6f5                       ; 0053a6cd
        ;   XREF to: 0053a6f5 (CONDITIONAL_JUMP)  ; LAB_0053a6f5
    PUSH 0x2a                           ; 0053a6cf
    MOV EAX,[0x0067cf44]                ; 0053a6d1 | g_CKeysPtr
    PUSH EAX                            ; 0053a6d6 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a6d7 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a6d9
    ADD ESP,0x8                         ; 0053a6db
    TEST EAX,EAX                        ; 0053a6de
    JZ 0x0053ab58                       ; 0053a6e0
        ;   XREF to: 0053ab58 (CONDITIONAL_JUMP)  ; LAB_0053ab58
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053a6e6
    PUSH EDX                            ; 0053a6ec
    CALL core_msnedit.cpp_DeleteActors_FUN_0053df90 ; 0053a6ed
        ;   XREF to: 0053df90 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_DeleteActors_FUN_0053df90()
    ADD ESP,0x4                         ; 0053a6f2
    PUSH 0x13                           ; 0053a6f5
        ;   Label: LAB_0053a6f5
    MOV EAX,[0x0067cf44]                ; 0053a6f7 | g_CKeysPtr
    PUSH EAX                            ; 0053a6fc | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a6fd | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a6ff
    ADD ESP,0x8                         ; 0053a702
    TEST EAX,EAX                        ; 0053a705
    JZ 0x0053a718                       ; 0053a707
        ;   XREF to: 0053a718 (CONDITIONAL_JUMP)  ; LAB_0053a718
    MOV ECX,dword ptr [EBP + 0x92]      ; 0053a709
    PUSH ECX                            ; 0053a70f
    CALL core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 ; 0053a710
        ;   XREF to: 0053bd80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80()
    ADD ESP,0x4                         ; 0053a715
    PUSH 0x18                           ; 0053a718
        ;   Label: LAB_0053a718
    MOV EAX,[0x0067cf44]                ; 0053a71a | g_CKeysPtr
    PUSH EAX                            ; 0053a71f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a720 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a722
    ADD ESP,0x8                         ; 0053a725
    TEST EAX,EAX                        ; 0053a728
    JZ 0x0053a73b                       ; 0053a72a
        ;   XREF to: 0053a73b (CONDITIONAL_JUMP)  ; LAB_0053a73b
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a72c
    PUSH EBX                            ; 0053a732
    CALL core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 ; 0053a733
        ;   XREF to: 00537680 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680()
    ADD ESP,0x4                         ; 0053a738
    PUSH 0x14                           ; 0053a73b
        ;   Label: LAB_0053a73b
    MOV EAX,[0x0067cf44]                ; 0053a73d | g_CKeysPtr
    PUSH EAX                            ; 0053a742 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a743 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a745
    ADD ESP,0x8                         ; 0053a748
    TEST EAX,EAX                        ; 0053a74b
    JZ 0x0053a75e                       ; 0053a74d
        ;   XREF to: 0053a75e (CONDITIONAL_JUMP)  ; LAB_0053a75e
    MOV ESI,dword ptr [EBP + 0x92]      ; 0053a74f
    PUSH ESI                            ; 0053a755
    CALL core_msnedit.cpp_FUN_0053d8b0  ; 0053a756
        ;   XREF to: 0053d8b0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053d8b0()
    ADD ESP,0x4                         ; 0053a75b
    PUSH 0x2e                           ; 0053a75e
        ;   Label: LAB_0053a75e
    MOV EAX,[0x0067cf44]                ; 0053a760 | g_CKeysPtr
    PUSH EAX                            ; 0053a765 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a766 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a768
    ADD ESP,0x8                         ; 0053a76b
    TEST EAX,EAX                        ; 0053a76e
    JZ 0x0053a7c6                       ; 0053a770
        ;   XREF to: 0053a7c6 (CONDITIONAL_JUMP)  ; LAB_0053a7c6
    PUSH 0x2a                           ; 0053a772
    MOV EAX,[0x0067cf44]                ; 0053a774 | g_CKeysPtr
    XOR EDI,EDI                         ; 0053a779
    PUSH EAX                            ; 0053a77b | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a77c | g_CKeysInstance
    MOV dword ptr [0x02f7c548],EDI      ; 0053a77e | g_CEdCheckInstance.checked_state
    CALL dword ptr [EBX]                ; 0053a784
    ADD ESP,0x8                         ; 0053a786
    TEST EAX,EAX                        ; 0053a789
    JZ 0x0053ab87                       ; 0053a78b
        ;   XREF to: 0053ab87 (CONDITIONAL_JUMP)  ; LAB_0053ab87
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a791
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053a797
    DEC EBX                             ; 0053a79a
    MOV dword ptr [EAX + 0x10],EBX      ; 0053a79b
    TEST EBX,EBX                        ; 0053a79e
    JL 0x0053ab71                       ; 0053a7a0
        ;   XREF to: 0053ab71 (CONDITIONAL_JUMP)  ; LAB_0053ab71
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a7a6
        ;   Label: LAB_0053a7a6
    MOV EDI,dword ptr [EAX + 0x10]      ; 0053a7ac
    PUSH EDI                            ; 0053a7af
    MOV EAX,[0x006810c8]                ; 0053a7b0 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0053a7b5 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053a7b6
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    XOR EDX,EDX                         ; 0053a7bb
    ADD ESP,0x8                         ; 0053a7bd
    MOV dword ptr [EBP + 0x7a],EDX      ; 0053a7c0
    MOV dword ptr [EBP + 0x2a],EDX      ; 0053a7c3
    PUSH 0x23                           ; 0053a7c6
        ;   Label: LAB_0053a7c6
    MOV EAX,[0x0067cf44]                ; 0053a7c8 | g_CKeysPtr
    PUSH EAX                            ; 0053a7cd | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a7ce | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a7d0
    ADD ESP,0x8                         ; 0053a7d3
    TEST EAX,EAX                        ; 0053a7d6
    JZ 0x0053a800                       ; 0053a7d8
        ;   XREF to: 0053a800 (CONDITIONAL_JUMP)  ; LAB_0053a800
    PUSH 0x2a                           ; 0053a7da
    MOV EAX,[0x0067cf44]                ; 0053a7dc | g_CKeysPtr
    PUSH EAX                            ; 0053a7e1 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a7e2 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a7e4
    ADD ESP,0x8                         ; 0053a7e6
    TEST EAX,EAX                        ; 0053a7e9
    JZ 0x0053aba9                       ; 0053a7eb
        ;   XREF to: 0053aba9 (CONDITIONAL_JUMP)  ; LAB_0053aba9
    MOV EDI,dword ptr [EBP + 0x92]      ; 0053a7f1
    PUSH EDI                            ; 0053a7f7
    CALL core_msnedit.cpp_HideActors_FUN_0053dcf0 ; 0053a7f8
        ;   XREF to: 0053dcf0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_HideActors_FUN_0053dcf0()
    ADD ESP,0x4                         ; 0053a7fd
        ;   Label: LAB_0053a7fd
    PUSH 0x16                           ; 0053a800
        ;   Label: LAB_0053a800
    MOV EAX,[0x0067cf44]                ; 0053a802 | g_CKeysPtr
    PUSH EAX                            ; 0053a807 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a808 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a80a
    ADD ESP,0x8                         ; 0053a80d
    TEST EAX,EAX                        ; 0053a810
    JZ 0x0053a89d                       ; 0053a812
        ;   XREF to: 0053a89d (CONDITIONAL_JUMP)  ; LAB_0053a89d
    PUSH 0x2a                           ; 0053a818
    MOV EAX,[0x0067cf44]                ; 0053a81a | g_CKeysPtr
    PUSH EAX                            ; 0053a81f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a820 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a822
    ADD ESP,0x8                         ; 0053a824
    TEST EAX,EAX                        ; 0053a827
    JNZ 0x0053abcf                      ; 0053a829
        ;   XREF to: 0053abcf (CONDITIONAL_JUMP)  ; LAB_0053abcf
    MOV ESI,0xffffffff                  ; 0053a82f
    XOR EDI,EDI                         ; 0053a834
    LEA EAX,[EBP + 0xfffff6da]          ; 0053a836
        ;   Label: LAB_0053a836
    PUSH EAX                            ; 0053a83c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a83d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0053a843
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EBX,dword ptr [EBX + 0x548]     ; 0053a848
    ADD ESP,0x4                         ; 0053a84e
    TEST EBX,EBX                        ; 0053a851
    JZ 0x0053a877                       ; 0053a853
        ;   XREF to: 0053a877 (CONDITIONAL_JUMP)  ; LAB_0053a877
    CMP EDI,dword ptr [EBX + 0x148]     ; 0053a855
        ;   Label: LAB_0053a855
    JZ 0x0053a86d                       ; 0053a85b
        ;   XREF to: 0053a86d (CONDITIONAL_JUMP)  ; LAB_0053a86d
    PUSH EBX                            ; 0053a85d
    LEA EAX,[EBP + 0xfffff6da]          ; 0053a85e
    PUSH EAX                            ; 0053a864
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0053a865
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0053a86a
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053a86d
        ;   Label: LAB_0053a86d
    TEST EBX,EBX                        ; 0053a873
    JNZ 0x0053a855                      ; 0053a875
        ;   XREF to: 0053a855 (CONDITIONAL_JUMP)  ; LAB_0053a855
    CMP dword ptr [EBP + 0xfffff6da],0x1 ; 0053a877
        ;   Label: LAB_0053a877
    JGE 0x0053ac13                      ; 0053a87e
        ;   XREF to: 0053ac13 (CONDITIONAL_JUMP)  ; LAB_0053ac13
    TEST ESI,ESI                        ; 0053a884
    JL 0x0053abfa                       ; 0053a886
        ;   XREF to: 0053abfa (CONDITIONAL_JUMP)  ; LAB_0053abfa
    PUSH 0x0                            ; 0053a88c
        ;   Label: LAB_0053a88c
    LEA EAX,[EBP + 0xfffff6da]          ; 0053a88e
    PUSH EAX                            ; 0053a894
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053a895
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053a89a
    PUSH 0x2f                           ; 0053a89d
        ;   Label: LAB_0053a89d
    MOV EAX,[0x0067cf44]                ; 0053a89f | g_CKeysPtr
    PUSH EAX                            ; 0053a8a4 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a8a5 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a8a7
    ADD ESP,0x8                         ; 0053a8aa
    TEST EAX,EAX                        ; 0053a8ad
    JZ 0x0053a8e0                       ; 0053a8af
        ;   XREF to: 0053a8e0 (CONDITIONAL_JUMP)  ; LAB_0053a8e0
    PUSH 0x2a                           ; 0053a8b1
    MOV EAX,[0x0067cf44]                ; 0053a8b3 | g_CKeysPtr
    PUSH EAX                            ; 0053a8b8 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a8b9 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053a8bb
    ADD ESP,0x8                         ; 0053a8bd
    TEST EAX,EAX                        ; 0053a8c0
    JZ 0x0053acb1                       ; 0053a8c2
        ;   XREF to: 0053acb1 (CONDITIONAL_JUMP)  ; LAB_0053acb1
    MOV EAX,[0x02f7c53c]                ; 0053a8c8 | DAT_02f7c53c
    DEC EAX                             ; 0053a8cd
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053a8ce
    TEST EAX,EAX                        ; 0053a8d1
    JL 0x0053aca5                       ; 0053a8d3
        ;   XREF to: 0053aca5 (CONDITIONAL_JUMP)  ; LAB_0053aca5
    MOV dword ptr [EBP + 0x2a],0x1      ; 0053a8d9
        ;   Label: LAB_0053a8d9
    PUSH 0x31                           ; 0053a8e0
        ;   Label: LAB_0053a8e0
    MOV EAX,[0x0067cf44]                ; 0053a8e2 | g_CKeysPtr
    PUSH EAX                            ; 0053a8e7 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a8e8 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a8ea
    ADD ESP,0x8                         ; 0053a8ed
    TEST EAX,EAX                        ; 0053a8f0
    JZ 0x0053a920                       ; 0053a8f2
        ;   XREF to: 0053a920 (CONDITIONAL_JUMP)  ; LAB_0053a920
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a8f4
    MOV ECX,dword ptr [EAX + 0x28]      ; 0053a8fa
    PUSH ECX                            ; 0053a8fd
    PUSH 0x63c535                       ; 0053a8fe | = "Select actor by name"
    PUSH EAX                            ; 0053a903
    CALL core_msnedit.cpp_FUN_0053c210  ; 0053a904
        ;   XREF to: 0053c210 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053c210()
    ADD ESP,0xc                         ; 0053a909
    TEST EAX,EAX                        ; 0053a90c
    JZ 0x0053a920                       ; 0053a90e
        ;   XREF to: 0053a920 (CONDITIONAL_JUMP)  ; LAB_0053a920
    PUSH EAX                            ; 0053a910
    MOV ESI,dword ptr [EBP + 0x92]      ; 0053a911
    PUSH ESI                            ; 0053a917
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 0053a918
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
    ADD ESP,0x8                         ; 0053a91d
    PUSH 0x11                           ; 0053a920
        ;   Label: LAB_0053a920
    MOV EAX,[0x0067cf44]                ; 0053a922 | g_CKeysPtr
    PUSH EAX                            ; 0053a927 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a928 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a92a
    ADD ESP,0x8                         ; 0053a92d
    TEST EAX,EAX                        ; 0053a930
    JZ 0x0053a956                       ; 0053a932
        ;   XREF to: 0053a956 (CONDITIONAL_JUMP)  ; LAB_0053a956
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a934
    CMP dword ptr [EAX + 0x24],0x0      ; 0053a93a
    SETZ AL                             ; 0053a93e
    AND EAX,0xff                        ; 0053a941
    PUSH EAX                            ; 0053a946
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053a947
    PUSH EAX                            ; 0053a94d
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 0053a94e
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
    ADD ESP,0x8                         ; 0053a953
    PUSH 0x1c                           ; 0053a956
        ;   Label: LAB_0053a956
    MOV EAX,[0x0067cf44]                ; 0053a958 | g_CKeysPtr
    PUSH EAX                            ; 0053a95d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a95e | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a960
    ADD ESP,0x8                         ; 0053a963
    TEST EAX,EAX                        ; 0053a966
    JZ 0x0053a979                       ; 0053a968
        ;   XREF to: 0053a979 (CONDITIONAL_JUMP)  ; LAB_0053a979
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053a96a
    PUSH EDX                            ; 0053a970
    CALL core_msnedit.cpp_FUN_0053c730  ; 0053a971
        ;   XREF to: 0053c730 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053c730()
    ADD ESP,0x4                         ; 0053a976
    PUSH 0x19                           ; 0053a979
        ;   Label: LAB_0053a979
    MOV EAX,[0x0067cf44]                ; 0053a97b | g_CKeysPtr
    PUSH EAX                            ; 0053a980 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a981 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a983
    ADD ESP,0x8                         ; 0053a986
    TEST EAX,EAX                        ; 0053a989
    JZ 0x0053a9b7                       ; 0053a98b
        ;   XREF to: 0053a9b7 (CONDITIONAL_JUMP)  ; LAB_0053a9b7
    MOV EAX,dword ptr [EBP + 0x46]      ; 0053a98d
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053a990
    PUSH EAX                            ; 0053a996
    MOV dword ptr [EBX + 0x10],EAX      ; 0053a997
    MOV EBX,dword ptr [0x006810c8]      ; 0053a99a | g_CDemonSetInstance | g_CDemonSetPtr
    XOR ESI,ESI                         ; 0053a9a0
    PUSH EBX                            ; 0053a9a2 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x2a],ESI      ; 0053a9a3
    MOV dword ptr [EBP + 0x7a],ESI      ; 0053a9a6
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053a9a9
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0053a9ae
    MOV dword ptr [0x02f7c548],ESI      ; 0053a9b1 | g_CEdCheckInstance.checked_state
    PUSH 0x3b                           ; 0053a9b7
        ;   Label: LAB_0053a9b7
    MOV EAX,[0x0067cf44]                ; 0053a9b9 | g_CKeysPtr
    PUSH EAX                            ; 0053a9be | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a9bf | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a9c1
    ADD ESP,0x8                         ; 0053a9c4
    TEST EAX,EAX                        ; 0053a9c7
    JZ 0x0053a9d0                       ; 0053a9c9
        ;   XREF to: 0053a9d0 (CONDITIONAL_JUMP)  ; LAB_0053a9d0
    CALL core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 ; 0053a9cb
        ;   XREF to: 00535e70 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70()
    PUSH 0x41                           ; 0053a9d0
        ;   Label: LAB_0053a9d0
    MOV EAX,[0x0067cf44]                ; 0053a9d2 | g_CKeysPtr
    PUSH EAX                            ; 0053a9d7 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053a9d8 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053a9da
    ADD ESP,0x8                         ; 0053a9dd
    TEST EAX,EAX                        ; 0053a9e0
    JZ 0x0053aa41                       ; 0053a9e2
        ;   XREF to: 0053aa41 (CONDITIONAL_JUMP)  ; LAB_0053aa41
    MOV EDX,dword ptr [0x02f7c634]      ; 0053a9e4 | DAT_02f7c634
    TEST EDX,EDX                        ; 0053a9ea
    JNZ 0x0053aa32                      ; 0053a9ec
        ;   XREF to: 0053aa32 (CONDITIONAL_JUMP)  ; LAB_0053aa32
    MOV EBX,dword ptr [0x00679398]      ; 0053a9ee | g_WindowHeight
    DEC EBX                             ; 0053a9f4
    MOV EAX,[0x00679394]                ; 0053a9f5 | g_WindowWidth
    PUSH EBX                            ; 0053a9fa
    DEC EAX                             ; 0053a9fb
    PUSH EAX                            ; 0053a9fc
    PUSH 0x101                          ; 0053a9fd
    PUSH EDX                            ; 0053aa02
    MOV ECX,dword ptr [0x00680d50]      ; 0053aa03 | g_CScriptInstance | g_CScriptPtr
    PUSH ECX                            ; 0053aa09 | g_CScriptInstance
    CALL core_script.cpp_CScript_unk50_FUN_00566660 ; 0053aa0a
        ;   XREF to: 00566660 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_unk50_FUN_00566660()
    ADD ESP,0x14                        ; 0053aa0f
    MOV EBX,0x1                         ; 0053aa12
    PUSH EBX                            ; 0053aa17
    MOV ESI,dword ptr [0x0067d550]      ; 0053aa18 | g_CDemonMissionPtr
    PUSH ESI                            ; 0053aa1e | g_CDemonMissionInstance
    MOV dword ptr [0x02f7c634],EBX      ; 0053aa1f | DAT_02f7c634
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 0053aa25
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
    ADD ESP,0x8                         ; 0053aa2a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053aa2d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDI,dword ptr [0x00680d50]      ; 0053aa32 | g_CScriptPtr
        ;   Label: LAB_0053aa32
    PUSH EDI                            ; 0053aa38 | g_CScriptInstance
    CALL core_script.cpp_FUN_00566080   ; 0053aa39
        ;   XREF to: 00566080 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00566080()
    ADD ESP,0x4                         ; 0053aa3e
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0053aa41
        ;   Label: LAB_0053aa41
    TEST EAX,EAX                        ; 0053aa44
    JL 0x0053aa9b                       ; 0053aa46
        ;   XREF to: 0053aa9b (CONDITIONAL_JUMP)  ; LAB_0053aa9b
    MOV [0x02f7c53c],EAX                ; 0053aa48 | DAT_02f7c53c
    CMP EAX,0x4                         ; 0053aa4d
    JA 0x0053acda                       ; 0053aa50
        ;   XREF to: 0053acda (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5390dc]  ; 0053aa56 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD
    CMP dword ptr [EBP + 0x2a],0x0      ; 0053aa5d
        ;   Label: caseD_0
    JZ 0x0053aa7e                       ; 0053aa61
        ;   XREF to: 0053aa7e (CONDITIONAL_JUMP)  ; LAB_0053aa7e
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053aa63
    PUSH 0x2                            ; 0053aa69
    MOV EDX,dword ptr [EAX + 0x28]      ; 0053aa6b
    PUSH EDX                            ; 0053aa6e
    MOV ECX,dword ptr [0x006810c8]      ; 0053aa6f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0053aa75 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 0053aa76
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 0053aa7b
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053aa7e
        ;   Label: LAB_0053aa7e
    MOV EBX,dword ptr [EAX + 0x24]      ; 0053aa84
    PUSH EBX                            ; 0053aa87
    PUSH EAX                            ; 0053aa88
    CALL core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060 ; 0053aa89
        ;   XREF to: 00539060 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_CalltoCallToDemonCameraInit_FUN_00539060()
    ADD ESP,0x8                         ; 0053aa8e
    MOV EAX,[0x00661c44]                ; 0053aa91 | DAT_00661c44
        ;   Label: caseD_3
    MOV [0x02f7c540],EAX                ; 0053aa96 | DAT_02f7c540
    MOV EDI,dword ptr [EBP + 0x56]      ; 0053aa9b
        ;   Label: LAB_0053aa9b
    TEST EDI,EDI                        ; 0053aa9e
    JL 0x0053aace                       ; 0053aaa0
        ;   XREF to: 0053aace (CONDITIONAL_JUMP)  ; LAB_0053aace
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053aaa2
    PUSH EDI                            ; 0053aaa8
    MOV ECX,dword ptr [0x006810c8]      ; 0053aaa9 | g_CDemonSetInstance | g_CDemonSetPtr
    XOR EAX,EAX                         ; 0053aaaf
    PUSH ECX                            ; 0053aab1 | g_CDemonSetInstance
    MOV [0x02f7c548],EAX                ; 0053aab2 | g_CEdCheckInstance.checked_state
    MOV dword ptr [EBX + 0x10],EDI      ; 0053aab7
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053aaba
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    FLD float ptr [0x00661c44]          ; 0053aabf | DAT_00661c44
    ADD ESP,0x8                         ; 0053aac5
    FSTP float ptr [0x02f7c540]         ; 0053aac8 | DAT_02f7c540
    TEST byte ptr [0x02cf6a94],0x1      ; 0053aace | g_MouseButtonFlags
        ;   Label: LAB_0053aace
    JZ 0x0053ad02                       ; 0053aad5
        ;   XREF to: 0053ad02 (CONDITIONAL_JUMP)  ; LAB_0053ad02
    MOV EAX,[0x0067b654]                ; 0053aadb | g_CGamePtr
        ;   Label: LAB_0053aadb
    FLD float ptr [EAX + 0x264]         ; 0053aae0 | g_CGameInstance.delta_time_float
    FADD float ptr [0x00680818]         ; 0053aae6 | DAT_00680818
    FSTP float ptr [0x00680818]         ; 0053aaec | DAT_00680818
    TEST byte ptr [0x02cf6a94],0x1      ; 0053aaf2 | g_MouseButtonFlags
        ;   Label: LAB_0053aaf2
    JZ 0x0053af0c                       ; 0053aaf9
        ;   XREF to: 0053af0c (CONDITIONAL_JUMP)  ; LAB_0053af0c
    TEST byte ptr [EBP + 0x5e],0x1      ; 0053aaff
    JZ 0x0053af0c                       ; 0053ab03
        ;   XREF to: 0053af0c (CONDITIONAL_JUMP)  ; LAB_0053af0c
    MOV EAX,[0x0067b654]                ; 0053ab09 | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 0053ab0e | g_CGameInstance.delta_time_float
    FADD float ptr [0x02f7c630]         ; 0053ab14 | DAT_02f7c630
    FSTP float ptr [0x02f7c630]         ; 0053ab1a | DAT_02f7c630
    MOV EAX,[0x006810c8]                ; 0053ab20 | g_CDemonSetPtr
        ;   Label: LAB_0053ab20
    MOV ESI,dword ptr [EBP + 0x4a]      ; 0053ab25
    CMP ESI,dword ptr [EAX + 0x15aea4]  ; 0053ab28 | g_CDemonSetInstance.selected_camera_index
    JZ 0x00539342                       ; 0053ab2e
        ;   XREF to: 00539342 (CONDITIONAL_JUMP)  ; LAB_00539342
    MOV dword ptr [EBP + 0x46],ESI      ; 0053ab34
    JMP 0x00539342                      ; 0053ab37
        ;   XREF to: 00539342 (UNCONDITIONAL_JUMP)  ; LAB_00539342
    PUSH 0x38                           ; 0053ab3c
        ;   Label: LAB_0053ab3c
    MOV EAX,[0x0067cf44]                ; 0053ab3e | g_CKeysPtr
    PUSH EAX                            ; 0053ab43 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053ab44 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053ab46
    ADD ESP,0x8                         ; 0053ab48
    TEST EAX,EAX                        ; 0053ab4b
    JNZ 0x0053a657                      ; 0053ab4d
        ;   XREF to: 0053a657 (CONDITIONAL_JUMP)  ; LAB_0053a657
    JMP 0x0053a9b7                      ; 0053ab53
        ;   XREF to: 0053a9b7 (UNCONDITIONAL_JUMP)  ; LAB_0053a9b7
    PUSH EAX                            ; 0053ab58
        ;   Label: LAB_0053ab58
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ab59
    MOV EDI,dword ptr [EAX + 0x28]      ; 0053ab5f
    PUSH EDI                            ; 0053ab62
    PUSH EAX                            ; 0053ab63
    CALL core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 ; 0053ab64
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80()
    ADD ESP,0xc                         ; 0053ab69
    JMP 0x0053a6f5                      ; 0053ab6c
        ;   XREF to: 0053a6f5 (UNCONDITIONAL_JUMP)  ; LAB_0053a6f5
    MOV EAX,[0x006810c8]                ; 0053ab71 | g_CDemonSetPtr
        ;   Label: LAB_0053ab71
    MOV EAX,dword ptr [EAX]             ; 0053ab76 | g_CDemonSetInstance
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053ab78
    DEC EAX                             ; 0053ab7e
    MOV dword ptr [EBX + 0x10],EAX      ; 0053ab7f
    JMP 0x0053a7a6                      ; 0053ab82
        ;   XREF to: 0053a7a6 (UNCONDITIONAL_JUMP)  ; LAB_0053a7a6
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053ab87
        ;   Label: LAB_0053ab87
    MOV EDX,dword ptr [EBX + 0x10]      ; 0053ab8d
    INC EDX                             ; 0053ab90
    MOV EAX,[0x006810c8]                ; 0053ab91 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x10],EDX      ; 0053ab96
    CMP EDX,dword ptr [EAX]             ; 0053ab99 | g_CDemonSetInstance
    JL 0x0053a7a6                       ; 0053ab9b
        ;   XREF to: 0053a7a6 (CONDITIONAL_JUMP)  ; LAB_0053a7a6
    MOV dword ptr [EBX + 0x10],EDI      ; 0053aba1
    JMP 0x0053a7a6                      ; 0053aba4
        ;   XREF to: 0053a7a6 (UNCONDITIONAL_JUMP)  ; LAB_0053a7a6
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053aba9
        ;   Label: LAB_0053aba9
    MOV EBX,dword ptr [EAX + 0x28]      ; 0053abaf
    TEST EBX,EBX                        ; 0053abb2
    JZ 0x0053a800                       ; 0053abb4
        ;   XREF to: 0053a800 (CONDITIONAL_JUMP)  ; LAB_0053a800
    PUSH EAX                            ; 0053abba
    MOV dword ptr [EBX + 0x148],0x1     ; 0053abbb
    CALL core_msnedit.cpp_FUN_0053bcf0  ; 0053abc5
        ;   XREF to: 0053bcf0 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053bcf0()
    JMP 0x0053a7fd                      ; 0053abca
        ;   XREF to: 0053a7fd (UNCONDITIONAL_JUMP)  ; LAB_0053a7fd
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053abcf
        ;   Label: LAB_0053abcf
    MOV EAX,dword ptr [EAX + 0x548]     ; 0053abd5
    TEST EAX,EAX                        ; 0053abdb
    JZ 0x0053a89d                       ; 0053abdd
        ;   XREF to: 0053a89d (CONDITIONAL_JUMP)  ; LAB_0053a89d
    XOR EBX,EBX                         ; 0053abe3
    MOV dword ptr [EAX + 0x148],EBX     ; 0053abe5
        ;   Label: LAB_0053abe5
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0053abeb
    TEST EAX,EAX                        ; 0053abf1
    JNZ 0x0053abe5                      ; 0053abf3
        ;   XREF to: 0053abe5 (CONDITIONAL_JUMP)  ; LAB_0053abe5
    JMP 0x0053a89d                      ; 0053abf5
        ;   XREF to: 0053a89d (UNCONDITIONAL_JUMP)  ; LAB_0053a89d
    PUSH 0x63c4ec                       ; 0053abfa | = "No actors hidden."
        ;   Label: LAB_0053abfa
    MOV EDX,dword ptr [0x00678a60]      ; 0053abff | g_CEditorToolsPtr
    PUSH EDX                            ; 0053ac05 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053ac06
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053ac0b
    JMP 0x0053a88c                      ; 0053ac0e
        ;   XREF to: 0053a88c (UNCONDITIONAL_JUMP)  ; LAB_0053a88c
    LEA EAX,[EBP + 0xfffff6da]          ; 0053ac13
        ;   Label: LAB_0053ac13
    PUSH EAX                            ; 0053ac19
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 0053ac1a
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0053ac1f
    PUSH EDI                            ; 0053ac22
    PUSH ESI                            ; 0053ac23
    PUSH 0x63c4fe                       ; 0053ac24 | = "Select actor to unhide"
    LEA EAX,[EBP + 0xfffff6da]          ; 0053ac29
    PUSH EAX                            ; 0053ac2f
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0053ac30
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0053ac35
    MOV ESI,EAX                         ; 0053ac38
    TEST EAX,EAX                        ; 0053ac3a
    JL 0x0053a88c                       ; 0053ac3c
        ;   XREF to: 0053a88c (CONDITIONAL_JUMP)  ; LAB_0053a88c
    PUSH EAX                            ; 0053ac42
    LEA EAX,[EBP + 0xfffff6da]          ; 0053ac43
    PUSH EAX                            ; 0053ac49
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0053ac4a
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0053ac4f
    PUSH EAX                            ; 0053ac52
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053ac53
    PUSH EDX                            ; 0053ac59
    CALL core_mission.cpp_CDemonMission_FUN_00524030 ; 0053ac5a
        ;   XREF to: 00524030 (UNCONDITIONAL_CALL)  ; char * core_mission.cpp_CDemonMission_FUN_00524030(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053ac5f
    MOV EBX,EAX                         ; 0053ac62
    TEST EAX,EAX                        ; 0053ac64
    JNZ 0x0053ac8a                      ; 0053ac66
        ;   XREF to: 0053ac8a (CONDITIONAL_JUMP)  ; LAB_0053ac8a
    MOV ECX,0x63c515                    ; 0053ac68 | = "..\\core\\msnedit.cpp"
    MOV EAX,0x739                       ; 0053ac6d
    PUSH 0x63c529                       ; 0053ac72 | = "Hell froze."
    MOV dword ptr [0x02f0ca48],ECX      ; 0053ac77 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053ac7d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053ac82
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053ac87
    PUSH EDI                            ; 0053ac8a
        ;   Label: LAB_0053ac8a
    LEA EAX,[EBP + 0xfffff6da]          ; 0053ac8b
    PUSH EAX                            ; 0053ac91
    MOV dword ptr [EBX + 0x148],EDI     ; 0053ac92
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0053ac98
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0053ac9d
    JMP 0x0053a836                      ; 0053aca0
        ;   XREF to: 0053a836 (UNCONDITIONAL_JUMP)  ; LAB_0053a836
    MOV dword ptr [EBP + 0x7a],0x4      ; 0053aca5
        ;   Label: LAB_0053aca5
    JMP 0x0053a8d9                      ; 0053acac
        ;   XREF to: 0053a8d9 (UNCONDITIONAL_JUMP)  ; LAB_0053a8d9
    MOV EAX,[0x02f7c53c]                ; 0053acb1 | DAT_02f7c53c
        ;   Label: LAB_0053acb1
    INC EAX                             ; 0053acb6
    MOV dword ptr [EBP + 0x7a],EAX      ; 0053acb7
    CMP EAX,0x4                         ; 0053acba
    JLE 0x0053a8d9                      ; 0053acbd
        ;   XREF to: 0053a8d9 (CONDITIONAL_JUMP)  ; LAB_0053a8d9
    XOR ESI,ESI                         ; 0053acc3
    MOV dword ptr [EBP + 0x7a],ESI      ; 0053acc5
    JMP 0x0053a8d9                      ; 0053acc8
        ;   XREF to: 0053a8d9 (UNCONDITIONAL_JUMP)  ; LAB_0053a8d9
    XOR ESI,ESI                         ; 0053accd
        ;   Label: caseD_4
    MOV dword ptr [EBP + 0x66],ESI      ; 0053accf
    MOV dword ptr [EBP + 0x6a],ESI      ; 0053acd2
    JMP 0x0053aa91                      ; 0053acd5
        ;   XREF to: 0053aa91 (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x63c54a                    ; 0053acda | = "..\\core\\msnedit.cpp"
        ;   Label: default
    MOV EBX,0x78b                       ; 0053acdf
    PUSH 0x63c55e                       ; 0053ace4 | = "Invalid cameraMode!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0053ace9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0053acef | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053acf5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053acfa
    JMP 0x0053aa91                      ; 0053acfd
        ;   XREF to: 0053aa91 (UNCONDITIONAL_JUMP)  ; caseD_2
    TEST byte ptr [EBP + 0x5e],0x1      ; 0053ad02
        ;   Label: LAB_0053ad02
    JZ 0x0053aadb                       ; 0053ad06
        ;   XREF to: 0053aadb (CONDITIONAL_JUMP)  ; LAB_0053aadb
    CMP dword ptr [0x02f7c538],0x0      ; 0053ad0c | DAT_02f7c538
    JNZ 0x0053aadb                      ; 0053ad13
        ;   XREF to: 0053aadb (CONDITIONAL_JUMP)  ; LAB_0053aadb
    CMP dword ptr [0x02cf2b00],0x0      ; 0053ad19 | g_ActiveButton
    JNZ 0x0053aadb                      ; 0053ad20
        ;   XREF to: 0053aadb (CONDITIONAL_JUMP)  ; LAB_0053aadb
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ad26
    CMP dword ptr [EAX + 0x28],0x0      ; 0053ad2c
    JZ 0x0053ae63                       ; 0053ad30
        ;   XREF to: 0053ae63 (CONDITIONAL_JUMP)  ; LAB_0053ae63
    MOV EAX,[0x02f7c528]                ; 0053ad36 | DAT_02f7c528
    TEST EAX,EAX                        ; 0053ad3b
    JL 0x0053ae63                       ; 0053ad3d
        ;   XREF to: 0053ae63 (CONDITIONAL_JUMP)  ; LAB_0053ae63
    IMUL EBX,EAX,0xec                   ; 0053ad43
    PUSH 0x2a                           ; 0053ad49
    MOV EAX,[0x0067cf44]                ; 0053ad4b | g_CKeysPtr
    PUSH EAX                            ; 0053ad50 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0053ad51 | g_CKeysInstance
    ADD EBX,0x2f7a02c                   ; 0053ad53 | DAT_02f7a02c
    CALL dword ptr [ESI]                ; 0053ad59
    ADD ESP,0x8                         ; 0053ad5b
    TEST EAX,EAX                        ; 0053ad5e
    JZ 0x0053ad81                       ; 0053ad60
        ;   XREF to: 0053ad81 (CONDITIONAL_JUMP)  ; LAB_0053ad81
    PUSH EBX                            ; 0053ad62
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053ad63
    PUSH EDX                            ; 0053ad69
    CALL core_msnedit.cpp_FUN_0053af50  ; 0053ad6a
        ;   XREF to: 0053af50 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053af50()
    ADD ESP,0x8                         ; 0053ad6f
    MOV dword ptr [0x00680818],0x501502f9 ; 0053ad72 | DAT_00680818
        ;   Label: LAB_0053ad72
    JMP 0x0053aaf2                      ; 0053ad7c
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    PUSH 0x38                           ; 0053ad81
        ;   Label: LAB_0053ad81
    MOV EAX,[0x0067cf44]                ; 0053ad83 | g_CKeysPtr
    PUSH EAX                            ; 0053ad88 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0053ad89 | g_CKeysInstance
    CALL dword ptr [ESI]                ; 0053ad8b
    ADD ESP,0x8                         ; 0053ad8d
    TEST EAX,EAX                        ; 0053ad90
    JZ 0x0053addb                       ; 0053ad92
        ;   XREF to: 0053addb (CONDITIONAL_JUMP)  ; LAB_0053addb
    CMP dword ptr [0x02f7c634],0x0      ; 0053ad94 | DAT_02f7c634
    JZ 0x0053ad72                       ; 0053ad9b
        ;   XREF to: 0053ad72 (CONDITIONAL_JUMP)  ; LAB_0053ad72
    LEA EAX,[EBP + 0xfffffa82]          ; 0053ad9d
    PUSH EAX                            ; 0053ada3
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ada4
    MOV EDI,dword ptr [EAX + 0x28]      ; 0053adaa
    PUSH EDI                            ; 0053adad
    PUSH EBX                            ; 0053adae
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0053adaf
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorProperty_FUN_0040ea50()
    ADD ESP,0xc                         ; 0053adb4
    LEA EAX,[EBP + 0xfffffa82]          ; 0053adb7
    PUSH EAX                            ; 0053adbd
    MOV EAX,[0x00680d50]                ; 0053adbe | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 0053adc3 | g_CScriptInstance
    CALL core_script.cpp_FUN_00565f70   ; 0053adc4
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565f70()
    ADD ESP,0x8                         ; 0053adc9
    MOV dword ptr [0x00680818],0x501502f9 ; 0053adcc | DAT_00680818
    JMP 0x0053aaf2                      ; 0053add6
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    PUSH 0x1d                           ; 0053addb
        ;   Label: LAB_0053addb
    MOV EAX,[0x0067cf44]                ; 0053addd | g_CKeysPtr
    PUSH EAX                            ; 0053ade2 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0053ade3 | g_CKeysInstance
    CALL dword ptr [ESI]                ; 0053ade5
    ADD ESP,0x8                         ; 0053ade7
    TEST EAX,EAX                        ; 0053adea
    JNZ 0x0053ae24                      ; 0053adec
        ;   XREF to: 0053ae24 (CONDITIONAL_JUMP)  ; LAB_0053ae24
    CMP dword ptr [EBX + 0x54],0x0      ; 0053adee | DAT_02f7a080
    JZ 0x0053ad72                       ; 0053adf2
        ;   XREF to: 0053ad72 (CONDITIONAL_JUMP)  ; LAB_0053ad72
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053adf8
    MOV EDI,dword ptr [EAX + 0x28]      ; 0053adfe
    PUSH EDI                            ; 0053ae01
    PUSH EBX                            ; 0053ae02
    CALL core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 ; 0053ae03
        ;   XREF to: 0040eed0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0(CActorProperty * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0053ae08
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053ae0b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EAX,EAX                         ; 0053ae10
    MOV dword ptr [EBP + 0x5e],EAX      ; 0053ae12
    MOV dword ptr [0x00680818],0x501502f9 ; 0053ae15 | DAT_00680818
    JMP 0x0053aaf2                      ; 0053ae1f
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    LEA EAX,[EBP + 0xfffffbae]          ; 0053ae24
        ;   Label: LAB_0053ae24
    PUSH EAX                            ; 0053ae2a
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ae2b
    MOV EDX,dword ptr [EAX + 0x28]      ; 0053ae31
    PUSH EDX                            ; 0053ae34
    PUSH EBX                            ; 0053ae35
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0053ae36
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CActorProperty_FUN_0040ea50()
    ADD ESP,0xc                         ; 0053ae3b
    LEA EAX,[EBP + 0xfffffbae]          ; 0053ae3e
    PUSH EAX                            ; 0053ae44
    MOV ECX,dword ptr [0x00678a60]      ; 0053ae45 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053ae4b | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 0053ae4c
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0053ae51
    MOV dword ptr [0x00680818],0x501502f9 ; 0053ae54 | DAT_00680818
    JMP 0x0053aaf2                      ; 0053ae5e
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ae63
        ;   Label: LAB_0053ae63
    CMP dword ptr [EAX + 0x2c],0x0      ; 0053ae69
    JZ 0x0053aaf2                       ; 0053ae6d
        ;   XREF to: 0053aaf2 (CONDITIONAL_JUMP)  ; LAB_0053aaf2
    PUSH 0x38                           ; 0053ae73
    MOV EAX,[0x0067cf44]                ; 0053ae75 | g_CKeysPtr
    PUSH EAX                            ; 0053ae7a | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053ae7b | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053ae7d
    ADD ESP,0x8                         ; 0053ae7f
    TEST EAX,EAX                        ; 0053ae82
    JZ 0x0053aeb4                       ; 0053ae84
        ;   XREF to: 0053aeb4 (CONDITIONAL_JUMP)  ; LAB_0053aeb4
    CMP dword ptr [0x02f7c634],0x0      ; 0053ae86 | DAT_02f7c634
    JZ 0x0053aea7                       ; 0053ae8d
        ;   XREF to: 0053aea7 (CONDITIONAL_JUMP)  ; LAB_0053aea7
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053ae8f
    MOV EDI,dword ptr [EAX + 0x2c]      ; 0053ae95
    PUSH EDI                            ; 0053ae98
    MOV EAX,[0x00680d50]                ; 0053ae99 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 0053ae9e | g_CScriptInstance
    CALL core_script.cpp_FUN_00565f70   ; 0053ae9f
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00565f70()
    ADD ESP,0x8                         ; 0053aea4
    XOR EDX,EDX                         ; 0053aea7
        ;   Label: LAB_0053aea7
    MOV dword ptr [0x00680818],EDX      ; 0053aea9 | DAT_00680818
    JMP 0x0053aaf2                      ; 0053aeaf
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    MOV EBX,dword ptr [EBP + 0x92]      ; 0053aeb4
        ;   Label: LAB_0053aeb4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0053aeba
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0053aec0
    CMP ECX,dword ptr [EAX + 0x28]      ; 0053aec3
    JNZ 0x0053aef5                      ; 0053aec6
        ;   XREF to: 0053aef5 (CONDITIONAL_JUMP)  ; LAB_0053aef5
    CMP dword ptr [EBP + 0x5e],0x0      ; 0053aec8
    JNZ 0x0053aea7                      ; 0053aecc
        ;   XREF to: 0053aea7 (CONDITIONAL_JUMP)  ; LAB_0053aea7
    CMP dword ptr [0x00680818],0x3e99999a ; 0053aece | DAT_00680818
    JGE 0x0053aea7                      ; 0053aed8
        ;   XREF to: 0053aea7 (CONDITIONAL_JUMP)  ; LAB_0053aea7
    PUSH EBX                            ; 0053aeda
    CALL core_msnedit.cpp_FUN_0053c730  ; 0053aedb
        ;   XREF to: 0053c730 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_FUN_0053c730()
    ADD ESP,0x4                         ; 0053aee0
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053aee3
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    XOR EDX,EDX                         ; 0053aee8
    MOV dword ptr [0x00680818],EDX      ; 0053aeea | DAT_00680818
    JMP 0x0053aaf2                      ; 0053aef0
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    PUSH ECX                            ; 0053aef5
        ;   Label: LAB_0053aef5
    PUSH EBX                            ; 0053aef6
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 0053aef7
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
    ADD ESP,0x8                         ; 0053aefc
    XOR EDX,EDX                         ; 0053aeff
    MOV dword ptr [0x00680818],EDX      ; 0053af01 | DAT_00680818
    JMP 0x0053aaf2                      ; 0053af07
        ;   XREF to: 0053aaf2 (UNCONDITIONAL_JUMP)  ; LAB_0053aaf2
    XOR EBX,EBX                         ; 0053af0c
        ;   Label: LAB_0053af0c
    MOV dword ptr [0x02f7c630],EBX      ; 0053af0e | DAT_02f7c630
    JMP 0x0053ab20                      ; 0053af14
        ;   XREF to: 0053ab20 (UNCONDITIONAL_JUMP)  ; LAB_0053ab20
    XOR EAX,EAX                         ; 0053af19
        ;   Label: LAB_0053af19
    LEA ESP,[EBP + 0x7e]                ; 0053af1b
    POP EBP                             ; 0053af1e
    POP EDI                             ; 0053af1f
    POP ESI                             ; 0053af20
    POP EBX                             ; 0053af21
    RET                                 ; 0053af22

