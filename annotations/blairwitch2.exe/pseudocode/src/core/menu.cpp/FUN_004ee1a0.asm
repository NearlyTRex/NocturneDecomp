; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004ee1a0(int initialize_systems)
;
; Parameters:
; int              Stack[0x4]:4   initialize_systems
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6b21
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee8a8
;
; Referenced Globals:
;   void* switchdataD_004ee184 = 004ee312
;   undefined4 s_Graphic_options_005dd22c+1
;   TerminatedCString s_Sound_options_005dd23d
;   TerminatedCString s_Control_options_005dd24b
;   TerminatedCString s_Credits_005dd25b
;   TerminatedCString s_Option_Menu_005dd263
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.game_control
;   undefined4 g_CGameInstance.hero_number
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01d02f84
;   ... and 2 more
;
; Called Functions:
;   core_game.cpp_CGame_rollCredits_FUN_004be430
;   core_game.cpp_CGame_saveClockTime_FUN_004b3000
;   core_game.cpp_CGame_updateDT_FUN_004b3010
;   core_inivar.cpp_writeIniData_FUN_004d94d0
;   core_menu.cpp_FUN_004eb0e0
;   core_menu.cpp_FUN_004ebf10
;   core_menu.cpp_FUN_004ecc70
;   core_menu.cpp_FUN_004ed260
;   core_menu.cpp_FUN_004eed60
;   core_moon.cpp_CMoon_free_FUN_00502450
;   core_moon.cpp_CMoon_init_FUN_005023e0
;   core_moon.cpp_CMoon_render_FUN_00502510
;   core_moon.cpp_CMoon_update_FUN_005024a0
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;   core_sound.cpp_CSound_configure_FUN_0055ac50
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee1a0
        ;   Label: core_menu.cpp_FUN_004ee1a0
    PUSH EDI                            ; 004ee1a1
    PUSH EBP                            ; 004ee1a2
    SUB ESP,0x4                         ; 004ee1a3
    XOR EDX,EDX                         ; 004ee1a6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ee1a8
    MOV dword ptr [ESP],EDX             ; 004ee1ac
    TEST ECX,ECX                        ; 004ee1af
    JNZ 0x004ee346                      ; 004ee1b1
        ;   XREF to: 004ee346 (CONDITIONAL_JUMP)  ; LAB_004ee346
    PUSH ESI                            ; 004ee1b7
        ;   Label: LAB_004ee1b7
    MOV ESI,dword ptr [0x00616494]      ; 004ee1b8 | g_CGamePtr
    PUSH ESI                            ; 004ee1be | g_CGameInstance
    MOV EBX,0x1d07ed0                   ; 004ee1bf
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b3000 ; 004ee1c4
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b3000(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ee1c9
    XOR EAX,EAX                         ; 004ee1cc
    POP ESI                             ; 004ee1ce
    MOV dword ptr [EAX + 0x1d082d0],EBX ; 004ee1cf
        ;   Label: LAB_004ee1cf
    ADD EAX,0x4                         ; 004ee1d5
    ADD EBX,0x100                       ; 004ee1d8
    CMP EAX,0x10                        ; 004ee1de
    JNZ 0x004ee1cf                      ; 004ee1e1
        ;   XREF to: 004ee1cf (CONDITIONAL_JUMP)  ; LAB_004ee1cf
    MOV EDI,dword ptr [0x00616494]      ; 004ee1e3 | g_CGamePtr
        ;   Label: LAB_004ee1e3
    PUSH EDI                            ; 004ee1e9 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004b3010 ; 004ee1ea
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ee1ef
    PUSH 0x10000                        ; 004ee1f2
    PUSH 0xc350                         ; 004ee1f7
    PUSH 0xc350                         ; 004ee1fc
    MOV EAX,[0x0061b5a8]                ; 004ee201 | g_CDemonSetPtr
    PUSH EAX                            ; 004ee206
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ee207 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 004ee211
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x0061b5a8]                ; 004ee216 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ee21b | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x00616494]                ; 004ee225 | g_CGamePtr
    ADD ESP,0x10                        ; 004ee22a
    MOV EAX,dword ptr [EAX + 0x284]     ; 004ee22d | g_CGameInstance.delta_time_float
    PUSH EAX                            ; 004ee233
    PUSH 0x1d05620                      ; 004ee234
    CALL core_moon.cpp_CMoon_update_FUN_005024a0 ; 004ee239
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_005024a0(CMoon * this_ptr, float param_2)
    ADD ESP,0x8                         ; 004ee23e
    PUSH 0x1d05620                      ; 004ee241
    CALL core_moon.cpp_CMoon_render_FUN_00502510 ; 004ee246
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00502510(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004ee24b
    MOV EAX,[0x0061b5a8]                ; 004ee24e | g_CDemonSetPtr
    PUSH 0x5dd22d                       ; 004ee253 | s_Graphic_options_005dd22c+1
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ee258 | g_CDemonSetInstance.rendering_mode
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee262
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee267
    PUSH EAX                            ; 004ee26a
    PUSH 0x1d07ed0                      ; 004ee26b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ee270
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ee275
    PUSH 0x5dd23d                       ; 004ee278 | = "Sound options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee27d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee282
    PUSH EAX                            ; 004ee285
    PUSH 0x1d07fd0                      ; 004ee286
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ee28b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ee290
    PUSH 0x5dd24b                       ; 004ee293 | = "Control options"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee298
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee29d
    PUSH EAX                            ; 004ee2a0
    PUSH 0x1d080d0                      ; 004ee2a1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ee2a6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ee2ab
    PUSH 0x5dd25b                       ; 004ee2ae | = "Credits"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee2b3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee2b8
    PUSH EAX                            ; 004ee2bb
    PUSH 0x1d081d0                      ; 004ee2bc
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ee2c1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ee2c6
    MOV EAX,[0x00616494]                ; 004ee2c9 | g_CGamePtr
    PUSH 0x5dd263                       ; 004ee2ce | = "Option Menu"
    MOV dword ptr [EAX + 0xd4],0x9      ; 004ee2d3 | g_CGameInstance.hero_number
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ee2dd
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ee2e2
    PUSH EAX                            ; 004ee2e5
    PUSH 0x122                          ; 004ee2e6
    LEA EAX,[ESP + 0x8]                 ; 004ee2eb
    PUSH EAX                            ; 004ee2ef
    PUSH 0x4                            ; 004ee2f0
    PUSH 0x1d082d0                      ; 004ee2f2
    CALL core_menu.cpp_FUN_004eb0e0     ; 004ee2f7
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004eb0e0(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004ee2fc
    MOV EBX,EAX                         ; 004ee2ff
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004ee301
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CMP EBX,0x3                         ; 004ee306
    JA 0x004ee317                       ; 004ee309
        ;   XREF to: 004ee317 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ee184]  ; 004ee30b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL core_menu.cpp_FUN_004ebf10     ; 004ee312
        ;   XREF to: 004ebf10 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_FUN_004ebf10()
        ;   Label: caseD_0
    PUSH 0x1                            ; 004ee317
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004ee319 | DAT_00617dd4
    PUSH EAX                            ; 004ee31e | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ee31f | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004ee321
    ADD ESP,0x8                         ; 004ee324
    TEST EAX,EAX                        ; 004ee327
    JZ 0x004ee1e3                       ; 004ee329
        ;   XREF to: 004ee1e3 (CONDITIONAL_JUMP)  ; LAB_004ee1e3
    CMP dword ptr [ESP + 0x14],0x0      ; 004ee32f
    JNZ 0x004ee3b5                      ; 004ee334
        ;   XREF to: 004ee3b5 (CONDITIONAL_JUMP)  ; LAB_004ee3b5
    CALL core_inivar.cpp_writeIniData_FUN_004d94d0 ; 004ee33a
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004d94d0()
    ADD ESP,0x4                         ; 004ee33f
    POP EBP                             ; 004ee342
    POP EDI                             ; 004ee343
    POP EBX                             ; 004ee344
    RET                                 ; 004ee345
    MOV EBX,dword ptr [0x0061c068]      ; 004ee346 | DAT_0061c068
        ;   Label: LAB_004ee346
    PUSH EBX                            ; 004ee34c
    CALL core_sound.cpp_CSound_configure_FUN_0055ac50 ; 004ee34d
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee352
    PUSH 0x1d05620                      ; 004ee355
    CALL core_moon.cpp_CMoon_init_FUN_005023e0 ; 004ee35a
        ;   XREF to: 005023e0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_005023e0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004ee35f
    JMP 0x004ee1b7                      ; 004ee362
        ;   XREF to: 004ee1b7 (UNCONDITIONAL_JUMP)  ; LAB_004ee1b7
    CALL core_menu.cpp_FUN_004ed260     ; 004ee367
        ;   XREF to: 004ed260 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_FUN_004ed260()
        ;   Label: caseD_1
    JMP 0x004ee317                      ; 004ee36c
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [0x00616494]      ; 004ee36e | g_CGamePtr
        ;   Label: caseD_2
    MOV EBX,dword ptr [EBX + 0xd0]      ; 004ee374 | g_CGameInstance.game_control
    CALL core_menu.cpp_FUN_004ecc70     ; 004ee37a
        ;   XREF to: 004ecc70 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_FUN_004ecc70()
    MOV EAX,[0x00616494]                ; 004ee37f | g_CGamePtr
    CMP EBX,dword ptr [EAX + 0xd0]      ; 004ee384 | g_CGameInstance.game_control
    JZ 0x004ee317                       ; 004ee38a
        ;   XREF to: 004ee317 (CONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_FUN_004eed60     ; 004ee38c
        ;   XREF to: 004eed60 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eed60()
    JMP 0x004ee317                      ; 004ee391
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    MOV EBP,dword ptr [0x00616494]      ; 004ee393 | g_CGamePtr
        ;   Label: caseD_3
    PUSH EBP                            ; 004ee399 | g_CGameInstance
    CALL core_game.cpp_CGame_rollCredits_FUN_004be430 ; 004ee39a
        ;   XREF to: 004be430 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_rollCredits_FUN_004be430(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ee39f
    MOV EAX,[0x0061c068]                ; 004ee3a2 | DAT_0061c068
    PUSH EAX                            ; 004ee3a7
    CALL core_sound.cpp_CSound_configure_FUN_0055ac50 ; 004ee3a8
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_0055ac50(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee3ad
    JMP 0x004ee317                      ; 004ee3b0
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1d05620                      ; 004ee3b5
        ;   Label: LAB_004ee3b5
    CALL core_moon.cpp_CMoon_free_FUN_00502450 ; 004ee3ba
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_00502450(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004ee3bf
    MOV EBX,dword ptr [0x0061c068]      ; 004ee3c2 | DAT_0061c068
    PUSH EBX                            ; 004ee3c8
    CALL core_sound.cpp_CSound_reset_FUN_0055adb0 ; 004ee3c9
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_0055adb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004ee3ce
    CALL core_inivar.cpp_writeIniData_FUN_004d94d0 ; 004ee3d1
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_writeIniData_FUN_004d94d0()
    ADD ESP,0x4                         ; 004ee3d6
    POP EBP                             ; 004ee3d9
    POP EDI                             ; 004ee3da
    POP EBX                             ; 004ee3db
    RET                                 ; 004ee3dc

