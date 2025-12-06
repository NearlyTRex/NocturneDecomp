; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_configureCustomKeys_FUN_00511890(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512ec4
;
; Referenced Globals:
;   void* switchdataD_00511864 = 00511b9c
;   TerminatedCString s_Control_Keyboard_00636a86
;   TerminatedCString s_Control_Keyboard_Mouse_00636a99
;   TerminatedCString s_Control_Gamepad_00636ab2
;   TerminatedCString s_Customize_Keys_00636ac4
;   TerminatedCString s_Always_run_ON_00636ad3
;   TerminatedCString s_Always_run_OFF_00636ae3
;   TerminatedCString s_Aiming_Auto_00636af4
;   TerminatedCString s_Aiming_Kindof_auto_00636b02
;   TerminatedCString s_Aiming_Manual_00636b17
;   TerminatedCString s_Auto_use_health_On_00636b27
;   TerminatedCString s_Auto_use_health_Off_00636b3c
;   TerminatedCString s_X_axis_sensitivity_00636b52
;   TerminatedCString s_s_5_2f_00636b68
;   TerminatedCString s_Y_axis_sensitivity_00636b6e
;   ... and 38 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0
;   core_menu.cpp_calibrateGamepad_FUN_005104d0
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
;   core_moon.cpp_CMoon_render_FUN_00529ed0
;   core_moon.cpp_CMoon_update_FUN_00529d60
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511890
        ;   Label: core_menu.cpp_configureCustomKeys_FUN_00511890
    PUSH ESI                            ; 00511891
    PUSH EDI                            ; 00511892
    PUSH EBP                            ; 00511893
    SUB ESP,0x104                       ; 00511894
    MOV ECX,dword ptr [0x0067b654]      ; 0051189a | CGame g_CGameInstance | CGame * g_CGamePtr
    XOR EDX,EDX                         ; 005118a0
    PUSH ECX                            ; 005118a2 | CGame g_CGameInstance
    MOV EBX,0x2f27700                   ; 005118a3 | char[9][256] g_ControlsMenuTextBuffers
    MOV dword ptr [ESP + 0x104],EDX     ; 005118a8
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 005118af | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005118b4
    XOR EAX,EAX                         ; 005118b7
    MOV dword ptr [EAX + 0x2f28000],EBX ; 005118b9 | char *[10] g_ControlOptionsMenuPointers | char[9][256] g_ControlsMenuTextBuffers
        ;   Label: LAB_005118b9
    ADD EAX,0x4                         ; 005118bf
    ADD EBX,0x100                       ; 005118c2
    CMP EAX,0x24                        ; 005118c8
    JNZ 0x005118b9                      ; 005118cb | LAB_005118b9
        ;   XREF to: 005118b9 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x0067b654]      ; 005118cd | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_005118cd
    PUSH EBX                            ; 005118d3 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 005118d4 | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005118d9
    MOV EAX,[0x0067b654]                ; 005118dc | CGame g_CGameInstance | CGame * g_CGamePtr
    SUB ESP,0x4                         ; 005118e1
    MOV EDX,dword ptr [EAX + 0x264]     ; 005118e4 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 005118ea
    PUSH 0x2f21590                      ; 005118ed | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_update_FUN_00529d60 ; 005118f2 | void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
        ;   XREF to: 00529d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005118f7
    PUSH 0x2f21590                      ; 005118fa | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_render_FUN_00529ed0 ; 005118ff | void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)
        ;   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 00511904 | CGame * g_CGamePtr
    XOR EBX,EBX                         ; 00511909
    MOV EAX,dword ptr [EAX + 0xbc]      ; 0051190b | g_CGameInstance.game_control
    ADD ESP,0x4                         ; 00511911
    CMP EAX,0x1                         ; 00511914
    JC 0x00511c13                       ; 00511917 | LAB_00511c13
        ;   XREF to: 00511c13 (CONDITIONAL_JUMP)
    JA 0x00511c0e                       ; 0051191d | LAB_00511c0e
        ;   XREF to: 00511c0e (CONDITIONAL_JUMP)
    PUSH 0x636a99                       ; 00511923 | = "Control : Keyboard/Mouse" | s_Control_Keyboard_Mouse_00636a99 = Control : Keyboard/Mouse
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511928 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511928
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051192d
    PUSH EAX                            ; 00511930
    PUSH 0x2f27700                      ; 00511931 | char[9][256] g_ControlsMenuTextBuffers
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511936 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   Label: LAB_00511936
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051193b
    PUSH 0x636ac4                       ; 0051193e | = "Customize Keys" | s_Customize_Keys_00636ac4 = Customize Keys
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511943 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511948
    INC EBX                             ; 0051194b
    PUSH EAX                            ; 0051194c
    MOV EAX,EBX                         ; 0051194d
    SHL EAX,0x8                         ; 0051194f
    ADD EAX,0x2f27700                   ; 00511952 | char[9][256] g_ControlsMenuTextBuffers
    INC EBX                             ; 00511957
    PUSH EAX                            ; 00511958 | g_ControlsMenuTextBuffers[1][0]
    MOV ESI,EBX                         ; 00511959
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051195b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    SHL ESI,0x8                         ; 00511960
    MOV EAX,[0x0067b654]                ; 00511963 | CGame * g_CGamePtr
    INC EBX                             ; 00511968
    ADD ESP,0x8                         ; 00511969
    MOV EDI,dword ptr [EAX + 0x98]      ; 0051196c | g_CGameInstance.always_run
    ADD ESI,0x2f27700                   ; 00511972 | char[9][256] g_ControlsMenuTextBuffers
    TEST EDI,EDI                        ; 00511978
    JZ 0x00511c40                       ; 0051197a | LAB_00511c40
        ;   XREF to: 00511c40 (CONDITIONAL_JUMP)
    PUSH 0x636ad3                       ; 00511980 | = "Always run : ON" | s_Always_run_ON_00636ad3 = Always run : ON
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511985 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511985
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051198a
    PUSH EAX                            ; 0051198d
    PUSH ESI                            ; 0051198e | g_ControlsMenuTextBuffers[2][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0051198f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511994
    MOV EAX,[0x0067b654]                ; 00511997 | CGame * g_CGamePtr
    MOV EAX,dword ptr [EAX + 0xc4]      ; 0051199c | DAT_02d81b60
    CMP EAX,0x1                         ; 005119a2
    JNC 0x00511c72                      ; 005119a5 | LAB_00511c72
        ;   XREF to: 00511c72 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005119ab | CGame * g_CGamePtr
        ;   Label: LAB_005119ab
    PUSH 0x636af4                       ; 005119b0 | = "Aiming : Auto" | s_Aiming_Auto_00636af4 = Aiming : Auto
    MOV dword ptr [EAX + 0xc4],0x0      ; 005119b5 | DAT_02d81b60
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005119bf | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005119c4
    PUSH EAX                            ; 005119c7
    MOV EAX,EBX                         ; 005119c8
    SHL EAX,0x8                         ; 005119ca
    ADD EAX,0x2f27700                   ; 005119cd | char[9][256] g_ControlsMenuTextBuffers
    PUSH EAX                            ; 005119d2 | g_ControlsMenuTextBuffers[3][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005119d3 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   Label: LAB_005119d3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005119d8
    INC EBX                             ; 005119db
    MOV EAX,[0x0067b654]                ; 005119dc | CGame * g_CGamePtr
    MOV ESI,EBX                         ; 005119e1
    MOV EBP,dword ptr [EAX + 0xc8]      ; 005119e3 | DAT_02d81b64
    SHL ESI,0x8                         ; 005119e9
    INC EBX                             ; 005119ec
    ADD ESI,0x2f27700                   ; 005119ed | char[9][256] g_ControlsMenuTextBuffers
    TEST EBP,EBP                        ; 005119f3
    JZ 0x00511c8c                       ; 005119f5 | LAB_00511c8c
        ;   XREF to: 00511c8c (CONDITIONAL_JUMP)
    PUSH 0x636b27                       ; 005119fb | = "Auto use health : On" | s_Auto_use_health_On_00636b27 = Auto use health : On
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511a00 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511a00
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511a05
    PUSH EAX                            ; 00511a08
    PUSH ESI                            ; 00511a09 | g_ControlsMenuTextBuffers[4][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511a0a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511a0f
    PUSH 0x636b52                       ; 00511a12 | = "X-axis sensitivity : " | s_X_axis_sensitivity_00636b52 = X-axis sensitivity :
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511a17 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    MOV EDI,EBX                         ; 00511a1c
    ADD ESP,0x4                         ; 00511a1e
    SHL EDI,0x8                         ; 00511a21
    MOV ESI,EAX                         ; 00511a24
    ADD EDI,0x2f27700                   ; 00511a26 | char[9][256] g_ControlsMenuTextBuffers
    PUSH EDI                            ; 00511a2c | g_ControlsMenuTextBuffers[5][0]
    MOV AL,byte ptr [ESI]               ; 00511a2d
        ;   Label: LAB_00511a2d
    MOV byte ptr [EDI],AL               ; 00511a2f | g_ControlsMenuTextBuffers[5][0]
    CMP AL,0x0                          ; 00511a31
    JZ 0x00511a45                       ; 00511a33 | LAB_00511a45
        ;   XREF to: 00511a45 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511a35
    ADD ESI,0x2                         ; 00511a38
    MOV byte ptr [EDI + 0x1],AL         ; 00511a3b | DAT_02f27c01
    ADD EDI,0x2                         ; 00511a3e
    CMP AL,0x0                          ; 00511a41
    JNZ 0x00511a2d                      ; 00511a43 | LAB_00511a2d
        ;   XREF to: 00511a2d (CONDITIONAL_JUMP)
    POP EDI                             ; 00511a45
        ;   Label: LAB_00511a45
    MOV EAX,[0x0067b654]                ; 00511a46 | CGame * g_CGamePtr
    FILD dword ptr [EAX + 0x9c]         ; 00511a4b | DAT_02d81b38
    FMUL double ptr [0x00636bff]        ; 00511a51 | double DOUBLE_00636bff
    SUB ESP,0x8                         ; 00511a57
    FSTP double ptr [ESP]               ; 00511a5a
    PUSH 0x636b68                       ; 00511a5d | = "%5.2f" | s_s_5_2f_00636b68 = %5.2f
    LEA EAX,[ESP + 0xc]                 ; 00511a62
    PUSH EAX                            ; 00511a66
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511a67 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00511a6c
    MOV ESI,ESP                         ; 00511a6f
    PUSH EDI                            ; 00511a71 | g_ControlsMenuTextBuffers[5][0]
    SUB ECX,ECX                         ; 00511a72
    DEC ECX                             ; 00511a74
    MOV AL,0x0                          ; 00511a75
    SCASB.REPNE ES:EDI                  ; 00511a77 | g_ControlsMenuTextBuffers[5][0]
    DEC EDI                             ; 00511a79
    MOV AL,byte ptr [ESI]               ; 00511a7a
        ;   Label: LAB_00511a7a
    MOV byte ptr [EDI],AL               ; 00511a7c | g_ControlsMenuTextBuffers[5][0]
    CMP AL,0x0                          ; 00511a7e
    JZ 0x00511a92                       ; 00511a80 | LAB_00511a92
        ;   XREF to: 00511a92 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511a82
    ADD ESI,0x2                         ; 00511a85
    MOV byte ptr [EDI + 0x1],AL         ; 00511a88 | DAT_02f27c01
    ADD EDI,0x2                         ; 00511a8b
    CMP AL,0x0                          ; 00511a8e
    JNZ 0x00511a7a                      ; 00511a90 | LAB_00511a7a
        ;   XREF to: 00511a7a (CONDITIONAL_JUMP)
    POP EDI                             ; 00511a92
        ;   Label: LAB_00511a92
    PUSH 0x636b6e                       ; 00511a93 | = "Y-axis sensitivity : " | s_Y_axis_sensitivity_00636b6e = Y-axis sensitivity :
    INC EBX                             ; 00511a98
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511a99 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    MOV EDI,EBX                         ; 00511a9e
    ADD ESP,0x4                         ; 00511aa0
    SHL EDI,0x8                         ; 00511aa3
    MOV ESI,EAX                         ; 00511aa6
    ADD EDI,0x2f27700                   ; 00511aa8 | char[9][256] g_ControlsMenuTextBuffers
    PUSH EDI                            ; 00511aae | g_ControlsMenuTextBuffers[6][0]
    MOV AL,byte ptr [ESI]               ; 00511aaf
        ;   Label: LAB_00511aaf
    MOV byte ptr [EDI],AL               ; 00511ab1 | g_ControlsMenuTextBuffers[6][0]
    CMP AL,0x0                          ; 00511ab3
    JZ 0x00511ac7                       ; 00511ab5 | LAB_00511ac7
        ;   XREF to: 00511ac7 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511ab7
    ADD ESI,0x2                         ; 00511aba
    MOV byte ptr [EDI + 0x1],AL         ; 00511abd | DAT_02f27d01
    ADD EDI,0x2                         ; 00511ac0
    CMP AL,0x0                          ; 00511ac3
    JNZ 0x00511aaf                      ; 00511ac5 | LAB_00511aaf
        ;   XREF to: 00511aaf (CONDITIONAL_JUMP)
    POP EDI                             ; 00511ac7
        ;   Label: LAB_00511ac7
    MOV EAX,[0x0067b654]                ; 00511ac8 | CGame * g_CGamePtr
    FILD dword ptr [EAX + 0xa0]         ; 00511acd | DAT_02d81b3c
    FMUL double ptr [0x00636bff]        ; 00511ad3 | double DOUBLE_00636bff
    SUB ESP,0x8                         ; 00511ad9
    FSTP double ptr [ESP]               ; 00511adc
    PUSH 0x636b84                       ; 00511adf | = "%5.2f" | s_s_5_2f_00636b84 = %5.2f
    LEA EAX,[ESP + 0xc]                 ; 00511ae4
    INC EBX                             ; 00511ae8
    PUSH EAX                            ; 00511ae9
    MOV EBP,EBX                         ; 00511aea
    LEA ESI,[ESP + 0x10]                ; 00511aec
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511af0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00511af5
    SHL EBP,0x8                         ; 00511af8
    PUSH EDI                            ; 00511afb | g_ControlsMenuTextBuffers[6][0]
    SUB ECX,ECX                         ; 00511afc
    DEC ECX                             ; 00511afe
    MOV AL,0x0                          ; 00511aff
    SCASB.REPNE ES:EDI                  ; 00511b01 | g_ControlsMenuTextBuffers[6][0]
    DEC EDI                             ; 00511b03
    MOV AL,byte ptr [ESI]               ; 00511b04
        ;   Label: LAB_00511b04
    MOV byte ptr [EDI],AL               ; 00511b06 | g_ControlsMenuTextBuffers[6][0]
    CMP AL,0x0                          ; 00511b08
    JZ 0x00511b1c                       ; 00511b0a | LAB_00511b1c
        ;   XREF to: 00511b1c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511b0c
    ADD ESI,0x2                         ; 00511b0f
    MOV byte ptr [EDI + 0x1],AL         ; 00511b12 | DAT_02f27d01
    ADD EDI,0x2                         ; 00511b15
    CMP AL,0x0                          ; 00511b18
    JNZ 0x00511b04                      ; 00511b1a | LAB_00511b04
        ;   XREF to: 00511b04 (CONDITIONAL_JUMP)
    POP EDI                             ; 00511b1c
        ;   Label: LAB_00511b1c
    MOV EAX,[0x0067b654]                ; 00511b1d | CGame * g_CGamePtr
    ADD EBP,0x2f27700                   ; 00511b22 | char[9][256] g_ControlsMenuTextBuffers
    MOV EDX,dword ptr [EAX + 0xbc]      ; 00511b28 | g_CGameInstance.game_control
    LEA ESI,[EBX + 0x1]                 ; 00511b2e
    CMP EDX,0x1                         ; 00511b31
    JNZ 0x00511ca0                      ; 00511b34 | LAB_00511ca0
        ;   XREF to: 00511ca0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x94],0x0      ; 00511b3a | DAT_02d81b30
    JZ 0x00511c96                       ; 00511b41 | LAB_00511c96
        ;   XREF to: 00511c96 (CONDITIONAL_JUMP)
    PUSH 0x636b8a                       ; 00511b47 | = "Invert Y Axis : ON" | s_Invert_Y_Axis_ON_00636b8a = Invert Y Axis : ON
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511b4c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511b4c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511b51
    PUSH EAX                            ; 00511b54
    PUSH EBP                            ; 00511b55 | g_ControlsMenuTextBuffers[7][0]
    MOV EBX,ESI                         ; 00511b56
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511b58 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511b5d
    PUSH 0x636bbb                       ; 00511b60 | = "Control Options" | s_Control_Options_00636bbb = Control Options
        ;   Label: LAB_00511b60
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511b65 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511b6a
    PUSH EAX                            ; 00511b6d
    PUSH 0xfa                           ; 00511b6e
    LEA EAX,[ESP + 0x108]               ; 00511b73
    PUSH EAX                            ; 00511b7a
    PUSH EBX                            ; 00511b7b
    PUSH 0x2f28000                      ; 00511b7c | char *[10] g_ControlOptionsMenuPointers
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 ; 00511b81 | int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
        ;   XREF to: 00510000 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00511b86
    MOV EBX,EAX                         ; 00511b89
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00511b8b | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CMP EBX,0x7                         ; 00511b90
    JA 0x00511bc6                       ; 00511b93 | default
        ;   XREF to: 00511bc6 (CONDITIONAL_JUMP)
    JMP dword ptr [EBX*0x4 + 0x511864]  ; 00511b95 | void * switchdataD_00511864
        ;   Label: switchD
    MOV EDI,dword ptr [0x02f26cac]      ; 00511b9c | int g_MenuLeftRightPressed
        ;   Label: caseD_0
    CMP EDI,0x1                         ; 00511ba2
    JNZ 0x00511cc2                      ; 00511ba5 | LAB_00511cc2
        ;   XREF to: 00511cc2 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511bab | CGame * g_CGamePtr
    MOV EBX,dword ptr [EAX + 0xbc]      ; 00511bb0 | g_CGameInstance.game_control
    SUB EBX,EDI                         ; 00511bb6
    MOV dword ptr [EAX + 0xbc],EBX      ; 00511bb8 | g_CGameInstance.game_control
    TEST EBX,EBX                        ; 00511bbe
    JL 0x00511cb3                       ; 00511bc0 | LAB_00511cb3
        ;   XREF to: 00511cb3 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00511bc6
        ;   Label: default
    MOV EAX,[0x0067cf44]                ; 00511bc8 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00511bcd | void * g_CKeysPtr
    MOV EBX,dword ptr [EAX]             ; 00511bce | void * g_CKeysPtr
    CALL dword ptr [EBX + 0x4]          ; 00511bd0
    ADD ESP,0x8                         ; 00511bd3
    TEST EAX,EAX                        ; 00511bd6
    JZ 0x005118cd                       ; 00511bd8 | LAB_005118cd
        ;   XREF to: 005118cd (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511bde | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0xbc],0x2      ; 00511be3 | g_CGameInstance.game_control
    JNZ 0x00511bf9                      ; 00511bea | LAB_00511bf9
        ;   XREF to: 00511bf9 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0xa4],0x0      ; 00511bec | g_CGameInstance.x_center
    JZ 0x00511dec                       ; 00511bf3 | LAB_00511dec
        ;   XREF to: 00511dec (CONDITIONAL_JUMP)
    ADD ESP,0x104                       ; 00511bf9
        ;   Label: LAB_00511bf9
    POP EBP                             ; 00511bff
    POP EDI                             ; 00511c00
    POP ESI                             ; 00511c01
    POP EBX                             ; 00511c02
    RET                                 ; 00511c03
    PUSH 0x636ab2                       ; 00511c04 | = "Control : Gamepad" | s_Control_Gamepad_00636ab2 = Control : Gamepad
        ;   Label: LAB_00511c04
    JMP 0x00511928                      ; 00511c09 | LAB_00511928
        ;   XREF to: 00511928 (UNCONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 00511c0e
        ;   Label: LAB_00511c0e
    JZ 0x00511c04                       ; 00511c11 | LAB_00511c04
        ;   XREF to: 00511c04 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511c13 | CGame * g_CGamePtr
        ;   Label: LAB_00511c13
    PUSH 0x636a86                       ; 00511c18 | = "Control : Keyboard" | s_Control_Keyboard_00636a86 = Control : Keyboard
    MOV dword ptr [EAX + 0xbc],0x0      ; 00511c1d | g_CGameInstance.game_control
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511c27 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511c2c
    PUSH EAX                            ; 00511c2f
    MOV EAX,EBX                         ; 00511c30
    SHL EAX,0x8                         ; 00511c32
    ADD EAX,0x2f27700                   ; 00511c35 | char[9][256] g_ControlsMenuTextBuffers
    PUSH EAX                            ; 00511c3a | char[9][256] g_ControlsMenuTextBuffers
    JMP 0x00511936                      ; 00511c3b | LAB_00511936
        ;   XREF to: 00511936 (UNCONDITIONAL_JUMP)
    PUSH 0x636ae3                       ; 00511c40 | = "Always run : OFF" | s_Always_run_OFF_00636ae3 = Always run : OFF
        ;   Label: LAB_00511c40
    JMP 0x00511985                      ; 00511c45 | LAB_00511985
        ;   XREF to: 00511985 (UNCONDITIONAL_JUMP)
    PUSH 0x636b02                       ; 00511c4a | = "Aiming : Kindof auto" | s_Aiming_Kindof_auto_00636b02 = Aiming : Kindof auto
        ;   Label: LAB_00511c4a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511c4f | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511c54
    PUSH EAX                            ; 00511c57
    PUSH ESI                            ; 00511c58 | g_ControlsMenuTextBuffers[3][0]
    JMP 0x005119d3                      ; 00511c59 | LAB_005119d3
        ;   XREF to: 005119d3 (UNCONDITIONAL_JUMP)
    PUSH 0x636b17                       ; 00511c5e | = "Aiming : Manual" | s_Aiming_Manual_00636b17 = Aiming : Manual
        ;   Label: LAB_00511c5e
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511c63 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511c68
    PUSH EAX                            ; 00511c6b
    PUSH ESI                            ; 00511c6c | g_ControlsMenuTextBuffers[3][0]
    JMP 0x005119d3                      ; 00511c6d | LAB_005119d3
        ;   XREF to: 005119d3 (UNCONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 00511c72
        ;   Label: LAB_00511c72
    SHL ESI,0x8                         ; 00511c74
    ADD ESI,0x2f27700                   ; 00511c77 | char[9][256] g_ControlsMenuTextBuffers
    CMP EAX,0x1                         ; 00511c7d
    JBE 0x00511c4a                      ; 00511c80 | LAB_00511c4a
        ;   XREF to: 00511c4a (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 00511c82
    JZ 0x00511c5e                       ; 00511c85 | LAB_00511c5e
        ;   XREF to: 00511c5e (CONDITIONAL_JUMP)
    JMP 0x005119ab                      ; 00511c87 | LAB_005119ab
        ;   XREF to: 005119ab (UNCONDITIONAL_JUMP)
    PUSH 0x636b3c                       ; 00511c8c | = "Auto use health : Off" | s_Auto_use_health_Off_00636b3c = Auto use health : Off
        ;   Label: LAB_00511c8c
    JMP 0x00511a00                      ; 00511c91 | LAB_00511a00
        ;   XREF to: 00511a00 (UNCONDITIONAL_JUMP)
    PUSH 0x636b9d                       ; 00511c96 | = "Invert Y Axis : OFF" | s_Invert_Y_Axis_OFF_00636b9d = Invert Y Axis : OFF
        ;   Label: LAB_00511c96
    JMP 0x00511b4c                      ; 00511c9b | LAB_00511b4c
        ;   XREF to: 00511b4c (UNCONDITIONAL_JUMP)
    CMP EDX,0x2                         ; 00511ca0
        ;   Label: LAB_00511ca0
    JNZ 0x00511b60                      ; 00511ca3 | LAB_00511b60
        ;   XREF to: 00511b60 (CONDITIONAL_JUMP)
    PUSH 0x636bb1                       ; 00511ca9 | = "Calibrate" | s_Calibrate_00636bb1 = Calibrate
    JMP 0x00511b4c                      ; 00511cae | LAB_00511b4c
        ;   XREF to: 00511b4c (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xbc],0x2      ; 00511cb3 | g_CGameInstance.game_control
        ;   Label: LAB_00511cb3
    JMP 0x00511bc6                      ; 00511cbd | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511cc2 | CGame * g_CGamePtr
        ;   Label: LAB_00511cc2
    MOV EBX,dword ptr [EAX + 0xbc]      ; 00511cc7 | g_CGameInstance.game_control
    INC EBX                             ; 00511ccd
    MOV dword ptr [EAX + 0xbc],EBX      ; 00511cce | g_CGameInstance.game_control
    CMP EBX,0x2                         ; 00511cd4
    JLE 0x00511bc6                      ; 00511cd7 | default
        ;   XREF to: 00511bc6 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xbc],0x0      ; 00511cdd | g_CGameInstance.game_control
    JMP 0x00511bc6                      ; 00511ce7 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    CALL core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 ; 00511cec | void core_menu.cpp_configureCustomKeyBindings_FUN_005138e0()
        ;   Label: caseD_1
        ;   XREF to: 005138e0 (UNCONDITIONAL_CALL)
    JMP 0x00511bc6                      ; 00511cf1 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511cf6 | CGame * g_CGamePtr
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x98],0x0      ; 00511cfb | g_CGameInstance.always_run
    SETZ BL                             ; 00511d02
    AND EBX,0xff                        ; 00511d05
    MOV dword ptr [EAX + 0x98],EBX      ; 00511d0b | g_CGameInstance.always_run
    JMP 0x00511bc6                      ; 00511d11 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511d16 | CGame * g_CGamePtr
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xc4],0x0      ; 00511d1b | DAT_02d81b60
    JNZ 0x00511d33                      ; 00511d22 | LAB_00511d33
        ;   XREF to: 00511d33 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc4],0x2      ; 00511d24 | DAT_02d81b60
    JMP 0x00511bc6                      ; 00511d2e | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc4],0x0      ; 00511d33 | DAT_02d81b60
        ;   Label: LAB_00511d33
    JMP 0x00511bc6                      ; 00511d3d | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511d42 | CGame * g_CGamePtr
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0xc8],0x0      ; 00511d47 | DAT_02d81b64
    SETZ BL                             ; 00511d4e
    AND EBX,0xff                        ; 00511d51
    MOV dword ptr [EAX + 0xc8],EBX      ; 00511d57 | DAT_02d81b64
    JMP 0x00511bc6                      ; 00511d5d | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    PUSH 0x636bcb                       ; 00511d62 | = "Adjust X-Axis sensitivity" | s_Adjust_X_Axis_sensitivit_00636bcb = Adjust X-Axis sensitivity
        ;   Label: caseD_5
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511d67 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511d6c
    PUSH EAX                            ; 00511d6f
    MOV EAX,[0x0067b654]                ; 00511d70 | CGame * g_CGamePtr
    ADD EAX,0x9c                        ; 00511d75 | DAT_02d81b38
    PUSH EAX                            ; 00511d7a | DAT_02d81b38
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 ; 00511d7b | void core_menu.cpp_adjustMouseSensitivity_FUN_005107c0(int * sensitivity_value_ptr, char * window_title)
        ;   XREF to: 005107c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511d80
    JMP 0x00511bc6                      ; 00511d83 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    PUSH 0x636be5                       ; 00511d88 | = "Adjust Y-Axis sensitivity" | s_Adjust_Y_Axis_sensitivit_00636be5 = Adjust Y-Axis sensitivity
        ;   Label: caseD_6
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511d8d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511d92
    PUSH EAX                            ; 00511d95
    MOV EAX,[0x0067b654]                ; 00511d96 | CGame * g_CGamePtr
    ADD EAX,0xa0                        ; 00511d9b | DAT_02d81b3c
    PUSH EAX                            ; 00511da0 | DAT_02d81b3c
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 ; 00511da1 | void core_menu.cpp_adjustMouseSensitivity_FUN_005107c0(int * sensitivity_value_ptr, char * window_title)
        ;   XREF to: 005107c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511da6
    JMP 0x00511bc6                      ; 00511da9 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511dae | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: caseD_7
    MOV ESI,dword ptr [EAX + 0xbc]      ; 00511db3 | g_CGameInstance.game_control
    CMP ESI,0x1                         ; 00511db9
    JNZ 0x00511dd9                      ; 00511dbc | LAB_00511dd9
        ;   XREF to: 00511dd9 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x94],0x0      ; 00511dbe | DAT_02d81b30
    SETZ BL                             ; 00511dc5
    AND EBX,0xff                        ; 00511dc8
    MOV dword ptr [EAX + 0x94],EBX      ; 00511dce | DAT_02d81b30
    JMP 0x00511bc6                      ; 00511dd4 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    CMP ESI,0x2                         ; 00511dd9
        ;   Label: LAB_00511dd9
    JNZ 0x00511bc6                      ; 00511ddc | default
        ;   XREF to: 00511bc6 (CONDITIONAL_JUMP)
    CALL core_menu.cpp_calibrateGamepad_FUN_005104d0 ; 00511de2 | int core_menu.cpp_calibrateGamepad_FUN_005104d0()
        ;   XREF to: 005104d0 (UNCONDITIONAL_CALL)
    JMP 0x00511bc6                      ; 00511de7 | default
        ;   XREF to: 00511bc6 (UNCONDITIONAL_JUMP)
    CALL core_menu.cpp_calibrateGamepad_FUN_005104d0 ; 00511dec | int core_menu.cpp_calibrateGamepad_FUN_005104d0()
        ;   Label: LAB_00511dec
        ;   XREF to: 005104d0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 00511df1
    JNZ 0x00511bf9                      ; 00511df3 | LAB_00511bf9
        ;   XREF to: 00511bf9 (CONDITIONAL_JUMP)
    JMP 0x005118cd                      ; 00511df9 | LAB_005118cd
        ;   XREF to: 005118cd (UNCONDITIONAL_JUMP)

