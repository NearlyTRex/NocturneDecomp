; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureCustomKeys_FUN_004d0d20(void)
;
; Local Variables:
; undefined8       Stack[-0x11c]:8  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2354
;
; Referenced Globals:
;   void* switchdataD_004d0cf4 = 004d102c
;   string s_Control_:_Keyboard_005889c8
;   string s_Control_:_Keyboard/Mouse_005889db
;   string s_Control_:_Gamepad_005889f4
;   string s_Customize_Keys_00588a06
;   string s_Always_run_:_ON_00588a15
;   string s_Always_run_:_OFF_00588a25
;   string s_Aiming_:_Auto_00588a36
;   string s_Aiming_:_Kindof_auto_00588a44
;   string s_Aiming_:_Manual_00588a59
;   string s_Auto_use_health_:_On_00588a69
;   string s_Auto_use_health_:_Off_00588a7e
;   string s_X-axis_sensitivity_:_00588a94
;   string s_%5.2f_00588aaa
;   string s_Y-axis_sensitivity_:_00588ab0
;   ... and 21 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
;   core_moon.cpp_CMoon_render_FUN_004dec50
;   core_moon.cpp_CMoon_update_FUN_004deae0
;   crt_stdio.c_sprintf_FUN_00563c90
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0d20
        ;   Label: core_menu.cpp_configureCustomKeys_FUN_004d0d20
    PUSH ESI                            ; 004d0d21
    PUSH EDI                            ; 004d0d22
    PUSH EBP                            ; 004d0d23
    SUB ESP,0x104                       ; 004d0d24
    MOV ECX,dword ptr [0x005b9354]      ; 004d0d2a | DAT_005b9354
    XOR EDX,EDX                         ; 004d0d30
    PUSH ECX                            ; 004d0d32
    MOV EBX,0x1cc65b0                   ; 004d0d33
    MOV dword ptr [ESP + 0x104],EDX     ; 004d0d38
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004d0d3f
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_saveClockTime_FUN_0049a890()
    ADD ESP,0x4                         ; 004d0d44
    XOR EAX,EAX                         ; 004d0d47
    MOV dword ptr [EAX + 0x1cc6eb0],EBX ; 004d0d49
        ;   Label: LAB_004d0d49
    ADD EAX,0x4                         ; 004d0d4f
    ADD EBX,0x100                       ; 004d0d52
    CMP EAX,0x24                        ; 004d0d58
    JNZ 0x004d0d49                      ; 004d0d5b
        ;   XREF to: 004d0d49 (CONDITIONAL_JUMP)  ; LAB_004d0d49
    MOV EBX,dword ptr [0x005b9354]      ; 004d0d5d | DAT_005b9354
        ;   Label: LAB_004d0d5d
    PUSH EBX                            ; 004d0d63
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004d0d64
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_updateDT_FUN_0049a8a0()
    ADD ESP,0x4                         ; 004d0d69
    MOV EAX,[0x005b9354]                ; 004d0d6c | DAT_005b9354
    SUB ESP,0x4                         ; 004d0d71
    MOV EDX,dword ptr [EAX + 0x264]     ; 004d0d74 | DAT_01c77850
    MOV dword ptr [ESP],EDX             ; 004d0d7a
    PUSH 0x1cc5780                      ; 004d0d7d
    CALL core_moon.cpp_CMoon_update_FUN_004deae0 ; 004d0d82
        ;   XREF to: 004deae0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_update_FUN_004deae0()
    ADD ESP,0x8                         ; 004d0d87
    PUSH 0x1cc5780                      ; 004d0d8a
    CALL core_moon.cpp_CMoon_render_FUN_004dec50 ; 004d0d8f
        ;   XREF to: 004dec50 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_CMoon_render_FUN_004dec50()
    MOV EAX,[0x005b9354]                ; 004d0d94 | DAT_005b9354
    XOR EBX,EBX                         ; 004d0d99
    MOV EAX,dword ptr [EAX + 0xbc]      ; 004d0d9b | DAT_01c776a8
    ADD ESP,0x4                         ; 004d0da1
    CMP EAX,0x1                         ; 004d0da4
    JC 0x004d10a3                       ; 004d0da7
        ;   XREF to: 004d10a3 (CONDITIONAL_JUMP)  ; LAB_004d10a3
    JA 0x004d109e                       ; 004d0dad
        ;   XREF to: 004d109e (CONDITIONAL_JUMP)  ; LAB_004d109e
    PUSH 0x5889db                       ; 004d0db3 | = "Control : Keyboard/Mouse"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0db8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d0db8
    ADD ESP,0x4                         ; 004d0dbd
    PUSH EAX                            ; 004d0dc0
    PUSH 0x1cc65b0                      ; 004d0dc1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0dc6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
        ;   Label: LAB_004d0dc6
    ADD ESP,0x8                         ; 004d0dcb
    PUSH 0x588a06                       ; 004d0dce | = "Customize Keys"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0dd3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d0dd8
    INC EBX                             ; 004d0ddb
    PUSH EAX                            ; 004d0ddc
    MOV EAX,EBX                         ; 004d0ddd
    SHL EAX,0x8                         ; 004d0ddf
    ADD EAX,0x1cc65b0                   ; 004d0de2
    INC EBX                             ; 004d0de7
    PUSH EAX                            ; 004d0de8
    MOV ESI,EBX                         ; 004d0de9
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0deb
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    SHL ESI,0x8                         ; 004d0df0
    MOV EAX,[0x005b9354]                ; 004d0df3 | DAT_005b9354
    INC EBX                             ; 004d0df8
    ADD ESP,0x8                         ; 004d0df9
    MOV EDI,dword ptr [EAX + 0x98]      ; 004d0dfc | DAT_01c77684
    ADD ESI,0x1cc65b0                   ; 004d0e02
    TEST EDI,EDI                        ; 004d0e08
    JZ 0x004d10d0                       ; 004d0e0a
        ;   XREF to: 004d10d0 (CONDITIONAL_JUMP)  ; LAB_004d10d0
    PUSH 0x588a15                       ; 004d0e10 | = "Always run : ON"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0e15
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d0e15
    ADD ESP,0x4                         ; 004d0e1a
    PUSH EAX                            ; 004d0e1d
    PUSH ESI                            ; 004d0e1e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0e1f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d0e24
    MOV EAX,[0x005b9354]                ; 004d0e27 | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0xc4]      ; 004d0e2c | DAT_01c776b0
    CMP EAX,0x1                         ; 004d0e32
    JNC 0x004d1102                      ; 004d0e35
        ;   XREF to: 004d1102 (CONDITIONAL_JUMP)  ; LAB_004d1102
    MOV EAX,[0x005b9354]                ; 004d0e3b | DAT_005b9354
        ;   Label: LAB_004d0e3b
    PUSH 0x588a36                       ; 004d0e40 | = "Aiming : Auto"
    MOV dword ptr [EAX + 0xc4],0x0      ; 004d0e45 | DAT_01c776b0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0e4f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d0e54
    PUSH EAX                            ; 004d0e57
    MOV EAX,EBX                         ; 004d0e58
    SHL EAX,0x8                         ; 004d0e5a
    ADD EAX,0x1cc65b0                   ; 004d0e5d
    PUSH EAX                            ; 004d0e62
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0e63
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
        ;   Label: LAB_004d0e63
    ADD ESP,0x8                         ; 004d0e68
    INC EBX                             ; 004d0e6b
    MOV EAX,[0x005b9354]                ; 004d0e6c | DAT_005b9354
    MOV ESI,EBX                         ; 004d0e71
    MOV EBP,dword ptr [EAX + 0xc8]      ; 004d0e73 | DAT_01c776b4
    SHL ESI,0x8                         ; 004d0e79
    INC EBX                             ; 004d0e7c
    ADD ESI,0x1cc65b0                   ; 004d0e7d
    TEST EBP,EBP                        ; 004d0e83
    JZ 0x004d111c                       ; 004d0e85
        ;   XREF to: 004d111c (CONDITIONAL_JUMP)  ; LAB_004d111c
    PUSH 0x588a69                       ; 004d0e8b | = "Auto use health : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0e90
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d0e90
    ADD ESP,0x4                         ; 004d0e95
    PUSH EAX                            ; 004d0e98
    PUSH ESI                            ; 004d0e99
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0e9a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d0e9f
    PUSH 0x588a94                       ; 004d0ea2 | = "X-axis sensitivity : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0ea7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDI,EBX                         ; 004d0eac
    ADD ESP,0x4                         ; 004d0eae
    SHL EDI,0x8                         ; 004d0eb1
    MOV ESI,EAX                         ; 004d0eb4
    ADD EDI,0x1cc65b0                   ; 004d0eb6
    PUSH EDI                            ; 004d0ebc
    MOV AL,byte ptr [ESI]               ; 004d0ebd
        ;   Label: LAB_004d0ebd
    MOV byte ptr [EDI],AL               ; 004d0ebf
    CMP AL,0x0                          ; 004d0ec1
    JZ 0x004d0ed5                       ; 004d0ec3
        ;   XREF to: 004d0ed5 (CONDITIONAL_JUMP)  ; LAB_004d0ed5
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0ec5
    ADD ESI,0x2                         ; 004d0ec8
    MOV byte ptr [EDI + 0x1],AL         ; 004d0ecb
    ADD EDI,0x2                         ; 004d0ece
    CMP AL,0x0                          ; 004d0ed1
    JNZ 0x004d0ebd                      ; 004d0ed3
        ;   XREF to: 004d0ebd (CONDITIONAL_JUMP)  ; LAB_004d0ebd
    POP EDI                             ; 004d0ed5
        ;   Label: LAB_004d0ed5
    MOV EAX,[0x005b9354]                ; 004d0ed6 | DAT_005b9354
    FILD dword ptr [EAX + 0x9c]         ; 004d0edb | DAT_01c77688
    FMUL double ptr [0x00588b43]        ; 004d0ee1 | DAT_00588b43
    SUB ESP,0x8                         ; 004d0ee7
    FSTP double ptr [ESP]               ; 004d0eea
    PUSH 0x588aaa                       ; 004d0eed | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004d0ef2
    PUSH EAX                            ; 004d0ef6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0ef7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004d0efc
    MOV ESI,ESP                         ; 004d0eff
    PUSH EDI                            ; 004d0f01
    SUB ECX,ECX                         ; 004d0f02
    DEC ECX                             ; 004d0f04
    MOV AL,0x0                          ; 004d0f05
    SCASB.REPNE ES:EDI                  ; 004d0f07
    DEC EDI                             ; 004d0f09
    MOV AL,byte ptr [ESI]               ; 004d0f0a
        ;   Label: LAB_004d0f0a
    MOV byte ptr [EDI],AL               ; 004d0f0c
    CMP AL,0x0                          ; 004d0f0e
    JZ 0x004d0f22                       ; 004d0f10
        ;   XREF to: 004d0f22 (CONDITIONAL_JUMP)  ; LAB_004d0f22
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0f12
    ADD ESI,0x2                         ; 004d0f15
    MOV byte ptr [EDI + 0x1],AL         ; 004d0f18
    ADD EDI,0x2                         ; 004d0f1b
    CMP AL,0x0                          ; 004d0f1e
    JNZ 0x004d0f0a                      ; 004d0f20
        ;   XREF to: 004d0f0a (CONDITIONAL_JUMP)  ; LAB_004d0f0a
    POP EDI                             ; 004d0f22
        ;   Label: LAB_004d0f22
    PUSH 0x588ab0                       ; 004d0f23 | = "Y-axis sensitivity : "
    INC EBX                             ; 004d0f28
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0f29
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDI,EBX                         ; 004d0f2e
    ADD ESP,0x4                         ; 004d0f30
    SHL EDI,0x8                         ; 004d0f33
    MOV ESI,EAX                         ; 004d0f36
    ADD EDI,0x1cc65b0                   ; 004d0f38
    PUSH EDI                            ; 004d0f3e
    MOV AL,byte ptr [ESI]               ; 004d0f3f
        ;   Label: LAB_004d0f3f
    MOV byte ptr [EDI],AL               ; 004d0f41
    CMP AL,0x0                          ; 004d0f43
    JZ 0x004d0f57                       ; 004d0f45
        ;   XREF to: 004d0f57 (CONDITIONAL_JUMP)  ; LAB_004d0f57
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0f47
    ADD ESI,0x2                         ; 004d0f4a
    MOV byte ptr [EDI + 0x1],AL         ; 004d0f4d
    ADD EDI,0x2                         ; 004d0f50
    CMP AL,0x0                          ; 004d0f53
    JNZ 0x004d0f3f                      ; 004d0f55
        ;   XREF to: 004d0f3f (CONDITIONAL_JUMP)  ; LAB_004d0f3f
    POP EDI                             ; 004d0f57
        ;   Label: LAB_004d0f57
    MOV EAX,[0x005b9354]                ; 004d0f58 | DAT_005b9354
    FILD dword ptr [EAX + 0xa0]         ; 004d0f5d | DAT_01c7768c
    FMUL double ptr [0x00588b43]        ; 004d0f63 | DAT_00588b43
    SUB ESP,0x8                         ; 004d0f69
    FSTP double ptr [ESP]               ; 004d0f6c
    PUSH 0x588ac6                       ; 004d0f6f | = "%5.2f"
    LEA EAX,[ESP + 0xc]                 ; 004d0f74
    INC EBX                             ; 004d0f78
    PUSH EAX                            ; 004d0f79
    MOV EBP,EBX                         ; 004d0f7a
    LEA ESI,[ESP + 0x10]                ; 004d0f7c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0f80
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004d0f85
    SHL EBP,0x8                         ; 004d0f88
    PUSH EDI                            ; 004d0f8b
    SUB ECX,ECX                         ; 004d0f8c
    DEC ECX                             ; 004d0f8e
    MOV AL,0x0                          ; 004d0f8f
    SCASB.REPNE ES:EDI                  ; 004d0f91
    DEC EDI                             ; 004d0f93
    MOV AL,byte ptr [ESI]               ; 004d0f94
        ;   Label: LAB_004d0f94
    MOV byte ptr [EDI],AL               ; 004d0f96
    CMP AL,0x0                          ; 004d0f98
    JZ 0x004d0fac                       ; 004d0f9a
        ;   XREF to: 004d0fac (CONDITIONAL_JUMP)  ; LAB_004d0fac
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0f9c
    ADD ESI,0x2                         ; 004d0f9f
    MOV byte ptr [EDI + 0x1],AL         ; 004d0fa2
    ADD EDI,0x2                         ; 004d0fa5
    CMP AL,0x0                          ; 004d0fa8
    JNZ 0x004d0f94                      ; 004d0faa
        ;   XREF to: 004d0f94 (CONDITIONAL_JUMP)  ; LAB_004d0f94
    POP EDI                             ; 004d0fac
        ;   Label: LAB_004d0fac
    MOV EAX,[0x005b9354]                ; 004d0fad | DAT_005b9354
    ADD EBP,0x1cc65b0                   ; 004d0fb2
    MOV EDX,dword ptr [EAX + 0xbc]      ; 004d0fb8 | DAT_01c776a8
    LEA ESI,[EBX + 0x1]                 ; 004d0fbe
    CMP EDX,0x1                         ; 004d0fc1
    JNZ 0x004d1130                      ; 004d0fc4
        ;   XREF to: 004d1130 (CONDITIONAL_JUMP)  ; LAB_004d1130
    CMP dword ptr [EAX + 0x94],0x0      ; 004d0fca | DAT_01c77680
    JZ 0x004d1126                       ; 004d0fd1
        ;   XREF to: 004d1126 (CONDITIONAL_JUMP)  ; LAB_004d1126
    PUSH 0x588acc                       ; 004d0fd7 | = "Invert Y Axis : ON"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0fdc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d0fdc
    ADD ESP,0x4                         ; 004d0fe1
    PUSH EAX                            ; 004d0fe4
    PUSH EBP                            ; 004d0fe5
    MOV EBX,ESI                         ; 004d0fe6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0fe8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 004d0fed
    PUSH 0x588afd                       ; 004d0ff0 | = "Control Options"
        ;   Label: LAB_004d0ff0
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0ff5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d0ffa
    PUSH EAX                            ; 004d0ffd
    PUSH 0xfa                           ; 004d0ffe
    LEA EAX,[ESP + 0x108]               ; 004d1003
    PUSH EAX                            ; 004d100a
    PUSH EBX                            ; 004d100b
    PUSH 0x1cc6eb0                      ; 004d100c
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 ; 004d1011
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440()
    ADD ESP,0x14                        ; 004d1016
    MOV EBX,EAX                         ; 004d1019
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d101b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CMP EBX,0x7                         ; 004d1020
    JA 0x004d1056                       ; 004d1023
        ;   XREF to: 004d1056 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4d0cf4]  ; 004d1025 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,dword ptr [0x01cc5b5c]      ; 004d102c | DAT_01cc5b5c
        ;   Label: caseD_0
    CMP EDI,0x1                         ; 004d1032
    JNZ 0x004d1152                      ; 004d1035
        ;   XREF to: 004d1152 (CONDITIONAL_JUMP)  ; LAB_004d1152
    MOV EAX,[0x005b9354]                ; 004d103b | DAT_005b9354
    MOV EBX,dword ptr [EAX + 0xbc]      ; 004d1040 | DAT_01c776a8
    SUB EBX,EDI                         ; 004d1046
    MOV dword ptr [EAX + 0xbc],EBX      ; 004d1048 | DAT_01c776a8
    TEST EBX,EBX                        ; 004d104e
    JL 0x004d1143                       ; 004d1050
        ;   XREF to: 004d1143 (CONDITIONAL_JUMP)  ; LAB_004d1143
    PUSH 0x1                            ; 004d1056
        ;   Label: default
    MOV EAX,[0x005bac64]                ; 004d1058 | DAT_005bac64
    PUSH EAX                            ; 004d105d | DAT_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004d105e | DAT_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004d1060
    ADD ESP,0x8                         ; 004d1063
    TEST EAX,EAX                        ; 004d1066
    JZ 0x004d0d5d                       ; 004d1068
        ;   XREF to: 004d0d5d (CONDITIONAL_JUMP)  ; LAB_004d0d5d
    MOV EAX,[0x005b9354]                ; 004d106e | DAT_005b9354
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d1073 | DAT_01c776a8
    JNZ 0x004d1089                      ; 004d107a
        ;   XREF to: 004d1089 (CONDITIONAL_JUMP)  ; LAB_004d1089
    CMP dword ptr [EAX + 0xa4],0x0      ; 004d107c | DAT_01c77690
    JZ 0x004d127c                       ; 004d1083
        ;   XREF to: 004d127c (CONDITIONAL_JUMP)  ; LAB_004d127c
    ADD ESP,0x104                       ; 004d1089
        ;   Label: LAB_004d1089
    POP EBP                             ; 004d108f
    POP EDI                             ; 004d1090
    POP ESI                             ; 004d1091
    POP EBX                             ; 004d1092
    RET                                 ; 004d1093
    PUSH 0x5889f4                       ; 004d1094 | = "Control : Gamepad"
        ;   Label: LAB_004d1094
    JMP 0x004d0db8                      ; 004d1099
        ;   XREF to: 004d0db8 (UNCONDITIONAL_JUMP)  ; LAB_004d0db8
    CMP EAX,0x2                         ; 004d109e
        ;   Label: LAB_004d109e
    JZ 0x004d1094                       ; 004d10a1
        ;   XREF to: 004d1094 (CONDITIONAL_JUMP)  ; LAB_004d1094
    MOV EAX,[0x005b9354]                ; 004d10a3 | DAT_005b9354
        ;   Label: LAB_004d10a3
    PUSH 0x5889c8                       ; 004d10a8 | = "Control : Keyboard"
    MOV dword ptr [EAX + 0xbc],0x0      ; 004d10ad | DAT_01c776a8
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d10b7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d10bc
    PUSH EAX                            ; 004d10bf
    MOV EAX,EBX                         ; 004d10c0
    SHL EAX,0x8                         ; 004d10c2
    ADD EAX,0x1cc65b0                   ; 004d10c5
    PUSH EAX                            ; 004d10ca
    JMP 0x004d0dc6                      ; 004d10cb
        ;   XREF to: 004d0dc6 (UNCONDITIONAL_JUMP)  ; LAB_004d0dc6
    PUSH 0x588a25                       ; 004d10d0 | = "Always run : OFF"
        ;   Label: LAB_004d10d0
    JMP 0x004d0e15                      ; 004d10d5
        ;   XREF to: 004d0e15 (UNCONDITIONAL_JUMP)  ; LAB_004d0e15
    PUSH 0x588a44                       ; 004d10da | = "Aiming : Kindof auto"
        ;   Label: LAB_004d10da
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d10df
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d10e4
    PUSH EAX                            ; 004d10e7
    PUSH ESI                            ; 004d10e8
    JMP 0x004d0e63                      ; 004d10e9
        ;   XREF to: 004d0e63 (UNCONDITIONAL_JUMP)  ; LAB_004d0e63
    PUSH 0x588a59                       ; 004d10ee | = "Aiming : Manual"
        ;   Label: LAB_004d10ee
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d10f3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d10f8
    PUSH EAX                            ; 004d10fb
    PUSH ESI                            ; 004d10fc
    JMP 0x004d0e63                      ; 004d10fd
        ;   XREF to: 004d0e63 (UNCONDITIONAL_JUMP)  ; LAB_004d0e63
    MOV ESI,EBX                         ; 004d1102
        ;   Label: LAB_004d1102
    SHL ESI,0x8                         ; 004d1104
    ADD ESI,0x1cc65b0                   ; 004d1107
    CMP EAX,0x1                         ; 004d110d
    JBE 0x004d10da                      ; 004d1110
        ;   XREF to: 004d10da (CONDITIONAL_JUMP)  ; LAB_004d10da
    CMP EAX,0x2                         ; 004d1112
    JZ 0x004d10ee                       ; 004d1115
        ;   XREF to: 004d10ee (CONDITIONAL_JUMP)  ; LAB_004d10ee
    JMP 0x004d0e3b                      ; 004d1117
        ;   XREF to: 004d0e3b (UNCONDITIONAL_JUMP)  ; LAB_004d0e3b
    PUSH 0x588a7e                       ; 004d111c | = "Auto use health : Off"
        ;   Label: LAB_004d111c
    JMP 0x004d0e90                      ; 004d1121
        ;   XREF to: 004d0e90 (UNCONDITIONAL_JUMP)  ; LAB_004d0e90
    PUSH 0x588adf                       ; 004d1126 | = "Invert Y Axis : OFF"
        ;   Label: LAB_004d1126
    JMP 0x004d0fdc                      ; 004d112b
        ;   XREF to: 004d0fdc (UNCONDITIONAL_JUMP)  ; LAB_004d0fdc
    CMP EDX,0x2                         ; 004d1130
        ;   Label: LAB_004d1130
    JNZ 0x004d0ff0                      ; 004d1133
        ;   XREF to: 004d0ff0 (CONDITIONAL_JUMP)  ; LAB_004d0ff0
    PUSH 0x588af3                       ; 004d1139 | = "Calibrate"
    JMP 0x004d0fdc                      ; 004d113e
        ;   XREF to: 004d0fdc (UNCONDITIONAL_JUMP)  ; LAB_004d0fdc
    MOV dword ptr [EAX + 0xbc],0x2      ; 004d1143 | DAT_01c776a8
        ;   Label: LAB_004d1143
    JMP 0x004d1056                      ; 004d114d
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d1152 | DAT_005b9354
        ;   Label: LAB_004d1152
    MOV EBX,dword ptr [EAX + 0xbc]      ; 004d1157 | DAT_01c776a8
    INC EBX                             ; 004d115d
    MOV dword ptr [EAX + 0xbc],EBX      ; 004d115e | DAT_01c776a8
    CMP EBX,0x2                         ; 004d1164
    JLE 0x004d1056                      ; 004d1167
        ;   XREF to: 004d1056 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xbc],0x0      ; 004d116d | DAT_01c776a8
    JMP 0x004d1056                      ; 004d1177
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 ; 004d117c
        ;   XREF to: 004d2d00 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00()
        ;   Label: caseD_1
    JMP 0x004d1056                      ; 004d1181
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d1186 | DAT_005b9354
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x98],0x0      ; 004d118b | DAT_01c77684
    SETZ BL                             ; 004d1192
    AND EBX,0xff                        ; 004d1195
    MOV dword ptr [EAX + 0x98],EBX      ; 004d119b | DAT_01c77684
    JMP 0x004d1056                      ; 004d11a1
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d11a6 | DAT_005b9354
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0xc4],0x0      ; 004d11ab | DAT_01c776b0
    JNZ 0x004d11c3                      ; 004d11b2
        ;   XREF to: 004d11c3 (CONDITIONAL_JUMP)  ; LAB_004d11c3
    MOV dword ptr [EAX + 0xc4],0x2      ; 004d11b4 | DAT_01c776b0
    JMP 0x004d1056                      ; 004d11be
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xc4],0x0      ; 004d11c3 | DAT_01c776b0
        ;   Label: LAB_004d11c3
    JMP 0x004d1056                      ; 004d11cd
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d11d2 | DAT_005b9354
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0xc8],0x0      ; 004d11d7 | DAT_01c776b4
    SETZ BL                             ; 004d11de
    AND EBX,0xff                        ; 004d11e1
    MOV dword ptr [EAX + 0xc8],EBX      ; 004d11e7 | DAT_01c776b4
    JMP 0x004d1056                      ; 004d11ed
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x588b0d                       ; 004d11f2 | = "Adjust X-Axis sensitivity"
        ;   Label: caseD_5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d11f7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d11fc
    PUSH EAX                            ; 004d11ff
    MOV EAX,[0x005b9354]                ; 004d1200 | DAT_005b9354
    ADD EAX,0x9c                        ; 004d1205
    PUSH EAX                            ; 004d120a | DAT_01c77688
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 ; 004d120b
        ;   XREF to: 004cfbc0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0()
    ADD ESP,0x8                         ; 004d1210
    JMP 0x004d1056                      ; 004d1213
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x588b27                       ; 004d1218 | = "Adjust Y-Axis sensitivity"
        ;   Label: caseD_6
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d121d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d1222
    PUSH EAX                            ; 004d1225
    MOV EAX,[0x005b9354]                ; 004d1226 | DAT_005b9354
    ADD EAX,0xa0                        ; 004d122b
    PUSH EAX                            ; 004d1230 | DAT_01c7768c
    CALL core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 ; 004d1231
        ;   XREF to: 004cfbc0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0()
    ADD ESP,0x8                         ; 004d1236
    JMP 0x004d1056                      ; 004d1239
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d123e | DAT_005b9354
        ;   Label: caseD_7
    MOV ESI,dword ptr [EAX + 0xbc]      ; 004d1243 | DAT_01c776a8
    CMP ESI,0x1                         ; 004d1249
    JNZ 0x004d1269                      ; 004d124c
        ;   XREF to: 004d1269 (CONDITIONAL_JUMP)  ; LAB_004d1269
    CMP dword ptr [EAX + 0x94],0x0      ; 004d124e | DAT_01c77680
    SETZ BL                             ; 004d1255
    AND EBX,0xff                        ; 004d1258
    MOV dword ptr [EAX + 0x94],EBX      ; 004d125e | DAT_01c77680
    JMP 0x004d1056                      ; 004d1264
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x2                         ; 004d1269
        ;   Label: LAB_004d1269
    JNZ 0x004d1056                      ; 004d126c
        ;   XREF to: 004d1056 (CONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_calibrateGamepad_FUN_004cf8d0 ; 004d1272
        ;   XREF to: 004cf8d0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_calibrateGamepad_FUN_004cf8d0()
    JMP 0x004d1056                      ; 004d1277
        ;   XREF to: 004d1056 (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_calibrateGamepad_FUN_004cf8d0 ; 004d127c
        ;   XREF to: 004cf8d0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_calibrateGamepad_FUN_004cf8d0()
        ;   Label: LAB_004d127c
    TEST EAX,EAX                        ; 004d1281
    JNZ 0x004d1089                      ; 004d1283
        ;   XREF to: 004d1089 (CONDITIONAL_JUMP)  ; LAB_004d1089
    JMP 0x004d0d5d                      ; 004d1289
        ;   XREF to: 004d0d5d (UNCONDITIONAL_JUMP)  ; LAB_004d0d5d

