; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
;
; XREF[4]:
;   core_game.cpp_FUN_004b51e0 at 004b57b7
;   core_game.cpp_drawKeyBindingEntry_FUN_004b50f0 at 004b510a
;   core_inv.cpp_FUN_004da880 at 004daac9
;   core_menu.cpp_FUN_004eae80 at 004ebd4c
;
; Referenced Globals:
;   TerminatedCString s_none_005c797c
;   TerminatedCString s_Mouse_X_Axis_005c7983
;   TerminatedCString s_Mouse_Y_Axis_005c7990
;   TerminatedCString s_Mouse_B1_005c799d
;   TerminatedCString s_Mouse_B2_005c79a6
;   TerminatedCString s_Mouse_B3_005c79af
;   TerminatedCString s_Button_1_005c79b8
;   TerminatedCString s_Button_2_005c79c1
;   TerminatedCString s_Button_3_005c79ca
;   TerminatedCString s_Button_4_005c79d3
;   TerminatedCString s_Button_5_005c79dc
;   TerminatedCString s_Button_6_005c79e5
;   TerminatedCString s_Button_7_005c79ee
;   TerminatedCString s_Button_8_005c79f7
;   TerminatedCString s_Button_9_005c7a00
;   ... and 9 more
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   wincore_winrun.cpp_FUN_00581360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaa60
        ;   Label: core_menu.cpp_getKeyDisplayName_FUN_004eaa60
    PUSH ESI                            ; 004eaa61
    PUSH EDI                            ; 004eaa62
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eaa63
    MOV EDX,dword ptr [0x005fe9dc]      ; 004eaa67 | g_CGamePtr
    MOV EDX,dword ptr [EDX + 0xd4]      ; 004eaa6d | g_CGameInstance.game_control
    XOR ESI,ESI                         ; 004eaa73
    MOV dword ptr [0x01d737d8],EDX      ; 004eaa75 | DAT_01d737d8
    CMP EBX,0x257                       ; 004eaa7b
    JZ 0x004eac8a                       ; 004eaa81
        ;   XREF to: 004eac8a (CONDITIONAL_JUMP)  ; LAB_004eac8a
    CMP EBX,0x255                       ; 004eaa87
        ;   Label: LAB_004eaa87
    JNZ 0x004eaa9e                      ; 004eaa8d
        ;   XREF to: 004eaa9e (CONDITIONAL_JUMP)  ; LAB_004eaa9e
    PUSH 0x5c7983                       ; 004eaa8f | = "Mouse X-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaa94
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eaa99
    ADD ESP,0x4                         ; 004eaa9b
    CMP EBX,0x256                       ; 004eaa9e
        ;   Label: LAB_004eaa9e
    JNZ 0x004eaab5                      ; 004eaaa4
        ;   XREF to: 004eaab5 (CONDITIONAL_JUMP)  ; LAB_004eaab5
    PUSH 0x5c7990                       ; 004eaaa6 | = "Mouse Y-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaaab
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eaab0
    ADD ESP,0x4                         ; 004eaab2
    CMP EBX,0x200                       ; 004eaab5
        ;   Label: LAB_004eaab5
    JNZ 0x004eaacc                      ; 004eaabb
        ;   XREF to: 004eaacc (CONDITIONAL_JUMP)  ; LAB_004eaacc
    PUSH 0x5c799d                       ; 004eaabd | = "Mouse B1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaac2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eaac7
    ADD ESP,0x4                         ; 004eaac9
    CMP EBX,0x201                       ; 004eaacc
        ;   Label: LAB_004eaacc
    JNZ 0x004eaae3                      ; 004eaad2
        ;   XREF to: 004eaae3 (CONDITIONAL_JUMP)  ; LAB_004eaae3
    PUSH 0x5c79a6                       ; 004eaad4 | = "Mouse B2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaad9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eaade
    ADD ESP,0x4                         ; 004eaae0
    CMP EBX,0x20c                       ; 004eaae3
        ;   Label: LAB_004eaae3
    JNZ 0x004eaafa                      ; 004eaae9
        ;   XREF to: 004eaafa (CONDITIONAL_JUMP)  ; LAB_004eaafa
    PUSH 0x5c79af                       ; 004eaaeb | = "Mouse B3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaaf0
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eaaf5
    ADD ESP,0x4                         ; 004eaaf7
    CMP EBX,0x202                       ; 004eaafa
        ;   Label: LAB_004eaafa
    JNZ 0x004eab11                      ; 004eab00
        ;   XREF to: 004eab11 (CONDITIONAL_JUMP)  ; LAB_004eab11
    PUSH 0x5c79b8                       ; 004eab02 | = "Button 1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab07
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab0c
    ADD ESP,0x4                         ; 004eab0e
    CMP EBX,0x203                       ; 004eab11
        ;   Label: LAB_004eab11
    JNZ 0x004eab28                      ; 004eab17
        ;   XREF to: 004eab28 (CONDITIONAL_JUMP)  ; LAB_004eab28
    PUSH 0x5c79c1                       ; 004eab19 | = "Button 2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab1e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab23
    ADD ESP,0x4                         ; 004eab25
    CMP EBX,0x204                       ; 004eab28
        ;   Label: LAB_004eab28
    JNZ 0x004eab3f                      ; 004eab2e
        ;   XREF to: 004eab3f (CONDITIONAL_JUMP)  ; LAB_004eab3f
    PUSH 0x5c79ca                       ; 004eab30 | = "Button 3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab35
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab3a
    ADD ESP,0x4                         ; 004eab3c
    CMP EBX,0x205                       ; 004eab3f
        ;   Label: LAB_004eab3f
    JNZ 0x004eab56                      ; 004eab45
        ;   XREF to: 004eab56 (CONDITIONAL_JUMP)  ; LAB_004eab56
    PUSH 0x5c79d3                       ; 004eab47 | = "Button 4"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab4c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab51
    ADD ESP,0x4                         ; 004eab53
    CMP EBX,0x206                       ; 004eab56
        ;   Label: LAB_004eab56
    JNZ 0x004eab6d                      ; 004eab5c
        ;   XREF to: 004eab6d (CONDITIONAL_JUMP)  ; LAB_004eab6d
    PUSH 0x5c79dc                       ; 004eab5e | = "Button 5"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab63
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab68
    ADD ESP,0x4                         ; 004eab6a
    CMP EBX,0x207                       ; 004eab6d
        ;   Label: LAB_004eab6d
    JNZ 0x004eab84                      ; 004eab73
        ;   XREF to: 004eab84 (CONDITIONAL_JUMP)  ; LAB_004eab84
    PUSH 0x5c79e5                       ; 004eab75 | = "Button 6"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab7a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab7f
    ADD ESP,0x4                         ; 004eab81
    CMP EBX,0x208                       ; 004eab84
        ;   Label: LAB_004eab84
    JNZ 0x004eab9b                      ; 004eab8a
        ;   XREF to: 004eab9b (CONDITIONAL_JUMP)  ; LAB_004eab9b
    PUSH 0x5c79ee                       ; 004eab8c | = "Button 7"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eab91
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eab96
    ADD ESP,0x4                         ; 004eab98
    CMP EBX,0x209                       ; 004eab9b
        ;   Label: LAB_004eab9b
    JNZ 0x004eabb2                      ; 004eaba1
        ;   XREF to: 004eabb2 (CONDITIONAL_JUMP)  ; LAB_004eabb2
    PUSH 0x5c79f7                       ; 004eaba3 | = "Button 8"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eaba8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eabad
    ADD ESP,0x4                         ; 004eabaf
    CMP EBX,0x20a                       ; 004eabb2
        ;   Label: LAB_004eabb2
    JNZ 0x004eabc9                      ; 004eabb8
        ;   XREF to: 004eabc9 (CONDITIONAL_JUMP)  ; LAB_004eabc9
    PUSH 0x5c7a00                       ; 004eabba | = "Button 9"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eabbf
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eabc4
    ADD ESP,0x4                         ; 004eabc6
    CMP EBX,0x20b                       ; 004eabc9
        ;   Label: LAB_004eabc9
    JNZ 0x004eabe0                      ; 004eabcf
        ;   XREF to: 004eabe0 (CONDITIONAL_JUMP)  ; LAB_004eabe0
    PUSH 0x5c7a09                       ; 004eabd1 | = "Button 10"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eabd6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eabdb
    ADD ESP,0x4                         ; 004eabdd
    CMP EBX,0x251                       ; 004eabe0
        ;   Label: LAB_004eabe0
    JNZ 0x004eabf7                      ; 004eabe6
        ;   XREF to: 004eabf7 (CONDITIONAL_JUMP)  ; LAB_004eabf7
    PUSH 0x5c7a13                       ; 004eabe8 | = "Gamepad left"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eabed
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eabf2
    ADD ESP,0x4                         ; 004eabf4
    CMP EBX,0x252                       ; 004eabf7
        ;   Label: LAB_004eabf7
    JNZ 0x004eac0e                      ; 004eabfd
        ;   XREF to: 004eac0e (CONDITIONAL_JUMP)  ; LAB_004eac0e
    PUSH 0x5c7a20                       ; 004eabff | = "Gamepad right"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eac04
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eac09
    ADD ESP,0x4                         ; 004eac0b
    CMP EBX,0x253                       ; 004eac0e
        ;   Label: LAB_004eac0e
    JNZ 0x004eac25                      ; 004eac14
        ;   XREF to: 004eac25 (CONDITIONAL_JUMP)  ; LAB_004eac25
    PUSH 0x5c7a2e                       ; 004eac16 | = "Gamepad forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eac1b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eac20
    ADD ESP,0x4                         ; 004eac22
    CMP EBX,0x254                       ; 004eac25
        ;   Label: LAB_004eac25
    JNZ 0x004eac3c                      ; 004eac2b
        ;   XREF to: 004eac3c (CONDITIONAL_JUMP)  ; LAB_004eac3c
    PUSH 0x5c7a3e                       ; 004eac2d | = "Gamepad back"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eac32
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eac37
    ADD ESP,0x4                         ; 004eac39
    TEST ESI,ESI                        ; 004eac3c
        ;   Label: LAB_004eac3c
    JZ 0x004eac9e                       ; 004eac3e
        ;   XREF to: 004eac9e (CONDITIONAL_JUMP)  ; LAB_004eac9e
    MOV EDX,dword ptr [0x01d76220]      ; 004eac40 | DAT_01d76220
        ;   Label: LAB_004eac40
    INC EDX                             ; 004eac46
    MOV ECX,0xa                         ; 004eac47
    MOV EAX,EDX                         ; 004eac4c
    SAR EDX,0x1f                        ; 004eac4e
    IDIV ECX                            ; 004eac51
    MOV EBX,dword ptr [0x01d76220]      ; 004eac53 | DAT_01d76220
    SHL EBX,0x8                         ; 004eac59
    ADD EBX,0x1d76228                   ; 004eac5c
    MOV EDI,EBX                         ; 004eac62
    MOV dword ptr [0x01d76220],EDX      ; 004eac64 | DAT_01d76220
    PUSH EDI                            ; 004eac6a
    MOV AL,byte ptr [ESI]               ; 004eac6b
        ;   Label: LAB_004eac6b
    MOV byte ptr [EDI],AL               ; 004eac6d
    CMP AL,0x0                          ; 004eac6f
    JZ 0x004eac83                       ; 004eac71
        ;   XREF to: 004eac83 (CONDITIONAL_JUMP)  ; LAB_004eac83
    MOV AL,byte ptr [ESI + 0x1]         ; 004eac73
    ADD ESI,0x2                         ; 004eac76
    MOV byte ptr [EDI + 0x1],AL         ; 004eac79
    ADD EDI,0x2                         ; 004eac7c
    CMP AL,0x0                          ; 004eac7f
    JNZ 0x004eac6b                      ; 004eac81
        ;   XREF to: 004eac6b (CONDITIONAL_JUMP)  ; LAB_004eac6b
    POP EDI                             ; 004eac83
        ;   Label: LAB_004eac83
    MOV EAX,EBX                         ; 004eac84
    POP EDI                             ; 004eac86
    POP ESI                             ; 004eac87
    POP EBX                             ; 004eac88
    RET                                 ; 004eac89
    PUSH 0x5c797c                       ; 004eac8a | = "(none)"
        ;   Label: LAB_004eac8a
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004eac8f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    MOV ESI,EAX                         ; 004eac94
    ADD ESP,0x4                         ; 004eac96
    JMP 0x004eaa87                      ; 004eac99
        ;   XREF to: 004eaa87 (UNCONDITIONAL_JUMP)  ; LAB_004eaa87
    PUSH EBX                            ; 004eac9e
        ;   Label: LAB_004eac9e
    CALL wincore_winrun.cpp_FUN_00581360 ; 004eac9f
        ;   XREF to: 00581360 (UNCONDITIONAL_CALL)  ; char * wincore_winrun.cpp_FUN_00581360(EInputCodeType keycode)
    MOV ESI,EAX                         ; 004eaca4
    ADD ESP,0x4                         ; 004eaca6
    JMP 0x004eac40                      ; 004eaca9
        ;   XREF to: 004eac40 (UNCONDITIONAL_JUMP)  ; LAB_004eac40

