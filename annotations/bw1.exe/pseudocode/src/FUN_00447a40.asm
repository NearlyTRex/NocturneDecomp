; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447a40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7102
;   TerminatedCString s_direction_005d7107
;   TerminatedCString s_startEvent_005d7111
;   TerminatedCString s_stopEvent_005d711c
;   TerminatedCString s_state_005d7126
;   TerminatedCString s_actorClass_005d712c
;   undefined4 DAT_00611160
;
; Called Functions:
;   FUN_0040b1c0
;   FUN_0040b440
;   FUN_0040b670
;   FUN_0053a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447a40
        ;   Label: FUN_00447a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447a41
    PUSH EBX                            ; 00447a45
    CALL FUN_0053a740                   ; 00447a46
        ;   XREF to: 0053a740 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a740()
    ADD ESP,0x4                         ; 00447a4b
    PUSH 0x5d7102                       ; 00447a4e | DAT_005d7102
    LEA EAX,[EBX + 0x728]               ; 00447a53
    PUSH EAX                            ; 00447a59
    CALL FUN_0040b1c0                   ; 00447a5a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00447a5f
    PUSH 0x5d7107                       ; 00447a62 | = "direction"
    LEA EAX,[EBX + 0x734]               ; 00447a67
    PUSH EAX                            ; 00447a6d
    CALL FUN_0040b1c0                   ; 00447a6e
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b1c0()
    ADD ESP,0x8                         ; 00447a73
    PUSH 0x5d7111                       ; 00447a76 | = "startEvent"
    LEA EAX,[EBX + 0x740]               ; 00447a7b
    PUSH EAX                            ; 00447a81
    CALL FUN_0040b440                   ; 00447a82
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00447a87
    PUSH 0x5d711c                       ; 00447a8a | = "stopEvent"
    LEA EAX,[EBX + 0x7a4]               ; 00447a8f
    PUSH EAX                            ; 00447a95
    CALL FUN_0040b440                   ; 00447a96
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00447a9b
    PUSH 0x5d7126                       ; 00447a9e | = "state"
    LEA EAX,[EBX + 0x808]               ; 00447aa3
    PUSH EAX                            ; 00447aa9
    CALL FUN_0040b670                   ; 00447aaa
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EDX,dword ptr [0x00611160]      ; 00447aaf | DAT_00611160
    ADD ESP,0x8                         ; 00447ab5
    CMP EDX,0x2                         ; 00447ab8
    JGE 0x00447abf                      ; 00447abb
        ;   XREF to: 00447abf (CONDITIONAL_JUMP)  ; LAB_00447abf
    POP EBX                             ; 00447abd
    RET                                 ; 00447abe
    PUSH 0x5d712c                       ; 00447abf | = "actorClass"
        ;   Label: LAB_00447abf
    ADD EBX,0x80c                       ; 00447ac4
    PUSH EBX                            ; 00447aca
    CALL FUN_0040b440                   ; 00447acb
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00447ad0
    POP EBX                             ; 00447ad3
    RET                                 ; 00447ad4

