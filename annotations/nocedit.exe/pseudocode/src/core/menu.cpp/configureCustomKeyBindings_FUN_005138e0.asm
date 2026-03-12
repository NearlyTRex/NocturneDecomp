; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureCustomKeyBindings_FUN_005138e0(void)
;
; Local Variables:
; CPickList        Stack[-0xa7c]:936  local_a7c
; char[512]        Stack[-0x6d4]:512  local_6d4
; char[512]        Stack[-0x4d4]:512  acStack_4d4
; char[512]        Stack[-0x2d4]:512  local_2d4
; char[200]        Stack[-0xd4]:200  local_d4
; int              Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 00511cec
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512ed6
;
; Referenced Globals:
;   void* switchdataD_005138c0 = 00514869
;   TerminatedCString s_core_menu_cpp_00636e40
;   TerminatedCString s_Too_many_custom_keys_00636e51
;   TerminatedCString s_Forward_00636f36
;   TerminatedCString s_Back_00636f3e
;   TerminatedCString s_Walk_00636f43
;   TerminatedCString s_Run_00636f48
;   TerminatedCString s_Strafe_on_00636f4c
;   TerminatedCString s_Strafe_left_00636f56
;   TerminatedCString s_Strafe_right_00636f62
;   TerminatedCString s_Turn_left_00636f6f
;   TerminatedCString s_Turn_right_00636f79
;   TerminatedCString s_Fire_Action_00636f84
;   TerminatedCString s_Use_item_00636f92
;   TerminatedCString s_Light_00636f9b
;   ... and 227 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_menu.cpp_calibrateGamepad_FUN_005104d0
;   core_menu.cpp_getKeyDisplayName_FUN_005134e0
;   core_menu.cpp_isKeyCodeValidForMode_FUN_00513720
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005138e0
        ;   Label: core_menu.cpp_configureCustomKeyBindings_FUN_005138e0
    PUSH EBP                            ; 005138e1
    SUB ESP,0xa74                       ; 005138e2
    MOV EAX,[0x0067b654]                ; 005138e8 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0xbc],0x2      ; 005138ed | g_CGameInstance.game_control
    JNZ 0x00513903                      ; 005138f4
        ;   XREF to: 00513903 (CONDITIONAL_JUMP)  ; LAB_00513903
    CMP dword ptr [EAX + 0xa4],0x0      ; 005138f6 | g_CGameInstance.x_center
    JZ 0x005147bc                       ; 005138fd
        ;   XREF to: 005147bc (CONDITIONAL_JUMP)  ; LAB_005147bc
    PUSH EDI                            ; 00513903
        ;   Label: LAB_00513903
    PUSH ESI                            ; 00513904
    XOR EBX,EBX                         ; 00513905
    MOV dword ptr [ESP + 0xa78],EBX     ; 00513907
    XOR ESI,ESI                         ; 0051390e
        ;   Label: LAB_0051390e
    PUSH 0x636f36                       ; 00513910 | = "Forward"
    MOV dword ptr [0x02f29270],ESI      ; 00513915 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051391b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 00513920 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513926 | g_CustomKeyCount
    ADD ESP,0x4                         ; 0051392c
    MOV ESI,EAX                         ; 0051392f
    LEA EBX,[EDX + 0x28]                ; 00513931 | g_CGameInstance.key_walk
    CMP EDI,0x1e                        ; 00513934
    JL 0x0051395b                       ; 00513937
        ;   XREF to: 0051395b (CONDITIONAL_JUMP)  ; LAB_0051395b
    MOV EBP,0x636e40                    ; 00513939 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 0051393e
    PUSH 0x636e51                       ; 00513943 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513948 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051394e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513953
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513958
    MOV EAX,[0x02f29270]                ; 0051395b | g_CustomKeyCount
        ;   Label: LAB_0051395b
    IMUL EDI,EAX,0x28                   ; 00513960
    ADD EDI,0x2f292f0                   ; 00513963 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513969 | g_CustomKeyPointers | g_CGameInstance.key_walk
    PUSH EDI                            ; 00513970 | g_CustomKeyNames
    MOV AL,byte ptr [ESI]               ; 00513971
        ;   Label: LAB_00513971
    MOV byte ptr [EDI],AL               ; 00513973 | g_CustomKeyNames | DAT_02f292f2
    CMP AL,0x0                          ; 00513975
    JZ 0x00513989                       ; 00513977
        ;   XREF to: 00513989 (CONDITIONAL_JUMP)  ; LAB_00513989
    MOV AL,byte ptr [ESI + 0x1]         ; 00513979
    ADD ESI,0x2                         ; 0051397c
    MOV byte ptr [EDI + 0x1],AL         ; 0051397f | DAT_02f292f1 | DAT_02f292f3
    ADD EDI,0x2                         ; 00513982
    CMP AL,0x0                          ; 00513985
    JNZ 0x00513971                      ; 00513987
        ;   XREF to: 00513971 (CONDITIONAL_JUMP)  ; LAB_00513971
    POP EDI                             ; 00513989
        ;   Label: LAB_00513989
    MOV ECX,dword ptr [0x02f29270]      ; 0051398a | g_CustomKeyCount
    INC ECX                             ; 00513990
    PUSH 0x636f3e                       ; 00513991 | = "Back"
    MOV dword ptr [0x02f29270],ECX      ; 00513996 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051399c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 005139a1 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005139a7 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005139ad
    MOV ESI,EAX                         ; 005139b0
    LEA EBX,[EDX + 0x2c]                ; 005139b2 | g_CGameInstance.key_backup
    CMP EDI,0x1e                        ; 005139b5
    JL 0x005139dc                       ; 005139b8
        ;   XREF to: 005139dc (CONDITIONAL_JUMP)  ; LAB_005139dc
    MOV EBP,0x636e40                    ; 005139ba | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005139bf
    PUSH 0x636e51                       ; 005139c4 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005139c9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005139cf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005139d4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005139d9
    MOV EAX,[0x02f29270]                ; 005139dc | g_CustomKeyCount
        ;   Label: LAB_005139dc
    IMUL EDI,EAX,0x28                   ; 005139e1
    ADD EDI,0x2f292f0                   ; 005139e4 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 005139ea | g_CustomKeyPointers[1] | g_CGameInstance.key_backup
    PUSH EDI                            ; 005139f1 | g_CustomKeyNames[1][0]
    MOV AL,byte ptr [ESI]               ; 005139f2
        ;   Label: LAB_005139f2
    MOV byte ptr [EDI],AL               ; 005139f4 | g_CustomKeyNames[1][0] | g_CustomKeyNames[1][2]
    CMP AL,0x0                          ; 005139f6
    JZ 0x00513a0a                       ; 005139f8
        ;   XREF to: 00513a0a (CONDITIONAL_JUMP)  ; LAB_00513a0a
    MOV AL,byte ptr [ESI + 0x1]         ; 005139fa
    ADD ESI,0x2                         ; 005139fd
    MOV byte ptr [EDI + 0x1],AL         ; 00513a00 | g_CustomKeyNames[1][1] | DAT_02f2931b
    ADD EDI,0x2                         ; 00513a03
    CMP AL,0x0                          ; 00513a06
    JNZ 0x005139f2                      ; 00513a08
        ;   XREF to: 005139f2 (CONDITIONAL_JUMP)  ; LAB_005139f2
    POP EDI                             ; 00513a0a
        ;   Label: LAB_00513a0a
    MOV ECX,dword ptr [0x02f29270]      ; 00513a0b | g_CustomKeyCount
    MOV EAX,[0x0067b654]                ; 00513a11 | g_CGameInstance | g_CGamePtr
    INC ECX                             ; 00513a16
    MOV EBX,dword ptr [EAX + 0x98]      ; 00513a17 | g_CGameInstance.always_run
    MOV dword ptr [0x02f29270],ECX      ; 00513a1d | g_CustomKeyCount
    TEST EBX,EBX                        ; 00513a23
    JZ 0x005147d2                       ; 00513a25
        ;   XREF to: 005147d2 (CONDITIONAL_JUMP)  ; LAB_005147d2
    PUSH 0x636f43                       ; 00513a2b | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513a30
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00513a30
    MOV EBX,dword ptr [0x0067b654]      ; 00513a35 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513a3b | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513a41
    MOV ESI,EAX                         ; 00513a44
    ADD EBX,0x30                        ; 00513a46 | g_CGameInstance.key_run
    CMP EDI,0x1e                        ; 00513a49
    JL 0x00513a70                       ; 00513a4c
        ;   XREF to: 00513a70 (CONDITIONAL_JUMP)  ; LAB_00513a70
    MOV EBP,0x636e40                    ; 00513a4e | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513a53
    PUSH 0x636e51                       ; 00513a58 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513a5d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513a63 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513a68
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513a6d
    MOV EAX,[0x02f29270]                ; 00513a70 | g_CustomKeyCount
        ;   Label: LAB_00513a70
    IMUL EDI,EAX,0x28                   ; 00513a75
    ADD EDI,0x2f292f0                   ; 00513a78 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513a7e | g_CustomKeyPointers[2] | g_CGameInstance.key_run
    PUSH EDI                            ; 00513a85 | g_CustomKeyNames[2][0]
    MOV AL,byte ptr [ESI]               ; 00513a86
        ;   Label: LAB_00513a86
    MOV byte ptr [EDI],AL               ; 00513a88 | g_CustomKeyNames[2][0] | g_CustomKeyNames[2][2]
    CMP AL,0x0                          ; 00513a8a
    JZ 0x00513a9e                       ; 00513a8c
        ;   XREF to: 00513a9e (CONDITIONAL_JUMP)  ; LAB_00513a9e
    MOV AL,byte ptr [ESI + 0x1]         ; 00513a8e
    ADD ESI,0x2                         ; 00513a91
    MOV byte ptr [EDI + 0x1],AL         ; 00513a94 | g_CustomKeyNames[2][1] | DAT_02f29343
    ADD EDI,0x2                         ; 00513a97
    CMP AL,0x0                          ; 00513a9a
    JNZ 0x00513a86                      ; 00513a9c
        ;   XREF to: 00513a86 (CONDITIONAL_JUMP)  ; LAB_00513a86
    POP EDI                             ; 00513a9e
        ;   Label: LAB_00513a9e
    INC dword ptr [0x02f29270]          ; 00513a9f | g_CustomKeyCount
    PUSH 0x636f4c                       ; 00513aa5 | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513aaa
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513aaf | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513ab5 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513abb
    MOV ESI,EAX                         ; 00513abe
    ADD EBX,0x34                        ; 00513ac0 | g_CGameInstance.key_strafe
    CMP EDI,0x1e                        ; 00513ac3
    JL 0x00513aea                       ; 00513ac6
        ;   XREF to: 00513aea (CONDITIONAL_JUMP)  ; LAB_00513aea
    MOV EBP,0x636e40                    ; 00513ac8 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513acd
    PUSH 0x636e51                       ; 00513ad2 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513ad7 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513add | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513ae2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513ae7
    MOV EAX,[0x02f29270]                ; 00513aea | g_CustomKeyCount
        ;   Label: LAB_00513aea
    IMUL EDI,EAX,0x28                   ; 00513aef
    ADD EDI,0x2f292f0                   ; 00513af2 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513af8 | g_CustomKeyPointers[3] | g_CGameInstance.key_strafe
    PUSH EDI                            ; 00513aff | g_CustomKeyNames[3][0]
    MOV AL,byte ptr [ESI]               ; 00513b00
        ;   Label: LAB_00513b00
    MOV byte ptr [EDI],AL               ; 00513b02 | g_CustomKeyNames[3][0] | g_CustomKeyNames[3][2]
    CMP AL,0x0                          ; 00513b04
    JZ 0x00513b18                       ; 00513b06
        ;   XREF to: 00513b18 (CONDITIONAL_JUMP)  ; LAB_00513b18
    MOV AL,byte ptr [ESI + 0x1]         ; 00513b08
    ADD ESI,0x2                         ; 00513b0b
    MOV byte ptr [EDI + 0x1],AL         ; 00513b0e | g_CustomKeyNames[3][1] | DAT_02f2936b
    ADD EDI,0x2                         ; 00513b11
    CMP AL,0x0                          ; 00513b14
    JNZ 0x00513b00                      ; 00513b16
        ;   XREF to: 00513b00 (CONDITIONAL_JUMP)  ; LAB_00513b00
    POP EDI                             ; 00513b18
        ;   Label: LAB_00513b18
    MOV ECX,dword ptr [0x02f29270]      ; 00513b19 | g_CustomKeyCount
    INC ECX                             ; 00513b1f
    PUSH 0x636f56                       ; 00513b20 | = "Strafe left"
    MOV dword ptr [0x02f29270],ECX      ; 00513b25 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513b2b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513b30 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513b36 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513b3c
    MOV ESI,EAX                         ; 00513b3f
    ADD EBX,0x38                        ; 00513b41 | g_CGameInstance.key_strafe_left
    CMP EDI,0x1e                        ; 00513b44
    JL 0x00513b6b                       ; 00513b47
        ;   XREF to: 00513b6b (CONDITIONAL_JUMP)  ; LAB_00513b6b
    MOV EBP,0x636e40                    ; 00513b49 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513b4e
    PUSH 0x636e51                       ; 00513b53 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513b58 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513b5e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513b63
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513b68
    MOV EAX,[0x02f29270]                ; 00513b6b | g_CustomKeyCount
        ;   Label: LAB_00513b6b
    IMUL EDI,EAX,0x28                   ; 00513b70
    ADD EDI,0x2f292f0                   ; 00513b73 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513b79 | g_CustomKeyPointers[4] | g_CGameInstance.key_strafe_left
    PUSH EDI                            ; 00513b80 | g_CustomKeyNames[4][0]
    MOV AL,byte ptr [ESI]               ; 00513b81
        ;   Label: LAB_00513b81
    MOV byte ptr [EDI],AL               ; 00513b83 | g_CustomKeyNames[4][0] | g_CustomKeyNames[4][2]
    CMP AL,0x0                          ; 00513b85
    JZ 0x00513b99                       ; 00513b87
        ;   XREF to: 00513b99 (CONDITIONAL_JUMP)  ; LAB_00513b99
    MOV AL,byte ptr [ESI + 0x1]         ; 00513b89
    ADD ESI,0x2                         ; 00513b8c
    MOV byte ptr [EDI + 0x1],AL         ; 00513b8f | g_CustomKeyNames[4][1] | DAT_02f29393
    ADD EDI,0x2                         ; 00513b92
    CMP AL,0x0                          ; 00513b95
    JNZ 0x00513b81                      ; 00513b97
        ;   XREF to: 00513b81 (CONDITIONAL_JUMP)  ; LAB_00513b81
    POP EDI                             ; 00513b99
        ;   Label: LAB_00513b99
    MOV ECX,dword ptr [0x02f29270]      ; 00513b9a | g_CustomKeyCount
    INC ECX                             ; 00513ba0
    PUSH 0x636f62                       ; 00513ba1 | = "Strafe right"
    MOV dword ptr [0x02f29270],ECX      ; 00513ba6 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513bac
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513bb1 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513bb7 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513bbd
    MOV ESI,EAX                         ; 00513bc0
    ADD EBX,0x3c                        ; 00513bc2 | g_CGameInstance.key_strafe_right
    CMP EDI,0x1e                        ; 00513bc5
    JL 0x00513bec                       ; 00513bc8
        ;   XREF to: 00513bec (CONDITIONAL_JUMP)  ; LAB_00513bec
    MOV EBP,0x636e40                    ; 00513bca | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513bcf
    PUSH 0x636e51                       ; 00513bd4 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513bd9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513bdf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513be4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513be9
    MOV EAX,[0x02f29270]                ; 00513bec | g_CustomKeyCount
        ;   Label: LAB_00513bec
    IMUL EDI,EAX,0x28                   ; 00513bf1
    ADD EDI,0x2f292f0                   ; 00513bf4 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513bfa | g_CustomKeyPointers[5] | g_CGameInstance.key_strafe_right
    PUSH EDI                            ; 00513c01 | g_CustomKeyNames[5][0]
    MOV AL,byte ptr [ESI]               ; 00513c02
        ;   Label: LAB_00513c02
    MOV byte ptr [EDI],AL               ; 00513c04 | g_CustomKeyNames[5][0] | g_CustomKeyNames[5][2]
    CMP AL,0x0                          ; 00513c06
    JZ 0x00513c1a                       ; 00513c08
        ;   XREF to: 00513c1a (CONDITIONAL_JUMP)  ; LAB_00513c1a
    MOV AL,byte ptr [ESI + 0x1]         ; 00513c0a
    ADD ESI,0x2                         ; 00513c0d
    MOV byte ptr [EDI + 0x1],AL         ; 00513c10 | g_CustomKeyNames[5][1] | DAT_02f293bb
    ADD EDI,0x2                         ; 00513c13
    CMP AL,0x0                          ; 00513c16
    JNZ 0x00513c02                      ; 00513c18
        ;   XREF to: 00513c02 (CONDITIONAL_JUMP)  ; LAB_00513c02
    POP EDI                             ; 00513c1a
        ;   Label: LAB_00513c1a
    MOV ECX,dword ptr [0x02f29270]      ; 00513c1b | g_CustomKeyCount
    INC ECX                             ; 00513c21
    PUSH 0x636f6f                       ; 00513c22 | = "Turn left"
    MOV dword ptr [0x02f29270],ECX      ; 00513c27 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513c2d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513c32 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513c38 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513c3e
    MOV ESI,EAX                         ; 00513c41
    ADD EBX,0x44                        ; 00513c43 | g_CGameInstance.key_left
    CMP EDI,0x1e                        ; 00513c46
    JL 0x00513c6d                       ; 00513c49
        ;   XREF to: 00513c6d (CONDITIONAL_JUMP)  ; LAB_00513c6d
    MOV EBP,0x636e40                    ; 00513c4b | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513c50
    PUSH 0x636e51                       ; 00513c55 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513c5a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513c60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513c65
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513c6a
    MOV EAX,[0x02f29270]                ; 00513c6d | g_CustomKeyCount
        ;   Label: LAB_00513c6d
    IMUL EDI,EAX,0x28                   ; 00513c72
    ADD EDI,0x2f292f0                   ; 00513c75 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513c7b | g_CustomKeyPointers[6] | g_CGameInstance.key_left
    PUSH EDI                            ; 00513c82 | g_CustomKeyNames[6][0]
    MOV AL,byte ptr [ESI]               ; 00513c83
        ;   Label: LAB_00513c83
    MOV byte ptr [EDI],AL               ; 00513c85 | g_CustomKeyNames[6][0] | g_CustomKeyNames[6][2]
    CMP AL,0x0                          ; 00513c87
    JZ 0x00513c9b                       ; 00513c89
        ;   XREF to: 00513c9b (CONDITIONAL_JUMP)  ; LAB_00513c9b
    MOV AL,byte ptr [ESI + 0x1]         ; 00513c8b
    ADD ESI,0x2                         ; 00513c8e
    MOV byte ptr [EDI + 0x1],AL         ; 00513c91 | g_CustomKeyNames[6][1] | DAT_02f293e3
    ADD EDI,0x2                         ; 00513c94
    CMP AL,0x0                          ; 00513c97
    JNZ 0x00513c83                      ; 00513c99
        ;   XREF to: 00513c83 (CONDITIONAL_JUMP)  ; LAB_00513c83
    POP EDI                             ; 00513c9b
        ;   Label: LAB_00513c9b
    MOV ECX,dword ptr [0x02f29270]      ; 00513c9c | g_CustomKeyCount
    INC ECX                             ; 00513ca2
    PUSH 0x636f79                       ; 00513ca3 | = "Turn right"
    MOV dword ptr [0x02f29270],ECX      ; 00513ca8 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513cae
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513cb3 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513cb9 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513cbf
    MOV ESI,EAX                         ; 00513cc2
    ADD EBX,0x40                        ; 00513cc4 | g_CGameInstance.key_right
    CMP EDI,0x1e                        ; 00513cc7
    JL 0x00513cee                       ; 00513cca
        ;   XREF to: 00513cee (CONDITIONAL_JUMP)  ; LAB_00513cee
    MOV EBP,0x636e40                    ; 00513ccc | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513cd1
    PUSH 0x636e51                       ; 00513cd6 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513cdb | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513ce1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513ce6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513ceb
    MOV EAX,[0x02f29270]                ; 00513cee | g_CustomKeyCount
        ;   Label: LAB_00513cee
    IMUL EDI,EAX,0x28                   ; 00513cf3
    ADD EDI,0x2f292f0                   ; 00513cf6 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513cfc | g_CustomKeyPointers[7] | g_CGameInstance.key_right
    PUSH EDI                            ; 00513d03 | g_CustomKeyNames[7][0]
    MOV AL,byte ptr [ESI]               ; 00513d04
        ;   Label: LAB_00513d04
    MOV byte ptr [EDI],AL               ; 00513d06 | g_CustomKeyNames[7][0] | g_CustomKeyNames[7][2]
    CMP AL,0x0                          ; 00513d08
    JZ 0x00513d1c                       ; 00513d0a
        ;   XREF to: 00513d1c (CONDITIONAL_JUMP)  ; LAB_00513d1c
    MOV AL,byte ptr [ESI + 0x1]         ; 00513d0c
    ADD ESI,0x2                         ; 00513d0f
    MOV byte ptr [EDI + 0x1],AL         ; 00513d12 | g_CustomKeyNames[7][1] | DAT_02f2940b
    ADD EDI,0x2                         ; 00513d15
    CMP AL,0x0                          ; 00513d18
    JNZ 0x00513d04                      ; 00513d1a
        ;   XREF to: 00513d04 (CONDITIONAL_JUMP)  ; LAB_00513d04
    POP EDI                             ; 00513d1c
        ;   Label: LAB_00513d1c
    MOV ECX,dword ptr [0x02f29270]      ; 00513d1d | g_CustomKeyCount
    INC ECX                             ; 00513d23
    PUSH 0x636f84                       ; 00513d24 | = "Fire / Action"
    MOV dword ptr [0x02f29270],ECX      ; 00513d29 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513d2f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513d34 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513d3a | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513d40
    MOV ESI,EAX                         ; 00513d43
    ADD EBX,0x48                        ; 00513d45 | g_CGameInstance.key_fire
    CMP EDI,0x1e                        ; 00513d48
    JL 0x00513d6f                       ; 00513d4b
        ;   XREF to: 00513d6f (CONDITIONAL_JUMP)  ; LAB_00513d6f
    MOV EBP,0x636e40                    ; 00513d4d | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513d52
    PUSH 0x636e51                       ; 00513d57 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513d5c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513d62 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513d67
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513d6c
    MOV EAX,[0x02f29270]                ; 00513d6f | g_CustomKeyCount
        ;   Label: LAB_00513d6f
    IMUL EDI,EAX,0x28                   ; 00513d74
    ADD EDI,0x2f292f0                   ; 00513d77 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513d7d | g_CustomKeyPointers[8] | g_CGameInstance.key_fire
    PUSH EDI                            ; 00513d84 | g_CustomKeyNames[8][0]
    MOV AL,byte ptr [ESI]               ; 00513d85
        ;   Label: LAB_00513d85
    MOV byte ptr [EDI],AL               ; 00513d87 | g_CustomKeyNames[8][0] | g_CustomKeyNames[8][2]
    CMP AL,0x0                          ; 00513d89
    JZ 0x00513d9d                       ; 00513d8b
        ;   XREF to: 00513d9d (CONDITIONAL_JUMP)  ; LAB_00513d9d
    MOV AL,byte ptr [ESI + 0x1]         ; 00513d8d
    ADD ESI,0x2                         ; 00513d90
    MOV byte ptr [EDI + 0x1],AL         ; 00513d93 | g_CustomKeyNames[8][1] | DAT_02f29433
    ADD EDI,0x2                         ; 00513d96
    CMP AL,0x0                          ; 00513d99
    JNZ 0x00513d85                      ; 00513d9b
        ;   XREF to: 00513d85 (CONDITIONAL_JUMP)  ; LAB_00513d85
    POP EDI                             ; 00513d9d
        ;   Label: LAB_00513d9d
    MOV ECX,dword ptr [0x02f29270]      ; 00513d9e | g_CustomKeyCount
    INC ECX                             ; 00513da4
    PUSH 0x636f92                       ; 00513da5 | = "Use item"
    MOV dword ptr [0x02f29270],ECX      ; 00513daa | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513db0
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 00513db5 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513dbb | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513dc1
    MOV ESI,EAX                         ; 00513dc4
    LEA EBX,[EDX + 0x4c]                ; 00513dc6 | g_CGameInstance.key_use_item
    CMP EDI,0x1e                        ; 00513dc9
    JL 0x00513df0                       ; 00513dcc
        ;   XREF to: 00513df0 (CONDITIONAL_JUMP)  ; LAB_00513df0
    MOV EBP,0x636e40                    ; 00513dce | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513dd3
    PUSH 0x636e51                       ; 00513dd8 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513ddd | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513de3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513de8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513ded
    MOV EAX,[0x02f29270]                ; 00513df0 | g_CustomKeyCount
        ;   Label: LAB_00513df0
    IMUL EDI,EAX,0x28                   ; 00513df5
    ADD EDI,0x2f292f0                   ; 00513df8 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513dfe | g_CustomKeyPointers[9] | g_CGameInstance.key_use_item
    PUSH EDI                            ; 00513e05 | g_CustomKeyNames[9][0]
    MOV AL,byte ptr [ESI]               ; 00513e06
        ;   Label: LAB_00513e06
    MOV byte ptr [EDI],AL               ; 00513e08 | g_CustomKeyNames[9][0] | g_CustomKeyNames[9][2]
    CMP AL,0x0                          ; 00513e0a
    JZ 0x00513e1e                       ; 00513e0c
        ;   XREF to: 00513e1e (CONDITIONAL_JUMP)  ; LAB_00513e1e
    MOV AL,byte ptr [ESI + 0x1]         ; 00513e0e
    ADD ESI,0x2                         ; 00513e11
    MOV byte ptr [EDI + 0x1],AL         ; 00513e14 | g_CustomKeyNames[9][1] | DAT_02f2945b
    ADD EDI,0x2                         ; 00513e17
    CMP AL,0x0                          ; 00513e1a
    JNZ 0x00513e06                      ; 00513e1c
        ;   XREF to: 00513e06 (CONDITIONAL_JUMP)  ; LAB_00513e06
    POP EDI                             ; 00513e1e
        ;   Label: LAB_00513e1e
    MOV ECX,dword ptr [0x02f29270]      ; 00513e1f | g_CustomKeyCount
    INC ECX                             ; 00513e25
    PUSH 0x636f9b                       ; 00513e26 | = "Light"
    MOV dword ptr [0x02f29270],ECX      ; 00513e2b | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513e31
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 00513e36 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513e3c | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513e42
    MOV ESI,EAX                         ; 00513e45
    LEA EBX,[EDX + 0x50]                ; 00513e47 | g_CGameInstance.key_light
    CMP EDI,0x1e                        ; 00513e4a
    JL 0x00513e71                       ; 00513e4d
        ;   XREF to: 00513e71 (CONDITIONAL_JUMP)  ; LAB_00513e71
    MOV EBP,0x636e40                    ; 00513e4f | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513e54
    PUSH 0x636e51                       ; 00513e59 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513e5e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513e64 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513e69
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513e6e
    MOV EAX,[0x02f29270]                ; 00513e71 | g_CustomKeyCount
        ;   Label: LAB_00513e71
    IMUL EDI,EAX,0x28                   ; 00513e76
    ADD EDI,0x2f292f0                   ; 00513e79 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513e7f | g_CustomKeyPointers[10] | g_CGameInstance.key_light
    PUSH EDI                            ; 00513e86 | g_CustomKeyNames[10][0]
    MOV AL,byte ptr [ESI]               ; 00513e87
        ;   Label: LAB_00513e87
    MOV byte ptr [EDI],AL               ; 00513e89 | g_CustomKeyNames[10][0] | g_CustomKeyNames[10][2]
    CMP AL,0x0                          ; 00513e8b
    JZ 0x00513e9f                       ; 00513e8d
        ;   XREF to: 00513e9f (CONDITIONAL_JUMP)  ; LAB_00513e9f
    MOV AL,byte ptr [ESI + 0x1]         ; 00513e8f
    ADD ESI,0x2                         ; 00513e92
    MOV byte ptr [EDI + 0x1],AL         ; 00513e95 | g_CustomKeyNames[10][1] | DAT_02f29483
    ADD EDI,0x2                         ; 00513e98
    CMP AL,0x0                          ; 00513e9b
    JNZ 0x00513e87                      ; 00513e9d
        ;   XREF to: 00513e87 (CONDITIONAL_JUMP)  ; LAB_00513e87
    POP EDI                             ; 00513e9f
        ;   Label: LAB_00513e9f
    MOV ECX,dword ptr [0x02f29270]      ; 00513ea0 | g_CustomKeyCount
    INC ECX                             ; 00513ea6
    PUSH 0x636fa1                       ; 00513ea7 | = "Night Vision"
    MOV dword ptr [0x02f29270],ECX      ; 00513eac | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513eb2
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513eb7 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513ebd | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513ec3
    MOV ESI,EAX                         ; 00513ec6
    ADD EBX,0x54                        ; 00513ec8 | g_CGameInstance.key_infrared
    CMP EDI,0x1e                        ; 00513ecb
    JL 0x00513ef2                       ; 00513ece
        ;   XREF to: 00513ef2 (CONDITIONAL_JUMP)  ; LAB_00513ef2
    MOV EBP,0x636e40                    ; 00513ed0 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513ed5
    PUSH 0x636e51                       ; 00513eda | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513edf | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513ee5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513eea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513eef
    MOV EAX,[0x02f29270]                ; 00513ef2 | g_CustomKeyCount
        ;   Label: LAB_00513ef2
    IMUL EDI,EAX,0x28                   ; 00513ef7
    ADD EDI,0x2f292f0                   ; 00513efa | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513f00 | g_CustomKeyPointers[11] | g_CGameInstance.key_infrared
    PUSH EDI                            ; 00513f07 | g_CustomKeyNames[11][0]
    MOV AL,byte ptr [ESI]               ; 00513f08
        ;   Label: LAB_00513f08
    MOV byte ptr [EDI],AL               ; 00513f0a | g_CustomKeyNames[11][0] | g_CustomKeyNames[11][2]
    CMP AL,0x0                          ; 00513f0c
    JZ 0x00513f20                       ; 00513f0e
        ;   XREF to: 00513f20 (CONDITIONAL_JUMP)  ; LAB_00513f20
    MOV AL,byte ptr [ESI + 0x1]         ; 00513f10
    ADD ESI,0x2                         ; 00513f13
    MOV byte ptr [EDI + 0x1],AL         ; 00513f16 | g_CustomKeyNames[11][1] | DAT_02f294ab
    ADD EDI,0x2                         ; 00513f19
    CMP AL,0x0                          ; 00513f1c
    JNZ 0x00513f08                      ; 00513f1e
        ;   XREF to: 00513f08 (CONDITIONAL_JUMP)  ; LAB_00513f08
    POP EDI                             ; 00513f20
        ;   Label: LAB_00513f20
    MOV ECX,dword ptr [0x02f29270]      ; 00513f21 | g_CustomKeyCount
    INC ECX                             ; 00513f27
    PUSH 0x636fae                       ; 00513f28 | = "Draw"
    MOV dword ptr [0x02f29270],ECX      ; 00513f2d | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513f33
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513f38 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513f3e | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513f44
    MOV ESI,EAX                         ; 00513f47
    ADD EBX,0x58                        ; 00513f49 | g_CGameInstance.key_draw
    CMP EDI,0x1e                        ; 00513f4c
    JL 0x00513f73                       ; 00513f4f
        ;   XREF to: 00513f73 (CONDITIONAL_JUMP)  ; LAB_00513f73
    MOV EBP,0x636e40                    ; 00513f51 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513f56
    PUSH 0x636e51                       ; 00513f5b | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513f60 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513f66 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513f6b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513f70
    MOV EAX,[0x02f29270]                ; 00513f73 | g_CustomKeyCount
        ;   Label: LAB_00513f73
    IMUL EDI,EAX,0x28                   ; 00513f78
    ADD EDI,0x2f292f0                   ; 00513f7b | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00513f81 | g_CustomKeyPointers[12] | g_CGameInstance.key_draw
    PUSH EDI                            ; 00513f88 | g_CustomKeyNames[12][0]
    MOV AL,byte ptr [ESI]               ; 00513f89
        ;   Label: LAB_00513f89
    MOV byte ptr [EDI],AL               ; 00513f8b | g_CustomKeyNames[12][0] | g_CustomKeyNames[12][2]
    CMP AL,0x0                          ; 00513f8d
    JZ 0x00513fa1                       ; 00513f8f
        ;   XREF to: 00513fa1 (CONDITIONAL_JUMP)  ; LAB_00513fa1
    MOV AL,byte ptr [ESI + 0x1]         ; 00513f91
    ADD ESI,0x2                         ; 00513f94
    MOV byte ptr [EDI + 0x1],AL         ; 00513f97 | g_CustomKeyNames[12][1] | DAT_02f294d3
    ADD EDI,0x2                         ; 00513f9a
    CMP AL,0x0                          ; 00513f9d
    JNZ 0x00513f89                      ; 00513f9f
        ;   XREF to: 00513f89 (CONDITIONAL_JUMP)  ; LAB_00513f89
    POP EDI                             ; 00513fa1
        ;   Label: LAB_00513fa1
    MOV ECX,dword ptr [0x02f29270]      ; 00513fa2 | g_CustomKeyCount
    INC ECX                             ; 00513fa8
    PUSH 0x636fb3                       ; 00513fa9 | = "Point up"
    MOV dword ptr [0x02f29270],ECX      ; 00513fae | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00513fb4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00513fb9 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00513fbf | g_CustomKeyCount
    ADD ESP,0x4                         ; 00513fc5
    MOV ESI,EAX                         ; 00513fc8
    ADD EBX,0x60                        ; 00513fca | g_CGameInstance.key_point_up
    CMP EDI,0x1e                        ; 00513fcd
    JL 0x00513ff4                       ; 00513fd0
        ;   XREF to: 00513ff4 (CONDITIONAL_JUMP)  ; LAB_00513ff4
    MOV EBP,0x636e40                    ; 00513fd2 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00513fd7
    PUSH 0x636e51                       ; 00513fdc | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00513fe1 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00513fe7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00513fec
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00513ff1
    MOV EAX,[0x02f29270]                ; 00513ff4 | g_CustomKeyCount
        ;   Label: LAB_00513ff4
    IMUL EDI,EAX,0x28                   ; 00513ff9
    ADD EDI,0x2f292f0                   ; 00513ffc | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514002 | g_CustomKeyPointers[13] | g_CGameInstance.key_point_up
    PUSH EDI                            ; 00514009 | g_CustomKeyNames[13][0]
    MOV AL,byte ptr [ESI]               ; 0051400a
        ;   Label: LAB_0051400a
    MOV byte ptr [EDI],AL               ; 0051400c | g_CustomKeyNames[13][0] | g_CustomKeyNames[13][2]
    CMP AL,0x0                          ; 0051400e
    JZ 0x00514022                       ; 00514010
        ;   XREF to: 00514022 (CONDITIONAL_JUMP)  ; LAB_00514022
    MOV AL,byte ptr [ESI + 0x1]         ; 00514012
    ADD ESI,0x2                         ; 00514015
    MOV byte ptr [EDI + 0x1],AL         ; 00514018 | g_CustomKeyNames[13][1] | DAT_02f294fb
    ADD EDI,0x2                         ; 0051401b
    CMP AL,0x0                          ; 0051401e
    JNZ 0x0051400a                      ; 00514020
        ;   XREF to: 0051400a (CONDITIONAL_JUMP)  ; LAB_0051400a
    POP EDI                             ; 00514022
        ;   Label: LAB_00514022
    MOV ECX,dword ptr [0x02f29270]      ; 00514023 | g_CustomKeyCount
    INC ECX                             ; 00514029
    PUSH 0x636fbc                       ; 0051402a | = "Point down"
    MOV dword ptr [0x02f29270],ECX      ; 0051402f | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514035
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 0051403a | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514040 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00514046
    MOV ESI,EAX                         ; 00514049
    ADD EBX,0x64                        ; 0051404b | g_CGameInstance.key_point_down
    CMP EDI,0x1e                        ; 0051404e
    JL 0x00514075                       ; 00514051
        ;   XREF to: 00514075 (CONDITIONAL_JUMP)  ; LAB_00514075
    MOV EBP,0x636e40                    ; 00514053 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00514058
    PUSH 0x636e51                       ; 0051405d | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00514062 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00514068 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051406d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514072
    MOV EAX,[0x02f29270]                ; 00514075 | g_CustomKeyCount
        ;   Label: LAB_00514075
    IMUL EDI,EAX,0x28                   ; 0051407a
    ADD EDI,0x2f292f0                   ; 0051407d | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514083 | g_CustomKeyPointers[14] | g_CGameInstance.key_point_down
    PUSH EDI                            ; 0051408a | g_CustomKeyNames[14][0]
    MOV AL,byte ptr [ESI]               ; 0051408b
        ;   Label: LAB_0051408b
    MOV byte ptr [EDI],AL               ; 0051408d | g_CustomKeyNames[14][0] | g_CustomKeyNames[14][2]
    CMP AL,0x0                          ; 0051408f
    JZ 0x005140a3                       ; 00514091
        ;   XREF to: 005140a3 (CONDITIONAL_JUMP)  ; LAB_005140a3
    MOV AL,byte ptr [ESI + 0x1]         ; 00514093
    ADD ESI,0x2                         ; 00514096
    MOV byte ptr [EDI + 0x1],AL         ; 00514099 | g_CustomKeyNames[14][1] | DAT_02f29523
    ADD EDI,0x2                         ; 0051409c
    CMP AL,0x0                          ; 0051409f
    JNZ 0x0051408b                      ; 005140a1
        ;   XREF to: 0051408b (CONDITIONAL_JUMP)  ; LAB_0051408b
    POP EDI                             ; 005140a3
        ;   Label: LAB_005140a3
    MOV ECX,dword ptr [0x02f29270]      ; 005140a4 | g_CustomKeyCount
    INC ECX                             ; 005140aa
    PUSH 0x636fc7                       ; 005140ab | = "Jump"
    MOV dword ptr [0x02f29270],ECX      ; 005140b0 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005140b6
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 005140bb | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005140c1 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005140c7
    MOV ESI,EAX                         ; 005140ca
    LEA EBX,[EDX + 0x5c]                ; 005140cc | g_CGameInstance.key_jump
    CMP EDI,0x1e                        ; 005140cf
    JL 0x005140f6                       ; 005140d2
        ;   XREF to: 005140f6 (CONDITIONAL_JUMP)  ; LAB_005140f6
    MOV EBP,0x636e40                    ; 005140d4 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005140d9
    PUSH 0x636e51                       ; 005140de | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005140e3 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005140e9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005140ee
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005140f3
    MOV EAX,[0x02f29270]                ; 005140f6 | g_CustomKeyCount
        ;   Label: LAB_005140f6
    IMUL EDI,EAX,0x28                   ; 005140fb
    ADD EDI,0x2f292f0                   ; 005140fe | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514104 | g_CustomKeyPointers[15] | g_CGameInstance.key_jump
    PUSH EDI                            ; 0051410b | g_CustomKeyNames[15][0]
    MOV AL,byte ptr [ESI]               ; 0051410c
        ;   Label: LAB_0051410c
    MOV byte ptr [EDI],AL               ; 0051410e | g_CustomKeyNames[15][0] | g_CustomKeyNames[15][2]
    CMP AL,0x0                          ; 00514110
    JZ 0x00514124                       ; 00514112
        ;   XREF to: 00514124 (CONDITIONAL_JUMP)  ; LAB_00514124
    MOV AL,byte ptr [ESI + 0x1]         ; 00514114
    ADD ESI,0x2                         ; 00514117
    MOV byte ptr [EDI + 0x1],AL         ; 0051411a | g_CustomKeyNames[15][1] | DAT_02f2954b
    ADD EDI,0x2                         ; 0051411d
    CMP AL,0x0                          ; 00514120
    JNZ 0x0051410c                      ; 00514122
        ;   XREF to: 0051410c (CONDITIONAL_JUMP)  ; LAB_0051410c
    POP EDI                             ; 00514124
        ;   Label: LAB_00514124
    MOV ECX,dword ptr [0x02f29270]      ; 00514125 | g_CustomKeyCount
    INC ECX                             ; 0051412b
    PUSH 0x636fcc                       ; 0051412c | = "Select pistol weapons"
    MOV dword ptr [0x02f29270],ECX      ; 00514131 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514137
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 0051413c | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514142 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00514148
    MOV ESI,EAX                         ; 0051414b
    ADD EBX,0x68                        ; 0051414d | g_CGameInstance.key_weapon_1
    CMP EDI,0x1e                        ; 00514150
    JL 0x00514177                       ; 00514153
        ;   XREF to: 00514177 (CONDITIONAL_JUMP)  ; LAB_00514177
    MOV EBP,0x636e40                    ; 00514155 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 0051415a
    PUSH 0x636e51                       ; 0051415f | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00514164 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051416a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051416f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514174
    MOV EAX,[0x02f29270]                ; 00514177 | g_CustomKeyCount
        ;   Label: LAB_00514177
    IMUL EDI,EAX,0x28                   ; 0051417c
    ADD EDI,0x2f292f0                   ; 0051417f | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514185 | g_CustomKeyPointers[16] | g_CGameInstance.key_weapon_1
    PUSH EDI                            ; 0051418c | g_CustomKeyNames[16][0]
    MOV AL,byte ptr [ESI]               ; 0051418d
        ;   Label: LAB_0051418d
    MOV byte ptr [EDI],AL               ; 0051418f | g_CustomKeyNames[16][0] | g_CustomKeyNames[16][2]
    CMP AL,0x0                          ; 00514191
    JZ 0x005141a5                       ; 00514193
        ;   XREF to: 005141a5 (CONDITIONAL_JUMP)  ; LAB_005141a5
    MOV AL,byte ptr [ESI + 0x1]         ; 00514195
    ADD ESI,0x2                         ; 00514198
    MOV byte ptr [EDI + 0x1],AL         ; 0051419b | g_CustomKeyNames[16][1] | DAT_02f29573
    ADD EDI,0x2                         ; 0051419e
    CMP AL,0x0                          ; 005141a1
    JNZ 0x0051418d                      ; 005141a3
        ;   XREF to: 0051418d (CONDITIONAL_JUMP)  ; LAB_0051418d
    POP EDI                             ; 005141a5
        ;   Label: LAB_005141a5
    MOV ECX,dword ptr [0x02f29270]      ; 005141a6 | g_CustomKeyCount
    INC ECX                             ; 005141ac
    PUSH 0x636fe2                       ; 005141ad | = "Select assault weapons"
    MOV dword ptr [0x02f29270],ECX      ; 005141b2 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005141b8
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 005141bd | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005141c3 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005141c9
    MOV ESI,EAX                         ; 005141cc
    ADD EBX,0x6c                        ; 005141ce | g_CGameInstance.key_weapon_2
    CMP EDI,0x1e                        ; 005141d1
    JL 0x005141f8                       ; 005141d4
        ;   XREF to: 005141f8 (CONDITIONAL_JUMP)  ; LAB_005141f8
    MOV EBP,0x636e40                    ; 005141d6 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005141db
    PUSH 0x636e51                       ; 005141e0 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005141e5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005141eb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005141f0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005141f5
    MOV EAX,[0x02f29270]                ; 005141f8 | g_CustomKeyCount
        ;   Label: LAB_005141f8
    IMUL EDI,EAX,0x28                   ; 005141fd
    ADD EDI,0x2f292f0                   ; 00514200 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514206 | g_CustomKeyPointers[17] | g_CGameInstance.key_weapon_2
    PUSH EDI                            ; 0051420d | g_CustomKeyNames[17][0]
    MOV AL,byte ptr [ESI]               ; 0051420e
        ;   Label: LAB_0051420e
    MOV byte ptr [EDI],AL               ; 00514210 | g_CustomKeyNames[17][0] | g_CustomKeyNames[17][2]
    CMP AL,0x0                          ; 00514212
    JZ 0x00514226                       ; 00514214
        ;   XREF to: 00514226 (CONDITIONAL_JUMP)  ; LAB_00514226
    MOV AL,byte ptr [ESI + 0x1]         ; 00514216
    ADD ESI,0x2                         ; 00514219
    MOV byte ptr [EDI + 0x1],AL         ; 0051421c | g_CustomKeyNames[17][1] | DAT_02f2959b
    ADD EDI,0x2                         ; 0051421f
    CMP AL,0x0                          ; 00514222
    JNZ 0x0051420e                      ; 00514224
        ;   XREF to: 0051420e (CONDITIONAL_JUMP)  ; LAB_0051420e
    POP EDI                             ; 00514226
        ;   Label: LAB_00514226
    MOV ECX,dword ptr [0x02f29270]      ; 00514227 | g_CustomKeyCount
    INC ECX                             ; 0051422d
    PUSH 0x636ff9                       ; 0051422e | = "Select flame weapons"
    MOV dword ptr [0x02f29270],ECX      ; 00514233 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514239
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 0051423e | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514244 | g_CustomKeyCount
    ADD ESP,0x4                         ; 0051424a
    MOV ESI,EAX                         ; 0051424d
    ADD EBX,0x70                        ; 0051424f | g_CGameInstance.key_weapon_3
    CMP EDI,0x1e                        ; 00514252
    JL 0x00514279                       ; 00514255
        ;   XREF to: 00514279 (CONDITIONAL_JUMP)  ; LAB_00514279
    MOV EBP,0x636e40                    ; 00514257 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 0051425c
    PUSH 0x636e51                       ; 00514261 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00514266 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051426c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514271
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514276
    MOV EAX,[0x02f29270]                ; 00514279 | g_CustomKeyCount
        ;   Label: LAB_00514279
    IMUL EDI,EAX,0x28                   ; 0051427e
    ADD EDI,0x2f292f0                   ; 00514281 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514287 | g_CustomKeyPointers[18] | g_CGameInstance.key_weapon_3
    PUSH EDI                            ; 0051428e | g_CustomKeyNames[18][0]
    MOV AL,byte ptr [ESI]               ; 0051428f
        ;   Label: LAB_0051428f
    MOV byte ptr [EDI],AL               ; 00514291 | g_CustomKeyNames[18][0] | g_CustomKeyNames[18][2]
    CMP AL,0x0                          ; 00514293
    JZ 0x005142a7                       ; 00514295
        ;   XREF to: 005142a7 (CONDITIONAL_JUMP)  ; LAB_005142a7
    MOV AL,byte ptr [ESI + 0x1]         ; 00514297
    ADD ESI,0x2                         ; 0051429a
    MOV byte ptr [EDI + 0x1],AL         ; 0051429d | g_CustomKeyNames[18][1] | DAT_02f295c3
    ADD EDI,0x2                         ; 005142a0
    CMP AL,0x0                          ; 005142a3
    JNZ 0x0051428f                      ; 005142a5
        ;   XREF to: 0051428f (CONDITIONAL_JUMP)  ; LAB_0051428f
    POP EDI                             ; 005142a7
        ;   Label: LAB_005142a7
    MOV ECX,dword ptr [0x02f29270]      ; 005142a8 | g_CustomKeyCount
    INC ECX                             ; 005142ae
    PUSH 0x63700e                       ; 005142af | = "Select grenade weapons"
    MOV dword ptr [0x02f29270],ECX      ; 005142b4 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005142ba
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 005142bf | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005142c5 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005142cb
    MOV ESI,EAX                         ; 005142ce
    ADD EBX,0x74                        ; 005142d0 | g_CGameInstance.key_weapon_4
    CMP EDI,0x1e                        ; 005142d3
    JL 0x005142fa                       ; 005142d6
        ;   XREF to: 005142fa (CONDITIONAL_JUMP)  ; LAB_005142fa
    MOV EBP,0x636e40                    ; 005142d8 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005142dd
    PUSH 0x636e51                       ; 005142e2 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005142e7 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005142ed | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005142f2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005142f7
    MOV EAX,[0x02f29270]                ; 005142fa | g_CustomKeyCount
        ;   Label: LAB_005142fa
    IMUL EDI,EAX,0x28                   ; 005142ff
    ADD EDI,0x2f292f0                   ; 00514302 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514308 | g_CustomKeyPointers[19] | g_CGameInstance.key_weapon_4
    PUSH EDI                            ; 0051430f | g_CustomKeyNames[19][0]
    MOV AL,byte ptr [ESI]               ; 00514310
        ;   Label: LAB_00514310
    MOV byte ptr [EDI],AL               ; 00514312 | g_CustomKeyNames[19][0] | g_CustomKeyNames[19][2]
    CMP AL,0x0                          ; 00514314
    JZ 0x00514328                       ; 00514316
        ;   XREF to: 00514328 (CONDITIONAL_JUMP)  ; LAB_00514328
    MOV AL,byte ptr [ESI + 0x1]         ; 00514318
    ADD ESI,0x2                         ; 0051431b
    MOV byte ptr [EDI + 0x1],AL         ; 0051431e | g_CustomKeyNames[19][1] | DAT_02f295eb
    ADD EDI,0x2                         ; 00514321
    CMP AL,0x0                          ; 00514324
    JNZ 0x00514310                      ; 00514326
        ;   XREF to: 00514310 (CONDITIONAL_JUMP)  ; LAB_00514310
    POP EDI                             ; 00514328
        ;   Label: LAB_00514328
    MOV ECX,dword ptr [0x02f29270]      ; 00514329 | g_CustomKeyCount
    INC ECX                             ; 0051432f
    PUSH 0x637025                       ; 00514330 | = "Select melee weapons"
    MOV dword ptr [0x02f29270],ECX      ; 00514335 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051433b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 00514340 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514346 | g_CustomKeyCount
    ADD ESP,0x4                         ; 0051434c
    MOV ESI,EAX                         ; 0051434f
    LEA EBX,[EDX + 0x78]                ; 00514351 | g_CGameInstance.key_weapon_5
    CMP EDI,0x1e                        ; 00514354
    JL 0x0051437b                       ; 00514357
        ;   XREF to: 0051437b (CONDITIONAL_JUMP)  ; LAB_0051437b
    MOV EBP,0x636e40                    ; 00514359 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 0051435e
    PUSH 0x636e51                       ; 00514363 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00514368 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051436e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514373
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514378
    MOV EAX,[0x02f29270]                ; 0051437b | g_CustomKeyCount
        ;   Label: LAB_0051437b
    IMUL EDI,EAX,0x28                   ; 00514380
    ADD EDI,0x2f292f0                   ; 00514383 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514389 | g_CustomKeyPointers[20] | g_CGameInstance.key_weapon_5
    PUSH EDI                            ; 00514390 | g_CustomKeyNames[20][0]
    MOV AL,byte ptr [ESI]               ; 00514391
        ;   Label: LAB_00514391
    MOV byte ptr [EDI],AL               ; 00514393 | g_CustomKeyNames[20][0] | g_CustomKeyNames[20][2]
    CMP AL,0x0                          ; 00514395
    JZ 0x005143a9                       ; 00514397
        ;   XREF to: 005143a9 (CONDITIONAL_JUMP)  ; LAB_005143a9
    MOV AL,byte ptr [ESI + 0x1]         ; 00514399
    ADD ESI,0x2                         ; 0051439c
    MOV byte ptr [EDI + 0x1],AL         ; 0051439f | g_CustomKeyNames[20][1] | DAT_02f29613
    ADD EDI,0x2                         ; 005143a2
    CMP AL,0x0                          ; 005143a5
    JNZ 0x00514391                      ; 005143a7
        ;   XREF to: 00514391 (CONDITIONAL_JUMP)  ; LAB_00514391
    POP EDI                             ; 005143a9
        ;   Label: LAB_005143a9
    MOV ECX,dword ptr [0x02f29270]      ; 005143aa | g_CustomKeyCount
    INC ECX                             ; 005143b0
    PUSH 0x63703a                       ; 005143b1 | = "Next weapon"
    MOV dword ptr [0x02f29270],ECX      ; 005143b6 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005143bc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 005143c1 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005143c7 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005143cd
    MOV ESI,EAX                         ; 005143d0
    LEA EBX,[EDX + 0x7c]                ; 005143d2 | g_CGameInstance.key_next_weapon
    CMP EDI,0x1e                        ; 005143d5
    JL 0x005143fc                       ; 005143d8
        ;   XREF to: 005143fc (CONDITIONAL_JUMP)  ; LAB_005143fc
    MOV EBP,0x636e40                    ; 005143da | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005143df
    PUSH 0x636e51                       ; 005143e4 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005143e9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005143ef | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005143f4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005143f9
    MOV EAX,[0x02f29270]                ; 005143fc | g_CustomKeyCount
        ;   Label: LAB_005143fc
    IMUL EDI,EAX,0x28                   ; 00514401
    ADD EDI,0x2f292f0                   ; 00514404 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 0051440a | g_CustomKeyPointers[21] | g_CGameInstance.key_next_weapon
    PUSH EDI                            ; 00514411 | g_CustomKeyNames[21][0]
    MOV AL,byte ptr [ESI]               ; 00514412
        ;   Label: LAB_00514412
    MOV byte ptr [EDI],AL               ; 00514414 | g_CustomKeyNames[21][0] | g_CustomKeyNames[21][2]
    CMP AL,0x0                          ; 00514416
    JZ 0x0051442a                       ; 00514418
        ;   XREF to: 0051442a (CONDITIONAL_JUMP)  ; LAB_0051442a
    MOV AL,byte ptr [ESI + 0x1]         ; 0051441a
    ADD ESI,0x2                         ; 0051441d
    MOV byte ptr [EDI + 0x1],AL         ; 00514420 | g_CustomKeyNames[21][1] | DAT_02f2963b
    ADD EDI,0x2                         ; 00514423
    CMP AL,0x0                          ; 00514426
    JNZ 0x00514412                      ; 00514428
        ;   XREF to: 00514412 (CONDITIONAL_JUMP)  ; LAB_00514412
    POP EDI                             ; 0051442a
        ;   Label: LAB_0051442a
    MOV ECX,dword ptr [0x02f29270]      ; 0051442b | g_CustomKeyCount
    INC ECX                             ; 00514431
    PUSH 0x637046                       ; 00514432 | = "Previous weapon"
    MOV dword ptr [0x02f29270],ECX      ; 00514437 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051443d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00514442 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514448 | g_CustomKeyCount
    ADD ESP,0x4                         ; 0051444e
    MOV ESI,EAX                         ; 00514451
    ADD EBX,0x80                        ; 00514453 | g_CGameInstance.key_prev_weapon
    CMP EDI,0x1e                        ; 00514459
    JL 0x00514480                       ; 0051445c
        ;   XREF to: 00514480 (CONDITIONAL_JUMP)  ; LAB_00514480
    MOV EBP,0x636e40                    ; 0051445e | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00514463
    PUSH 0x636e51                       ; 00514468 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0051446d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00514473 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514478
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051447d
    MOV EAX,[0x02f29270]                ; 00514480 | g_CustomKeyCount
        ;   Label: LAB_00514480
    IMUL EDI,EAX,0x28                   ; 00514485
    ADD EDI,0x2f292f0                   ; 00514488 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 0051448e | g_CustomKeyPointers[22] | g_CGameInstance.key_prev_weapon
    PUSH EDI                            ; 00514495 | g_CustomKeyNames[22][0]
    MOV AL,byte ptr [ESI]               ; 00514496
        ;   Label: LAB_00514496
    MOV byte ptr [EDI],AL               ; 00514498 | g_CustomKeyNames[22][0] | g_CustomKeyNames[22][2]
    CMP AL,0x0                          ; 0051449a
    JZ 0x005144ae                       ; 0051449c
        ;   XREF to: 005144ae (CONDITIONAL_JUMP)  ; LAB_005144ae
    MOV AL,byte ptr [ESI + 0x1]         ; 0051449e
    ADD ESI,0x2                         ; 005144a1
    MOV byte ptr [EDI + 0x1],AL         ; 005144a4 | g_CustomKeyNames[22][1] | DAT_02f29663
    ADD EDI,0x2                         ; 005144a7
    CMP AL,0x0                          ; 005144aa
    JNZ 0x00514496                      ; 005144ac
        ;   XREF to: 00514496 (CONDITIONAL_JUMP)  ; LAB_00514496
    POP EDI                             ; 005144ae
        ;   Label: LAB_005144ae
    MOV ECX,dword ptr [0x02f29270]      ; 005144af | g_CustomKeyCount
    INC ECX                             ; 005144b5
    PUSH 0x637056                       ; 005144b6 | = "Next item"
    MOV dword ptr [0x02f29270],ECX      ; 005144bb | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005144c1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 005144c6 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005144cc | g_CustomKeyCount
    ADD ESP,0x4                         ; 005144d2
    MOV ESI,EAX                         ; 005144d5
    ADD EBX,0x84                        ; 005144d7 | g_CGameInstance.key_next_item
    CMP EDI,0x1e                        ; 005144dd
    JL 0x00514504                       ; 005144e0
        ;   XREF to: 00514504 (CONDITIONAL_JUMP)  ; LAB_00514504
    MOV EBP,0x636e40                    ; 005144e2 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005144e7
    PUSH 0x636e51                       ; 005144ec | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005144f1 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005144f7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005144fc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514501
    MOV EAX,[0x02f29270]                ; 00514504 | g_CustomKeyCount
        ;   Label: LAB_00514504
    IMUL EDI,EAX,0x28                   ; 00514509
    ADD EDI,0x2f292f0                   ; 0051450c | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514512 | g_CustomKeyPointers[23] | g_CGameInstance.key_next_item
    PUSH EDI                            ; 00514519 | g_CustomKeyNames[23][0]
    MOV AL,byte ptr [ESI]               ; 0051451a
        ;   Label: LAB_0051451a
    MOV byte ptr [EDI],AL               ; 0051451c | g_CustomKeyNames[23][0] | g_CustomKeyNames[23][2]
    CMP AL,0x0                          ; 0051451e
    JZ 0x00514532                       ; 00514520
        ;   XREF to: 00514532 (CONDITIONAL_JUMP)  ; LAB_00514532
    MOV AL,byte ptr [ESI + 0x1]         ; 00514522
    ADD ESI,0x2                         ; 00514525
    MOV byte ptr [EDI + 0x1],AL         ; 00514528 | g_CustomKeyNames[23][1] | DAT_02f2968b
    ADD EDI,0x2                         ; 0051452b
    CMP AL,0x0                          ; 0051452e
    JNZ 0x0051451a                      ; 00514530
        ;   XREF to: 0051451a (CONDITIONAL_JUMP)  ; LAB_0051451a
    POP EDI                             ; 00514532
        ;   Label: LAB_00514532
    MOV ECX,dword ptr [0x02f29270]      ; 00514533 | g_CustomKeyCount
    INC ECX                             ; 00514539
    PUSH 0x637060                       ; 0051453a | = "Previous item"
    MOV dword ptr [0x02f29270],ECX      ; 0051453f | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514545
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 0051454a | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514550 | g_CustomKeyCount
    ADD ESP,0x4                         ; 00514556
    MOV ESI,EAX                         ; 00514559
    ADD EBX,0x88                        ; 0051455b | g_CGameInstance.key_prev_item
    CMP EDI,0x1e                        ; 00514561
    JL 0x00514588                       ; 00514564
        ;   XREF to: 00514588 (CONDITIONAL_JUMP)  ; LAB_00514588
    MOV EBP,0x636e40                    ; 00514566 | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 0051456b
    PUSH 0x636e51                       ; 00514570 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00514575 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051457b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514580
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514585
    MOV EAX,[0x02f29270]                ; 00514588 | g_CustomKeyCount
        ;   Label: LAB_00514588
    IMUL EDI,EAX,0x28                   ; 0051458d
    ADD EDI,0x2f292f0                   ; 00514590 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 00514596 | g_CustomKeyPointers[24] | g_CGameInstance.key_prev_item
    PUSH EDI                            ; 0051459d | g_CustomKeyNames[24][0]
    MOV AL,byte ptr [ESI]               ; 0051459e
        ;   Label: LAB_0051459e
    MOV byte ptr [EDI],AL               ; 005145a0 | g_CustomKeyNames[24][0] | g_CustomKeyNames[24][2]
    CMP AL,0x0                          ; 005145a2
    JZ 0x005145b6                       ; 005145a4
        ;   XREF to: 005145b6 (CONDITIONAL_JUMP)  ; LAB_005145b6
    MOV AL,byte ptr [ESI + 0x1]         ; 005145a6
    ADD ESI,0x2                         ; 005145a9
    MOV byte ptr [EDI + 0x1],AL         ; 005145ac | g_CustomKeyNames[24][1] | DAT_02f296b3
    ADD EDI,0x2                         ; 005145af
    CMP AL,0x0                          ; 005145b2
    JNZ 0x0051459e                      ; 005145b4
        ;   XREF to: 0051459e (CONDITIONAL_JUMP)  ; LAB_0051459e
    POP EDI                             ; 005145b6
        ;   Label: LAB_005145b6
    MOV ECX,dword ptr [0x02f29270]      ; 005145b7 | g_CustomKeyCount
    INC ECX                             ; 005145bd
    PUSH 0x63706e                       ; 005145be | = "Item description"
    MOV dword ptr [0x02f29270],ECX      ; 005145c3 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005145c9
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EDX,dword ptr [0x0067b654]      ; 005145ce | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 005145d4 | g_CustomKeyCount
    ADD ESP,0x4                         ; 005145da
    MOV ESI,EAX                         ; 005145dd
    LEA EBX,[EDX + 0x8c]                ; 005145df | g_CGameInstance.key_item_desc
    CMP EDI,0x1e                        ; 005145e5
    JL 0x0051460c                       ; 005145e8
        ;   XREF to: 0051460c (CONDITIONAL_JUMP)  ; LAB_0051460c
    MOV EBP,0x636e40                    ; 005145ea | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 005145ef
    PUSH 0x636e51                       ; 005145f4 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 005145f9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005145ff | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514604
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00514609
    MOV EAX,[0x02f29270]                ; 0051460c | g_CustomKeyCount
        ;   Label: LAB_0051460c
    IMUL EDI,EAX,0x28                   ; 00514611
    ADD EDI,0x2f292f0                   ; 00514614 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 0051461a | g_CustomKeyPointers[25] | g_CGameInstance.key_item_desc
    PUSH EDI                            ; 00514621 | g_CustomKeyNames[25][0]
    MOV AL,byte ptr [ESI]               ; 00514622
        ;   Label: LAB_00514622
    MOV byte ptr [EDI],AL               ; 00514624 | g_CustomKeyNames[25][0] | g_CustomKeyNames[25][2]
    CMP AL,0x0                          ; 00514626
    JZ 0x0051463a                       ; 00514628
        ;   XREF to: 0051463a (CONDITIONAL_JUMP)  ; LAB_0051463a
    MOV AL,byte ptr [ESI + 0x1]         ; 0051462a
    ADD ESI,0x2                         ; 0051462d
    MOV byte ptr [EDI + 0x1],AL         ; 00514630 | g_CustomKeyNames[25][1] | DAT_02f296db
    ADD EDI,0x2                         ; 00514633
    CMP AL,0x0                          ; 00514636
    JNZ 0x00514622                      ; 00514638
        ;   XREF to: 00514622 (CONDITIONAL_JUMP)  ; LAB_00514622
    POP EDI                             ; 0051463a
        ;   Label: LAB_0051463a
    MOV ECX,dword ptr [0x02f29270]      ; 0051463b | g_CustomKeyCount
    INC ECX                             ; 00514641
    PUSH 0x63707f                       ; 00514642 | = "Next ammo"
    MOV dword ptr [0x02f29270],ECX      ; 00514647 | g_CustomKeyCount
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051464d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    MOV EBX,dword ptr [0x0067b654]      ; 00514652 | g_CGamePtr
    MOV EDI,dword ptr [0x02f29270]      ; 00514658 | g_CustomKeyCount
    ADD ESP,0x4                         ; 0051465e
    MOV ESI,EAX                         ; 00514661
    ADD EBX,0x90                        ; 00514663 | g_CGameInstance.key_next_ammo
    CMP EDI,0x1e                        ; 00514669
    JL 0x00514690                       ; 0051466c
        ;   XREF to: 00514690 (CONDITIONAL_JUMP)  ; LAB_00514690
    MOV EBP,0x636e40                    ; 0051466e | = "..\\core\\menu.cpp"
    MOV EAX,0x82b                       ; 00514673
    PUSH 0x636e51                       ; 00514678 | = "Too many custom keys!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0051467d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00514683 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00514688
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051468d
    MOV EAX,[0x02f29270]                ; 00514690 | g_CustomKeyCount
        ;   Label: LAB_00514690
    IMUL EDI,EAX,0x28                   ; 00514695
    ADD EDI,0x2f292f0                   ; 00514698 | g_CustomKeyNames
    MOV dword ptr [EAX*0x4 + 0x2f29274],EBX ; 0051469e | g_CustomKeyPointers[26] | g_CGameInstance.key_next_ammo
    PUSH EDI                            ; 005146a5 | g_CustomKeyNames[26][0]
    MOV AL,byte ptr [ESI]               ; 005146a6
        ;   Label: LAB_005146a6
    MOV byte ptr [EDI],AL               ; 005146a8 | g_CustomKeyNames[26][0] | g_CustomKeyNames[26][2]
    CMP AL,0x0                          ; 005146aa
    JZ 0x005146be                       ; 005146ac
        ;   XREF to: 005146be (CONDITIONAL_JUMP)  ; LAB_005146be
    MOV AL,byte ptr [ESI + 0x1]         ; 005146ae
    ADD ESI,0x2                         ; 005146b1
    MOV byte ptr [EDI + 0x1],AL         ; 005146b4 | g_CustomKeyNames[26][1] | DAT_02f29703
    ADD EDI,0x2                         ; 005146b7
    CMP AL,0x0                          ; 005146ba
    JNZ 0x005146a6                      ; 005146bc
        ;   XREF to: 005146a6 (CONDITIONAL_JUMP)  ; LAB_005146a6
    POP EDI                             ; 005146be
        ;   Label: LAB_005146be
    INC dword ptr [0x02f29270]          ; 005146bf | g_CustomKeyCount
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005146c5
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005146ca
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    LEA EAX,[ESP + 0x8]                 ; 005146cf
    PUSH EAX                            ; 005146d3
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005146d4
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005146d9
    PUSH 0x637089                       ; 005146dc | = "Restore defaults"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005146e1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005146e6
    PUSH EAX                            ; 005146e9
    LEA EAX,[ESP + 0xc]                 ; 005146ea
    PUSH EAX                            ; 005146ee
    XOR ESI,ESI                         ; 005146ef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005146f1
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EBX,dword ptr [0x02f29270]      ; 005146f6 | g_CustomKeyCount
    ADD ESP,0x8                         ; 005146fc
    TEST EBX,EBX                        ; 005146ff
    JLE 0x00514757                      ; 00514701
        ;   XREF to: 00514757 (CONDITIONAL_JUMP)  ; LAB_00514757
    MOV EBX,0x2f292f0                   ; 00514703 | g_CustomKeyNames
    XOR EDI,EDI                         ; 00514708
    MOV EAX,dword ptr [EDI + 0x2f29274] ; 0051470a | g_CGameInstance.key_walk | g_CGameInstance.key_backup | g_CustomKeyPointers
        ;   Label: LAB_0051470a
    MOV EBP,dword ptr [EAX]             ; 00514710 | g_CGameInstance.key_walk | g_CGameInstance.key_backup
    PUSH EBP                            ; 00514712
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 00514713
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)
    ADD ESP,0x4                         ; 00514718
    PUSH EAX                            ; 0051471b
    PUSH EBX                            ; 0051471c | g_CustomKeyNames
    PUSH 0x63709a                       ; 0051471d | = "%s\t%s"
    LEA EAX,[ESP + 0x9bc]               ; 00514722
    PUSH EAX                            ; 00514729
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0051472a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0051472f
    LEA EAX,[ESP + 0x9b0]               ; 00514732
    PUSH EAX                            ; 00514739
    LEA EAX,[ESP + 0xc]                 ; 0051473a
    ADD EDI,0x4                         ; 0051473e
    PUSH EAX                            ; 00514741
    INC ESI                             ; 00514742
    ADD EBX,0x28                        ; 00514743 | g_CustomKeyNames[1][0]
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00514746
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV EAX,[0x02f29270]                ; 0051474b | g_CustomKeyCount
    ADD ESP,0x8                         ; 00514750
    CMP ESI,EAX                         ; 00514753
    JL 0x0051470a                       ; 00514755
        ;   XREF to: 0051470a (CONDITIONAL_JUMP)  ; LAB_0051470a
    PUSH 0x1                            ; 00514757
        ;   Label: LAB_00514757
    LEA EAX,[ESP + 0xc]                 ; 00514759
    PUSH EAX                            ; 0051475d
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 0051475e
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 00514763
    PUSH 0x0                            ; 00514766
    MOV EDX,dword ptr [ESP + 0xa7c]     ; 00514768
    PUSH EDX                            ; 0051476f
    PUSH 0x6370a0                       ; 00514770 | = "Edit key settings"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514775
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051477a
    PUSH EAX                            ; 0051477d
    LEA EAX,[ESP + 0x14]                ; 0051477e
    PUSH EAX                            ; 00514782
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00514783
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00514788
    TEST EAX,EAX                        ; 0051478b
    JL 0x00514b6a                       ; 0051478d
        ;   XREF to: 00514b6a (CONDITIONAL_JUMP)  ; LAB_00514b6a
    JNZ 0x00514b42                      ; 00514793
        ;   XREF to: 00514b42 (CONDITIONAL_JUMP)  ; LAB_00514b42
    MOV ESI,dword ptr [0x0067b654]      ; 00514799 | g_CGamePtr
    PUSH ESI                            ; 0051479f | g_CGameInstance
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0 ; 005147a0
        ;   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame * this_ptr)
    ADD ESP,0x4                         ; 005147a5
    PUSH 0x0                            ; 005147a8
    LEA EAX,[ESP + 0xc]                 ; 005147aa
    PUSH EAX                            ; 005147ae
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005147af
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005147b4
    JMP 0x0051390e                      ; 005147b7
        ;   XREF to: 0051390e (UNCONDITIONAL_JUMP)  ; LAB_0051390e
    CALL core_menu.cpp_calibrateGamepad_FUN_005104d0 ; 005147bc
        ;   XREF to: 005104d0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_calibrateGamepad_FUN_005104d0()
        ;   Label: LAB_005147bc
    TEST EAX,EAX                        ; 005147c1
    JNZ 0x00513903                      ; 005147c3
        ;   XREF to: 00513903 (CONDITIONAL_JUMP)  ; LAB_00513903
    ADD ESP,0xa74                       ; 005147c9
        ;   Label: LAB_005147c9
    POP EBP                             ; 005147cf
    POP EBX                             ; 005147d0
    RET                                 ; 005147d1
    PUSH 0x636f48                       ; 005147d2 | = "Run"
        ;   Label: LAB_005147d2
    JMP 0x00513a30                      ; 005147d7
        ;   XREF to: 00513a30 (UNCONDITIONAL_JUMP)  ; LAB_00513a30
    IMUL ESI,EBP,0x28                   ; 005147dc
        ;   Label: caseD_256
    LEA EDI,[ESP + 0x7b0]               ; 005147df
    ADD ESI,0x2f292f0                   ; 005147e6 | g_CustomKeyNames
    PUSH EDI                            ; 005147ec
    MOV AL,byte ptr [ESI]               ; 005147ed | g_CustomKeyNames | DAT_02f292f2
        ;   Label: LAB_005147ed
    MOV byte ptr [EDI],AL               ; 005147ef
    CMP AL,0x0                          ; 005147f1
    JZ 0x00514805                       ; 005147f3
        ;   XREF to: 00514805 (CONDITIONAL_JUMP)  ; LAB_00514805
    MOV AL,byte ptr [ESI + 0x1]         ; 005147f5 | DAT_02f292f1 | DAT_02f292f3
    ADD ESI,0x2                         ; 005147f8
    MOV byte ptr [EDI + 0x1],AL         ; 005147fb
    ADD EDI,0x2                         ; 005147fe
    CMP AL,0x0                          ; 00514801
    JNZ 0x005147ed                      ; 00514803
        ;   XREF to: 005147ed (CONDITIONAL_JUMP)  ; LAB_005147ed
    POP EDI                             ; 00514805
        ;   Label: LAB_00514805
    PUSH 0x6370b2                       ; 00514806 | = " is assigned to the mouse.  Can't ass..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051480b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514810
    LEA EDI,[ESP + 0x7b0]               ; 00514813
    MOV ESI,EAX                         ; 0051481a
    PUSH EDI                            ; 0051481c
    SUB ECX,ECX                         ; 0051481d
    DEC ECX                             ; 0051481f
    MOV AL,0x0                          ; 00514820
    SCASB.REPNE ES:EDI                  ; 00514822
    DEC EDI                             ; 00514824
    MOV AL,byte ptr [ESI]               ; 00514825
        ;   Label: LAB_00514825
    MOV byte ptr [EDI],AL               ; 00514827
    CMP AL,0x0                          ; 00514829
    JZ 0x0051483d                       ; 0051482b
        ;   XREF to: 0051483d (CONDITIONAL_JUMP)  ; LAB_0051483d
    MOV AL,byte ptr [ESI + 0x1]         ; 0051482d
    ADD ESI,0x2                         ; 00514830
    MOV byte ptr [EDI + 0x1],AL         ; 00514833
    ADD EDI,0x2                         ; 00514836
    CMP AL,0x0                          ; 00514839
    JNZ 0x00514825                      ; 0051483b
        ;   XREF to: 00514825 (CONDITIONAL_JUMP)  ; LAB_00514825
    POP EDI                             ; 0051483d
        ;   Label: LAB_0051483d
    LEA EAX,[ESP + 0x7b0]               ; 0051483e
    PUSH EAX                            ; 00514845
    MOV ECX,dword ptr [0x00678a60]      ; 00514846 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 0051484c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0051484d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00514852
        ;   Label: LAB_00514852
    PUSH 0x0                            ; 00514855
    LEA EAX,[ESP + 0xc]                 ; 00514857
    PUSH EAX                            ; 0051485b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0051485c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514861
    JMP 0x0051390e                      ; 00514864
        ;   XREF to: 0051390e (UNCONDITIONAL_JUMP)  ; LAB_0051390e
    IMUL ESI,EBP,0x28                   ; 00514869
        ;   Label: caseD_254
    LEA EDI,[ESP + 0x3b0]               ; 0051486c
    ADD ESI,0x2f292f0                   ; 00514873 | g_CustomKeyNames
    PUSH EDI                            ; 00514879
    MOV AL,byte ptr [ESI]               ; 0051487a | g_CustomKeyNames | DAT_02f292f2
        ;   Label: LAB_0051487a
    MOV byte ptr [EDI],AL               ; 0051487c
    CMP AL,0x0                          ; 0051487e
    JZ 0x00514892                       ; 00514880
        ;   XREF to: 00514892 (CONDITIONAL_JUMP)  ; LAB_00514892
    MOV AL,byte ptr [ESI + 0x1]         ; 00514882 | DAT_02f292f1 | DAT_02f292f3
    ADD ESI,0x2                         ; 00514885
    MOV byte ptr [EDI + 0x1],AL         ; 00514888
    ADD EDI,0x2                         ; 0051488b
    CMP AL,0x0                          ; 0051488e
    JNZ 0x0051487a                      ; 00514890
        ;   XREF to: 0051487a (CONDITIONAL_JUMP)  ; LAB_0051487a
    POP EDI                             ; 00514892
        ;   Label: LAB_00514892
    PUSH 0x6370e2                       ; 00514893 | = " is assigned to the gamepad.  Can't a..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514898
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051489d
    LEA EDI,[ESP + 0x3b0]               ; 005148a0
    MOV ESI,EAX                         ; 005148a7
    PUSH EDI                            ; 005148a9
    SUB ECX,ECX                         ; 005148aa
    DEC ECX                             ; 005148ac
    MOV AL,0x0                          ; 005148ad
    SCASB.REPNE ES:EDI                  ; 005148af
    DEC EDI                             ; 005148b1
    MOV AL,byte ptr [ESI]               ; 005148b2
        ;   Label: LAB_005148b2
    MOV byte ptr [EDI],AL               ; 005148b4
    CMP AL,0x0                          ; 005148b6
    JZ 0x005148ca                       ; 005148b8
        ;   XREF to: 005148ca (CONDITIONAL_JUMP)  ; LAB_005148ca
    MOV AL,byte ptr [ESI + 0x1]         ; 005148ba
    ADD ESI,0x2                         ; 005148bd
    MOV byte ptr [EDI + 0x1],AL         ; 005148c0
    ADD EDI,0x2                         ; 005148c3
    CMP AL,0x0                          ; 005148c6
    JNZ 0x005148b2                      ; 005148c8
        ;   XREF to: 005148b2 (CONDITIONAL_JUMP)  ; LAB_005148b2
    POP EDI                             ; 005148ca
        ;   Label: LAB_005148ca
    LEA EAX,[ESP + 0x3b0]               ; 005148cb
    PUSH EAX                            ; 005148d2
    MOV EBX,dword ptr [0x00678a60]      ; 005148d3 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 005148d9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005148da
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    JMP 0x00514852                      ; 005148df
        ;   XREF to: 00514852 (UNCONDITIONAL_JUMP)  ; LAB_00514852
    MOV EAX,[0x0067b654]                ; 005148e4 | g_CGameInstance | g_CGamePtr
        ;   Label: default
    CMP dword ptr [EAX + 0xbc],0x2      ; 005148e9 | g_CGameInstance.game_control
    JZ 0x0051494a                       ; 005148f0
        ;   XREF to: 0051494a (CONDITIONAL_JUMP)  ; LAB_0051494a
    MOV ESI,0xffffffff                  ; 005148f2
        ;   Label: LAB_005148f2
    XOR EBX,EBX                         ; 005148f7
    PUSH EBX                            ; 005148f9
        ;   Label: LAB_005148f9
    MOV EAX,[0x0067cf44]                ; 005148fa | g_CKeysPtr
    PUSH EAX                            ; 005148ff | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 00514900 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 00514902
    ADD ESP,0x8                         ; 00514904
    TEST EAX,EAX                        ; 00514907
    JZ 0x00514955                       ; 00514909
        ;   XREF to: 00514955 (CONDITIONAL_JUMP)  ; LAB_00514955
    TEST ESI,ESI                        ; 0051490b
    JL 0x00514aa3                       ; 0051490d
        ;   XREF to: 00514aa3 (CONDITIONAL_JUMP)  ; LAB_00514aa3
    PUSH 0x637114                       ; 00514913 | = "OK - you can release the key now..."
        ;   Label: LAB_00514913
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514918
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0051491d
    PUSH EAX                            ; 00514920
    MOV ECX,dword ptr [0x00678a60]      ; 00514921 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00514927 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00514928
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0051492d
    MOV EAX,[0x0067cf44]                ; 00514930 | g_CKeysPtr
    PUSH 0x1                            ; 00514935
    MOV EDX,dword ptr [EAX]             ; 00514937 | g_CKeysInstance
    PUSH EAX                            ; 00514939 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051493a
    ADD ESP,0x8                         ; 0051493c
    TEST EAX,EAX                        ; 0051493f
    JNZ 0x00514963                      ; 00514941
        ;   XREF to: 00514963 (CONDITIONAL_JUMP)  ; LAB_00514963
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00514943
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    JMP 0x005148e4                      ; 00514948
        ;   XREF to: 005148e4 (UNCONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 0051494a | g_CGameInstance
        ;   Label: LAB_0051494a
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 0051494b
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 00514950
    JMP 0x005148f2                      ; 00514953
        ;   XREF to: 005148f2 (UNCONDITIONAL_JUMP)  ; LAB_005148f2
    INC EBX                             ; 00514955
        ;   Label: LAB_00514955
    CMP EBX,0x258                       ; 00514956
    JL 0x005148f9                       ; 0051495c
        ;   XREF to: 005148f9 (CONDITIONAL_JUMP)  ; LAB_005148f9
    CMP ESI,-0x1                        ; 0051495e
    JNZ 0x00514913                      ; 00514961
        ;   XREF to: 00514913 (CONDITIONAL_JUMP)  ; LAB_00514913
    PUSH 0x1                            ; 00514963
        ;   Label: LAB_00514963
    MOV EAX,[0x0067cf44]                ; 00514965 | g_CKeysPtr
    PUSH EAX                            ; 0051496a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051496b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051496d
    ADD ESP,0x8                         ; 0051496f
    TEST EAX,EAX                        ; 00514972
    JNZ 0x00514aaa                      ; 00514974
        ;   XREF to: 00514aaa (CONDITIONAL_JUMP)  ; LAB_00514aaa
    PUSH 0x637138                       ; 0051497a | = "Press new key or button for "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051497f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514984
    LEA EDI,[ESP + 0x5b0]               ; 00514987
    MOV ESI,EAX                         ; 0051498e
    PUSH EDI                            ; 00514990
    MOV AL,byte ptr [ESI]               ; 00514991
        ;   Label: LAB_00514991
    MOV byte ptr [EDI],AL               ; 00514993
    CMP AL,0x0                          ; 00514995
    JZ 0x005149a9                       ; 00514997
        ;   XREF to: 005149a9 (CONDITIONAL_JUMP)  ; LAB_005149a9
    MOV AL,byte ptr [ESI + 0x1]         ; 00514999
    ADD ESI,0x2                         ; 0051499c
    MOV byte ptr [EDI + 0x1],AL         ; 0051499f
    ADD EDI,0x2                         ; 005149a2
    CMP AL,0x0                          ; 005149a5
    JNZ 0x00514991                      ; 005149a7
        ;   XREF to: 00514991 (CONDITIONAL_JUMP)  ; LAB_00514991
    POP EDI                             ; 005149a9
        ;   Label: LAB_005149a9
    IMUL ESI,EBP,0x28                   ; 005149aa
    LEA EDI,[ESP + 0x5b0]               ; 005149ad
    ADD ESI,0x2f292f0                   ; 005149b4 | g_CustomKeyNames
    PUSH EDI                            ; 005149ba
    SUB ECX,ECX                         ; 005149bb
    DEC ECX                             ; 005149bd
    MOV AL,0x0                          ; 005149be
    SCASB.REPNE ES:EDI                  ; 005149c0
    DEC EDI                             ; 005149c2
    MOV AL,byte ptr [ESI]               ; 005149c3 | g_CustomKeyNames | DAT_02f292f2
        ;   Label: LAB_005149c3
    MOV byte ptr [EDI],AL               ; 005149c5
    CMP AL,0x0                          ; 005149c7
    JZ 0x005149db                       ; 005149c9
        ;   XREF to: 005149db (CONDITIONAL_JUMP)  ; LAB_005149db
    MOV AL,byte ptr [ESI + 0x1]         ; 005149cb | DAT_02f292f1 | DAT_02f292f3
    ADD ESI,0x2                         ; 005149ce
    MOV byte ptr [EDI + 0x1],AL         ; 005149d1
    ADD EDI,0x2                         ; 005149d4
    CMP AL,0x0                          ; 005149d7
    JNZ 0x005149c3                      ; 005149d9
        ;   XREF to: 005149c3 (CONDITIONAL_JUMP)  ; LAB_005149c3
    POP EDI                             ; 005149db
        ;   Label: LAB_005149db
    LEA EAX,[ESP + 0x5b0]               ; 005149dc
    PUSH EAX                            ; 005149e3
    MOV EBX,dword ptr [0x00678a60]      ; 005149e4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 005149ea | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 005149eb
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005149f0
    PUSH 0x1                            ; 005149f3
    MOV ESI,dword ptr [0x0067cf44]      ; 005149f5 | g_CKeysPtr
    PUSH ESI                            ; 005149fb | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 005149fc
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 00514a01
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00514a04
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00514a04
    MOV EAX,[0x0067b654]                ; 00514a09 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0xbc],0x2      ; 00514a0e | g_CGameInstance.game_control
    JZ 0x00514ac3                       ; 00514a15
        ;   XREF to: 00514ac3 (CONDITIONAL_JUMP)  ; LAB_00514ac3
    MOV ESI,0xffffffff                  ; 00514a1b
        ;   Label: LAB_00514a1b
    XOR EBX,EBX                         ; 00514a20
    PUSH EBX                            ; 00514a22
        ;   Label: LAB_00514a22
    MOV EAX,[0x0067cf44]                ; 00514a23 | g_CKeysPtr
    PUSH EAX                            ; 00514a28 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 00514a29 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 00514a2b
    ADD ESP,0x8                         ; 00514a2d
    TEST EAX,EAX                        ; 00514a30
    JZ 0x00514a3a                       ; 00514a32
        ;   XREF to: 00514a3a (CONDITIONAL_JUMP)  ; LAB_00514a3a
    TEST ESI,ESI                        ; 00514a34
    JGE 0x00514a04                      ; 00514a36
        ;   XREF to: 00514a04 (CONDITIONAL_JUMP)  ; LAB_00514a04
    MOV ESI,EBX                         ; 00514a38
    INC EBX                             ; 00514a3a
        ;   Label: LAB_00514a3a
    CMP EBX,0x258                       ; 00514a3b
    JL 0x00514a22                       ; 00514a41
        ;   XREF to: 00514a22 (CONDITIONAL_JUMP)  ; LAB_00514a22
    TEST ESI,ESI                        ; 00514a43
    JL 0x00514a04                       ; 00514a45
        ;   XREF to: 00514a04 (CONDITIONAL_JUMP)  ; LAB_00514a04
    MOV EAX,dword ptr [EBP*0x4 + 0x2f29274] ; 00514a47 | g_CustomKeyPointers
    PUSH 0x637155                       ; 00514a4e | = "OK - you can release the key now..."
    MOV dword ptr [EAX],ESI             ; 00514a53
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514a55
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514a5a
    PUSH EAX                            ; 00514a5d
    MOV EAX,[0x00678a60]                ; 00514a5e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00514a63 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00514a64
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00514a69
    MOV EAX,[0x0067b654]                ; 00514a6c | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00514a6c
    CMP dword ptr [EAX + 0xbc],0x2      ; 00514a71 | g_CGameInstance.game_control
    JZ 0x00514ad1                       ; 00514a78
        ;   XREF to: 00514ad1 (CONDITIONAL_JUMP)  ; LAB_00514ad1
    MOV EDI,0xffffffff                  ; 00514a7a
        ;   Label: LAB_00514a7a
    XOR EBX,EBX                         ; 00514a7f
    PUSH EBX                            ; 00514a81
        ;   Label: LAB_00514a81
    MOV ESI,dword ptr [0x0067cf44]      ; 00514a82 | g_CKeysPtr
    PUSH ESI                            ; 00514a88 | g_CKeysInstance
    MOV EAX,dword ptr [ESI]             ; 00514a89 | g_CKeysInstance
    CALL dword ptr [EAX]                ; 00514a8b
    ADD ESP,0x8                         ; 00514a8d
    TEST EAX,EAX                        ; 00514a90
    JZ 0x00514adc                       ; 00514a92
        ;   XREF to: 00514adc (CONDITIONAL_JUMP)  ; LAB_00514adc
    TEST EDI,EDI                        ; 00514a94
    JL 0x00514b24                       ; 00514a96
        ;   XREF to: 00514b24 (CONDITIONAL_JUMP)  ; LAB_00514b24
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00514a9c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00514a9c
    JMP 0x00514a6c                      ; 00514aa1
        ;   XREF to: 00514a6c (UNCONDITIONAL_JUMP)  ; LAB_00514a6c
    MOV ESI,EBX                         ; 00514aa3
        ;   Label: LAB_00514aa3
    JMP 0x00514955                      ; 00514aa5
        ;   XREF to: 00514955 (UNCONDITIONAL_JUMP)  ; LAB_00514955
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00514aaa
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00514aaa
    PUSH 0x0                            ; 00514aaf
    LEA EAX,[ESP + 0xc]                 ; 00514ab1
    PUSH EAX                            ; 00514ab5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00514ab6
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514abb
    JMP 0x0051390e                      ; 00514abe
        ;   XREF to: 0051390e (UNCONDITIONAL_JUMP)  ; LAB_0051390e
    PUSH EAX                            ; 00514ac3 | g_CGameInstance
        ;   Label: LAB_00514ac3
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 00514ac4
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 00514ac9
    JMP 0x00514a1b                      ; 00514acc
        ;   XREF to: 00514a1b (UNCONDITIONAL_JUMP)  ; LAB_00514a1b
    PUSH EAX                            ; 00514ad1 | g_CGameInstance
        ;   Label: LAB_00514ad1
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 00514ad2
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 00514ad7
    JMP 0x00514a7a                      ; 00514ada
        ;   XREF to: 00514a7a (UNCONDITIONAL_JUMP)  ; LAB_00514a7a
    INC EBX                             ; 00514adc
        ;   Label: LAB_00514adc
    CMP EBX,0x258                       ; 00514add
    JL 0x00514a81                       ; 00514ae3
        ;   XREF to: 00514a81 (CONDITIONAL_JUMP)  ; LAB_00514a81
    CMP EDI,-0x1                        ; 00514ae5
    JNZ 0x00514a9c                      ; 00514ae8
        ;   XREF to: 00514a9c (CONDITIONAL_JUMP)  ; LAB_00514a9c
    MOV ECX,dword ptr [0x02f29270]      ; 00514aea | g_CustomKeyCount
    XOR EAX,EAX                         ; 00514af0
    TEST ECX,ECX                        ; 00514af2
    JLE 0x00514b11                      ; 00514af4
        ;   XREF to: 00514b11 (CONDITIONAL_JUMP)  ; LAB_00514b11
    LEA ECX,[EBP*0x4 + 0x0]             ; 00514af6
    XOR EBX,EBX                         ; 00514afd
    CMP EAX,EBP                         ; 00514aff
        ;   Label: LAB_00514aff
    JNZ 0x00514b28                      ; 00514b01
        ;   XREF to: 00514b28 (CONDITIONAL_JUMP)  ; LAB_00514b28
    MOV ESI,dword ptr [0x02f29270]      ; 00514b03 | g_CustomKeyCount
        ;   Label: LAB_00514b03
    INC EAX                             ; 00514b09
    ADD EBX,0x4                         ; 00514b0a
    CMP EAX,ESI                         ; 00514b0d
    JL 0x00514aff                       ; 00514b0f
        ;   XREF to: 00514aff (CONDITIONAL_JUMP)  ; LAB_00514aff
    PUSH 0x0                            ; 00514b11
        ;   Label: LAB_00514b11
    MOV EDI,dword ptr [0x0067cf44]      ; 00514b13 | g_CKeysPtr
    PUSH EDI                            ; 00514b19 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0 ; 00514b1a
        ;   XREF to: 005024b0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys * this_ptr, int enable_extended)
    JMP 0x00514852                      ; 00514b1f
        ;   XREF to: 00514852 (UNCONDITIONAL_JUMP)  ; LAB_00514852
    MOV EDI,EBX                         ; 00514b24
        ;   Label: LAB_00514b24
    JMP 0x00514adc                      ; 00514b26
        ;   XREF to: 00514adc (UNCONDITIONAL_JUMP)  ; LAB_00514adc
    MOV ESI,dword ptr [EBX + 0x2f29274] ; 00514b28 | g_CustomKeyPointers | g_CustomKeyPointers[1]
        ;   Label: LAB_00514b28
    MOV EDX,dword ptr [ECX + 0x2f29274] ; 00514b2e | g_CustomKeyPointers
    MOV EDI,dword ptr [ESI]             ; 00514b34 | g_CGameInstance.key_walk | g_CGameInstance.key_backup
    CMP EDI,dword ptr [EDX]             ; 00514b36
    JNZ 0x00514b03                      ; 00514b38
        ;   XREF to: 00514b03 (CONDITIONAL_JUMP)  ; LAB_00514b03
    MOV dword ptr [ESI],0x257           ; 00514b3a | g_CGameInstance.key_walk | g_CGameInstance.key_backup
    JMP 0x00514b03                      ; 00514b40
        ;   XREF to: 00514b03 (UNCONDITIONAL_JUMP)  ; LAB_00514b03
    MOV dword ptr [ESP + 0xa78],EAX     ; 00514b42
        ;   Label: LAB_00514b42
    LEA EBP,[EAX + -0x1]                ; 00514b49
    MOV EAX,dword ptr [EBP*0x4 + 0x2f29274] ; 00514b4c | g_CustomKeyPointers
    MOV EAX,dword ptr [EAX]             ; 00514b53
    SUB EAX,0x251                       ; 00514b55
    CMP EAX,0x5                         ; 00514b5a
    JA 0x005148e4                       ; 00514b5d
        ;   XREF to: 005148e4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5138c0]  ; 00514b63 | caseD_255 | caseD_253 | switchdataD_005138c0
        ;   Label: switchD
    PUSH 0x0                            ; 00514b6a
        ;   Label: LAB_00514b6a
    LEA EAX,[ESP + 0xc]                 ; 00514b6c
    PUSH EAX                            ; 00514b70
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00514b71
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00514b76
    PUSH 0x637179                       ; 00514b79 | = "Forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514b7e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514b83
    PUSH EAX                            ; 00514b86
    MOV EAX,[0x0067b654]                ; 00514b87 | g_CGamePtr
    ADD EAX,0x28                        ; 00514b8c | g_CGameInstance.key_walk
    PUSH EAX                            ; 00514b8f | g_CGameInstance.key_walk
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514b90
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514b95
    PUSH 0x637181                       ; 00514b98 | = "Back"
    MOV EBX,EAX                         ; 00514b9d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514b9f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514ba4
    PUSH EAX                            ; 00514ba7
    MOV EAX,[0x0067b654]                ; 00514ba8 | g_CGamePtr
    ADD EAX,0x2c                        ; 00514bad | g_CGameInstance.key_backup
    PUSH EAX                            ; 00514bb0 | g_CGameInstance.key_backup
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514bb1
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    OR EBX,EAX                          ; 00514bb6
    MOV EAX,[0x0067b654]                ; 00514bb8 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x98]      ; 00514bbd | g_CGameInstance.always_run
    ADD ESP,0x8                         ; 00514bc3
    TEST EDI,EDI                        ; 00514bc6
    JZ 0x00514f44                       ; 00514bc8
        ;   XREF to: 00514f44 (CONDITIONAL_JUMP)  ; LAB_00514f44
    PUSH 0x637186                       ; 00514bce | = "Walk"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514bd3
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00514bd3
    ADD ESP,0x4                         ; 00514bd8
    PUSH EAX                            ; 00514bdb
    MOV EAX,[0x0067b654]                ; 00514bdc | g_CGamePtr
    ADD EAX,0x30                        ; 00514be1 | g_CGameInstance.key_run
    PUSH EAX                            ; 00514be4 | g_CGameInstance.key_run
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514be5
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514bea
    OR EBX,EAX                          ; 00514bed
    PUSH 0x63718f                       ; 00514bef | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514bf4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514bf9
    PUSH EAX                            ; 00514bfc
    MOV EAX,[0x0067b654]                ; 00514bfd | g_CGamePtr
    ADD EAX,0x34                        ; 00514c02 | g_CGameInstance.key_strafe
    PUSH EAX                            ; 00514c05 | g_CGameInstance.key_strafe
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514c06
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514c0b
    PUSH 0x637199                       ; 00514c0e | = "Strafe left"
    OR EBX,EAX                          ; 00514c13
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514c15
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514c1a
    PUSH EAX                            ; 00514c1d
    MOV EAX,[0x0067b654]                ; 00514c1e | g_CGamePtr
    ADD EAX,0x38                        ; 00514c23 | g_CGameInstance.key_strafe_left
    PUSH EAX                            ; 00514c26 | g_CGameInstance.key_strafe_left
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514c27
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514c2c
    PUSH 0x6371a5                       ; 00514c2f | = "Strafe right"
    OR EBX,EAX                          ; 00514c34
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514c36
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514c3b
    PUSH EAX                            ; 00514c3e
    MOV EAX,[0x0067b654]                ; 00514c3f | g_CGamePtr
    ADD EAX,0x3c                        ; 00514c44 | g_CGameInstance.key_strafe_right
    PUSH EAX                            ; 00514c47 | g_CGameInstance.key_strafe_right
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514c48
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514c4d
    PUSH 0x6371b2                       ; 00514c50 | = "Turn left"
    OR EBX,EAX                          ; 00514c55
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514c57
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514c5c
    PUSH EAX                            ; 00514c5f
    MOV EAX,[0x0067b654]                ; 00514c60 | g_CGamePtr
    ADD EAX,0x44                        ; 00514c65 | g_CGameInstance.key_left
    PUSH EAX                            ; 00514c68 | g_CGameInstance.key_left
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514c69
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514c6e
    PUSH 0x6371bc                       ; 00514c71 | = "Turn right"
    OR EBX,EAX                          ; 00514c76
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514c78
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514c7d
    PUSH EAX                            ; 00514c80
    MOV EAX,[0x0067b654]                ; 00514c81 | g_CGamePtr
    ADD EAX,0x40                        ; 00514c86 | g_CGameInstance.key_right
    PUSH EAX                            ; 00514c89 | g_CGameInstance.key_right
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514c8a
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514c8f
    PUSH 0x6371c7                       ; 00514c92 | = "Fire / Action"
    OR EBX,EAX                          ; 00514c97
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514c99
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514c9e
    PUSH EAX                            ; 00514ca1
    MOV EAX,[0x0067b654]                ; 00514ca2 | g_CGamePtr
    ADD EAX,0x48                        ; 00514ca7 | g_CGameInstance.key_fire
    PUSH EAX                            ; 00514caa | g_CGameInstance.key_fire
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514cab
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514cb0
    OR EBX,EAX                          ; 00514cb3
    POP ESI                             ; 00514cb5
    POP EDI                             ; 00514cb6
    PUSH 0x6371d5                       ; 00514cb7 | = "Use item"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514cbc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514cc1
    PUSH EAX                            ; 00514cc4
    MOV EAX,[0x0067b654]                ; 00514cc5 | g_CGamePtr
    ADD EAX,0x4c                        ; 00514cca | g_CGameInstance.key_use_item
    PUSH EAX                            ; 00514ccd | g_CGameInstance.key_use_item
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514cce
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514cd3
    PUSH 0x6371de                       ; 00514cd6 | = "Light"
    OR EBX,EAX                          ; 00514cdb
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514cdd
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514ce2
    PUSH EAX                            ; 00514ce5
    MOV EAX,[0x0067b654]                ; 00514ce6 | g_CGamePtr
    ADD EAX,0x50                        ; 00514ceb | g_CGameInstance.key_light
    PUSH EAX                            ; 00514cee | g_CGameInstance.key_light
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514cef
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514cf4
    PUSH 0x6371e4                       ; 00514cf7 | = "Night Vision"
    OR EBX,EAX                          ; 00514cfc
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514cfe
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514d03
    PUSH EAX                            ; 00514d06
    MOV EAX,[0x0067b654]                ; 00514d07 | g_CGamePtr
    ADD EAX,0x54                        ; 00514d0c | g_CGameInstance.key_infrared
    PUSH EAX                            ; 00514d0f | g_CGameInstance.key_infrared
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514d10
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514d15
    PUSH 0x6371f1                       ; 00514d18 | = "Draw"
    OR EBX,EAX                          ; 00514d1d
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514d1f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514d24
    PUSH EAX                            ; 00514d27
    MOV EAX,[0x0067b654]                ; 00514d28 | g_CGamePtr
    ADD EAX,0x58                        ; 00514d2d | g_CGameInstance.key_draw
    PUSH EAX                            ; 00514d30 | g_CGameInstance.key_draw
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514d31
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514d36
    PUSH 0x6371f6                       ; 00514d39 | = "Point up"
    OR EBX,EAX                          ; 00514d3e
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514d40
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514d45
    PUSH EAX                            ; 00514d48
    MOV EAX,[0x0067b654]                ; 00514d49 | g_CGamePtr
    ADD EAX,0x60                        ; 00514d4e | g_CGameInstance.key_point_up
    PUSH EAX                            ; 00514d51 | g_CGameInstance.key_point_up
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514d52
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514d57
    PUSH 0x6371ff                       ; 00514d5a | = "Point down"
    OR EBX,EAX                          ; 00514d5f
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514d61
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514d66
    PUSH EAX                            ; 00514d69
    MOV EAX,[0x0067b654]                ; 00514d6a | g_CGamePtr
    ADD EAX,0x64                        ; 00514d6f | g_CGameInstance.key_point_down
    PUSH EAX                            ; 00514d72 | g_CGameInstance.key_point_down
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514d73
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514d78
    OR EBX,EAX                          ; 00514d7b
    PUSH 0x63720a                       ; 00514d7d | = "Jump"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514d82
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514d87
    PUSH EAX                            ; 00514d8a
    MOV EAX,[0x0067b654]                ; 00514d8b | g_CGamePtr
    ADD EAX,0x5c                        ; 00514d90 | g_CGameInstance.key_jump
    PUSH EAX                            ; 00514d93 | g_CGameInstance.key_jump
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514d94
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514d99
    PUSH 0x63720f                       ; 00514d9c | = "Select pistol weapons"
    OR EBX,EAX                          ; 00514da1
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514da3
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514da8
    PUSH EAX                            ; 00514dab
    MOV EAX,[0x0067b654]                ; 00514dac | g_CGamePtr
    ADD EAX,0x68                        ; 00514db1 | g_CGameInstance.key_weapon_1
    PUSH EAX                            ; 00514db4 | g_CGameInstance.key_weapon_1
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514db5
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514dba
    PUSH 0x637225                       ; 00514dbd | = "Select assault weapons"
    OR EBX,EAX                          ; 00514dc2
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514dc4
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514dc9
    PUSH EAX                            ; 00514dcc
    MOV EAX,[0x0067b654]                ; 00514dcd | g_CGamePtr
    ADD EAX,0x6c                        ; 00514dd2 | g_CGameInstance.key_weapon_2
    PUSH EAX                            ; 00514dd5 | g_CGameInstance.key_weapon_2
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514dd6
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514ddb
    PUSH 0x63723c                       ; 00514dde | = "Select flame weapons"
    OR EBX,EAX                          ; 00514de3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514de5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514dea
    PUSH EAX                            ; 00514ded
    MOV EAX,[0x0067b654]                ; 00514dee | g_CGamePtr
    ADD EAX,0x70                        ; 00514df3 | g_CGameInstance.key_weapon_3
    PUSH EAX                            ; 00514df6 | g_CGameInstance.key_weapon_3
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514df7
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514dfc
    PUSH 0x637251                       ; 00514dff | = "Select grenade weapons"
    OR EBX,EAX                          ; 00514e04
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514e06
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514e0b
    PUSH EAX                            ; 00514e0e
    MOV EAX,[0x0067b654]                ; 00514e0f | g_CGamePtr
    ADD EAX,0x74                        ; 00514e14 | g_CGameInstance.key_weapon_4
    PUSH EAX                            ; 00514e17 | g_CGameInstance.key_weapon_4
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514e18
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514e1d
    PUSH 0x637268                       ; 00514e20 | = "Select melee weapons"
    OR EBX,EAX                          ; 00514e25
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514e27
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514e2c
    PUSH EAX                            ; 00514e2f
    MOV EAX,[0x0067b654]                ; 00514e30 | g_CGamePtr
    ADD EAX,0x78                        ; 00514e35 | g_CGameInstance.key_weapon_5
    PUSH EAX                            ; 00514e38 | g_CGameInstance.key_weapon_5
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514e39
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514e3e
    OR EBX,EAX                          ; 00514e41
    PUSH 0x63727d                       ; 00514e43 | = "Next weapon"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514e48
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514e4d
    PUSH EAX                            ; 00514e50
    MOV EAX,[0x0067b654]                ; 00514e51 | g_CGamePtr
    ADD EAX,0x7c                        ; 00514e56 | g_CGameInstance.key_next_weapon
    PUSH EAX                            ; 00514e59 | g_CGameInstance.key_next_weapon
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514e5a
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514e5f
    PUSH 0x637289                       ; 00514e62 | = "Previous weapon"
    OR EBX,EAX                          ; 00514e67
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514e69
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514e6e
    PUSH EAX                            ; 00514e71
    MOV EAX,[0x0067b654]                ; 00514e72 | g_CGamePtr
    ADD EAX,0x80                        ; 00514e77 | g_CGameInstance.key_prev_weapon
    PUSH EAX                            ; 00514e7c | g_CGameInstance.key_prev_weapon
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514e7d
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514e82
    PUSH 0x637299                       ; 00514e85 | = "Next item"
    OR EBX,EAX                          ; 00514e8a
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514e8c
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514e91
    PUSH EAX                            ; 00514e94
    MOV EAX,[0x0067b654]                ; 00514e95 | g_CGamePtr
    ADD EAX,0x84                        ; 00514e9a | g_CGameInstance.key_next_item
    PUSH EAX                            ; 00514e9f | g_CGameInstance.key_next_item
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514ea0
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514ea5
    PUSH 0x6372a3                       ; 00514ea8 | = "Previous item"
    OR EBX,EAX                          ; 00514ead
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514eaf
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514eb4
    PUSH EAX                            ; 00514eb7
    MOV EAX,[0x0067b654]                ; 00514eb8 | g_CGamePtr
    ADD EAX,0x88                        ; 00514ebd | g_CGameInstance.key_prev_item
    PUSH EAX                            ; 00514ec2 | g_CGameInstance.key_prev_item
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514ec3
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514ec8
    PUSH 0x6372b1                       ; 00514ecb | = "Item description"
    OR EBX,EAX                          ; 00514ed0
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514ed2
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514ed7
    PUSH EAX                            ; 00514eda
    MOV EAX,[0x0067b654]                ; 00514edb | g_CGamePtr
    ADD EAX,0x8c                        ; 00514ee0 | g_CGameInstance.key_item_desc
    PUSH EAX                            ; 00514ee5 | g_CGameInstance.key_item_desc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514ee6
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514eeb
    PUSH 0x6372c2                       ; 00514eee | = "Next ammo"
    OR EBX,EAX                          ; 00514ef3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00514ef5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00514efa
    PUSH EAX                            ; 00514efd
    MOV EAX,[0x0067b654]                ; 00514efe | g_CGamePtr
    ADD EAX,0x90                        ; 00514f03 | g_CGameInstance.key_next_ammo
    PUSH EAX                            ; 00514f08 | g_CGameInstance.key_next_ammo
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_00513720 ; 00514f09
        ;   XREF to: 00513720 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 00514f0e
    OR EBX,EAX                          ; 00514f11
    JZ 0x005147c9                       ; 00514f13
        ;   XREF to: 005147c9 (CONDITIONAL_JUMP)  ; LAB_005147c9
    MOV EBP,dword ptr [0x0067b654]      ; 00514f19 | g_CGamePtr
    PUSH EBP                            ; 00514f1f | g_CGameInstance
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0 ; 00514f20
        ;   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame * this_ptr)
    ADD ESP,0x4                         ; 00514f25
    PUSH 0x6372cc                       ; 00514f28 | = "One or more keys not valid.  Restorin..."
    MOV EAX,[0x00678a60]                ; 00514f2d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00514f32 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00514f33
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00514f38
    ADD ESP,0xa74                       ; 00514f3b
    POP EBP                             ; 00514f41
    POP EBX                             ; 00514f42
    RET                                 ; 00514f43
    PUSH 0x63718b                       ; 00514f44 | = "Run"
        ;   Label: LAB_00514f44
    JMP 0x00514bd3                      ; 00514f49
        ;   XREF to: 00514bd3 (UNCONDITIONAL_JUMP)  ; LAB_00514bd3

