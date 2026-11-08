; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560b50(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005eb013+1
;   TerminatedCString s_spikeType_005eb01e
;   TerminatedCString s_spikeState_005eb028
;   TerminatedCString s_areWeActive_005eb033
;   TerminatedCString s_extendDistance_005eb03f
;   TerminatedCString s_startEvent_005eb04e
;   TerminatedCString s_stopEvent_005eb059
;   TerminatedCString s_extendEvent_005eb063
;   TerminatedCString s_retractEvent_005eb06f
;   TerminatedCString s_extendTime_005eb07c
;   TerminatedCString s_retractTime_005eb087
;   TerminatedCString s_extendSound_005eb093
;   TerminatedCString s_retractSound_005eb09f
;   TerminatedCString s_period_005eb0ac
;   TerminatedCString s_damageStrength_005eb0b3
;   ... and 1 more
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560b50
        ;   Label: FUN_00560b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00560b51
    PUSH EBX                            ; 00560b55
    CALL FUN_0040c330                   ; 00560b56
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 00560b5b
    PUSH 0x5eb014                       ; 00560b5e | s_modelName_005eb013+1
    LEA EAX,[EBX + 0x2b4]               ; 00560b63
    PUSH EAX                            ; 00560b69
    CALL FUN_0040ba60                   ; 00560b6a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 00560b6f
    PUSH 0x5eb01e                       ; 00560b72 | = "spikeType"
    LEA EAX,[EBX + 0x430]               ; 00560b77
    PUSH EAX                            ; 00560b7d
    CALL FUN_0040b960                   ; 00560b7e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00560b83
    PUSH 0x5eb028                       ; 00560b86 | = "spikeState"
    LEA EAX,[EBX + 0x434]               ; 00560b8b
    PUSH EAX                            ; 00560b91
    CALL FUN_0040b960                   ; 00560b92
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00560b97
    PUSH 0x5eb033                       ; 00560b9a | = "areWeActive"
    LEA EAX,[EBX + 0x438]               ; 00560b9f
    PUSH EAX                            ; 00560ba5
    CALL FUN_0040b960                   ; 00560ba6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00560bab
    PUSH 0x5eb03f                       ; 00560bae | = "extendDistance"
    LEA EAX,[EBX + 0x448]               ; 00560bb3
    PUSH EAX                            ; 00560bb9
    CALL FUN_0040b8e0                   ; 00560bba
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560bbf
    PUSH 0x5eb04e                       ; 00560bc2 | = "startEvent"
    LEA EAX,[EBX + 0x44c]               ; 00560bc7
    PUSH EAX                            ; 00560bcd
    CALL FUN_0040b730                   ; 00560bce
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560bd3
    PUSH 0x5eb059                       ; 00560bd6 | = "stopEvent"
    LEA EAX,[EBX + 0x4b0]               ; 00560bdb
    PUSH EAX                            ; 00560be1
    CALL FUN_0040b730                   ; 00560be2
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560be7
    PUSH 0x5eb063                       ; 00560bea | = "extendEvent"
    LEA EAX,[EBX + 0x514]               ; 00560bef
    PUSH EAX                            ; 00560bf5
    CALL FUN_0040b730                   ; 00560bf6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560bfb
    PUSH 0x5eb06f                       ; 00560bfe | = "retractEvent"
    LEA EAX,[EBX + 0x578]               ; 00560c03
    PUSH EAX                            ; 00560c09
    CALL FUN_0040b730                   ; 00560c0a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560c0f
    PUSH 0x5eb07c                       ; 00560c12 | = "extendTime"
    LEA EAX,[EBX + 0x5dc]               ; 00560c17
    PUSH EAX                            ; 00560c1d
    CALL FUN_0040b8e0                   ; 00560c1e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560c23
    PUSH 0x5eb087                       ; 00560c26 | = "retractTime"
    LEA EAX,[EBX + 0x5e0]               ; 00560c2b
    PUSH EAX                            ; 00560c31
    CALL FUN_0040b8e0                   ; 00560c32
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560c37
    PUSH 0x5eb093                       ; 00560c3a | = "extendSound"
    LEA EAX,[EBX + 0x5e8]               ; 00560c3f
    PUSH EAX                            ; 00560c45
    CALL FUN_0040b730                   ; 00560c46
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560c4b
    PUSH 0x5eb09f                       ; 00560c4e | = "retractSound"
    LEA EAX,[EBX + 0x64c]               ; 00560c53
    PUSH EAX                            ; 00560c59
    CALL FUN_0040b730                   ; 00560c5a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 00560c5f
    PUSH 0x5eb0ac                       ; 00560c62 | = "period"
    LEA EAX,[EBX + 0x6b0]               ; 00560c67
    PUSH EAX                            ; 00560c6d
    CALL FUN_0040b8e0                   ; 00560c6e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560c73
    PUSH 0x5eb0b3                       ; 00560c76 | = "damageStrength"
    LEA EAX,[EBX + 0x6b4]               ; 00560c7b
    PUSH EAX                            ; 00560c81
    CALL FUN_0040b8e0                   ; 00560c82
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560c87
    PUSH 0x5eb0c2                       ; 00560c8a | = "param"
    ADD EBX,0x6b8                       ; 00560c8f
    PUSH EBX                            ; 00560c95
    CALL FUN_0040b8e0                   ; 00560c96
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00560c9b
    POP EBX                             ; 00560c9e
    RET                                 ; 00560c9f

