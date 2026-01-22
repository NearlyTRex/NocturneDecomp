; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220()
;
; Local Variables:
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined1       Stack[-0xbc]:1  local_bc
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 005388a1
;
; Referenced Globals:
;   TerminatedCString s_Preparing_set_0063cf64
;   TerminatedCString s_Preparing_actors_0063cf73
;   TerminatedCString s_Setting_initial_camera_v_0063cf85
;   TerminatedCString s_core_msnedit_cpp_0063cfa2
;   TerminatedCString s_core_msnedit_cpp_0063cfb6
;   TerminatedCString s_CDemonMission_editGore_O_0063cfca
;   TerminatedCString s_stranger_hat_kfm_0063cff2
;   TerminatedCString s_Reset_gore_0063d003
;   double DOUBLE_0063d014 = 10
;   float FLOAT_0063d01c = 0.1000000
;   float FLOAT_0063d020 = -100
;   undefined4 DAT_00661c30
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   ... and 28 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_dlight.cpp_CDemonLight_init_FUN_004727c0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_setGameRes_FUN_004dade0
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_gore.cpp_CGore_process_FUN_004ed9e0
;   core_gore.cpp_FUN_004ed760
;   core_gore.cpp_FUN_004edaa0
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e220
        ;   Label: core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220
    PUSH ESI                            ; 0053e221
    PUSH EDI                            ; 0053e222
    PUSH EBP                            ; 0053e223
    MOV EBP,ESP                         ; 0053e224
    SUB ESP,0xbc                        ; 0053e226
    AND ESP,0xfffffff8                  ; 0053e22c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e22f
    XOR EDX,EDX                         ; 0053e232
    MOV ESI,dword ptr [0x0067b654]      ; 0053e234 | g_CGamePtr
    MOV dword ptr [ESP + 0x10],EDX      ; 0053e23a
    MOV dword ptr [ESP + 0x8],EDX       ; 0053e23e
    PUSH ESI                            ; 0053e242 | g_CGameInstance
    MOV dword ptr [0x02f7c634],EDX      ; 0053e243 | DAT_02f7c634
    MOV dword ptr [EAX + 0x4],0x1       ; 0053e249
    CALL core_game.cpp_CGame_setGameRes_FUN_004dade0 ; 0053e250
        ;   XREF to: 004dade0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0053e255
    PUSH 0x63cf64                       ; 0053e258 | = "Preparing set."
    MOV EDI,dword ptr [0x00678a60]      ; 0053e25d | g_CEditorToolsPtr
    PUSH EDI                            ; 0053e263 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053e264
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053e269
    PUSH 0x2d7eaf0                      ; 0053e26c | g_CDemonLightInstance
    CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0 ; 0053e271
        ;   XREF to: 004727c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)
    MOV EDX,0x42800000                  ; 0053e276
    ADD ESP,0x4                         ; 0053e27b
    MOV ECX,dword ptr [0x006810c8]      ; 0053e27e | g_CDemonSetInstance | g_CDemonSetPtr
    XOR EAX,EAX                         ; 0053e284
    PUSH ECX                            ; 0053e286 | g_CDemonSetInstance
    MOV [0x02d807a4],EAX                ; 0053e287 | g_CDemonLightInstance.light_enabled_flag
    MOV dword ptr [0x02d7ec30],EDX      ; 0053e28c | g_CDemonLightInstance.base.max_distance
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0053e292
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e297
    XOR EBX,EBX                         ; 0053e29a
    PUSH EBX                            ; 0053e29c
    MOV EBX,dword ptr [0x006810c8]      ; 0053e29d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0053e2a3 | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 ; 0053e2a4
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0053e2a9
    MOV ESI,dword ptr [0x006810c8]      ; 0053e2ac | g_CDemonSetPtr
    PUSH ESI                            ; 0053e2b2 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20 ; 0053e2b3
        ;   XREF to: 00575b20 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e2b8
    PUSH 0x63cf73                       ; 0053e2bb | = "Preparing actors."
    MOV EDI,dword ptr [0x00678a60]      ; 0053e2c0 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053e2c6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053e2c7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053e2cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e2cf
    PUSH EAX                            ; 0053e2d2
    CALL core_mission.cpp_CDemonMission_FUN_00523cf0 ; 0053e2d3
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053e2d8
    PUSH 0x63cf85                       ; 0053e2db | = "Setting initial camera view."
    MOV EDX,dword ptr [0x00678a60]      ; 0053e2e0 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053e2e6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053e2e7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053e2ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e2ef
    MOV dword ptr [EAX + 0x10],0x0      ; 0053e2f2
    MOV ECX,dword ptr [EAX + 0x10]      ; 0053e2f9
    PUSH ECX                            ; 0053e2fc
    MOV EBX,dword ptr [0x006810c8]      ; 0053e2fd | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0053e303 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053e304
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0053e309
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053e30c
    PUSH ESI                            ; 0053e30f
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053e310
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053e315
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053e318
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053e31d
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDI,dword ptr [0x0067a3d0]      ; 0053e322 | g_CFireEffectPtr
    PUSH EDI                            ; 0053e328 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_init_FUN_004c6c80 ; 0053e329
        ;   XREF to: 004c6c80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0053e32e
    MOV EAX,[0x0067b654]                ; 0053e331 | g_CGameInstance | g_CGamePtr
    PUSH EAX                            ; 0053e336 | g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0053e337
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
    ADD ESP,0x4                         ; 0053e33c
    LEA EAX,[ESP + 0x14]                ; 0053e33f
    PUSH EAX                            ; 0053e343
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 0053e344
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    ADD ESP,0x4                         ; 0053e349
    PUSH 0xe7b                          ; 0053e34c
    PUSH 0x63cfa2                       ; 0053e351 | = "..\\core\\msnedit.cpp"
    MOV EAX,[0x03276acc]                ; 0053e356 | g_CDemonCameraInstance.corona_blend_factor
    PUSH 0x66c                          ; 0053e35b
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053e360
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0053e367
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0053e36c
    TEST EAX,EAX                        ; 0053e36f
    JNZ 0x0053e8fb                      ; 0053e371
        ;   XREF to: 0053e8fb (CONDITIONAL_JUMP)  ; LAB_0053e8fb
    MOV dword ptr [ESP + 0xb4],EAX      ; 0053e377
        ;   Label: LAB_0053e377
    TEST EAX,EAX                        ; 0053e37e
    JZ 0x0053e909                       ; 0053e380
        ;   XREF to: 0053e909 (CONDITIONAL_JUMP)  ; LAB_0053e909
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053e386
        ;   Label: LAB_0053e386
    PUSH 0x63cff2                       ; 0053e38d | = "stranger-hat.kfm"
    ADD EAX,0x158                       ; 0053e392
    PUSH EAX                            ; 0053e397
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0053e398
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053e39d
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0053e3a0
    PUSH EBX                            ; 0053e3a7
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053e3a8
    PUSH ESI                            ; 0053e3ab
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 0053e3ac
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
    MOV dword ptr [EBX + 0x28],0x0      ; 0053e3b1
    ADD ESP,0x8                         ; 0053e3b8
    FLD float ptr [EBX + 0x28]          ; 0053e3bb
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0053e3be
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053e3c5
    MOV EDI,dword ptr [ESP + 0xb4]      ; 0053e3cc
    FST float ptr [EBX + 0x24]          ; 0053e3d3
    FSTP float ptr [EBX + 0x20]         ; 0053e3d6
    MOV dword ptr [ESI + 0x38],0x0      ; 0053e3d9
    PUSH EDI                            ; 0053e3e0
    MOV EDX,dword ptr [ESI + 0x38]      ; 0053e3e1
    MOV dword ptr [ESI + 0x34],EDX      ; 0053e3e4
    MOV EDX,dword ptr [ESI + 0x34]      ; 0053e3e7
    MOV dword ptr [ESI + 0x30],EDX      ; 0053e3ea
    MOV EAX,dword ptr [EAX + 0x154]     ; 0053e3ed
    CALL dword ptr [EAX]                ; 0053e3f3
    ADD ESP,0x4                         ; 0053e3f5
    PUSH EDI                            ; 0053e3f8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053e3f9
    PUSH EDX                            ; 0053e3fc
    ADD EBX,0x20                        ; 0053e3fd
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 0053e400
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
    ADD ESP,0x8                         ; 0053e405
    ADD ESI,0x30                        ; 0053e408
    MOV dword ptr [ESP + 0xac],EBX      ; 0053e40b
    MOV dword ptr [ESP + 0xb0],ESI      ; 0053e412
    CALL wincore_winrun.cpp_doNothing_FUN_005f2f80 ; 0053e419
        ;   XREF to: 005f2f80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing_FUN_005f2f80()
        ;   Label: LAB_0053e419
    PUSH 0x0                            ; 0053e41e
    PUSH 0x0                            ; 0053e420
    PUSH 0x0                            ; 0053e422
    MOV ECX,dword ptr [0x00678a60]      ; 0053e424 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053e42a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920 ; 0053e42b
        ;   XREF to: 004a2920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
    ADD ESP,0x10                        ; 0053e430
    MOV EBX,dword ptr [ESP + 0xac]      ; 0053e433
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053e43a
    MOV dword ptr [EBX],EAX             ; 0053e43e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053e440
    MOV dword ptr [EBX + 0x4],EAX       ; 0053e444
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053e447
    MOV dword ptr [EBX + 0x8],EAX       ; 0053e44b
    LEA EAX,[ESP + 0x20]                ; 0053e44e
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0053e452
    CMP EAX,EBX                         ; 0053e459
    JZ 0x0053e471                       ; 0053e45b
        ;   XREF to: 0053e471 (CONDITIONAL_JUMP)  ; LAB_0053e471
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053e45d
    MOV dword ptr [EBX],EAX             ; 0053e461
    MOV EAX,dword ptr [ESP + 0x24]      ; 0053e463
    MOV dword ptr [EBX + 0x4],EAX       ; 0053e467
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053e46a
    MOV dword ptr [EBX + 0x8],EAX       ; 0053e46e
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0053e471
        ;   Label: LAB_0053e471
    PUSH ESI                            ; 0053e478
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0053e479
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053e47e
    PUSH 0x0                            ; 0053e481
    PUSH ESI                            ; 0053e483
    MOV EAX,[0x006810c8]                ; 0053e484 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0053e489 | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 0053e48a
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    ADD ESP,0xc                         ; 0053e48f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053e492
    PUSH EDX                            ; 0053e495
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053e496
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053e49b
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0053e49e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e4a3
    MOV ECX,dword ptr [EAX + 0x38]      ; 0053e4a6
    TEST ECX,ECX                        ; 0053e4a9
    JZ 0x0053e931                       ; 0053e4ab
        ;   XREF to: 0053e931 (CONDITIONAL_JUMP)  ; LAB_0053e931
    MOV EBX,0xffff                      ; 0053e4b1
    MOV EAX,[0x006810c8]                ; 0053e4b6 | g_CDemonSetPtr
    MOV dword ptr [0x03276acc],EBX      ; 0053e4bb | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 0053e4c1 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac84],0x1  ; 0053e4cb | g_CDemonSetInstance.unk_lighting_param1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e4d5
        ;   Label: LAB_0053e4d5
    MOV ESI,dword ptr [EAX + 0x30]      ; 0053e4d8
    XOR EBX,EBX                         ; 0053e4db
    TEST ESI,ESI                        ; 0053e4dd
    SETZ AL                             ; 0053e4df
    MOV BL,AL                           ; 0053e4e2
    MOV EAX,[0x006810c8]                ; 0053e4e4 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac8c],EBX  ; 0053e4e9 | g_CDemonSetInstance.unk_lighting_param3
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053e4ef
    CMP dword ptr [EBX + 0x34],0x0      ; 0053e4f2
    SETZ BL                             ; 0053e4f6
    PUSH 0x0                            ; 0053e4f9
    AND EBX,0xff                        ; 0053e4fb
    PUSH EAX                            ; 0053e501 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ac90],EBX  ; 0053e502 | g_CDemonSetInstance.unk_lighting_param4
    CALL core_set.cpp_CDemonSet_FUN_0056c1a0 ; 0053e508
        ;   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0053e50d
    MOV EAX,[0x0067a3d0]                ; 0053e510 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 0053e515 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_process_FUN_004c6ec0 ; 0053e516
        ;   XREF to: 004c6ec0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_process_FUN_004c6ec0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 0053e51b
    MOV EDX,dword ptr [0x0067b9a0]      ; 0053e51e | g_CGoreInstance | g_CGorePtr
    PUSH EDX                            ; 0053e524 | g_CGoreInstance
    CALL core_gore.cpp_CGore_process_FUN_004ed9e0 ; 0053e525
        ;   XREF to: 004ed9e0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_process_FUN_004ed9e0()
    ADD ESP,0x4                         ; 0053e52a
    PUSH 0x0                            ; 0053e52d
    MOV ECX,dword ptr [0x00678a60]      ; 0053e52f | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0053e535 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0053e536
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 0053e53b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053e53e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067b654]      ; 0053e543 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 0053e549 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 0053e54a
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0053e54f
    MOV ESI,dword ptr [0x006810c8]      ; 0053e552 | g_CDemonSetPtr
    PUSH ESI                            ; 0053e558 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_FUN_005743e0 ; 0053e559
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_FUN_005743e0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e55e
    MOV EAX,[0x0067cf44]                ; 0053e561 | g_CKeysPtr
    PUSH 0x1                            ; 0053e566
    MOV EBX,dword ptr [EAX]             ; 0053e568 | g_CKeysInstance
    PUSH EAX                            ; 0053e56a | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053e56b
    ADD ESP,0x8                         ; 0053e56e
    TEST EAX,EAX                        ; 0053e571
    JNZ 0x0053e965                      ; 0053e573
        ;   XREF to: 0053e965 (CONDITIONAL_JUMP)  ; LAB_0053e965
    LEA EAX,[ESP + 0x14]                ; 0053e579
    PUSH EAX                            ; 0053e57d
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0053e57e
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    MOV AH,byte ptr [0x02cf6a94]        ; 0053e583 | g_MouseButtonFlags
    ADD ESP,0x4                         ; 0053e589
    TEST AH,0x1                         ; 0053e58c
    JZ 0x0053e67d                       ; 0053e58f
        ;   XREF to: 0053e67d (CONDITIONAL_JUMP)  ; LAB_0053e67d
    MOV EDI,dword ptr [0x02cf6a8c]      ; 0053e595 | g_MouseX
    TEST EDI,EDI                        ; 0053e59b
    JLE 0x0053e676                      ; 0053e59d
        ;   XREF to: 0053e676 (CONDITIONAL_JUMP)  ; LAB_0053e676
    MOV EAX,[0x00679394]                ; 0053e5a3 | g_WindowWidth
    SUB EAX,0x2                         ; 0053e5a8
    CMP EAX,EDI                         ; 0053e5ab
    JLE 0x0053e676                      ; 0053e5ad
        ;   XREF to: 0053e676 (CONDITIONAL_JUMP)  ; LAB_0053e676
    MOV ECX,dword ptr [0x02cf6a90]      ; 0053e5b3 | g_MouseY
    TEST ECX,ECX                        ; 0053e5b9
    JLE 0x0053e676                      ; 0053e5bb
        ;   XREF to: 0053e676 (CONDITIONAL_JUMP)  ; LAB_0053e676
    MOV EAX,[0x00679398]                ; 0053e5c1 | g_WindowHeight
    SUB EAX,0x2                         ; 0053e5c6
    CMP EAX,ECX                         ; 0053e5c9
    JLE 0x0053e676                      ; 0053e5cb
        ;   XREF to: 0053e676 (CONDITIONAL_JUMP)  ; LAB_0053e676
    PUSH ECX                            ; 0053e5d1
    PUSH EDI                            ; 0053e5d2
    PUSH 0x32758e4                      ; 0053e5d3 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x90]                ; 0053e5d8
    LEA EDI,[ESP + 0xa8]                ; 0053e5df
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 0053e5e6
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x90]                ; 0053e5eb
    ADD ESP,0xc                         ; 0053e5f2
    LEA EAX,[ESP + 0x9c]                ; 0053e5f5
    LEA EBX,[ESP + 0x3c]                ; 0053e5fc
    PUSH EAX                            ; 0053e600
    MOVSD ES:EDI,ESI                    ; 0053e601
    MOVSD ES:EDI,ESI                    ; 0053e602
    MOVSD ES:EDI,ESI                    ; 0053e603
    PUSH 0x32758e4                      ; 0053e604 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x80]                ; 0053e609
    LEA EDI,[ESP + 0xa4]                ; 0053e610
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 0053e617
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x80]                ; 0053e61c
    ADD ESP,0x8                         ; 0053e623
    LEA EAX,[ESP + 0x9c]                ; 0053e626
    MOVSD ES:EDI,ESI                    ; 0053e62d
    MOVSD ES:EDI,ESI                    ; 0053e62e
    MOVSD ES:EDI,ESI                    ; 0053e62f
    FILD dword ptr [EAX]                ; 0053e630
    FMUL float ptr [0x00661c30]         ; 0053e632 | DAT_00661c30
    FSTP float ptr [EBX]                ; 0053e638
    FILD dword ptr [EAX + 0x4]          ; 0053e63a
    FMUL float ptr [0x00661c30]         ; 0053e63d | DAT_00661c30
    FSTP float ptr [EBX + 0x4]          ; 0053e643
    FILD dword ptr [EAX + 0x8]          ; 0053e646
    FMUL float ptr [0x00661c30]         ; 0053e649 | DAT_00661c30
    FSTP float ptr [EBX + 0x8]          ; 0053e64f
    LEA EBX,[ESP + 0x3c]                ; 0053e652
    LEA EAX,[ESP + 0x14]                ; 0053e656
    CMP EAX,EBX                         ; 0053e65a
    JZ 0x0053e676                       ; 0053e65c
        ;   XREF to: 0053e676 (CONDITIONAL_JUMP)  ; LAB_0053e676
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053e65e
    MOV dword ptr [ESP + 0x14],EAX      ; 0053e662
    MOV EAX,dword ptr [ESP + 0x40]      ; 0053e666
    MOV dword ptr [ESP + 0x18],EAX      ; 0053e66a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053e66e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053e672
    AND byte ptr [0x02cf6a94],0xfe      ; 0053e676 | g_MouseButtonFlags
        ;   Label: LAB_0053e676
    PUSH 0x39                           ; 0053e67d
        ;   Label: LAB_0053e67d
    MOV EAX,[0x0067cf44]                ; 0053e67f | g_CKeysPtr
    PUSH EAX                            ; 0053e684 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053e685 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053e687
    ADD ESP,0x8                         ; 0053e689
    TEST EAX,EAX                        ; 0053e68c
    JZ 0x0053e953                       ; 0053e68e
        ;   XREF to: 0053e953 (CONDITIONAL_JUMP)  ; LAB_0053e953
    MOV EAX,[0x0067b654]                ; 0053e694 | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 0053e699 | g_CGameInstance.delta_time_float
    FSUBR float ptr [ESP + 0x8]         ; 0053e69f
    FST float ptr [ESP + 0x8]           ; 0053e6a3
    FLDZ                                ; 0053e6a7
    FCOMPP                              ; 0053e6a9
    FNSTSW AX                           ; 0053e6ab
    SAHF                                ; 0053e6ad
    JBE 0x0053e6d6                      ; 0053e6ae
        ;   XREF to: 0053e6d6 (CONDITIONAL_JUMP)  ; LAB_0053e6d6
    PUSH 0x0                            ; 0053e6b0
    FLD float ptr [ESP + 0xc]           ; 0053e6b2
    PUSH 0x0                            ; 0053e6b6
    LEA EAX,[ESP + 0x1c]                ; 0053e6b8
    MOV EDX,dword ptr [0x0067b9a0]      ; 0053e6bc | g_CGoreInstance | g_CGorePtr
    PUSH EAX                            ; 0053e6c2
    FADD float ptr [0x0063d01c]         ; 0053e6c3 | FLOAT_0063d01c
    PUSH EDX                            ; 0053e6c9 | g_CGoreInstance
    FSTP float ptr [ESP + 0x18]         ; 0053e6ca
    CALL core_gore.cpp_FUN_004edaa0     ; 0053e6ce
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004edaa0()
    ADD ESP,0x10                        ; 0053e6d3
    PUSH 0x1c                           ; 0053e6d6
        ;   Label: LAB_0053e6d6
    MOV EAX,[0x0067cf44]                ; 0053e6d8 | g_CKeysPtr
    PUSH EAX                            ; 0053e6dd | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053e6de | g_CKeysInstance
    CALL dword ptr [EBX]                ; 0053e6e0
    ADD ESP,0x8                         ; 0053e6e2
    TEST EAX,EAX                        ; 0053e6e5
    JZ 0x0053e95c                       ; 0053e6e7
        ;   XREF to: 0053e95c (CONDITIONAL_JUMP)  ; LAB_0053e95c
    MOV EAX,[0x0067b654]                ; 0053e6ed | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 0053e6f2 | g_CGameInstance.delta_time_float
    FSUBR float ptr [ESP + 0x10]        ; 0053e6f8
    FST float ptr [ESP + 0x10]          ; 0053e6fc
    FLDZ                                ; 0053e700
    FCOMPP                              ; 0053e702
    FNSTSW AX                           ; 0053e704
    SAHF                                ; 0053e706
    JBE 0x0053e75b                      ; 0053e707
        ;   XREF to: 0053e75b (CONDITIONAL_JUMP)  ; LAB_0053e75b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053e709
    FLD double ptr [0x0063d014]         ; 0053e710 | DOUBLE_0063d014
    FLD float ptr [EAX + 0x44]          ; 0053e716
    FMUL ST1                            ; 0053e719
    FSTP float ptr [ESP + 0x6c]         ; 0053e71b
    FLD float ptr [EAX + 0x50]          ; 0053e71f
    FMUL ST1                            ; 0053e722
    FSTP float ptr [ESP + 0x70]         ; 0053e724
    FMUL float ptr [EAX + 0x5c]         ; 0053e728
    FLD float ptr [ESP + 0x10]          ; 0053e72b
    PUSH 0x0                            ; 0053e72f
    LEA EAX,[ESP + 0x70]                ; 0053e731
    MOV EBX,dword ptr [0x0067b9a0]      ; 0053e735 | g_CGoreInstance | g_CGorePtr
    PUSH EAX                            ; 0053e73b
    LEA EAX,[ESP + 0x1c]                ; 0053e73c
    FADD float ptr [0x0063d01c]         ; 0053e740 | FLOAT_0063d01c
    PUSH EAX                            ; 0053e746
    FSTP float ptr [ESP + 0x1c]         ; 0053e747
    PUSH EBX                            ; 0053e74b | g_CGoreInstance
    FSTP float ptr [ESP + 0x84]         ; 0053e74c
    CALL core_gore.cpp_FUN_004edaa0     ; 0053e753
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004edaa0()
    ADD ESP,0x10                        ; 0053e758
    PUSH 0x19                           ; 0053e75b
        ;   Label: LAB_0053e75b
    MOV EAX,[0x0067cf44]                ; 0053e75d | g_CKeysPtr
    PUSH EAX                            ; 0053e762 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053e763 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053e765
    ADD ESP,0x8                         ; 0053e768
    TEST EAX,EAX                        ; 0053e76b
    JZ 0x0053e89e                       ; 0053e76d
        ;   XREF to: 0053e89e (CONDITIONAL_JUMP)  ; LAB_0053e89e
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053e773
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e777
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053e77b
    MOV dword ptr [ESP + 0x58],EAX      ; 0053e77f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053e783
    MOV dword ptr [ESP + 0x5c],EAX      ; 0053e787
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053e78b
    MOV dword ptr [ESP + 0x30],EAX      ; 0053e78f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053e793
    MOV ESI,dword ptr [0x006810c8]      ; 0053e797 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x34],EAX      ; 0053e79d
    PUSH ESI                            ; 0053e7a1 | g_CDemonSetInstance
    FLD float ptr [ESP + 0x38]          ; 0053e7a2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053e7a6
    FADD float ptr [0x0063d020]         ; 0053e7aa | FLOAT_0063d020
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053e7b0
    FSTP float ptr [ESP + 0x38]         ; 0053e7b4
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0053e7b8
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e7bd
    LEA EAX,[ESP + 0x30]                ; 0053e7c0
    PUSH EAX                            ; 0053e7c4
    LEA EAX,[ESP + 0x58]                ; 0053e7c5
    PUSH EAX                            ; 0053e7c9
    MOV EDI,dword ptr [0x006810c8]      ; 0053e7ca | g_CDemonSetPtr
    PUSH EDI                            ; 0053e7d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 0053e7d1
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053e7d6
    FLD float ptr [ESP + 0xc4]          ; 0053e7dd
    ADD ESP,0xc                         ; 0053e7e4
    FLDZ                                ; 0053e7e7
    FXCH                                ; 0053e7e9
    FST float ptr [ESP + 0xc]           ; 0053e7eb
    FSTP double ptr [ESP]               ; 0053e7ef
    FCOMP double ptr [ESP]              ; 0053e7f2
    FNSTSW AX                           ; 0053e7f5
    SAHF                                ; 0053e7f7
    JNC 0x0053e89e                      ; 0053e7f8
        ;   XREF to: 0053e89e (CONDITIONAL_JUMP)  ; LAB_0053e89e
    FLD1                                ; 0053e7fe
    FCOMP double ptr [ESP]              ; 0053e800
    FNSTSW AX                           ; 0053e803
    SAHF                                ; 0053e805
    JBE 0x0053e89e                      ; 0053e806
        ;   XREF to: 0053e89e (CONDITIONAL_JUMP)  ; LAB_0053e89e
    FLD float ptr [ESP + 0x30]          ; 0053e80c
    FSUB float ptr [ESP + 0x54]         ; 0053e810
    FST float ptr [ESP + 0x90]          ; 0053e814
    FLD float ptr [ESP + 0xc]           ; 0053e81b
    FXCH                                ; 0053e81f
    FMUL ST1                            ; 0053e821
    FLD float ptr [ESP + 0x38]          ; 0053e823
    FLD float ptr [ESP + 0x34]          ; 0053e827
    FSUB float ptr [ESP + 0x58]         ; 0053e82b
    FXCH                                ; 0053e82f
    FSUB float ptr [ESP + 0x5c]         ; 0053e831
    FXCH                                ; 0053e835
    FST float ptr [ESP + 0x94]          ; 0053e837
    FMUL ST3                            ; 0053e83e
    FXCH                                ; 0053e840
    FST float ptr [ESP + 0x98]          ; 0053e842
    FMULP ST3                           ; 0053e849
    FLD float ptr [ESP + 0x54]          ; 0053e84b
    PUSH 0x0                            ; 0053e84f
    LEA EAX,[ESP + 0x4c]                ; 0053e851
    FLD float ptr [ESP + 0x5c]          ; 0053e855
    PUSH EAX                            ; 0053e859
    MOV EAX,[0x0067b9a0]                ; 0053e85a | g_CGoreInstance | g_CGorePtr
    FLD float ptr [ESP + 0x64]          ; 0053e85f
    PUSH EAX                            ; 0053e863 | g_CGoreInstance
    FXCH ST4                            ; 0053e864
    FSTP float ptr [ESP + 0x6c]         ; 0053e866
    FXCH ST2                            ; 0053e86a
    FSTP float ptr [ESP + 0x70]         ; 0053e86c
    FXCH ST3                            ; 0053e870
    FSTP float ptr [ESP + 0x74]         ; 0053e872
    FXCH ST2                            ; 0053e876
    FADD float ptr [ESP + 0x6c]         ; 0053e878
    FXCH ST2                            ; 0053e87c
    FADD float ptr [ESP + 0x70]         ; 0053e87e
    FXCH                                ; 0053e882
    FADD float ptr [ESP + 0x74]         ; 0053e884
    FXCH ST2                            ; 0053e888
    FSTP float ptr [ESP + 0x54]         ; 0053e88a
    FSTP float ptr [ESP + 0x58]         ; 0053e88e
    FSTP float ptr [ESP + 0x5c]         ; 0053e892
    CALL core_gore.cpp_FUN_004ede30     ; 0053e896
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ede30()
    ADD ESP,0xc                         ; 0053e89b
    PUSH 0x13                           ; 0053e89e
        ;   Label: LAB_0053e89e
    MOV EAX,[0x0067cf44]                ; 0053e8a0 | g_CKeysPtr
    PUSH EAX                            ; 0053e8a5 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0053e8a6 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0053e8a8
    ADD ESP,0x8                         ; 0053e8ab
    TEST EAX,EAX                        ; 0053e8ae
    JZ 0x0053e419                       ; 0053e8b0
        ;   XREF to: 0053e419 (CONDITIONAL_JUMP)  ; LAB_0053e419
    PUSH 0x63d003                       ; 0053e8b6 | = "Reset gore?"
    MOV EDX,dword ptr [0x00678a60]      ; 0053e8bb | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0053e8c1 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0053e8c2
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0053e8c7
    TEST EAX,EAX                        ; 0053e8ca
    JZ 0x0053e419                       ; 0053e8cc
        ;   XREF to: 0053e419 (CONDITIONAL_JUMP)  ; LAB_0053e419
    MOV ECX,dword ptr [0x0067b9a0]      ; 0053e8d2 | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 0053e8d8 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004ed760     ; 0053e8d9
        ;   XREF to: 004ed760 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ed760()
    MOV EAX,[0x006810c8]                ; 0053e8de | g_CDemonSetInstance | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0053e8e3
    MOV EBX,dword ptr [EAX + 0x15aea4]  ; 0053e8e6 | g_CDemonSetInstance.selected_camera_index
    PUSH EBX                            ; 0053e8ec
    PUSH EAX                            ; 0053e8ed | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 0053e8ee
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0053e8f3
    JMP 0x0053e419                      ; 0053e8f6
        ;   XREF to: 0053e419 (UNCONDITIONAL_JUMP)  ; LAB_0053e419
    PUSH EAX                            ; 0053e8fb
        ;   Label: LAB_0053e8fb
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 ; 0053e8fc
        ;   XREF to: 00421700 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0053e901
    JMP 0x0053e377                      ; 0053e904
        ;   XREF to: 0053e377 (UNCONDITIONAL_JUMP)  ; LAB_0053e377
    MOV EDX,0x63cfb6                    ; 0053e909 | = "..\\core\\msnedit.cpp"
        ;   Label: LAB_0053e909
    MOV ECX,0xe7c                       ; 0053e90e
    PUSH 0x63cfca                       ; 0053e913 | = "CDemonMission::editGore - Out of memory"
    MOV dword ptr [0x02f0ca48],EDX      ; 0053e918 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0053e91e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053e924
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053e929
    JMP 0x0053e386                      ; 0053e92c
        ;   XREF to: 0053e386 (UNCONDITIONAL_JUMP)  ; LAB_0053e386
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0053e931
        ;   Label: LAB_0053e931
    MOV [0x03276acc],EAX                ; 0053e938 | g_CDemonCameraInstance.corona_blend_factor
    MOV EAX,[0x006810c8]                ; 0053e93d | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],ECX  ; 0053e942 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac84],ECX  ; 0053e948 | g_CDemonSetInstance.unk_lighting_param1
    JMP 0x0053e4d5                      ; 0053e94e
        ;   XREF to: 0053e4d5 (UNCONDITIONAL_JUMP)  ; LAB_0053e4d5
    MOV dword ptr [ESP + 0x8],EAX       ; 0053e953
        ;   Label: LAB_0053e953
    JMP 0x0053e6d6                      ; 0053e957
        ;   XREF to: 0053e6d6 (UNCONDITIONAL_JUMP)  ; LAB_0053e6d6
    MOV dword ptr [ESP + 0x10],EAX      ; 0053e95c
        ;   Label: LAB_0053e95c
    JMP 0x0053e75b                      ; 0053e960
        ;   XREF to: 0053e75b (UNCONDITIONAL_JUMP)  ; LAB_0053e75b
    PUSH 0x1                            ; 0053e965
        ;   Label: LAB_0053e965
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0053e967
    PUSH EBX                            ; 0053e96e
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053e96f
    PUSH ESI                            ; 0053e972
    CALL core_mission.cpp_CDemonMission_FUN_00523f20 ; 0053e973
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 0053e978
    PUSH ESI                            ; 0053e97b
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 0053e97c
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0053e981
    MOV EAX,[0x006810c8]                ; 0053e984 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0053e989 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0053e98a
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0053e98f
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053e992
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDX,dword ptr [0x0067b654]      ; 0053e997 | g_CGameInstance | g_CGamePtr
    PUSH EDX                            ; 0053e99d | g_CGameInstance
    CALL core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 ; 0053e99e
        ;   XREF to: 004daed0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
    MOV EAX,[0x006810c8]                ; 0053e9a3 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 0053e9a8 | g_CDemonSetInstance.lighting_quality_mode
    MOV dword ptr [EAX + 0x15ac84],0x0  ; 0053e9b2 | g_CDemonSetInstance.unk_lighting_param1
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 0053e9bc | g_CDemonSetInstance.unk_lighting_param3
    ADD ESP,0x4                         ; 0053e9c6
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 0053e9c9 | g_CDemonSetInstance.unk_lighting_param4
    MOV ESP,EBP                         ; 0053e9d3
    POP EBP                             ; 0053e9d5
    POP EDI                             ; 0053e9d6
    POP ESI                             ; 0053e9d7
    POP EBX                             ; 0053e9d8
    RET                                 ; 0053e9d9

