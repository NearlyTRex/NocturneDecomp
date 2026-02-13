; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[16]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db1f1
;   core_mission.cpp_CDemonMission_process_FUN_00524250 at 00524383
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e292
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 00539184
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a73c
;   core_setedit.cpp_CDemonSet_FUN_0057a940 at 0057a963
;   core_setedit.cpp_CDemonSet_FUN_0057b410 at 0057b4d1
;   core_setedit.cpp_CDemonSet_FUN_0057b500 at 0057b5ea
;   core_setedit.cpp_CDemonSet_FUN_0057b600 at 0057b8f1
;   core_setedit.cpp_CDemonSet_FUN_0057bbe0 at 0057c07c
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_Initializing_scene_00645b9b
;   TerminatedCString s_core_set_cpp_00645bae
;   TerminatedCString s_CDemonSet_initScene_Memo_00645bbe
;   TerminatedCString s_core_set_cpp_00645bff
;   TerminatedCString s_CDemonSet_initScene_Too__00645c0f
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
;   CWeather* g_CWeatherPtr = 03f95dc0
;   CFilterCache g_CFilterCacheInstance
;   CLevelLoader g_CLevelLoaderInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonCamera g_CDemonCameraInstance
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
;   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;   core_dfilter.cpp_CFilterCache_free_FUN_00470000
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
;   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
;   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
;   core_level.cpp_CLevelLoader_update_FUN_00504160
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setdir.cpp_CDemonSet_FUN_00576710
;   core_setdir.cpp_CDemonSet_FUN_00576870
;   core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
;   core_setutil.cpp_C3DSLight_create_FUN_00586a90
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aa10
        ;   Label: core_set.cpp_CDemonSet_initScene_FUN_0056aa10
    PUSH ESI                            ; 0056aa11
    PUSH EDI                            ; 0056aa12
    PUSH EBP                            ; 0056aa13
    SUB ESP,0x4                         ; 0056aa14
    MOV EBX,dword ptr [ESP + 0x18]      ; 0056aa17
    PUSH 0x0                            ; 0056aa1b
    PUSH 0x645b9b                       ; 0056aa1d | = "Initializing scene"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0056aa22
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0056aa27
    PUSH EAX                            ; 0056aa2a
    MOV EDX,dword ptr [0x0067cf80]      ; 0056aa2b | g_CLevelLoaderInstance | g_CLevelLoaderPtr
    PUSH EDX                            ; 0056aa31 | g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_update_FUN_00504160 ; 0056aa32
        ;   XREF to: 00504160 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_00504160(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 0056aa37
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0 ; 0056aa3a
        ;   XREF to: 004729c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0()
    MOV ECX,dword ptr [0x0066efcc]      ; 0056aa3f | g_CFilterCacheInstance | g_CFilterCachePtr
    PUSH ECX                            ; 0056aa45 | g_CFilterCacheInstance
    CALL core_dfilter.cpp_CFilterCache_free_FUN_00470000 ; 0056aa46
        ;   XREF to: 00470000 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterCache_free_FUN_00470000(CFilterCache * this_ptr)
    ADD ESP,0x4                         ; 0056aa4b
    XOR ESI,ESI                         ; 0056aa4e
    PUSH 0x32758e4                      ; 0056aa50 | g_CDemonCameraInstance
    MOV dword ptr [0x032776b4],ESI      ; 0056aa55 | g_DynamicLightCount
    MOV dword ptr [EBX + 0x15acb4],0x0  ; 0056aa5b
    CALL core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 ; 0056aa65
        ;   XREF to: 0044c0f0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0056aa6a
    LEA ESI,[EBX + 0x15ac30]            ; 0056aa6d
    PUSH ESI                            ; 0056aa73
    PUSH 0x32758e4                      ; 0056aa74 | g_CDemonCameraInstance
    MOV EDI,ESI                         ; 0056aa79
    CALL core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640 ; 0056aa7b
        ;   XREF to: 00453640 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)
    LEA EAX,[EBX + 0x15ac54]            ; 0056aa80
    MOV EBP,dword ptr [ESI]             ; 0056aa86
    ADD ESI,0xc                         ; 0056aa88
    MOV dword ptr [EAX],EBP             ; 0056aa8b
    MOV EBP,dword ptr [ESI + -0x8]      ; 0056aa8d
    MOV EDX,EAX                         ; 0056aa90
    MOV dword ptr [EAX + 0x4],EBP       ; 0056aa92
    ADD EAX,0xc                         ; 0056aa95
    MOV EBP,dword ptr [ESI + -0x4]      ; 0056aa98
    ADD ESP,0x8                         ; 0056aa9b
    MOV dword ptr [EAX + -0x4],EBP      ; 0056aa9e
    CMP EAX,ESI                         ; 0056aaa1
    JZ 0x0056aab5                       ; 0056aaa3
        ;   XREF to: 0056aab5 (CONDITIONAL_JUMP)  ; LAB_0056aab5
    MOV ECX,dword ptr [ESI]             ; 0056aaa5
    MOV dword ptr [EAX],ECX             ; 0056aaa7
    MOV ECX,dword ptr [ESI + 0x4]       ; 0056aaa9
    MOV dword ptr [EAX + 0x4],ECX       ; 0056aaac
    MOV ECX,dword ptr [ESI + 0x8]       ; 0056aaaf
    MOV dword ptr [EAX + 0x8],ECX       ; 0056aab2
    MOV EAX,dword ptr [EDI + 0x18]      ; 0056aab5
        ;   Label: LAB_0056aab5
    MOV dword ptr [EDX + 0x18],EAX      ; 0056aab8
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0056aabb
    MOV dword ptr [EDX + 0x1c],EAX      ; 0056aabe
    MOV EAX,dword ptr [EDI + 0x20]      ; 0056aac1
    MOV dword ptr [EDX + 0x20],EAX      ; 0056aac4
    PUSH dword ptr [EBX + 0x14d150]     ; 0056aac7
    PUSH 0x32758e4                      ; 0056aacd | g_CDemonCameraInstance
    MOV EBP,0x645bae                    ; 0056aad2 | = "..\\core\\set.cpp"
    XOR ESI,ESI                         ; 0056aad7
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 0056aad9
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0056aade
    CMP dword ptr [ESI + 0x3276db0],0x0 ; 0056aae1 | g_MasterLightList | DAT_03276db4
        ;   Label: LAB_0056aae1
    JZ 0x0056ab07                       ; 0056aae8
        ;   XREF to: 0056ab07 (CONDITIONAL_JUMP)  ; LAB_0056ab07
    MOV EAX,0x383                       ; 0056aaea
    PUSH 0x645bbe                       ; 0056aaef | = "CDemonSet::initScene - Memory leakage..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0056aaf4 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0056aafa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056aaff
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056ab04
    ADD ESI,0x4                         ; 0056ab07
        ;   Label: LAB_0056ab07
    CMP ESI,0x180                       ; 0056ab0a
    JNZ 0x0056aae1                      ; 0056ab10
        ;   XREF to: 0056aae1 (CONDITIONAL_JUMP)  ; LAB_0056aae1
    MOV ECX,dword ptr [EBX + 0x19a2c]   ; 0056ab12
    XOR EDX,EDX                         ; 0056ab18
    XOR ESI,ESI                         ; 0056ab1a
    MOV dword ptr [0x03276dac],EDX      ; 0056ab1c | g_MasterLightCount
    TEST ECX,ECX                        ; 0056ab22
    JLE 0x0056ab55                      ; 0056ab24
        ;   XREF to: 0056ab55 (CONDITIONAL_JUMP)  ; LAB_0056ab55
    LEA EAX,[EBX + 0x19a30]             ; 0056ab26
    MOV EDI,EBX                         ; 0056ab2c
    MOV dword ptr [ESP],EAX             ; 0056ab2e
    IMUL EBP,ESI,0x1898                 ; 0056ab31
        ;   Label: LAB_0056ab31
    CMP dword ptr [EDI + 0x19a30],0x0   ; 0056ab37
    JZ 0x0056ac3e                       ; 0056ab3e
        ;   XREF to: 0056ac3e (CONDITIONAL_JUMP)  ; LAB_0056ac3e
    INC ESI                             ; 0056ab44
        ;   Label: LAB_0056ab44
    MOV EBP,dword ptr [EBX + 0x19a2c]   ; 0056ab45
    ADD EDI,0x1898                      ; 0056ab4b
    CMP ESI,EBP                         ; 0056ab51
    JL 0x0056ab31                       ; 0056ab53
        ;   XREF to: 0056ab31 (CONDITIONAL_JUMP)  ; LAB_0056ab31
    MOV EAX,[0x03276dac]                ; 0056ab55 | g_MasterLightCount
        ;   Label: LAB_0056ab55
    XOR EDI,EDI                         ; 0056ab5a
    TEST EAX,EAX                        ; 0056ab5c
    JLE 0x0056abb0                      ; 0056ab5e
        ;   XREF to: 0056abb0 (CONDITIONAL_JUMP)  ; LAB_0056abb0
    XOR EBP,EBP                         ; 0056ab60
    PUSH 0x0                            ; 0056ab62
        ;   Label: LAB_0056ab62
    MOV ESI,dword ptr [EBP + 0x3276db0] ; 0056ab64 | g_MasterLightList | DAT_03276db4
    PUSH ESI                            ; 0056ab6a
    CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 ; 0056ab6b
        ;   XREF to: 00472a80 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80(CDemonLight * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 0056ab70
    PUSH ESI                            ; 0056ab73
    CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0 ; 0056ab74
        ;   XREF to: 004735c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0056ab79
    PUSH 0x0                            ; 0056ab7c
    PUSH 0x461c3f9a                     ; 0056ab7e
    PUSH EBX                            ; 0056ab83
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0056ab84
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0056ab89
    PUSH 0x0                            ; 0056ab8c
    PUSH ESI                            ; 0056ab8e
    ADD EBP,0x4                         ; 0056ab8f
    INC EDI                             ; 0056ab92
    CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 ; 0056ab93
        ;   XREF to: 00472d30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight * this_ptr)
    MOV EDX,dword ptr [0x03276dac]      ; 0056ab98 | g_MasterLightCount
    ADD ESP,0x8                         ; 0056ab9e
    CMP EDI,EDX                         ; 0056aba1
    JL 0x0056ab62                       ; 0056aba3
        ;   XREF to: 0056ab62 (CONDITIONAL_JUMP)  ; LAB_0056ab62
    LEA EAX,[EAX]                       ; 0056aba5
    LEA EDX,[EDX]                       ; 0056abab
    MOV EBX,EBX                         ; 0056abae
    MOV dword ptr [EBX + 0x15aea4],0xffffffff ; 0056abb0
        ;   Label: LAB_0056abb0
    PUSH EBX                            ; 0056abba
    MOV dword ptr [EBX + 0x15aea8],0xffffffff ; 0056abbb
    XOR ECX,ECX                         ; 0056abc5
    XOR ESI,ESI                         ; 0056abc7
    MOV dword ptr [0x03276f30],ECX      ; 0056abc9 | g_ActiveLightCount
    MOV dword ptr [0x03277d80],ECX      ; 0056abcf | DAT_03277d80
    MOV dword ptr [0x032776c8],ECX      ; 0056abd5 | g_CoronaGlobeCount
    MOV dword ptr [0x0327785c],ECX      ; 0056abdb | DAT_0327785c
    MOV dword ptr [EBX + 0x15aeac],ECX  ; 0056abe1
    CALL core_setdir.cpp_CDemonSet_FUN_00576710 ; 0056abe7
        ;   XREF to: 00576710 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576710(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0056abec
    ADD ESP,0x4                         ; 0056abee
    TEST EAX,EAX                        ; 0056abf1
    JLE 0x0056ac20                      ; 0056abf3
        ;   XREF to: 0056ac20 (CONDITIONAL_JUMP)  ; LAB_0056ac20
    MOV EDI,EBX                         ; 0056abf5
    LEA EBP,[EBX + 0x104]               ; 0056abf7
    PUSH EBP                            ; 0056abfd
        ;   Label: LAB_0056abfd
    PUSH EBX                            ; 0056abfe
    ADD EDI,0x1a4                       ; 0056abff
    INC ESI                             ; 0056ac05
    CALL core_setdir.cpp_CDemonSet_FUN_00576870 ; 0056ac06
        ;   XREF to: 00576870 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576870(CDemonSet * this_ptr)
    MOV dword ptr [EDI + -0x4],EAX      ; 0056ac0b
    ADD EBP,0x1a4                       ; 0056ac0e
    MOV EDX,dword ptr [EBX]             ; 0056ac14
    ADD ESP,0x8                         ; 0056ac16
    CMP ESI,EDX                         ; 0056ac19
    JL 0x0056abfd                       ; 0056ac1b
        ;   XREF to: 0056abfd (CONDITIONAL_JUMP)  ; LAB_0056abfd
    LEA EAX,[EAX]                       ; 0056ac1d
    MOV ECX,dword ptr [EBX + 0x161668]  ; 0056ac20
        ;   Label: LAB_0056ac20
    PUSH ECX                            ; 0056ac26
    MOV EBX,dword ptr [0x006848fc]      ; 0056ac27 | g_CWeatherInstance | g_CWeatherPtr
    PUSH EBX                            ; 0056ac2d | g_CWeatherInstance
    CALL core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0 ; 0056ac2e
        ;   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather * this_ptr, int type)
    ADD ESP,0x8                         ; 0056ac33
    ADD ESP,0x4                         ; 0056ac36
    POP EBP                             ; 0056ac39
    POP EDI                             ; 0056ac3a
    POP ESI                             ; 0056ac3b
    POP EBX                             ; 0056ac3c
    RET                                 ; 0056ac3d
    ADD EBP,dword ptr [ESP]             ; 0056ac3e
        ;   Label: LAB_0056ac3e
    PUSH EBP                            ; 0056ac41
    CALL core_setutil.cpp_C3DSLight_create_FUN_00586a90 ; 0056ac42
        ;   XREF to: 00586a90 (UNCONDITIONAL_CALL)  ; CDemonLight * core_setutil.cpp_C3DSLight_create_FUN_00586a90(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 0056ac47
    PUSH EAX                            ; 0056ac4a
    MOV EDX,dword ptr [0x03276dac]      ; 0056ac4b | g_MasterLightCount
    PUSH EBP                            ; 0056ac51
    MOV dword ptr [EDX*0x4 + 0x3276db0],EAX ; 0056ac52 | g_MasterLightList
    CALL core_setutil.cpp_C3DSLight_apply_FUN_00586bf0 ; 0056ac59
        ;   XREF to: 00586bf0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight * this_ptr, CDemonLight * light)
    MOV EDX,dword ptr [0x03276dac]      ; 0056ac5e | g_MasterLightCount
    INC EDX                             ; 0056ac64
    ADD ESP,0x8                         ; 0056ac65
    MOV dword ptr [0x03276dac],EDX      ; 0056ac68 | g_MasterLightCount
    CMP EDX,0x60                        ; 0056ac6e
    JLE 0x0056ab44                      ; 0056ac71
        ;   XREF to: 0056ab44 (CONDITIONAL_JUMP)  ; LAB_0056ab44
    MOV EBP,0x645bff                    ; 0056ac77 | = "..\\core\\set.cpp"
    MOV EAX,0x39a                       ; 0056ac7c
    PUSH 0x645c0f                       ; 0056ac81 | = "CDemonSet::initScene - Too many spotl..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0056ac86 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0056ac8c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0056ac91
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0056ac96
    JMP 0x0056ab44                      ; 0056ac99
        ;   XREF to: 0056ab44 (UNCONDITIONAL_JUMP)  ; LAB_0056ab44

