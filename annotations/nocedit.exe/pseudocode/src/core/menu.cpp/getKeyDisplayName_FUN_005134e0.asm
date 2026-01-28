; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(int key_code)
;
; Parameters:
; int              Stack[0x4]:4   key_code
;
; XREF[4]:
;   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 at 004d9322
;   core_game.cpp_FUN_004d8910 at 004d892a
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fd9a2
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514713
;
; Referenced Globals:
;   TerminatedCString s_none_00636e67
;   TerminatedCString s_Mouse_X_Axis_00636e6e
;   TerminatedCString s_Mouse_Y_Axis_00636e7b
;   TerminatedCString s_Mouse_B1_00636e88
;   TerminatedCString s_Mouse_B2_00636e91
;   TerminatedCString s_Mouse_B3_00636e9a
;   TerminatedCString s_Button_1_00636ea3
;   TerminatedCString s_Button_2_00636eac
;   TerminatedCString s_Button_3_00636eb5
;   TerminatedCString s_Button_4_00636ebe
;   TerminatedCString s_Button_5_00636ec7
;   TerminatedCString s_Button_6_00636ed0
;   TerminatedCString s_Button_7_00636ed9
;   TerminatedCString s_Button_8_00636ee2
;   TerminatedCString s_Button_9_00636eeb
;   ... and 10 more
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_winrun.cpp_getKeyName_FUN_005f3980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005134e0
        ;   Label: core_menu.cpp_getKeyDisplayName_FUN_005134e0
    PUSH ESI                            ; 005134e1
    PUSH EDI                            ; 005134e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005134e3
    XOR ESI,ESI                         ; 005134e7
    CMP EBX,0x257                       ; 005134e9
    JZ 0x005136f8                       ; 005134ef
        ;   XREF to: 005136f8 (CONDITIONAL_JUMP)  ; LAB_005136f8
    CMP EBX,0x255                       ; 005134f5
        ;   Label: LAB_005134f5
    JNZ 0x0051350c                      ; 005134fb
        ;   XREF to: 0051350c (CONDITIONAL_JUMP)  ; LAB_0051350c
    PUSH 0x636e6e                       ; 005134fd | = "Mouse X-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513502
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513507
    ADD ESP,0x4                         ; 00513509
    CMP EBX,0x256                       ; 0051350c
        ;   Label: LAB_0051350c
    JNZ 0x00513523                      ; 00513512
        ;   XREF to: 00513523 (CONDITIONAL_JUMP)  ; LAB_00513523
    PUSH 0x636e7b                       ; 00513514 | = "Mouse Y-Axis"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513519
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 0051351e
    ADD ESP,0x4                         ; 00513520
    CMP EBX,0x200                       ; 00513523
        ;   Label: LAB_00513523
    JNZ 0x0051353a                      ; 00513529
        ;   XREF to: 0051353a (CONDITIONAL_JUMP)  ; LAB_0051353a
    PUSH 0x636e88                       ; 0051352b | = "Mouse B1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513530
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513535
    ADD ESP,0x4                         ; 00513537
    CMP EBX,0x201                       ; 0051353a
        ;   Label: LAB_0051353a
    JNZ 0x00513551                      ; 00513540
        ;   XREF to: 00513551 (CONDITIONAL_JUMP)  ; LAB_00513551
    PUSH 0x636e91                       ; 00513542 | = "Mouse B2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513547
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 0051354c
    ADD ESP,0x4                         ; 0051354e
    CMP EBX,0x20c                       ; 00513551
        ;   Label: LAB_00513551
    JNZ 0x00513568                      ; 00513557
        ;   XREF to: 00513568 (CONDITIONAL_JUMP)  ; LAB_00513568
    PUSH 0x636e9a                       ; 00513559 | = "Mouse B3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051355e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513563
    ADD ESP,0x4                         ; 00513565
    CMP EBX,0x202                       ; 00513568
        ;   Label: LAB_00513568
    JNZ 0x0051357f                      ; 0051356e
        ;   XREF to: 0051357f (CONDITIONAL_JUMP)  ; LAB_0051357f
    PUSH 0x636ea3                       ; 00513570 | = "Button 1"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513575
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 0051357a
    ADD ESP,0x4                         ; 0051357c
    CMP EBX,0x203                       ; 0051357f
        ;   Label: LAB_0051357f
    JNZ 0x00513596                      ; 00513585
        ;   XREF to: 00513596 (CONDITIONAL_JUMP)  ; LAB_00513596
    PUSH 0x636eac                       ; 00513587 | = "Button 2"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051358c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513591
    ADD ESP,0x4                         ; 00513593
    CMP EBX,0x204                       ; 00513596
        ;   Label: LAB_00513596
    JNZ 0x005135ad                      ; 0051359c
        ;   XREF to: 005135ad (CONDITIONAL_JUMP)  ; LAB_005135ad
    PUSH 0x636eb5                       ; 0051359e | = "Button 3"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005135a3
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 005135a8
    ADD ESP,0x4                         ; 005135aa
    CMP EBX,0x205                       ; 005135ad
        ;   Label: LAB_005135ad
    JNZ 0x005135c4                      ; 005135b3
        ;   XREF to: 005135c4 (CONDITIONAL_JUMP)  ; LAB_005135c4
    PUSH 0x636ebe                       ; 005135b5 | = "Button 4"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005135ba
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 005135bf
    ADD ESP,0x4                         ; 005135c1
    CMP EBX,0x206                       ; 005135c4
        ;   Label: LAB_005135c4
    JNZ 0x005135db                      ; 005135ca
        ;   XREF to: 005135db (CONDITIONAL_JUMP)  ; LAB_005135db
    PUSH 0x636ec7                       ; 005135cc | = "Button 5"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005135d1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 005135d6
    ADD ESP,0x4                         ; 005135d8
    CMP EBX,0x207                       ; 005135db
        ;   Label: LAB_005135db
    JNZ 0x005135f2                      ; 005135e1
        ;   XREF to: 005135f2 (CONDITIONAL_JUMP)  ; LAB_005135f2
    PUSH 0x636ed0                       ; 005135e3 | = "Button 6"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005135e8
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 005135ed
    ADD ESP,0x4                         ; 005135ef
    CMP EBX,0x208                       ; 005135f2
        ;   Label: LAB_005135f2
    JNZ 0x00513609                      ; 005135f8
        ;   XREF to: 00513609 (CONDITIONAL_JUMP)  ; LAB_00513609
    PUSH 0x636ed9                       ; 005135fa | = "Button 7"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005135ff
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513604
    ADD ESP,0x4                         ; 00513606
    CMP EBX,0x209                       ; 00513609
        ;   Label: LAB_00513609
    JNZ 0x00513620                      ; 0051360f
        ;   XREF to: 00513620 (CONDITIONAL_JUMP)  ; LAB_00513620
    PUSH 0x636ee2                       ; 00513611 | = "Button 8"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513616
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 0051361b
    ADD ESP,0x4                         ; 0051361d
    CMP EBX,0x20a                       ; 00513620
        ;   Label: LAB_00513620
    JNZ 0x00513637                      ; 00513626
        ;   XREF to: 00513637 (CONDITIONAL_JUMP)  ; LAB_00513637
    PUSH 0x636eeb                       ; 00513628 | = "Button 9"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051362d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513632
    ADD ESP,0x4                         ; 00513634
    CMP EBX,0x20b                       ; 00513637
        ;   Label: LAB_00513637
    JNZ 0x0051364e                      ; 0051363d
        ;   XREF to: 0051364e (CONDITIONAL_JUMP)  ; LAB_0051364e
    PUSH 0x636ef4                       ; 0051363f | = "Button 10"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513644
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513649
    ADD ESP,0x4                         ; 0051364b
    CMP EBX,0x251                       ; 0051364e
        ;   Label: LAB_0051364e
    JNZ 0x00513665                      ; 00513654
        ;   XREF to: 00513665 (CONDITIONAL_JUMP)  ; LAB_00513665
    PUSH 0x636efe                       ; 00513656 | = "Gamepad left"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051365b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513660
    ADD ESP,0x4                         ; 00513662
    CMP EBX,0x252                       ; 00513665
        ;   Label: LAB_00513665
    JNZ 0x0051367c                      ; 0051366b
        ;   XREF to: 0051367c (CONDITIONAL_JUMP)  ; LAB_0051367c
    PUSH 0x636f0b                       ; 0051366d | = "Gamepad right"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513672
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513677
    ADD ESP,0x4                         ; 00513679
    CMP EBX,0x253                       ; 0051367c
        ;   Label: LAB_0051367c
    JNZ 0x00513693                      ; 00513682
        ;   XREF to: 00513693 (CONDITIONAL_JUMP)  ; LAB_00513693
    PUSH 0x636f19                       ; 00513684 | = "Gamepad forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513689
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 0051368e
    ADD ESP,0x4                         ; 00513690
    CMP EBX,0x254                       ; 00513693
        ;   Label: LAB_00513693
    JNZ 0x005136aa                      ; 00513699
        ;   XREF to: 005136aa (CONDITIONAL_JUMP)  ; LAB_005136aa
    PUSH 0x636f29                       ; 0051369b | = "Gamepad back"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005136a0
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 005136a5
    ADD ESP,0x4                         ; 005136a7
    TEST ESI,ESI                        ; 005136aa
        ;   Label: LAB_005136aa
    JZ 0x0051370c                       ; 005136ac
        ;   XREF to: 0051370c (CONDITIONAL_JUMP)  ; LAB_0051370c
    MOV EDX,dword ptr [0x02f297a0]      ; 005136ae | g_StringBufferIndex
        ;   Label: LAB_005136ae
    INC EDX                             ; 005136b4
    MOV ECX,0xa                         ; 005136b5
    MOV EAX,EDX                         ; 005136ba
    SAR EDX,0x1f                        ; 005136bc
    IDIV ECX                            ; 005136bf
    MOV EBX,dword ptr [0x02f297a0]      ; 005136c1 | g_StringBufferIndex
    SHL EBX,0x8                         ; 005136c7
    ADD EBX,0x2f297a8                   ; 005136ca | g_StringBuffers
    MOV EDI,EBX                         ; 005136d0
    MOV dword ptr [0x02f297a0],EDX      ; 005136d2 | g_StringBufferIndex
    PUSH EDI                            ; 005136d8
    MOV AL,byte ptr [ESI]               ; 005136d9
        ;   Label: LAB_005136d9
    MOV byte ptr [EDI],AL               ; 005136db | g_StringBuffers | DAT_02f297aa
    CMP AL,0x0                          ; 005136dd
    JZ 0x005136f1                       ; 005136df
        ;   XREF to: 005136f1 (CONDITIONAL_JUMP)  ; LAB_005136f1
    MOV AL,byte ptr [ESI + 0x1]         ; 005136e1
    ADD ESI,0x2                         ; 005136e4
    MOV byte ptr [EDI + 0x1],AL         ; 005136e7 | DAT_02f297a9 | DAT_02f297ab
    ADD EDI,0x2                         ; 005136ea
    CMP AL,0x0                          ; 005136ed
    JNZ 0x005136d9                      ; 005136ef
        ;   XREF to: 005136d9 (CONDITIONAL_JUMP)  ; LAB_005136d9
    POP EDI                             ; 005136f1
        ;   Label: LAB_005136f1
    MOV EAX,EBX                         ; 005136f2
    POP EDI                             ; 005136f4
    POP ESI                             ; 005136f5
    POP EBX                             ; 005136f6
    RET                                 ; 005136f7
    PUSH 0x636e67                       ; 005136f8 | = "(none)"
        ;   Label: LAB_005136f8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005136fd
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV ESI,EAX                         ; 00513702
    ADD ESP,0x4                         ; 00513704
    JMP 0x005134f5                      ; 00513707
        ;   XREF to: 005134f5 (UNCONDITIONAL_JUMP)  ; LAB_005134f5
    PUSH EBX                            ; 0051370c
        ;   Label: LAB_0051370c
    CALL wincore_winrun.cpp_getKeyName_FUN_005f3980 ; 0051370d
        ;   XREF to: 005f3980 (UNCONDITIONAL_CALL)  ; char * wincore_winrun.cpp_getKeyName_FUN_005f3980(int keycode)
    MOV ESI,EAX                         ; 00513712
    ADD ESP,0x4                         ; 00513714
    JMP 0x005136ae                      ; 00513717
        ;   XREF to: 005136ae (UNCONDITIONAL_JUMP)  ; LAB_005136ae

