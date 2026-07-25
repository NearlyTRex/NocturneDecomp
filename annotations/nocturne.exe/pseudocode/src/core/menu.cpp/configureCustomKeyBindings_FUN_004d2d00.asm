; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_004d2d00(void)
;
; Local Variables:
; undefined        Stack[-0x844]:1  local_844
; undefined1       Stack[-0x843]:1  local_843
; undefined        Stack[-0x644]:1  local_644
; undefined1       Stack[-0x643]:1  local_643
; undefined        Stack[-0x244]:1  local_244
; undefined4       Stack[-0x234]:4  local_234
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_menu.cpp_configureCustomKeys_FUN_004d0d20 at 004d117c
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d2366
;
; Referenced Globals:
;   void* switchdataD_004d2ce0 = 004d3c8d
;   TerminatedCString s_core_menu_cpp_00588d42
;   TerminatedCString s_Too_many_custom_keys_00588d53
;   TerminatedCString s_Forward_00588e38
;   TerminatedCString s_Back_00588e40
;   TerminatedCString s_Walk_00588e45
;   TerminatedCString s_Run_00588e4a
;   TerminatedCString s_Strafe_on_00588e4e
;   TerminatedCString s_Strafe_left_00588e58
;   TerminatedCString s_Strafe_right_00588e64
;   TerminatedCString s_Turn_left_00588e71
;   TerminatedCString s_Turn_right_00588e7b
;   TerminatedCString s_Fire_Action_00588e86
;   TerminatedCString s_Use_item_00588e94
;   TerminatedCString s_Light_00588e9d
;   ... and 196 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0
;   core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610
;   core_menu.cpp_calibrateGamepad_FUN_004cf8d0
;   core_menu.cpp_getKeyDisplayName_FUN_004d2900
;   core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210
;   FUN_0046fcd0
;   FUN_00474c90
;   FUN_004c8440
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2d00
        ;   Label: core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00
    PUSH EBP                            ; 004d2d01
    SUB ESP,0x83c                       ; 004d2d02
    MOV EAX,[0x005b9354]                ; 004d2d08 | DAT_005b9354
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d2d0d | DAT_01c776a8
    JNZ 0x004d2d23                      ; 004d2d14
        ;   XREF to: 004d2d23 (CONDITIONAL_JUMP)  ; LAB_004d2d23
    CMP dword ptr [EAX + 0xa4],0x0      ; 004d2d16 | DAT_01c77690
    JZ 0x004d3be6                       ; 004d2d1d
        ;   XREF to: 004d3be6 (CONDITIONAL_JUMP)  ; LAB_004d3be6
    PUSH EDI                            ; 004d2d23
        ;   Label: LAB_004d2d23
    PUSH ESI                            ; 004d2d24
    XOR EBX,EBX                         ; 004d2d25
    MOV dword ptr [ESP + 0x840],EBX     ; 004d2d27
    XOR ESI,ESI                         ; 004d2d2e
        ;   Label: LAB_004d2d2e
    PUSH 0x588e38                       ; 004d2d30 | = "Forward"
    MOV dword ptr [0x01cc8120],ESI      ; 004d2d35 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2d3b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d2d40 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2d46 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2d4c
    MOV ESI,EAX                         ; 004d2d4f
    LEA EBX,[EDX + 0x28]                ; 004d2d51
    CMP EDI,0x1e                        ; 004d2d54
    JL 0x004d2d7b                       ; 004d2d57
        ;   XREF to: 004d2d7b (CONDITIONAL_JUMP)  ; LAB_004d2d7b
    MOV EBP,0x588d42                    ; 004d2d59 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2d5e
    PUSH 0x588d53                       ; 004d2d63 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2d68 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2d6e | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d2d73
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d2d78
    MOV EAX,[0x01cc8120]                ; 004d2d7b | DAT_01cc8120
        ;   Label: LAB_004d2d7b
    IMUL EDI,EAX,0x28                   ; 004d2d80
    ADD EDI,0x1cc81a0                   ; 004d2d83
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d2d89 | DAT_01cc8124 | DAT_01c77614
    PUSH EDI                            ; 004d2d90
    MOV AL,byte ptr [ESI]               ; 004d2d91
        ;   Label: LAB_004d2d91
    MOV byte ptr [EDI],AL               ; 004d2d93
    CMP AL,0x0                          ; 004d2d95
    JZ 0x004d2da9                       ; 004d2d97
        ;   XREF to: 004d2da9 (CONDITIONAL_JUMP)  ; LAB_004d2da9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2d99
    ADD ESI,0x2                         ; 004d2d9c
    MOV byte ptr [EDI + 0x1],AL         ; 004d2d9f
    ADD EDI,0x2                         ; 004d2da2
    CMP AL,0x0                          ; 004d2da5
    JNZ 0x004d2d91                      ; 004d2da7
        ;   XREF to: 004d2d91 (CONDITIONAL_JUMP)  ; LAB_004d2d91
    POP EDI                             ; 004d2da9
        ;   Label: LAB_004d2da9
    MOV ECX,dword ptr [0x01cc8120]      ; 004d2daa | DAT_01cc8120
    INC ECX                             ; 004d2db0
    PUSH 0x588e40                       ; 004d2db1 | = "Back"
    MOV dword ptr [0x01cc8120],ECX      ; 004d2db6 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2dbc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d2dc1 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2dc7 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2dcd
    MOV ESI,EAX                         ; 004d2dd0
    ADD EBX,0x2c                        ; 004d2dd2
    CMP EDI,0x1e                        ; 004d2dd5
    JL 0x004d2dfc                       ; 004d2dd8
        ;   XREF to: 004d2dfc (CONDITIONAL_JUMP)  ; LAB_004d2dfc
    MOV EBP,0x588d42                    ; 004d2dda | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2ddf
    PUSH 0x588d53                       ; 004d2de4 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2de9 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2def | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d2df4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d2df9
    MOV EAX,[0x01cc8120]                ; 004d2dfc | DAT_01cc8120
        ;   Label: LAB_004d2dfc
    IMUL EDI,EAX,0x28                   ; 004d2e01
    ADD EDI,0x1cc81a0                   ; 004d2e04
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d2e0a | DAT_01cc8128 | DAT_01c77618
    PUSH EDI                            ; 004d2e11 | DAT_01cc81c8
    MOV AL,byte ptr [ESI]               ; 004d2e12
        ;   Label: LAB_004d2e12
    MOV byte ptr [EDI],AL               ; 004d2e14 | DAT_01cc81c8 | DAT_01cc81ca
    CMP AL,0x0                          ; 004d2e16
    JZ 0x004d2e2a                       ; 004d2e18
        ;   XREF to: 004d2e2a (CONDITIONAL_JUMP)  ; LAB_004d2e2a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2e1a
    ADD ESI,0x2                         ; 004d2e1d
    MOV byte ptr [EDI + 0x1],AL         ; 004d2e20 | DAT_01cc81c9 | DAT_01cc81cb
    ADD EDI,0x2                         ; 004d2e23
    CMP AL,0x0                          ; 004d2e26
    JNZ 0x004d2e12                      ; 004d2e28
        ;   XREF to: 004d2e12 (CONDITIONAL_JUMP)  ; LAB_004d2e12
    POP EDI                             ; 004d2e2a
        ;   Label: LAB_004d2e2a
    MOV ECX,dword ptr [0x01cc8120]      ; 004d2e2b | DAT_01cc8120
    MOV EAX,[0x005b9354]                ; 004d2e31 | DAT_005b9354
    INC ECX                             ; 004d2e36
    MOV EBX,dword ptr [EAX + 0x98]      ; 004d2e37 | DAT_01c77684
    MOV dword ptr [0x01cc8120],ECX      ; 004d2e3d | DAT_01cc8120
    TEST EBX,EBX                        ; 004d2e43
    JZ 0x004d3bfc                       ; 004d2e45
        ;   XREF to: 004d3bfc (CONDITIONAL_JUMP)  ; LAB_004d3bfc
    PUSH 0x588e45                       ; 004d2e4b | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2e50
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d2e50
    MOV EBX,dword ptr [0x005b9354]      ; 004d2e55 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2e5b | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2e61
    MOV ESI,EAX                         ; 004d2e64
    ADD EBX,0x30                        ; 004d2e66
    CMP EDI,0x1e                        ; 004d2e69
    JL 0x004d2e90                       ; 004d2e6c
        ;   XREF to: 004d2e90 (CONDITIONAL_JUMP)  ; LAB_004d2e90
    MOV EBP,0x588d42                    ; 004d2e6e | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2e73
    PUSH 0x588d53                       ; 004d2e78 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2e7d | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2e83 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d2e88
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d2e8d
    MOV EAX,[0x01cc8120]                ; 004d2e90 | DAT_01cc8120
        ;   Label: LAB_004d2e90
    IMUL EDI,EAX,0x28                   ; 004d2e95
    ADD EDI,0x1cc81a0                   ; 004d2e98
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d2e9e | DAT_01cc812c
    PUSH EDI                            ; 004d2ea5 | DAT_01cc81f0
    MOV AL,byte ptr [ESI]               ; 004d2ea6
        ;   Label: LAB_004d2ea6
    MOV byte ptr [EDI],AL               ; 004d2ea8 | DAT_01cc81f0 | DAT_01cc81f2
    CMP AL,0x0                          ; 004d2eaa
    JZ 0x004d2ebe                       ; 004d2eac
        ;   XREF to: 004d2ebe (CONDITIONAL_JUMP)  ; LAB_004d2ebe
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2eae
    ADD ESI,0x2                         ; 004d2eb1
    MOV byte ptr [EDI + 0x1],AL         ; 004d2eb4 | DAT_01cc81f1 | DAT_01cc81f3
    ADD EDI,0x2                         ; 004d2eb7
    CMP AL,0x0                          ; 004d2eba
    JNZ 0x004d2ea6                      ; 004d2ebc
        ;   XREF to: 004d2ea6 (CONDITIONAL_JUMP)  ; LAB_004d2ea6
    POP EDI                             ; 004d2ebe
        ;   Label: LAB_004d2ebe
    INC dword ptr [0x01cc8120]          ; 004d2ebf | DAT_01cc8120
    PUSH 0x588e4e                       ; 004d2ec5 | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2eca
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d2ecf | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2ed5 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2edb
    MOV ESI,EAX                         ; 004d2ede
    ADD EBX,0x34                        ; 004d2ee0
    CMP EDI,0x1e                        ; 004d2ee3
    JL 0x004d2f0a                       ; 004d2ee6
        ;   XREF to: 004d2f0a (CONDITIONAL_JUMP)  ; LAB_004d2f0a
    MOV EBP,0x588d42                    ; 004d2ee8 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2eed
    PUSH 0x588d53                       ; 004d2ef2 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2ef7 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2efd | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d2f02
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d2f07
    MOV EAX,[0x01cc8120]                ; 004d2f0a | DAT_01cc8120
        ;   Label: LAB_004d2f0a
    IMUL EDI,EAX,0x28                   ; 004d2f0f
    ADD EDI,0x1cc81a0                   ; 004d2f12
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d2f18 | DAT_01cc8130
    PUSH EDI                            ; 004d2f1f | DAT_01cc8218
    MOV AL,byte ptr [ESI]               ; 004d2f20
        ;   Label: LAB_004d2f20
    MOV byte ptr [EDI],AL               ; 004d2f22 | DAT_01cc8218 | DAT_01cc821a
    CMP AL,0x0                          ; 004d2f24
    JZ 0x004d2f38                       ; 004d2f26
        ;   XREF to: 004d2f38 (CONDITIONAL_JUMP)  ; LAB_004d2f38
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2f28
    ADD ESI,0x2                         ; 004d2f2b
    MOV byte ptr [EDI + 0x1],AL         ; 004d2f2e | DAT_01cc8219 | DAT_01cc821b
    ADD EDI,0x2                         ; 004d2f31
    CMP AL,0x0                          ; 004d2f34
    JNZ 0x004d2f20                      ; 004d2f36
        ;   XREF to: 004d2f20 (CONDITIONAL_JUMP)  ; LAB_004d2f20
    POP EDI                             ; 004d2f38
        ;   Label: LAB_004d2f38
    MOV ECX,dword ptr [0x01cc8120]      ; 004d2f39 | DAT_01cc8120
    INC ECX                             ; 004d2f3f
    PUSH 0x588e58                       ; 004d2f40 | = "Strafe left"
    MOV dword ptr [0x01cc8120],ECX      ; 004d2f45 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2f4b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d2f50 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2f56 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2f5c
    MOV ESI,EAX                         ; 004d2f5f
    ADD EBX,0x38                        ; 004d2f61
    CMP EDI,0x1e                        ; 004d2f64
    JL 0x004d2f8b                       ; 004d2f67
        ;   XREF to: 004d2f8b (CONDITIONAL_JUMP)  ; LAB_004d2f8b
    MOV EBP,0x588d42                    ; 004d2f69 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2f6e
    PUSH 0x588d53                       ; 004d2f73 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2f78 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2f7e | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d2f83
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d2f88
    MOV EAX,[0x01cc8120]                ; 004d2f8b | DAT_01cc8120
        ;   Label: LAB_004d2f8b
    IMUL EDI,EAX,0x28                   ; 004d2f90
    ADD EDI,0x1cc81a0                   ; 004d2f93
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d2f99 | DAT_01cc8134
    PUSH EDI                            ; 004d2fa0 | DAT_01cc8240
    MOV AL,byte ptr [ESI]               ; 004d2fa1
        ;   Label: LAB_004d2fa1
    MOV byte ptr [EDI],AL               ; 004d2fa3 | DAT_01cc8240 | DAT_01cc8242
    CMP AL,0x0                          ; 004d2fa5
    JZ 0x004d2fb9                       ; 004d2fa7
        ;   XREF to: 004d2fb9 (CONDITIONAL_JUMP)  ; LAB_004d2fb9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2fa9
    ADD ESI,0x2                         ; 004d2fac
    MOV byte ptr [EDI + 0x1],AL         ; 004d2faf | DAT_01cc8241 | DAT_01cc8243
    ADD EDI,0x2                         ; 004d2fb2
    CMP AL,0x0                          ; 004d2fb5
    JNZ 0x004d2fa1                      ; 004d2fb7
        ;   XREF to: 004d2fa1 (CONDITIONAL_JUMP)  ; LAB_004d2fa1
    POP EDI                             ; 004d2fb9
        ;   Label: LAB_004d2fb9
    MOV ECX,dword ptr [0x01cc8120]      ; 004d2fba | DAT_01cc8120
    INC ECX                             ; 004d2fc0
    PUSH 0x588e64                       ; 004d2fc1 | = "Strafe right"
    MOV dword ptr [0x01cc8120],ECX      ; 004d2fc6 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2fcc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d2fd1 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d2fd7 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d2fdd
    MOV ESI,EAX                         ; 004d2fe0
    LEA EBX,[EDX + 0x3c]                ; 004d2fe2
    CMP EDI,0x1e                        ; 004d2fe5
    JL 0x004d300c                       ; 004d2fe8
        ;   XREF to: 004d300c (CONDITIONAL_JUMP)  ; LAB_004d300c
    MOV EBP,0x588d42                    ; 004d2fea | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d2fef
    PUSH 0x588d53                       ; 004d2ff4 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d2ff9 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d2fff | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3004
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3009
    MOV EAX,[0x01cc8120]                ; 004d300c | DAT_01cc8120
        ;   Label: LAB_004d300c
    IMUL EDI,EAX,0x28                   ; 004d3011
    ADD EDI,0x1cc81a0                   ; 004d3014
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d301a | DAT_01cc8138
    PUSH EDI                            ; 004d3021 | DAT_01cc8268
    MOV AL,byte ptr [ESI]               ; 004d3022
        ;   Label: LAB_004d3022
    MOV byte ptr [EDI],AL               ; 004d3024 | DAT_01cc8268 | DAT_01cc826a
    CMP AL,0x0                          ; 004d3026
    JZ 0x004d303a                       ; 004d3028
        ;   XREF to: 004d303a (CONDITIONAL_JUMP)  ; LAB_004d303a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d302a
    ADD ESI,0x2                         ; 004d302d
    MOV byte ptr [EDI + 0x1],AL         ; 004d3030 | DAT_01cc8269 | DAT_01cc826b
    ADD EDI,0x2                         ; 004d3033
    CMP AL,0x0                          ; 004d3036
    JNZ 0x004d3022                      ; 004d3038
        ;   XREF to: 004d3022 (CONDITIONAL_JUMP)  ; LAB_004d3022
    POP EDI                             ; 004d303a
        ;   Label: LAB_004d303a
    MOV ECX,dword ptr [0x01cc8120]      ; 004d303b | DAT_01cc8120
    INC ECX                             ; 004d3041
    PUSH 0x588e71                       ; 004d3042 | = "Turn left"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3047 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d304d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d3052 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3058 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d305e
    MOV ESI,EAX                         ; 004d3061
    ADD EBX,0x44                        ; 004d3063
    CMP EDI,0x1e                        ; 004d3066
    JL 0x004d308d                       ; 004d3069
        ;   XREF to: 004d308d (CONDITIONAL_JUMP)  ; LAB_004d308d
    MOV EBP,0x588d42                    ; 004d306b | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3070
    PUSH 0x588d53                       ; 004d3075 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d307a | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3080 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3085
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d308a
    MOV EAX,[0x01cc8120]                ; 004d308d | DAT_01cc8120
        ;   Label: LAB_004d308d
    IMUL EDI,EAX,0x28                   ; 004d3092
    ADD EDI,0x1cc81a0                   ; 004d3095
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d309b | DAT_01cc813c
    PUSH EDI                            ; 004d30a2 | DAT_01cc8290
    MOV AL,byte ptr [ESI]               ; 004d30a3
        ;   Label: LAB_004d30a3
    MOV byte ptr [EDI],AL               ; 004d30a5 | DAT_01cc8290 | DAT_01cc8292
    CMP AL,0x0                          ; 004d30a7
    JZ 0x004d30bb                       ; 004d30a9
        ;   XREF to: 004d30bb (CONDITIONAL_JUMP)  ; LAB_004d30bb
    MOV AL,byte ptr [ESI + 0x1]         ; 004d30ab
    ADD ESI,0x2                         ; 004d30ae
    MOV byte ptr [EDI + 0x1],AL         ; 004d30b1 | DAT_01cc8291 | DAT_01cc8293
    ADD EDI,0x2                         ; 004d30b4
    CMP AL,0x0                          ; 004d30b7
    JNZ 0x004d30a3                      ; 004d30b9
        ;   XREF to: 004d30a3 (CONDITIONAL_JUMP)  ; LAB_004d30a3
    POP EDI                             ; 004d30bb
        ;   Label: LAB_004d30bb
    MOV ECX,dword ptr [0x01cc8120]      ; 004d30bc | DAT_01cc8120
    INC ECX                             ; 004d30c2
    PUSH 0x588e7b                       ; 004d30c3 | = "Turn right"
    MOV dword ptr [0x01cc8120],ECX      ; 004d30c8 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d30ce
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d30d3 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d30d9 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d30df
    MOV ESI,EAX                         ; 004d30e2
    ADD EBX,0x40                        ; 004d30e4
    CMP EDI,0x1e                        ; 004d30e7
    JL 0x004d310e                       ; 004d30ea
        ;   XREF to: 004d310e (CONDITIONAL_JUMP)  ; LAB_004d310e
    MOV EBP,0x588d42                    ; 004d30ec | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d30f1
    PUSH 0x588d53                       ; 004d30f6 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d30fb | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3101 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3106
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d310b
    MOV EAX,[0x01cc8120]                ; 004d310e | DAT_01cc8120
        ;   Label: LAB_004d310e
    IMUL EDI,EAX,0x28                   ; 004d3113
    ADD EDI,0x1cc81a0                   ; 004d3116
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d311c | DAT_01cc8140
    PUSH EDI                            ; 004d3123 | DAT_01cc82b8
    MOV AL,byte ptr [ESI]               ; 004d3124
        ;   Label: LAB_004d3124
    MOV byte ptr [EDI],AL               ; 004d3126 | DAT_01cc82b8 | DAT_01cc82ba
    CMP AL,0x0                          ; 004d3128
    JZ 0x004d313c                       ; 004d312a
        ;   XREF to: 004d313c (CONDITIONAL_JUMP)  ; LAB_004d313c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d312c
    ADD ESI,0x2                         ; 004d312f
    MOV byte ptr [EDI + 0x1],AL         ; 004d3132 | DAT_01cc82b9 | DAT_01cc82bb
    ADD EDI,0x2                         ; 004d3135
    CMP AL,0x0                          ; 004d3138
    JNZ 0x004d3124                      ; 004d313a
        ;   XREF to: 004d3124 (CONDITIONAL_JUMP)  ; LAB_004d3124
    POP EDI                             ; 004d313c
        ;   Label: LAB_004d313c
    MOV ECX,dword ptr [0x01cc8120]      ; 004d313d | DAT_01cc8120
    INC ECX                             ; 004d3143
    PUSH 0x588e86                       ; 004d3144 | = "Fire / Action"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3149 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d314f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d3154 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d315a | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3160
    MOV ESI,EAX                         ; 004d3163
    ADD EBX,0x48                        ; 004d3165
    CMP EDI,0x1e                        ; 004d3168
    JL 0x004d318f                       ; 004d316b
        ;   XREF to: 004d318f (CONDITIONAL_JUMP)  ; LAB_004d318f
    MOV EBP,0x588d42                    ; 004d316d | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3172
    PUSH 0x588d53                       ; 004d3177 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d317c | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3182 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3187
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d318c
    MOV EAX,[0x01cc8120]                ; 004d318f | DAT_01cc8120
        ;   Label: LAB_004d318f
    IMUL EDI,EAX,0x28                   ; 004d3194
    ADD EDI,0x1cc81a0                   ; 004d3197
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d319d | DAT_01cc8144
    PUSH EDI                            ; 004d31a4 | DAT_01cc82e0
    MOV AL,byte ptr [ESI]               ; 004d31a5
        ;   Label: LAB_004d31a5
    MOV byte ptr [EDI],AL               ; 004d31a7 | DAT_01cc82e0 | DAT_01cc82e2
    CMP AL,0x0                          ; 004d31a9
    JZ 0x004d31bd                       ; 004d31ab
        ;   XREF to: 004d31bd (CONDITIONAL_JUMP)  ; LAB_004d31bd
    MOV AL,byte ptr [ESI + 0x1]         ; 004d31ad
    ADD ESI,0x2                         ; 004d31b0
    MOV byte ptr [EDI + 0x1],AL         ; 004d31b3 | DAT_01cc82e1 | DAT_01cc82e3
    ADD EDI,0x2                         ; 004d31b6
    CMP AL,0x0                          ; 004d31b9
    JNZ 0x004d31a5                      ; 004d31bb
        ;   XREF to: 004d31a5 (CONDITIONAL_JUMP)  ; LAB_004d31a5
    POP EDI                             ; 004d31bd
        ;   Label: LAB_004d31bd
    MOV ECX,dword ptr [0x01cc8120]      ; 004d31be | DAT_01cc8120
    INC ECX                             ; 004d31c4
    PUSH 0x588e94                       ; 004d31c5 | = "Use item"
    MOV dword ptr [0x01cc8120],ECX      ; 004d31ca | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d31d0
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d31d5 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d31db | DAT_01cc8120
    ADD ESP,0x4                         ; 004d31e1
    MOV ESI,EAX                         ; 004d31e4
    ADD EBX,0x4c                        ; 004d31e6
    CMP EDI,0x1e                        ; 004d31e9
    JL 0x004d3210                       ; 004d31ec
        ;   XREF to: 004d3210 (CONDITIONAL_JUMP)  ; LAB_004d3210
    MOV EBP,0x588d42                    ; 004d31ee | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d31f3
    PUSH 0x588d53                       ; 004d31f8 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d31fd | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3203 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3208
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d320d
    MOV EAX,[0x01cc8120]                ; 004d3210 | DAT_01cc8120
        ;   Label: LAB_004d3210
    IMUL EDI,EAX,0x28                   ; 004d3215
    ADD EDI,0x1cc81a0                   ; 004d3218
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d321e | DAT_01cc8148
    PUSH EDI                            ; 004d3225 | DAT_01cc8308
    MOV AL,byte ptr [ESI]               ; 004d3226
        ;   Label: LAB_004d3226
    MOV byte ptr [EDI],AL               ; 004d3228 | DAT_01cc8308 | DAT_01cc830a
    CMP AL,0x0                          ; 004d322a
    JZ 0x004d323e                       ; 004d322c
        ;   XREF to: 004d323e (CONDITIONAL_JUMP)  ; LAB_004d323e
    MOV AL,byte ptr [ESI + 0x1]         ; 004d322e
    ADD ESI,0x2                         ; 004d3231
    MOV byte ptr [EDI + 0x1],AL         ; 004d3234 | DAT_01cc8309 | DAT_01cc830b
    ADD EDI,0x2                         ; 004d3237
    CMP AL,0x0                          ; 004d323a
    JNZ 0x004d3226                      ; 004d323c
        ;   XREF to: 004d3226 (CONDITIONAL_JUMP)  ; LAB_004d3226
    POP EDI                             ; 004d323e
        ;   Label: LAB_004d323e
    MOV ECX,dword ptr [0x01cc8120]      ; 004d323f | DAT_01cc8120
    INC ECX                             ; 004d3245
    PUSH 0x588e9d                       ; 004d3246 | = "Light"
    MOV dword ptr [0x01cc8120],ECX      ; 004d324b | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3251
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d3256 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d325c | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3262
    MOV ESI,EAX                         ; 004d3265
    LEA EBX,[EDX + 0x50]                ; 004d3267
    CMP EDI,0x1e                        ; 004d326a
    JL 0x004d3291                       ; 004d326d
        ;   XREF to: 004d3291 (CONDITIONAL_JUMP)  ; LAB_004d3291
    MOV EBP,0x588d42                    ; 004d326f | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3274
    PUSH 0x588d53                       ; 004d3279 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d327e | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3284 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3289
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d328e
    MOV EAX,[0x01cc8120]                ; 004d3291 | DAT_01cc8120
        ;   Label: LAB_004d3291
    IMUL EDI,EAX,0x28                   ; 004d3296
    ADD EDI,0x1cc81a0                   ; 004d3299
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d329f | DAT_01cc814c
    PUSH EDI                            ; 004d32a6 | DAT_01cc8330
    MOV AL,byte ptr [ESI]               ; 004d32a7
        ;   Label: LAB_004d32a7
    MOV byte ptr [EDI],AL               ; 004d32a9 | DAT_01cc8330 | DAT_01cc8332
    CMP AL,0x0                          ; 004d32ab
    JZ 0x004d32bf                       ; 004d32ad
        ;   XREF to: 004d32bf (CONDITIONAL_JUMP)  ; LAB_004d32bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004d32af
    ADD ESI,0x2                         ; 004d32b2
    MOV byte ptr [EDI + 0x1],AL         ; 004d32b5 | DAT_01cc8331 | DAT_01cc8333
    ADD EDI,0x2                         ; 004d32b8
    CMP AL,0x0                          ; 004d32bb
    JNZ 0x004d32a7                      ; 004d32bd
        ;   XREF to: 004d32a7 (CONDITIONAL_JUMP)  ; LAB_004d32a7
    POP EDI                             ; 004d32bf
        ;   Label: LAB_004d32bf
    MOV ECX,dword ptr [0x01cc8120]      ; 004d32c0 | DAT_01cc8120
    INC ECX                             ; 004d32c6
    PUSH 0x588ea3                       ; 004d32c7 | = "Night Vision"
    MOV dword ptr [0x01cc8120],ECX      ; 004d32cc | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d32d2
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d32d7 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d32dd | DAT_01cc8120
    ADD ESP,0x4                         ; 004d32e3
    MOV ESI,EAX                         ; 004d32e6
    ADD EBX,0x54                        ; 004d32e8
    CMP EDI,0x1e                        ; 004d32eb
    JL 0x004d3312                       ; 004d32ee
        ;   XREF to: 004d3312 (CONDITIONAL_JUMP)  ; LAB_004d3312
    MOV EBP,0x588d42                    ; 004d32f0 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d32f5
    PUSH 0x588d53                       ; 004d32fa | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d32ff | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3305 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d330a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d330f
    MOV EAX,[0x01cc8120]                ; 004d3312 | DAT_01cc8120
        ;   Label: LAB_004d3312
    IMUL EDI,EAX,0x28                   ; 004d3317
    ADD EDI,0x1cc81a0                   ; 004d331a
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3320 | DAT_01cc8150
    PUSH EDI                            ; 004d3327 | DAT_01cc8358
    MOV AL,byte ptr [ESI]               ; 004d3328
        ;   Label: LAB_004d3328
    MOV byte ptr [EDI],AL               ; 004d332a | DAT_01cc8358 | DAT_01cc835a
    CMP AL,0x0                          ; 004d332c
    JZ 0x004d3340                       ; 004d332e
        ;   XREF to: 004d3340 (CONDITIONAL_JUMP)  ; LAB_004d3340
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3330
    ADD ESI,0x2                         ; 004d3333
    MOV byte ptr [EDI + 0x1],AL         ; 004d3336 | DAT_01cc8359 | DAT_01cc835b
    ADD EDI,0x2                         ; 004d3339
    CMP AL,0x0                          ; 004d333c
    JNZ 0x004d3328                      ; 004d333e
        ;   XREF to: 004d3328 (CONDITIONAL_JUMP)  ; LAB_004d3328
    POP EDI                             ; 004d3340
        ;   Label: LAB_004d3340
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3341 | DAT_01cc8120
    INC ECX                             ; 004d3347
    PUSH 0x588eb0                       ; 004d3348 | = "Draw"
    MOV dword ptr [0x01cc8120],ECX      ; 004d334d | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3353
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d3358 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d335e | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3364
    MOV ESI,EAX                         ; 004d3367
    ADD EBX,0x58                        ; 004d3369
    CMP EDI,0x1e                        ; 004d336c
    JL 0x004d3393                       ; 004d336f
        ;   XREF to: 004d3393 (CONDITIONAL_JUMP)  ; LAB_004d3393
    MOV EBP,0x588d42                    ; 004d3371 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3376
    PUSH 0x588d53                       ; 004d337b | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3380 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3386 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d338b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3390
    MOV EAX,[0x01cc8120]                ; 004d3393 | DAT_01cc8120
        ;   Label: LAB_004d3393
    IMUL EDI,EAX,0x28                   ; 004d3398
    ADD EDI,0x1cc81a0                   ; 004d339b
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d33a1 | DAT_01cc8154
    PUSH EDI                            ; 004d33a8 | DAT_01cc8380
    MOV AL,byte ptr [ESI]               ; 004d33a9
        ;   Label: LAB_004d33a9
    MOV byte ptr [EDI],AL               ; 004d33ab | DAT_01cc8380 | DAT_01cc8382
    CMP AL,0x0                          ; 004d33ad
    JZ 0x004d33c1                       ; 004d33af
        ;   XREF to: 004d33c1 (CONDITIONAL_JUMP)  ; LAB_004d33c1
    MOV AL,byte ptr [ESI + 0x1]         ; 004d33b1
    ADD ESI,0x2                         ; 004d33b4
    MOV byte ptr [EDI + 0x1],AL         ; 004d33b7 | DAT_01cc8381 | DAT_01cc8383
    ADD EDI,0x2                         ; 004d33ba
    CMP AL,0x0                          ; 004d33bd
    JNZ 0x004d33a9                      ; 004d33bf
        ;   XREF to: 004d33a9 (CONDITIONAL_JUMP)  ; LAB_004d33a9
    POP EDI                             ; 004d33c1
        ;   Label: LAB_004d33c1
    MOV ECX,dword ptr [0x01cc8120]      ; 004d33c2 | DAT_01cc8120
    INC ECX                             ; 004d33c8
    PUSH 0x588eb5                       ; 004d33c9 | = "Point up"
    MOV dword ptr [0x01cc8120],ECX      ; 004d33ce | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d33d4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d33d9 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d33df | DAT_01cc8120
    ADD ESP,0x4                         ; 004d33e5
    MOV ESI,EAX                         ; 004d33e8
    ADD EBX,0x60                        ; 004d33ea
    CMP EDI,0x1e                        ; 004d33ed
    JL 0x004d3414                       ; 004d33f0
        ;   XREF to: 004d3414 (CONDITIONAL_JUMP)  ; LAB_004d3414
    MOV EBP,0x588d42                    ; 004d33f2 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d33f7
    PUSH 0x588d53                       ; 004d33fc | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3401 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3407 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d340c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3411
    MOV EAX,[0x01cc8120]                ; 004d3414 | DAT_01cc8120
        ;   Label: LAB_004d3414
    IMUL EDI,EAX,0x28                   ; 004d3419
    ADD EDI,0x1cc81a0                   ; 004d341c
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3422 | DAT_01cc8158
    PUSH EDI                            ; 004d3429 | DAT_01cc83a8
    MOV AL,byte ptr [ESI]               ; 004d342a
        ;   Label: LAB_004d342a
    MOV byte ptr [EDI],AL               ; 004d342c | DAT_01cc83a8 | DAT_01cc83aa
    CMP AL,0x0                          ; 004d342e
    JZ 0x004d3442                       ; 004d3430
        ;   XREF to: 004d3442 (CONDITIONAL_JUMP)  ; LAB_004d3442
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3432
    ADD ESI,0x2                         ; 004d3435
    MOV byte ptr [EDI + 0x1],AL         ; 004d3438 | DAT_01cc83a9 | DAT_01cc83ab
    ADD EDI,0x2                         ; 004d343b
    CMP AL,0x0                          ; 004d343e
    JNZ 0x004d342a                      ; 004d3440
        ;   XREF to: 004d342a (CONDITIONAL_JUMP)  ; LAB_004d342a
    POP EDI                             ; 004d3442
        ;   Label: LAB_004d3442
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3443 | DAT_01cc8120
    INC ECX                             ; 004d3449
    PUSH 0x588ebe                       ; 004d344a | = "Point down"
    MOV dword ptr [0x01cc8120],ECX      ; 004d344f | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3455
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d345a | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3460 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3466
    MOV ESI,EAX                         ; 004d3469
    ADD EBX,0x64                        ; 004d346b
    CMP EDI,0x1e                        ; 004d346e
    JL 0x004d3495                       ; 004d3471
        ;   XREF to: 004d3495 (CONDITIONAL_JUMP)  ; LAB_004d3495
    MOV EBP,0x588d42                    ; 004d3473 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3478
    PUSH 0x588d53                       ; 004d347d | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3482 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3488 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d348d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3492
    MOV EAX,[0x01cc8120]                ; 004d3495 | DAT_01cc8120
        ;   Label: LAB_004d3495
    IMUL EDI,EAX,0x28                   ; 004d349a
    ADD EDI,0x1cc81a0                   ; 004d349d
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d34a3 | DAT_01cc815c
    PUSH EDI                            ; 004d34aa | DAT_01cc83d0
    MOV AL,byte ptr [ESI]               ; 004d34ab
        ;   Label: LAB_004d34ab
    MOV byte ptr [EDI],AL               ; 004d34ad | DAT_01cc83d0 | DAT_01cc83d2
    CMP AL,0x0                          ; 004d34af
    JZ 0x004d34c3                       ; 004d34b1
        ;   XREF to: 004d34c3 (CONDITIONAL_JUMP)  ; LAB_004d34c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004d34b3
    ADD ESI,0x2                         ; 004d34b6
    MOV byte ptr [EDI + 0x1],AL         ; 004d34b9 | DAT_01cc83d1 | DAT_01cc83d3
    ADD EDI,0x2                         ; 004d34bc
    CMP AL,0x0                          ; 004d34bf
    JNZ 0x004d34ab                      ; 004d34c1
        ;   XREF to: 004d34ab (CONDITIONAL_JUMP)  ; LAB_004d34ab
    POP EDI                             ; 004d34c3
        ;   Label: LAB_004d34c3
    MOV ECX,dword ptr [0x01cc8120]      ; 004d34c4 | DAT_01cc8120
    INC ECX                             ; 004d34ca
    PUSH 0x588ec9                       ; 004d34cb | = "Jump"
    MOV dword ptr [0x01cc8120],ECX      ; 004d34d0 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d34d6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d34db | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d34e1 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d34e7
    MOV ESI,EAX                         ; 004d34ea
    LEA EBX,[EDX + 0x5c]                ; 004d34ec
    CMP EDI,0x1e                        ; 004d34ef
    JL 0x004d3516                       ; 004d34f2
        ;   XREF to: 004d3516 (CONDITIONAL_JUMP)  ; LAB_004d3516
    MOV EBP,0x588d42                    ; 004d34f4 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d34f9
    PUSH 0x588d53                       ; 004d34fe | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3503 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3509 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d350e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3513
    MOV EAX,[0x01cc8120]                ; 004d3516 | DAT_01cc8120
        ;   Label: LAB_004d3516
    IMUL EDI,EAX,0x28                   ; 004d351b
    ADD EDI,0x1cc81a0                   ; 004d351e
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3524 | DAT_01cc8160
    PUSH EDI                            ; 004d352b | DAT_01cc83f8
    MOV AL,byte ptr [ESI]               ; 004d352c
        ;   Label: LAB_004d352c
    MOV byte ptr [EDI],AL               ; 004d352e | DAT_01cc83f8 | DAT_01cc83fa
    CMP AL,0x0                          ; 004d3530
    JZ 0x004d3544                       ; 004d3532
        ;   XREF to: 004d3544 (CONDITIONAL_JUMP)  ; LAB_004d3544
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3534
    ADD ESI,0x2                         ; 004d3537
    MOV byte ptr [EDI + 0x1],AL         ; 004d353a | DAT_01cc83f9 | DAT_01cc83fb
    ADD EDI,0x2                         ; 004d353d
    CMP AL,0x0                          ; 004d3540
    JNZ 0x004d352c                      ; 004d3542
        ;   XREF to: 004d352c (CONDITIONAL_JUMP)  ; LAB_004d352c
    POP EDI                             ; 004d3544
        ;   Label: LAB_004d3544
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3545 | DAT_01cc8120
    INC ECX                             ; 004d354b
    PUSH 0x588ece                       ; 004d354c | = "Select pistol weapons"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3551 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3557
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d355c | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3562 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3568
    MOV ESI,EAX                         ; 004d356b
    ADD EBX,0x68                        ; 004d356d
    CMP EDI,0x1e                        ; 004d3570
    JL 0x004d3597                       ; 004d3573
        ;   XREF to: 004d3597 (CONDITIONAL_JUMP)  ; LAB_004d3597
    MOV EBP,0x588d42                    ; 004d3575 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d357a
    PUSH 0x588d53                       ; 004d357f | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3584 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d358a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d358f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3594
    MOV EAX,[0x01cc8120]                ; 004d3597 | DAT_01cc8120
        ;   Label: LAB_004d3597
    IMUL EDI,EAX,0x28                   ; 004d359c
    ADD EDI,0x1cc81a0                   ; 004d359f
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d35a5 | DAT_01cc8164
    PUSH EDI                            ; 004d35ac | DAT_01cc8420
    MOV AL,byte ptr [ESI]               ; 004d35ad
        ;   Label: LAB_004d35ad
    MOV byte ptr [EDI],AL               ; 004d35af | DAT_01cc8420 | DAT_01cc8422
    CMP AL,0x0                          ; 004d35b1
    JZ 0x004d35c5                       ; 004d35b3
        ;   XREF to: 004d35c5 (CONDITIONAL_JUMP)  ; LAB_004d35c5
    MOV AL,byte ptr [ESI + 0x1]         ; 004d35b5
    ADD ESI,0x2                         ; 004d35b8
    MOV byte ptr [EDI + 0x1],AL         ; 004d35bb | DAT_01cc8421 | DAT_01cc8423
    ADD EDI,0x2                         ; 004d35be
    CMP AL,0x0                          ; 004d35c1
    JNZ 0x004d35ad                      ; 004d35c3
        ;   XREF to: 004d35ad (CONDITIONAL_JUMP)  ; LAB_004d35ad
    POP EDI                             ; 004d35c5
        ;   Label: LAB_004d35c5
    MOV ECX,dword ptr [0x01cc8120]      ; 004d35c6 | DAT_01cc8120
    INC ECX                             ; 004d35cc
    PUSH 0x588ee4                       ; 004d35cd | = "Select assault weapons"
    MOV dword ptr [0x01cc8120],ECX      ; 004d35d2 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d35d8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d35dd | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d35e3 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d35e9
    MOV ESI,EAX                         ; 004d35ec
    ADD EBX,0x6c                        ; 004d35ee
    CMP EDI,0x1e                        ; 004d35f1
    JL 0x004d3618                       ; 004d35f4
        ;   XREF to: 004d3618 (CONDITIONAL_JUMP)  ; LAB_004d3618
    MOV EBP,0x588d42                    ; 004d35f6 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d35fb
    PUSH 0x588d53                       ; 004d3600 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3605 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d360b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3610
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3615
    MOV EAX,[0x01cc8120]                ; 004d3618 | DAT_01cc8120
        ;   Label: LAB_004d3618
    IMUL EDI,EAX,0x28                   ; 004d361d
    ADD EDI,0x1cc81a0                   ; 004d3620
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3626 | DAT_01cc8168
    PUSH EDI                            ; 004d362d | DAT_01cc8448
    MOV AL,byte ptr [ESI]               ; 004d362e
        ;   Label: LAB_004d362e
    MOV byte ptr [EDI],AL               ; 004d3630 | DAT_01cc8448 | DAT_01cc844a
    CMP AL,0x0                          ; 004d3632
    JZ 0x004d3646                       ; 004d3634
        ;   XREF to: 004d3646 (CONDITIONAL_JUMP)  ; LAB_004d3646
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3636
    ADD ESI,0x2                         ; 004d3639
    MOV byte ptr [EDI + 0x1],AL         ; 004d363c | DAT_01cc8449 | DAT_01cc844b
    ADD EDI,0x2                         ; 004d363f
    CMP AL,0x0                          ; 004d3642
    JNZ 0x004d362e                      ; 004d3644
        ;   XREF to: 004d362e (CONDITIONAL_JUMP)  ; LAB_004d362e
    POP EDI                             ; 004d3646
        ;   Label: LAB_004d3646
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3647 | DAT_01cc8120
    INC ECX                             ; 004d364d
    PUSH 0x588efb                       ; 004d364e | = "Select flame weapons"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3653 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3659
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d365e | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3664 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d366a
    MOV ESI,EAX                         ; 004d366d
    ADD EBX,0x70                        ; 004d366f
    CMP EDI,0x1e                        ; 004d3672
    JL 0x004d3699                       ; 004d3675
        ;   XREF to: 004d3699 (CONDITIONAL_JUMP)  ; LAB_004d3699
    MOV EBP,0x588d42                    ; 004d3677 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d367c
    PUSH 0x588d53                       ; 004d3681 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3686 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d368c | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3691
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3696
    MOV EAX,[0x01cc8120]                ; 004d3699 | DAT_01cc8120
        ;   Label: LAB_004d3699
    IMUL EDI,EAX,0x28                   ; 004d369e
    ADD EDI,0x1cc81a0                   ; 004d36a1
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d36a7 | DAT_01cc816c
    PUSH EDI                            ; 004d36ae | DAT_01cc8470
    MOV AL,byte ptr [ESI]               ; 004d36af
        ;   Label: LAB_004d36af
    MOV byte ptr [EDI],AL               ; 004d36b1 | DAT_01cc8470 | DAT_01cc8472
    CMP AL,0x0                          ; 004d36b3
    JZ 0x004d36c7                       ; 004d36b5
        ;   XREF to: 004d36c7 (CONDITIONAL_JUMP)  ; LAB_004d36c7
    MOV AL,byte ptr [ESI + 0x1]         ; 004d36b7
    ADD ESI,0x2                         ; 004d36ba
    MOV byte ptr [EDI + 0x1],AL         ; 004d36bd | DAT_01cc8471 | DAT_01cc8473
    ADD EDI,0x2                         ; 004d36c0
    CMP AL,0x0                          ; 004d36c3
    JNZ 0x004d36af                      ; 004d36c5
        ;   XREF to: 004d36af (CONDITIONAL_JUMP)  ; LAB_004d36af
    POP EDI                             ; 004d36c7
        ;   Label: LAB_004d36c7
    MOV ECX,dword ptr [0x01cc8120]      ; 004d36c8 | DAT_01cc8120
    INC ECX                             ; 004d36ce
    PUSH 0x588f10                       ; 004d36cf | = "Select grenade weapons"
    MOV dword ptr [0x01cc8120],ECX      ; 004d36d4 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d36da
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d36df | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d36e5 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d36eb
    MOV ESI,EAX                         ; 004d36ee
    ADD EBX,0x74                        ; 004d36f0
    CMP EDI,0x1e                        ; 004d36f3
    JL 0x004d371a                       ; 004d36f6
        ;   XREF to: 004d371a (CONDITIONAL_JUMP)  ; LAB_004d371a
    MOV EBP,0x588d42                    ; 004d36f8 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d36fd
    PUSH 0x588d53                       ; 004d3702 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3707 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d370d | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3712
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3717
    MOV EAX,[0x01cc8120]                ; 004d371a | DAT_01cc8120
        ;   Label: LAB_004d371a
    IMUL EDI,EAX,0x28                   ; 004d371f
    ADD EDI,0x1cc81a0                   ; 004d3722
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3728 | DAT_01cc8170
    PUSH EDI                            ; 004d372f | DAT_01cc8498
    MOV AL,byte ptr [ESI]               ; 004d3730
        ;   Label: LAB_004d3730
    MOV byte ptr [EDI],AL               ; 004d3732 | DAT_01cc8498 | DAT_01cc849a
    CMP AL,0x0                          ; 004d3734
    JZ 0x004d3748                       ; 004d3736
        ;   XREF to: 004d3748 (CONDITIONAL_JUMP)  ; LAB_004d3748
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3738
    ADD ESI,0x2                         ; 004d373b
    MOV byte ptr [EDI + 0x1],AL         ; 004d373e | DAT_01cc8499 | DAT_01cc849b
    ADD EDI,0x2                         ; 004d3741
    CMP AL,0x0                          ; 004d3744
    JNZ 0x004d3730                      ; 004d3746
        ;   XREF to: 004d3730 (CONDITIONAL_JUMP)  ; LAB_004d3730
    POP EDI                             ; 004d3748
        ;   Label: LAB_004d3748
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3749 | DAT_01cc8120
    INC ECX                             ; 004d374f
    PUSH 0x588f27                       ; 004d3750 | = "Select melee weapons"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3755 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d375b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d3760 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3766 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d376c
    MOV ESI,EAX                         ; 004d376f
    ADD EBX,0x78                        ; 004d3771
    CMP EDI,0x1e                        ; 004d3774
    JL 0x004d379b                       ; 004d3777
        ;   XREF to: 004d379b (CONDITIONAL_JUMP)  ; LAB_004d379b
    MOV EBP,0x588d42                    ; 004d3779 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d377e
    PUSH 0x588d53                       ; 004d3783 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3788 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d378e | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3793
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3798
    MOV EAX,[0x01cc8120]                ; 004d379b | DAT_01cc8120
        ;   Label: LAB_004d379b
    IMUL EDI,EAX,0x28                   ; 004d37a0
    ADD EDI,0x1cc81a0                   ; 004d37a3
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d37a9 | DAT_01cc8174
    PUSH EDI                            ; 004d37b0 | DAT_01cc84c0
    MOV AL,byte ptr [ESI]               ; 004d37b1
        ;   Label: LAB_004d37b1
    MOV byte ptr [EDI],AL               ; 004d37b3 | DAT_01cc84c0 | DAT_01cc84c2
    CMP AL,0x0                          ; 004d37b5
    JZ 0x004d37c9                       ; 004d37b7
        ;   XREF to: 004d37c9 (CONDITIONAL_JUMP)  ; LAB_004d37c9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d37b9
    ADD ESI,0x2                         ; 004d37bc
    MOV byte ptr [EDI + 0x1],AL         ; 004d37bf | DAT_01cc84c1 | DAT_01cc84c3
    ADD EDI,0x2                         ; 004d37c2
    CMP AL,0x0                          ; 004d37c5
    JNZ 0x004d37b1                      ; 004d37c7
        ;   XREF to: 004d37b1 (CONDITIONAL_JUMP)  ; LAB_004d37b1
    POP EDI                             ; 004d37c9
        ;   Label: LAB_004d37c9
    MOV ECX,dword ptr [0x01cc8120]      ; 004d37ca | DAT_01cc8120
    INC ECX                             ; 004d37d0
    PUSH 0x588f3c                       ; 004d37d1 | = "Next weapon"
    MOV dword ptr [0x01cc8120],ECX      ; 004d37d6 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d37dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d37e1 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d37e7 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d37ed
    MOV ESI,EAX                         ; 004d37f0
    LEA EBX,[EDX + 0x7c]                ; 004d37f2
    CMP EDI,0x1e                        ; 004d37f5
    JL 0x004d381c                       ; 004d37f8
        ;   XREF to: 004d381c (CONDITIONAL_JUMP)  ; LAB_004d381c
    MOV EBP,0x588d42                    ; 004d37fa | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d37ff
    PUSH 0x588d53                       ; 004d3804 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3809 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d380f | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3814
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3819
    MOV EAX,[0x01cc8120]                ; 004d381c | DAT_01cc8120
        ;   Label: LAB_004d381c
    IMUL EDI,EAX,0x28                   ; 004d3821
    ADD EDI,0x1cc81a0                   ; 004d3824
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d382a | DAT_01cc8178
    PUSH EDI                            ; 004d3831 | DAT_01cc84e8
    MOV AL,byte ptr [ESI]               ; 004d3832
        ;   Label: LAB_004d3832
    MOV byte ptr [EDI],AL               ; 004d3834 | DAT_01cc84e8 | DAT_01cc84ea
    CMP AL,0x0                          ; 004d3836
    JZ 0x004d384a                       ; 004d3838
        ;   XREF to: 004d384a (CONDITIONAL_JUMP)  ; LAB_004d384a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d383a
    ADD ESI,0x2                         ; 004d383d
    MOV byte ptr [EDI + 0x1],AL         ; 004d3840 | DAT_01cc84e9 | DAT_01cc84eb
    ADD EDI,0x2                         ; 004d3843
    CMP AL,0x0                          ; 004d3846
    JNZ 0x004d3832                      ; 004d3848
        ;   XREF to: 004d3832 (CONDITIONAL_JUMP)  ; LAB_004d3832
    POP EDI                             ; 004d384a
        ;   Label: LAB_004d384a
    MOV ECX,dword ptr [0x01cc8120]      ; 004d384b | DAT_01cc8120
    INC ECX                             ; 004d3851
    PUSH 0x588f48                       ; 004d3852 | = "Previous weapon"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3857 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d385d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d3862 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3868 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d386e
    MOV ESI,EAX                         ; 004d3871
    LEA EBX,[EDX + 0x80]                ; 004d3873
    CMP EDI,0x1e                        ; 004d3879
    JL 0x004d38a0                       ; 004d387c
        ;   XREF to: 004d38a0 (CONDITIONAL_JUMP)  ; LAB_004d38a0
    MOV EBP,0x588d42                    ; 004d387e | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3883
    PUSH 0x588d53                       ; 004d3888 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d388d | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3893 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3898
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d389d
    MOV EAX,[0x01cc8120]                ; 004d38a0 | DAT_01cc8120
        ;   Label: LAB_004d38a0
    IMUL EDI,EAX,0x28                   ; 004d38a5
    ADD EDI,0x1cc81a0                   ; 004d38a8
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d38ae | DAT_01cc817c
    PUSH EDI                            ; 004d38b5 | DAT_01cc8510
    MOV AL,byte ptr [ESI]               ; 004d38b6
        ;   Label: LAB_004d38b6
    MOV byte ptr [EDI],AL               ; 004d38b8 | DAT_01cc8510 | DAT_01cc8512
    CMP AL,0x0                          ; 004d38ba
    JZ 0x004d38ce                       ; 004d38bc
        ;   XREF to: 004d38ce (CONDITIONAL_JUMP)  ; LAB_004d38ce
    MOV AL,byte ptr [ESI + 0x1]         ; 004d38be
    ADD ESI,0x2                         ; 004d38c1
    MOV byte ptr [EDI + 0x1],AL         ; 004d38c4 | DAT_01cc8511 | DAT_01cc8513
    ADD EDI,0x2                         ; 004d38c7
    CMP AL,0x0                          ; 004d38ca
    JNZ 0x004d38b6                      ; 004d38cc
        ;   XREF to: 004d38b6 (CONDITIONAL_JUMP)  ; LAB_004d38b6
    POP EDI                             ; 004d38ce
        ;   Label: LAB_004d38ce
    MOV ECX,dword ptr [0x01cc8120]      ; 004d38cf | DAT_01cc8120
    INC ECX                             ; 004d38d5
    PUSH 0x588f58                       ; 004d38d6 | = "Next item"
    MOV dword ptr [0x01cc8120],ECX      ; 004d38db | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d38e1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d38e6 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d38ec | DAT_01cc8120
    ADD ESP,0x4                         ; 004d38f2
    MOV ESI,EAX                         ; 004d38f5
    ADD EBX,0x84                        ; 004d38f7
    CMP EDI,0x1e                        ; 004d38fd
    JL 0x004d3924                       ; 004d3900
        ;   XREF to: 004d3924 (CONDITIONAL_JUMP)  ; LAB_004d3924
    MOV EBP,0x588d42                    ; 004d3902 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3907
    PUSH 0x588d53                       ; 004d390c | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3911 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3917 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d391c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3921
    MOV EAX,[0x01cc8120]                ; 004d3924 | DAT_01cc8120
        ;   Label: LAB_004d3924
    IMUL EDI,EAX,0x28                   ; 004d3929
    ADD EDI,0x1cc81a0                   ; 004d392c
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3932 | DAT_01cc8180
    PUSH EDI                            ; 004d3939 | DAT_01cc8538
    MOV AL,byte ptr [ESI]               ; 004d393a
        ;   Label: LAB_004d393a
    MOV byte ptr [EDI],AL               ; 004d393c | DAT_01cc8538 | DAT_01cc853a
    CMP AL,0x0                          ; 004d393e
    JZ 0x004d3952                       ; 004d3940
        ;   XREF to: 004d3952 (CONDITIONAL_JUMP)  ; LAB_004d3952
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3942
    ADD ESI,0x2                         ; 004d3945
    MOV byte ptr [EDI + 0x1],AL         ; 004d3948 | DAT_01cc8539 | DAT_01cc853b
    ADD EDI,0x2                         ; 004d394b
    CMP AL,0x0                          ; 004d394e
    JNZ 0x004d393a                      ; 004d3950
        ;   XREF to: 004d393a (CONDITIONAL_JUMP)  ; LAB_004d393a
    POP EDI                             ; 004d3952
        ;   Label: LAB_004d3952
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3953 | DAT_01cc8120
    INC ECX                             ; 004d3959
    PUSH 0x588f62                       ; 004d395a | = "Previous item"
    MOV dword ptr [0x01cc8120],ECX      ; 004d395f | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3965
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d396a | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3970 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3976
    MOV ESI,EAX                         ; 004d3979
    ADD EBX,0x88                        ; 004d397b
    CMP EDI,0x1e                        ; 004d3981
    JL 0x004d39a8                       ; 004d3984
        ;   XREF to: 004d39a8 (CONDITIONAL_JUMP)  ; LAB_004d39a8
    MOV EBP,0x588d42                    ; 004d3986 | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d398b
    PUSH 0x588d53                       ; 004d3990 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3995 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d399b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d39a0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d39a5
    MOV EAX,[0x01cc8120]                ; 004d39a8 | DAT_01cc8120
        ;   Label: LAB_004d39a8
    IMUL EDI,EAX,0x28                   ; 004d39ad
    ADD EDI,0x1cc81a0                   ; 004d39b0
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d39b6 | DAT_01cc8184
    PUSH EDI                            ; 004d39bd | DAT_01cc8560
    MOV AL,byte ptr [ESI]               ; 004d39be
        ;   Label: LAB_004d39be
    MOV byte ptr [EDI],AL               ; 004d39c0 | DAT_01cc8560 | DAT_01cc8562
    CMP AL,0x0                          ; 004d39c2
    JZ 0x004d39d6                       ; 004d39c4
        ;   XREF to: 004d39d6 (CONDITIONAL_JUMP)  ; LAB_004d39d6
    MOV AL,byte ptr [ESI + 0x1]         ; 004d39c6
    ADD ESI,0x2                         ; 004d39c9
    MOV byte ptr [EDI + 0x1],AL         ; 004d39cc | DAT_01cc8561 | DAT_01cc8563
    ADD EDI,0x2                         ; 004d39cf
    CMP AL,0x0                          ; 004d39d2
    JNZ 0x004d39be                      ; 004d39d4
        ;   XREF to: 004d39be (CONDITIONAL_JUMP)  ; LAB_004d39be
    POP EDI                             ; 004d39d6
        ;   Label: LAB_004d39d6
    MOV ECX,dword ptr [0x01cc8120]      ; 004d39d7 | DAT_01cc8120
    INC ECX                             ; 004d39dd
    PUSH 0x588f70                       ; 004d39de | = "Item description"
    MOV dword ptr [0x01cc8120],ECX      ; 004d39e3 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d39e9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EDX,dword ptr [0x005b9354]      ; 004d39ee | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d39f4 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d39fa
    MOV ESI,EAX                         ; 004d39fd
    LEA EBX,[EDX + 0x8c]                ; 004d39ff
    CMP EDI,0x1e                        ; 004d3a05
    JL 0x004d3a2c                       ; 004d3a08
        ;   XREF to: 004d3a2c (CONDITIONAL_JUMP)  ; LAB_004d3a2c
    MOV EBP,0x588d42                    ; 004d3a0a | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3a0f
    PUSH 0x588d53                       ; 004d3a14 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3a19 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3a1f | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3a24
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3a29
    MOV EAX,[0x01cc8120]                ; 004d3a2c | DAT_01cc8120
        ;   Label: LAB_004d3a2c
    IMUL EDI,EAX,0x28                   ; 004d3a31
    ADD EDI,0x1cc81a0                   ; 004d3a34
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3a3a | DAT_01cc8188
    PUSH EDI                            ; 004d3a41 | DAT_01cc8588
    MOV AL,byte ptr [ESI]               ; 004d3a42
        ;   Label: LAB_004d3a42
    MOV byte ptr [EDI],AL               ; 004d3a44 | DAT_01cc8588 | DAT_01cc858a
    CMP AL,0x0                          ; 004d3a46
    JZ 0x004d3a5a                       ; 004d3a48
        ;   XREF to: 004d3a5a (CONDITIONAL_JUMP)  ; LAB_004d3a5a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3a4a
    ADD ESI,0x2                         ; 004d3a4d
    MOV byte ptr [EDI + 0x1],AL         ; 004d3a50 | DAT_01cc8589 | DAT_01cc858b
    ADD EDI,0x2                         ; 004d3a53
    CMP AL,0x0                          ; 004d3a56
    JNZ 0x004d3a42                      ; 004d3a58
        ;   XREF to: 004d3a42 (CONDITIONAL_JUMP)  ; LAB_004d3a42
    POP EDI                             ; 004d3a5a
        ;   Label: LAB_004d3a5a
    MOV ECX,dword ptr [0x01cc8120]      ; 004d3a5b | DAT_01cc8120
    INC ECX                             ; 004d3a61
    PUSH 0x588f81                       ; 004d3a62 | = "Next ammo"
    MOV dword ptr [0x01cc8120],ECX      ; 004d3a67 | DAT_01cc8120
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3a6d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    MOV EBX,dword ptr [0x005b9354]      ; 004d3a72 | DAT_005b9354
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3a78 | DAT_01cc8120
    ADD ESP,0x4                         ; 004d3a7e
    MOV ESI,EAX                         ; 004d3a81
    ADD EBX,0x90                        ; 004d3a83
    CMP EDI,0x1e                        ; 004d3a89
    JL 0x004d3ab0                       ; 004d3a8c
        ;   XREF to: 004d3ab0 (CONDITIONAL_JUMP)  ; LAB_004d3ab0
    MOV EBP,0x588d42                    ; 004d3a8e | = "..\\core\\menu.cpp"
    MOV EAX,0x827                       ; 004d3a93
    PUSH 0x588d53                       ; 004d3a98 | = "Too many custom keys!"
    MOV dword ptr [0x01cc4800],EBP      ; 004d3a9d | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004d3aa3 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004d3aa8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004d3aad
    MOV EAX,[0x01cc8120]                ; 004d3ab0 | DAT_01cc8120
        ;   Label: LAB_004d3ab0
    IMUL EDI,EAX,0x28                   ; 004d3ab5
    ADD EDI,0x1cc81a0                   ; 004d3ab8
    MOV dword ptr [EAX*0x4 + 0x1cc8124],EBX ; 004d3abe | DAT_01cc818c
    PUSH EDI                            ; 004d3ac5 | DAT_01cc85b0
    MOV AL,byte ptr [ESI]               ; 004d3ac6
        ;   Label: LAB_004d3ac6
    MOV byte ptr [EDI],AL               ; 004d3ac8 | DAT_01cc85b0 | DAT_01cc85b2
    CMP AL,0x0                          ; 004d3aca
    JZ 0x004d3ade                       ; 004d3acc
        ;   XREF to: 004d3ade (CONDITIONAL_JUMP)  ; LAB_004d3ade
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3ace
    ADD ESI,0x2                         ; 004d3ad1
    MOV byte ptr [EDI + 0x1],AL         ; 004d3ad4 | DAT_01cc85b1 | DAT_01cc85b3
    ADD EDI,0x2                         ; 004d3ad7
    CMP AL,0x0                          ; 004d3ada
    JNZ 0x004d3ac6                      ; 004d3adc
        ;   XREF to: 004d3ac6 (CONDITIONAL_JUMP)  ; LAB_004d3ac6
    POP EDI                             ; 004d3ade
        ;   Label: LAB_004d3ade
    INC dword ptr [0x01cc8120]          ; 004d3adf | DAT_01cc8120
    CALL wincore_windll.cpp_clearScreen_FUN_0052ee70 ; 004d3ae5
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_clearScreen_FUN_0052ee70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d3aea
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    LEA EAX,[ESP + 0x608]               ; 004d3aef
    PUSH EAX                            ; 004d3af6
    CALL FUN_00474c90                   ; 004d3af7
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00474c90()
    ADD ESP,0x4                         ; 004d3afc
    PUSH 0x588f8b                       ; 004d3aff | = "Restore defaults"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3b04
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3b09
    PUSH EAX                            ; 004d3b0c
    LEA EAX,[ESP + 0x60c]               ; 004d3b0d
    PUSH EAX                            ; 004d3b14
    XOR ESI,ESI                         ; 004d3b15
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004d3b17
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    MOV EBX,dword ptr [0x01cc8120]      ; 004d3b1c | DAT_01cc8120
    ADD ESP,0x8                         ; 004d3b22
    TEST EBX,EBX                        ; 004d3b25
    JLE 0x004d3b80                      ; 004d3b27
        ;   XREF to: 004d3b80 (CONDITIONAL_JUMP)  ; LAB_004d3b80
    MOV EBX,0x1cc81a0                   ; 004d3b29
    XOR EDI,EDI                         ; 004d3b2e
    MOV EAX,dword ptr [EDI + 0x1cc8124] ; 004d3b30 | DAT_01cc8124 | DAT_01cc8128
        ;   Label: LAB_004d3b30
    MOV EBP,dword ptr [EAX]             ; 004d3b36 | DAT_01c77614 | DAT_01c77618
    PUSH EBP                            ; 004d3b38
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004d3b39
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004d2900()
    ADD ESP,0x4                         ; 004d3b3e
    PUSH EAX                            ; 004d3b41
    PUSH EBX                            ; 004d3b42
    PUSH 0x588f9c                       ; 004d3b43 | = "%s\t%s"
    LEA EAX,[ESP + 0x784]               ; 004d3b48
    PUSH EAX                            ; 004d3b4f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d3b50
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004d3b55
    LEA EAX,[ESP + 0x778]               ; 004d3b58
    PUSH EAX                            ; 004d3b5f
    LEA EAX,[ESP + 0x60c]               ; 004d3b60
    ADD EDI,0x4                         ; 004d3b67
    PUSH EAX                            ; 004d3b6a
    INC ESI                             ; 004d3b6b
    ADD EBX,0x28                        ; 004d3b6c
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004d3b6f
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    MOV EAX,[0x01cc8120]                ; 004d3b74 | DAT_01cc8120
    ADD ESP,0x8                         ; 004d3b79
    CMP ESI,EAX                         ; 004d3b7c
    JL 0x004d3b30                       ; 004d3b7e
        ;   XREF to: 004d3b30 (CONDITIONAL_JUMP)  ; LAB_004d3b30
    MOV ECX,dword ptr [ESP + 0x840]     ; 004d3b80
        ;   Label: LAB_004d3b80
    PUSH ECX                            ; 004d3b87
    MOV EDX,0x1                         ; 004d3b88
    PUSH 0x588fa2                       ; 004d3b8d | = "Edit key settings"
    MOV dword ptr [ESP + 0x620],EDX     ; 004d3b92
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3b99
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3b9e
    PUSH EAX                            ; 004d3ba1
    LEA EAX,[ESP + 0x610]               ; 004d3ba2
    PUSH EAX                            ; 004d3ba9
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004d3baa
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004d3baf
    TEST EAX,EAX                        ; 004d3bb2
    JL 0x004d3f7f                       ; 004d3bb4
        ;   XREF to: 004d3f7f (CONDITIONAL_JUMP)  ; LAB_004d3f7f
    JNZ 0x004d3f57                      ; 004d3bba
        ;   XREF to: 004d3f57 (CONDITIONAL_JUMP)  ; LAB_004d3f57
    MOV EDI,dword ptr [0x005b9354]      ; 004d3bc0 | DAT_005b9354
    PUSH EDI                            ; 004d3bc6
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610 ; 004d3bc7
        ;   XREF to: 0049e610 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610()
    ADD ESP,0x4                         ; 004d3bcc
    PUSH 0x0                            ; 004d3bcf
    LEA EAX,[ESP + 0x60c]               ; 004d3bd1
    PUSH EAX                            ; 004d3bd8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004d3bd9
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 004d3bde
    JMP 0x004d2d2e                      ; 004d3be1
        ;   XREF to: 004d2d2e (UNCONDITIONAL_JUMP)  ; LAB_004d2d2e
    CALL core_menu.cpp_calibrateGamepad_FUN_004cf8d0 ; 004d3be6
        ;   XREF to: 004cf8d0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_calibrateGamepad_FUN_004cf8d0()
        ;   Label: LAB_004d3be6
    TEST EAX,EAX                        ; 004d3beb
    JNZ 0x004d2d23                      ; 004d3bed
        ;   XREF to: 004d2d23 (CONDITIONAL_JUMP)  ; LAB_004d2d23
    ADD ESP,0x83c                       ; 004d3bf3
        ;   Label: LAB_004d3bf3
    POP EBP                             ; 004d3bf9
    POP EBX                             ; 004d3bfa
    RET                                 ; 004d3bfb
    PUSH 0x588e4a                       ; 004d3bfc | = "Run"
        ;   Label: LAB_004d3bfc
    JMP 0x004d2e50                      ; 004d3c01
        ;   XREF to: 004d2e50 (UNCONDITIONAL_JUMP)  ; LAB_004d2e50
    IMUL ESI,EBP,0x28                   ; 004d3c06
        ;   Label: caseD_255
    LEA EDI,[ESP + 0x8]                 ; 004d3c09
    ADD ESI,0x1cc81a0                   ; 004d3c0d
    PUSH EDI                            ; 004d3c13
    MOV AL,byte ptr [ESI]               ; 004d3c14
        ;   Label: LAB_004d3c14
    MOV byte ptr [EDI],AL               ; 004d3c16
    CMP AL,0x0                          ; 004d3c18
    JZ 0x004d3c2c                       ; 004d3c1a
        ;   XREF to: 004d3c2c (CONDITIONAL_JUMP)  ; LAB_004d3c2c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3c1c
    ADD ESI,0x2                         ; 004d3c1f
    MOV byte ptr [EDI + 0x1],AL         ; 004d3c22
    ADD EDI,0x2                         ; 004d3c25
    CMP AL,0x0                          ; 004d3c28
    JNZ 0x004d3c14                      ; 004d3c2a
        ;   XREF to: 004d3c14 (CONDITIONAL_JUMP)  ; LAB_004d3c14
    POP EDI                             ; 004d3c2c
        ;   Label: LAB_004d3c2c
    PUSH 0x588fb4                       ; 004d3c2d | = " is assigned to the mouse.  Can't ass..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3c32
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3c37
    LEA EDI,[ESP + 0x8]                 ; 004d3c3a
    MOV ESI,EAX                         ; 004d3c3e
    PUSH EDI                            ; 004d3c40
    SUB ECX,ECX                         ; 004d3c41
    DEC ECX                             ; 004d3c43
    MOV AL,0x0                          ; 004d3c44
    SCASB.REPNE ES:EDI                  ; 004d3c46
    DEC EDI                             ; 004d3c48
    MOV AL,byte ptr [ESI]               ; 004d3c49
        ;   Label: LAB_004d3c49
    MOV byte ptr [EDI],AL               ; 004d3c4b
    CMP AL,0x0                          ; 004d3c4d
    JZ 0x004d3c61                       ; 004d3c4f
        ;   XREF to: 004d3c61 (CONDITIONAL_JUMP)  ; LAB_004d3c61
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3c51
    ADD ESI,0x2                         ; 004d3c54
    MOV byte ptr [EDI + 0x1],AL         ; 004d3c57
    ADD EDI,0x2                         ; 004d3c5a
    CMP AL,0x0                          ; 004d3c5d
    JNZ 0x004d3c49                      ; 004d3c5f
        ;   XREF to: 004d3c49 (CONDITIONAL_JUMP)  ; LAB_004d3c49
    POP EDI                             ; 004d3c61
        ;   Label: LAB_004d3c61
    LEA EAX,[ESP + 0x8]                 ; 004d3c62
    PUSH EAX                            ; 004d3c66
    MOV EBX,dword ptr [0x005b6d50]      ; 004d3c67 | DAT_005b6d50
    PUSH EBX                            ; 004d3c6d
    CALL FUN_0046fcd0                   ; 004d3c6e
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004d3c73
        ;   Label: LAB_004d3c73
    PUSH 0x0                            ; 004d3c76
        ;   Label: LAB_004d3c76
    LEA EAX,[ESP + 0x60c]               ; 004d3c78
    PUSH EAX                            ; 004d3c7f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004d3c80
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 004d3c85
    JMP 0x004d2d2e                      ; 004d3c88
        ;   XREF to: 004d2d2e (UNCONDITIONAL_JUMP)  ; LAB_004d2d2e
    IMUL ESI,EBP,0x28                   ; 004d3c8d
        ;   Label: caseD_251
    LEA EDI,[ESP + 0x208]               ; 004d3c90
    ADD ESI,0x1cc81a0                   ; 004d3c97
    PUSH EDI                            ; 004d3c9d
    MOV AL,byte ptr [ESI]               ; 004d3c9e
        ;   Label: LAB_004d3c9e
    MOV byte ptr [EDI],AL               ; 004d3ca0
    CMP AL,0x0                          ; 004d3ca2
    JZ 0x004d3cb6                       ; 004d3ca4
        ;   XREF to: 004d3cb6 (CONDITIONAL_JUMP)  ; LAB_004d3cb6
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3ca6
    ADD ESI,0x2                         ; 004d3ca9
    MOV byte ptr [EDI + 0x1],AL         ; 004d3cac
    ADD EDI,0x2                         ; 004d3caf
    CMP AL,0x0                          ; 004d3cb2
    JNZ 0x004d3c9e                      ; 004d3cb4
        ;   XREF to: 004d3c9e (CONDITIONAL_JUMP)  ; LAB_004d3c9e
    POP EDI                             ; 004d3cb6
        ;   Label: LAB_004d3cb6
    PUSH 0x588fe4                       ; 004d3cb7 | = " is assigned to the gamepad.  Can't a..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3cbc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3cc1
    LEA EDI,[ESP + 0x208]               ; 004d3cc4
    MOV ESI,EAX                         ; 004d3ccb
    PUSH EDI                            ; 004d3ccd
    SUB ECX,ECX                         ; 004d3cce
    DEC ECX                             ; 004d3cd0
    MOV AL,0x0                          ; 004d3cd1
    SCASB.REPNE ES:EDI                  ; 004d3cd3
    DEC EDI                             ; 004d3cd5
    MOV AL,byte ptr [ESI]               ; 004d3cd6
        ;   Label: LAB_004d3cd6
    MOV byte ptr [EDI],AL               ; 004d3cd8
    CMP AL,0x0                          ; 004d3cda
    JZ 0x004d3cee                       ; 004d3cdc
        ;   XREF to: 004d3cee (CONDITIONAL_JUMP)  ; LAB_004d3cee
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3cde
    ADD ESI,0x2                         ; 004d3ce1
    MOV byte ptr [EDI + 0x1],AL         ; 004d3ce4
    ADD EDI,0x2                         ; 004d3ce7
    CMP AL,0x0                          ; 004d3cea
    JNZ 0x004d3cd6                      ; 004d3cec
        ;   XREF to: 004d3cd6 (CONDITIONAL_JUMP)  ; LAB_004d3cd6
    POP EDI                             ; 004d3cee
        ;   Label: LAB_004d3cee
    LEA EAX,[ESP + 0x208]               ; 004d3cef
    PUSH EAX                            ; 004d3cf6
    MOV ESI,dword ptr [0x005b6d50]      ; 004d3cf7 | DAT_005b6d50
    PUSH ESI                            ; 004d3cfd
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004d3cfe
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    JMP 0x004d3c73                      ; 004d3d03
        ;   XREF to: 004d3c73 (UNCONDITIONAL_JUMP)  ; LAB_004d3c73
    MOV EAX,[0x005b9354]                ; 004d3d08 | DAT_005b9354
        ;   Label: default
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d3d0d | DAT_01c776a8
    JZ 0x004d3d6e                       ; 004d3d14
        ;   XREF to: 004d3d6e (CONDITIONAL_JUMP)  ; LAB_004d3d6e
    MOV ESI,0xffffffff                  ; 004d3d16
        ;   Label: LAB_004d3d16
    XOR EBX,EBX                         ; 004d3d1b
    PUSH EBX                            ; 004d3d1d
        ;   Label: LAB_004d3d1d
    MOV EAX,[0x005bac64]                ; 004d3d1e | INT_005bac64
    PUSH EAX                            ; 004d3d23 | DAT_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004d3d24 | DAT_01cc30e4
    CALL dword ptr [EDI]                ; 004d3d26
    ADD ESP,0x8                         ; 004d3d28
    TEST EAX,EAX                        ; 004d3d2b
    JZ 0x004d3d79                       ; 004d3d2d
        ;   XREF to: 004d3d79 (CONDITIONAL_JUMP)  ; LAB_004d3d79
    TEST ESI,ESI                        ; 004d3d2f
    JL 0x004d3ec7                       ; 004d3d31
        ;   XREF to: 004d3ec7 (CONDITIONAL_JUMP)  ; LAB_004d3ec7
    PUSH 0x589016                       ; 004d3d37 | = "OK - you can release the key now..."
        ;   Label: LAB_004d3d37
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3d3c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3d41
    PUSH EAX                            ; 004d3d44
    MOV EBX,dword ptr [0x005b6d50]      ; 004d3d45 | DAT_005b6d50
    PUSH EBX                            ; 004d3d4b
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004d3d4c
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0x8                         ; 004d3d51
    MOV EAX,[0x005bac64]                ; 004d3d54 | INT_005bac64
    PUSH 0x1                            ; 004d3d59
    MOV EDX,dword ptr [EAX]             ; 004d3d5b | DAT_01cc30e4
    PUSH EAX                            ; 004d3d5d | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004d3d5e
    ADD ESP,0x8                         ; 004d3d60
    TEST EAX,EAX                        ; 004d3d63
    JNZ 0x004d3d87                      ; 004d3d65
        ;   XREF to: 004d3d87 (CONDITIONAL_JUMP)  ; LAB_004d3d87
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d3d67
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    JMP 0x004d3d08                      ; 004d3d6c
        ;   XREF to: 004d3d08 (UNCONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004d3d6e
        ;   Label: LAB_004d3d6e
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004d3d6f
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_0049e8b0()
    ADD ESP,0x4                         ; 004d3d74
    JMP 0x004d3d16                      ; 004d3d77
        ;   XREF to: 004d3d16 (UNCONDITIONAL_JUMP)  ; LAB_004d3d16
    INC EBX                             ; 004d3d79
        ;   Label: LAB_004d3d79
    CMP EBX,0x258                       ; 004d3d7a
    JL 0x004d3d1d                       ; 004d3d80
        ;   XREF to: 004d3d1d (CONDITIONAL_JUMP)  ; LAB_004d3d1d
    CMP ESI,-0x1                        ; 004d3d82
    JNZ 0x004d3d37                      ; 004d3d85
        ;   XREF to: 004d3d37 (CONDITIONAL_JUMP)  ; LAB_004d3d37
    PUSH 0x1                            ; 004d3d87
        ;   Label: LAB_004d3d87
    MOV EAX,[0x005bac64]                ; 004d3d89 | INT_005bac64
    PUSH EAX                            ; 004d3d8e | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d3d8f | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004d3d91
    ADD ESP,0x8                         ; 004d3d93
    TEST EAX,EAX                        ; 004d3d96
    JNZ 0x004d3ece                      ; 004d3d98
        ;   XREF to: 004d3ece (CONDITIONAL_JUMP)  ; LAB_004d3ece
    PUSH 0x58903a                       ; 004d3d9e | = "Press new key or button for "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3da3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3da8
    LEA EDI,[ESP + 0x408]               ; 004d3dab
    MOV ESI,EAX                         ; 004d3db2
    PUSH EDI                            ; 004d3db4
    MOV AL,byte ptr [ESI]               ; 004d3db5
        ;   Label: LAB_004d3db5
    MOV byte ptr [EDI],AL               ; 004d3db7
    CMP AL,0x0                          ; 004d3db9
    JZ 0x004d3dcd                       ; 004d3dbb
        ;   XREF to: 004d3dcd (CONDITIONAL_JUMP)  ; LAB_004d3dcd
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3dbd
    ADD ESI,0x2                         ; 004d3dc0
    MOV byte ptr [EDI + 0x1],AL         ; 004d3dc3
    ADD EDI,0x2                         ; 004d3dc6
    CMP AL,0x0                          ; 004d3dc9
    JNZ 0x004d3db5                      ; 004d3dcb
        ;   XREF to: 004d3db5 (CONDITIONAL_JUMP)  ; LAB_004d3db5
    POP EDI                             ; 004d3dcd
        ;   Label: LAB_004d3dcd
    IMUL ESI,EBP,0x28                   ; 004d3dce
    LEA EDI,[ESP + 0x408]               ; 004d3dd1
    ADD ESI,0x1cc81a0                   ; 004d3dd8
    PUSH EDI                            ; 004d3dde
    SUB ECX,ECX                         ; 004d3ddf
    DEC ECX                             ; 004d3de1
    MOV AL,0x0                          ; 004d3de2
    SCASB.REPNE ES:EDI                  ; 004d3de4
    DEC EDI                             ; 004d3de6
    MOV AL,byte ptr [ESI]               ; 004d3de7
        ;   Label: LAB_004d3de7
    MOV byte ptr [EDI],AL               ; 004d3de9
    CMP AL,0x0                          ; 004d3deb
    JZ 0x004d3dff                       ; 004d3ded
        ;   XREF to: 004d3dff (CONDITIONAL_JUMP)  ; LAB_004d3dff
    MOV AL,byte ptr [ESI + 0x1]         ; 004d3def
    ADD ESI,0x2                         ; 004d3df2
    MOV byte ptr [EDI + 0x1],AL         ; 004d3df5
    ADD EDI,0x2                         ; 004d3df8
    CMP AL,0x0                          ; 004d3dfb
    JNZ 0x004d3de7                      ; 004d3dfd
        ;   XREF to: 004d3de7 (CONDITIONAL_JUMP)  ; LAB_004d3de7
    POP EDI                             ; 004d3dff
        ;   Label: LAB_004d3dff
    LEA EAX,[ESP + 0x408]               ; 004d3e00
    PUSH EAX                            ; 004d3e07
    MOV ESI,dword ptr [0x005b6d50]      ; 004d3e08 | DAT_005b6d50
    PUSH ESI                            ; 004d3e0e
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004d3e0f
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0x8                         ; 004d3e14
    PUSH 0x1                            ; 004d3e17
    MOV EDI,dword ptr [0x005bac64]      ; 004d3e19 | INT_005bac64
    PUSH EDI                            ; 004d3e1f | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 004d3e20
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    ADD ESP,0x8                         ; 004d3e25
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d3e28
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004d3e28
    MOV EAX,[0x005b9354]                ; 004d3e2d | DAT_005b9354
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d3e32 | DAT_01c776a8
    JZ 0x004d3ed8                       ; 004d3e39
        ;   XREF to: 004d3ed8 (CONDITIONAL_JUMP)  ; LAB_004d3ed8
    MOV ESI,0xffffffff                  ; 004d3e3f
        ;   Label: LAB_004d3e3f
    XOR EBX,EBX                         ; 004d3e44
    PUSH EBX                            ; 004d3e46
        ;   Label: LAB_004d3e46
    MOV EAX,[0x005bac64]                ; 004d3e47 | INT_005bac64
    PUSH EAX                            ; 004d3e4c | DAT_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004d3e4d | DAT_01cc30e4
    CALL dword ptr [EDI]                ; 004d3e4f
    ADD ESP,0x8                         ; 004d3e51
    TEST EAX,EAX                        ; 004d3e54
    JZ 0x004d3e5e                       ; 004d3e56
        ;   XREF to: 004d3e5e (CONDITIONAL_JUMP)  ; LAB_004d3e5e
    TEST ESI,ESI                        ; 004d3e58
    JGE 0x004d3e28                      ; 004d3e5a
        ;   XREF to: 004d3e28 (CONDITIONAL_JUMP)  ; LAB_004d3e28
    MOV ESI,EBX                         ; 004d3e5c
    INC EBX                             ; 004d3e5e
        ;   Label: LAB_004d3e5e
    CMP EBX,0x258                       ; 004d3e5f
    JL 0x004d3e46                       ; 004d3e65
        ;   XREF to: 004d3e46 (CONDITIONAL_JUMP)  ; LAB_004d3e46
    TEST ESI,ESI                        ; 004d3e67
    JL 0x004d3e28                       ; 004d3e69
        ;   XREF to: 004d3e28 (CONDITIONAL_JUMP)  ; LAB_004d3e28
    MOV EAX,dword ptr [EBP*0x4 + 0x1cc8124] ; 004d3e6b | DAT_01cc8124
    PUSH 0x589057                       ; 004d3e72 | = "OK - you can release the key now..."
    MOV dword ptr [EAX],ESI             ; 004d3e77
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3e79
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3e7e
    PUSH EAX                            ; 004d3e81
    MOV ECX,dword ptr [0x005b6d50]      ; 004d3e82 | DAT_005b6d50
    PUSH ECX                            ; 004d3e88
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004d3e89
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0x8                         ; 004d3e8e
    MOV EAX,[0x005b9354]                ; 004d3e91 | DAT_005b9354
        ;   Label: LAB_004d3e91
    CMP dword ptr [EAX + 0xbc],0x2      ; 004d3e96 | DAT_01c776a8
    JZ 0x004d3ee6                       ; 004d3e9d
        ;   XREF to: 004d3ee6 (CONDITIONAL_JUMP)  ; LAB_004d3ee6
    MOV ESI,0xffffffff                  ; 004d3e9f
        ;   Label: LAB_004d3e9f
    XOR EBX,EBX                         ; 004d3ea4
    PUSH EBX                            ; 004d3ea6
        ;   Label: LAB_004d3ea6
    MOV EAX,[0x005bac64]                ; 004d3ea7 | INT_005bac64
    PUSH EAX                            ; 004d3eac | DAT_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004d3ead | DAT_01cc30e4
    CALL dword ptr [EDI]                ; 004d3eaf
    ADD ESP,0x8                         ; 004d3eb1
    TEST EAX,EAX                        ; 004d3eb4
    JZ 0x004d3ef1                       ; 004d3eb6
        ;   XREF to: 004d3ef1 (CONDITIONAL_JUMP)  ; LAB_004d3ef1
    TEST ESI,ESI                        ; 004d3eb8
    JL 0x004d3f39                       ; 004d3eba
        ;   XREF to: 004d3f39 (CONDITIONAL_JUMP)  ; LAB_004d3f39
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d3ec0
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004d3ec0
    JMP 0x004d3e91                      ; 004d3ec5
        ;   XREF to: 004d3e91 (UNCONDITIONAL_JUMP)  ; LAB_004d3e91
    MOV ESI,EBX                         ; 004d3ec7
        ;   Label: LAB_004d3ec7
    JMP 0x004d3d79                      ; 004d3ec9
        ;   XREF to: 004d3d79 (UNCONDITIONAL_JUMP)  ; LAB_004d3d79
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 004d3ece
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_clearInputAndWait_FUN_00403f50()
        ;   Label: LAB_004d3ece
    JMP 0x004d3c76                      ; 004d3ed3
        ;   XREF to: 004d3c76 (UNCONDITIONAL_JUMP)  ; LAB_004d3c76
    PUSH EAX                            ; 004d3ed8
        ;   Label: LAB_004d3ed8
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004d3ed9
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_0049e8b0()
    ADD ESP,0x4                         ; 004d3ede
    JMP 0x004d3e3f                      ; 004d3ee1
        ;   XREF to: 004d3e3f (UNCONDITIONAL_JUMP)  ; LAB_004d3e3f
    PUSH EAX                            ; 004d3ee6
        ;   Label: LAB_004d3ee6
    CALL core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 ; 004d3ee7
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_resetKeyState_FUN_0049e8b0()
    ADD ESP,0x4                         ; 004d3eec
    JMP 0x004d3e9f                      ; 004d3eef
        ;   XREF to: 004d3e9f (UNCONDITIONAL_JUMP)  ; LAB_004d3e9f
    INC EBX                             ; 004d3ef1
        ;   Label: LAB_004d3ef1
    CMP EBX,0x258                       ; 004d3ef2
    JL 0x004d3ea6                       ; 004d3ef8
        ;   XREF to: 004d3ea6 (CONDITIONAL_JUMP)  ; LAB_004d3ea6
    CMP ESI,-0x1                        ; 004d3efa
    JNZ 0x004d3ec0                      ; 004d3efd
        ;   XREF to: 004d3ec0 (CONDITIONAL_JUMP)  ; LAB_004d3ec0
    MOV ESI,dword ptr [0x01cc8120]      ; 004d3eff | DAT_01cc8120
    XOR EAX,EAX                         ; 004d3f05
    TEST ESI,ESI                        ; 004d3f07
    JLE 0x004d3f26                      ; 004d3f09
        ;   XREF to: 004d3f26 (CONDITIONAL_JUMP)  ; LAB_004d3f26
    LEA ECX,[EBP*0x4 + 0x0]             ; 004d3f0b
    XOR EBX,EBX                         ; 004d3f12
    CMP EAX,EBP                         ; 004d3f14
        ;   Label: LAB_004d3f14
    JNZ 0x004d3f3d                      ; 004d3f16
        ;   XREF to: 004d3f3d (CONDITIONAL_JUMP)  ; LAB_004d3f3d
    MOV EDI,dword ptr [0x01cc8120]      ; 004d3f18 | DAT_01cc8120
        ;   Label: LAB_004d3f18
    INC EAX                             ; 004d3f1e
    ADD EBX,0x4                         ; 004d3f1f
    CMP EAX,EDI                         ; 004d3f22
    JL 0x004d3f14                       ; 004d3f24
        ;   XREF to: 004d3f14 (CONDITIONAL_JUMP)  ; LAB_004d3f14
    PUSH 0x0                            ; 004d3f26
        ;   Label: LAB_004d3f26
    MOV EBP,dword ptr [0x005bac64]      ; 004d3f28 | INT_005bac64
    PUSH EBP                            ; 004d3f2e | DAT_01cc30e4
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210 ; 004d3f2f
        ;   XREF to: 004c4210 (UNCONDITIONAL_CALL)  ; undefined engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210()
    JMP 0x004d3c73                      ; 004d3f34
        ;   XREF to: 004d3c73 (UNCONDITIONAL_JUMP)  ; LAB_004d3c73
    MOV ESI,EBX                         ; 004d3f39
        ;   Label: LAB_004d3f39
    JMP 0x004d3ef1                      ; 004d3f3b
        ;   XREF to: 004d3ef1 (UNCONDITIONAL_JUMP)  ; LAB_004d3ef1
    MOV ESI,dword ptr [EBX + 0x1cc8124] ; 004d3f3d | DAT_01cc8128
        ;   Label: LAB_004d3f3d
    MOV EDX,dword ptr [ECX + 0x1cc8124] ; 004d3f43 | DAT_01cc8124
    MOV EDI,dword ptr [ESI]             ; 004d3f49 | DAT_01c77618
    CMP EDI,dword ptr [EDX]             ; 004d3f4b
    JNZ 0x004d3f18                      ; 004d3f4d
        ;   XREF to: 004d3f18 (CONDITIONAL_JUMP)  ; LAB_004d3f18
    MOV dword ptr [ESI],0x257           ; 004d3f4f | DAT_01c77618
    JMP 0x004d3f18                      ; 004d3f55
        ;   XREF to: 004d3f18 (UNCONDITIONAL_JUMP)  ; LAB_004d3f18
    MOV dword ptr [ESP + 0x840],EAX     ; 004d3f57
        ;   Label: LAB_004d3f57
    LEA EBP,[EAX + -0x1]                ; 004d3f5e
    MOV EAX,dword ptr [EBP*0x4 + 0x1cc8124] ; 004d3f61 | DAT_01cc8124
    MOV EAX,dword ptr [EAX]             ; 004d3f68
    SUB EAX,0x251                       ; 004d3f6a
    CMP EAX,0x5                         ; 004d3f6f
    JA 0x004d3d08                       ; 004d3f72
        ;   XREF to: 004d3d08 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d2ce0]  ; 004d3f78 | caseD_254 | caseD_256 | switchdataD_004d2ce0
        ;   Label: switchD
    PUSH 0x0                            ; 004d3f7f
        ;   Label: LAB_004d3f7f
    LEA EAX,[ESP + 0x60c]               ; 004d3f81
    PUSH EAX                            ; 004d3f88
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004d3f89
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_dtor_FUN_00474cf0()
    ADD ESP,0x8                         ; 004d3f8e
    PUSH 0x58907b                       ; 004d3f91 | = "Forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3f96
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3f9b
    PUSH EAX                            ; 004d3f9e
    MOV EAX,[0x005b9354]                ; 004d3f9f | DAT_005b9354
    ADD EAX,0x28                        ; 004d3fa4
    PUSH EAX                            ; 004d3fa7 | DAT_01c77614
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d3fa8
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d3fad
    PUSH 0x589083                       ; 004d3fb0 | = "Back"
    MOV EBX,EAX                         ; 004d3fb5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3fb7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d3fbc
    PUSH EAX                            ; 004d3fbf
    MOV EAX,[0x005b9354]                ; 004d3fc0 | DAT_005b9354
    ADD EAX,0x2c                        ; 004d3fc5
    PUSH EAX                            ; 004d3fc8 | DAT_01c77618
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d3fc9
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    OR EBX,EAX                          ; 004d3fce
    MOV EAX,[0x005b9354]                ; 004d3fd0 | DAT_005b9354
    MOV EBP,dword ptr [EAX + 0x98]      ; 004d3fd5 | DAT_01c77684
    ADD ESP,0x8                         ; 004d3fdb
    TEST EBP,EBP                        ; 004d3fde
    JZ 0x004d435c                       ; 004d3fe0
        ;   XREF to: 004d435c (CONDITIONAL_JUMP)  ; LAB_004d435c
    PUSH 0x589088                       ; 004d3fe6 | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d3feb
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
        ;   Label: LAB_004d3feb
    ADD ESP,0x4                         ; 004d3ff0
    PUSH EAX                            ; 004d3ff3
    MOV EAX,[0x005b9354]                ; 004d3ff4 | DAT_005b9354
    ADD EAX,0x30                        ; 004d3ff9
    PUSH EAX                            ; 004d3ffc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d3ffd
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4002
    OR EBX,EAX                          ; 004d4005
    PUSH 0x589091                       ; 004d4007 | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d400c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4011
    PUSH EAX                            ; 004d4014
    MOV EAX,[0x005b9354]                ; 004d4015 | DAT_005b9354
    ADD EAX,0x34                        ; 004d401a
    PUSH EAX                            ; 004d401d
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d401e
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4023
    PUSH 0x58909b                       ; 004d4026 | = "Strafe left"
    OR EBX,EAX                          ; 004d402b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d402d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4032
    PUSH EAX                            ; 004d4035
    MOV EAX,[0x005b9354]                ; 004d4036 | DAT_005b9354
    ADD EAX,0x38                        ; 004d403b
    PUSH EAX                            ; 004d403e
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d403f
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4044
    PUSH 0x5890a7                       ; 004d4047 | = "Strafe right"
    OR EBX,EAX                          ; 004d404c
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d404e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4053
    PUSH EAX                            ; 004d4056
    MOV EAX,[0x005b9354]                ; 004d4057 | DAT_005b9354
    ADD EAX,0x3c                        ; 004d405c
    PUSH EAX                            ; 004d405f
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4060
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4065
    PUSH 0x5890b4                       ; 004d4068 | = "Turn left"
    OR EBX,EAX                          ; 004d406d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d406f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4074
    PUSH EAX                            ; 004d4077
    MOV EAX,[0x005b9354]                ; 004d4078 | DAT_005b9354
    ADD EAX,0x44                        ; 004d407d
    PUSH EAX                            ; 004d4080
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4081
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4086
    PUSH 0x5890be                       ; 004d4089 | = "Turn right"
    OR EBX,EAX                          ; 004d408e
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4090
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4095
    PUSH EAX                            ; 004d4098
    MOV EAX,[0x005b9354]                ; 004d4099 | DAT_005b9354
    ADD EAX,0x40                        ; 004d409e
    PUSH EAX                            ; 004d40a1
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d40a2
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d40a7
    PUSH 0x5890c9                       ; 004d40aa | = "Fire / Action"
    OR EBX,EAX                          ; 004d40af
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d40b1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d40b6
    PUSH EAX                            ; 004d40b9
    MOV EAX,[0x005b9354]                ; 004d40ba | DAT_005b9354
    ADD EAX,0x48                        ; 004d40bf
    PUSH EAX                            ; 004d40c2
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d40c3
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d40c8
    OR EBX,EAX                          ; 004d40cb
    POP ESI                             ; 004d40cd
    POP EDI                             ; 004d40ce
    PUSH 0x5890d7                       ; 004d40cf | = "Use item"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d40d4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d40d9
    PUSH EAX                            ; 004d40dc
    MOV EAX,[0x005b9354]                ; 004d40dd | DAT_005b9354
    ADD EAX,0x4c                        ; 004d40e2
    PUSH EAX                            ; 004d40e5
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d40e6
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d40eb
    PUSH 0x5890e0                       ; 004d40ee | = "Light"
    OR EBX,EAX                          ; 004d40f3
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d40f5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d40fa
    PUSH EAX                            ; 004d40fd
    MOV EAX,[0x005b9354]                ; 004d40fe | DAT_005b9354
    ADD EAX,0x50                        ; 004d4103
    PUSH EAX                            ; 004d4106
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4107
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d410c
    PUSH 0x5890e6                       ; 004d410f | = "Night Vision"
    OR EBX,EAX                          ; 004d4114
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4116
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d411b
    PUSH EAX                            ; 004d411e
    MOV EAX,[0x005b9354]                ; 004d411f | DAT_005b9354
    ADD EAX,0x54                        ; 004d4124
    PUSH EAX                            ; 004d4127
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4128
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d412d
    PUSH 0x5890f3                       ; 004d4130 | = "Draw"
    OR EBX,EAX                          ; 004d4135
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4137
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d413c
    PUSH EAX                            ; 004d413f
    MOV EAX,[0x005b9354]                ; 004d4140 | DAT_005b9354
    ADD EAX,0x58                        ; 004d4145
    PUSH EAX                            ; 004d4148
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4149
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d414e
    PUSH 0x5890f8                       ; 004d4151 | = "Point up"
    OR EBX,EAX                          ; 004d4156
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4158
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d415d
    PUSH EAX                            ; 004d4160
    MOV EAX,[0x005b9354]                ; 004d4161 | DAT_005b9354
    ADD EAX,0x60                        ; 004d4166
    PUSH EAX                            ; 004d4169
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d416a
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d416f
    PUSH 0x589101                       ; 004d4172 | = "Point down"
    OR EBX,EAX                          ; 004d4177
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4179
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d417e
    PUSH EAX                            ; 004d4181
    MOV EAX,[0x005b9354]                ; 004d4182 | DAT_005b9354
    ADD EAX,0x64                        ; 004d4187
    PUSH EAX                            ; 004d418a
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d418b
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4190
    OR EBX,EAX                          ; 004d4193
    PUSH 0x58910c                       ; 004d4195 | = "Jump"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d419a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d419f
    PUSH EAX                            ; 004d41a2
    MOV EAX,[0x005b9354]                ; 004d41a3 | DAT_005b9354
    ADD EAX,0x5c                        ; 004d41a8
    PUSH EAX                            ; 004d41ab
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d41ac
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d41b1
    PUSH 0x589111                       ; 004d41b4 | = "Select pistol weapons"
    OR EBX,EAX                          ; 004d41b9
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d41bb
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d41c0
    PUSH EAX                            ; 004d41c3
    MOV EAX,[0x005b9354]                ; 004d41c4 | DAT_005b9354
    ADD EAX,0x68                        ; 004d41c9
    PUSH EAX                            ; 004d41cc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d41cd
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d41d2
    PUSH 0x589127                       ; 004d41d5 | = "Select assault weapons"
    OR EBX,EAX                          ; 004d41da
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d41dc
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d41e1
    PUSH EAX                            ; 004d41e4
    MOV EAX,[0x005b9354]                ; 004d41e5 | DAT_005b9354
    ADD EAX,0x6c                        ; 004d41ea
    PUSH EAX                            ; 004d41ed
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d41ee
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d41f3
    PUSH 0x58913e                       ; 004d41f6 | = "Select flame weapons"
    OR EBX,EAX                          ; 004d41fb
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d41fd
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4202
    PUSH EAX                            ; 004d4205
    MOV EAX,[0x005b9354]                ; 004d4206 | DAT_005b9354
    ADD EAX,0x70                        ; 004d420b
    PUSH EAX                            ; 004d420e
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d420f
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4214
    PUSH 0x589153                       ; 004d4217 | = "Select grenade weapons"
    OR EBX,EAX                          ; 004d421c
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d421e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4223
    PUSH EAX                            ; 004d4226
    MOV EAX,[0x005b9354]                ; 004d4227 | DAT_005b9354
    ADD EAX,0x74                        ; 004d422c
    PUSH EAX                            ; 004d422f
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4230
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4235
    PUSH 0x58916a                       ; 004d4238 | = "Select melee weapons"
    OR EBX,EAX                          ; 004d423d
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d423f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4244
    PUSH EAX                            ; 004d4247
    MOV EAX,[0x005b9354]                ; 004d4248 | DAT_005b9354
    ADD EAX,0x78                        ; 004d424d
    PUSH EAX                            ; 004d4250
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4251
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4256
    OR EBX,EAX                          ; 004d4259
    PUSH 0x58917f                       ; 004d425b | = "Next weapon"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4260
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4265
    PUSH EAX                            ; 004d4268
    MOV EAX,[0x005b9354]                ; 004d4269 | DAT_005b9354
    ADD EAX,0x7c                        ; 004d426e
    PUSH EAX                            ; 004d4271
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4272
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4277
    PUSH 0x58918b                       ; 004d427a | = "Previous weapon"
    OR EBX,EAX                          ; 004d427f
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d4281
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4286
    PUSH EAX                            ; 004d4289
    MOV EAX,[0x005b9354]                ; 004d428a | DAT_005b9354
    ADD EAX,0x80                        ; 004d428f
    PUSH EAX                            ; 004d4294
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4295
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d429a
    PUSH 0x58919b                       ; 004d429d | = "Next item"
    OR EBX,EAX                          ; 004d42a2
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d42a4
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d42a9
    PUSH EAX                            ; 004d42ac
    MOV EAX,[0x005b9354]                ; 004d42ad | DAT_005b9354
    ADD EAX,0x84                        ; 004d42b2
    PUSH EAX                            ; 004d42b7
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d42b8
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d42bd
    PUSH 0x5891a5                       ; 004d42c0 | = "Previous item"
    OR EBX,EAX                          ; 004d42c5
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d42c7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d42cc
    PUSH EAX                            ; 004d42cf
    MOV EAX,[0x005b9354]                ; 004d42d0 | DAT_005b9354
    ADD EAX,0x88                        ; 004d42d5
    PUSH EAX                            ; 004d42da
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d42db
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d42e0
    PUSH 0x5891b3                       ; 004d42e3 | = "Item description"
    OR EBX,EAX                          ; 004d42e8
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d42ea
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d42ef
    PUSH EAX                            ; 004d42f2
    MOV EAX,[0x005b9354]                ; 004d42f3 | DAT_005b9354
    ADD EAX,0x8c                        ; 004d42f8
    PUSH EAX                            ; 004d42fd
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d42fe
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4303
    PUSH 0x5891c4                       ; 004d4306 | = "Next ammo"
    OR EBX,EAX                          ; 004d430b
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d430d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004d4312
    PUSH EAX                            ; 004d4315
    MOV EAX,[0x005b9354]                ; 004d4316 | DAT_005b9354
    ADD EAX,0x90                        ; 004d431b
    PUSH EAX                            ; 004d4320
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40 ; 004d4321
        ;   XREF to: 004d2b40 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_isKeyCodeValidForMode_FUN_004d2b40()
    ADD ESP,0x8                         ; 004d4326
    OR EBX,EAX                          ; 004d4329
    JZ 0x004d3bf3                       ; 004d432b
        ;   XREF to: 004d3bf3 (CONDITIONAL_JUMP)  ; LAB_004d3bf3
    MOV EAX,[0x005b9354]                ; 004d4331 | DAT_005b9354
    PUSH EAX                            ; 004d4336
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610 ; 004d4337
        ;   XREF to: 0049e610 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610()
    ADD ESP,0x4                         ; 004d433c
    PUSH 0x5891ce                       ; 004d433f | = "One or more keys not valid.  Restorin..."
    MOV EDX,dword ptr [0x005b6d50]      ; 004d4344 | DAT_005b6d50
    PUSH EDX                            ; 004d434a
    CALL FUN_0046fcd0                   ; 004d434b
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x8                         ; 004d4350
    ADD ESP,0x83c                       ; 004d4353
    POP EBP                             ; 004d4359
    POP EBX                             ; 004d435a
    RET                                 ; 004d435b
    PUSH 0x58908d                       ; 004d435c | = "Run"
        ;   Label: LAB_004d435c
    JMP 0x004d3feb                      ; 004d4361
        ;   XREF to: 004d3feb (UNCONDITIONAL_JUMP)  ; LAB_004d3feb

