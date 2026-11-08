; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e41d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c6b27
;   TerminatedCString s_falloff_005c6b2b
;   TerminatedCString s_state_005c6b33
;   TerminatedCString s_onEvent_005c6b39
;   TerminatedCString s_offEvent_005c6b41
;   undefined4 DAT_006002ec
;
; Called Functions:
;   FUN_0040b680
;   FUN_0040b830
;   FUN_0040b8b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e41d0
        ;   Label: FUN_004e41d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e41d1
    PUSH EBX                            ; 004e41d5
    CALL FUN_0040c280                   ; 004e41d6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004e41db
    PUSH 0x5c6b27                       ; 004e41de | DAT_005c6b27
    LEA EAX,[EBX + 0x158]               ; 004e41e3
    PUSH EAX                            ; 004e41e9
    CALL FUN_0040b830                   ; 004e41ea
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    ADD ESP,0x8                         ; 004e41ef
    PUSH 0x5c6b2b                       ; 004e41f2 | = "falloff"
    LEA EAX,[EBX + 0x15c]               ; 004e41f7
    PUSH EAX                            ; 004e41fd
    CALL FUN_0040b830                   ; 004e41fe
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b830()
    MOV EDX,dword ptr [0x006002ec]      ; 004e4203 | DAT_006002ec
    ADD ESP,0x8                         ; 004e4209
    CMP EDX,0x2                         ; 004e420c
    JGE 0x004e4213                      ; 004e420f
        ;   XREF to: 004e4213 (CONDITIONAL_JUMP)  ; LAB_004e4213
    POP EBX                             ; 004e4211
    RET                                 ; 004e4212
    PUSH 0x5c6b33                       ; 004e4213 | = "state"
        ;   Label: LAB_004e4213
    LEA EAX,[EBX + 0x160]               ; 004e4218
    PUSH EAX                            ; 004e421e
    CALL FUN_0040b8b0                   ; 004e421f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    ADD ESP,0x8                         ; 004e4224
    PUSH 0x5c6b39                       ; 004e4227 | = "onEvent"
    LEA EAX,[EBX + 0x164]               ; 004e422c
    PUSH EAX                            ; 004e4232
    CALL FUN_0040b680                   ; 004e4233
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 004e4238
    PUSH 0x5c6b41                       ; 004e423b | = "offEvent"
    ADD EBX,0x1c8                       ; 004e4240
    PUSH EBX                            ; 004e4246
    CALL FUN_0040b680                   ; 004e4247
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b680()
    ADD ESP,0x8                         ; 004e424c
    POP EBX                             ; 004e424f
    RET                                 ; 004e4250

