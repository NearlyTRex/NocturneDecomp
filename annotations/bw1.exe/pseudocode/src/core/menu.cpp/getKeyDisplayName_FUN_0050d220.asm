; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
;
; XREF[4]:
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004ccc40 at 004cd0dd
;   core_game.cpp_drawKeyBindingEntry_FUN_004ccb80 at 004ccb9a
;   core_inv.cpp_FUN_004f7690 at 004f7883
;   core_menu.cpp_FUN_0050d640 at 0050e60e
;
; Referenced Globals:
;   TerminatedCString s_none_005e82a4
;   TerminatedCString s_Mouse_X_Axis_005e82ab
;   TerminatedCString s_Mouse_Y_Axis_005e82b8
;   TerminatedCString s_Mouse_B1_005e82c5
;   TerminatedCString s_Mouse_B2_005e82ce
;   TerminatedCString s_Mouse_B3_005e82d7
;   TerminatedCString s_Button_1_005e82e0
;   TerminatedCString s_Button_2_005e82e9
;   TerminatedCString s_Button_3_005e82f2
;   TerminatedCString s_Button_4_005e82fb
;   TerminatedCString s_Button_5_005e8304
;   TerminatedCString s_Button_6_005e830d
;   TerminatedCString s_Button_7_005e8316
;   TerminatedCString s_Button_8_005e831f
;   TerminatedCString s_Button_9_005e8328
;   ... and 9 more
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   wincore_winrun.cpp_getKeyName_FUN_005b30e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d220
        ;   Label: core_menu.cpp_getKeyDisplayName_FUN_0050d220
    PUSH ESI                            ; 0050d221
    PUSH EDI                            ; 0050d222
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050d223
    MOV EDX,dword ptr [0x0061d95c]      ; 0050d227 | g_CGamePtr
    MOV EDX,dword ptr [EDX + 0xd0]      ; 0050d22d | g_CGameInstance.game_control
    XOR ESI,ESI                         ; 0050d233
    MOV dword ptr [0x01d1ee90],EDX      ; 0050d235 | DAT_01d1ee90
    CMP EBX,0x257                       ; 0050d23b
    JZ 0x0050d44a                       ; 0050d241
        ;   XREF to: 0050d44a (CONDITIONAL_JUMP)  ; LAB_0050d44a
    CMP EBX,0x255                       ; 0050d247
        ;   Label: LAB_0050d247
    JNZ 0x0050d25e                      ; 0050d24d
        ;   XREF to: 0050d25e (CONDITIONAL_JUMP)  ; LAB_0050d25e
    PUSH 0x5e82ab                       ; 0050d24f | = "Mouse X-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d254
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d259
    ADD ESP,0x4                         ; 0050d25b
    CMP EBX,0x256                       ; 0050d25e
        ;   Label: LAB_0050d25e
    JNZ 0x0050d275                      ; 0050d264
        ;   XREF to: 0050d275 (CONDITIONAL_JUMP)  ; LAB_0050d275
    PUSH 0x5e82b8                       ; 0050d266 | = "Mouse Y-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d26b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d270
    ADD ESP,0x4                         ; 0050d272
    CMP EBX,0x200                       ; 0050d275
        ;   Label: LAB_0050d275
    JNZ 0x0050d28c                      ; 0050d27b
        ;   XREF to: 0050d28c (CONDITIONAL_JUMP)  ; LAB_0050d28c
    PUSH 0x5e82c5                       ; 0050d27d | = "Mouse B1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d282
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d287
    ADD ESP,0x4                         ; 0050d289
    CMP EBX,0x201                       ; 0050d28c
        ;   Label: LAB_0050d28c
    JNZ 0x0050d2a3                      ; 0050d292
        ;   XREF to: 0050d2a3 (CONDITIONAL_JUMP)  ; LAB_0050d2a3
    PUSH 0x5e82ce                       ; 0050d294 | = "Mouse B2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d299
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d29e
    ADD ESP,0x4                         ; 0050d2a0
    CMP EBX,0x20c                       ; 0050d2a3
        ;   Label: LAB_0050d2a3
    JNZ 0x0050d2ba                      ; 0050d2a9
        ;   XREF to: 0050d2ba (CONDITIONAL_JUMP)  ; LAB_0050d2ba
    PUSH 0x5e82d7                       ; 0050d2ab | = "Mouse B3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d2b0
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d2b5
    ADD ESP,0x4                         ; 0050d2b7
    CMP EBX,0x202                       ; 0050d2ba
        ;   Label: LAB_0050d2ba
    JNZ 0x0050d2d1                      ; 0050d2c0
        ;   XREF to: 0050d2d1 (CONDITIONAL_JUMP)  ; LAB_0050d2d1
    PUSH 0x5e82e0                       ; 0050d2c2 | = "Button 1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d2c7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d2cc
    ADD ESP,0x4                         ; 0050d2ce
    CMP EBX,0x203                       ; 0050d2d1
        ;   Label: LAB_0050d2d1
    JNZ 0x0050d2e8                      ; 0050d2d7
        ;   XREF to: 0050d2e8 (CONDITIONAL_JUMP)  ; LAB_0050d2e8
    PUSH 0x5e82e9                       ; 0050d2d9 | = "Button 2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d2de
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d2e3
    ADD ESP,0x4                         ; 0050d2e5
    CMP EBX,0x204                       ; 0050d2e8
        ;   Label: LAB_0050d2e8
    JNZ 0x0050d2ff                      ; 0050d2ee
        ;   XREF to: 0050d2ff (CONDITIONAL_JUMP)  ; LAB_0050d2ff
    PUSH 0x5e82f2                       ; 0050d2f0 | = "Button 3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d2f5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d2fa
    ADD ESP,0x4                         ; 0050d2fc
    CMP EBX,0x205                       ; 0050d2ff
        ;   Label: LAB_0050d2ff
    JNZ 0x0050d316                      ; 0050d305
        ;   XREF to: 0050d316 (CONDITIONAL_JUMP)  ; LAB_0050d316
    PUSH 0x5e82fb                       ; 0050d307 | = "Button 4"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d30c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d311
    ADD ESP,0x4                         ; 0050d313
    CMP EBX,0x206                       ; 0050d316
        ;   Label: LAB_0050d316
    JNZ 0x0050d32d                      ; 0050d31c
        ;   XREF to: 0050d32d (CONDITIONAL_JUMP)  ; LAB_0050d32d
    PUSH 0x5e8304                       ; 0050d31e | = "Button 5"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d323
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d328
    ADD ESP,0x4                         ; 0050d32a
    CMP EBX,0x207                       ; 0050d32d
        ;   Label: LAB_0050d32d
    JNZ 0x0050d344                      ; 0050d333
        ;   XREF to: 0050d344 (CONDITIONAL_JUMP)  ; LAB_0050d344
    PUSH 0x5e830d                       ; 0050d335 | = "Button 6"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d33a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d33f
    ADD ESP,0x4                         ; 0050d341
    CMP EBX,0x208                       ; 0050d344
        ;   Label: LAB_0050d344
    JNZ 0x0050d35b                      ; 0050d34a
        ;   XREF to: 0050d35b (CONDITIONAL_JUMP)  ; LAB_0050d35b
    PUSH 0x5e8316                       ; 0050d34c | = "Button 7"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d351
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d356
    ADD ESP,0x4                         ; 0050d358
    CMP EBX,0x209                       ; 0050d35b
        ;   Label: LAB_0050d35b
    JNZ 0x0050d372                      ; 0050d361
        ;   XREF to: 0050d372 (CONDITIONAL_JUMP)  ; LAB_0050d372
    PUSH 0x5e831f                       ; 0050d363 | = "Button 8"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d368
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d36d
    ADD ESP,0x4                         ; 0050d36f
    CMP EBX,0x20a                       ; 0050d372
        ;   Label: LAB_0050d372
    JNZ 0x0050d389                      ; 0050d378
        ;   XREF to: 0050d389 (CONDITIONAL_JUMP)  ; LAB_0050d389
    PUSH 0x5e8328                       ; 0050d37a | = "Button 9"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d37f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d384
    ADD ESP,0x4                         ; 0050d386
    CMP EBX,0x20b                       ; 0050d389
        ;   Label: LAB_0050d389
    JNZ 0x0050d3a0                      ; 0050d38f
        ;   XREF to: 0050d3a0 (CONDITIONAL_JUMP)  ; LAB_0050d3a0
    PUSH 0x5e8331                       ; 0050d391 | = "Button 10"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d396
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d39b
    ADD ESP,0x4                         ; 0050d39d
    CMP EBX,0x251                       ; 0050d3a0
        ;   Label: LAB_0050d3a0
    JNZ 0x0050d3b7                      ; 0050d3a6
        ;   XREF to: 0050d3b7 (CONDITIONAL_JUMP)  ; LAB_0050d3b7
    PUSH 0x5e833b                       ; 0050d3a8 | = "Gamepad left"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d3ad
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d3b2
    ADD ESP,0x4                         ; 0050d3b4
    CMP EBX,0x252                       ; 0050d3b7
        ;   Label: LAB_0050d3b7
    JNZ 0x0050d3ce                      ; 0050d3bd
        ;   XREF to: 0050d3ce (CONDITIONAL_JUMP)  ; LAB_0050d3ce
    PUSH 0x5e8348                       ; 0050d3bf | = "Gamepad right"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d3c4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d3c9
    ADD ESP,0x4                         ; 0050d3cb
    CMP EBX,0x253                       ; 0050d3ce
        ;   Label: LAB_0050d3ce
    JNZ 0x0050d3e5                      ; 0050d3d4
        ;   XREF to: 0050d3e5 (CONDITIONAL_JUMP)  ; LAB_0050d3e5
    PUSH 0x5e8356                       ; 0050d3d6 | = "Gamepad forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d3db
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d3e0
    ADD ESP,0x4                         ; 0050d3e2
    CMP EBX,0x254                       ; 0050d3e5
        ;   Label: LAB_0050d3e5
    JNZ 0x0050d3fc                      ; 0050d3eb
        ;   XREF to: 0050d3fc (CONDITIONAL_JUMP)  ; LAB_0050d3fc
    PUSH 0x5e8366                       ; 0050d3ed | = "Gamepad back"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d3f2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d3f7
    ADD ESP,0x4                         ; 0050d3f9
    TEST ESI,ESI                        ; 0050d3fc
        ;   Label: LAB_0050d3fc
    JZ 0x0050d45e                       ; 0050d3fe
        ;   XREF to: 0050d45e (CONDITIONAL_JUMP)  ; LAB_0050d45e
    MOV EDX,dword ptr [0x01d219e0]      ; 0050d400 | DAT_01d219e0
        ;   Label: LAB_0050d400
    INC EDX                             ; 0050d406
    MOV ECX,0xa                         ; 0050d407
    MOV EAX,EDX                         ; 0050d40c
    SAR EDX,0x1f                        ; 0050d40e
    IDIV ECX                            ; 0050d411
    MOV EBX,dword ptr [0x01d219e0]      ; 0050d413 | DAT_01d219e0
    SHL EBX,0x8                         ; 0050d419
    ADD EBX,0x1d219e8                   ; 0050d41c
    MOV EDI,EBX                         ; 0050d422
    MOV dword ptr [0x01d219e0],EDX      ; 0050d424 | DAT_01d219e0
    PUSH EDI                            ; 0050d42a
    MOV AL,byte ptr [ESI]               ; 0050d42b
        ;   Label: LAB_0050d42b
    MOV byte ptr [EDI],AL               ; 0050d42d
    CMP AL,0x0                          ; 0050d42f
    JZ 0x0050d443                       ; 0050d431
        ;   XREF to: 0050d443 (CONDITIONAL_JUMP)  ; LAB_0050d443
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d433
    ADD ESI,0x2                         ; 0050d436
    MOV byte ptr [EDI + 0x1],AL         ; 0050d439
    ADD EDI,0x2                         ; 0050d43c
    CMP AL,0x0                          ; 0050d43f
    JNZ 0x0050d42b                      ; 0050d441
        ;   XREF to: 0050d42b (CONDITIONAL_JUMP)  ; LAB_0050d42b
    POP EDI                             ; 0050d443
        ;   Label: LAB_0050d443
    MOV EAX,EBX                         ; 0050d444
    POP EDI                             ; 0050d446
    POP ESI                             ; 0050d447
    POP EBX                             ; 0050d448
    RET                                 ; 0050d449
    PUSH 0x5e82a4                       ; 0050d44a | = "(none)"
        ;   Label: LAB_0050d44a
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d44f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV ESI,EAX                         ; 0050d454
    ADD ESP,0x4                         ; 0050d456
    JMP 0x0050d247                      ; 0050d459
        ;   XREF to: 0050d247 (UNCONDITIONAL_JUMP)  ; LAB_0050d247
    PUSH EBX                            ; 0050d45e
        ;   Label: LAB_0050d45e
    CALL wincore_winrun.cpp_getKeyName_FUN_005b30e0 ; 0050d45f
        ;   XREF to: 005b30e0 (UNCONDITIONAL_CALL)  ; char * wincore_winrun.cpp_getKeyName_FUN_005b30e0(EInputCodeType keycode)
    MOV ESI,EAX                         ; 0050d464
    ADD ESP,0x4                         ; 0050d466
    JMP 0x0050d400                      ; 0050d469
        ;   XREF to: 0050d400 (UNCONDITIONAL_JUMP)  ; LAB_0050d400

