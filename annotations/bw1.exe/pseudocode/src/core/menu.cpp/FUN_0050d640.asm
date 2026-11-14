; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_0050d640(void)
;
; Local Variables:
; undefined        Stack[-0xc94]:1  local_c94
; undefined        Stack[-0x8d4]:1  local_8d4
; undefined1       Stack[-0x8d3]:1  local_8d3
; undefined        Stack[-0x2d4]:1  local_2d4
; undefined1       Stack[-0x2d3]:1  local_2d3
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_menu.cpp_FUN_0050b470 at 0050b8ff
;   core_menu.cpp_FUN_0050c990 at 0050cc1f
;
; Referenced Globals:
;   void* switchdataD_0050d628 = 0050e788
;   TerminatedCString s_core_menu_cpp_005e827d
;   TerminatedCString s_Too_many_custom_keys_005e828e
;   TerminatedCString s_Fire_Action_005e8373
;   TerminatedCString s_Forward_005e8381
;   undefined4 DAT_005e8389
;   TerminatedCString s_Strafe_on_005e838e
;   TerminatedCString s_Strafe_left_005e8398
;   TerminatedCString s_Strafe_right_005e83a4
;   TerminatedCString s_Turn_left_005e83b1
;   TerminatedCString s_Turn_right_005e83bb
;   TerminatedCString s_Point_up_005e83c6
;   TerminatedCString s_Point_down_005e83cf
;   TerminatedCString s_Quick_turn_005e83da
;   TerminatedCString s_Walk_005e83e5
;   ... and 219 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960
;   core_game.cpp_FUN_004d0400
;   core_main.c_FUN_005030e0
;   core_menu.cpp_calibrateGamepad_FUN_0050a2b0
;   core_menu.cpp_getKeyDisplayName_FUN_0050d220
;   core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
;   shape_edittool.cpp_CEditorTools_showError_FUN_004943a0
;   shape_edittool.cpp_CPickList_ctor_FUN_0049a620
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
;   shape_edittool.cpp_CPickList_dtor_FUN_0049a710
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d640
        ;   Label: core_menu.cpp_FUN_0050d640
    PUSH EBP                            ; 0050d641
    SUB ESP,0xc8c                       ; 0050d642
    MOV EAX,[0x0061d95c]                ; 0050d648 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050d64d | g_CGameInstance.game_control
    JNZ 0x0050d663                      ; 0050d654
        ;   XREF to: 0050d663 (CONDITIONAL_JUMP)  ; LAB_0050d663
    CMP dword ptr [EAX + 0xb8],0x0      ; 0050d656 | g_CGameInstance.x_center
    JZ 0x0050e6db                       ; 0050d65d
        ;   XREF to: 0050e6db (CONDITIONAL_JUMP)  ; LAB_0050e6db
    PUSH EDI                            ; 0050d663
        ;   Label: LAB_0050d663
    PUSH ESI                            ; 0050d664
    XOR EBX,EBX                         ; 0050d665
    MOV dword ptr [ESP + 0xc90],EBX     ; 0050d667
    MOV EAX,[0x0061d95c]                ; 0050d66e | g_CGamePtr
        ;   Label: LAB_0050d66e
    XOR ESI,ESI                         ; 0050d673
    MOV EDI,dword ptr [EAX + 0xd0]      ; 0050d675 | g_CGameInstance.game_control
    MOV dword ptr [0x01d21458],ESI      ; 0050d67b | DAT_01d21458
    CMP EDI,0x3                         ; 0050d681
    JZ 0x0050dc0e                       ; 0050d684
        ;   XREF to: 0050dc0e (CONDITIONAL_JUMP)  ; LAB_0050dc0e
    PUSH 0x5e8373                       ; 0050d68a | = "Fire / Action"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d68f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d694 | g_CGamePtr
    MOV EBP,dword ptr [0x01d21458]      ; 0050d69a | DAT_01d21458
    ADD ESP,0x4                         ; 0050d6a0
    MOV ESI,EAX                         ; 0050d6a3
    ADD EBX,0x48                        ; 0050d6a5
    CMP EBP,0x20                        ; 0050d6a8
    JL 0x0050d6cf                       ; 0050d6ab
        ;   XREF to: 0050d6cf (CONDITIONAL_JUMP)  ; LAB_0050d6cf
    MOV EAX,0x5e827d                    ; 0050d6ad | = "..\\core\\menu.cpp"
    MOV EDX,0x8af                       ; 0050d6b2
    PUSH 0x5e828e                       ; 0050d6b7 | = "Too many custom keys!"
    MOV [0x01d1d400],EAX                ; 0050d6bc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0050d6c1 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d6c7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d6cc
    MOV EAX,[0x01d21458]                ; 0050d6cf | DAT_01d21458
        ;   Label: LAB_0050d6cf
    IMUL EDI,EAX,0x28                   ; 0050d6d4
    ADD EDI,0x1d214e0                   ; 0050d6d7
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d6dd | DAT_01d2145c | g_CGameInstance.key_fire
    PUSH EDI                            ; 0050d6e4
    MOV AL,byte ptr [ESI]               ; 0050d6e5
        ;   Label: LAB_0050d6e5
    MOV byte ptr [EDI],AL               ; 0050d6e7
    CMP AL,0x0                          ; 0050d6e9
    JZ 0x0050d6fd                       ; 0050d6eb
        ;   XREF to: 0050d6fd (CONDITIONAL_JUMP)  ; LAB_0050d6fd
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d6ed
    ADD ESI,0x2                         ; 0050d6f0
    MOV byte ptr [EDI + 0x1],AL         ; 0050d6f3
    ADD EDI,0x2                         ; 0050d6f6
    CMP AL,0x0                          ; 0050d6f9
    JNZ 0x0050d6e5                      ; 0050d6fb
        ;   XREF to: 0050d6e5 (CONDITIONAL_JUMP)  ; LAB_0050d6e5
    POP EDI                             ; 0050d6fd
        ;   Label: LAB_0050d6fd
    MOV EBX,dword ptr [0x01d21458]      ; 0050d6fe | DAT_01d21458
    INC EBX                             ; 0050d704
    PUSH 0x5e8381                       ; 0050d705 | = "Forward"
    MOV dword ptr [0x01d21458],EBX      ; 0050d70a | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d710
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d715 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d71b | DAT_01d21458
    ADD ESP,0x4                         ; 0050d721
    MOV ESI,EAX                         ; 0050d724
    ADD EBX,0x28                        ; 0050d726
    CMP EDI,0x20                        ; 0050d729
    JL 0x0050d750                       ; 0050d72c
        ;   XREF to: 0050d750 (CONDITIONAL_JUMP)  ; LAB_0050d750
    MOV EBP,0x5e827d                    ; 0050d72e | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d733
    PUSH 0x5e828e                       ; 0050d738 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d73d | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d743 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d748
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d74d
    MOV EAX,[0x01d21458]                ; 0050d750 | DAT_01d21458
        ;   Label: LAB_0050d750
    IMUL EDI,EAX,0x28                   ; 0050d755
    ADD EDI,0x1d214e0                   ; 0050d758
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d75e | DAT_01d21460 | g_CGameInstance.key_walk
    PUSH EDI                            ; 0050d765 | DAT_01d21508
    MOV AL,byte ptr [ESI]               ; 0050d766
        ;   Label: LAB_0050d766
    MOV byte ptr [EDI],AL               ; 0050d768 | DAT_01d21508 | DAT_01d2150a
    CMP AL,0x0                          ; 0050d76a
    JZ 0x0050d77e                       ; 0050d76c
        ;   XREF to: 0050d77e (CONDITIONAL_JUMP)  ; LAB_0050d77e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d76e
    ADD ESI,0x2                         ; 0050d771
    MOV byte ptr [EDI + 0x1],AL         ; 0050d774 | DAT_01d21509 | DAT_01d2150b
    ADD EDI,0x2                         ; 0050d777
    CMP AL,0x0                          ; 0050d77a
    JNZ 0x0050d766                      ; 0050d77c
        ;   XREF to: 0050d766 (CONDITIONAL_JUMP)  ; LAB_0050d766
    POP EDI                             ; 0050d77e
        ;   Label: LAB_0050d77e
    MOV ECX,dword ptr [0x01d21458]      ; 0050d77f | DAT_01d21458
    INC ECX                             ; 0050d785
    PUSH 0x5e8389                       ; 0050d786 | DAT_005e8389
    MOV dword ptr [0x01d21458],ECX      ; 0050d78b | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d791
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d796 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d79c | DAT_01d21458
    ADD ESP,0x4                         ; 0050d7a2
    MOV ESI,EAX                         ; 0050d7a5
    ADD EBX,0x2c                        ; 0050d7a7
    CMP EDI,0x20                        ; 0050d7aa
    JL 0x0050d7d1                       ; 0050d7ad
        ;   XREF to: 0050d7d1 (CONDITIONAL_JUMP)  ; LAB_0050d7d1
    MOV EBP,0x5e827d                    ; 0050d7af | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d7b4
    PUSH 0x5e828e                       ; 0050d7b9 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d7be | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d7c4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d7c9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d7ce
    MOV EAX,[0x01d21458]                ; 0050d7d1 | DAT_01d21458
        ;   Label: LAB_0050d7d1
    IMUL EDI,EAX,0x28                   ; 0050d7d6
    ADD EDI,0x1d214e0                   ; 0050d7d9
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d7df | DAT_01d21464
    PUSH EDI                            ; 0050d7e6 | DAT_01d21530
    MOV AL,byte ptr [ESI]               ; 0050d7e7
        ;   Label: LAB_0050d7e7
    MOV byte ptr [EDI],AL               ; 0050d7e9 | DAT_01d21530 | DAT_01d21532
    CMP AL,0x0                          ; 0050d7eb
    JZ 0x0050d7ff                       ; 0050d7ed
        ;   XREF to: 0050d7ff (CONDITIONAL_JUMP)  ; LAB_0050d7ff
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d7ef
    ADD ESI,0x2                         ; 0050d7f2
    MOV byte ptr [EDI + 0x1],AL         ; 0050d7f5 | DAT_01d21531 | DAT_01d21533
    ADD EDI,0x2                         ; 0050d7f8
    CMP AL,0x0                          ; 0050d7fb
    JNZ 0x0050d7e7                      ; 0050d7fd
        ;   XREF to: 0050d7e7 (CONDITIONAL_JUMP)  ; LAB_0050d7e7
    POP EDI                             ; 0050d7ff
        ;   Label: LAB_0050d7ff
    MOV ECX,dword ptr [0x01d21458]      ; 0050d800 | DAT_01d21458
    INC ECX                             ; 0050d806
    PUSH 0x5e838e                       ; 0050d807 | = "Strafe on"
    MOV dword ptr [0x01d21458],ECX      ; 0050d80c | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d812
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d817 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d81d | DAT_01d21458
    ADD ESP,0x4                         ; 0050d823
    MOV ESI,EAX                         ; 0050d826
    ADD EBX,0x34                        ; 0050d828
    CMP EDI,0x20                        ; 0050d82b
    JL 0x0050d852                       ; 0050d82e
        ;   XREF to: 0050d852 (CONDITIONAL_JUMP)  ; LAB_0050d852
    MOV EBP,0x5e827d                    ; 0050d830 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d835
    PUSH 0x5e828e                       ; 0050d83a | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d83f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d845 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d84a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d84f
    MOV EAX,[0x01d21458]                ; 0050d852 | DAT_01d21458
        ;   Label: LAB_0050d852
    IMUL EDI,EAX,0x28                   ; 0050d857
    ADD EDI,0x1d214e0                   ; 0050d85a
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d860 | DAT_01d21468
    PUSH EDI                            ; 0050d867 | DAT_01d21558
    MOV AL,byte ptr [ESI]               ; 0050d868
        ;   Label: LAB_0050d868
    MOV byte ptr [EDI],AL               ; 0050d86a | DAT_01d21558 | DAT_01d2155a
    CMP AL,0x0                          ; 0050d86c
    JZ 0x0050d880                       ; 0050d86e
        ;   XREF to: 0050d880 (CONDITIONAL_JUMP)  ; LAB_0050d880
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d870
    ADD ESI,0x2                         ; 0050d873
    MOV byte ptr [EDI + 0x1],AL         ; 0050d876 | DAT_01d21559 | DAT_01d2155b
    ADD EDI,0x2                         ; 0050d879
    CMP AL,0x0                          ; 0050d87c
    JNZ 0x0050d868                      ; 0050d87e
        ;   XREF to: 0050d868 (CONDITIONAL_JUMP)  ; LAB_0050d868
    POP EDI                             ; 0050d880
        ;   Label: LAB_0050d880
    MOV ECX,dword ptr [0x01d21458]      ; 0050d881 | DAT_01d21458
    INC ECX                             ; 0050d887
    PUSH 0x5e8398                       ; 0050d888 | = "Strafe left"
    MOV dword ptr [0x01d21458],ECX      ; 0050d88d | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d893
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d898 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d89e | DAT_01d21458
    ADD ESP,0x4                         ; 0050d8a4
    MOV ESI,EAX                         ; 0050d8a7
    ADD EBX,0x38                        ; 0050d8a9
    CMP EDI,0x20                        ; 0050d8ac
    JL 0x0050d8d3                       ; 0050d8af
        ;   XREF to: 0050d8d3 (CONDITIONAL_JUMP)  ; LAB_0050d8d3
    MOV EBP,0x5e827d                    ; 0050d8b1 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d8b6
    PUSH 0x5e828e                       ; 0050d8bb | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d8c0 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d8c6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d8cb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d8d0
    MOV EAX,[0x01d21458]                ; 0050d8d3 | DAT_01d21458
        ;   Label: LAB_0050d8d3
    IMUL EDI,EAX,0x28                   ; 0050d8d8
    ADD EDI,0x1d214e0                   ; 0050d8db
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d8e1 | DAT_01d2146c
    PUSH EDI                            ; 0050d8e8 | DAT_01d21580
    MOV AL,byte ptr [ESI]               ; 0050d8e9
        ;   Label: LAB_0050d8e9
    MOV byte ptr [EDI],AL               ; 0050d8eb | DAT_01d21580 | DAT_01d21582
    CMP AL,0x0                          ; 0050d8ed
    JZ 0x0050d901                       ; 0050d8ef
        ;   XREF to: 0050d901 (CONDITIONAL_JUMP)  ; LAB_0050d901
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d8f1
    ADD ESI,0x2                         ; 0050d8f4
    MOV byte ptr [EDI + 0x1],AL         ; 0050d8f7 | DAT_01d21581 | DAT_01d21583
    ADD EDI,0x2                         ; 0050d8fa
    CMP AL,0x0                          ; 0050d8fd
    JNZ 0x0050d8e9                      ; 0050d8ff
        ;   XREF to: 0050d8e9 (CONDITIONAL_JUMP)  ; LAB_0050d8e9
    POP EDI                             ; 0050d901
        ;   Label: LAB_0050d901
    MOV ECX,dword ptr [0x01d21458]      ; 0050d902 | DAT_01d21458
    INC ECX                             ; 0050d908
    PUSH 0x5e83a4                       ; 0050d909 | = "Strafe right"
    MOV dword ptr [0x01d21458],ECX      ; 0050d90e | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d914
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d919 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d91f | DAT_01d21458
    ADD ESP,0x4                         ; 0050d925
    MOV ESI,EAX                         ; 0050d928
    ADD EBX,0x3c                        ; 0050d92a
    CMP EDI,0x20                        ; 0050d92d
    JL 0x0050d954                       ; 0050d930
        ;   XREF to: 0050d954 (CONDITIONAL_JUMP)  ; LAB_0050d954
    MOV EBP,0x5e827d                    ; 0050d932 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d937
    PUSH 0x5e828e                       ; 0050d93c | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d941 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d947 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d94c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d951
    MOV EAX,[0x01d21458]                ; 0050d954 | DAT_01d21458
        ;   Label: LAB_0050d954
    IMUL EDI,EAX,0x28                   ; 0050d959
    ADD EDI,0x1d214e0                   ; 0050d95c
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d962 | DAT_01d21470
    PUSH EDI                            ; 0050d969 | DAT_01d215a8
    MOV AL,byte ptr [ESI]               ; 0050d96a
        ;   Label: LAB_0050d96a
    MOV byte ptr [EDI],AL               ; 0050d96c | DAT_01d215a8 | DAT_01d215aa
    CMP AL,0x0                          ; 0050d96e
    JZ 0x0050d982                       ; 0050d970
        ;   XREF to: 0050d982 (CONDITIONAL_JUMP)  ; LAB_0050d982
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d972
    ADD ESI,0x2                         ; 0050d975
    MOV byte ptr [EDI + 0x1],AL         ; 0050d978 | DAT_01d215a9 | DAT_01d215ab
    ADD EDI,0x2                         ; 0050d97b
    CMP AL,0x0                          ; 0050d97e
    JNZ 0x0050d96a                      ; 0050d980
        ;   XREF to: 0050d96a (CONDITIONAL_JUMP)  ; LAB_0050d96a
    POP EDI                             ; 0050d982
        ;   Label: LAB_0050d982
    MOV ECX,dword ptr [0x01d21458]      ; 0050d983 | DAT_01d21458
    INC ECX                             ; 0050d989
    PUSH 0x5e83b1                       ; 0050d98a | = "Turn left"
    MOV dword ptr [0x01d21458],ECX      ; 0050d98f | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050d995
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050d99a | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050d9a0 | DAT_01d21458
    ADD ESP,0x4                         ; 0050d9a6
    MOV ESI,EAX                         ; 0050d9a9
    ADD EBX,0x44                        ; 0050d9ab
    CMP EDI,0x20                        ; 0050d9ae
    JL 0x0050d9d5                       ; 0050d9b1
        ;   XREF to: 0050d9d5 (CONDITIONAL_JUMP)  ; LAB_0050d9d5
    MOV EBP,0x5e827d                    ; 0050d9b3 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050d9b8
    PUSH 0x5e828e                       ; 0050d9bd | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050d9c2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050d9c8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050d9cd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050d9d2
    MOV EAX,[0x01d21458]                ; 0050d9d5 | DAT_01d21458
        ;   Label: LAB_0050d9d5
    IMUL EDI,EAX,0x28                   ; 0050d9da
    ADD EDI,0x1d214e0                   ; 0050d9dd
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050d9e3 | DAT_01d21474
    PUSH EDI                            ; 0050d9ea | DAT_01d215d0
    MOV AL,byte ptr [ESI]               ; 0050d9eb
        ;   Label: LAB_0050d9eb
    MOV byte ptr [EDI],AL               ; 0050d9ed | DAT_01d215d0 | DAT_01d215d2
    CMP AL,0x0                          ; 0050d9ef
    JZ 0x0050da03                       ; 0050d9f1
        ;   XREF to: 0050da03 (CONDITIONAL_JUMP)  ; LAB_0050da03
    MOV AL,byte ptr [ESI + 0x1]         ; 0050d9f3
    ADD ESI,0x2                         ; 0050d9f6
    MOV byte ptr [EDI + 0x1],AL         ; 0050d9f9 | DAT_01d215d1 | DAT_01d215d3
    ADD EDI,0x2                         ; 0050d9fc
    CMP AL,0x0                          ; 0050d9ff
    JNZ 0x0050d9eb                      ; 0050da01
        ;   XREF to: 0050d9eb (CONDITIONAL_JUMP)  ; LAB_0050d9eb
    POP EDI                             ; 0050da03
        ;   Label: LAB_0050da03
    MOV ECX,dword ptr [0x01d21458]      ; 0050da04 | DAT_01d21458
    INC ECX                             ; 0050da0a
    PUSH 0x5e83bb                       ; 0050da0b | = "Turn right"
    MOV dword ptr [0x01d21458],ECX      ; 0050da10 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050da16
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050da1b | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050da21 | DAT_01d21458
    ADD ESP,0x4                         ; 0050da27
    MOV ESI,EAX                         ; 0050da2a
    ADD EBX,0x40                        ; 0050da2c
    CMP EDI,0x20                        ; 0050da2f
    JL 0x0050da56                       ; 0050da32
        ;   XREF to: 0050da56 (CONDITIONAL_JUMP)  ; LAB_0050da56
    MOV EBP,0x5e827d                    ; 0050da34 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050da39
    PUSH 0x5e828e                       ; 0050da3e | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050da43 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050da49 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050da4e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050da53
    MOV EAX,[0x01d21458]                ; 0050da56 | DAT_01d21458
        ;   Label: LAB_0050da56
    IMUL EDI,EAX,0x28                   ; 0050da5b
    ADD EDI,0x1d214e0                   ; 0050da5e
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050da64 | DAT_01d21478
    PUSH EDI                            ; 0050da6b | DAT_01d215f8
    MOV AL,byte ptr [ESI]               ; 0050da6c
        ;   Label: LAB_0050da6c
    MOV byte ptr [EDI],AL               ; 0050da6e | DAT_01d215f8 | DAT_01d215fa
    CMP AL,0x0                          ; 0050da70
    JZ 0x0050da84                       ; 0050da72
        ;   XREF to: 0050da84 (CONDITIONAL_JUMP)  ; LAB_0050da84
    MOV AL,byte ptr [ESI + 0x1]         ; 0050da74
    ADD ESI,0x2                         ; 0050da77
    MOV byte ptr [EDI + 0x1],AL         ; 0050da7a | DAT_01d215f9 | DAT_01d215fb
    ADD EDI,0x2                         ; 0050da7d
    CMP AL,0x0                          ; 0050da80
    JNZ 0x0050da6c                      ; 0050da82
        ;   XREF to: 0050da6c (CONDITIONAL_JUMP)  ; LAB_0050da6c
    POP EDI                             ; 0050da84
        ;   Label: LAB_0050da84
    MOV ECX,dword ptr [0x01d21458]      ; 0050da85 | DAT_01d21458
    INC ECX                             ; 0050da8b
    PUSH 0x5e83c6                       ; 0050da8c | = "Point up"
    MOV dword ptr [0x01d21458],ECX      ; 0050da91 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050da97
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050da9c | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050daa2 | DAT_01d21458
    ADD ESP,0x4                         ; 0050daa8
    MOV ESI,EAX                         ; 0050daab
    ADD EBX,0x74                        ; 0050daad
    CMP EDI,0x20                        ; 0050dab0
    JL 0x0050dad7                       ; 0050dab3
        ;   XREF to: 0050dad7 (CONDITIONAL_JUMP)  ; LAB_0050dad7
    MOV EBP,0x5e827d                    ; 0050dab5 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050daba
    PUSH 0x5e828e                       ; 0050dabf | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dac4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050daca | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dacf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dad4
    MOV EAX,[0x01d21458]                ; 0050dad7 | DAT_01d21458
        ;   Label: LAB_0050dad7
    IMUL EDI,EAX,0x28                   ; 0050dadc
    ADD EDI,0x1d214e0                   ; 0050dadf
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dae5 | DAT_01d2147c
    PUSH EDI                            ; 0050daec | DAT_01d21620
    MOV AL,byte ptr [ESI]               ; 0050daed
        ;   Label: LAB_0050daed
    MOV byte ptr [EDI],AL               ; 0050daef | DAT_01d21620 | DAT_01d21622
    CMP AL,0x0                          ; 0050daf1
    JZ 0x0050db05                       ; 0050daf3
        ;   XREF to: 0050db05 (CONDITIONAL_JUMP)  ; LAB_0050db05
    MOV AL,byte ptr [ESI + 0x1]         ; 0050daf5
    ADD ESI,0x2                         ; 0050daf8
    MOV byte ptr [EDI + 0x1],AL         ; 0050dafb | DAT_01d21621 | DAT_01d21623
    ADD EDI,0x2                         ; 0050dafe
    CMP AL,0x0                          ; 0050db01
    JNZ 0x0050daed                      ; 0050db03
        ;   XREF to: 0050daed (CONDITIONAL_JUMP)  ; LAB_0050daed
    POP EDI                             ; 0050db05
        ;   Label: LAB_0050db05
    MOV ECX,dword ptr [0x01d21458]      ; 0050db06 | DAT_01d21458
    INC ECX                             ; 0050db0c
    PUSH 0x5e83cf                       ; 0050db0d | = "Point down"
    MOV dword ptr [0x01d21458],ECX      ; 0050db12 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050db18
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EDX,dword ptr [0x0061d95c]      ; 0050db1d | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050db23 | DAT_01d21458
    ADD ESP,0x4                         ; 0050db29
    MOV ESI,EAX                         ; 0050db2c
    LEA EBX,[EDX + 0x78]                ; 0050db2e
    CMP EDI,0x20                        ; 0050db31
    JL 0x0050db58                       ; 0050db34
        ;   XREF to: 0050db58 (CONDITIONAL_JUMP)  ; LAB_0050db58
    MOV EBP,0x5e827d                    ; 0050db36 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050db3b
    PUSH 0x5e828e                       ; 0050db40 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050db45 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050db4b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050db50
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050db55
    MOV EAX,[0x01d21458]                ; 0050db58 | DAT_01d21458
        ;   Label: LAB_0050db58
    IMUL EDI,EAX,0x28                   ; 0050db5d
    ADD EDI,0x1d214e0                   ; 0050db60
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050db66 | DAT_01d21480
    PUSH EDI                            ; 0050db6d | DAT_01d21648
    MOV AL,byte ptr [ESI]               ; 0050db6e
        ;   Label: LAB_0050db6e
    MOV byte ptr [EDI],AL               ; 0050db70 | DAT_01d21648 | DAT_01d2164a
    CMP AL,0x0                          ; 0050db72
    JZ 0x0050db86                       ; 0050db74
        ;   XREF to: 0050db86 (CONDITIONAL_JUMP)  ; LAB_0050db86
    MOV AL,byte ptr [ESI + 0x1]         ; 0050db76
    ADD ESI,0x2                         ; 0050db79
    MOV byte ptr [EDI + 0x1],AL         ; 0050db7c | DAT_01d21649 | DAT_01d2164b
    ADD EDI,0x2                         ; 0050db7f
    CMP AL,0x0                          ; 0050db82
    JNZ 0x0050db6e                      ; 0050db84
        ;   XREF to: 0050db6e (CONDITIONAL_JUMP)  ; LAB_0050db6e
    POP EDI                             ; 0050db86
        ;   Label: LAB_0050db86
    MOV ECX,dword ptr [0x01d21458]      ; 0050db87 | DAT_01d21458
    INC ECX                             ; 0050db8d
    PUSH 0x5e83da                       ; 0050db8e | = "Quick turn"
    MOV dword ptr [0x01d21458],ECX      ; 0050db93 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050db99
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050db9e | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050dba4 | DAT_01d21458
    ADD ESP,0x4                         ; 0050dbaa
    MOV ESI,EAX                         ; 0050dbad
    ADD EBX,0x70                        ; 0050dbaf
    CMP EDI,0x20                        ; 0050dbb2
    JL 0x0050dbd9                       ; 0050dbb5
        ;   XREF to: 0050dbd9 (CONDITIONAL_JUMP)  ; LAB_0050dbd9
    MOV EBP,0x5e827d                    ; 0050dbb7 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dbbc
    PUSH 0x5e828e                       ; 0050dbc1 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dbc6 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050dbcc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dbd1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dbd6
    MOV EAX,[0x01d21458]                ; 0050dbd9 | DAT_01d21458
        ;   Label: LAB_0050dbd9
    IMUL EDI,EAX,0x28                   ; 0050dbde
    ADD EDI,0x1d214e0                   ; 0050dbe1
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dbe7 | DAT_01d21484
    PUSH EDI                            ; 0050dbee | DAT_01d21670
    MOV AL,byte ptr [ESI]               ; 0050dbef
        ;   Label: LAB_0050dbef
    MOV byte ptr [EDI],AL               ; 0050dbf1 | DAT_01d21670 | DAT_01d21672
    CMP AL,0x0                          ; 0050dbf3
    JZ 0x0050dc07                       ; 0050dbf5
        ;   XREF to: 0050dc07 (CONDITIONAL_JUMP)  ; LAB_0050dc07
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dbf7
    ADD ESI,0x2                         ; 0050dbfa
    MOV byte ptr [EDI + 0x1],AL         ; 0050dbfd | DAT_01d21671 | DAT_01d21673
    ADD EDI,0x2                         ; 0050dc00
    CMP AL,0x0                          ; 0050dc03
    JNZ 0x0050dbef                      ; 0050dc05
        ;   XREF to: 0050dbef (CONDITIONAL_JUMP)  ; LAB_0050dbef
    POP EDI                             ; 0050dc07
        ;   Label: LAB_0050dc07
    INC dword ptr [0x01d21458]          ; 0050dc08 | DAT_01d21458
    MOV EAX,[0x0061d95c]                ; 0050dc0e | g_CGamePtr
        ;   Label: LAB_0050dc0e
    CMP dword ptr [EAX + 0xac],0x0      ; 0050dc13 | g_CGameInstance.always_run
    JZ 0x0050e6f1                       ; 0050dc1a
        ;   XREF to: 0050e6f1 (CONDITIONAL_JUMP)  ; LAB_0050e6f1
    PUSH 0x5e83e5                       ; 0050dc20 | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dc25
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050dc25
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dc2a | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050dc30 | DAT_01d21458
    ADD ESP,0x4                         ; 0050dc36
    MOV ESI,EAX                         ; 0050dc39
    ADD EBX,0x30                        ; 0050dc3b
    CMP EDI,0x20                        ; 0050dc3e
    JL 0x0050dc65                       ; 0050dc41
        ;   XREF to: 0050dc65 (CONDITIONAL_JUMP)  ; LAB_0050dc65
    MOV EBP,0x5e827d                    ; 0050dc43 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dc48
    PUSH 0x5e828e                       ; 0050dc4d | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dc52 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050dc58 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dc5d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dc62
    MOV EAX,[0x01d21458]                ; 0050dc65 | DAT_01d21458
        ;   Label: LAB_0050dc65
    IMUL EDI,EAX,0x28                   ; 0050dc6a
    ADD EDI,0x1d214e0                   ; 0050dc6d
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dc73 | DAT_01d21488 | DAT_01d2145c
    PUSH EDI                            ; 0050dc7a
    MOV AL,byte ptr [ESI]               ; 0050dc7b
        ;   Label: LAB_0050dc7b
    MOV byte ptr [EDI],AL               ; 0050dc7d | DAT_01d21698
    CMP AL,0x0                          ; 0050dc7f
    JZ 0x0050dc93                       ; 0050dc81
        ;   XREF to: 0050dc93 (CONDITIONAL_JUMP)  ; LAB_0050dc93
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dc83
    ADD ESI,0x2                         ; 0050dc86
    MOV byte ptr [EDI + 0x1],AL         ; 0050dc89 | DAT_01d21699
    ADD EDI,0x2                         ; 0050dc8c
    CMP AL,0x0                          ; 0050dc8f
    JNZ 0x0050dc7b                      ; 0050dc91
        ;   XREF to: 0050dc7b (CONDITIONAL_JUMP)  ; LAB_0050dc7b
    POP EDI                             ; 0050dc93
        ;   Label: LAB_0050dc93
    INC dword ptr [0x01d21458]          ; 0050dc94 | DAT_01d21458
    PUSH 0x5e83ee                       ; 0050dc9a | = "Use item"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dc9f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dca4 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050dcaa | DAT_01d21458
    ADD ESP,0x4                         ; 0050dcb0
    MOV ESI,EAX                         ; 0050dcb3
    ADD EBX,0x4c                        ; 0050dcb5
    CMP EDI,0x20                        ; 0050dcb8
    JL 0x0050dcdf                       ; 0050dcbb
        ;   XREF to: 0050dcdf (CONDITIONAL_JUMP)  ; LAB_0050dcdf
    MOV EBP,0x5e827d                    ; 0050dcbd | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dcc2
    PUSH 0x5e828e                       ; 0050dcc7 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dccc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050dcd2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dcd7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dcdc
    MOV EAX,[0x01d21458]                ; 0050dcdf | DAT_01d21458
        ;   Label: LAB_0050dcdf
    IMUL EDI,EAX,0x28                   ; 0050dce4
    ADD EDI,0x1d214e0                   ; 0050dce7
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dced | DAT_01d2148c
    PUSH EDI                            ; 0050dcf4 | DAT_01d216c0
    MOV AL,byte ptr [ESI]               ; 0050dcf5
        ;   Label: LAB_0050dcf5
    MOV byte ptr [EDI],AL               ; 0050dcf7 | DAT_01d216c0 | DAT_01d216c2
    CMP AL,0x0                          ; 0050dcf9
    JZ 0x0050dd0d                       ; 0050dcfb
        ;   XREF to: 0050dd0d (CONDITIONAL_JUMP)  ; LAB_0050dd0d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dcfd
    ADD ESI,0x2                         ; 0050dd00
    MOV byte ptr [EDI + 0x1],AL         ; 0050dd03 | DAT_01d216c1 | DAT_01d216c3
    ADD EDI,0x2                         ; 0050dd06
    CMP AL,0x0                          ; 0050dd09
    JNZ 0x0050dcf5                      ; 0050dd0b
        ;   XREF to: 0050dcf5 (CONDITIONAL_JUMP)  ; LAB_0050dcf5
    POP EDI                             ; 0050dd0d
        ;   Label: LAB_0050dd0d
    MOV ECX,dword ptr [0x01d21458]      ; 0050dd0e | DAT_01d21458
    INC ECX                             ; 0050dd14
    PUSH 0x5e83f7                       ; 0050dd15 | = "Flashlight"
    MOV dword ptr [0x01d21458],ECX      ; 0050dd1a | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dd20
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dd25 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050dd2b | DAT_01d21458
    ADD ESP,0x4                         ; 0050dd31
    MOV ESI,EAX                         ; 0050dd34
    ADD EBX,0x50                        ; 0050dd36
    CMP EDI,0x20                        ; 0050dd39
    JL 0x0050dd60                       ; 0050dd3c
        ;   XREF to: 0050dd60 (CONDITIONAL_JUMP)  ; LAB_0050dd60
    MOV EBP,0x5e827d                    ; 0050dd3e | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dd43
    PUSH 0x5e828e                       ; 0050dd48 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dd4d | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050dd53 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dd58
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dd5d
    MOV EAX,[0x01d21458]                ; 0050dd60 | DAT_01d21458
        ;   Label: LAB_0050dd60
    IMUL EDI,EAX,0x28                   ; 0050dd65
    ADD EDI,0x1d214e0                   ; 0050dd68
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dd6e | DAT_01d21490
    PUSH EDI                            ; 0050dd75 | DAT_01d216e8
    MOV AL,byte ptr [ESI]               ; 0050dd76
        ;   Label: LAB_0050dd76
    MOV byte ptr [EDI],AL               ; 0050dd78 | DAT_01d216e8 | DAT_01d216ea
    CMP AL,0x0                          ; 0050dd7a
    JZ 0x0050dd8e                       ; 0050dd7c
        ;   XREF to: 0050dd8e (CONDITIONAL_JUMP)  ; LAB_0050dd8e
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dd7e
    ADD ESI,0x2                         ; 0050dd81
    MOV byte ptr [EDI + 0x1],AL         ; 0050dd84 | DAT_01d216e9 | DAT_01d216eb
    ADD EDI,0x2                         ; 0050dd87
    CMP AL,0x0                          ; 0050dd8a
    JNZ 0x0050dd76                      ; 0050dd8c
        ;   XREF to: 0050dd76 (CONDITIONAL_JUMP)  ; LAB_0050dd76
    POP EDI                             ; 0050dd8e
        ;   Label: LAB_0050dd8e
    MOV ECX,dword ptr [0x01d21458]      ; 0050dd8f | DAT_01d21458
    INC ECX                             ; 0050dd95
    PUSH 0x5e8402                       ; 0050dd96 | = "Night Vision"
    MOV dword ptr [0x01d21458],ECX      ; 0050dd9b | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dda1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dda6 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050ddac | DAT_01d21458
    ADD ESP,0x4                         ; 0050ddb2
    MOV ESI,EAX                         ; 0050ddb5
    ADD EBX,0x54                        ; 0050ddb7
    CMP EDI,0x20                        ; 0050ddba
    JL 0x0050dde1                       ; 0050ddbd
        ;   XREF to: 0050dde1 (CONDITIONAL_JUMP)  ; LAB_0050dde1
    MOV EBP,0x5e827d                    ; 0050ddbf | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050ddc4
    PUSH 0x5e828e                       ; 0050ddc9 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050ddce | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050ddd4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050ddd9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050ddde
    MOV EAX,[0x01d21458]                ; 0050dde1 | DAT_01d21458
        ;   Label: LAB_0050dde1
    IMUL EDI,EAX,0x28                   ; 0050dde6
    ADD EDI,0x1d214e0                   ; 0050dde9
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050ddef | DAT_01d21494
    PUSH EDI                            ; 0050ddf6 | DAT_01d21710
    MOV AL,byte ptr [ESI]               ; 0050ddf7
        ;   Label: LAB_0050ddf7
    MOV byte ptr [EDI],AL               ; 0050ddf9 | DAT_01d21710 | DAT_01d21712
    CMP AL,0x0                          ; 0050ddfb
    JZ 0x0050de0f                       ; 0050ddfd
        ;   XREF to: 0050de0f (CONDITIONAL_JUMP)  ; LAB_0050de0f
    MOV AL,byte ptr [ESI + 0x1]         ; 0050ddff
    ADD ESI,0x2                         ; 0050de02
    MOV byte ptr [EDI + 0x1],AL         ; 0050de05 | DAT_01d21711 | DAT_01d21713
    ADD EDI,0x2                         ; 0050de08
    CMP AL,0x0                          ; 0050de0b
    JNZ 0x0050ddf7                      ; 0050de0d
        ;   XREF to: 0050ddf7 (CONDITIONAL_JUMP)  ; LAB_0050ddf7
    POP EDI                             ; 0050de0f
        ;   Label: LAB_0050de0f
    MOV ECX,dword ptr [0x01d21458]      ; 0050de10 | DAT_01d21458
    INC ECX                             ; 0050de16
    PUSH 0x5e840f                       ; 0050de17 | = "Journal"
    MOV dword ptr [0x01d21458],ECX      ; 0050de1c | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050de22
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050de27 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050de2d | DAT_01d21458
    ADD ESP,0x4                         ; 0050de33
    MOV ESI,EAX                         ; 0050de36
    ADD EBX,0x58                        ; 0050de38
    CMP EDI,0x20                        ; 0050de3b
    JL 0x0050de62                       ; 0050de3e
        ;   XREF to: 0050de62 (CONDITIONAL_JUMP)  ; LAB_0050de62
    MOV EBP,0x5e827d                    ; 0050de40 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050de45
    PUSH 0x5e828e                       ; 0050de4a | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050de4f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050de55 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050de5a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050de5f
    MOV EAX,[0x01d21458]                ; 0050de62 | DAT_01d21458
        ;   Label: LAB_0050de62
    IMUL EDI,EAX,0x28                   ; 0050de67
    ADD EDI,0x1d214e0                   ; 0050de6a
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050de70 | DAT_01d21498
    PUSH EDI                            ; 0050de77 | DAT_01d21738
    MOV AL,byte ptr [ESI]               ; 0050de78
        ;   Label: LAB_0050de78
    MOV byte ptr [EDI],AL               ; 0050de7a | DAT_01d21738 | DAT_01d2173a
    CMP AL,0x0                          ; 0050de7c
    JZ 0x0050de90                       ; 0050de7e
        ;   XREF to: 0050de90 (CONDITIONAL_JUMP)  ; LAB_0050de90
    MOV AL,byte ptr [ESI + 0x1]         ; 0050de80
    ADD ESI,0x2                         ; 0050de83
    MOV byte ptr [EDI + 0x1],AL         ; 0050de86 | DAT_01d21739 | DAT_01d2173b
    ADD EDI,0x2                         ; 0050de89
    CMP AL,0x0                          ; 0050de8c
    JNZ 0x0050de78                      ; 0050de8e
        ;   XREF to: 0050de78 (CONDITIONAL_JUMP)  ; LAB_0050de78
    POP EDI                             ; 0050de90
        ;   Label: LAB_0050de90
    MOV ECX,dword ptr [0x01d21458]      ; 0050de91 | DAT_01d21458
    INC ECX                             ; 0050de97
    PUSH 0x5e8417                       ; 0050de98 | = "Map"
    MOV dword ptr [0x01d21458],ECX      ; 0050de9d | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dea3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dea8 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050deae | DAT_01d21458
    ADD ESP,0x4                         ; 0050deb4
    MOV ESI,EAX                         ; 0050deb7
    ADD EBX,0x5c                        ; 0050deb9
    CMP EDI,0x20                        ; 0050debc
    JL 0x0050dee3                       ; 0050debf
        ;   XREF to: 0050dee3 (CONDITIONAL_JUMP)  ; LAB_0050dee3
    MOV EBP,0x5e827d                    ; 0050dec1 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dec6
    PUSH 0x5e828e                       ; 0050decb | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050ded0 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050ded6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dedb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dee0
    MOV EAX,[0x01d21458]                ; 0050dee3 | DAT_01d21458
        ;   Label: LAB_0050dee3
    IMUL EDI,EAX,0x28                   ; 0050dee8
    ADD EDI,0x1d214e0                   ; 0050deeb
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050def1 | DAT_01d2149c
    PUSH EDI                            ; 0050def8 | DAT_01d21760
    MOV AL,byte ptr [ESI]               ; 0050def9
        ;   Label: LAB_0050def9
    MOV byte ptr [EDI],AL               ; 0050defb | DAT_01d21760 | DAT_01d21762
    CMP AL,0x0                          ; 0050defd
    JZ 0x0050df11                       ; 0050deff
        ;   XREF to: 0050df11 (CONDITIONAL_JUMP)  ; LAB_0050df11
    MOV AL,byte ptr [ESI + 0x1]         ; 0050df01
    ADD ESI,0x2                         ; 0050df04
    MOV byte ptr [EDI + 0x1],AL         ; 0050df07 | DAT_01d21761 | DAT_01d21763
    ADD EDI,0x2                         ; 0050df0a
    CMP AL,0x0                          ; 0050df0d
    JNZ 0x0050def9                      ; 0050df0f
        ;   XREF to: 0050def9 (CONDITIONAL_JUMP)  ; LAB_0050def9
    POP EDI                             ; 0050df11
        ;   Label: LAB_0050df11
    MOV ECX,dword ptr [0x01d21458]      ; 0050df12 | DAT_01d21458
    INC ECX                             ; 0050df18
    PUSH 0x5e841b                       ; 0050df19 | = "Compass"
    MOV dword ptr [0x01d21458],ECX      ; 0050df1e | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050df24
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050df29 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050df2f | DAT_01d21458
    ADD ESP,0x4                         ; 0050df35
    MOV ESI,EAX                         ; 0050df38
    ADD EBX,0x60                        ; 0050df3a
    CMP EDI,0x20                        ; 0050df3d
    JL 0x0050df64                       ; 0050df40
        ;   XREF to: 0050df64 (CONDITIONAL_JUMP)  ; LAB_0050df64
    MOV EBP,0x5e827d                    ; 0050df42 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050df47
    PUSH 0x5e828e                       ; 0050df4c | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050df51 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050df57 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050df5c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050df61
    MOV EAX,[0x01d21458]                ; 0050df64 | DAT_01d21458
        ;   Label: LAB_0050df64
    IMUL EDI,EAX,0x28                   ; 0050df69
    ADD EDI,0x1d214e0                   ; 0050df6c
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050df72 | DAT_01d214a0
    PUSH EDI                            ; 0050df79 | DAT_01d21788
    MOV AL,byte ptr [ESI]               ; 0050df7a
        ;   Label: LAB_0050df7a
    MOV byte ptr [EDI],AL               ; 0050df7c | DAT_01d21788 | DAT_01d2178a
    CMP AL,0x0                          ; 0050df7e
    JZ 0x0050df92                       ; 0050df80
        ;   XREF to: 0050df92 (CONDITIONAL_JUMP)  ; LAB_0050df92
    MOV AL,byte ptr [ESI + 0x1]         ; 0050df82
    ADD ESI,0x2                         ; 0050df85
    MOV byte ptr [EDI + 0x1],AL         ; 0050df88 | DAT_01d21789 | DAT_01d2178b
    ADD EDI,0x2                         ; 0050df8b
    CMP AL,0x0                          ; 0050df8e
    JNZ 0x0050df7a                      ; 0050df90
        ;   XREF to: 0050df7a (CONDITIONAL_JUMP)  ; LAB_0050df7a
    POP EDI                             ; 0050df92
        ;   Label: LAB_0050df92
    MOV ECX,dword ptr [0x01d21458]      ; 0050df93 | DAT_01d21458
    INC ECX                             ; 0050df99
    PUSH 0x5e8423                       ; 0050df9a | = "SPS"
    MOV dword ptr [0x01d21458],ECX      ; 0050df9f | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050dfa5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050dfaa | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050dfb0 | DAT_01d21458
    ADD ESP,0x4                         ; 0050dfb6
    MOV ESI,EAX                         ; 0050dfb9
    ADD EBX,0x64                        ; 0050dfbb
    CMP EDI,0x20                        ; 0050dfbe
    JL 0x0050dfe5                       ; 0050dfc1
        ;   XREF to: 0050dfe5 (CONDITIONAL_JUMP)  ; LAB_0050dfe5
    MOV EBP,0x5e827d                    ; 0050dfc3 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050dfc8
    PUSH 0x5e828e                       ; 0050dfcd | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050dfd2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050dfd8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050dfdd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050dfe2
    MOV EAX,[0x01d21458]                ; 0050dfe5 | DAT_01d21458
        ;   Label: LAB_0050dfe5
    IMUL EDI,EAX,0x28                   ; 0050dfea
    ADD EDI,0x1d214e0                   ; 0050dfed
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050dff3 | DAT_01d214a4
    PUSH EDI                            ; 0050dffa | DAT_01d217b0
    MOV AL,byte ptr [ESI]               ; 0050dffb
        ;   Label: LAB_0050dffb
    MOV byte ptr [EDI],AL               ; 0050dffd | DAT_01d217b0 | DAT_01d217b2
    CMP AL,0x0                          ; 0050dfff
    JZ 0x0050e013                       ; 0050e001
        ;   XREF to: 0050e013 (CONDITIONAL_JUMP)  ; LAB_0050e013
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e003
    ADD ESI,0x2                         ; 0050e006
    MOV byte ptr [EDI + 0x1],AL         ; 0050e009 | DAT_01d217b1 | DAT_01d217b3
    ADD EDI,0x2                         ; 0050e00c
    CMP AL,0x0                          ; 0050e00f
    JNZ 0x0050dffb                      ; 0050e011
        ;   XREF to: 0050dffb (CONDITIONAL_JUMP)  ; LAB_0050dffb
    POP EDI                             ; 0050e013
        ;   Label: LAB_0050e013
    MOV ECX,dword ptr [0x01d21458]      ; 0050e014 | DAT_01d21458
    INC ECX                             ; 0050e01a
    PUSH 0x5e8427                       ; 0050e01b | = "Draw"
    MOV dword ptr [0x01d21458],ECX      ; 0050e020 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e026
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e02b | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e031 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e037
    MOV ESI,EAX                         ; 0050e03a
    ADD EBX,0x68                        ; 0050e03c
    CMP EDI,0x20                        ; 0050e03f
    JL 0x0050e066                       ; 0050e042
        ;   XREF to: 0050e066 (CONDITIONAL_JUMP)  ; LAB_0050e066
    MOV EBP,0x5e827d                    ; 0050e044 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e049
    PUSH 0x5e828e                       ; 0050e04e | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e053 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e059 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e05e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e063
    MOV EAX,[0x01d21458]                ; 0050e066 | DAT_01d21458
        ;   Label: LAB_0050e066
    IMUL EDI,EAX,0x28                   ; 0050e06b
    ADD EDI,0x1d214e0                   ; 0050e06e
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e074 | DAT_01d214a8
    PUSH EDI                            ; 0050e07b | DAT_01d217d8
    MOV AL,byte ptr [ESI]               ; 0050e07c
        ;   Label: LAB_0050e07c
    MOV byte ptr [EDI],AL               ; 0050e07e | DAT_01d217d8 | DAT_01d217da
    CMP AL,0x0                          ; 0050e080
    JZ 0x0050e094                       ; 0050e082
        ;   XREF to: 0050e094 (CONDITIONAL_JUMP)  ; LAB_0050e094
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e084
    ADD ESI,0x2                         ; 0050e087
    MOV byte ptr [EDI + 0x1],AL         ; 0050e08a | DAT_01d217d9 | DAT_01d217db
    ADD EDI,0x2                         ; 0050e08d
    CMP AL,0x0                          ; 0050e090
    JNZ 0x0050e07c                      ; 0050e092
        ;   XREF to: 0050e07c (CONDITIONAL_JUMP)  ; LAB_0050e07c
    POP EDI                             ; 0050e094
        ;   Label: LAB_0050e094
    MOV ECX,dword ptr [0x01d21458]      ; 0050e095 | DAT_01d21458
    INC ECX                             ; 0050e09b
    PUSH 0x5e842c                       ; 0050e09c | = "Select pistol weapons"
    MOV dword ptr [0x01d21458],ECX      ; 0050e0a1 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e0a7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e0ac | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e0b2 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e0b8
    MOV ESI,EAX                         ; 0050e0bb
    ADD EBX,0x7c                        ; 0050e0bd
    CMP EDI,0x20                        ; 0050e0c0
    JL 0x0050e0e7                       ; 0050e0c3
        ;   XREF to: 0050e0e7 (CONDITIONAL_JUMP)  ; LAB_0050e0e7
    MOV EBP,0x5e827d                    ; 0050e0c5 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e0ca
    PUSH 0x5e828e                       ; 0050e0cf | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e0d4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e0da | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e0df
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e0e4
    MOV EAX,[0x01d21458]                ; 0050e0e7 | DAT_01d21458
        ;   Label: LAB_0050e0e7
    IMUL EDI,EAX,0x28                   ; 0050e0ec
    ADD EDI,0x1d214e0                   ; 0050e0ef
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e0f5 | DAT_01d214ac
    PUSH EDI                            ; 0050e0fc | DAT_01d21800
    MOV AL,byte ptr [ESI]               ; 0050e0fd
        ;   Label: LAB_0050e0fd
    MOV byte ptr [EDI],AL               ; 0050e0ff | DAT_01d21800 | DAT_01d21802
    CMP AL,0x0                          ; 0050e101
    JZ 0x0050e115                       ; 0050e103
        ;   XREF to: 0050e115 (CONDITIONAL_JUMP)  ; LAB_0050e115
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e105
    ADD ESI,0x2                         ; 0050e108
    MOV byte ptr [EDI + 0x1],AL         ; 0050e10b | DAT_01d21801 | DAT_01d21803
    ADD EDI,0x2                         ; 0050e10e
    CMP AL,0x0                          ; 0050e111
    JNZ 0x0050e0fd                      ; 0050e113
        ;   XREF to: 0050e0fd (CONDITIONAL_JUMP)  ; LAB_0050e0fd
    POP EDI                             ; 0050e115
        ;   Label: LAB_0050e115
    MOV ECX,dword ptr [0x01d21458]      ; 0050e116 | DAT_01d21458
    INC ECX                             ; 0050e11c
    PUSH 0x5e8442                       ; 0050e11d | = "Select assault weapons"
    MOV dword ptr [0x01d21458],ECX      ; 0050e122 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e128
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e12d | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e133 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e139
    MOV ESI,EAX                         ; 0050e13c
    ADD EBX,0x80                        ; 0050e13e
    CMP EDI,0x20                        ; 0050e144
    JL 0x0050e16b                       ; 0050e147
        ;   XREF to: 0050e16b (CONDITIONAL_JUMP)  ; LAB_0050e16b
    MOV EBP,0x5e827d                    ; 0050e149 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e14e
    PUSH 0x5e828e                       ; 0050e153 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e158 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e15e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e163
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e168
    MOV EAX,[0x01d21458]                ; 0050e16b | DAT_01d21458
        ;   Label: LAB_0050e16b
    IMUL EDI,EAX,0x28                   ; 0050e170
    ADD EDI,0x1d214e0                   ; 0050e173
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e179 | DAT_01d214b0
    PUSH EDI                            ; 0050e180 | DAT_01d21828
    MOV AL,byte ptr [ESI]               ; 0050e181
        ;   Label: LAB_0050e181
    MOV byte ptr [EDI],AL               ; 0050e183 | DAT_01d21828 | DAT_01d2182a
    CMP AL,0x0                          ; 0050e185
    JZ 0x0050e199                       ; 0050e187
        ;   XREF to: 0050e199 (CONDITIONAL_JUMP)  ; LAB_0050e199
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e189
    ADD ESI,0x2                         ; 0050e18c
    MOV byte ptr [EDI + 0x1],AL         ; 0050e18f | DAT_01d21829 | DAT_01d2182b
    ADD EDI,0x2                         ; 0050e192
    CMP AL,0x0                          ; 0050e195
    JNZ 0x0050e181                      ; 0050e197
        ;   XREF to: 0050e181 (CONDITIONAL_JUMP)  ; LAB_0050e181
    POP EDI                             ; 0050e199
        ;   Label: LAB_0050e199
    MOV ECX,dword ptr [0x01d21458]      ; 0050e19a | DAT_01d21458
    INC ECX                             ; 0050e1a0
    PUSH 0x5e8459                       ; 0050e1a1 | = "Select energy weapons"
    MOV dword ptr [0x01d21458],ECX      ; 0050e1a6 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e1ac
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e1b1 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e1b7 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e1bd
    MOV ESI,EAX                         ; 0050e1c0
    ADD EBX,0x84                        ; 0050e1c2
    CMP EDI,0x20                        ; 0050e1c8
    JL 0x0050e1ef                       ; 0050e1cb
        ;   XREF to: 0050e1ef (CONDITIONAL_JUMP)  ; LAB_0050e1ef
    MOV EBP,0x5e827d                    ; 0050e1cd | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e1d2
    PUSH 0x5e828e                       ; 0050e1d7 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e1dc | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e1e2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e1e7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e1ec
    MOV EAX,[0x01d21458]                ; 0050e1ef | DAT_01d21458
        ;   Label: LAB_0050e1ef
    IMUL EDI,EAX,0x28                   ; 0050e1f4
    ADD EDI,0x1d214e0                   ; 0050e1f7
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e1fd | DAT_01d214b4
    PUSH EDI                            ; 0050e204 | DAT_01d21850
    MOV AL,byte ptr [ESI]               ; 0050e205
        ;   Label: LAB_0050e205
    MOV byte ptr [EDI],AL               ; 0050e207 | DAT_01d21850 | DAT_01d21852
    CMP AL,0x0                          ; 0050e209
    JZ 0x0050e21d                       ; 0050e20b
        ;   XREF to: 0050e21d (CONDITIONAL_JUMP)  ; LAB_0050e21d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e20d
    ADD ESI,0x2                         ; 0050e210
    MOV byte ptr [EDI + 0x1],AL         ; 0050e213 | DAT_01d21851 | DAT_01d21853
    ADD EDI,0x2                         ; 0050e216
    CMP AL,0x0                          ; 0050e219
    JNZ 0x0050e205                      ; 0050e21b
        ;   XREF to: 0050e205 (CONDITIONAL_JUMP)  ; LAB_0050e205
    POP EDI                             ; 0050e21d
        ;   Label: LAB_0050e21d
    MOV ECX,dword ptr [0x01d21458]      ; 0050e21e | DAT_01d21458
    INC ECX                             ; 0050e224
    PUSH 0x5e846f                       ; 0050e225 | = "Select melee weapons"
    MOV dword ptr [0x01d21458],ECX      ; 0050e22a | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e230
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e235 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e23b | DAT_01d21458
    ADD ESP,0x4                         ; 0050e241
    MOV ESI,EAX                         ; 0050e244
    ADD EBX,0x8c                        ; 0050e246
    CMP EDI,0x20                        ; 0050e24c
    JL 0x0050e273                       ; 0050e24f
        ;   XREF to: 0050e273 (CONDITIONAL_JUMP)  ; LAB_0050e273
    MOV EBP,0x5e827d                    ; 0050e251 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e256
    PUSH 0x5e828e                       ; 0050e25b | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e260 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e266 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e26b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e270
    MOV EAX,[0x01d21458]                ; 0050e273 | DAT_01d21458
        ;   Label: LAB_0050e273
    IMUL EDI,EAX,0x28                   ; 0050e278
    ADD EDI,0x1d214e0                   ; 0050e27b
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e281 | DAT_01d214b8
    PUSH EDI                            ; 0050e288 | DAT_01d21878
    MOV AL,byte ptr [ESI]               ; 0050e289
        ;   Label: LAB_0050e289
    MOV byte ptr [EDI],AL               ; 0050e28b | DAT_01d21878 | DAT_01d2187a
    CMP AL,0x0                          ; 0050e28d
    JZ 0x0050e2a1                       ; 0050e28f
        ;   XREF to: 0050e2a1 (CONDITIONAL_JUMP)  ; LAB_0050e2a1
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e291
    ADD ESI,0x2                         ; 0050e294
    MOV byte ptr [EDI + 0x1],AL         ; 0050e297 | DAT_01d21879 | DAT_01d2187b
    ADD EDI,0x2                         ; 0050e29a
    CMP AL,0x0                          ; 0050e29d
    JNZ 0x0050e289                      ; 0050e29f
        ;   XREF to: 0050e289 (CONDITIONAL_JUMP)  ; LAB_0050e289
    POP EDI                             ; 0050e2a1
        ;   Label: LAB_0050e2a1
    MOV ECX,dword ptr [0x01d21458]      ; 0050e2a2 | DAT_01d21458
    INC ECX                             ; 0050e2a8
    PUSH 0x5e8484                       ; 0050e2a9 | = "Next weapon"
    MOV dword ptr [0x01d21458],ECX      ; 0050e2ae | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e2b4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e2b9 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e2bf | DAT_01d21458
    ADD ESP,0x4                         ; 0050e2c5
    MOV ESI,EAX                         ; 0050e2c8
    ADD EBX,0x90                        ; 0050e2ca
    CMP EDI,0x20                        ; 0050e2d0
    JL 0x0050e2f7                       ; 0050e2d3
        ;   XREF to: 0050e2f7 (CONDITIONAL_JUMP)  ; LAB_0050e2f7
    MOV EBP,0x5e827d                    ; 0050e2d5 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e2da
    PUSH 0x5e828e                       ; 0050e2df | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e2e4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e2ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e2ef
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e2f4
    MOV EAX,[0x01d21458]                ; 0050e2f7 | DAT_01d21458
        ;   Label: LAB_0050e2f7
    IMUL EDI,EAX,0x28                   ; 0050e2fc
    ADD EDI,0x1d214e0                   ; 0050e2ff
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e305 | DAT_01d214bc
    PUSH EDI                            ; 0050e30c | DAT_01d218a0
    MOV AL,byte ptr [ESI]               ; 0050e30d
        ;   Label: LAB_0050e30d
    MOV byte ptr [EDI],AL               ; 0050e30f | DAT_01d218a0 | DAT_01d218a2
    CMP AL,0x0                          ; 0050e311
    JZ 0x0050e325                       ; 0050e313
        ;   XREF to: 0050e325 (CONDITIONAL_JUMP)  ; LAB_0050e325
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e315
    ADD ESI,0x2                         ; 0050e318
    MOV byte ptr [EDI + 0x1],AL         ; 0050e31b | DAT_01d218a1 | DAT_01d218a3
    ADD EDI,0x2                         ; 0050e31e
    CMP AL,0x0                          ; 0050e321
    JNZ 0x0050e30d                      ; 0050e323
        ;   XREF to: 0050e30d (CONDITIONAL_JUMP)  ; LAB_0050e30d
    POP EDI                             ; 0050e325
        ;   Label: LAB_0050e325
    MOV ECX,dword ptr [0x01d21458]      ; 0050e326 | DAT_01d21458
    INC ECX                             ; 0050e32c
    PUSH 0x5e8490                       ; 0050e32d | = "Previous weapon"
    MOV dword ptr [0x01d21458],ECX      ; 0050e332 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e338
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e33d | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e343 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e349
    MOV ESI,EAX                         ; 0050e34c
    ADD EBX,0x94                        ; 0050e34e
    CMP EDI,0x20                        ; 0050e354
    JL 0x0050e37b                       ; 0050e357
        ;   XREF to: 0050e37b (CONDITIONAL_JUMP)  ; LAB_0050e37b
    MOV EBP,0x5e827d                    ; 0050e359 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e35e
    PUSH 0x5e828e                       ; 0050e363 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e368 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e36e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e373
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e378
    MOV EAX,[0x01d21458]                ; 0050e37b | DAT_01d21458
        ;   Label: LAB_0050e37b
    IMUL EDI,EAX,0x28                   ; 0050e380
    ADD EDI,0x1d214e0                   ; 0050e383
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e389 | DAT_01d214c0
    PUSH EDI                            ; 0050e390 | DAT_01d218c8
    MOV AL,byte ptr [ESI]               ; 0050e391
        ;   Label: LAB_0050e391
    MOV byte ptr [EDI],AL               ; 0050e393 | DAT_01d218c8 | DAT_01d218ca
    CMP AL,0x0                          ; 0050e395
    JZ 0x0050e3a9                       ; 0050e397
        ;   XREF to: 0050e3a9 (CONDITIONAL_JUMP)  ; LAB_0050e3a9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e399
    ADD ESI,0x2                         ; 0050e39c
    MOV byte ptr [EDI + 0x1],AL         ; 0050e39f | DAT_01d218c9 | DAT_01d218cb
    ADD EDI,0x2                         ; 0050e3a2
    CMP AL,0x0                          ; 0050e3a5
    JNZ 0x0050e391                      ; 0050e3a7
        ;   XREF to: 0050e391 (CONDITIONAL_JUMP)  ; LAB_0050e391
    POP EDI                             ; 0050e3a9
        ;   Label: LAB_0050e3a9
    MOV ECX,dword ptr [0x01d21458]      ; 0050e3aa | DAT_01d21458
    INC ECX                             ; 0050e3b0
    PUSH 0x5e84a0                       ; 0050e3b1 | = "Next item"
    MOV dword ptr [0x01d21458],ECX      ; 0050e3b6 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e3bc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EDX,dword ptr [0x0061d95c]      ; 0050e3c1 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e3c7 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e3cd
    MOV ESI,EAX                         ; 0050e3d0
    LEA EBX,[EDX + 0x98]                ; 0050e3d2
    CMP EDI,0x20                        ; 0050e3d8
    JL 0x0050e3ff                       ; 0050e3db
        ;   XREF to: 0050e3ff (CONDITIONAL_JUMP)  ; LAB_0050e3ff
    MOV EBP,0x5e827d                    ; 0050e3dd | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e3e2
    PUSH 0x5e828e                       ; 0050e3e7 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e3ec | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e3f2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e3f7
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e3fc
    MOV EAX,[0x01d21458]                ; 0050e3ff | DAT_01d21458
        ;   Label: LAB_0050e3ff
    IMUL EDI,EAX,0x28                   ; 0050e404
    ADD EDI,0x1d214e0                   ; 0050e407
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e40d | DAT_01d214c4
    PUSH EDI                            ; 0050e414 | DAT_01d218f0
    MOV AL,byte ptr [ESI]               ; 0050e415
        ;   Label: LAB_0050e415
    MOV byte ptr [EDI],AL               ; 0050e417 | DAT_01d218f0 | DAT_01d218f2
    CMP AL,0x0                          ; 0050e419
    JZ 0x0050e42d                       ; 0050e41b
        ;   XREF to: 0050e42d (CONDITIONAL_JUMP)  ; LAB_0050e42d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e41d
    ADD ESI,0x2                         ; 0050e420
    MOV byte ptr [EDI + 0x1],AL         ; 0050e423 | DAT_01d218f1 | DAT_01d218f3
    ADD EDI,0x2                         ; 0050e426
    CMP AL,0x0                          ; 0050e429
    JNZ 0x0050e415                      ; 0050e42b
        ;   XREF to: 0050e415 (CONDITIONAL_JUMP)  ; LAB_0050e415
    POP EDI                             ; 0050e42d
        ;   Label: LAB_0050e42d
    MOV ECX,dword ptr [0x01d21458]      ; 0050e42e | DAT_01d21458
    INC ECX                             ; 0050e434
    PUSH 0x5e84aa                       ; 0050e435 | = "Previous item"
    MOV dword ptr [0x01d21458],ECX      ; 0050e43a | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e440
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EDX,dword ptr [0x0061d95c]      ; 0050e445 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e44b | DAT_01d21458
    ADD ESP,0x4                         ; 0050e451
    MOV ESI,EAX                         ; 0050e454
    LEA EBX,[EDX + 0x9c]                ; 0050e456
    CMP EDI,0x20                        ; 0050e45c
    JL 0x0050e483                       ; 0050e45f
        ;   XREF to: 0050e483 (CONDITIONAL_JUMP)  ; LAB_0050e483
    MOV EBP,0x5e827d                    ; 0050e461 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e466
    PUSH 0x5e828e                       ; 0050e46b | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e470 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e476 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e47b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e480
    MOV EAX,[0x01d21458]                ; 0050e483 | DAT_01d21458
        ;   Label: LAB_0050e483
    IMUL EDI,EAX,0x28                   ; 0050e488
    ADD EDI,0x1d214e0                   ; 0050e48b
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e491 | DAT_01d214c8
    PUSH EDI                            ; 0050e498 | DAT_01d21918
    MOV AL,byte ptr [ESI]               ; 0050e499
        ;   Label: LAB_0050e499
    MOV byte ptr [EDI],AL               ; 0050e49b | DAT_01d21918 | DAT_01d2191a
    CMP AL,0x0                          ; 0050e49d
    JZ 0x0050e4b1                       ; 0050e49f
        ;   XREF to: 0050e4b1 (CONDITIONAL_JUMP)  ; LAB_0050e4b1
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e4a1
    ADD ESI,0x2                         ; 0050e4a4
    MOV byte ptr [EDI + 0x1],AL         ; 0050e4a7 | DAT_01d21919 | DAT_01d2191b
    ADD EDI,0x2                         ; 0050e4aa
    CMP AL,0x0                          ; 0050e4ad
    JNZ 0x0050e499                      ; 0050e4af
        ;   XREF to: 0050e499 (CONDITIONAL_JUMP)  ; LAB_0050e499
    POP EDI                             ; 0050e4b1
        ;   Label: LAB_0050e4b1
    MOV ECX,dword ptr [0x01d21458]      ; 0050e4b2 | DAT_01d21458
    INC ECX                             ; 0050e4b8
    PUSH 0x5e84b8                       ; 0050e4b9 | = "Item description"
    MOV dword ptr [0x01d21458],ECX      ; 0050e4be | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e4c4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e4c9 | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e4cf | DAT_01d21458
    ADD ESP,0x4                         ; 0050e4d5
    MOV ESI,EAX                         ; 0050e4d8
    ADD EBX,0xa0                        ; 0050e4da
    CMP EDI,0x20                        ; 0050e4e0
    JL 0x0050e507                       ; 0050e4e3
        ;   XREF to: 0050e507 (CONDITIONAL_JUMP)  ; LAB_0050e507
    MOV EBP,0x5e827d                    ; 0050e4e5 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e4ea
    PUSH 0x5e828e                       ; 0050e4ef | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e4f4 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e4fa | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e4ff
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e504
    MOV EAX,[0x01d21458]                ; 0050e507 | DAT_01d21458
        ;   Label: LAB_0050e507
    IMUL EDI,EAX,0x28                   ; 0050e50c
    ADD EDI,0x1d214e0                   ; 0050e50f
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e515 | DAT_01d214cc
    PUSH EDI                            ; 0050e51c | DAT_01d21940
    MOV AL,byte ptr [ESI]               ; 0050e51d
        ;   Label: LAB_0050e51d
    MOV byte ptr [EDI],AL               ; 0050e51f | DAT_01d21940 | DAT_01d21942
    CMP AL,0x0                          ; 0050e521
    JZ 0x0050e535                       ; 0050e523
        ;   XREF to: 0050e535 (CONDITIONAL_JUMP)  ; LAB_0050e535
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e525
    ADD ESI,0x2                         ; 0050e528
    MOV byte ptr [EDI + 0x1],AL         ; 0050e52b | DAT_01d21941 | DAT_01d21943
    ADD EDI,0x2                         ; 0050e52e
    CMP AL,0x0                          ; 0050e531
    JNZ 0x0050e51d                      ; 0050e533
        ;   XREF to: 0050e51d (CONDITIONAL_JUMP)  ; LAB_0050e51d
    POP EDI                             ; 0050e535
        ;   Label: LAB_0050e535
    MOV ECX,dword ptr [0x01d21458]      ; 0050e536 | DAT_01d21458
    INC ECX                             ; 0050e53c
    PUSH 0x5e84c9                       ; 0050e53d | = "Next ammo"
    MOV dword ptr [0x01d21458],ECX      ; 0050e542 | DAT_01d21458
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e548
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    MOV EBX,dword ptr [0x0061d95c]      ; 0050e54d | g_CGamePtr
    MOV EDI,dword ptr [0x01d21458]      ; 0050e553 | DAT_01d21458
    ADD ESP,0x4                         ; 0050e559
    MOV ESI,EAX                         ; 0050e55c
    ADD EBX,0xa4                        ; 0050e55e
    CMP EDI,0x20                        ; 0050e564
    JL 0x0050e58b                       ; 0050e567
        ;   XREF to: 0050e58b (CONDITIONAL_JUMP)  ; LAB_0050e58b
    MOV EBP,0x5e827d                    ; 0050e569 | = "..\\core\\menu.cpp"
    MOV EAX,0x8af                       ; 0050e56e
    PUSH 0x5e828e                       ; 0050e573 | = "Too many custom keys!"
    MOV dword ptr [0x01d1d400],EBP      ; 0050e578 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0050e57e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0050e583
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0050e588
    MOV EAX,[0x01d21458]                ; 0050e58b | DAT_01d21458
        ;   Label: LAB_0050e58b
    IMUL EDI,EAX,0x28                   ; 0050e590
    ADD EDI,0x1d214e0                   ; 0050e593
    MOV dword ptr [EAX*0x4 + 0x1d2145c],EBX ; 0050e599 | DAT_01d214d0
    PUSH EDI                            ; 0050e5a0 | DAT_01d21968
    MOV AL,byte ptr [ESI]               ; 0050e5a1
        ;   Label: LAB_0050e5a1
    MOV byte ptr [EDI],AL               ; 0050e5a3 | DAT_01d21968 | DAT_01d2196a
    CMP AL,0x0                          ; 0050e5a5
    JZ 0x0050e5b9                       ; 0050e5a7
        ;   XREF to: 0050e5b9 (CONDITIONAL_JUMP)  ; LAB_0050e5b9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e5a9
    ADD ESI,0x2                         ; 0050e5ac
    MOV byte ptr [EDI + 0x1],AL         ; 0050e5af | DAT_01d21969 | DAT_01d2196b
    ADD EDI,0x2                         ; 0050e5b2
    CMP AL,0x0                          ; 0050e5b5
    JNZ 0x0050e5a1                      ; 0050e5b7
        ;   XREF to: 0050e5a1 (CONDITIONAL_JUMP)  ; LAB_0050e5a1
    POP EDI                             ; 0050e5b9
        ;   Label: LAB_0050e5b9
    INC dword ptr [0x01d21458]          ; 0050e5ba | DAT_01d21458
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0050e5c0
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0050e5c5
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    LEA EAX,[ESP + 0x8]                 ; 0050e5ca
    PUSH EAX                            ; 0050e5ce
    CALL shape_edittool.cpp_CPickList_ctor_FUN_0049a620 ; 0050e5cf
        ;   XREF to: 0049a620 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_0049a620(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0050e5d4
    PUSH 0x5e84d3                       ; 0050e5d7 | = "Restore defaults"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e5dc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e5e1
    PUSH EAX                            ; 0050e5e4
    LEA EAX,[ESP + 0xc]                 ; 0050e5e5
    PUSH EAX                            ; 0050e5e9
    XOR ESI,ESI                         ; 0050e5ea
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0050e5ec
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    MOV EBX,dword ptr [0x01d21458]      ; 0050e5f1 | DAT_01d21458
    ADD ESP,0x8                         ; 0050e5f7
    TEST EBX,EBX                        ; 0050e5fa
    JLE 0x0050e652                      ; 0050e5fc
        ;   XREF to: 0050e652 (CONDITIONAL_JUMP)  ; LAB_0050e652
    MOV EBX,0x1d214e0                   ; 0050e5fe
    XOR EDI,EDI                         ; 0050e603
    MOV EAX,dword ptr [EDI + 0x1d2145c] ; 0050e605 | DAT_01d2145c | DAT_01d21460
        ;   Label: LAB_0050e605
    MOV EBP,dword ptr [EAX]             ; 0050e60b | g_CGameInstance.key_fire | g_CGameInstance.key_walk
    PUSH EBP                            ; 0050e60d
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 0050e60e
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 0050e613
    PUSH EAX                            ; 0050e616
    PUSH EBX                            ; 0050e617
    PUSH 0x5e84e4                       ; 0050e618 | = "%s\t%s"
    LEA EAX,[ESP + 0xbd4]               ; 0050e61d
    PUSH EAX                            ; 0050e624
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0050e625
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0050e62a
    LEA EAX,[ESP + 0xbc8]               ; 0050e62d
    PUSH EAX                            ; 0050e634
    LEA EAX,[ESP + 0xc]                 ; 0050e635
    ADD EDI,0x4                         ; 0050e639
    PUSH EAX                            ; 0050e63c
    INC ESI                             ; 0050e63d
    ADD EBX,0x28                        ; 0050e63e
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 0050e641
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    MOV EAX,[0x01d21458]                ; 0050e646 | DAT_01d21458
    ADD ESP,0x8                         ; 0050e64b
    CMP ESI,EAX                         ; 0050e64e
    JL 0x0050e605                       ; 0050e650
        ;   XREF to: 0050e605 (CONDITIONAL_JUMP)  ; LAB_0050e605
    PUSH 0x5e84ea                       ; 0050e652 | = "Select"
        ;   Label: LAB_0050e652
    LEA EAX,[ESP + 0xc]                 ; 0050e657
    PUSH EAX                            ; 0050e65b
    CALL shape_edittool.cpp_CPickList_setOkButtonText_FUN_0049a7b0 ; 0050e65c
        ;   XREF to: 0049a7b0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setOkButtonText_FUN_0049a7b0(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 0050e661
    PUSH 0x5e84f1                       ; 0050e664 | = "Close"
    LEA EAX,[ESP + 0xc]                 ; 0050e669
    PUSH EAX                            ; 0050e66d
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_0049a820 ; 0050e66e
        ;   XREF to: 0049a820 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_0049a820(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 0050e673
    PUSH 0x1                            ; 0050e676
    LEA EAX,[ESP + 0xc]                 ; 0050e678
    PUSH EAX                            ; 0050e67c
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_0049a8a0 ; 0050e67d
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_0049a8a0(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 0050e682
    PUSH 0x0                            ; 0050e685
    MOV EDX,dword ptr [ESP + 0xc94]     ; 0050e687
    PUSH EDX                            ; 0050e68e
    PUSH 0x5e84f7                       ; 0050e68f | = "Edit key settings"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e694
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e699
    PUSH EAX                            ; 0050e69c
    LEA EAX,[ESP + 0x14]                ; 0050e69d
    PUSH EAX                            ; 0050e6a1
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 ; 0050e6a2
        ;   XREF to: 0049a8b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0050e6a7
    TEST EAX,EAX                        ; 0050e6aa
    JL 0x0050eb90                       ; 0050e6ac
        ;   XREF to: 0050eb90 (CONDITIONAL_JUMP)  ; LAB_0050eb90
    JNZ 0x0050eb68                      ; 0050e6b2
        ;   XREF to: 0050eb68 (CONDITIONAL_JUMP)  ; LAB_0050eb68
    MOV ESI,dword ptr [0x0061d95c]      ; 0050e6b8 | g_CGamePtr
    PUSH ESI                            ; 0050e6be | g_CGameInstance
    CALL core_game.cpp_FUN_004d0400     ; 0050e6bf
        ;   XREF to: 004d0400 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d0400()
    ADD ESP,0x4                         ; 0050e6c4
    PUSH 0x0                            ; 0050e6c7
    LEA EAX,[ESP + 0xc]                 ; 0050e6c9
    PUSH EAX                            ; 0050e6cd
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0050e6ce
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050e6d3
    JMP 0x0050d66e                      ; 0050e6d6
        ;   XREF to: 0050d66e (UNCONDITIONAL_JUMP)  ; LAB_0050d66e
    CALL core_menu.cpp_calibrateGamepad_FUN_0050a2b0 ; 0050e6db
        ;   XREF to: 0050a2b0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_calibrateGamepad_FUN_0050a2b0()
        ;   Label: LAB_0050e6db
    TEST EAX,EAX                        ; 0050e6e0
    JNZ 0x0050d663                      ; 0050e6e2
        ;   XREF to: 0050d663 (CONDITIONAL_JUMP)  ; LAB_0050d663
    ADD ESP,0xc8c                       ; 0050e6e8
        ;   Label: LAB_0050e6e8
    POP EBP                             ; 0050e6ee
    POP EBX                             ; 0050e6ef
    RET                                 ; 0050e6f0
    PUSH 0x5e83ea                       ; 0050e6f1 | = "Run"
        ;   Label: LAB_0050e6f1
    JMP 0x0050dc25                      ; 0050e6f6
        ;   XREF to: 0050dc25 (UNCONDITIONAL_JUMP)  ; LAB_0050dc25
    IMUL ESI,EBP,0x28                   ; 0050e6fb
        ;   Label: caseD_255
    LEA EDI,[ESP + 0x9c8]               ; 0050e6fe
    ADD ESI,0x1d214e0                   ; 0050e705
    PUSH EDI                            ; 0050e70b
    MOV AL,byte ptr [ESI]               ; 0050e70c
        ;   Label: LAB_0050e70c
    MOV byte ptr [EDI],AL               ; 0050e70e
    CMP AL,0x0                          ; 0050e710
    JZ 0x0050e724                       ; 0050e712
        ;   XREF to: 0050e724 (CONDITIONAL_JUMP)  ; LAB_0050e724
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e714
    ADD ESI,0x2                         ; 0050e717
    MOV byte ptr [EDI + 0x1],AL         ; 0050e71a
    ADD EDI,0x2                         ; 0050e71d
    CMP AL,0x0                          ; 0050e720
    JNZ 0x0050e70c                      ; 0050e722
        ;   XREF to: 0050e70c (CONDITIONAL_JUMP)  ; LAB_0050e70c
    POP EDI                             ; 0050e724
        ;   Label: LAB_0050e724
    PUSH 0x5e8509                       ; 0050e725 | = " is assigned to the mouse.  Can't ass..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e72a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e72f
    LEA EDI,[ESP + 0x9c8]               ; 0050e732
    MOV ESI,EAX                         ; 0050e739
    PUSH EDI                            ; 0050e73b
    SUB ECX,ECX                         ; 0050e73c
    DEC ECX                             ; 0050e73e
    MOV AL,0x0                          ; 0050e73f
    SCASB.REPNE ES:EDI                  ; 0050e741
    DEC EDI                             ; 0050e743
    MOV AL,byte ptr [ESI]               ; 0050e744
        ;   Label: LAB_0050e744
    MOV byte ptr [EDI],AL               ; 0050e746
    CMP AL,0x0                          ; 0050e748
    JZ 0x0050e75c                       ; 0050e74a
        ;   XREF to: 0050e75c (CONDITIONAL_JUMP)  ; LAB_0050e75c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e74c
    ADD ESI,0x2                         ; 0050e74f
    MOV byte ptr [EDI + 0x1],AL         ; 0050e752
    ADD EDI,0x2                         ; 0050e755
    CMP AL,0x0                          ; 0050e758
    JNZ 0x0050e744                      ; 0050e75a
        ;   XREF to: 0050e744 (CONDITIONAL_JUMP)  ; LAB_0050e744
    POP EDI                             ; 0050e75c
        ;   Label: LAB_0050e75c
    LEA EAX,[ESP + 0x9c8]               ; 0050e75d
    PUSH EAX                            ; 0050e764
    MOV ECX,dword ptr [0x0061abc0]      ; 0050e765 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050e76b
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0050e76c
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050e771
        ;   Label: LAB_0050e771
    PUSH 0x0                            ; 0050e774
    LEA EAX,[ESP + 0xc]                 ; 0050e776
    PUSH EAX                            ; 0050e77a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0050e77b
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050e780
    JMP 0x0050d66e                      ; 0050e783
        ;   XREF to: 0050d66e (UNCONDITIONAL_JUMP)  ; LAB_0050d66e
    IMUL ESI,EBP,0x28                   ; 0050e788
        ;   Label: caseD_251
    LEA EDI,[ESP + 0x3c8]               ; 0050e78b
    ADD ESI,0x1d214e0                   ; 0050e792
    PUSH EDI                            ; 0050e798
    MOV AL,byte ptr [ESI]               ; 0050e799
        ;   Label: LAB_0050e799
    MOV byte ptr [EDI],AL               ; 0050e79b
    CMP AL,0x0                          ; 0050e79d
    JZ 0x0050e7b1                       ; 0050e79f
        ;   XREF to: 0050e7b1 (CONDITIONAL_JUMP)  ; LAB_0050e7b1
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e7a1
    ADD ESI,0x2                         ; 0050e7a4
    MOV byte ptr [EDI + 0x1],AL         ; 0050e7a7
    ADD EDI,0x2                         ; 0050e7aa
    CMP AL,0x0                          ; 0050e7ad
    JNZ 0x0050e799                      ; 0050e7af
        ;   XREF to: 0050e799 (CONDITIONAL_JUMP)  ; LAB_0050e799
    POP EDI                             ; 0050e7b1
        ;   Label: LAB_0050e7b1
    PUSH 0x5e8539                       ; 0050e7b2 | = " is assigned to the gamepad.  Can't a..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e7b7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e7bc
    LEA EDI,[ESP + 0x3c8]               ; 0050e7bf
    MOV ESI,EAX                         ; 0050e7c6
    PUSH EDI                            ; 0050e7c8
    SUB ECX,ECX                         ; 0050e7c9
    DEC ECX                             ; 0050e7cb
    MOV AL,0x0                          ; 0050e7cc
    SCASB.REPNE ES:EDI                  ; 0050e7ce
    DEC EDI                             ; 0050e7d0
    MOV AL,byte ptr [ESI]               ; 0050e7d1
        ;   Label: LAB_0050e7d1
    MOV byte ptr [EDI],AL               ; 0050e7d3
    CMP AL,0x0                          ; 0050e7d5
    JZ 0x0050e7e9                       ; 0050e7d7
        ;   XREF to: 0050e7e9 (CONDITIONAL_JUMP)  ; LAB_0050e7e9
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e7d9
    ADD ESI,0x2                         ; 0050e7dc
    MOV byte ptr [EDI + 0x1],AL         ; 0050e7df
    ADD EDI,0x2                         ; 0050e7e2
    CMP AL,0x0                          ; 0050e7e5
    JNZ 0x0050e7d1                      ; 0050e7e7
        ;   XREF to: 0050e7d1 (CONDITIONAL_JUMP)  ; LAB_0050e7d1
    POP EDI                             ; 0050e7e9
        ;   Label: LAB_0050e7e9
    LEA EAX,[ESP + 0x3c8]               ; 0050e7ea
    PUSH EAX                            ; 0050e7f1
    MOV EBX,dword ptr [0x0061abc0]      ; 0050e7f2 | g_CEditorToolsPtr
    PUSH EBX                            ; 0050e7f8
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0050e7f9
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    JMP 0x0050e771                      ; 0050e7fe
        ;   XREF to: 0050e771 (UNCONDITIONAL_JUMP)  ; LAB_0050e771
    MOV EAX,[0x0061d95c]                ; 0050e803 | g_CGamePtr
        ;   Label: default
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050e808 | g_CGameInstance.game_control
    JZ 0x0050e869                       ; 0050e80f
        ;   XREF to: 0050e869 (CONDITIONAL_JUMP)  ; LAB_0050e869
    MOV ESI,0xffffffff                  ; 0050e811
        ;   Label: LAB_0050e811
    XOR EBX,EBX                         ; 0050e816
    PUSH EBX                            ; 0050e818
        ;   Label: LAB_0050e818
    MOV EAX,[0x0061f2a4]                ; 0050e819 | DAT_0061f2a4
    PUSH EAX                            ; 0050e81e | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 0050e81f | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 0050e821
    ADD ESP,0x8                         ; 0050e823
    TEST EAX,EAX                        ; 0050e826
    JZ 0x0050e874                       ; 0050e828
        ;   XREF to: 0050e874 (CONDITIONAL_JUMP)  ; LAB_0050e874
    TEST ESI,ESI                        ; 0050e82a
    JL 0x0050ea6d                       ; 0050e82c
        ;   XREF to: 0050ea6d (CONDITIONAL_JUMP)  ; LAB_0050ea6d
    PUSH 0x5e856b                       ; 0050e832 | = "OK - you can release the key now..."
        ;   Label: LAB_0050e832
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e837
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e83c
    PUSH EAX                            ; 0050e83f
    MOV ESI,dword ptr [0x0061abc0]      ; 0050e840 | g_CEditorToolsPtr
    PUSH ESI                            ; 0050e846
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0050e847
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050e84c
    MOV EAX,[0x0061f2a4]                ; 0050e84f | DAT_0061f2a4
    PUSH 0x1                            ; 0050e854
    MOV EBX,dword ptr [EAX]             ; 0050e856 | DAT_01d1bca0
    PUSH EAX                            ; 0050e858 | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 0050e859
    ADD ESP,0x8                         ; 0050e85b
    TEST EAX,EAX                        ; 0050e85e
    JNZ 0x0050e8a0                      ; 0050e860
        ;   XREF to: 0050e8a0 (CONDITIONAL_JUMP)  ; LAB_0050e8a0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0050e862
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    JMP 0x0050e803                      ; 0050e867
        ;   XREF to: 0050e803 (UNCONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 0050e869 | g_CGameInstance
        ;   Label: LAB_0050e869
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 0050e86a
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0050e86f
    JMP 0x0050e811                      ; 0050e872
        ;   XREF to: 0050e811 (UNCONDITIONAL_JUMP)  ; LAB_0050e811
    INC EBX                             ; 0050e874
        ;   Label: LAB_0050e874
    CMP EBX,0x258                       ; 0050e875
    JL 0x0050e818                       ; 0050e87b
        ;   XREF to: 0050e818 (CONDITIONAL_JUMP)  ; LAB_0050e818
    MOV EAX,[0x0061d95c]                ; 0050e87d | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x3      ; 0050e882 | g_CGameInstance.game_control
    JNZ 0x0050e89b                      ; 0050e889
        ;   XREF to: 0050e89b (CONDITIONAL_JUMP)  ; LAB_0050e89b
    CMP ESI,0x200                       ; 0050e88b
    JZ 0x0050e832                       ; 0050e891
        ;   XREF to: 0050e832 (CONDITIONAL_JUMP)  ; LAB_0050e832
    CMP ESI,0x201                       ; 0050e893
    JZ 0x0050e832                       ; 0050e899
        ;   XREF to: 0050e832 (CONDITIONAL_JUMP)  ; LAB_0050e832
    CMP ESI,-0x1                        ; 0050e89b
        ;   Label: LAB_0050e89b
    JNZ 0x0050e832                      ; 0050e89e
        ;   XREF to: 0050e832 (CONDITIONAL_JUMP)  ; LAB_0050e832
    PUSH 0x1                            ; 0050e8a0
        ;   Label: LAB_0050e8a0
    MOV EAX,[0x0061f2a4]                ; 0050e8a2 | DAT_0061f2a4
    PUSH EAX                            ; 0050e8a7 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050e8a8 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 0050e8aa
    ADD ESP,0x8                         ; 0050e8ac
    TEST EAX,EAX                        ; 0050e8af
    JNZ 0x0050ea74                      ; 0050e8b1
        ;   XREF to: 0050ea74 (CONDITIONAL_JUMP)  ; LAB_0050ea74
    PUSH 0x5e858f                       ; 0050e8b7 | = "Press new key or button for "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e8bc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e8c1
    LEA EDI,[ESP + 0x7c8]               ; 0050e8c4
    MOV ESI,EAX                         ; 0050e8cb
    PUSH EDI                            ; 0050e8cd
    MOV AL,byte ptr [ESI]               ; 0050e8ce
        ;   Label: LAB_0050e8ce
    MOV byte ptr [EDI],AL               ; 0050e8d0
    CMP AL,0x0                          ; 0050e8d2
    JZ 0x0050e8e6                       ; 0050e8d4
        ;   XREF to: 0050e8e6 (CONDITIONAL_JUMP)  ; LAB_0050e8e6
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e8d6
    ADD ESI,0x2                         ; 0050e8d9
    MOV byte ptr [EDI + 0x1],AL         ; 0050e8dc
    ADD EDI,0x2                         ; 0050e8df
    CMP AL,0x0                          ; 0050e8e2
    JNZ 0x0050e8ce                      ; 0050e8e4
        ;   XREF to: 0050e8ce (CONDITIONAL_JUMP)  ; LAB_0050e8ce
    POP EDI                             ; 0050e8e6
        ;   Label: LAB_0050e8e6
    IMUL ESI,EBP,0x28                   ; 0050e8e7
    LEA EDI,[ESP + 0x7c8]               ; 0050e8ea
    ADD ESI,0x1d214e0                   ; 0050e8f1
    PUSH EDI                            ; 0050e8f7
    SUB ECX,ECX                         ; 0050e8f8
    DEC ECX                             ; 0050e8fa
    MOV AL,0x0                          ; 0050e8fb
    SCASB.REPNE ES:EDI                  ; 0050e8fd
    DEC EDI                             ; 0050e8ff
    MOV AL,byte ptr [ESI]               ; 0050e900
        ;   Label: LAB_0050e900
    MOV byte ptr [EDI],AL               ; 0050e902
    CMP AL,0x0                          ; 0050e904
    JZ 0x0050e918                       ; 0050e906
        ;   XREF to: 0050e918 (CONDITIONAL_JUMP)  ; LAB_0050e918
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e908
    ADD ESI,0x2                         ; 0050e90b
    MOV byte ptr [EDI + 0x1],AL         ; 0050e90e
    ADD EDI,0x2                         ; 0050e911
    CMP AL,0x0                          ; 0050e914
    JNZ 0x0050e900                      ; 0050e916
        ;   XREF to: 0050e900 (CONDITIONAL_JUMP)  ; LAB_0050e900
    POP EDI                             ; 0050e918
        ;   Label: LAB_0050e918
    LEA EAX,[ESP + 0x7c8]               ; 0050e919
    PUSH EAX                            ; 0050e920
    MOV EDI,dword ptr [0x0061abc0]      ; 0050e921 | g_CEditorToolsPtr
    PUSH EDI                            ; 0050e927
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0050e928
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050e92d
    PUSH 0x1                            ; 0050e930
    MOV EAX,[0x0061f2a4]                ; 0050e932 | DAT_0061f2a4
    PUSH EAX                            ; 0050e937 | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 0050e938
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 0050e93d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0050e940
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_0050e940
    MOV EAX,[0x0061d95c]                ; 0050e945 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050e94a | g_CGameInstance.game_control
    JZ 0x0050ea8d                       ; 0050e951
        ;   XREF to: 0050ea8d (CONDITIONAL_JUMP)  ; LAB_0050ea8d
    MOV ESI,0xffffffff                  ; 0050e957
        ;   Label: LAB_0050e957
    XOR EBX,EBX                         ; 0050e95c
    PUSH EBX                            ; 0050e95e
        ;   Label: LAB_0050e95e
    MOV EAX,[0x0061f2a4]                ; 0050e95f | DAT_0061f2a4
    PUSH EAX                            ; 0050e964 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 0050e965 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 0050e967
    ADD ESP,0x8                         ; 0050e969
    TEST EAX,EAX                        ; 0050e96c
    JZ 0x0050e976                       ; 0050e96e
        ;   XREF to: 0050e976 (CONDITIONAL_JUMP)  ; LAB_0050e976
    TEST ESI,ESI                        ; 0050e970
    JGE 0x0050e940                      ; 0050e972
        ;   XREF to: 0050e940 (CONDITIONAL_JUMP)  ; LAB_0050e940
    MOV ESI,EBX                         ; 0050e974
    INC EBX                             ; 0050e976
        ;   Label: LAB_0050e976
    CMP EBX,0x258                       ; 0050e977
    JL 0x0050e95e                       ; 0050e97d
        ;   XREF to: 0050e95e (CONDITIONAL_JUMP)  ; LAB_0050e95e
    MOV EAX,[0x0061d95c]                ; 0050e97f | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x3      ; 0050e984 | g_CGameInstance.game_control
    JNZ 0x0050eaa7                      ; 0050e98b
        ;   XREF to: 0050eaa7 (CONDITIONAL_JUMP)  ; LAB_0050eaa7
    CMP ESI,0x200                       ; 0050e991
    JNZ 0x0050ea9b                      ; 0050e997
        ;   XREF to: 0050ea9b (CONDITIONAL_JUMP)  ; LAB_0050ea9b
    PUSH 0x5e85ac                       ; 0050e99d | = "Mouse buttons cannot be redefined"
        ;   Label: LAB_0050e99d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050e9a2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050e9a7
    LEA EDI,[ESP + 0x5c8]               ; 0050e9aa
    MOV ESI,EAX                         ; 0050e9b1
    PUSH EDI                            ; 0050e9b3
    MOV AL,byte ptr [ESI]               ; 0050e9b4
        ;   Label: LAB_0050e9b4
    MOV byte ptr [EDI],AL               ; 0050e9b6
    CMP AL,0x0                          ; 0050e9b8
    JZ 0x0050e9cc                       ; 0050e9ba
        ;   XREF to: 0050e9cc (CONDITIONAL_JUMP)  ; LAB_0050e9cc
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e9bc
    ADD ESI,0x2                         ; 0050e9bf
    MOV byte ptr [EDI + 0x1],AL         ; 0050e9c2
    ADD EDI,0x2                         ; 0050e9c5
    CMP AL,0x0                          ; 0050e9c8
    JNZ 0x0050e9b4                      ; 0050e9ca
        ;   XREF to: 0050e9b4 (CONDITIONAL_JUMP)  ; LAB_0050e9b4
    POP EDI                             ; 0050e9cc
        ;   Label: LAB_0050e9cc
    IMUL ESI,EBP,0x28                   ; 0050e9cd
    LEA EDI,[ESP + 0x5c8]               ; 0050e9d0
    ADD ESI,0x1d214e0                   ; 0050e9d7
    PUSH EDI                            ; 0050e9dd
    SUB ECX,ECX                         ; 0050e9de
    DEC ECX                             ; 0050e9e0
    MOV AL,0x0                          ; 0050e9e1
    SCASB.REPNE ES:EDI                  ; 0050e9e3
    DEC EDI                             ; 0050e9e5
    MOV AL,byte ptr [ESI]               ; 0050e9e6
        ;   Label: LAB_0050e9e6
    MOV byte ptr [EDI],AL               ; 0050e9e8
    CMP AL,0x0                          ; 0050e9ea
    JZ 0x0050e9fe                       ; 0050e9ec
        ;   XREF to: 0050e9fe (CONDITIONAL_JUMP)  ; LAB_0050e9fe
    MOV AL,byte ptr [ESI + 0x1]         ; 0050e9ee
    ADD ESI,0x2                         ; 0050e9f1
    MOV byte ptr [EDI + 0x1],AL         ; 0050e9f4
    ADD EDI,0x2                         ; 0050e9f7
    CMP AL,0x0                          ; 0050e9fa
    JNZ 0x0050e9e6                      ; 0050e9fc
        ;   XREF to: 0050e9e6 (CONDITIONAL_JUMP)  ; LAB_0050e9e6
    POP EDI                             ; 0050e9fe
        ;   Label: LAB_0050e9fe
    LEA EAX,[ESP + 0x5c8]               ; 0050e9ff
    PUSH EAX                            ; 0050ea06
    MOV EBX,dword ptr [0x0061abc0]      ; 0050ea07 | g_CEditorToolsPtr
    PUSH EBX                            ; 0050ea0d
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0050ea0e
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050ea13
    PUSH 0x5e85ce                       ; 0050ea16 | = "OK - you can release the key now..."
        ;   Label: LAB_0050ea16
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ea1b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ea20
    PUSH EAX                            ; 0050ea23
    MOV ESI,dword ptr [0x0061abc0]      ; 0050ea24 | g_CEditorToolsPtr
    PUSH ESI                            ; 0050ea2a
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0050ea2b
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050ea30
    MOV EAX,[0x0061d95c]                ; 0050ea33 | g_CGamePtr
        ;   Label: LAB_0050ea33
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050ea38 | g_CGameInstance.game_control
    JZ 0x0050eac6                       ; 0050ea3f
        ;   XREF to: 0050eac6 (CONDITIONAL_JUMP)  ; LAB_0050eac6
    MOV ESI,0xffffffff                  ; 0050ea45
        ;   Label: LAB_0050ea45
    XOR EBX,EBX                         ; 0050ea4a
    PUSH EBX                            ; 0050ea4c
        ;   Label: LAB_0050ea4c
    MOV EAX,[0x0061f2a4]                ; 0050ea4d | DAT_0061f2a4
    PUSH EAX                            ; 0050ea52 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 0050ea53 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 0050ea55
    ADD ESP,0x8                         ; 0050ea57
    TEST EAX,EAX                        ; 0050ea5a
    JZ 0x0050ead4                       ; 0050ea5c
        ;   XREF to: 0050ead4 (CONDITIONAL_JUMP)  ; LAB_0050ead4
    TEST ESI,ESI                        ; 0050ea5e
    JL 0x0050eb4a                       ; 0050ea60
        ;   XREF to: 0050eb4a (CONDITIONAL_JUMP)  ; LAB_0050eb4a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0050ea66
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_0050ea66
    JMP 0x0050ea33                      ; 0050ea6b
        ;   XREF to: 0050ea33 (UNCONDITIONAL_JUMP)  ; LAB_0050ea33
    MOV ESI,EBX                         ; 0050ea6d
        ;   Label: LAB_0050ea6d
    JMP 0x0050e874                      ; 0050ea6f
        ;   XREF to: 0050e874 (UNCONDITIONAL_JUMP)  ; LAB_0050e874
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 0050ea74
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_0050ea74
    PUSH 0x0                            ; 0050ea79
    LEA EAX,[ESP + 0xc]                 ; 0050ea7b
    PUSH EAX                            ; 0050ea7f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0050ea80
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050ea85
    JMP 0x0050d66e                      ; 0050ea88
        ;   XREF to: 0050d66e (UNCONDITIONAL_JUMP)  ; LAB_0050d66e
    PUSH EAX                            ; 0050ea8d | g_CGameInstance
        ;   Label: LAB_0050ea8d
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 0050ea8e
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0050ea93
    JMP 0x0050e957                      ; 0050ea96
        ;   XREF to: 0050e957 (UNCONDITIONAL_JUMP)  ; LAB_0050e957
    CMP ESI,0x201                       ; 0050ea9b
        ;   Label: LAB_0050ea9b
    JZ 0x0050e99d                       ; 0050eaa1
        ;   XREF to: 0050e99d (CONDITIONAL_JUMP)  ; LAB_0050e99d
    CMP ESI,-0x3                        ; 0050eaa7
        ;   Label: LAB_0050eaa7
    JZ 0x0050e99d                       ; 0050eaaa
        ;   XREF to: 0050e99d (CONDITIONAL_JUMP)  ; LAB_0050e99d
    TEST ESI,ESI                        ; 0050eab0
    JL 0x0050e940                       ; 0050eab2
        ;   XREF to: 0050e940 (CONDITIONAL_JUMP)  ; LAB_0050e940
    MOV EAX,dword ptr [EBP*0x4 + 0x1d2145c] ; 0050eab8 | DAT_01d2145c
    MOV dword ptr [EAX],ESI             ; 0050eabf
    JMP 0x0050ea16                      ; 0050eac1
        ;   XREF to: 0050ea16 (UNCONDITIONAL_JUMP)  ; LAB_0050ea16
    PUSH EAX                            ; 0050eac6 | g_CGameInstance
        ;   Label: LAB_0050eac6
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 0050eac7
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0050eacc
    JMP 0x0050ea45                      ; 0050eacf
        ;   XREF to: 0050ea45 (UNCONDITIONAL_JUMP)  ; LAB_0050ea45
    INC EBX                             ; 0050ead4
        ;   Label: LAB_0050ead4
    CMP EBX,0x258                       ; 0050ead5
    JL 0x0050ea4c                       ; 0050eadb
        ;   XREF to: 0050ea4c (CONDITIONAL_JUMP)  ; LAB_0050ea4c
    MOV EAX,[0x0061d95c]                ; 0050eae1 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x3      ; 0050eae6 | g_CGameInstance.game_control
    JNZ 0x0050eb07                      ; 0050eaed
        ;   XREF to: 0050eb07 (CONDITIONAL_JUMP)  ; LAB_0050eb07
    CMP ESI,0x200                       ; 0050eaef
    JZ 0x0050ea66                       ; 0050eaf5
        ;   XREF to: 0050ea66 (CONDITIONAL_JUMP)  ; LAB_0050ea66
    CMP ESI,0x201                       ; 0050eafb
    JZ 0x0050ea66                       ; 0050eb01
        ;   XREF to: 0050ea66 (CONDITIONAL_JUMP)  ; LAB_0050ea66
    CMP ESI,-0x1                        ; 0050eb07
        ;   Label: LAB_0050eb07
    JNZ 0x0050ea66                      ; 0050eb0a
        ;   XREF to: 0050ea66 (CONDITIONAL_JUMP)  ; LAB_0050ea66
    MOV ECX,dword ptr [0x01d21458]      ; 0050eb10 | DAT_01d21458
    XOR EAX,EAX                         ; 0050eb16
    TEST ECX,ECX                        ; 0050eb18
    JLE 0x0050eb37                      ; 0050eb1a
        ;   XREF to: 0050eb37 (CONDITIONAL_JUMP)  ; LAB_0050eb37
    LEA ECX,[EBP*0x4 + 0x0]             ; 0050eb1c
    XOR EBX,EBX                         ; 0050eb23
    CMP EAX,EBP                         ; 0050eb25
        ;   Label: LAB_0050eb25
    JNZ 0x0050eb4e                      ; 0050eb27
        ;   XREF to: 0050eb4e (CONDITIONAL_JUMP)  ; LAB_0050eb4e
    MOV ESI,dword ptr [0x01d21458]      ; 0050eb29 | DAT_01d21458
        ;   Label: LAB_0050eb29
    INC EAX                             ; 0050eb2f
    ADD EBX,0x4                         ; 0050eb30
    CMP EAX,ESI                         ; 0050eb33
    JL 0x0050eb25                       ; 0050eb35
        ;   XREF to: 0050eb25 (CONDITIONAL_JUMP)  ; LAB_0050eb25
    PUSH 0x0                            ; 0050eb37
        ;   Label: LAB_0050eb37
    MOV EDI,dword ptr [0x0061f2a4]      ; 0050eb39 | DAT_0061f2a4
    PUSH EDI                            ; 0050eb3f | DAT_01d1bca0
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0 ; 0050eb40
        ;   XREF to: 004fd2b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys * this_ptr, int enable_extended)
    JMP 0x0050e771                      ; 0050eb45
        ;   XREF to: 0050e771 (UNCONDITIONAL_JUMP)  ; LAB_0050e771
    MOV ESI,EBX                         ; 0050eb4a
        ;   Label: LAB_0050eb4a
    JMP 0x0050ead4                      ; 0050eb4c
        ;   XREF to: 0050ead4 (UNCONDITIONAL_JUMP)  ; LAB_0050ead4
    MOV ESI,dword ptr [EBX + 0x1d2145c] ; 0050eb4e | DAT_01d21460
        ;   Label: LAB_0050eb4e
    MOV EDI,dword ptr [ECX + 0x1d2145c] ; 0050eb54 | DAT_01d2145c
    MOV EDX,dword ptr [ESI]             ; 0050eb5a | g_CGameInstance.key_walk
    CMP EDX,dword ptr [EDI]             ; 0050eb5c
    JNZ 0x0050eb29                      ; 0050eb5e
        ;   XREF to: 0050eb29 (CONDITIONAL_JUMP)  ; LAB_0050eb29
    MOV dword ptr [ESI],0x257           ; 0050eb60 | g_CGameInstance.key_walk
    JMP 0x0050eb29                      ; 0050eb66
        ;   XREF to: 0050eb29 (UNCONDITIONAL_JUMP)  ; LAB_0050eb29
    MOV dword ptr [ESP + 0xc90],EAX     ; 0050eb68
        ;   Label: LAB_0050eb68
    LEA EBP,[EAX + -0x1]                ; 0050eb6f
    MOV EAX,dword ptr [EBP*0x4 + 0x1d2145c] ; 0050eb72 | DAT_01d2145c
    MOV EAX,dword ptr [EAX]             ; 0050eb79
    SUB EAX,0x251                       ; 0050eb7b
    CMP EAX,0x5                         ; 0050eb80
    JA 0x0050e803                       ; 0050eb83
        ;   XREF to: 0050e803 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x50d628]  ; 0050eb89 | caseD_254 | caseD_256 | switchdataD_0050d628
        ;   Label: switchD
    PUSH 0x0                            ; 0050eb90
        ;   Label: LAB_0050eb90
    LEA EAX,[ESP + 0xc]                 ; 0050eb92
    PUSH EAX                            ; 0050eb96
    CALL shape_edittool.cpp_CPickList_dtor_FUN_0049a710 ; 0050eb97
        ;   XREF to: 0049a710 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_0049a710(CPickList * this_ptr, uint flags)
    MOV EAX,[0x0061d95c]                ; 0050eb9c | g_CGamePtr
    XOR EBX,EBX                         ; 0050eba1
    MOV EDI,dword ptr [EAX + 0xd0]      ; 0050eba3 | g_CGameInstance.game_control
    ADD ESP,0x8                         ; 0050eba9
    CMP EDI,0x3                         ; 0050ebac
    JZ 0x0050ed20                       ; 0050ebaf
        ;   XREF to: 0050ed20 (CONDITIONAL_JUMP)  ; LAB_0050ed20
    PUSH 0x5e85f2                       ; 0050ebb5 | = "Forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ebba
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ebbf
    PUSH EAX                            ; 0050ebc2
    MOV EAX,[0x0061d95c]                ; 0050ebc3 | g_CGamePtr
    ADD EAX,0x28                        ; 0050ebc8
    PUSH EAX                            ; 0050ebcb | g_CGameInstance.key_walk
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ebcc
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ebd1
    PUSH 0x5e85fa                       ; 0050ebd4 | = "Back"
    MOV EBX,EAX                         ; 0050ebd9
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ebdb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ebe0
    PUSH EAX                            ; 0050ebe3
    MOV EAX,[0x0061d95c]                ; 0050ebe4 | g_CGamePtr
    ADD EAX,0x2c                        ; 0050ebe9
    PUSH EAX                            ; 0050ebec
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ebed
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ebf2
    PUSH 0x5e85ff                       ; 0050ebf5 | = "Strafe on"
    OR EBX,EAX                          ; 0050ebfa
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ebfc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ec01
    PUSH EAX                            ; 0050ec04
    MOV EAX,[0x0061d95c]                ; 0050ec05 | g_CGamePtr
    ADD EAX,0x34                        ; 0050ec0a
    PUSH EAX                            ; 0050ec0d
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ec0e
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ec13
    PUSH 0x5e8609                       ; 0050ec16 | = "Strafe left"
    OR EBX,EAX                          ; 0050ec1b
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ec1d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ec22
    PUSH EAX                            ; 0050ec25
    MOV EAX,[0x0061d95c]                ; 0050ec26 | g_CGamePtr
    ADD EAX,0x38                        ; 0050ec2b
    PUSH EAX                            ; 0050ec2e
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ec2f
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ec34
    PUSH 0x5e8615                       ; 0050ec37 | = "Strafe right"
    OR EBX,EAX                          ; 0050ec3c
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ec3e
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ec43
    PUSH EAX                            ; 0050ec46
    MOV EAX,[0x0061d95c]                ; 0050ec47 | g_CGamePtr
    ADD EAX,0x3c                        ; 0050ec4c
    PUSH EAX                            ; 0050ec4f
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ec50
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ec55
    PUSH 0x5e8622                       ; 0050ec58 | = "Turn left"
    OR EBX,EAX                          ; 0050ec5d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ec5f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ec64
    PUSH EAX                            ; 0050ec67
    MOV EAX,[0x0061d95c]                ; 0050ec68 | g_CGamePtr
    ADD EAX,0x44                        ; 0050ec6d
    PUSH EAX                            ; 0050ec70
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ec71
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ec76
    OR EBX,EAX                          ; 0050ec79
    PUSH 0x5e862c                       ; 0050ec7b | = "Turn right"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ec80
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ec85
    PUSH EAX                            ; 0050ec88
    MOV EAX,[0x0061d95c]                ; 0050ec89 | g_CGamePtr
    ADD EAX,0x40                        ; 0050ec8e
    PUSH EAX                            ; 0050ec91
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ec92
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ec97
    PUSH 0x5e8637                       ; 0050ec9a | = "Fire / Action"
    OR EBX,EAX                          ; 0050ec9f
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050eca1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050eca6
    PUSH EAX                            ; 0050eca9
    MOV EAX,[0x0061d95c]                ; 0050ecaa | g_CGamePtr
    ADD EAX,0x48                        ; 0050ecaf
    PUSH EAX                            ; 0050ecb2 | g_CGameInstance.key_fire
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ecb3
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ecb8
    PUSH 0x5e8645                       ; 0050ecbb | = "Point up"
    OR EBX,EAX                          ; 0050ecc0
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ecc2
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ecc7
    PUSH EAX                            ; 0050ecca
    MOV EAX,[0x0061d95c]                ; 0050eccb | g_CGamePtr
    ADD EAX,0x74                        ; 0050ecd0
    PUSH EAX                            ; 0050ecd3
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ecd4
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ecd9
    PUSH 0x5e864e                       ; 0050ecdc | = "Point down"
    OR EBX,EAX                          ; 0050ece1
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ece3
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ece8
    PUSH EAX                            ; 0050eceb
    MOV EAX,[0x0061d95c]                ; 0050ecec | g_CGamePtr
    ADD EAX,0x78                        ; 0050ecf1
    PUSH EAX                            ; 0050ecf4
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ecf5
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ecfa
    PUSH 0x5e8659                       ; 0050ecfd | = "Quick turn"
    OR EBX,EAX                          ; 0050ed02
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ed04
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ed09
    PUSH EAX                            ; 0050ed0c
    MOV EAX,[0x0061d95c]                ; 0050ed0d | g_CGamePtr
    ADD EAX,0x70                        ; 0050ed12
    PUSH EAX                            ; 0050ed15
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ed16
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ed1b
    OR EBX,EAX                          ; 0050ed1e
    MOV EAX,[0x0061d95c]                ; 0050ed20 | g_CGamePtr
        ;   Label: LAB_0050ed20
    CMP dword ptr [EAX + 0xac],0x0      ; 0050ed25 | g_CGameInstance.always_run
    JZ 0x0050efea                       ; 0050ed2c
        ;   XREF to: 0050efea (CONDITIONAL_JUMP)  ; LAB_0050efea
    PUSH 0x5e8664                       ; 0050ed32 | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ed37
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
        ;   Label: LAB_0050ed37
    ADD ESP,0x4                         ; 0050ed3c
    PUSH EAX                            ; 0050ed3f
    MOV EAX,[0x0061d95c]                ; 0050ed40 | g_CGamePtr
    ADD EAX,0x30                        ; 0050ed45
    PUSH EAX                            ; 0050ed48
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ed49
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ed4e
    OR EBX,EAX                          ; 0050ed51
    PUSH 0x5e866d                       ; 0050ed53 | = "Use item"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ed58
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ed5d
    PUSH EAX                            ; 0050ed60
    MOV EAX,[0x0061d95c]                ; 0050ed61 | g_CGamePtr
    ADD EAX,0x4c                        ; 0050ed66
    PUSH EAX                            ; 0050ed69
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ed6a
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ed6f
    PUSH 0x5e8676                       ; 0050ed72 | = "Flashlight"
    OR EBX,EAX                          ; 0050ed77
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ed79
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ed7e
    PUSH EAX                            ; 0050ed81
    MOV EAX,[0x0061d95c]                ; 0050ed82 | g_CGamePtr
    ADD EAX,0x50                        ; 0050ed87
    PUSH EAX                            ; 0050ed8a
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ed8b
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ed90
    PUSH 0x5e8681                       ; 0050ed93 | = "Night Vision"
    OR EBX,EAX                          ; 0050ed98
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ed9a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ed9f
    PUSH EAX                            ; 0050eda2
    MOV EAX,[0x0061d95c]                ; 0050eda3 | g_CGamePtr
    ADD EAX,0x54                        ; 0050eda8
    PUSH EAX                            ; 0050edab
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050edac
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050edb1
    PUSH 0x5e868e                       ; 0050edb4 | = "Journal"
    OR EBX,EAX                          ; 0050edb9
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050edbb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050edc0
    PUSH EAX                            ; 0050edc3
    MOV EAX,[0x0061d95c]                ; 0050edc4 | g_CGamePtr
    ADD EAX,0x58                        ; 0050edc9
    PUSH EAX                            ; 0050edcc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050edcd
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050edd2
    PUSH 0x5e8696                       ; 0050edd5 | = "Map"
    OR EBX,EAX                          ; 0050edda
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050eddc
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ede1
    PUSH EAX                            ; 0050ede4
    MOV EAX,[0x0061d95c]                ; 0050ede5 | g_CGamePtr
    ADD EAX,0x5c                        ; 0050edea
    PUSH EAX                            ; 0050eded
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050edee
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050edf3
    PUSH 0x5e869a                       ; 0050edf6 | = "Compass"
    OR EBX,EAX                          ; 0050edfb
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050edfd
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ee02
    PUSH EAX                            ; 0050ee05
    MOV EAX,[0x0061d95c]                ; 0050ee06 | g_CGamePtr
    ADD EAX,0x60                        ; 0050ee0b
    PUSH EAX                            ; 0050ee0e
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ee0f
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ee14
    OR EBX,EAX                          ; 0050ee17
    POP ESI                             ; 0050ee19
    POP EDI                             ; 0050ee1a
    PUSH 0x5e86a2                       ; 0050ee1b | = "SPS"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ee20
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ee25
    PUSH EAX                            ; 0050ee28
    MOV EAX,[0x0061d95c]                ; 0050ee29 | g_CGamePtr
    ADD EAX,0x64                        ; 0050ee2e
    PUSH EAX                            ; 0050ee31
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ee32
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ee37
    PUSH 0x5e86a6                       ; 0050ee3a | = "Draw"
    OR EBX,EAX                          ; 0050ee3f
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ee41
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ee46
    PUSH EAX                            ; 0050ee49
    MOV EAX,[0x0061d95c]                ; 0050ee4a | g_CGamePtr
    ADD EAX,0x68                        ; 0050ee4f
    PUSH EAX                            ; 0050ee52
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ee53
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ee58
    PUSH 0x5e86ab                       ; 0050ee5b | = "Select pistol weapons"
    OR EBX,EAX                          ; 0050ee60
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ee62
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ee67
    PUSH EAX                            ; 0050ee6a
    MOV EAX,[0x0061d95c]                ; 0050ee6b | g_CGamePtr
    ADD EAX,0x7c                        ; 0050ee70
    PUSH EAX                            ; 0050ee73
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ee74
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ee79
    PUSH 0x5e86c1                       ; 0050ee7c | = "Select assault weapons"
    OR EBX,EAX                          ; 0050ee81
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ee83
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ee88
    PUSH EAX                            ; 0050ee8b
    MOV EAX,[0x0061d95c]                ; 0050ee8c | g_CGamePtr
    ADD EAX,0x80                        ; 0050ee91
    PUSH EAX                            ; 0050ee96
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ee97
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ee9c
    PUSH 0x5e86d8                       ; 0050ee9f | = "Select energy weapons"
    OR EBX,EAX                          ; 0050eea4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050eea6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050eeab
    PUSH EAX                            ; 0050eeae
    MOV EAX,[0x0061d95c]                ; 0050eeaf | g_CGamePtr
    ADD EAX,0x84                        ; 0050eeb4
    PUSH EAX                            ; 0050eeb9
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050eeba
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050eebf
    PUSH 0x5e86ee                       ; 0050eec2 | = "Select grenade weapons"
    OR EBX,EAX                          ; 0050eec7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050eec9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050eece
    PUSH EAX                            ; 0050eed1
    MOV EAX,[0x0061d95c]                ; 0050eed2 | g_CGamePtr
    ADD EAX,0x88                        ; 0050eed7
    PUSH EAX                            ; 0050eedc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050eedd
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050eee2
    OR EBX,EAX                          ; 0050eee5
    PUSH 0x5e8705                       ; 0050eee7 | = "Select melee weapons"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050eeec
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050eef1
    PUSH EAX                            ; 0050eef4
    MOV EAX,[0x0061d95c]                ; 0050eef5 | g_CGamePtr
    ADD EAX,0x8c                        ; 0050eefa
    PUSH EAX                            ; 0050eeff
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ef00
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ef05
    PUSH 0x5e871a                       ; 0050ef08 | = "Next weapon"
    OR EBX,EAX                          ; 0050ef0d
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ef0f
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ef14
    PUSH EAX                            ; 0050ef17
    MOV EAX,[0x0061d95c]                ; 0050ef18 | g_CGamePtr
    ADD EAX,0x90                        ; 0050ef1d
    PUSH EAX                            ; 0050ef22
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ef23
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ef28
    PUSH 0x5e8726                       ; 0050ef2b | = "Previous weapon"
    OR EBX,EAX                          ; 0050ef30
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ef32
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ef37
    PUSH EAX                            ; 0050ef3a
    MOV EAX,[0x0061d95c]                ; 0050ef3b | g_CGamePtr
    ADD EAX,0x94                        ; 0050ef40
    PUSH EAX                            ; 0050ef45
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ef46
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ef4b
    PUSH 0x5e8736                       ; 0050ef4e | = "Next item"
    OR EBX,EAX                          ; 0050ef53
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ef55
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ef5a
    PUSH EAX                            ; 0050ef5d
    MOV EAX,[0x0061d95c]                ; 0050ef5e | g_CGamePtr
    ADD EAX,0x98                        ; 0050ef63
    PUSH EAX                            ; 0050ef68
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ef69
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ef6e
    PUSH 0x5e8740                       ; 0050ef71 | = "Previous item"
    OR EBX,EAX                          ; 0050ef76
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ef78
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050ef7d
    PUSH EAX                            ; 0050ef80
    MOV EAX,[0x0061d95c]                ; 0050ef81 | g_CGamePtr
    ADD EAX,0x9c                        ; 0050ef86
    PUSH EAX                            ; 0050ef8b
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050ef8c
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050ef91
    PUSH 0x5e874e                       ; 0050ef94 | = "Item description"
    OR EBX,EAX                          ; 0050ef99
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0050ef9b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0050efa0
    PUSH EAX                            ; 0050efa3
    MOV EAX,[0x0061d95c]                ; 0050efa4 | g_CGamePtr
    ADD EAX,0xa0                        ; 0050efa9
    PUSH EAX                            ; 0050efae
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470 ; 0050efaf
        ;   XREF to: 0050d470 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 0050efb4
    OR EBX,EAX                          ; 0050efb7
    JZ 0x0050e6e8                       ; 0050efb9
        ;   XREF to: 0050e6e8 (CONDITIONAL_JUMP)  ; LAB_0050e6e8
    MOV EAX,[0x0061d95c]                ; 0050efbf | g_CGamePtr
    PUSH EAX                            ; 0050efc4 | g_CGameInstance
    CALL core_game.cpp_FUN_004d0400     ; 0050efc5
        ;   XREF to: 004d0400 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d0400()
    ADD ESP,0x4                         ; 0050efca
    PUSH 0x5e875f                       ; 0050efcd | = "One or more keys not valid.  Restorin..."
    MOV EDX,dword ptr [0x0061abc0]      ; 0050efd2 | g_CEditorToolsPtr
    PUSH EDX                            ; 0050efd8
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0050efd9
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050efde
    ADD ESP,0xc8c                       ; 0050efe1
    POP EBP                             ; 0050efe7
    POP EBX                             ; 0050efe8
    RET                                 ; 0050efe9
    PUSH 0x5e8669                       ; 0050efea | = "Run"
        ;   Label: LAB_0050efea
    JMP 0x0050ed37                      ; 0050efef
        ;   XREF to: 0050ed37 (UNCONDITIONAL_JUMP)  ; LAB_0050ed37

