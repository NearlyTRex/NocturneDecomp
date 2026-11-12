; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0052d980(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6417
;   core_mission.cpp_CDemonMission_process_FUN_004fc940 at 004fca5a
;   core_set.cpp_FUN_0052d3be at 0052d68c
;
; Referenced Globals:
;   TerminatedCString s_Initializing_scene_005e5708
;   TerminatedCString s_core_set_cpp_005e571b
;   TerminatedCString s_CDemonSet_initScene_Memo_005e572b
;   TerminatedCString s_core_set_cpp_005e576c
;   TerminatedCString s_CDemonSet_initScene_Too_005e577c
;   CFilterCache* g_CFilterCachePtr = 015111a8
;   undefined4 DAT_00617e10
;   undefined4 DAT_0061e8f4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01fc8d00
;   undefined4 DAT_01fc8d04
;   undefined4 DAT_01fc8d08
;   undefined4 DAT_01fc8e84
;   undefined4 DAT_01fc9608
;   ... and 3 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043b4c0
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
;   core_dfilter.cpp_CFilterCache_free_FUN_00447610
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60
;   core_level.cpp_CLevelLoader_update_FUN_004e1600
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760
;   core_setutil.cpp_C3DSLight_apply_FUN_0053b810
;   core_setutil.cpp_C3DSLight_create_FUN_0053b6b0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d980
        ;   Label: core_set.cpp_CDemonSet_initScene_FUN_0052d980
    PUSH ESI                            ; 0052d981
    PUSH EDI                            ; 0052d982
    PUSH EBP                            ; 0052d983
    SUB ESP,0x4                         ; 0052d984
    MOV ESI,dword ptr [ESP + 0x18]      ; 0052d987
    PUSH 0x0                            ; 0052d98b
    PUSH 0x5e5708                       ; 0052d98d | = "Initializing scene"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 0052d992
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 0052d997
    PUSH EAX                            ; 0052d99a
    MOV EDX,dword ptr [0x00617e10]      ; 0052d99b | DAT_00617e10
    PUSH EDX                            ; 0052d9a1
    CALL core_level.cpp_CLevelLoader_update_FUN_004e1600 ; 0052d9a2
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0052d9a7
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60 ; 0052d9aa
        ;   XREF to: 00449f60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_00449f60()
    MOV ECX,dword ptr [0x0060a0b4]      ; 0052d9af | g_CFilterCachePtr
    PUSH ECX                            ; 0052d9b5
    XOR EBX,EBX                         ; 0052d9b6
    CALL core_dfilter.cpp_CFilterCache_free_FUN_00447610 ; 0052d9b8
        ;   XREF to: 00447610 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_00447610(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0052d9bd
    MOV dword ptr [0x01fc9608],EBX      ; 0052d9c0 | DAT_01fc9608
    MOV dword ptr [ESI + 0x15acc8],0x0  ; 0052d9c6
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 0052d9d0
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH 0x1fc7838                      ; 0052d9d5
    CALL core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043b4c0 ; 0052d9da
        ;   XREF to: 0043b4c0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043b4c0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0052d9df
    LEA EBX,[ESI + 0x15ac40]            ; 0052d9e2
    PUSH EBX                            ; 0052d9e8
    PUSH 0x1fc7838                      ; 0052d9e9
    MOV EDI,EBX                         ; 0052d9ee
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0 ; 0052d9f0
        ;   XREF to: 00442bf0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00442bf0(CDemonCamera * this_ptr, SFog * fog_config)
    LEA EAX,[ESI + 0x15ac64]            ; 0052d9f5
    MOV EBP,dword ptr [EBX]             ; 0052d9fb
    ADD EBX,0xc                         ; 0052d9fd
    MOV dword ptr [EAX],EBP             ; 0052da00
    MOV EBP,dword ptr [EBX + -0x8]      ; 0052da02
    MOV EDX,EAX                         ; 0052da05
    MOV dword ptr [EAX + 0x4],EBP       ; 0052da07
    ADD EAX,0xc                         ; 0052da0a
    MOV EBP,dword ptr [EBX + -0x4]      ; 0052da0d
    ADD ESP,0x8                         ; 0052da10
    MOV dword ptr [EAX + -0x4],EBP      ; 0052da13
    CMP EAX,EBX                         ; 0052da16
    JZ 0x0052da2a                       ; 0052da18
        ;   XREF to: 0052da2a (CONDITIONAL_JUMP)  ; LAB_0052da2a
    MOV ECX,dword ptr [EBX]             ; 0052da1a
    MOV dword ptr [EAX],ECX             ; 0052da1c
    MOV ECX,dword ptr [EBX + 0x4]       ; 0052da1e
    MOV dword ptr [EAX + 0x4],ECX       ; 0052da21
    MOV ECX,dword ptr [EBX + 0x8]       ; 0052da24
    MOV dword ptr [EAX + 0x8],ECX       ; 0052da27
    MOV EAX,dword ptr [EDI + 0x18]      ; 0052da2a
        ;   Label: LAB_0052da2a
    MOV dword ptr [EDX + 0x18],EAX      ; 0052da2d
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0052da30
    MOV dword ptr [EDX + 0x1c],EAX      ; 0052da33
    MOV EAX,dword ptr [EDI + 0x20]      ; 0052da36
    MOV dword ptr [EDX + 0x20],EAX      ; 0052da39
    PUSH dword ptr [ESI + 0x14d150]     ; 0052da3c
    PUSH 0x1fc7838                      ; 0052da42
    MOV EBP,0x5e571b                    ; 0052da47 | = "..\\core\\set.cpp"
    XOR EBX,EBX                         ; 0052da4c
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0052da4e
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0052da53
    CMP dword ptr [EBX + 0x1fc8d04],0x0 ; 0052da56
        ;   Label: LAB_0052da56
    JZ 0x0052da7c                       ; 0052da5d
        ;   XREF to: 0052da7c (CONDITIONAL_JUMP)  ; LAB_0052da7c
    MOV EAX,0x3e4                       ; 0052da5f
    PUSH 0x5e572b                       ; 0052da64 | = "CDemonSet::initScene - Memory leakage..."
    MOV dword ptr [0x01d046a0],EBP      ; 0052da69 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0052da6f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052da74
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0052da79
    ADD EBX,0x4                         ; 0052da7c
        ;   Label: LAB_0052da7c
    CMP EBX,0x180                       ; 0052da7f
    JNZ 0x0052da56                      ; 0052da85
        ;   XREF to: 0052da56 (CONDITIONAL_JUMP)  ; LAB_0052da56
    MOV ECX,dword ptr [ESI + 0x19a2c]   ; 0052da87
    XOR EDX,EDX                         ; 0052da8d
    XOR EBX,EBX                         ; 0052da8f
    MOV dword ptr [0x01fc8d00],EDX      ; 0052da91 | DAT_01fc8d00
    TEST ECX,ECX                        ; 0052da97
    JLE 0x0052daca                      ; 0052da99
        ;   XREF to: 0052daca (CONDITIONAL_JUMP)  ; LAB_0052daca
    LEA EAX,[ESI + 0x19a30]             ; 0052da9b
    MOV EDI,ESI                         ; 0052daa1
    MOV dword ptr [ESP],EAX             ; 0052daa3
    IMUL EBP,EBX,0x1898                 ; 0052daa6
        ;   Label: LAB_0052daa6
    CMP dword ptr [EDI + 0x19a30],0x0   ; 0052daac
    JZ 0x0052dbae                       ; 0052dab3
        ;   XREF to: 0052dbae (CONDITIONAL_JUMP)  ; LAB_0052dbae
    INC EBX                             ; 0052dab9
        ;   Label: LAB_0052dab9
    MOV EBP,dword ptr [ESI + 0x19a2c]   ; 0052daba
    ADD EDI,0x1898                      ; 0052dac0
    CMP EBX,EBP                         ; 0052dac6
    JL 0x0052daa6                       ; 0052dac8
        ;   XREF to: 0052daa6 (CONDITIONAL_JUMP)  ; LAB_0052daa6
    MOV EAX,[0x01fc8d00]                ; 0052daca | DAT_01fc8d00
        ;   Label: LAB_0052daca
    XOR EDI,EDI                         ; 0052dacf
    TEST EAX,EAX                        ; 0052dad1
    JLE 0x0052db20                      ; 0052dad3
        ;   XREF to: 0052db20 (CONDITIONAL_JUMP)  ; LAB_0052db20
    XOR EBP,EBP                         ; 0052dad5
    PUSH 0x0                            ; 0052dad7
        ;   Label: LAB_0052dad7
    MOV EBX,dword ptr [EBP + 0x1fc8d04] ; 0052dad9 | DAT_01fc8d04 | DAT_01fc8d08
    PUSH EBX                            ; 0052dadf
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 ; 0052dae0
        ;   XREF to: 0044a020 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0052dae5
    PUSH EBX                            ; 0052dae8
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60 ; 0052dae9
        ;   XREF to: 0044ab60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0052daee
    PUSH 0x0                            ; 0052daf1
    PUSH 0x461c3f9a                     ; 0052daf3
    PUSH ESI                            ; 0052daf8
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 0052daf9
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0052dafe
    PUSH 0x0                            ; 0052db01
    PUSH EBX                            ; 0052db03
    ADD EBP,0x4                         ; 0052db04
    INC EDI                             ; 0052db07
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 ; 0052db08
        ;   XREF to: 0044a2d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0(CDemonLight * this_ptr, int restore_viewport_state)
    MOV EDX,dword ptr [0x01fc8d00]      ; 0052db0d | DAT_01fc8d00
    ADD ESP,0x8                         ; 0052db13
    CMP EDI,EDX                         ; 0052db16
    JL 0x0052dad7                       ; 0052db18
        ;   XREF to: 0052dad7 (CONDITIONAL_JUMP)  ; LAB_0052dad7
    LEA EAX,[EAX]                       ; 0052db1a
    MOV dword ptr [ESI + 0x15aeb8],0xffffffff ; 0052db20
        ;   Label: LAB_0052db20
    PUSH ESI                            ; 0052db2a
    MOV dword ptr [ESI + 0x15aebc],0xffffffff ; 0052db2b
    XOR ECX,ECX                         ; 0052db35
    XOR EBX,EBX                         ; 0052db37
    MOV dword ptr [0x01fc8e84],ECX      ; 0052db39 | DAT_01fc8e84
    MOV dword ptr [0x01fc9cd4],ECX      ; 0052db3f | DAT_01fc9cd4
    MOV dword ptr [0x01fc961c],ECX      ; 0052db45 | DAT_01fc961c
    MOV dword ptr [0x01fc97b0],ECX      ; 0052db4b | DAT_01fc97b0
    MOV dword ptr [ESI + 0x15aec0],ECX  ; 0052db51
    CALL core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610 ; 0052db57
        ;   XREF to: 0053a610 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610(CDemonSet * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 0052db5c
    ADD ESP,0x4                         ; 0052db5e
    TEST EAX,EAX                        ; 0052db61
    JLE 0x0052db90                      ; 0052db63
        ;   XREF to: 0052db90 (CONDITIONAL_JUMP)  ; LAB_0052db90
    MOV EDI,ESI                         ; 0052db65
    LEA EBP,[ESI + 0x104]               ; 0052db67
    PUSH EBP                            ; 0052db6d
        ;   Label: LAB_0052db6d
    PUSH ESI                            ; 0052db6e
    ADD EDI,0x1a4                       ; 0052db6f
    INC EBX                             ; 0052db75
    CALL core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760 ; 0052db76
        ;   XREF to: 0053a760 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760(CDemonSet * this_ptr, CVector3f * position)
    MOV dword ptr [EDI + -0x4],EAX      ; 0052db7b
    ADD EBP,0x1a4                       ; 0052db7e
    MOV EDX,dword ptr [ESI]             ; 0052db84
    ADD ESP,0x8                         ; 0052db86
    CMP EBX,EDX                         ; 0052db89
    JL 0x0052db6d                       ; 0052db8b
        ;   XREF to: 0052db6d (CONDITIONAL_JUMP)  ; LAB_0052db6d
    LEA EAX,[EAX]                       ; 0052db8d
    MOV ECX,dword ptr [ESI + 0x16167c]  ; 0052db90
        ;   Label: LAB_0052db90
    PUSH ECX                            ; 0052db96
    MOV EBX,dword ptr [0x0061e8f4]      ; 0052db97 | DAT_0061e8f4
    PUSH EBX                            ; 0052db9d
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_0058b470 ; 0052db9e
        ;   XREF to: 0058b470 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_0058b470(CWeather * this_ptr, EWeatherType type)
    ADD ESP,0x8                         ; 0052dba3
    ADD ESP,0x4                         ; 0052dba6
    POP EBP                             ; 0052dba9
    POP EDI                             ; 0052dbaa
    POP ESI                             ; 0052dbab
    POP EBX                             ; 0052dbac
    RET                                 ; 0052dbad
    ADD EBP,dword ptr [ESP]             ; 0052dbae
        ;   Label: LAB_0052dbae
    PUSH EBP                            ; 0052dbb1
    CALL core_setutil.cpp_C3DSLight_create_FUN_0053b6b0 ; 0052dbb2
        ;   XREF to: 0053b6b0 (UNCONDITIONAL_CALL)  ; CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_0053b6b0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0052dbb7
    PUSH EAX                            ; 0052dbba
    MOV EDX,dword ptr [0x01fc8d00]      ; 0052dbbb | DAT_01fc8d00
    PUSH EBP                            ; 0052dbc1
    MOV dword ptr [EDX*0x4 + 0x1fc8d04],EAX ; 0052dbc2 | DAT_01fc8d04
    CALL core_setutil.cpp_C3DSLight_apply_FUN_0053b810 ; 0052dbc9
        ;   XREF to: 0053b810 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_apply_FUN_0053b810(C3DSLight * this_ptr, CDemonLight * light)
    MOV EDX,dword ptr [0x01fc8d00]      ; 0052dbce | DAT_01fc8d00
    INC EDX                             ; 0052dbd4
    ADD ESP,0x8                         ; 0052dbd5
    MOV dword ptr [0x01fc8d00],EDX      ; 0052dbd8 | DAT_01fc8d00
    CMP EDX,0x60                        ; 0052dbde
    JLE 0x0052dab9                      ; 0052dbe1
        ;   XREF to: 0052dab9 (CONDITIONAL_JUMP)  ; LAB_0052dab9
    MOV EBP,0x5e576c                    ; 0052dbe7 | = "..\\core\\set.cpp"
    MOV EAX,0x3fb                       ; 0052dbec
    PUSH 0x5e577c                       ; 0052dbf1 | = "CDemonSet::initScene - Too many spotl..."
    MOV dword ptr [0x01d046a0],EBP      ; 0052dbf6 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0052dbfc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0052dc01
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0052dc06
    JMP 0x0052dab9                      ; 0052dc09
        ;   XREF to: 0052dab9 (UNCONDITIONAL_JUMP)  ; LAB_0052dab9

