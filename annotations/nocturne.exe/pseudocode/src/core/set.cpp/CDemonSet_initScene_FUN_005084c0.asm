; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_initScene_FUN_005084c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dc82
;   core_mission.cpp_CDemonMission_process_FUN_004d92a0 at 004d93b3
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80 at 005083f0
;
; Referenced Globals:
;   TerminatedCString s_Initializing_scene_00590382
;   TerminatedCString s_core_set_cpp_00590395
;   TerminatedCString s_CDemonSet_initScene_Memo_005903a5
;   TerminatedCString s_core_set_cpp_005903e6
;   TerminatedCString s_CDemonSet_initScene_Too_005903f6
;   undefined4 DAT_005ad54c
;   CLevelLoader* g_CLevelLoader_PTR_005baca0 = 01cc3160
;   undefined4 DAT_005c15b8
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01fb99d0
;   undefined4 DAT_01fb99d4
;   undefined4 DAT_01fb99d8
;   undefined4 DAT_01fb9b54
;   undefined4 DAT_01fba2d8
;   ... and 3 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
;   core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0
;   core_main.c_FUN_004c8440
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
;   core_setutil.cpp_C3DSLight_apply_FUN_00515350
;   core_setutil.cpp_C3DSLight_create_FUN_005151f0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005084c0
        ;   Label: core_set.cpp_CDemonSet_initScene_FUN_005084c0
    PUSH ESI                            ; 005084c1
    PUSH EDI                            ; 005084c2
    PUSH EBP                            ; 005084c3
    SUB ESP,0x4                         ; 005084c4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005084c7
    PUSH 0x0                            ; 005084cb
    PUSH 0x590382                       ; 005084cd | = "Initializing scene"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 005084d2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 005084d7
    PUSH EAX                            ; 005084da
    MOV EDX,dword ptr [0x005baca0]      ; 005084db | g_CLevelLoader_PTR_005baca0
    PUSH EDX                            ; 005084e1
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 005084e2
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 005084e7
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0 ; 005084ea
        ;   XREF to: 0044e3b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0()
    MOV ECX,dword ptr [0x005ad54c]      ; 005084ef | DAT_005ad54c
    PUSH ECX                            ; 005084f5
    CALL core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0 ; 005084f6
        ;   XREF to: 0044bcd0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 005084fb
    XOR ESI,ESI                         ; 005084fe
    PUSH 0x1fb8508                      ; 00508500
    MOV dword ptr [0x01fba2d8],ESI      ; 00508505 | DAT_01fba2d8
    MOV dword ptr [EBX + 0x15a8cc],0x0  ; 0050850b
    CALL core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50 ; 00508515
        ;   XREF to: 0043ff50 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0050851a
    LEA ESI,[EBX + 0x15a848]            ; 0050851d
    PUSH ESI                            ; 00508523
    PUSH 0x1fb8508                      ; 00508524
    MOV EDI,ESI                         ; 00508529
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0 ; 0050852b
        ;   XREF to: 004474e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0(CDemonCamera * this_ptr, SFog * fog_config)
    LEA EAX,[EBX + 0x15a86c]            ; 00508530
    MOV EBP,dword ptr [ESI]             ; 00508536
    ADD ESI,0xc                         ; 00508538
    MOV dword ptr [EAX],EBP             ; 0050853b
    MOV EBP,dword ptr [ESI + -0x8]      ; 0050853d
    MOV EDX,EAX                         ; 00508540
    MOV dword ptr [EAX + 0x4],EBP       ; 00508542
    ADD EAX,0xc                         ; 00508545
    MOV EBP,dword ptr [ESI + -0x4]      ; 00508548
    ADD ESP,0x8                         ; 0050854b
    MOV dword ptr [EAX + -0x4],EBP      ; 0050854e
    CMP EAX,ESI                         ; 00508551
    JZ 0x00508565                       ; 00508553
        ;   XREF to: 00508565 (CONDITIONAL_JUMP)  ; LAB_00508565
    MOV ECX,dword ptr [ESI]             ; 00508555
    MOV dword ptr [EAX],ECX             ; 00508557
    MOV ECX,dword ptr [ESI + 0x4]       ; 00508559
    MOV dword ptr [EAX + 0x4],ECX       ; 0050855c
    MOV ECX,dword ptr [ESI + 0x8]       ; 0050855f
    MOV dword ptr [EAX + 0x8],ECX       ; 00508562
    MOV EAX,dword ptr [EDI + 0x18]      ; 00508565
        ;   Label: LAB_00508565
    MOV dword ptr [EDX + 0x18],EAX      ; 00508568
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0050856b
    MOV dword ptr [EDX + 0x1c],EAX      ; 0050856e
    MOV EAX,dword ptr [EDI + 0x20]      ; 00508571
    MOV dword ptr [EDX + 0x20],EAX      ; 00508574
    PUSH dword ptr [EBX + 0x14cd68]     ; 00508577
    PUSH 0x1fb8508                      ; 0050857d
    MOV EBP,0x590395                    ; 00508582 | = "..\\core\\set.cpp"
    XOR ESI,ESI                         ; 00508587
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740 ; 00508589
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0050858e
    CMP dword ptr [ESI + 0x1fb99d4],0x0 ; 00508591 | DAT_01fb99d4 | DAT_01fb99d8
        ;   Label: LAB_00508591
    JZ 0x005085b7                       ; 00508598
        ;   XREF to: 005085b7 (CONDITIONAL_JUMP)  ; LAB_005085b7
    MOV EAX,0x35b                       ; 0050859a
    PUSH 0x5903a5                       ; 0050859f | = "CDemonSet::initScene - Memory leakage..."
    MOV dword ptr [0x01cc4800],EBP      ; 005085a4 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 005085aa | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005085af
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005085b4
    ADD ESI,0x4                         ; 005085b7
        ;   Label: LAB_005085b7
    CMP ESI,0x180                       ; 005085ba
    JNZ 0x00508591                      ; 005085c0
        ;   XREF to: 00508591 (CONDITIONAL_JUMP)  ; LAB_00508591
    MOV ECX,dword ptr [EBX + 0x19644]   ; 005085c2
    XOR EDX,EDX                         ; 005085c8
    XOR ESI,ESI                         ; 005085ca
    MOV dword ptr [0x01fb99d0],EDX      ; 005085cc | DAT_01fb99d0
    TEST ECX,ECX                        ; 005085d2
    JLE 0x00508605                      ; 005085d4
        ;   XREF to: 00508605 (CONDITIONAL_JUMP)  ; LAB_00508605
    LEA EAX,[EBX + 0x19648]             ; 005085d6
    MOV EDI,EBX                         ; 005085dc
    MOV dword ptr [ESP],EAX             ; 005085de
    IMUL EBP,ESI,0x1898                 ; 005085e1
        ;   Label: LAB_005085e1
    CMP dword ptr [EDI + 0x19648],0x0   ; 005085e7
    JZ 0x005086ee                       ; 005085ee
        ;   XREF to: 005086ee (CONDITIONAL_JUMP)  ; LAB_005086ee
    INC ESI                             ; 005085f4
        ;   Label: LAB_005085f4
    MOV EBP,dword ptr [EBX + 0x19644]   ; 005085f5
    ADD EDI,0x1898                      ; 005085fb
    CMP ESI,EBP                         ; 00508601
    JL 0x005085e1                       ; 00508603
        ;   XREF to: 005085e1 (CONDITIONAL_JUMP)  ; LAB_005085e1
    MOV EAX,[0x01fb99d0]                ; 00508605 | DAT_01fb99d0
        ;   Label: LAB_00508605
    XOR EDI,EDI                         ; 0050860a
    TEST EAX,EAX                        ; 0050860c
    JLE 0x00508660                      ; 0050860e
        ;   XREF to: 00508660 (CONDITIONAL_JUMP)  ; LAB_00508660
    XOR EBP,EBP                         ; 00508610
    PUSH 0x0                            ; 00508612
        ;   Label: LAB_00508612
    MOV ESI,dword ptr [EBP + 0x1fb99d4] ; 00508614 | DAT_01fb99d4 | DAT_01fb99d8
    PUSH ESI                            ; 0050861a
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 ; 0050861b
        ;   XREF to: 0044e470 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00508620
    PUSH ESI                            ; 00508623
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0 ; 00508624
        ;   XREF to: 0044efb0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00508629
    PUSH 0x0                            ; 0050862c
    PUSH 0x461c3f9a                     ; 0050862e
    PUSH EBX                            ; 00508633
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 ; 00508634
        ;   XREF to: 00507c80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00508639
    PUSH 0x0                            ; 0050863c
    PUSH ESI                            ; 0050863e
    ADD EBP,0x4                         ; 0050863f
    INC EDI                             ; 00508642
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 ; 00508643
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044e720(CDemonLight * this_ptr, int restore_viewport_state)
    MOV EDX,dword ptr [0x01fb99d0]      ; 00508648 | DAT_01fb99d0
    ADD ESP,0x8                         ; 0050864e
    CMP EDI,EDX                         ; 00508651
    JL 0x00508612                       ; 00508653
        ;   XREF to: 00508612 (CONDITIONAL_JUMP)  ; LAB_00508612
    LEA EAX,[EAX]                       ; 00508655
    LEA EDX,[EDX]                       ; 0050865b
    MOV EBX,EBX                         ; 0050865e
    MOV dword ptr [EBX + 0x15aabc],0xffffffff ; 00508660
        ;   Label: LAB_00508660
    PUSH EBX                            ; 0050866a
    MOV dword ptr [EBX + 0x15aac0],0xffffffff ; 0050866b
    XOR ECX,ECX                         ; 00508675
    XOR ESI,ESI                         ; 00508677
    MOV dword ptr [0x01fb9b54],ECX      ; 00508679 | DAT_01fb9b54
    MOV dword ptr [0x01fba9a4],ECX      ; 0050867f | DAT_01fba9a4
    MOV dword ptr [0x01fba2ec],ECX      ; 00508685 | DAT_01fba2ec
    MOV dword ptr [0x01fba480],ECX      ; 0050868b | DAT_01fba480
    MOV dword ptr [EBX + 0x15aac4],ECX  ; 00508691
    CALL core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0 ; 00508697
        ;   XREF to: 005141f0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0050869c
    ADD ESP,0x4                         ; 0050869e
    TEST EAX,EAX                        ; 005086a1
    JLE 0x005086d0                      ; 005086a3
        ;   XREF to: 005086d0 (CONDITIONAL_JUMP)  ; LAB_005086d0
    MOV EDI,EBX                         ; 005086a5
    LEA EBP,[EBX + 0x104]               ; 005086a7
    PUSH EBP                            ; 005086ad
        ;   Label: LAB_005086ad
    PUSH EBX                            ; 005086ae
    ADD EDI,0x1a0                       ; 005086af
    INC ESI                             ; 005086b5
    CALL core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340 ; 005086b6
        ;   XREF to: 00514340 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340()
    MOV dword ptr [EDI + -0x4],EAX      ; 005086bb
    ADD EBP,0x1a0                       ; 005086be
    MOV EDX,dword ptr [EBX]             ; 005086c4
    ADD ESP,0x8                         ; 005086c6
    CMP ESI,EDX                         ; 005086c9
    JL 0x005086ad                       ; 005086cb
        ;   XREF to: 005086ad (CONDITIONAL_JUMP)  ; LAB_005086ad
    LEA EAX,[EAX]                       ; 005086cd
    MOV ECX,dword ptr [EBX + 0x161280]  ; 005086d0
        ;   Label: LAB_005086d0
    PUSH ECX                            ; 005086d6
    MOV EBX,dword ptr [0x005c15b8]      ; 005086d7 | DAT_005c15b8
    PUSH EBX                            ; 005086dd
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_00555750 ; 005086de
        ;   XREF to: 00555750 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_00555750(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 005086e3
    ADD ESP,0x4                         ; 005086e6
    POP EBP                             ; 005086e9
    POP EDI                             ; 005086ea
    POP ESI                             ; 005086eb
    POP EBX                             ; 005086ec
    RET                                 ; 005086ed
    ADD EBP,dword ptr [ESP]             ; 005086ee
        ;   Label: LAB_005086ee
    PUSH EBP                            ; 005086f1
    CALL core_setutil.cpp_C3DSLight_create_FUN_005151f0 ; 005086f2
        ;   XREF to: 005151f0 (UNCONDITIONAL_CALL)  ; CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_005151f0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 005086f7
    PUSH EAX                            ; 005086fa
    MOV EDX,dword ptr [0x01fb99d0]      ; 005086fb | DAT_01fb99d0
    PUSH EBP                            ; 00508701
    MOV dword ptr [EDX*0x4 + 0x1fb99d4],EAX ; 00508702 | DAT_01fb99d4
    CALL core_setutil.cpp_C3DSLight_apply_FUN_00515350 ; 00508709
        ;   XREF to: 00515350 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_C3DSLight_apply_FUN_00515350()
    MOV EDX,dword ptr [0x01fb99d0]      ; 0050870e | DAT_01fb99d0
    INC EDX                             ; 00508714
    ADD ESP,0x8                         ; 00508715
    MOV dword ptr [0x01fb99d0],EDX      ; 00508718 | DAT_01fb99d0
    CMP EDX,0x60                        ; 0050871e
    JLE 0x005085f4                      ; 00508721
        ;   XREF to: 005085f4 (CONDITIONAL_JUMP)  ; LAB_005085f4
    MOV EBP,0x5903e6                    ; 00508727 | = "..\\core\\set.cpp"
    MOV EAX,0x372                       ; 0050872c
    PUSH 0x5903f6                       ; 00508731 | = "CDemonSet::initScene - Too many spotl..."
    MOV dword ptr [0x01cc4800],EBP      ; 00508736 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0050873c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00508741
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00508746
    JMP 0x005085f4                      ; 00508749
        ;   XREF to: 005085f4 (UNCONDITIONAL_JUMP)  ; LAB_005085f4

