; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cfe0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d1796
;   undefined4 DAT_005d17a0
;   TerminatedCString s_autoDrop_005d17a5
;   TerminatedCString s_homePos_005d17ae
;   undefined4 DAT_005d17b6
;   TerminatedCString s_minAutoDripTime_005d17ba
;   TerminatedCString s_maxAutoDripTime_005d17ca
;   TerminatedCString s_dripRadius_005d17da
;   TerminatedCString s_damage_005d17e5
;   TerminatedCString s_hitSound_005d17ec
;   TerminatedCString s_noRockFlag_005d17f5
;   undefined4 DAT_0060d1c8
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cfe0
        ;   Label: FUN_0046cfe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046cfe1
    CMP dword ptr [0x0060d1c8],0x2      ; 0046cfe5 | DAT_0060d1c8
    JGE 0x0046d0e2                      ; 0046cfec
        ;   XREF to: 0046d0e2 (CONDITIONAL_JUMP)  ; LAB_0046d0e2
    PUSH 0x5d1796                       ; 0046cff2 | = "modelName"
        ;   Label: LAB_0046cff2
    LEA EAX,[EBX + 0x2b4]               ; 0046cff7
    PUSH EAX                            ; 0046cffd
    CALL FUN_0040ba60                   ; 0046cffe
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 0046d003
    PUSH 0x5d17a0                       ; 0046d006 | DAT_005d17a0
    LEA EAX,[EBX + 0x430]               ; 0046d00b
    PUSH EAX                            ; 0046d011
    CALL FUN_0040b960                   ; 0046d012
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0046d017
    PUSH 0x5d17a5                       ; 0046d01a | = "autoDrop"
    LEA EAX,[EBX + 0x434]               ; 0046d01f
    PUSH EAX                            ; 0046d025
    CALL FUN_0040b960                   ; 0046d026
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0046d02b
    PUSH 0x5d17ae                       ; 0046d02e | = "homePos"
    LEA EAX,[EBX + 0x454]               ; 0046d033
    PUSH EAX                            ; 0046d039
    CALL FUN_0040b4b0                   ; 0046d03a
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 0046d03f
    PUSH 0x5d17b6                       ; 0046d042 | DAT_005d17b6
    LEA EAX,[EBX + 0x460]               ; 0046d047
    PUSH EAX                            ; 0046d04d
    CALL FUN_0040b4b0                   ; 0046d04e
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    MOV ECX,dword ptr [0x0060d1c8]      ; 0046d053 | DAT_0060d1c8
    ADD ESP,0x8                         ; 0046d059
    CMP ECX,0x3                         ; 0046d05c
    JL 0x0046d09d                       ; 0046d05f
        ;   XREF to: 0046d09d (CONDITIONAL_JUMP)  ; LAB_0046d09d
    PUSH 0x5d17ba                       ; 0046d061 | = "minAutoDripTime"
    LEA EAX,[EBX + 0x43c]               ; 0046d066
    PUSH EAX                            ; 0046d06c
    CALL FUN_0040b8e0                   ; 0046d06d
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0046d072
    PUSH 0x5d17ca                       ; 0046d075 | = "maxAutoDripTime"
    LEA EAX,[EBX + 0x440]               ; 0046d07a
    PUSH EAX                            ; 0046d080
    CALL FUN_0040b8e0                   ; 0046d081
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0046d086
    PUSH 0x5d17da                       ; 0046d089 | = "dripRadius"
    LEA EAX,[EBX + 0x444]               ; 0046d08e
    PUSH EAX                            ; 0046d094
    CALL FUN_0040b8e0                   ; 0046d095
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0046d09a
    CMP dword ptr [0x0060d1c8],0x4      ; 0046d09d | DAT_0060d1c8
        ;   Label: LAB_0046d09d
    JL 0x0046d0ba                       ; 0046d0a4
        ;   XREF to: 0046d0ba (CONDITIONAL_JUMP)  ; LAB_0046d0ba
    PUSH 0x5d17e5                       ; 0046d0a6 | = "damage"
    LEA EAX,[EBX + 0x46c]               ; 0046d0ab
    PUSH EAX                            ; 0046d0b1
    CALL FUN_0040b8e0                   ; 0046d0b2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0046d0b7
    CMP dword ptr [0x0060d1c8],0x5      ; 0046d0ba | DAT_0060d1c8
        ;   Label: LAB_0046d0ba
    JL 0x0046d0d7                       ; 0046d0c1
        ;   XREF to: 0046d0d7 (CONDITIONAL_JUMP)  ; LAB_0046d0d7
    PUSH 0x5d17ec                       ; 0046d0c3 | = "hitSound"
    LEA EAX,[EBX + 0x470]               ; 0046d0c8
    PUSH EAX                            ; 0046d0ce
    CALL FUN_0040b730                   ; 0046d0cf
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0046d0d4
    CMP dword ptr [0x0060d1c8],0x6      ; 0046d0d7 | DAT_0060d1c8
        ;   Label: LAB_0046d0d7
    JGE 0x0046d0f0                      ; 0046d0de
        ;   XREF to: 0046d0f0 (CONDITIONAL_JUMP)  ; LAB_0046d0f0
    POP EBX                             ; 0046d0e0
    RET                                 ; 0046d0e1
    PUSH EBX                            ; 0046d0e2
        ;   Label: LAB_0046d0e2
    CALL FUN_0040c330                   ; 0046d0e3
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0046d0e8
    JMP 0x0046cff2                      ; 0046d0eb
        ;   XREF to: 0046cff2 (UNCONDITIONAL_JUMP)  ; LAB_0046cff2
    PUSH 0x5d17f5                       ; 0046d0f0 | = "noRockFlag"
        ;   Label: LAB_0046d0f0
    ADD EBX,0x490                       ; 0046d0f5
    PUSH EBX                            ; 0046d0fb
    CALL FUN_0040b960                   ; 0046d0fc
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0046d101
    POP EBX                             ; 0046d104
    RET                                 ; 0046d105

