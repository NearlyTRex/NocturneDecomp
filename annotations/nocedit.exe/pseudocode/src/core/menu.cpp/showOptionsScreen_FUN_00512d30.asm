; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)
;
; Parameters:
; int              Stack[0x4]:4   initialize_systems
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db88f
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 0051342b
;
; Referenced Globals:
;   void* switchdataD_00512d1c = 00512e5d
;   TerminatedCString s_Graphic_options_00636d7f
;   TerminatedCString s_Sound_options_00636d8f
;   TerminatedCString s_Control_options_00636d9d
;   TerminatedCString s_Credits_00636dad
;   TerminatedCString s_Option_Menu_00636db5
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CSound* g_CSoundPtr = 03f6af64
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.game_control
;   undefined4 g_CGameInstance.hero_number
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;   CMoon g_CMoonInstance
;   ... and 7 more
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004e4010
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_inivar.cpp_writeIniData_FUN_004fc510
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
;   core_menu.cpp_configureCustomKeys_FUN_00511890
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80
;   core_menu.cpp_configureSoundOptions_FUN_00511e50
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
;   core_moon.cpp_CMoon_free_FUN_00529ce0
;   core_moon.cpp_CMoon_init_FUN_00529ae0
;   core_moon.cpp_CMoon_render_FUN_00529ed0
;   core_moon.cpp_CMoon_update_FUN_00529d60
;   core_sound.cpp_CSound_configure_FUN_005b3830
;   core_sound.cpp_CSound_reset_FUN_005b39a0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512d30
        ;   Label: core_menu.cpp_showOptionsScreen_FUN_00512d30
    PUSH EDI                            ; 00512d31
    PUSH EBP                            ; 00512d32
    SUB ESP,0x4                         ; 00512d33
    XOR EDX,EDX                         ; 00512d36
    MOV ECX,dword ptr [ESP + 0x14]      ; 00512d38
    MOV dword ptr [ESP],EDX             ; 00512d3c
    TEST ECX,ECX                        ; 00512d3f
    JNZ 0x00512e91                      ; 00512d41 | LAB_00512e91
        ;   XREF to: 00512e91 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00512d47
        ;   Label: LAB_00512d47
    MOV ESI,dword ptr [0x0067b654]      ; 00512d48 | CGame * g_CGamePtr
    PUSH ESI                            ; 00512d4e | CGame g_CGameInstance
    MOV EBX,0x2f28a50                   ; 00512d4f | char[4][256] g_OptionsMenuTextBuffers
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00512d54 | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512d59
    XOR EAX,EAX                         ; 00512d5c
    POP ESI                             ; 00512d5e
    MOV dword ptr [EAX + 0x2f28e50],EBX ; 00512d5f | char *[4] g_OptionsMenuPointers | char[4][256] g_OptionsMenuTextBuffers
        ;   Label: LAB_00512d5f
    ADD EAX,0x4                         ; 00512d65
    ADD EBX,0x100                       ; 00512d68 | DAT_02f28c50
    CMP EAX,0x10                        ; 00512d6e
    JNZ 0x00512d5f                      ; 00512d71 | LAB_00512d5f
        ;   XREF to: 00512d5f (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0067b654]      ; 00512d73 | CGame * g_CGamePtr
        ;   Label: LAB_00512d73
    PUSH EDI                            ; 00512d79 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 00512d7a | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00512d7f | CGame * g_CGamePtr
    ADD ESP,0x4                         ; 00512d84
    MOV EAX,dword ptr [EAX + 0x264]     ; 00512d87 | g_CGameInstance.delta_time_float
    PUSH EAX                            ; 00512d8d
    PUSH 0x2f21590                      ; 00512d8e | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_update_FUN_00529d60 ; 00512d93 | void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
        ;   XREF to: 00529d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00512d98
    PUSH 0x2f21590                      ; 00512d9b | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_render_FUN_00529ed0 ; 00512da0 | void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)
        ;   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512da5
    PUSH 0x636d7f                       ; 00512da8 | = "Graphic options" | s_Graphic_options_00636d7f = Graphic options
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512dad | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512db2
    PUSH EAX                            ; 00512db5
    PUSH 0x2f28a50                      ; 00512db6 | char[4][256] g_OptionsMenuTextBuffers
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00512dbb | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00512dc0
    PUSH 0x636d8f                       ; 00512dc3 | = "Sound options" | s_Sound_options_00636d8f = Sound options
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512dc8 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512dcd
    PUSH EAX                            ; 00512dd0
    PUSH 0x2f28b50                      ; 00512dd1 | DAT_02f28b50
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00512dd6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00512ddb
    PUSH 0x636d9d                       ; 00512dde | = "Control options" | s_Control_options_00636d9d = Control options
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512de3 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512de8
    PUSH EAX                            ; 00512deb
    PUSH 0x2f28c50                      ; 00512dec | DAT_02f28c50
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00512df1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00512df6
    PUSH 0x636dad                       ; 00512df9 | = "Credits" | s_Credits_00636dad = Credits
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512dfe | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512e03
    PUSH EAX                            ; 00512e06
    PUSH 0x2f28d50                      ; 00512e07 | DAT_02f28d50
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00512e0c | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00512e11
    MOV EAX,[0x0067b654]                ; 00512e14 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH 0x636db5                       ; 00512e19 | = "Option Menu" | s_Option_Menu_00636db5 = Option Menu
    MOV dword ptr [EAX + 0xc0],0x2      ; 00512e1e | g_CGameInstance.hero_number
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00512e28 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512e2d
    PUSH EAX                            ; 00512e30
    PUSH 0xfa                           ; 00512e31
    LEA EAX,[ESP + 0x8]                 ; 00512e36
    PUSH EAX                            ; 00512e3a
    PUSH 0x4                            ; 00512e3b
    PUSH 0x2f28e50                      ; 00512e3d | char *[4] g_OptionsMenuPointers
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 ; 00512e42 | int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
        ;   XREF to: 00510000 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00512e47
    MOV EBX,EAX                         ; 00512e4a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00512e4c | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CMP EBX,0x3                         ; 00512e51
    JA 0x00512e62                       ; 00512e54 | default
        ;   XREF to: 00512e62 (CONDITIONAL_JUMP)
    JMP dword ptr [EBX*0x4 + 0x512d1c]  ; 00512e56 | void * switchdataD_00512d1c
        ;   Label: switchD
    CALL core_menu.cpp_configureGraphicsOptions_FUN_00510c80 ; 00512e5d | void core_menu.cpp_configureGraphicsOptions_FUN_00510c80()
        ;   Label: caseD_0
        ;   XREF to: 00510c80 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 00512e62
        ;   Label: default
    MOV EAX,[0x0067cf44]                ; 00512e64 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00512e69 | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 00512e6a | void * g_CKeysPtr
    CALL dword ptr [EBX + 0x4]          ; 00512e6c
    ADD ESP,0x8                         ; 00512e6f
    TEST EAX,EAX                        ; 00512e72
    JZ 0x00512d73                       ; 00512e74 | LAB_00512d73
        ;   XREF to: 00512d73 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x14],0x0      ; 00512e7a
    JNZ 0x00512eff                      ; 00512e7f | LAB_00512eff
        ;   XREF to: 00512eff (CONDITIONAL_JUMP)
    CALL core_inivar.cpp_writeIniData_FUN_004fc510 ; 00512e85 | void core_inivar.cpp_writeIniData_FUN_004fc510()
        ;   XREF to: 004fc510 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512e8a
    POP EBP                             ; 00512e8d
    POP EDI                             ; 00512e8e
    POP EBX                             ; 00512e8f
    RET                                 ; 00512e90
    MOV EBX,dword ptr [0x00681ef8]      ; 00512e91 | CSound g_CSoundInstance | CSound * g_CSoundPtr
        ;   Label: LAB_00512e91
    PUSH EBX                            ; 00512e97 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00512e98 | void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512e9d
    PUSH 0x2f21590                      ; 00512ea0 | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_init_FUN_00529ae0 ; 00512ea5 | void core_moon.cpp_CMoon_init_FUN_00529ae0(CMoon * this_ptr)
        ;   XREF to: 00529ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512eaa
    JMP 0x00512d47                      ; 00512ead | LAB_00512d47
        ;   XREF to: 00512d47 (UNCONDITIONAL_JUMP)
    CALL core_menu.cpp_configureSoundOptions_FUN_00511e50 ; 00512eb2 | void core_menu.cpp_configureSoundOptions_FUN_00511e50()
        ;   Label: caseD_1
        ;   XREF to: 00511e50 (UNCONDITIONAL_CALL)
    JMP 0x00512e62                      ; 00512eb7 | default
        ;   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00512eb9 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: caseD_2
    MOV EBX,dword ptr [EAX + 0xbc]      ; 00512ebe | g_CGameInstance.game_control
    CALL core_menu.cpp_configureCustomKeys_FUN_00511890 ; 00512ec4 | void core_menu.cpp_configureCustomKeys_FUN_00511890()
        ;   XREF to: 00511890 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00512ec9 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP EBX,dword ptr [EAX + 0xbc]      ; 00512ece | g_CGameInstance.game_control
    JZ 0x00512e62                       ; 00512ed4 | default
        ;   XREF to: 00512e62 (CONDITIONAL_JUMP)
    CALL core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 ; 00512ed6 | void core_menu.cpp_configureCustomKeyBindings_FUN_005138e0()
        ;   XREF to: 005138e0 (UNCONDITIONAL_CALL)
    JMP 0x00512e62                      ; 00512edb | default
        ;   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x0067b654]      ; 00512edd | CGame * g_CGamePtr
        ;   Label: caseD_3
    PUSH EBP                            ; 00512ee3 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_rollCredits_FUN_004e4010 ; 00512ee4 | void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)
        ;   XREF to: 004e4010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512ee9
    MOV EAX,[0x00681ef8]                ; 00512eec | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EAX                            ; 00512ef1 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00512ef2 | void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512ef7
    JMP 0x00512e62                      ; 00512efa | default
        ;   XREF to: 00512e62 (UNCONDITIONAL_JUMP)
    PUSH 0x2f21590                      ; 00512eff | CMoon g_CMoonInstance
        ;   Label: LAB_00512eff
    CALL core_moon.cpp_CMoon_free_FUN_00529ce0 ; 00512f04 | void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
        ;   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512f09
    MOV EBX,dword ptr [0x00681ef8]      ; 00512f0c | CSound g_CSoundInstance | CSound * g_CSoundPtr
    PUSH EBX                            ; 00512f12 | CSound g_CSoundInstance
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 00512f13 | void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512f18
    CALL core_inivar.cpp_writeIniData_FUN_004fc510 ; 00512f1b | void core_inivar.cpp_writeIniData_FUN_004fc510()
        ;   XREF to: 004fc510 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00512f20
    POP EBP                             ; 00512f23
    POP EDI                             ; 00512f24
    POP EBX                             ; 00512f25
    RET                                 ; 00512f26

