; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
;
; XREF[4]:
;   core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0 at 0049b97d
;   core_game.cpp_drawKeyBindingEntry_FUN_0049b420 at 0049b43a
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bf553
;   core_menu.cpp_configureCustomKeyBindings_FUN_004d2d00 at 004d3b39
;
; Referenced Globals:
;   TerminatedCString s_none_00588d69
;   TerminatedCString s_Mouse_X_Axis_00588d70
;   TerminatedCString s_Mouse_Y_Axis_00588d7d
;   TerminatedCString s_Mouse_B1_00588d8a
;   TerminatedCString s_Mouse_B2_00588d93
;   TerminatedCString s_Mouse_B3_00588d9c
;   TerminatedCString s_Button_1_00588da5
;   TerminatedCString s_Button_2_00588dae
;   TerminatedCString s_Button_3_00588db7
;   TerminatedCString s_Button_4_00588dc0
;   TerminatedCString s_Button_5_00588dc9
;   TerminatedCString s_Button_6_00588dd2
;   TerminatedCString s_Button_7_00588ddb
;   TerminatedCString s_Button_8_00588de4
;   TerminatedCString s_Button_9_00588ded
;   ... and 6 more
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   wincore_winrun.cpp_getKeyName_FUN_00559560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2900
        ;   Label: core_menu.cpp_getKeyDisplayName_FUN_004d2900
    PUSH ESI                            ; 004d2901
    PUSH EDI                            ; 004d2902
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d2903
    XOR ESI,ESI                         ; 004d2907
    CMP EBX,0x257                       ; 004d2909
    JZ 0x004d2b18                       ; 004d290f
        ;   XREF to: 004d2b18 (CONDITIONAL_JUMP)  ; LAB_004d2b18
    CMP EBX,0x255                       ; 004d2915
        ;   Label: LAB_004d2915
    JNZ 0x004d292c                      ; 004d291b
        ;   XREF to: 004d292c (CONDITIONAL_JUMP)  ; LAB_004d292c
    PUSH 0x588d70                       ; 004d291d | = "Mouse X-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2922
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2927
    ADD ESP,0x4                         ; 004d2929
    CMP EBX,0x256                       ; 004d292c
        ;   Label: LAB_004d292c
    JNZ 0x004d2943                      ; 004d2932
        ;   XREF to: 004d2943 (CONDITIONAL_JUMP)  ; LAB_004d2943
    PUSH 0x588d7d                       ; 004d2934 | = "Mouse Y-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2939
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d293e
    ADD ESP,0x4                         ; 004d2940
    CMP EBX,0x200                       ; 004d2943
        ;   Label: LAB_004d2943
    JNZ 0x004d295a                      ; 004d2949
        ;   XREF to: 004d295a (CONDITIONAL_JUMP)  ; LAB_004d295a
    PUSH 0x588d8a                       ; 004d294b | = "Mouse B1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2950
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2955
    ADD ESP,0x4                         ; 004d2957
    CMP EBX,0x201                       ; 004d295a
        ;   Label: LAB_004d295a
    JNZ 0x004d2971                      ; 004d2960
        ;   XREF to: 004d2971 (CONDITIONAL_JUMP)  ; LAB_004d2971
    PUSH 0x588d93                       ; 004d2962 | = "Mouse B2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2967
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d296c
    ADD ESP,0x4                         ; 004d296e
    CMP EBX,0x20c                       ; 004d2971
        ;   Label: LAB_004d2971
    JNZ 0x004d2988                      ; 004d2977
        ;   XREF to: 004d2988 (CONDITIONAL_JUMP)  ; LAB_004d2988
    PUSH 0x588d9c                       ; 004d2979 | = "Mouse B3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d297e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2983
    ADD ESP,0x4                         ; 004d2985
    CMP EBX,0x202                       ; 004d2988
        ;   Label: LAB_004d2988
    JNZ 0x004d299f                      ; 004d298e
        ;   XREF to: 004d299f (CONDITIONAL_JUMP)  ; LAB_004d299f
    PUSH 0x588da5                       ; 004d2990 | = "Button 1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2995
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d299a
    ADD ESP,0x4                         ; 004d299c
    CMP EBX,0x203                       ; 004d299f
        ;   Label: LAB_004d299f
    JNZ 0x004d29b6                      ; 004d29a5
        ;   XREF to: 004d29b6 (CONDITIONAL_JUMP)  ; LAB_004d29b6
    PUSH 0x588dae                       ; 004d29a7 | = "Button 2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d29ac
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d29b1
    ADD ESP,0x4                         ; 004d29b3
    CMP EBX,0x204                       ; 004d29b6
        ;   Label: LAB_004d29b6
    JNZ 0x004d29cd                      ; 004d29bc
        ;   XREF to: 004d29cd (CONDITIONAL_JUMP)  ; LAB_004d29cd
    PUSH 0x588db7                       ; 004d29be | = "Button 3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d29c3
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d29c8
    ADD ESP,0x4                         ; 004d29ca
    CMP EBX,0x205                       ; 004d29cd
        ;   Label: LAB_004d29cd
    JNZ 0x004d29e4                      ; 004d29d3
        ;   XREF to: 004d29e4 (CONDITIONAL_JUMP)  ; LAB_004d29e4
    PUSH 0x588dc0                       ; 004d29d5 | = "Button 4"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d29da
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d29df
    ADD ESP,0x4                         ; 004d29e1
    CMP EBX,0x206                       ; 004d29e4
        ;   Label: LAB_004d29e4
    JNZ 0x004d29fb                      ; 004d29ea
        ;   XREF to: 004d29fb (CONDITIONAL_JUMP)  ; LAB_004d29fb
    PUSH 0x588dc9                       ; 004d29ec | = "Button 5"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d29f1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d29f6
    ADD ESP,0x4                         ; 004d29f8
    CMP EBX,0x207                       ; 004d29fb
        ;   Label: LAB_004d29fb
    JNZ 0x004d2a12                      ; 004d2a01
        ;   XREF to: 004d2a12 (CONDITIONAL_JUMP)  ; LAB_004d2a12
    PUSH 0x588dd2                       ; 004d2a03 | = "Button 6"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a08
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a0d
    ADD ESP,0x4                         ; 004d2a0f
    CMP EBX,0x208                       ; 004d2a12
        ;   Label: LAB_004d2a12
    JNZ 0x004d2a29                      ; 004d2a18
        ;   XREF to: 004d2a29 (CONDITIONAL_JUMP)  ; LAB_004d2a29
    PUSH 0x588ddb                       ; 004d2a1a | = "Button 7"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a1f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a24
    ADD ESP,0x4                         ; 004d2a26
    CMP EBX,0x209                       ; 004d2a29
        ;   Label: LAB_004d2a29
    JNZ 0x004d2a40                      ; 004d2a2f
        ;   XREF to: 004d2a40 (CONDITIONAL_JUMP)  ; LAB_004d2a40
    PUSH 0x588de4                       ; 004d2a31 | = "Button 8"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a36
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a3b
    ADD ESP,0x4                         ; 004d2a3d
    CMP EBX,0x20a                       ; 004d2a40
        ;   Label: LAB_004d2a40
    JNZ 0x004d2a57                      ; 004d2a46
        ;   XREF to: 004d2a57 (CONDITIONAL_JUMP)  ; LAB_004d2a57
    PUSH 0x588ded                       ; 004d2a48 | = "Button 9"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a4d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a52
    ADD ESP,0x4                         ; 004d2a54
    CMP EBX,0x20b                       ; 004d2a57
        ;   Label: LAB_004d2a57
    JNZ 0x004d2a6e                      ; 004d2a5d
        ;   XREF to: 004d2a6e (CONDITIONAL_JUMP)  ; LAB_004d2a6e
    PUSH 0x588df6                       ; 004d2a5f | = "Button 10"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a64
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a69
    ADD ESP,0x4                         ; 004d2a6b
    CMP EBX,0x251                       ; 004d2a6e
        ;   Label: LAB_004d2a6e
    JNZ 0x004d2a85                      ; 004d2a74
        ;   XREF to: 004d2a85 (CONDITIONAL_JUMP)  ; LAB_004d2a85
    PUSH 0x588e00                       ; 004d2a76 | = "Gamepad left"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a7b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a80
    ADD ESP,0x4                         ; 004d2a82
    CMP EBX,0x252                       ; 004d2a85
        ;   Label: LAB_004d2a85
    JNZ 0x004d2a9c                      ; 004d2a8b
        ;   XREF to: 004d2a9c (CONDITIONAL_JUMP)  ; LAB_004d2a9c
    PUSH 0x588e0d                       ; 004d2a8d | = "Gamepad right"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2a92
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2a97
    ADD ESP,0x4                         ; 004d2a99
    CMP EBX,0x253                       ; 004d2a9c
        ;   Label: LAB_004d2a9c
    JNZ 0x004d2ab3                      ; 004d2aa2
        ;   XREF to: 004d2ab3 (CONDITIONAL_JUMP)  ; LAB_004d2ab3
    PUSH 0x588e1b                       ; 004d2aa4 | = "Gamepad forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2aa9
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2aae
    ADD ESP,0x4                         ; 004d2ab0
    CMP EBX,0x254                       ; 004d2ab3
        ;   Label: LAB_004d2ab3
    JNZ 0x004d2aca                      ; 004d2ab9
        ;   XREF to: 004d2aca (CONDITIONAL_JUMP)  ; LAB_004d2aca
    PUSH 0x588e2b                       ; 004d2abb | = "Gamepad back"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2ac0
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2ac5
    ADD ESP,0x4                         ; 004d2ac7
    TEST ESI,ESI                        ; 004d2aca
        ;   Label: LAB_004d2aca
    JZ 0x004d2b2c                       ; 004d2acc
        ;   XREF to: 004d2b2c (CONDITIONAL_JUMP)  ; LAB_004d2b2c
    MOV EDX,dword ptr [0x01cc8650]      ; 004d2ace | DAT_01cc8650
        ;   Label: LAB_004d2ace
    INC EDX                             ; 004d2ad4
    MOV ECX,0xa                         ; 004d2ad5
    MOV EAX,EDX                         ; 004d2ada
    SAR EDX,0x1f                        ; 004d2adc
    IDIV ECX                            ; 004d2adf
    MOV EBX,dword ptr [0x01cc8650]      ; 004d2ae1 | DAT_01cc8650
    SHL EBX,0x8                         ; 004d2ae7
    ADD EBX,0x1cc8658                   ; 004d2aea
    MOV EDI,EBX                         ; 004d2af0
    MOV dword ptr [0x01cc8650],EDX      ; 004d2af2 | DAT_01cc8650
    PUSH EDI                            ; 004d2af8
    MOV AL,byte ptr [ESI]               ; 004d2af9
        ;   Label: LAB_004d2af9
    MOV byte ptr [EDI],AL               ; 004d2afb
    CMP AL,0x0                          ; 004d2afd
    JZ 0x004d2b11                       ; 004d2aff
        ;   XREF to: 004d2b11 (CONDITIONAL_JUMP)  ; LAB_004d2b11
    MOV AL,byte ptr [ESI + 0x1]         ; 004d2b01
    ADD ESI,0x2                         ; 004d2b04
    MOV byte ptr [EDI + 0x1],AL         ; 004d2b07
    ADD EDI,0x2                         ; 004d2b0a
    CMP AL,0x0                          ; 004d2b0d
    JNZ 0x004d2af9                      ; 004d2b0f
        ;   XREF to: 004d2af9 (CONDITIONAL_JUMP)  ; LAB_004d2af9
    POP EDI                             ; 004d2b11
        ;   Label: LAB_004d2b11
    MOV EAX,EBX                         ; 004d2b12
    POP EDI                             ; 004d2b14
    POP ESI                             ; 004d2b15
    POP EBX                             ; 004d2b16
    RET                                 ; 004d2b17
    PUSH 0x588d69                       ; 004d2b18 | = "(none)"
        ;   Label: LAB_004d2b18
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d2b1d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    MOV ESI,EAX                         ; 004d2b22
    ADD ESP,0x4                         ; 004d2b24
    JMP 0x004d2915                      ; 004d2b27
        ;   XREF to: 004d2915 (UNCONDITIONAL_JUMP)  ; LAB_004d2915
    PUSH EBX                            ; 004d2b2c
        ;   Label: LAB_004d2b2c
    CALL wincore_winrun.cpp_getKeyName_FUN_00559560 ; 004d2b2d
        ;   XREF to: 00559560 (UNCONDITIONAL_CALL)  ; char * wincore_winrun.cpp_getKeyName_FUN_00559560(EInputCodeType keycode)
    MOV ESI,EAX                         ; 004d2b32
    ADD ESP,0x4                         ; 004d2b34
    JMP 0x004d2ace                      ; 004d2b37
        ;   XREF to: 004d2ace (UNCONDITIONAL_JUMP)  ; LAB_004d2ace

