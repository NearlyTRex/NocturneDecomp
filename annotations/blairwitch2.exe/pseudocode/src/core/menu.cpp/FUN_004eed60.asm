; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_menu_cpp_FUN_004eed60(void)
;
; Local Variables:
; undefined        Stack[-0xa94]:1  local_a94
; undefined        Stack[-0x6d4]:1  local_6d4
; undefined1       Stack[-0x6d3]:1  local_6d3
; undefined        Stack[-0x2d4]:1  local_2d4
; undefined1       Stack[-0x2d3]:1  local_2d3
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_menu.cpp_FUN_004ecc70 at 004ed0f6
;   core_menu.cpp_FUN_004ee1a0 at 004ee38c
;
; Referenced Globals:
;   void* switchdataD_004eed40 = 004efb96
;   TerminatedCString s_core_menu_cpp_005dd2ac
;   TerminatedCString s_Too_many_custom_keys_005dd2bd
;   TerminatedCString s_Forward_005dd3a2
;   undefined4 DAT_005dd3aa
;   undefined4 DAT_005dd3af
;   undefined4 DAT_005dd3b4
;   TerminatedCString s_Strafe_on_005dd3b8
;   TerminatedCString s_Strafe_left_005dd3c2
;   TerminatedCString s_Strafe_right_005dd3ce
;   TerminatedCString s_Turn_left_005dd3db
;   TerminatedCString s_Turn_right_005dd3e5
;   TerminatedCString s_Fire_Gun_Action_005dd3f0
;   TerminatedCString s_Use_item_005dd401
;   TerminatedCString s_Lantern_005dd40a
;   ... and 177 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10
;   core_main.c_FUN_004e4500
;   core_menu.cpp_FUN_004eb490
;   core_menu.cpp_getKeyDisplayName_FUN_004ee960
;   core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0
;   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004821c0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eed60
        ;   Label: core_menu.cpp_FUN_004eed60
    PUSH EBP                            ; 004eed61
    SUB ESP,0xa8c                       ; 004eed62
    MOV EAX,[0x00616494]                ; 004eed68 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 004eed6d | g_CGameInstance.game_control
    JNZ 0x004eed83                      ; 004eed74
        ;   XREF to: 004eed83 (CONDITIONAL_JUMP)  ; LAB_004eed83
    CMP dword ptr [EAX + 0xb8],0x0      ; 004eed76 | g_CGameInstance.x_center
    JZ 0x004efae9                       ; 004eed7d
        ;   XREF to: 004efae9 (CONDITIONAL_JUMP)  ; LAB_004efae9
    PUSH EDI                            ; 004eed83
        ;   Label: LAB_004eed83
    PUSH ESI                            ; 004eed84
    XOR EBX,EBX                         ; 004eed85
    MOV dword ptr [ESP + 0xa90],EBX     ; 004eed87
    XOR ESI,ESI                         ; 004eed8e
        ;   Label: LAB_004eed8e
    PUSH 0x5dd3a2                       ; 004eed90 | = "Forward"
    MOV dword ptr [0x01d086f0],ESI      ; 004eed95 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eed9b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004eeda0 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004eeda6 | DAT_01d086f0
    ADD ESP,0x4                         ; 004eedac
    MOV ESI,EAX                         ; 004eedaf
    ADD EBX,0x28                        ; 004eedb1
    CMP EDI,0x26                        ; 004eedb4
    JL 0x004eeddb                       ; 004eedb7
        ;   XREF to: 004eeddb (CONDITIONAL_JUMP)  ; LAB_004eeddb
    MOV EBP,0x5dd2ac                    ; 004eedb9 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004eedbe
    PUSH 0x5dd2bd                       ; 004eedc3 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004eedc8 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004eedce | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eedd3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004eedd8
    MOV EAX,[0x01d086f0]                ; 004eeddb | DAT_01d086f0
        ;   Label: LAB_004eeddb
    IMUL EDI,EAX,0x28                   ; 004eede0
    ADD EDI,0x1d08790                   ; 004eede3
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004eede9 | DAT_01d086f4 | g_CGameInstance.key_walk
    PUSH EDI                            ; 004eedf0
    MOV AL,byte ptr [ESI]               ; 004eedf1
        ;   Label: LAB_004eedf1
    MOV byte ptr [EDI],AL               ; 004eedf3
    CMP AL,0x0                          ; 004eedf5
    JZ 0x004eee09                       ; 004eedf7
        ;   XREF to: 004eee09 (CONDITIONAL_JUMP)  ; LAB_004eee09
    MOV AL,byte ptr [ESI + 0x1]         ; 004eedf9
    ADD ESI,0x2                         ; 004eedfc
    MOV byte ptr [EDI + 0x1],AL         ; 004eedff
    ADD EDI,0x2                         ; 004eee02
    CMP AL,0x0                          ; 004eee05
    JNZ 0x004eedf1                      ; 004eee07
        ;   XREF to: 004eedf1 (CONDITIONAL_JUMP)  ; LAB_004eedf1
    POP EDI                             ; 004eee09
        ;   Label: LAB_004eee09
    MOV ECX,dword ptr [0x01d086f0]      ; 004eee0a | DAT_01d086f0
    INC ECX                             ; 004eee10
    PUSH 0x5dd3aa                       ; 004eee11 | DAT_005dd3aa
    MOV dword ptr [0x01d086f0],ECX      ; 004eee16 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eee1c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004eee21 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004eee27 | DAT_01d086f0
    ADD ESP,0x4                         ; 004eee2d
    MOV ESI,EAX                         ; 004eee30
    ADD EBX,0x2c                        ; 004eee32
    CMP EDI,0x26                        ; 004eee35
    JL 0x004eee5c                       ; 004eee38
        ;   XREF to: 004eee5c (CONDITIONAL_JUMP)  ; LAB_004eee5c
    MOV EBP,0x5dd2ac                    ; 004eee3a | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004eee3f
    PUSH 0x5dd2bd                       ; 004eee44 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004eee49 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004eee4f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eee54
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004eee59
    MOV EAX,[0x01d086f0]                ; 004eee5c | DAT_01d086f0
        ;   Label: LAB_004eee5c
    IMUL EDI,EAX,0x28                   ; 004eee61
    ADD EDI,0x1d08790                   ; 004eee64
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004eee6a | DAT_01d086f8 | g_CGameInstance.key_backup
    PUSH EDI                            ; 004eee71 | DAT_01d087b8
    MOV AL,byte ptr [ESI]               ; 004eee72
        ;   Label: LAB_004eee72
    MOV byte ptr [EDI],AL               ; 004eee74 | DAT_01d087b8 | DAT_01d087ba
    CMP AL,0x0                          ; 004eee76
    JZ 0x004eee8a                       ; 004eee78
        ;   XREF to: 004eee8a (CONDITIONAL_JUMP)  ; LAB_004eee8a
    MOV AL,byte ptr [ESI + 0x1]         ; 004eee7a
    ADD ESI,0x2                         ; 004eee7d
    MOV byte ptr [EDI + 0x1],AL         ; 004eee80 | DAT_01d087b9 | DAT_01d087bb
    ADD EDI,0x2                         ; 004eee83
    CMP AL,0x0                          ; 004eee86
    JNZ 0x004eee72                      ; 004eee88
        ;   XREF to: 004eee72 (CONDITIONAL_JUMP)  ; LAB_004eee72
    POP EDI                             ; 004eee8a
        ;   Label: LAB_004eee8a
    MOV ECX,dword ptr [0x01d086f0]      ; 004eee8b | DAT_01d086f0
    MOV EAX,[0x00616494]                ; 004eee91 | g_CGamePtr
    INC ECX                             ; 004eee96
    MOV EBX,dword ptr [EAX + 0xac]      ; 004eee97 | g_CGameInstance.always_run
    MOV dword ptr [0x01d086f0],ECX      ; 004eee9d | DAT_01d086f0
    TEST EBX,EBX                        ; 004eeea3
    JZ 0x004efaff                       ; 004eeea5
        ;   XREF to: 004efaff (CONDITIONAL_JUMP)  ; LAB_004efaff
    PUSH 0x5dd3af                       ; 004eeeab | DAT_005dd3af
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eeeb0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004eeeb0
    MOV EBX,dword ptr [0x00616494]      ; 004eeeb5 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004eeebb | DAT_01d086f0
    ADD ESP,0x4                         ; 004eeec1
    MOV ESI,EAX                         ; 004eeec4
    ADD EBX,0x30                        ; 004eeec6
    CMP EDI,0x26                        ; 004eeec9
    JL 0x004eeef0                       ; 004eeecc
        ;   XREF to: 004eeef0 (CONDITIONAL_JUMP)  ; LAB_004eeef0
    MOV EBP,0x5dd2ac                    ; 004eeece | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004eeed3
    PUSH 0x5dd2bd                       ; 004eeed8 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004eeedd | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004eeee3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eeee8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004eeeed
    MOV EAX,[0x01d086f0]                ; 004eeef0 | DAT_01d086f0
        ;   Label: LAB_004eeef0
    IMUL EDI,EAX,0x28                   ; 004eeef5
    ADD EDI,0x1d08790                   ; 004eeef8
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004eeefe | DAT_01d086fc
    PUSH EDI                            ; 004eef05 | DAT_01d087e0
    MOV AL,byte ptr [ESI]               ; 004eef06
        ;   Label: LAB_004eef06
    MOV byte ptr [EDI],AL               ; 004eef08 | DAT_01d087e0 | DAT_01d087e2
    CMP AL,0x0                          ; 004eef0a
    JZ 0x004eef1e                       ; 004eef0c
        ;   XREF to: 004eef1e (CONDITIONAL_JUMP)  ; LAB_004eef1e
    MOV AL,byte ptr [ESI + 0x1]         ; 004eef0e
    ADD ESI,0x2                         ; 004eef11
    MOV byte ptr [EDI + 0x1],AL         ; 004eef14 | DAT_01d087e1 | DAT_01d087e3
    ADD EDI,0x2                         ; 004eef17
    CMP AL,0x0                          ; 004eef1a
    JNZ 0x004eef06                      ; 004eef1c
        ;   XREF to: 004eef06 (CONDITIONAL_JUMP)  ; LAB_004eef06
    POP EDI                             ; 004eef1e
        ;   Label: LAB_004eef1e
    INC dword ptr [0x01d086f0]          ; 004eef1f | DAT_01d086f0
    PUSH 0x5dd3b8                       ; 004eef25 | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eef2a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004eef2f | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004eef35 | DAT_01d086f0
    ADD ESP,0x4                         ; 004eef3b
    MOV ESI,EAX                         ; 004eef3e
    ADD EBX,0x34                        ; 004eef40
    CMP EDI,0x26                        ; 004eef43
    JL 0x004eef6a                       ; 004eef46
        ;   XREF to: 004eef6a (CONDITIONAL_JUMP)  ; LAB_004eef6a
    MOV EBP,0x5dd2ac                    ; 004eef48 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004eef4d
    PUSH 0x5dd2bd                       ; 004eef52 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004eef57 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004eef5d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eef62
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004eef67
    MOV EAX,[0x01d086f0]                ; 004eef6a | DAT_01d086f0
        ;   Label: LAB_004eef6a
    IMUL EDI,EAX,0x28                   ; 004eef6f
    ADD EDI,0x1d08790                   ; 004eef72
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004eef78 | DAT_01d08700
    PUSH EDI                            ; 004eef7f | DAT_01d08808
    MOV AL,byte ptr [ESI]               ; 004eef80
        ;   Label: LAB_004eef80
    MOV byte ptr [EDI],AL               ; 004eef82 | DAT_01d08808 | DAT_01d0880a
    CMP AL,0x0                          ; 004eef84
    JZ 0x004eef98                       ; 004eef86
        ;   XREF to: 004eef98 (CONDITIONAL_JUMP)  ; LAB_004eef98
    MOV AL,byte ptr [ESI + 0x1]         ; 004eef88
    ADD ESI,0x2                         ; 004eef8b
    MOV byte ptr [EDI + 0x1],AL         ; 004eef8e | DAT_01d08809 | DAT_01d0880b
    ADD EDI,0x2                         ; 004eef91
    CMP AL,0x0                          ; 004eef94
    JNZ 0x004eef80                      ; 004eef96
        ;   XREF to: 004eef80 (CONDITIONAL_JUMP)  ; LAB_004eef80
    POP EDI                             ; 004eef98
        ;   Label: LAB_004eef98
    MOV ECX,dword ptr [0x01d086f0]      ; 004eef99 | DAT_01d086f0
    INC ECX                             ; 004eef9f
    PUSH 0x5dd3c2                       ; 004eefa0 | = "Strafe left"
    MOV dword ptr [0x01d086f0],ECX      ; 004eefa5 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eefab
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004eefb0 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004eefb6 | DAT_01d086f0
    ADD ESP,0x4                         ; 004eefbc
    MOV ESI,EAX                         ; 004eefbf
    ADD EBX,0x38                        ; 004eefc1
    CMP EDI,0x26                        ; 004eefc4
    JL 0x004eefeb                       ; 004eefc7
        ;   XREF to: 004eefeb (CONDITIONAL_JUMP)  ; LAB_004eefeb
    MOV EBP,0x5dd2ac                    ; 004eefc9 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004eefce
    PUSH 0x5dd2bd                       ; 004eefd3 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004eefd8 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004eefde | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004eefe3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004eefe8
    MOV EAX,[0x01d086f0]                ; 004eefeb | DAT_01d086f0
        ;   Label: LAB_004eefeb
    IMUL EDI,EAX,0x28                   ; 004eeff0
    ADD EDI,0x1d08790                   ; 004eeff3
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004eeff9 | DAT_01d08704
    PUSH EDI                            ; 004ef000 | DAT_01d08830
    MOV AL,byte ptr [ESI]               ; 004ef001
        ;   Label: LAB_004ef001
    MOV byte ptr [EDI],AL               ; 004ef003 | DAT_01d08830 | DAT_01d08832
    CMP AL,0x0                          ; 004ef005
    JZ 0x004ef019                       ; 004ef007
        ;   XREF to: 004ef019 (CONDITIONAL_JUMP)  ; LAB_004ef019
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef009
    ADD ESI,0x2                         ; 004ef00c
    MOV byte ptr [EDI + 0x1],AL         ; 004ef00f | DAT_01d08831 | DAT_01d08833
    ADD EDI,0x2                         ; 004ef012
    CMP AL,0x0                          ; 004ef015
    JNZ 0x004ef001                      ; 004ef017
        ;   XREF to: 004ef001 (CONDITIONAL_JUMP)  ; LAB_004ef001
    POP EDI                             ; 004ef019
        ;   Label: LAB_004ef019
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef01a | DAT_01d086f0
    INC ECX                             ; 004ef020
    PUSH 0x5dd3ce                       ; 004ef021 | = "Strafe right"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef026 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef02c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef031 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef037 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef03d
    MOV ESI,EAX                         ; 004ef040
    ADD EBX,0x3c                        ; 004ef042
    CMP EDI,0x26                        ; 004ef045
    JL 0x004ef06c                       ; 004ef048
        ;   XREF to: 004ef06c (CONDITIONAL_JUMP)  ; LAB_004ef06c
    MOV EBP,0x5dd2ac                    ; 004ef04a | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef04f
    PUSH 0x5dd2bd                       ; 004ef054 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef059 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef05f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef064
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef069
    MOV EAX,[0x01d086f0]                ; 004ef06c | DAT_01d086f0
        ;   Label: LAB_004ef06c
    IMUL EDI,EAX,0x28                   ; 004ef071
    ADD EDI,0x1d08790                   ; 004ef074
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef07a | DAT_01d08708
    PUSH EDI                            ; 004ef081 | DAT_01d08858
    MOV AL,byte ptr [ESI]               ; 004ef082
        ;   Label: LAB_004ef082
    MOV byte ptr [EDI],AL               ; 004ef084 | DAT_01d08858 | DAT_01d0885a
    CMP AL,0x0                          ; 004ef086
    JZ 0x004ef09a                       ; 004ef088
        ;   XREF to: 004ef09a (CONDITIONAL_JUMP)  ; LAB_004ef09a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef08a
    ADD ESI,0x2                         ; 004ef08d
    MOV byte ptr [EDI + 0x1],AL         ; 004ef090 | DAT_01d08859 | DAT_01d0885b
    ADD EDI,0x2                         ; 004ef093
    CMP AL,0x0                          ; 004ef096
    JNZ 0x004ef082                      ; 004ef098
        ;   XREF to: 004ef082 (CONDITIONAL_JUMP)  ; LAB_004ef082
    POP EDI                             ; 004ef09a
        ;   Label: LAB_004ef09a
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef09b | DAT_01d086f0
    INC ECX                             ; 004ef0a1
    PUSH 0x5dd3db                       ; 004ef0a2 | = "Turn left"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef0a7 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef0ad
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef0b2 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef0b8 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef0be
    MOV ESI,EAX                         ; 004ef0c1
    ADD EBX,0x44                        ; 004ef0c3
    CMP EDI,0x26                        ; 004ef0c6
    JL 0x004ef0ed                       ; 004ef0c9
        ;   XREF to: 004ef0ed (CONDITIONAL_JUMP)  ; LAB_004ef0ed
    MOV EBP,0x5dd2ac                    ; 004ef0cb | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef0d0
    PUSH 0x5dd2bd                       ; 004ef0d5 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef0da | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef0e0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef0e5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef0ea
    MOV EAX,[0x01d086f0]                ; 004ef0ed | DAT_01d086f0
        ;   Label: LAB_004ef0ed
    IMUL EDI,EAX,0x28                   ; 004ef0f2
    ADD EDI,0x1d08790                   ; 004ef0f5
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef0fb | DAT_01d0870c
    PUSH EDI                            ; 004ef102 | DAT_01d08880
    MOV AL,byte ptr [ESI]               ; 004ef103
        ;   Label: LAB_004ef103
    MOV byte ptr [EDI],AL               ; 004ef105 | DAT_01d08880 | DAT_01d08882
    CMP AL,0x0                          ; 004ef107
    JZ 0x004ef11b                       ; 004ef109
        ;   XREF to: 004ef11b (CONDITIONAL_JUMP)  ; LAB_004ef11b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef10b
    ADD ESI,0x2                         ; 004ef10e
    MOV byte ptr [EDI + 0x1],AL         ; 004ef111 | DAT_01d08881 | DAT_01d08883
    ADD EDI,0x2                         ; 004ef114
    CMP AL,0x0                          ; 004ef117
    JNZ 0x004ef103                      ; 004ef119
        ;   XREF to: 004ef103 (CONDITIONAL_JUMP)  ; LAB_004ef103
    POP EDI                             ; 004ef11b
        ;   Label: LAB_004ef11b
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef11c | DAT_01d086f0
    INC ECX                             ; 004ef122
    PUSH 0x5dd3e5                       ; 004ef123 | = "Turn right"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef128 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef12e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef133 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef139 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef13f
    MOV ESI,EAX                         ; 004ef142
    ADD EBX,0x40                        ; 004ef144
    CMP EDI,0x26                        ; 004ef147
    JL 0x004ef16e                       ; 004ef14a
        ;   XREF to: 004ef16e (CONDITIONAL_JUMP)  ; LAB_004ef16e
    MOV EBP,0x5dd2ac                    ; 004ef14c | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef151
    PUSH 0x5dd2bd                       ; 004ef156 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef15b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef161 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef166
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef16b
    MOV EAX,[0x01d086f0]                ; 004ef16e | DAT_01d086f0
        ;   Label: LAB_004ef16e
    IMUL EDI,EAX,0x28                   ; 004ef173
    ADD EDI,0x1d08790                   ; 004ef176
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef17c | DAT_01d08710
    PUSH EDI                            ; 004ef183 | DAT_01d088a8
    MOV AL,byte ptr [ESI]               ; 004ef184
        ;   Label: LAB_004ef184
    MOV byte ptr [EDI],AL               ; 004ef186 | DAT_01d088a8 | DAT_01d088aa
    CMP AL,0x0                          ; 004ef188
    JZ 0x004ef19c                       ; 004ef18a
        ;   XREF to: 004ef19c (CONDITIONAL_JUMP)  ; LAB_004ef19c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef18c
    ADD ESI,0x2                         ; 004ef18f
    MOV byte ptr [EDI + 0x1],AL         ; 004ef192 | DAT_01d088a9 | DAT_01d088ab
    ADD EDI,0x2                         ; 004ef195
    CMP AL,0x0                          ; 004ef198
    JNZ 0x004ef184                      ; 004ef19a
        ;   XREF to: 004ef184 (CONDITIONAL_JUMP)  ; LAB_004ef184
    POP EDI                             ; 004ef19c
        ;   Label: LAB_004ef19c
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef19d | DAT_01d086f0
    INC ECX                             ; 004ef1a3
    PUSH 0x5dd3f0                       ; 004ef1a4 | = "Fire Gun/ Action"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef1a9 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef1af
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EDX,dword ptr [0x00616494]      ; 004ef1b4 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef1ba | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef1c0
    MOV ESI,EAX                         ; 004ef1c3
    LEA EBX,[EDX + 0x48]                ; 004ef1c5
    CMP EDI,0x26                        ; 004ef1c8
    JL 0x004ef1ef                       ; 004ef1cb
        ;   XREF to: 004ef1ef (CONDITIONAL_JUMP)  ; LAB_004ef1ef
    MOV EBP,0x5dd2ac                    ; 004ef1cd | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef1d2
    PUSH 0x5dd2bd                       ; 004ef1d7 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef1dc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef1e2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef1e7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef1ec
    MOV EAX,[0x01d086f0]                ; 004ef1ef | DAT_01d086f0
        ;   Label: LAB_004ef1ef
    IMUL EDI,EAX,0x28                   ; 004ef1f4
    ADD EDI,0x1d08790                   ; 004ef1f7
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef1fd | DAT_01d08714
    PUSH EDI                            ; 004ef204 | DAT_01d088d0
    MOV AL,byte ptr [ESI]               ; 004ef205
        ;   Label: LAB_004ef205
    MOV byte ptr [EDI],AL               ; 004ef207 | DAT_01d088d0 | DAT_01d088d2
    CMP AL,0x0                          ; 004ef209
    JZ 0x004ef21d                       ; 004ef20b
        ;   XREF to: 004ef21d (CONDITIONAL_JUMP)  ; LAB_004ef21d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef20d
    ADD ESI,0x2                         ; 004ef210
    MOV byte ptr [EDI + 0x1],AL         ; 004ef213 | DAT_01d088d1 | DAT_01d088d3
    ADD EDI,0x2                         ; 004ef216
    CMP AL,0x0                          ; 004ef219
    JNZ 0x004ef205                      ; 004ef21b
        ;   XREF to: 004ef205 (CONDITIONAL_JUMP)  ; LAB_004ef205
    POP EDI                             ; 004ef21d
        ;   Label: LAB_004ef21d
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef21e | DAT_01d086f0
    INC ECX                             ; 004ef224
    PUSH 0x5dd401                       ; 004ef225 | = "Use item"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef22a | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef230
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef235 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef23b | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef241
    MOV ESI,EAX                         ; 004ef244
    ADD EBX,0x4c                        ; 004ef246
    CMP EDI,0x26                        ; 004ef249
    JL 0x004ef270                       ; 004ef24c
        ;   XREF to: 004ef270 (CONDITIONAL_JUMP)  ; LAB_004ef270
    MOV EBP,0x5dd2ac                    ; 004ef24e | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef253
    PUSH 0x5dd2bd                       ; 004ef258 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef25d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef263 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef268
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef26d
    MOV EAX,[0x01d086f0]                ; 004ef270 | DAT_01d086f0
        ;   Label: LAB_004ef270
    IMUL EDI,EAX,0x28                   ; 004ef275
    ADD EDI,0x1d08790                   ; 004ef278
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef27e | DAT_01d08718
    PUSH EDI                            ; 004ef285 | DAT_01d088f8
    MOV AL,byte ptr [ESI]               ; 004ef286
        ;   Label: LAB_004ef286
    MOV byte ptr [EDI],AL               ; 004ef288 | DAT_01d088f8 | DAT_01d088fa
    CMP AL,0x0                          ; 004ef28a
    JZ 0x004ef29e                       ; 004ef28c
        ;   XREF to: 004ef29e (CONDITIONAL_JUMP)  ; LAB_004ef29e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef28e
    ADD ESI,0x2                         ; 004ef291
    MOV byte ptr [EDI + 0x1],AL         ; 004ef294 | DAT_01d088f9 | DAT_01d088fb
    ADD EDI,0x2                         ; 004ef297
    CMP AL,0x0                          ; 004ef29a
    JNZ 0x004ef286                      ; 004ef29c
        ;   XREF to: 004ef286 (CONDITIONAL_JUMP)  ; LAB_004ef286
    POP EDI                             ; 004ef29e
        ;   Label: LAB_004ef29e
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef29f | DAT_01d086f0
    INC ECX                             ; 004ef2a5
    PUSH 0x5dd40a                       ; 004ef2a6 | = "Lantern"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef2ab | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef2b1
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef2b6 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef2bc | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef2c2
    MOV ESI,EAX                         ; 004ef2c5
    ADD EBX,0x50                        ; 004ef2c7
    CMP EDI,0x26                        ; 004ef2ca
    JL 0x004ef2f1                       ; 004ef2cd
        ;   XREF to: 004ef2f1 (CONDITIONAL_JUMP)  ; LAB_004ef2f1
    MOV EBP,0x5dd2ac                    ; 004ef2cf | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef2d4
    PUSH 0x5dd2bd                       ; 004ef2d9 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef2de | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef2e4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef2e9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef2ee
    MOV EAX,[0x01d086f0]                ; 004ef2f1 | DAT_01d086f0
        ;   Label: LAB_004ef2f1
    IMUL EDI,EAX,0x28                   ; 004ef2f6
    ADD EDI,0x1d08790                   ; 004ef2f9
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef2ff | DAT_01d0871c
    PUSH EDI                            ; 004ef306 | DAT_01d08920
    MOV AL,byte ptr [ESI]               ; 004ef307
        ;   Label: LAB_004ef307
    MOV byte ptr [EDI],AL               ; 004ef309 | DAT_01d08920 | DAT_01d08922
    CMP AL,0x0                          ; 004ef30b
    JZ 0x004ef31f                       ; 004ef30d
        ;   XREF to: 004ef31f (CONDITIONAL_JUMP)  ; LAB_004ef31f
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef30f
    ADD ESI,0x2                         ; 004ef312
    MOV byte ptr [EDI + 0x1],AL         ; 004ef315 | DAT_01d08921 | DAT_01d08923
    ADD EDI,0x2                         ; 004ef318
    CMP AL,0x0                          ; 004ef31b
    JNZ 0x004ef307                      ; 004ef31d
        ;   XREF to: 004ef307 (CONDITIONAL_JUMP)  ; LAB_004ef307
    POP EDI                             ; 004ef31f
        ;   Label: LAB_004ef31f
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef320 | DAT_01d086f0
    INC ECX                             ; 004ef326
    PUSH 0x5dd412                       ; 004ef327 | = "Draw Gun"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef32c | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef332
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef337 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef33d | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef343
    MOV ESI,EAX                         ; 004ef346
    ADD EBX,0x68                        ; 004ef348
    CMP EDI,0x26                        ; 004ef34b
    JL 0x004ef372                       ; 004ef34e
        ;   XREF to: 004ef372 (CONDITIONAL_JUMP)  ; LAB_004ef372
    MOV EBP,0x5dd2ac                    ; 004ef350 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef355
    PUSH 0x5dd2bd                       ; 004ef35a | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef35f | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef365 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef36a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef36f
    MOV EAX,[0x01d086f0]                ; 004ef372 | DAT_01d086f0
        ;   Label: LAB_004ef372
    IMUL EDI,EAX,0x28                   ; 004ef377
    ADD EDI,0x1d08790                   ; 004ef37a
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef380 | DAT_01d08720
    PUSH EDI                            ; 004ef387 | DAT_01d08948
    MOV AL,byte ptr [ESI]               ; 004ef388
        ;   Label: LAB_004ef388
    MOV byte ptr [EDI],AL               ; 004ef38a | DAT_01d08948 | DAT_01d0894a
    CMP AL,0x0                          ; 004ef38c
    JZ 0x004ef3a0                       ; 004ef38e
        ;   XREF to: 004ef3a0 (CONDITIONAL_JUMP)  ; LAB_004ef3a0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef390
    ADD ESI,0x2                         ; 004ef393
    MOV byte ptr [EDI + 0x1],AL         ; 004ef396 | DAT_01d08949 | DAT_01d0894b
    ADD EDI,0x2                         ; 004ef399
    CMP AL,0x0                          ; 004ef39c
    JNZ 0x004ef388                      ; 004ef39e
        ;   XREF to: 004ef388 (CONDITIONAL_JUMP)  ; LAB_004ef388
    POP EDI                             ; 004ef3a0
        ;   Label: LAB_004ef3a0
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef3a1 | DAT_01d086f0
    INC ECX                             ; 004ef3a7
    PUSH 0x5dd41b                       ; 004ef3a8 | = "Point up"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef3ad | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef3b3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef3b8 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef3be | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef3c4
    MOV ESI,EAX                         ; 004ef3c7
    ADD EBX,0x74                        ; 004ef3c9
    CMP EDI,0x26                        ; 004ef3cc
    JL 0x004ef3f3                       ; 004ef3cf
        ;   XREF to: 004ef3f3 (CONDITIONAL_JUMP)  ; LAB_004ef3f3
    MOV EBP,0x5dd2ac                    ; 004ef3d1 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef3d6
    PUSH 0x5dd2bd                       ; 004ef3db | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef3e0 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef3e6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef3eb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef3f0
    MOV EAX,[0x01d086f0]                ; 004ef3f3 | DAT_01d086f0
        ;   Label: LAB_004ef3f3
    IMUL EDI,EAX,0x28                   ; 004ef3f8
    ADD EDI,0x1d08790                   ; 004ef3fb
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef401 | DAT_01d08724
    PUSH EDI                            ; 004ef408 | DAT_01d08970
    MOV AL,byte ptr [ESI]               ; 004ef409
        ;   Label: LAB_004ef409
    MOV byte ptr [EDI],AL               ; 004ef40b | DAT_01d08970 | DAT_01d08972
    CMP AL,0x0                          ; 004ef40d
    JZ 0x004ef421                       ; 004ef40f
        ;   XREF to: 004ef421 (CONDITIONAL_JUMP)  ; LAB_004ef421
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef411
    ADD ESI,0x2                         ; 004ef414
    MOV byte ptr [EDI + 0x1],AL         ; 004ef417 | DAT_01d08971 | DAT_01d08973
    ADD EDI,0x2                         ; 004ef41a
    CMP AL,0x0                          ; 004ef41d
    JNZ 0x004ef409                      ; 004ef41f
        ;   XREF to: 004ef409 (CONDITIONAL_JUMP)  ; LAB_004ef409
    POP EDI                             ; 004ef421
        ;   Label: LAB_004ef421
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef422 | DAT_01d086f0
    INC ECX                             ; 004ef428
    PUSH 0x5dd424                       ; 004ef429 | = "Point down"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef42e | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef434
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef439 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef43f | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef445
    MOV ESI,EAX                         ; 004ef448
    ADD EBX,0x78                        ; 004ef44a
    CMP EDI,0x26                        ; 004ef44d
    JL 0x004ef474                       ; 004ef450
        ;   XREF to: 004ef474 (CONDITIONAL_JUMP)  ; LAB_004ef474
    MOV EBP,0x5dd2ac                    ; 004ef452 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef457
    PUSH 0x5dd2bd                       ; 004ef45c | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef461 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef467 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef46c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef471
    MOV EAX,[0x01d086f0]                ; 004ef474 | DAT_01d086f0
        ;   Label: LAB_004ef474
    IMUL EDI,EAX,0x28                   ; 004ef479
    ADD EDI,0x1d08790                   ; 004ef47c
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef482 | DAT_01d08728
    PUSH EDI                            ; 004ef489 | DAT_01d08998
    MOV AL,byte ptr [ESI]               ; 004ef48a
        ;   Label: LAB_004ef48a
    MOV byte ptr [EDI],AL               ; 004ef48c | DAT_01d08998 | DAT_01d0899a
    CMP AL,0x0                          ; 004ef48e
    JZ 0x004ef4a2                       ; 004ef490
        ;   XREF to: 004ef4a2 (CONDITIONAL_JUMP)  ; LAB_004ef4a2
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef492
    ADD ESI,0x2                         ; 004ef495
    MOV byte ptr [EDI + 0x1],AL         ; 004ef498 | DAT_01d08999 | DAT_01d0899b
    ADD EDI,0x2                         ; 004ef49b
    CMP AL,0x0                          ; 004ef49e
    JNZ 0x004ef48a                      ; 004ef4a0
        ;   XREF to: 004ef48a (CONDITIONAL_JUMP)  ; LAB_004ef48a
    POP EDI                             ; 004ef4a2
        ;   Label: LAB_004ef4a2
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef4a3 | DAT_01d086f0
    INC ECX                             ; 004ef4a9
    PUSH 0x5dd42f                       ; 004ef4aa | = "Select Revolver"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef4af | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef4b5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef4ba | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef4c0 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef4c6
    MOV ESI,EAX                         ; 004ef4c9
    ADD EBX,0x7c                        ; 004ef4cb
    CMP EDI,0x26                        ; 004ef4ce
    JL 0x004ef4f5                       ; 004ef4d1
        ;   XREF to: 004ef4f5 (CONDITIONAL_JUMP)  ; LAB_004ef4f5
    MOV EBP,0x5dd2ac                    ; 004ef4d3 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef4d8
    PUSH 0x5dd2bd                       ; 004ef4dd | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef4e2 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef4e8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef4ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef4f2
    MOV EAX,[0x01d086f0]                ; 004ef4f5 | DAT_01d086f0
        ;   Label: LAB_004ef4f5
    IMUL EDI,EAX,0x28                   ; 004ef4fa
    ADD EDI,0x1d08790                   ; 004ef4fd
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef503 | DAT_01d0872c
    PUSH EDI                            ; 004ef50a | DAT_01d089c0
    MOV AL,byte ptr [ESI]               ; 004ef50b
        ;   Label: LAB_004ef50b
    MOV byte ptr [EDI],AL               ; 004ef50d | DAT_01d089c0 | DAT_01d089c2
    CMP AL,0x0                          ; 004ef50f
    JZ 0x004ef523                       ; 004ef511
        ;   XREF to: 004ef523 (CONDITIONAL_JUMP)  ; LAB_004ef523
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef513
    ADD ESI,0x2                         ; 004ef516
    MOV byte ptr [EDI + 0x1],AL         ; 004ef519 | DAT_01d089c1 | DAT_01d089c3
    ADD EDI,0x2                         ; 004ef51c
    CMP AL,0x0                          ; 004ef51f
    JNZ 0x004ef50b                      ; 004ef521
        ;   XREF to: 004ef50b (CONDITIONAL_JUMP)  ; LAB_004ef50b
    POP EDI                             ; 004ef523
        ;   Label: LAB_004ef523
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef524 | DAT_01d086f0
    INC ECX                             ; 004ef52a
    PUSH 0x5dd43f                       ; 004ef52b | = "Select Sword / Axe"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef530 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef536
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef53b | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef541 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef547
    MOV ESI,EAX                         ; 004ef54a
    ADD EBX,0x80                        ; 004ef54c
    CMP EDI,0x26                        ; 004ef552
    JL 0x004ef579                       ; 004ef555
        ;   XREF to: 004ef579 (CONDITIONAL_JUMP)  ; LAB_004ef579
    MOV EBP,0x5dd2ac                    ; 004ef557 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef55c
    PUSH 0x5dd2bd                       ; 004ef561 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef566 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef56c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef571
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef576
    MOV EAX,[0x01d086f0]                ; 004ef579 | DAT_01d086f0
        ;   Label: LAB_004ef579
    IMUL EDI,EAX,0x28                   ; 004ef57e
    ADD EDI,0x1d08790                   ; 004ef581
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef587 | DAT_01d08730
    PUSH EDI                            ; 004ef58e | DAT_01d089e8
    MOV AL,byte ptr [ESI]               ; 004ef58f
        ;   Label: LAB_004ef58f
    MOV byte ptr [EDI],AL               ; 004ef591 | DAT_01d089e8 | DAT_01d089ea
    CMP AL,0x0                          ; 004ef593
    JZ 0x004ef5a7                       ; 004ef595
        ;   XREF to: 004ef5a7 (CONDITIONAL_JUMP)  ; LAB_004ef5a7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef597
    ADD ESI,0x2                         ; 004ef59a
    MOV byte ptr [EDI + 0x1],AL         ; 004ef59d | DAT_01d089e9 | DAT_01d089eb
    ADD EDI,0x2                         ; 004ef5a0
    CMP AL,0x0                          ; 004ef5a3
    JNZ 0x004ef58f                      ; 004ef5a5
        ;   XREF to: 004ef58f (CONDITIONAL_JUMP)  ; LAB_004ef58f
    POP EDI                             ; 004ef5a7
        ;   Label: LAB_004ef5a7
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef5a8 | DAT_01d086f0
    INC ECX                             ; 004ef5ae
    PUSH 0x5dd452                       ; 004ef5af | = "Select Cross"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef5b4 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef5ba
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef5bf | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef5c5 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef5cb
    MOV ESI,EAX                         ; 004ef5ce
    ADD EBX,0x84                        ; 004ef5d0
    CMP EDI,0x26                        ; 004ef5d6
    JL 0x004ef5fd                       ; 004ef5d9
        ;   XREF to: 004ef5fd (CONDITIONAL_JUMP)  ; LAB_004ef5fd
    MOV EBP,0x5dd2ac                    ; 004ef5db | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef5e0
    PUSH 0x5dd2bd                       ; 004ef5e5 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef5ea | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef5f0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef5f5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef5fa
    MOV EAX,[0x01d086f0]                ; 004ef5fd | DAT_01d086f0
        ;   Label: LAB_004ef5fd
    IMUL EDI,EAX,0x28                   ; 004ef602
    ADD EDI,0x1d08790                   ; 004ef605
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef60b | DAT_01d08734
    PUSH EDI                            ; 004ef612 | DAT_01d08a10
    MOV AL,byte ptr [ESI]               ; 004ef613
        ;   Label: LAB_004ef613
    MOV byte ptr [EDI],AL               ; 004ef615 | DAT_01d08a10 | DAT_01d08a12
    CMP AL,0x0                          ; 004ef617
    JZ 0x004ef62b                       ; 004ef619
        ;   XREF to: 004ef62b (CONDITIONAL_JUMP)  ; LAB_004ef62b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef61b
    ADD ESI,0x2                         ; 004ef61e
    MOV byte ptr [EDI + 0x1],AL         ; 004ef621 | DAT_01d08a11 | DAT_01d08a13
    ADD EDI,0x2                         ; 004ef624
    CMP AL,0x0                          ; 004ef627
    JNZ 0x004ef613                      ; 004ef629
        ;   XREF to: 004ef613 (CONDITIONAL_JUMP)  ; LAB_004ef613
    POP EDI                             ; 004ef62b
        ;   Label: LAB_004ef62b
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef62c | DAT_01d086f0
    INC ECX                             ; 004ef632
    PUSH 0x5dd45f                       ; 004ef633 | = "Next weapon"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef638 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef63e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EDX,dword ptr [0x00616494]      ; 004ef643 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef649 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef64f
    MOV ESI,EAX                         ; 004ef652
    LEA EBX,[EDX + 0x90]                ; 004ef654
    CMP EDI,0x26                        ; 004ef65a
    JL 0x004ef681                       ; 004ef65d
        ;   XREF to: 004ef681 (CONDITIONAL_JUMP)  ; LAB_004ef681
    MOV EBP,0x5dd2ac                    ; 004ef65f | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef664
    PUSH 0x5dd2bd                       ; 004ef669 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef66e | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef674 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef679
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef67e
    MOV EAX,[0x01d086f0]                ; 004ef681 | DAT_01d086f0
        ;   Label: LAB_004ef681
    IMUL EDI,EAX,0x28                   ; 004ef686
    ADD EDI,0x1d08790                   ; 004ef689
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef68f | DAT_01d08738
    PUSH EDI                            ; 004ef696 | DAT_01d08a38
    MOV AL,byte ptr [ESI]               ; 004ef697
        ;   Label: LAB_004ef697
    MOV byte ptr [EDI],AL               ; 004ef699 | DAT_01d08a38 | DAT_01d08a3a
    CMP AL,0x0                          ; 004ef69b
    JZ 0x004ef6af                       ; 004ef69d
        ;   XREF to: 004ef6af (CONDITIONAL_JUMP)  ; LAB_004ef6af
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef69f
    ADD ESI,0x2                         ; 004ef6a2
    MOV byte ptr [EDI + 0x1],AL         ; 004ef6a5 | DAT_01d08a39 | DAT_01d08a3b
    ADD EDI,0x2                         ; 004ef6a8
    CMP AL,0x0                          ; 004ef6ab
    JNZ 0x004ef697                      ; 004ef6ad
        ;   XREF to: 004ef697 (CONDITIONAL_JUMP)  ; LAB_004ef697
    POP EDI                             ; 004ef6af
        ;   Label: LAB_004ef6af
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef6b0 | DAT_01d086f0
    INC ECX                             ; 004ef6b6
    PUSH 0x5dd46b                       ; 004ef6b7 | = "Previous weapon"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef6bc | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef6c2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef6c7 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef6cd | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef6d3
    MOV ESI,EAX                         ; 004ef6d6
    ADD EBX,0x94                        ; 004ef6d8
    CMP EDI,0x26                        ; 004ef6de
    JL 0x004ef705                       ; 004ef6e1
        ;   XREF to: 004ef705 (CONDITIONAL_JUMP)  ; LAB_004ef705
    MOV EBP,0x5dd2ac                    ; 004ef6e3 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef6e8
    PUSH 0x5dd2bd                       ; 004ef6ed | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef6f2 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef6f8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef6fd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef702
    MOV EAX,[0x01d086f0]                ; 004ef705 | DAT_01d086f0
        ;   Label: LAB_004ef705
    IMUL EDI,EAX,0x28                   ; 004ef70a
    ADD EDI,0x1d08790                   ; 004ef70d
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef713 | DAT_01d0873c
    PUSH EDI                            ; 004ef71a | DAT_01d08a60
    MOV AL,byte ptr [ESI]               ; 004ef71b
        ;   Label: LAB_004ef71b
    MOV byte ptr [EDI],AL               ; 004ef71d | DAT_01d08a60 | DAT_01d08a62
    CMP AL,0x0                          ; 004ef71f
    JZ 0x004ef733                       ; 004ef721
        ;   XREF to: 004ef733 (CONDITIONAL_JUMP)  ; LAB_004ef733
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef723
    ADD ESI,0x2                         ; 004ef726
    MOV byte ptr [EDI + 0x1],AL         ; 004ef729 | DAT_01d08a61 | DAT_01d08a63
    ADD EDI,0x2                         ; 004ef72c
    CMP AL,0x0                          ; 004ef72f
    JNZ 0x004ef71b                      ; 004ef731
        ;   XREF to: 004ef71b (CONDITIONAL_JUMP)  ; LAB_004ef71b
    POP EDI                             ; 004ef733
        ;   Label: LAB_004ef733
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef734 | DAT_01d086f0
    INC ECX                             ; 004ef73a
    PUSH 0x5dd47b                       ; 004ef73b | = "Next item"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef740 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef746
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef74b | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef751 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef757
    MOV ESI,EAX                         ; 004ef75a
    ADD EBX,0x98                        ; 004ef75c
    CMP EDI,0x26                        ; 004ef762
    JL 0x004ef789                       ; 004ef765
        ;   XREF to: 004ef789 (CONDITIONAL_JUMP)  ; LAB_004ef789
    MOV EBP,0x5dd2ac                    ; 004ef767 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef76c
    PUSH 0x5dd2bd                       ; 004ef771 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef776 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef77c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef781
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef786
    MOV EAX,[0x01d086f0]                ; 004ef789 | DAT_01d086f0
        ;   Label: LAB_004ef789
    IMUL EDI,EAX,0x28                   ; 004ef78e
    ADD EDI,0x1d08790                   ; 004ef791
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef797 | DAT_01d08740
    PUSH EDI                            ; 004ef79e | DAT_01d08a88
    MOV AL,byte ptr [ESI]               ; 004ef79f
        ;   Label: LAB_004ef79f
    MOV byte ptr [EDI],AL               ; 004ef7a1 | DAT_01d08a88 | DAT_01d08a8a
    CMP AL,0x0                          ; 004ef7a3
    JZ 0x004ef7b7                       ; 004ef7a5
        ;   XREF to: 004ef7b7 (CONDITIONAL_JUMP)  ; LAB_004ef7b7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef7a7
    ADD ESI,0x2                         ; 004ef7aa
    MOV byte ptr [EDI + 0x1],AL         ; 004ef7ad | DAT_01d08a89 | DAT_01d08a8b
    ADD EDI,0x2                         ; 004ef7b0
    CMP AL,0x0                          ; 004ef7b3
    JNZ 0x004ef79f                      ; 004ef7b5
        ;   XREF to: 004ef79f (CONDITIONAL_JUMP)  ; LAB_004ef79f
    POP EDI                             ; 004ef7b7
        ;   Label: LAB_004ef7b7
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef7b8 | DAT_01d086f0
    INC ECX                             ; 004ef7be
    PUSH 0x5dd485                       ; 004ef7bf | = "Previous item"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef7c4 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef7ca
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef7cf | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef7d5 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef7db
    MOV ESI,EAX                         ; 004ef7de
    ADD EBX,0x9c                        ; 004ef7e0
    CMP EDI,0x26                        ; 004ef7e6
    JL 0x004ef80d                       ; 004ef7e9
        ;   XREF to: 004ef80d (CONDITIONAL_JUMP)  ; LAB_004ef80d
    MOV EBP,0x5dd2ac                    ; 004ef7eb | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef7f0
    PUSH 0x5dd2bd                       ; 004ef7f5 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef7fa | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef800 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef805
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef80a
    MOV EAX,[0x01d086f0]                ; 004ef80d | DAT_01d086f0
        ;   Label: LAB_004ef80d
    IMUL EDI,EAX,0x28                   ; 004ef812
    ADD EDI,0x1d08790                   ; 004ef815
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef81b | DAT_01d08744
    PUSH EDI                            ; 004ef822 | DAT_01d08ab0
    MOV AL,byte ptr [ESI]               ; 004ef823
        ;   Label: LAB_004ef823
    MOV byte ptr [EDI],AL               ; 004ef825 | DAT_01d08ab0 | DAT_01d08ab2
    CMP AL,0x0                          ; 004ef827
    JZ 0x004ef83b                       ; 004ef829
        ;   XREF to: 004ef83b (CONDITIONAL_JUMP)  ; LAB_004ef83b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef82b
    ADD ESI,0x2                         ; 004ef82e
    MOV byte ptr [EDI + 0x1],AL         ; 004ef831 | DAT_01d08ab1 | DAT_01d08ab3
    ADD EDI,0x2                         ; 004ef834
    CMP AL,0x0                          ; 004ef837
    JNZ 0x004ef823                      ; 004ef839
        ;   XREF to: 004ef823 (CONDITIONAL_JUMP)  ; LAB_004ef823
    POP EDI                             ; 004ef83b
        ;   Label: LAB_004ef83b
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef83c | DAT_01d086f0
    INC ECX                             ; 004ef842
    PUSH 0x5dd493                       ; 004ef843 | = "Item description"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef848 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef84e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef853 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef859 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef85f
    MOV ESI,EAX                         ; 004ef862
    ADD EBX,0xa0                        ; 004ef864
    CMP EDI,0x26                        ; 004ef86a
    JL 0x004ef891                       ; 004ef86d
        ;   XREF to: 004ef891 (CONDITIONAL_JUMP)  ; LAB_004ef891
    MOV EBP,0x5dd2ac                    ; 004ef86f | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef874
    PUSH 0x5dd2bd                       ; 004ef879 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef87e | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef884 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef889
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef88e
    MOV EAX,[0x01d086f0]                ; 004ef891 | DAT_01d086f0
        ;   Label: LAB_004ef891
    IMUL EDI,EAX,0x28                   ; 004ef896
    ADD EDI,0x1d08790                   ; 004ef899
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef89f | DAT_01d08748
    PUSH EDI                            ; 004ef8a6 | DAT_01d08ad8
    MOV AL,byte ptr [ESI]               ; 004ef8a7
        ;   Label: LAB_004ef8a7
    MOV byte ptr [EDI],AL               ; 004ef8a9 | DAT_01d08ad8 | DAT_01d08ada
    CMP AL,0x0                          ; 004ef8ab
    JZ 0x004ef8bf                       ; 004ef8ad
        ;   XREF to: 004ef8bf (CONDITIONAL_JUMP)  ; LAB_004ef8bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef8af
    ADD ESI,0x2                         ; 004ef8b2
    MOV byte ptr [EDI + 0x1],AL         ; 004ef8b5 | DAT_01d08ad9 | DAT_01d08adb
    ADD EDI,0x2                         ; 004ef8b8
    CMP AL,0x0                          ; 004ef8bb
    JNZ 0x004ef8a7                      ; 004ef8bd
        ;   XREF to: 004ef8a7 (CONDITIONAL_JUMP)  ; LAB_004ef8a7
    POP EDI                             ; 004ef8bf
        ;   Label: LAB_004ef8bf
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef8c0 | DAT_01d086f0
    INC ECX                             ; 004ef8c6
    PUSH 0x5dd4a4                       ; 004ef8c7 | = "Next ammo"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef8cc | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef8d2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EDX,dword ptr [0x00616494]      ; 004ef8d7 | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef8dd | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef8e3
    MOV ESI,EAX                         ; 004ef8e6
    LEA EBX,[EDX + 0xa4]                ; 004ef8e8
    CMP EDI,0x26                        ; 004ef8ee
    JL 0x004ef915                       ; 004ef8f1
        ;   XREF to: 004ef915 (CONDITIONAL_JUMP)  ; LAB_004ef915
    MOV EBP,0x5dd2ac                    ; 004ef8f3 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef8f8
    PUSH 0x5dd2bd                       ; 004ef8fd | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef902 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef908 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef90d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef912
    MOV EAX,[0x01d086f0]                ; 004ef915 | DAT_01d086f0
        ;   Label: LAB_004ef915
    IMUL EDI,EAX,0x28                   ; 004ef91a
    ADD EDI,0x1d08790                   ; 004ef91d
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef923 | DAT_01d0874c
    PUSH EDI                            ; 004ef92a | DAT_01d08b00
    MOV AL,byte ptr [ESI]               ; 004ef92b
        ;   Label: LAB_004ef92b
    MOV byte ptr [EDI],AL               ; 004ef92d | DAT_01d08b00 | DAT_01d08b02
    CMP AL,0x0                          ; 004ef92f
    JZ 0x004ef943                       ; 004ef931
        ;   XREF to: 004ef943 (CONDITIONAL_JUMP)  ; LAB_004ef943
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef933
    ADD ESI,0x2                         ; 004ef936
    MOV byte ptr [EDI + 0x1],AL         ; 004ef939 | DAT_01d08b01 | DAT_01d08b03
    ADD EDI,0x2                         ; 004ef93c
    CMP AL,0x0                          ; 004ef93f
    JNZ 0x004ef92b                      ; 004ef941
        ;   XREF to: 004ef92b (CONDITIONAL_JUMP)  ; LAB_004ef92b
    POP EDI                             ; 004ef943
        ;   Label: LAB_004ef943
    MOV ECX,dword ptr [0x01d086f0]      ; 004ef944 | DAT_01d086f0
    INC ECX                             ; 004ef94a
    PUSH 0x5dd4ae                       ; 004ef94b | = "Drop item or weapon"
    MOV dword ptr [0x01d086f0],ECX      ; 004ef950 | DAT_01d086f0
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef956
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    MOV EBX,dword ptr [0x00616494]      ; 004ef95b | g_CGamePtr
    MOV EDI,dword ptr [0x01d086f0]      ; 004ef961 | DAT_01d086f0
    ADD ESP,0x4                         ; 004ef967
    MOV ESI,EAX                         ; 004ef96a
    ADD EBX,0xaf0                       ; 004ef96c
    CMP EDI,0x26                        ; 004ef972
    JL 0x004ef999                       ; 004ef975
        ;   XREF to: 004ef999 (CONDITIONAL_JUMP)  ; LAB_004ef999
    MOV EBP,0x5dd2ac                    ; 004ef977 | = "..\\core\\menu.cpp"
    MOV EAX,0x907                       ; 004ef97c
    PUSH 0x5dd2bd                       ; 004ef981 | = "Too many custom keys!"
    MOV dword ptr [0x01d046a0],EBP      ; 004ef986 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004ef98c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ef991
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ef996
    MOV EAX,[0x01d086f0]                ; 004ef999 | DAT_01d086f0
        ;   Label: LAB_004ef999
    IMUL EDI,EAX,0x28                   ; 004ef99e
    ADD EDI,0x1d08790                   ; 004ef9a1
    MOV dword ptr [EAX*0x4 + 0x1d086f4],EBX ; 004ef9a7 | DAT_01d08750
    PUSH EDI                            ; 004ef9ae | DAT_01d08b28
    MOV AL,byte ptr [ESI]               ; 004ef9af
        ;   Label: LAB_004ef9af
    MOV byte ptr [EDI],AL               ; 004ef9b1 | DAT_01d08b28 | DAT_01d08b2a
    CMP AL,0x0                          ; 004ef9b3
    JZ 0x004ef9c7                       ; 004ef9b5
        ;   XREF to: 004ef9c7 (CONDITIONAL_JUMP)  ; LAB_004ef9c7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef9b7
    ADD ESI,0x2                         ; 004ef9ba
    MOV byte ptr [EDI + 0x1],AL         ; 004ef9bd | DAT_01d08b29 | DAT_01d08b2b
    ADD EDI,0x2                         ; 004ef9c0
    CMP AL,0x0                          ; 004ef9c3
    JNZ 0x004ef9af                      ; 004ef9c5
        ;   XREF to: 004ef9af (CONDITIONAL_JUMP)  ; LAB_004ef9af
    POP EDI                             ; 004ef9c7
        ;   Label: LAB_004ef9c7
    INC dword ptr [0x01d086f0]          ; 004ef9c8 | DAT_01d086f0
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004ef9ce
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004ef9d3
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    LEA EAX,[ESP + 0x8]                 ; 004ef9d8
    PUSH EAX                            ; 004ef9dc
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 004ef9dd
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004ef9e2
    PUSH 0x5dd4c2                       ; 004ef9e5 | = "Restore defaults"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ef9ea
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ef9ef
    PUSH EAX                            ; 004ef9f2
    LEA EAX,[ESP + 0xc]                 ; 004ef9f3
    PUSH EAX                            ; 004ef9f7
    XOR EDI,EDI                         ; 004ef9f8
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 004ef9fa
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    MOV EBX,dword ptr [0x01d086f0]      ; 004ef9ff | DAT_01d086f0
    ADD ESP,0x8                         ; 004efa05
    TEST EBX,EBX                        ; 004efa08
    JLE 0x004efa60                      ; 004efa0a
        ;   XREF to: 004efa60 (CONDITIONAL_JUMP)  ; LAB_004efa60
    MOV EBX,0x1d08790                   ; 004efa0c
    XOR ESI,ESI                         ; 004efa11
    MOV EAX,dword ptr [ESI + 0x1d086f4] ; 004efa13 | DAT_01d086f4 | DAT_01d086f8
        ;   Label: LAB_004efa13
    MOV EBP,dword ptr [EAX]             ; 004efa19 | g_CGameInstance.key_walk | g_CGameInstance.key_backup
    PUSH EBP                            ; 004efa1b
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004efa1c
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_getKeyDisplayName_FUN_004ee960()
    ADD ESP,0x4                         ; 004efa21
    PUSH EAX                            ; 004efa24
    PUSH EBX                            ; 004efa25
    PUSH 0x5dd4d3                       ; 004efa26 | = "%s\t%s"
    LEA EAX,[ESP + 0x9d4]               ; 004efa2b
    PUSH EAX                            ; 004efa32
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004efa33
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004efa38
    LEA EAX,[ESP + 0x9c8]               ; 004efa3b
    PUSH EAX                            ; 004efa42
    LEA EAX,[ESP + 0xc]                 ; 004efa43
    ADD ESI,0x4                         ; 004efa47
    PUSH EAX                            ; 004efa4a
    INC EDI                             ; 004efa4b
    ADD EBX,0x28                        ; 004efa4c
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 004efa4f
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    MOV EAX,[0x01d086f0]                ; 004efa54 | DAT_01d086f0
    ADD ESP,0x8                         ; 004efa59
    CMP EDI,EAX                         ; 004efa5c
    JL 0x004efa13                       ; 004efa5e
        ;   XREF to: 004efa13 (CONDITIONAL_JUMP)  ; LAB_004efa13
    PUSH 0x5dd4d9                       ; 004efa60 | = "Select"
        ;   Label: LAB_004efa60
    LEA EAX,[ESP + 0xc]                 ; 004efa65
    PUSH EAX                            ; 004efa69
    CALL shape_edittool.cpp_CPickList_setOkButtonText_FUN_00482150 ; 004efa6a
        ;   XREF to: 00482150 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setOkButtonText_FUN_00482150(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 004efa6f
    PUSH 0x5dd4e0                       ; 004efa72 | = "Close"
    LEA EAX,[ESP + 0xc]                 ; 004efa77
    PUSH EAX                            ; 004efa7b
    CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004821c0 ; 004efa7c
        ;   XREF to: 004821c0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004821c0(CPickList * this_ptr, char * text)
    ADD ESP,0x8                         ; 004efa81
    PUSH 0x1                            ; 004efa84
    LEA EAX,[ESP + 0xc]                 ; 004efa86
    PUSH EAX                            ; 004efa8a
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_00482240 ; 004efa8b
        ;   XREF to: 00482240 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_00482240(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004efa90
    PUSH 0x0                            ; 004efa93
    MOV EDX,dword ptr [ESP + 0xa94]     ; 004efa95
    PUSH EDX                            ; 004efa9c
    PUSH 0x5dd4e6                       ; 004efa9d | = "Edit key settings"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efaa2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efaa7
    PUSH EAX                            ; 004efaaa
    LEA EAX,[ESP + 0x14]                ; 004efaab
    PUSH EAX                            ; 004efaaf
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250 ; 004efab0
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004efab5
    TEST EAX,EAX                        ; 004efab8
    JL 0x004efe99                       ; 004efaba
        ;   XREF to: 004efe99 (CONDITIONAL_JUMP)  ; LAB_004efe99
    JNZ 0x004efe71                      ; 004efac0
        ;   XREF to: 004efe71 (CONDITIONAL_JUMP)  ; LAB_004efe71
    MOV ESI,dword ptr [0x00616494]      ; 004efac6 | g_CGamePtr
    PUSH ESI                            ; 004efacc
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10 ; 004efacd
        ;   XREF to: 004b6e10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004efad2
    PUSH 0x0                            ; 004efad5
    LEA EAX,[ESP + 0xc]                 ; 004efad7
    PUSH EAX                            ; 004efadb
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 004efadc
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004efae1
    JMP 0x004eed8e                      ; 004efae4
        ;   XREF to: 004eed8e (UNCONDITIONAL_JUMP)  ; LAB_004eed8e
    CALL core_menu.cpp_FUN_004eb490     ; 004efae9
        ;   XREF to: 004eb490 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_FUN_004eb490()
        ;   Label: LAB_004efae9
    TEST EAX,EAX                        ; 004efaee
    JNZ 0x004eed83                      ; 004efaf0
        ;   XREF to: 004eed83 (CONDITIONAL_JUMP)  ; LAB_004eed83
    ADD ESP,0xa8c                       ; 004efaf6
        ;   Label: LAB_004efaf6
    POP EBP                             ; 004efafc
    POP EBX                             ; 004efafd
    RET                                 ; 004efafe
    PUSH 0x5dd3b4                       ; 004efaff | DAT_005dd3b4
        ;   Label: LAB_004efaff
    JMP 0x004eeeb0                      ; 004efb04
        ;   XREF to: 004eeeb0 (UNCONDITIONAL_JUMP)  ; LAB_004eeeb0
    IMUL ESI,EBP,0x28                   ; 004efb09
        ;   Label: caseD_255
    LEA EDI,[ESP + 0x3c8]               ; 004efb0c
    ADD ESI,0x1d08790                   ; 004efb13
    PUSH EDI                            ; 004efb19
    MOV AL,byte ptr [ESI]               ; 004efb1a
        ;   Label: LAB_004efb1a
    MOV byte ptr [EDI],AL               ; 004efb1c
    CMP AL,0x0                          ; 004efb1e
    JZ 0x004efb32                       ; 004efb20
        ;   XREF to: 004efb32 (CONDITIONAL_JUMP)  ; LAB_004efb32
    MOV AL,byte ptr [ESI + 0x1]         ; 004efb22
    ADD ESI,0x2                         ; 004efb25
    MOV byte ptr [EDI + 0x1],AL         ; 004efb28
    ADD EDI,0x2                         ; 004efb2b
    CMP AL,0x0                          ; 004efb2e
    JNZ 0x004efb1a                      ; 004efb30
        ;   XREF to: 004efb1a (CONDITIONAL_JUMP)  ; LAB_004efb1a
    POP EDI                             ; 004efb32
        ;   Label: LAB_004efb32
    PUSH 0x5dd4f8                       ; 004efb33 | = " is assigned to the mouse.  Can't ass..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efb38
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efb3d
    LEA EDI,[ESP + 0x3c8]               ; 004efb40
    MOV ESI,EAX                         ; 004efb47
    PUSH EDI                            ; 004efb49
    SUB ECX,ECX                         ; 004efb4a
    DEC ECX                             ; 004efb4c
    MOV AL,0x0                          ; 004efb4d
    SCASB.REPNE ES:EDI                  ; 004efb4f
    DEC EDI                             ; 004efb51
    MOV AL,byte ptr [ESI]               ; 004efb52
        ;   Label: LAB_004efb52
    MOV byte ptr [EDI],AL               ; 004efb54
    CMP AL,0x0                          ; 004efb56
    JZ 0x004efb6a                       ; 004efb58
        ;   XREF to: 004efb6a (CONDITIONAL_JUMP)  ; LAB_004efb6a
    MOV AL,byte ptr [ESI + 0x1]         ; 004efb5a
    ADD ESI,0x2                         ; 004efb5d
    MOV byte ptr [EDI + 0x1],AL         ; 004efb60
    ADD EDI,0x2                         ; 004efb63
    CMP AL,0x0                          ; 004efb66
    JNZ 0x004efb52                      ; 004efb68
        ;   XREF to: 004efb52 (CONDITIONAL_JUMP)  ; LAB_004efb52
    POP EDI                             ; 004efb6a
        ;   Label: LAB_004efb6a
    LEA EAX,[ESP + 0x3c8]               ; 004efb6b
    PUSH EAX                            ; 004efb72
    MOV ECX,dword ptr [0x006138e0]      ; 004efb73 | g_CEditorToolsPtr
    PUSH ECX                            ; 004efb79
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004efb7a
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004efb7f
        ;   Label: LAB_004efb7f
    PUSH 0x0                            ; 004efb82
    LEA EAX,[ESP + 0xc]                 ; 004efb84
    PUSH EAX                            ; 004efb88
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 004efb89
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004efb8e
    JMP 0x004eed8e                      ; 004efb91
        ;   XREF to: 004eed8e (UNCONDITIONAL_JUMP)  ; LAB_004eed8e
    IMUL ESI,EBP,0x28                   ; 004efb96
        ;   Label: caseD_251
    LEA EDI,[ESP + 0x7c8]               ; 004efb99
    ADD ESI,0x1d08790                   ; 004efba0
    PUSH EDI                            ; 004efba6
    MOV AL,byte ptr [ESI]               ; 004efba7
        ;   Label: LAB_004efba7
    MOV byte ptr [EDI],AL               ; 004efba9
    CMP AL,0x0                          ; 004efbab
    JZ 0x004efbbf                       ; 004efbad
        ;   XREF to: 004efbbf (CONDITIONAL_JUMP)  ; LAB_004efbbf
    MOV AL,byte ptr [ESI + 0x1]         ; 004efbaf
    ADD ESI,0x2                         ; 004efbb2
    MOV byte ptr [EDI + 0x1],AL         ; 004efbb5
    ADD EDI,0x2                         ; 004efbb8
    CMP AL,0x0                          ; 004efbbb
    JNZ 0x004efba7                      ; 004efbbd
        ;   XREF to: 004efba7 (CONDITIONAL_JUMP)  ; LAB_004efba7
    POP EDI                             ; 004efbbf
        ;   Label: LAB_004efbbf
    PUSH 0x5dd528                       ; 004efbc0 | = " is assigned to the gamepad.  Can't a..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efbc5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efbca
    LEA EDI,[ESP + 0x7c8]               ; 004efbcd
    MOV ESI,EAX                         ; 004efbd4
    PUSH EDI                            ; 004efbd6
    SUB ECX,ECX                         ; 004efbd7
    DEC ECX                             ; 004efbd9
    MOV AL,0x0                          ; 004efbda
    SCASB.REPNE ES:EDI                  ; 004efbdc
    DEC EDI                             ; 004efbde
    MOV AL,byte ptr [ESI]               ; 004efbdf
        ;   Label: LAB_004efbdf
    MOV byte ptr [EDI],AL               ; 004efbe1
    CMP AL,0x0                          ; 004efbe3
    JZ 0x004efbf7                       ; 004efbe5
        ;   XREF to: 004efbf7 (CONDITIONAL_JUMP)  ; LAB_004efbf7
    MOV AL,byte ptr [ESI + 0x1]         ; 004efbe7
    ADD ESI,0x2                         ; 004efbea
    MOV byte ptr [EDI + 0x1],AL         ; 004efbed
    ADD EDI,0x2                         ; 004efbf0
    CMP AL,0x0                          ; 004efbf3
    JNZ 0x004efbdf                      ; 004efbf5
        ;   XREF to: 004efbdf (CONDITIONAL_JUMP)  ; LAB_004efbdf
    POP EDI                             ; 004efbf7
        ;   Label: LAB_004efbf7
    LEA EAX,[ESP + 0x7c8]               ; 004efbf8
    PUSH EAX                            ; 004efbff
    MOV EBX,dword ptr [0x006138e0]      ; 004efc00 | g_CEditorToolsPtr
    PUSH EBX                            ; 004efc06
    CALL shape_edittool.cpp_FUN_0047be90 ; 004efc07
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    JMP 0x004efb7f                      ; 004efc0c
        ;   XREF to: 004efb7f (UNCONDITIONAL_JUMP)  ; LAB_004efb7f
    MOV EAX,[0x00616494]                ; 004efc11 | g_CGamePtr
        ;   Label: default
    CMP dword ptr [EAX + 0xd0],0x2      ; 004efc16 | g_CGameInstance.game_control
    JZ 0x004efc78                       ; 004efc1d
        ;   XREF to: 004efc78 (CONDITIONAL_JUMP)  ; LAB_004efc78
    MOV EDI,0xffffffff                  ; 004efc1f
        ;   Label: LAB_004efc1f
    XOR EBX,EBX                         ; 004efc24
    PUSH EBX                            ; 004efc26
        ;   Label: LAB_004efc26
    MOV ESI,dword ptr [0x00617dd4]      ; 004efc27 | DAT_00617dd4
    PUSH ESI                            ; 004efc2d | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 004efc2e | DAT_01d02f84
    CALL dword ptr [EAX]                ; 004efc30
    ADD ESP,0x8                         ; 004efc32
    TEST EAX,EAX                        ; 004efc35
    JZ 0x004efc83                       ; 004efc37
        ;   XREF to: 004efc83 (CONDITIONAL_JUMP)  ; LAB_004efc83
    TEST EDI,EDI                        ; 004efc39
    JL 0x004efdd2                       ; 004efc3b
        ;   XREF to: 004efdd2 (CONDITIONAL_JUMP)  ; LAB_004efdd2
    PUSH 0x5dd55a                       ; 004efc41 | = "OK - you can release the key now..."
        ;   Label: LAB_004efc41
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efc46
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efc4b
    PUSH EAX                            ; 004efc4e
    MOV ECX,dword ptr [0x006138e0]      ; 004efc4f | g_CEditorToolsPtr
    PUSH ECX                            ; 004efc55
    CALL shape_edittool.cpp_FUN_0047be90 ; 004efc56
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 004efc5b
    MOV EAX,[0x00617dd4]                ; 004efc5e | DAT_00617dd4
    PUSH 0x1                            ; 004efc63
    MOV EDX,dword ptr [EAX]             ; 004efc65 | DAT_01d02f84
    PUSH EAX                            ; 004efc67 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004efc68
    ADD ESP,0x8                         ; 004efc6a
    TEST EAX,EAX                        ; 004efc6d
    JNZ 0x004efc91                      ; 004efc6f
        ;   XREF to: 004efc91 (CONDITIONAL_JUMP)  ; LAB_004efc91
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004efc71
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    JMP 0x004efc11                      ; 004efc76
        ;   XREF to: 004efc11 (UNCONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004efc78
        ;   Label: LAB_004efc78
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004efc79
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004efc7e
    JMP 0x004efc1f                      ; 004efc81
        ;   XREF to: 004efc1f (UNCONDITIONAL_JUMP)  ; LAB_004efc1f
    INC EBX                             ; 004efc83
        ;   Label: LAB_004efc83
    CMP EBX,0x258                       ; 004efc84
    JL 0x004efc26                       ; 004efc8a
        ;   XREF to: 004efc26 (CONDITIONAL_JUMP)  ; LAB_004efc26
    CMP EDI,-0x1                        ; 004efc8c
    JNZ 0x004efc41                      ; 004efc8f
        ;   XREF to: 004efc41 (CONDITIONAL_JUMP)  ; LAB_004efc41
    PUSH 0x1                            ; 004efc91
        ;   Label: LAB_004efc91
    MOV EAX,[0x00617dd4]                ; 004efc93 | DAT_00617dd4
    PUSH EAX                            ; 004efc98 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004efc99 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 004efc9b
    ADD ESP,0x8                         ; 004efc9d
    TEST EAX,EAX                        ; 004efca0
    JNZ 0x004efdd9                      ; 004efca2
        ;   XREF to: 004efdd9 (CONDITIONAL_JUMP)  ; LAB_004efdd9
    PUSH 0x5dd57e                       ; 004efca8 | = "Press new key or button for "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efcad
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efcb2
    LEA EDI,[ESP + 0x5c8]               ; 004efcb5
    MOV ESI,EAX                         ; 004efcbc
    PUSH EDI                            ; 004efcbe
    MOV AL,byte ptr [ESI]               ; 004efcbf
        ;   Label: LAB_004efcbf
    MOV byte ptr [EDI],AL               ; 004efcc1
    CMP AL,0x0                          ; 004efcc3
    JZ 0x004efcd7                       ; 004efcc5
        ;   XREF to: 004efcd7 (CONDITIONAL_JUMP)  ; LAB_004efcd7
    MOV AL,byte ptr [ESI + 0x1]         ; 004efcc7
    ADD ESI,0x2                         ; 004efcca
    MOV byte ptr [EDI + 0x1],AL         ; 004efccd
    ADD EDI,0x2                         ; 004efcd0
    CMP AL,0x0                          ; 004efcd3
    JNZ 0x004efcbf                      ; 004efcd5
        ;   XREF to: 004efcbf (CONDITIONAL_JUMP)  ; LAB_004efcbf
    POP EDI                             ; 004efcd7
        ;   Label: LAB_004efcd7
    IMUL ESI,EBP,0x28                   ; 004efcd8
    LEA EDI,[ESP + 0x5c8]               ; 004efcdb
    ADD ESI,0x1d08790                   ; 004efce2
    PUSH EDI                            ; 004efce8
    SUB ECX,ECX                         ; 004efce9
    DEC ECX                             ; 004efceb
    MOV AL,0x0                          ; 004efcec
    SCASB.REPNE ES:EDI                  ; 004efcee
    DEC EDI                             ; 004efcf0
    MOV AL,byte ptr [ESI]               ; 004efcf1
        ;   Label: LAB_004efcf1
    MOV byte ptr [EDI],AL               ; 004efcf3
    CMP AL,0x0                          ; 004efcf5
    JZ 0x004efd09                       ; 004efcf7
        ;   XREF to: 004efd09 (CONDITIONAL_JUMP)  ; LAB_004efd09
    MOV AL,byte ptr [ESI + 0x1]         ; 004efcf9
    ADD ESI,0x2                         ; 004efcfc
    MOV byte ptr [EDI + 0x1],AL         ; 004efcff
    ADD EDI,0x2                         ; 004efd02
    CMP AL,0x0                          ; 004efd05
    JNZ 0x004efcf1                      ; 004efd07
        ;   XREF to: 004efcf1 (CONDITIONAL_JUMP)  ; LAB_004efcf1
    POP EDI                             ; 004efd09
        ;   Label: LAB_004efd09
    LEA EAX,[ESP + 0x5c8]               ; 004efd0a
    PUSH EAX                            ; 004efd11
    MOV EBX,dword ptr [0x006138e0]      ; 004efd12 | g_CEditorToolsPtr
    PUSH EBX                            ; 004efd18
    CALL shape_edittool.cpp_FUN_0047be90 ; 004efd19
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 004efd1e
    PUSH 0x1                            ; 004efd21
    MOV ESI,dword ptr [0x00617dd4]      ; 004efd23 | DAT_00617dd4
    PUSH ESI                            ; 004efd29 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0 ; 004efd2a
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0(CKeys * this_ptr, int enable_extended)
    ADD ESP,0x8                         ; 004efd2f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004efd32
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_004efd32
    MOV EAX,[0x00616494]                ; 004efd37 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 004efd3c | g_CGameInstance.game_control
    JZ 0x004efdf2                       ; 004efd43
        ;   XREF to: 004efdf2 (CONDITIONAL_JUMP)  ; LAB_004efdf2
    MOV EDI,0xffffffff                  ; 004efd49
        ;   Label: LAB_004efd49
    XOR EBX,EBX                         ; 004efd4e
    PUSH EBX                            ; 004efd50
        ;   Label: LAB_004efd50
    MOV ESI,dword ptr [0x00617dd4]      ; 004efd51 | DAT_00617dd4
    PUSH ESI                            ; 004efd57 | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 004efd58 | DAT_01d02f84
    CALL dword ptr [EAX]                ; 004efd5a
    ADD ESP,0x8                         ; 004efd5c
    TEST EAX,EAX                        ; 004efd5f
    JZ 0x004efd69                       ; 004efd61
        ;   XREF to: 004efd69 (CONDITIONAL_JUMP)  ; LAB_004efd69
    TEST EDI,EDI                        ; 004efd63
    JGE 0x004efd32                      ; 004efd65
        ;   XREF to: 004efd32 (CONDITIONAL_JUMP)  ; LAB_004efd32
    MOV EDI,EBX                         ; 004efd67
    INC EBX                             ; 004efd69
        ;   Label: LAB_004efd69
    CMP EBX,0x258                       ; 004efd6a
    JL 0x004efd50                       ; 004efd70
        ;   XREF to: 004efd50 (CONDITIONAL_JUMP)  ; LAB_004efd50
    TEST EDI,EDI                        ; 004efd72
    JL 0x004efd32                       ; 004efd74
        ;   XREF to: 004efd32 (CONDITIONAL_JUMP)  ; LAB_004efd32
    MOV EAX,dword ptr [EBP*0x4 + 0x1d086f4] ; 004efd76 | DAT_01d086f4
    PUSH 0x5dd59b                       ; 004efd7d | = "OK - you can release the key now..."
    MOV dword ptr [EAX],EDI             ; 004efd82
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efd84
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efd89
    PUSH EAX                            ; 004efd8c
    MOV EAX,[0x006138e0]                ; 004efd8d | g_CEditorToolsPtr
    PUSH EAX                            ; 004efd92
    CALL shape_edittool.cpp_FUN_0047be90 ; 004efd93
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 004efd98
    MOV EAX,[0x00616494]                ; 004efd9b | g_CGamePtr
        ;   Label: LAB_004efd9b
    CMP dword ptr [EAX + 0xd0],0x2      ; 004efda0 | g_CGameInstance.game_control
    JZ 0x004efe00                       ; 004efda7
        ;   XREF to: 004efe00 (CONDITIONAL_JUMP)  ; LAB_004efe00
    MOV EDI,0xffffffff                  ; 004efda9
        ;   Label: LAB_004efda9
    XOR EBX,EBX                         ; 004efdae
    PUSH EBX                            ; 004efdb0
        ;   Label: LAB_004efdb0
    MOV ESI,dword ptr [0x00617dd4]      ; 004efdb1 | DAT_00617dd4
    PUSH ESI                            ; 004efdb7 | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 004efdb8 | DAT_01d02f84
    CALL dword ptr [EAX]                ; 004efdba
    ADD ESP,0x8                         ; 004efdbc
    TEST EAX,EAX                        ; 004efdbf
    JZ 0x004efe0b                       ; 004efdc1
        ;   XREF to: 004efe0b (CONDITIONAL_JUMP)  ; LAB_004efe0b
    TEST EDI,EDI                        ; 004efdc3
    JL 0x004efe53                       ; 004efdc5
        ;   XREF to: 004efe53 (CONDITIONAL_JUMP)  ; LAB_004efe53
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004efdcb
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_004efdcb
    JMP 0x004efd9b                      ; 004efdd0
        ;   XREF to: 004efd9b (UNCONDITIONAL_JUMP)  ; LAB_004efd9b
    MOV EDI,EBX                         ; 004efdd2
        ;   Label: LAB_004efdd2
    JMP 0x004efc83                      ; 004efdd4
        ;   XREF to: 004efc83 (UNCONDITIONAL_JUMP)  ; LAB_004efc83
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004efdd9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004efdd9
    PUSH 0x0                            ; 004efdde
    LEA EAX,[ESP + 0xc]                 ; 004efde0
    PUSH EAX                            ; 004efde4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 004efde5
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004efdea
    JMP 0x004eed8e                      ; 004efded
        ;   XREF to: 004eed8e (UNCONDITIONAL_JUMP)  ; LAB_004eed8e
    PUSH EAX                            ; 004efdf2
        ;   Label: LAB_004efdf2
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004efdf3
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004efdf8
    JMP 0x004efd49                      ; 004efdfb
        ;   XREF to: 004efd49 (UNCONDITIONAL_JUMP)  ; LAB_004efd49
    PUSH EAX                            ; 004efe00
        ;   Label: LAB_004efe00
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004efe01
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004efe06
    JMP 0x004efda9                      ; 004efe09
        ;   XREF to: 004efda9 (UNCONDITIONAL_JUMP)  ; LAB_004efda9
    INC EBX                             ; 004efe0b
        ;   Label: LAB_004efe0b
    CMP EBX,0x258                       ; 004efe0c
    JL 0x004efdb0                       ; 004efe12
        ;   XREF to: 004efdb0 (CONDITIONAL_JUMP)  ; LAB_004efdb0
    CMP EDI,-0x1                        ; 004efe14
    JNZ 0x004efdcb                      ; 004efe17
        ;   XREF to: 004efdcb (CONDITIONAL_JUMP)  ; LAB_004efdcb
    MOV ECX,dword ptr [0x01d086f0]      ; 004efe19 | DAT_01d086f0
    XOR EAX,EAX                         ; 004efe1f
    TEST ECX,ECX                        ; 004efe21
    JLE 0x004efe40                      ; 004efe23
        ;   XREF to: 004efe40 (CONDITIONAL_JUMP)  ; LAB_004efe40
    LEA ECX,[EBP*0x4 + 0x0]             ; 004efe25
    XOR EBX,EBX                         ; 004efe2c
    CMP EAX,EBP                         ; 004efe2e
        ;   Label: LAB_004efe2e
    JNZ 0x004efe57                      ; 004efe30
        ;   XREF to: 004efe57 (CONDITIONAL_JUMP)  ; LAB_004efe57
    MOV ESI,dword ptr [0x01d086f0]      ; 004efe32 | DAT_01d086f0
        ;   Label: LAB_004efe32
    INC EAX                             ; 004efe38
    ADD EBX,0x4                         ; 004efe39
    CMP EAX,ESI                         ; 004efe3c
    JL 0x004efe2e                       ; 004efe3e
        ;   XREF to: 004efe2e (CONDITIONAL_JUMP)  ; LAB_004efe2e
    PUSH 0x0                            ; 004efe40
        ;   Label: LAB_004efe40
    MOV EDI,dword ptr [0x00617dd4]      ; 004efe42 | DAT_00617dd4
    PUSH EDI                            ; 004efe48 | DAT_01d02f84
    CALL engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0 ; 004efe49
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; void engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0(CKeys * this_ptr, int enable_extended)
    JMP 0x004efb7f                      ; 004efe4e
        ;   XREF to: 004efb7f (UNCONDITIONAL_JUMP)  ; LAB_004efb7f
    MOV EDI,EBX                         ; 004efe53
        ;   Label: LAB_004efe53
    JMP 0x004efe0b                      ; 004efe55
        ;   XREF to: 004efe0b (UNCONDITIONAL_JUMP)  ; LAB_004efe0b
    MOV ESI,dword ptr [EBX + 0x1d086f4] ; 004efe57 | DAT_01d086f8
        ;   Label: LAB_004efe57
    MOV EDI,dword ptr [ECX + 0x1d086f4] ; 004efe5d | DAT_01d086f4
    MOV EDX,dword ptr [ESI]             ; 004efe63 | g_CGameInstance.key_backup
    CMP EDX,dword ptr [EDI]             ; 004efe65
    JNZ 0x004efe32                      ; 004efe67
        ;   XREF to: 004efe32 (CONDITIONAL_JUMP)  ; LAB_004efe32
    MOV dword ptr [ESI],0x257           ; 004efe69 | g_CGameInstance.key_backup
    JMP 0x004efe32                      ; 004efe6f
        ;   XREF to: 004efe32 (UNCONDITIONAL_JUMP)  ; LAB_004efe32
    MOV dword ptr [ESP + 0xa90],EAX     ; 004efe71
        ;   Label: LAB_004efe71
    LEA EBP,[EAX + -0x1]                ; 004efe78
    MOV EAX,dword ptr [EBP*0x4 + 0x1d086f4] ; 004efe7b | DAT_01d086f4
    MOV EAX,dword ptr [EAX]             ; 004efe82
    SUB EAX,0x251                       ; 004efe84
    CMP EAX,0x5                         ; 004efe89
    JA 0x004efc11                       ; 004efe8c
        ;   XREF to: 004efc11 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4eed40]  ; 004efe92 | caseD_254 | caseD_256 | switchdataD_004eed40
        ;   Label: switchD
    PUSH 0x0                            ; 004efe99
        ;   Label: LAB_004efe99
    LEA EAX,[ESP + 0xc]                 ; 004efe9b
    PUSH EAX                            ; 004efe9f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 004efea0
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004efea5
    PUSH 0x5dd5bf                       ; 004efea8 | = "Forward"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efead
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efeb2
    PUSH EAX                            ; 004efeb5
    MOV EAX,[0x00616494]                ; 004efeb6 | g_CGamePtr
    ADD EAX,0x28                        ; 004efebb
    PUSH EAX                            ; 004efebe | g_CGameInstance.key_walk
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004efebf
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004efec4
    PUSH 0x5dd5c7                       ; 004efec7 | DAT_005dd5c7
    MOV EBX,EAX                         ; 004efecc
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004efece
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efed3
    PUSH EAX                            ; 004efed6
    MOV EAX,[0x00616494]                ; 004efed7 | g_CGamePtr
    ADD EAX,0x2c                        ; 004efedc
    PUSH EAX                            ; 004efedf | g_CGameInstance.key_backup
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004efee0
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    OR EBX,EAX                          ; 004efee5
    MOV EAX,[0x00616494]                ; 004efee7 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0xac]      ; 004efeec | g_CGameInstance.always_run
    ADD ESP,0x8                         ; 004efef2
    TEST EDI,EDI                        ; 004efef5
    JZ 0x004f0218                       ; 004efef7
        ;   XREF to: 004f0218 (CONDITIONAL_JUMP)  ; LAB_004f0218
    PUSH 0x5dd5cc                       ; 004efefd | DAT_005dd5cc
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eff02
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004eff02
    ADD ESP,0x4                         ; 004eff07
    PUSH EAX                            ; 004eff0a
    MOV EAX,[0x00616494]                ; 004eff0b | g_CGamePtr
    ADD EAX,0x30                        ; 004eff10
    PUSH EAX                            ; 004eff13
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004eff14
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004eff19
    OR EBX,EAX                          ; 004eff1c
    PUSH 0x5dd5d5                       ; 004eff1e | = "Strafe on"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eff23
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eff28
    PUSH EAX                            ; 004eff2b
    MOV EAX,[0x00616494]                ; 004eff2c | g_CGamePtr
    ADD EAX,0x34                        ; 004eff31
    PUSH EAX                            ; 004eff34
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004eff35
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004eff3a
    PUSH 0x5dd5df                       ; 004eff3d | = "Strafe left"
    OR EBX,EAX                          ; 004eff42
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eff44
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eff49
    PUSH EAX                            ; 004eff4c
    MOV EAX,[0x00616494]                ; 004eff4d | g_CGamePtr
    ADD EAX,0x38                        ; 004eff52
    PUSH EAX                            ; 004eff55
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004eff56
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004eff5b
    PUSH 0x5dd5eb                       ; 004eff5e | = "Strafe right"
    OR EBX,EAX                          ; 004eff63
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eff65
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eff6a
    PUSH EAX                            ; 004eff6d
    MOV EAX,[0x00616494]                ; 004eff6e | g_CGamePtr
    ADD EAX,0x3c                        ; 004eff73
    PUSH EAX                            ; 004eff76
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004eff77
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004eff7c
    PUSH 0x5dd5f8                       ; 004eff7f | = "Turn left"
    OR EBX,EAX                          ; 004eff84
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004eff86
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004eff8b
    PUSH EAX                            ; 004eff8e
    MOV EAX,[0x00616494]                ; 004eff8f | g_CGamePtr
    ADD EAX,0x44                        ; 004eff94
    PUSH EAX                            ; 004eff97
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004eff98
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004eff9d
    PUSH 0x5dd602                       ; 004effa0 | = "Turn right"
    OR EBX,EAX                          ; 004effa5
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004effa7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004effac
    PUSH EAX                            ; 004effaf
    MOV EAX,[0x00616494]                ; 004effb0 | g_CGamePtr
    ADD EAX,0x40                        ; 004effb5
    PUSH EAX                            ; 004effb8
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004effb9
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004effbe
    PUSH 0x5dd60d                       ; 004effc1 | = "Fire / Action"
    OR EBX,EAX                          ; 004effc6
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004effc8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004effcd
    PUSH EAX                            ; 004effd0
    MOV EAX,[0x00616494]                ; 004effd1 | g_CGamePtr
    ADD EAX,0x48                        ; 004effd6
    PUSH EAX                            ; 004effd9
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004effda
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004effdf
    OR EBX,EAX                          ; 004effe2
    POP ESI                             ; 004effe4
    POP EDI                             ; 004effe5
    PUSH 0x5dd61b                       ; 004effe6 | = "Use item"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004effeb
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004efff0
    PUSH EAX                            ; 004efff3
    MOV EAX,[0x00616494]                ; 004efff4 | g_CGamePtr
    ADD EAX,0x4c                        ; 004efff9
    PUSH EAX                            ; 004efffc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004efffd
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0002
    PUSH 0x5dd624                       ; 004f0005 | = "Lantern"
    OR EBX,EAX                          ; 004f000a
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f000c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0011
    PUSH EAX                            ; 004f0014
    MOV EAX,[0x00616494]                ; 004f0015 | g_CGamePtr
    ADD EAX,0x50                        ; 004f001a
    PUSH EAX                            ; 004f001d
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f001e
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0023
    PUSH 0x5dd62c                       ; 004f0026 | DAT_005dd62c
    OR EBX,EAX                          ; 004f002b
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f002d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0032
    PUSH EAX                            ; 004f0035
    MOV EAX,[0x00616494]                ; 004f0036 | g_CGamePtr
    ADD EAX,0x68                        ; 004f003b
    PUSH EAX                            ; 004f003e
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f003f
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0044
    PUSH 0x5dd631                       ; 004f0047 | = "Point up"
    OR EBX,EAX                          ; 004f004c
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f004e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0053
    PUSH EAX                            ; 004f0056
    MOV EAX,[0x00616494]                ; 004f0057 | g_CGamePtr
    ADD EAX,0x74                        ; 004f005c
    PUSH EAX                            ; 004f005f
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f0060
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0065
    PUSH 0x5dd63a                       ; 004f0068 | = "Point down"
    OR EBX,EAX                          ; 004f006d
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f006f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0074
    PUSH EAX                            ; 004f0077
    MOV EAX,[0x00616494]                ; 004f0078 | g_CGamePtr
    ADD EAX,0x78                        ; 004f007d
    PUSH EAX                            ; 004f0080
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f0081
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0086
    PUSH 0x5dd645                       ; 004f0089 | = "Select Revolver"
    OR EBX,EAX                          ; 004f008e
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f0090
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0095
    PUSH EAX                            ; 004f0098
    MOV EAX,[0x00616494]                ; 004f0099 | g_CGamePtr
    ADD EAX,0x7c                        ; 004f009e
    PUSH EAX                            ; 004f00a1
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f00a2
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f00a7
    OR EBX,EAX                          ; 004f00aa
    PUSH 0x5dd655                       ; 004f00ac | = "Select Sword / Axe"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f00b1
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f00b6
    PUSH EAX                            ; 004f00b9
    MOV EAX,[0x00616494]                ; 004f00ba | g_CGamePtr
    ADD EAX,0x80                        ; 004f00bf
    PUSH EAX                            ; 004f00c4
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f00c5
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f00ca
    PUSH 0x5dd668                       ; 004f00cd | = "Select Cross"
    OR EBX,EAX                          ; 004f00d2
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f00d4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f00d9
    PUSH EAX                            ; 004f00dc
    MOV EAX,[0x00616494]                ; 004f00dd | g_CGamePtr
    ADD EAX,0x84                        ; 004f00e2
    PUSH EAX                            ; 004f00e7
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f00e8
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f00ed
    PUSH 0x5dd675                       ; 004f00f0 | = "Next weapon"
    OR EBX,EAX                          ; 004f00f5
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f00f7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f00fc
    PUSH EAX                            ; 004f00ff
    MOV EAX,[0x00616494]                ; 004f0100 | g_CGamePtr
    ADD EAX,0x90                        ; 004f0105
    PUSH EAX                            ; 004f010a
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f010b
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0110
    PUSH 0x5dd681                       ; 004f0113 | = "Previous weapon"
    OR EBX,EAX                          ; 004f0118
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f011a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f011f
    PUSH EAX                            ; 004f0122
    MOV EAX,[0x00616494]                ; 004f0123 | g_CGamePtr
    ADD EAX,0x94                        ; 004f0128
    PUSH EAX                            ; 004f012d
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f012e
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0133
    PUSH 0x5dd691                       ; 004f0136 | = "Next item"
    OR EBX,EAX                          ; 004f013b
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f013d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0142
    PUSH EAX                            ; 004f0145
    MOV EAX,[0x00616494]                ; 004f0146 | g_CGamePtr
    ADD EAX,0x98                        ; 004f014b
    PUSH EAX                            ; 004f0150
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f0151
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0156
    PUSH 0x5dd69b                       ; 004f0159 | = "Previous item"
    OR EBX,EAX                          ; 004f015e
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f0160
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0165
    PUSH EAX                            ; 004f0168
    MOV EAX,[0x00616494]                ; 004f0169 | g_CGamePtr
    ADD EAX,0x9c                        ; 004f016e
    PUSH EAX                            ; 004f0173
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f0174
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f0179
    OR EBX,EAX                          ; 004f017c
    PUSH 0x5dd6a9                       ; 004f017e | = "Item description"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f0183
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f0188
    PUSH EAX                            ; 004f018b
    MOV EAX,[0x00616494]                ; 004f018c | g_CGamePtr
    ADD EAX,0xa0                        ; 004f0191
    PUSH EAX                            ; 004f0196
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f0197
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f019c
    PUSH 0x5dd6ba                       ; 004f019f | = "Next ammo"
    OR EBX,EAX                          ; 004f01a4
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f01a6
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f01ab
    PUSH EAX                            ; 004f01ae
    MOV EAX,[0x00616494]                ; 004f01af | g_CGamePtr
    ADD EAX,0xa4                        ; 004f01b4
    PUSH EAX                            ; 004f01b9
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f01ba
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f01bf
    PUSH 0x5dd6c4                       ; 004f01c2 | = "Drop item or weapon"
    OR EBX,EAX                          ; 004f01c7
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004f01c9
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004f01ce
    PUSH EAX                            ; 004f01d1
    MOV EAX,[0x00616494]                ; 004f01d2 | g_CGamePtr
    ADD EAX,0xaf0                       ; 004f01d7
    PUSH EAX                            ; 004f01dc
    CALL core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0 ; 004f01dd
        ;   XREF to: 004eeba0 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_isKeyCodeValidForMode_FUN_004eeba0(EInputCodeType * key_code_ptr, char * description)
    ADD ESP,0x8                         ; 004f01e2
    OR EBX,EAX                          ; 004f01e5
    JZ 0x004efaf6                       ; 004f01e7
        ;   XREF to: 004efaf6 (CONDITIONAL_JUMP)  ; LAB_004efaf6
    MOV EBP,dword ptr [0x00616494]      ; 004f01ed | g_CGamePtr
    PUSH EBP                            ; 004f01f3
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10 ; 004f01f4
        ;   XREF to: 004b6e10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004f01f9
    PUSH 0x5dd6d8                       ; 004f01fc | = "One or more keys not valid.  Restorin..."
    MOV EAX,[0x006138e0]                ; 004f0201 | g_CEditorToolsPtr
    PUSH EAX                            ; 004f0206
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004f0207
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f020c
    ADD ESP,0xa8c                       ; 004f020f
    POP EBP                             ; 004f0215
    POP EBX                             ; 004f0216
    RET                                 ; 004f0217
    PUSH 0x5dd5d1                       ; 004f0218 | DAT_005dd5d1
        ;   Label: LAB_004f0218
    JMP 0x004eff02                      ; 004f021d
        ;   XREF to: 004eff02 (UNCONDITIONAL_JUMP)  ; LAB_004eff02

