; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004ecc70(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee37a
;
; Referenced Globals:
;   void* switchdataD_004ecc34 = 004ecd46
;   void* switchdataD_004ecc44 = 004ecfc3
;   undefined4 s_Control_Keyboard_005dcf1c+1
;   TerminatedCString s_Control_Keyboard_Mouse_005dcf30
;   TerminatedCString s_Control_Gamepad_005dcf49
;   TerminatedCString s_Control_Mouse_005dcf5b
;   TerminatedCString s_Customize_Keys_005dcf6b
;   TerminatedCString s_Always_run_ON_005dcf7a
;   TerminatedCString s_Always_run_OFF_005dcf8a
;   TerminatedCString s_Aiming_Auto_005dcf9b
;   TerminatedCString s_Aiming_Kindof_auto_005dcfa9
;   TerminatedCString s_Aiming_Manual_005dcfbe
;   TerminatedCString s_Auto_use_health_On_005dcfce
;   TerminatedCString s_Auto_use_health_Off_005dcfe3
;   TerminatedCString s_X_axis_sensitivity_005dcff9
;   ... and 26 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004b3000
;   core_game.cpp_CGame_updateDT_FUN_004b3010
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0
;   core_menu.cpp_calibrateGamepad_FUN_004eb490
;   core_menu.cpp_FUN_004eb0e0
;   core_menu.cpp_FUN_004eed60
;   core_moon.cpp_CMoon_render_FUN_00502510
;   core_moon.cpp_CMoon_update_FUN_005024a0
;   core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecc70
        ;   Label: core_menu.cpp_FUN_004ecc70
    PUSH ESI                            ; 004ecc71
    PUSH EDI                            ; 004ecc72
    PUSH EBP                            ; 004ecc73
    SUB ESP,0x104                       ; 004ecc74
    MOV ECX,dword ptr [0x00616494]      ; 004ecc7a | g_CGamePtr
    XOR EDX,EDX                         ; 004ecc80
    PUSH ECX                            ; 004ecc82
    MOV EBX,0x1d06b80                   ; 004ecc83
    MOV dword ptr [ESP + 0x104],EDX     ; 004ecc88
    CALL core_game.cpp_CGame_saveClockTime_FUN_004b3000 ; 004ecc8f
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004b3000(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ecc94
    XOR EAX,EAX                         ; 004ecc97
    MOV dword ptr [EAX + 0x1d07480],EBX ; 004ecc99
        ;   Label: LAB_004ecc99
    ADD EAX,0x4                         ; 004ecc9f
    ADD EBX,0x100                       ; 004ecca2
    CMP EAX,0x24                        ; 004ecca8
    JNZ 0x004ecc99                      ; 004eccab
        ;   XREF to: 004ecc99 (CONDITIONAL_JUMP)  ; LAB_004ecc99
    MOV EBX,dword ptr [0x00616494]      ; 004eccad | g_CGamePtr
        ;   Label: LAB_004eccad
    PUSH EBX                            ; 004eccb3
    CALL core_game.cpp_CGame_updateDT_FUN_004b3010 ; 004eccb4
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004eccb9
    PUSH 0x10000                        ; 004eccbc
    PUSH 0xc350                         ; 004eccc1
    PUSH 0xc350                         ; 004eccc6
    MOV EAX,[0x0061b5a8]                ; 004ecccb | g_CDemonSetPtr
    PUSH EAX                            ; 004eccd0
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004eccd1 | g_CDemonSetInstance.rendering_mode
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0 ; 004eccdb
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x0061b5a8]                ; 004ecce0 | g_CDemonSetPtr
    ADD ESP,0x10                        ; 004ecce5
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ecce8 | g_CDemonSetInstance.ambient_base_quick
    MOV EAX,[0x00616494]                ; 004eccf2 | g_CGamePtr
    SUB ESP,0x4                         ; 004eccf7
    MOV EDX,dword ptr [EAX + 0x284]     ; 004eccfa | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 004ecd00
    PUSH 0x1d05620                      ; 004ecd03
    CALL core_moon.cpp_CMoon_update_FUN_005024a0 ; 004ecd08
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_005024a0(CMoon * this_ptr, float param_2)
    ADD ESP,0x8                         ; 004ecd0d
    PUSH 0x1d05620                      ; 004ecd10
    CALL core_moon.cpp_CMoon_render_FUN_00502510 ; 004ecd15
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00502510(CMoon * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 004ecd1a | g_CDemonSetPtr
    MOV ESI,dword ptr [0x00616494]      ; 004ecd1f | g_CGamePtr
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ecd25 | g_CDemonSetInstance.rendering_mode
    XOR EBX,EBX                         ; 004ecd2f
    MOV EAX,dword ptr [ESI + 0xd0]      ; 004ecd31 | g_CGameInstance.game_control
    ADD ESP,0x4                         ; 004ecd37
    CMP EAX,0x3                         ; 004ecd3a
    JA 0x004ecd67                       ; 004ecd3d
        ;   XREF to: 004ecd67 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ecc34]  ; 004ecd3f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x5dcf1d                       ; 004ecd46 | s_Control_Keyboard_005dcf1c+1
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0xd0],EBX      ; 004ecd4b | g_CGameInstance.game_control
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecd51
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ecd51
    ADD ESP,0x4                         ; 004ecd56
    PUSH EAX                            ; 004ecd59
    PUSH 0x1d06b80                      ; 004ecd5a
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecd5f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ecd64
    PUSH 0x5dcf6b                       ; 004ecd67 | = "Customize Keys"
        ;   Label: default
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecd6c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ecd71
    INC EBX                             ; 004ecd74
    PUSH EAX                            ; 004ecd75
    MOV EAX,EBX                         ; 004ecd76
    SHL EAX,0x8                         ; 004ecd78
    ADD EAX,0x1d06b80                   ; 004ecd7b
    INC EBX                             ; 004ecd80
    PUSH EAX                            ; 004ecd81
    MOV ESI,EBX                         ; 004ecd82
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecd84
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    SHL ESI,0x8                         ; 004ecd89
    MOV EAX,[0x00616494]                ; 004ecd8c | g_CGamePtr
    INC EBX                             ; 004ecd91
    ADD ESP,0x8                         ; 004ecd92
    MOV EDI,dword ptr [EAX + 0xac]      ; 004ecd95 | g_CGameInstance.always_run
    ADD ESI,0x1d06b80                   ; 004ecd9b
    TEST EDI,EDI                        ; 004ecda1
    JZ 0x004ed04a                       ; 004ecda3
        ;   XREF to: 004ed04a (CONDITIONAL_JUMP)  ; LAB_004ed04a
    PUSH 0x5dcf7a                       ; 004ecda9 | = "Always run : ON"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecdae
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ecdae
    ADD ESP,0x4                         ; 004ecdb3
    PUSH EAX                            ; 004ecdb6
    PUSH ESI                            ; 004ecdb7
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecdb8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ecdbd
    MOV EAX,[0x00616494]                ; 004ecdc0 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0xd8]      ; 004ecdc5 | g_CGameInstance.aim_mode
    CMP EAX,0x1                         ; 004ecdcb
    JNC 0x004ed07c                      ; 004ecdce
        ;   XREF to: 004ed07c (CONDITIONAL_JUMP)  ; LAB_004ed07c
    MOV EAX,[0x00616494]                ; 004ecdd4 | g_CGamePtr
        ;   Label: LAB_004ecdd4
    PUSH 0x5dcf9b                       ; 004ecdd9 | = "Aiming : Auto"
    MOV dword ptr [EAX + 0xd8],0x0      ; 004ecdde | g_CGameInstance.aim_mode
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecde8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ecded
    PUSH EAX                            ; 004ecdf0
    MOV EAX,EBX                         ; 004ecdf1
    SHL EAX,0x8                         ; 004ecdf3
    ADD EAX,0x1d06b80                   ; 004ecdf6
    PUSH EAX                            ; 004ecdfb
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecdfc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
        ;   Label: LAB_004ecdfc
    ADD ESP,0x8                         ; 004ece01
    INC EBX                             ; 004ece04
    MOV EAX,[0x00616494]                ; 004ece05 | g_CGamePtr
    MOV ESI,EBX                         ; 004ece0a
    MOV EBP,dword ptr [EAX + 0xdc]      ; 004ece0c | g_CGameInstance.auto_use_health
    SHL ESI,0x8                         ; 004ece12
    INC EBX                             ; 004ece15
    ADD ESI,0x1d06b80                   ; 004ece16
    TEST EBP,EBP                        ; 004ece1c
    JZ 0x004ed096                       ; 004ece1e
        ;   XREF to: 004ed096 (CONDITIONAL_JUMP)  ; LAB_004ed096
    PUSH 0x5dcfce                       ; 004ece24 | = "Auto use health : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ece29
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ece29
    ADD ESP,0x4                         ; 004ece2e
    PUSH EAX                            ; 004ece31
    PUSH ESI                            ; 004ece32
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ece33
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ece38
    PUSH 0x5dcff9                       ; 004ece3b | = "X-axis sensitivity : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ece40
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EDI,EBX                         ; 004ece45
    ADD ESP,0x4                         ; 004ece47
    SHL EDI,0x8                         ; 004ece4a
    MOV ESI,EAX                         ; 004ece4d
    ADD EDI,0x1d06b80                   ; 004ece4f
    PUSH EDI                            ; 004ece55
    MOV AL,byte ptr [ESI]               ; 004ece56
        ;   Label: LAB_004ece56
    MOV byte ptr [EDI],AL               ; 004ece58
    CMP AL,0x0                          ; 004ece5a
    JZ 0x004ece6e                       ; 004ece5c
        ;   XREF to: 004ece6e (CONDITIONAL_JUMP)  ; LAB_004ece6e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ece5e
    ADD ESI,0x2                         ; 004ece61
    MOV byte ptr [EDI + 0x1],AL         ; 004ece64
    ADD EDI,0x2                         ; 004ece67
    CMP AL,0x0                          ; 004ece6a
    JNZ 0x004ece56                      ; 004ece6c
        ;   XREF to: 004ece56 (CONDITIONAL_JUMP)  ; LAB_004ece56
    POP EDI                             ; 004ece6e
        ;   Label: LAB_004ece6e
    MOV EAX,[0x00616494]                ; 004ece6f | g_CGamePtr
    FILD dword ptr [EAX + 0xb0]         ; 004ece74 | g_CGameInstance.x_mouse_sensitivity
    FMUL double ptr [0x005dd0ad]        ; 004ece7a | DAT_005dd0ad
    SUB ESP,0x8                         ; 004ece80
    FSTP double ptr [ESP]               ; 004ece83
    PUSH 0x5dd00f                       ; 004ece86 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004ece8b
    PUSH EAX                            ; 004ece8f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ece90
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ece95
    MOV ESI,ESP                         ; 004ece98
    PUSH EDI                            ; 004ece9a
    SUB ECX,ECX                         ; 004ece9b
    DEC ECX                             ; 004ece9d
    MOV AL,0x0                          ; 004ece9e
    SCASB.REPNE ES:EDI                  ; 004ecea0
    DEC EDI                             ; 004ecea2
    MOV AL,byte ptr [ESI]               ; 004ecea3
        ;   Label: LAB_004ecea3
    MOV byte ptr [EDI],AL               ; 004ecea5
    CMP AL,0x0                          ; 004ecea7
    JZ 0x004ecebb                       ; 004ecea9
        ;   XREF to: 004ecebb (CONDITIONAL_JUMP)  ; LAB_004ecebb
    MOV AL,byte ptr [ESI + 0x1]         ; 004eceab
    ADD ESI,0x2                         ; 004eceae
    MOV byte ptr [EDI + 0x1],AL         ; 004eceb1
    ADD EDI,0x2                         ; 004eceb4
    CMP AL,0x0                          ; 004eceb7
    JNZ 0x004ecea3                      ; 004eceb9
        ;   XREF to: 004ecea3 (CONDITIONAL_JUMP)  ; LAB_004ecea3
    POP EDI                             ; 004ecebb
        ;   Label: LAB_004ecebb
    PUSH 0x5dd015                       ; 004ecebc | = "Y-axis sensitivity : "
    INC EBX                             ; 004ecec1
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecec2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EDI,EBX                         ; 004ecec7
    ADD ESP,0x4                         ; 004ecec9
    SHL EDI,0x8                         ; 004ececc
    MOV ESI,EAX                         ; 004ececf
    ADD EDI,0x1d06b80                   ; 004eced1
    PUSH EDI                            ; 004eced7
    MOV AL,byte ptr [ESI]               ; 004eced8
        ;   Label: LAB_004eced8
    MOV byte ptr [EDI],AL               ; 004eceda
    CMP AL,0x0                          ; 004ecedc
    JZ 0x004ecef0                       ; 004ecede
        ;   XREF to: 004ecef0 (CONDITIONAL_JUMP)  ; LAB_004ecef0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecee0
    ADD ESI,0x2                         ; 004ecee3
    MOV byte ptr [EDI + 0x1],AL         ; 004ecee6
    ADD EDI,0x2                         ; 004ecee9
    CMP AL,0x0                          ; 004eceec
    JNZ 0x004eced8                      ; 004eceee
        ;   XREF to: 004eced8 (CONDITIONAL_JUMP)  ; LAB_004eced8
    POP EDI                             ; 004ecef0
        ;   Label: LAB_004ecef0
    MOV EAX,[0x00616494]                ; 004ecef1 | g_CGamePtr
    FILD dword ptr [EAX + 0xb4]         ; 004ecef6 | g_CGameInstance.y_mouse_sensitivity
    FMUL double ptr [0x005dd0ad]        ; 004ecefc | DAT_005dd0ad
    SUB ESP,0x8                         ; 004ecf02
    FSTP double ptr [ESP]               ; 004ecf05
    PUSH 0x5dd02b                       ; 004ecf08 | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004ecf0d
    PUSH EAX                            ; 004ecf11
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecf12
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ecf17
    MOV ESI,ESP                         ; 004ecf1a
    INC EBX                             ; 004ecf1c
    PUSH EDI                            ; 004ecf1d
    SUB ECX,ECX                         ; 004ecf1e
    DEC ECX                             ; 004ecf20
    MOV AL,0x0                          ; 004ecf21
    SCASB.REPNE ES:EDI                  ; 004ecf23
    DEC EDI                             ; 004ecf25
    MOV AL,byte ptr [ESI]               ; 004ecf26
        ;   Label: LAB_004ecf26
    MOV byte ptr [EDI],AL               ; 004ecf28
    CMP AL,0x0                          ; 004ecf2a
    JZ 0x004ecf3e                       ; 004ecf2c
        ;   XREF to: 004ecf3e (CONDITIONAL_JUMP)  ; LAB_004ecf3e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ecf2e
    ADD ESI,0x2                         ; 004ecf31
    MOV byte ptr [EDI + 0x1],AL         ; 004ecf34
    ADD EDI,0x2                         ; 004ecf37
    CMP AL,0x0                          ; 004ecf3a
    JNZ 0x004ecf26                      ; 004ecf3c
        ;   XREF to: 004ecf26 (CONDITIONAL_JUMP)  ; LAB_004ecf26
    POP EDI                             ; 004ecf3e
        ;   Label: LAB_004ecf3e
    MOV ESI,EBX                         ; 004ecf3f
    MOV EAX,[0x00616494]                ; 004ecf41 | g_CGamePtr
    SHL ESI,0x8                         ; 004ecf46
    LEA EBP,[EBX + 0x1]                 ; 004ecf49
    MOV EDX,dword ptr [EAX + 0xd0]      ; 004ecf4c | g_CGameInstance.game_control
    ADD ESI,0x1d06b80                   ; 004ecf52
    CMP EDX,0x1                         ; 004ecf58
    JNZ 0x004ed0aa                      ; 004ecf5b
        ;   XREF to: 004ed0aa (CONDITIONAL_JUMP)  ; LAB_004ed0aa
    CMP dword ptr [EAX + 0xa8],0x0      ; 004ecf61 | g_CGameInstance.invert_mouse_y_axis
    JZ 0x004ed0a0                       ; 004ecf68
        ;   XREF to: 004ed0a0 (CONDITIONAL_JUMP)  ; LAB_004ed0a0
    PUSH 0x5dd031                       ; 004ecf6e | = "Invert Y Axis : ON"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecf73
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ecf73
    ADD ESP,0x4                         ; 004ecf78
    PUSH EAX                            ; 004ecf7b
    PUSH ESI                            ; 004ecf7c
    MOV EBX,EBP                         ; 004ecf7d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004ecf7f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 004ecf84
    PUSH 0x5dd062                       ; 004ecf87 | = "Control Options"
        ;   Label: LAB_004ecf87
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ecf8c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ecf91
    PUSH EAX                            ; 004ecf94
    PUSH 0x122                          ; 004ecf95
    LEA EAX,[ESP + 0x108]               ; 004ecf9a
    PUSH EAX                            ; 004ecfa1
    PUSH EBX                            ; 004ecfa2
    PUSH 0x1d07480                      ; 004ecfa3
    CALL core_menu.cpp_FUN_004eb0e0     ; 004ecfa8
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004eb0e0(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004ecfad
    MOV EBX,EAX                         ; 004ecfb0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004ecfb2
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CMP EBX,0x7                         ; 004ecfb7
    JA 0x004ecfee                       ; 004ecfba
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ecc44]  ; 004ecfbc | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,dword ptr [0x01d0612c]      ; 004ecfc3 | DAT_01d0612c
        ;   Label: caseD_0
    CMP EDI,0x1                         ; 004ecfc9
    JNZ 0x004ed0cc                      ; 004ecfcc
        ;   XREF to: 004ed0cc (CONDITIONAL_JUMP)  ; LAB_004ed0cc
    MOV EBX,dword ptr [0x00616494]      ; 004ecfd2 | g_CGamePtr
    MOV EAX,dword ptr [EBX + 0xd0]      ; 004ecfd8 | g_CGameInstance.game_control
    SUB EAX,EDI                         ; 004ecfde
    MOV dword ptr [EBX + 0xd0],EAX      ; 004ecfe0 | g_CGameInstance.game_control
    TEST EAX,EAX                        ; 004ecfe6
    JL 0x004ed0bd                       ; 004ecfe8
        ;   XREF to: 004ed0bd (CONDITIONAL_JUMP)  ; LAB_004ed0bd
    PUSH 0x1                            ; 004ecfee
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004ecff0 | DAT_00617dd4
    PUSH EAX                            ; 004ecff5 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ecff6 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004ecff8
    ADD ESP,0x8                         ; 004ecffb
    TEST EAX,EAX                        ; 004ecffe
    JZ 0x004eccad                       ; 004ed000
        ;   XREF to: 004eccad (CONDITIONAL_JUMP)  ; LAB_004eccad
    MOV EAX,[0x00616494]                ; 004ed006 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 004ed00b | g_CGameInstance.game_control
    JNZ 0x004ed021                      ; 004ed012
        ;   XREF to: 004ed021 (CONDITIONAL_JUMP)  ; LAB_004ed021
    CMP dword ptr [EAX + 0xb8],0x0      ; 004ed014 | g_CGameInstance.x_center
    JZ 0x004ed1f6                       ; 004ed01b
        ;   XREF to: 004ed1f6 (CONDITIONAL_JUMP)  ; LAB_004ed1f6
    ADD ESP,0x104                       ; 004ed021
        ;   Label: LAB_004ed021
    POP EBP                             ; 004ed027
    POP EDI                             ; 004ed028
    POP ESI                             ; 004ed029
    POP EBX                             ; 004ed02a
    RET                                 ; 004ed02b
    PUSH 0x5dcf30                       ; 004ed02c | = "Control : Keyboard/Mouse"
        ;   Label: caseD_1
    JMP 0x004ecd51                      ; 004ed031
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf49                       ; 004ed036 | = "Control : Gamepad"
        ;   Label: caseD_2
    JMP 0x004ecd51                      ; 004ed03b
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf5b                       ; 004ed040 | = "Control : Mouse"
        ;   Label: caseD_3
    JMP 0x004ecd51                      ; 004ed045
        ;   XREF to: 004ecd51 (UNCONDITIONAL_JUMP)  ; LAB_004ecd51
    PUSH 0x5dcf8a                       ; 004ed04a | = "Always run : OFF"
        ;   Label: LAB_004ed04a
    JMP 0x004ecdae                      ; 004ed04f
        ;   XREF to: 004ecdae (UNCONDITIONAL_JUMP)  ; LAB_004ecdae
    PUSH 0x5dcfa9                       ; 004ed054 | = "Aiming : Kindof auto"
        ;   Label: LAB_004ed054
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed059
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed05e
    PUSH EAX                            ; 004ed061
    PUSH ESI                            ; 004ed062
    JMP 0x004ecdfc                      ; 004ed063
        ;   XREF to: 004ecdfc (UNCONDITIONAL_JUMP)  ; LAB_004ecdfc
    PUSH 0x5dcfbe                       ; 004ed068 | = "Aiming : Manual"
        ;   Label: LAB_004ed068
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed06d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed072
    PUSH EAX                            ; 004ed075
    PUSH ESI                            ; 004ed076
    JMP 0x004ecdfc                      ; 004ed077
        ;   XREF to: 004ecdfc (UNCONDITIONAL_JUMP)  ; LAB_004ecdfc
    MOV ESI,EBX                         ; 004ed07c
        ;   Label: LAB_004ed07c
    SHL ESI,0x8                         ; 004ed07e
    ADD ESI,0x1d06b80                   ; 004ed081
    CMP EAX,0x1                         ; 004ed087
    JBE 0x004ed054                      ; 004ed08a
        ;   XREF to: 004ed054 (CONDITIONAL_JUMP)  ; LAB_004ed054
    CMP EAX,0x2                         ; 004ed08c
    JZ 0x004ed068                       ; 004ed08f
        ;   XREF to: 004ed068 (CONDITIONAL_JUMP)  ; LAB_004ed068
    JMP 0x004ecdd4                      ; 004ed091
        ;   XREF to: 004ecdd4 (UNCONDITIONAL_JUMP)  ; LAB_004ecdd4
    PUSH 0x5dcfe3                       ; 004ed096 | = "Auto use health : Off"
        ;   Label: LAB_004ed096
    JMP 0x004ece29                      ; 004ed09b
        ;   XREF to: 004ece29 (UNCONDITIONAL_JUMP)  ; LAB_004ece29
    PUSH 0x5dd044                       ; 004ed0a0 | = "Invert Y Axis : OFF"
        ;   Label: LAB_004ed0a0
    JMP 0x004ecf73                      ; 004ed0a5
        ;   XREF to: 004ecf73 (UNCONDITIONAL_JUMP)  ; LAB_004ecf73
    CMP EDX,0x2                         ; 004ed0aa
        ;   Label: LAB_004ed0aa
    JNZ 0x004ecf87                      ; 004ed0ad
        ;   XREF to: 004ecf87 (CONDITIONAL_JUMP)  ; LAB_004ecf87
    PUSH 0x5dd058                       ; 004ed0b3 | = "Calibrate"
    JMP 0x004ecf73                      ; 004ed0b8
        ;   XREF to: 004ecf73 (UNCONDITIONAL_JUMP)  ; LAB_004ecf73
    MOV dword ptr [EBX + 0xd0],0x3      ; 004ed0bd | g_CGameInstance.game_control
        ;   Label: LAB_004ed0bd
    JMP 0x004ecfee                      ; 004ed0c7
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed0cc | g_CGamePtr
        ;   Label: LAB_004ed0cc
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004ed0d1 | g_CGameInstance.game_control
    INC EBX                             ; 004ed0d7
    MOV dword ptr [EAX + 0xd0],EBX      ; 004ed0d8 | g_CGameInstance.game_control
    CMP EBX,0x3                         ; 004ed0de
    JLE 0x004ecfee                      ; 004ed0e1
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xd0],0x0      ; 004ed0e7 | g_CGameInstance.game_control
    JMP 0x004ecfee                      ; 004ed0f1
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_FUN_004eed60     ; 004ed0f6
        ;   XREF to: 004eed60 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eed60()
        ;   Label: caseD_1
    JMP 0x004ecfee                      ; 004ed0fb
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed100 | g_CGamePtr
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0xac],0x0      ; 004ed105 | g_CGameInstance.always_run
    SETZ BL                             ; 004ed10c
    AND EBX,0xff                        ; 004ed10f
    MOV dword ptr [EAX + 0xac],EBX      ; 004ed115 | g_CGameInstance.always_run
    JMP 0x004ecfee                      ; 004ed11b
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed120 | g_CGamePtr
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xd8],0x0      ; 004ed125 | g_CGameInstance.aim_mode
    JNZ 0x004ed13d                      ; 004ed12c
        ;   XREF to: 004ed13d (CONDITIONAL_JUMP)  ; LAB_004ed13d
    MOV dword ptr [EAX + 0xd8],0x2      ; 004ed12e | g_CGameInstance.aim_mode
    JMP 0x004ecfee                      ; 004ed138
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xd8],0x0      ; 004ed13d | g_CGameInstance.aim_mode
        ;   Label: LAB_004ed13d
    JMP 0x004ecfee                      ; 004ed147
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed14c | g_CGamePtr
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0xdc],0x0      ; 004ed151 | g_CGameInstance.auto_use_health
    SETZ BL                             ; 004ed158
    AND EBX,0xff                        ; 004ed15b
    MOV dword ptr [EAX + 0xdc],EBX      ; 004ed161 | g_CGameInstance.auto_use_health
    JMP 0x004ecfee                      ; 004ed167
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5dd072                       ; 004ed16c | = "Adjust X-Axis sensitivity"
        ;   Label: caseD_5
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed171
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed176
    PUSH EAX                            ; 004ed179
    MOV EAX,[0x00616494]                ; 004ed17a | g_CGamePtr
    ADD EAX,0xb0                        ; 004ed17f
    PUSH EAX                            ; 004ed184 | g_CGameInstance.x_mouse_sensitivity
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 ; 004ed185
        ;   XREF to: 004eb7c0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0(int * sensitivity_value_ptr, char * window_title)
    ADD ESP,0x8                         ; 004ed18a
    JMP 0x004ecfee                      ; 004ed18d
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x5dd08c                       ; 004ed192 | = "Adjust Y-Axis sensitivity"
        ;   Label: caseD_6
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ed197
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ed19c
    PUSH EAX                            ; 004ed19f
    MOV EAX,[0x00616494]                ; 004ed1a0 | g_CGamePtr
    ADD EAX,0xb4                        ; 004ed1a5
    PUSH EAX                            ; 004ed1aa | g_CGameInstance.y_mouse_sensitivity
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 ; 004ed1ab
        ;   XREF to: 004eb7c0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0(int * sensitivity_value_ptr, char * window_title)
    ADD ESP,0x8                         ; 004ed1b0
    JMP 0x004ecfee                      ; 004ed1b3
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x00616494]                ; 004ed1b8 | g_CGamePtr
        ;   Label: caseD_7
    MOV ESI,dword ptr [EAX + 0xd0]      ; 004ed1bd | g_CGameInstance.game_control
    CMP ESI,0x1                         ; 004ed1c3
    JNZ 0x004ed1e3                      ; 004ed1c6
        ;   XREF to: 004ed1e3 (CONDITIONAL_JUMP)  ; LAB_004ed1e3
    CMP dword ptr [EAX + 0xa8],0x0      ; 004ed1c8 | g_CGameInstance.invert_mouse_y_axis
    SETZ BL                             ; 004ed1cf
    AND EBX,0xff                        ; 004ed1d2
    MOV dword ptr [EAX + 0xa8],EBX      ; 004ed1d8 | g_CGameInstance.invert_mouse_y_axis
    JMP 0x004ecfee                      ; 004ed1de
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x2                         ; 004ed1e3
        ;   Label: LAB_004ed1e3
    JNZ 0x004ecfee                      ; 004ed1e6
        ;   XREF to: 004ecfee (CONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_calibrateGamepad_FUN_004eb490 ; 004ed1ec
        ;   XREF to: 004eb490 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_calibrateGamepad_FUN_004eb490()
    JMP 0x004ecfee                      ; 004ed1f1
        ;   XREF to: 004ecfee (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_calibrateGamepad_FUN_004eb490 ; 004ed1f6
        ;   XREF to: 004eb490 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_calibrateGamepad_FUN_004eb490()
        ;   Label: LAB_004ed1f6
    TEST EAX,EAX                        ; 004ed1fb
    JNZ 0x004ed021                      ; 004ed1fd
        ;   XREF to: 004ed021 (CONDITIONAL_JUMP)  ; LAB_004ed021
    JMP 0x004eccad                      ; 004ed203
        ;   XREF to: 004eccad (UNCONDITIONAL_JUMP)  ; LAB_004eccad

