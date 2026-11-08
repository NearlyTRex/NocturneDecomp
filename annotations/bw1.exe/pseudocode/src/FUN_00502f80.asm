; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502f80(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7062
;   TerminatedCString s_falloff_005e7066
;   TerminatedCString s_state_005e706e
;   TerminatedCString s_onEvent_005e7074
;   TerminatedCString s_offEvent_005e707c
;   undefined4 DAT_0061f350
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b5f0
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502f80
        ;   Label: FUN_00502f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502f81
    PUSH EBX                            ; 00502f85
    CALL FUN_0040c040                   ; 00502f86
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 00502f8b
    PUSH 0x5e7062                       ; 00502f8e | DAT_005e7062
    LEA EAX,[EBX + 0x158]               ; 00502f93
    PUSH EAX                            ; 00502f99
    CALL FUN_0040b5f0                   ; 00502f9a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 00502f9f
    PUSH 0x5e7066                       ; 00502fa2 | = "falloff"
    LEA EAX,[EBX + 0x15c]               ; 00502fa7
    PUSH EAX                            ; 00502fad
    CALL FUN_0040b5f0                   ; 00502fae
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    MOV EDX,dword ptr [0x0061f350]      ; 00502fb3 | DAT_0061f350
    ADD ESP,0x8                         ; 00502fb9
    CMP EDX,0x2                         ; 00502fbc
    JGE 0x00502fc3                      ; 00502fbf
        ;   XREF to: 00502fc3 (CONDITIONAL_JUMP)  ; LAB_00502fc3
    POP EBX                             ; 00502fc1
    RET                                 ; 00502fc2
    PUSH 0x5e706e                       ; 00502fc3 | = "state"
        ;   Label: LAB_00502fc3
    LEA EAX,[EBX + 0x160]               ; 00502fc8
    PUSH EAX                            ; 00502fce
    CALL FUN_0040b670                   ; 00502fcf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00502fd4
    PUSH 0x5e7074                       ; 00502fd7 | = "onEvent"
    LEA EAX,[EBX + 0x164]               ; 00502fdc
    PUSH EAX                            ; 00502fe2
    CALL FUN_0040b440                   ; 00502fe3
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00502fe8
    PUSH 0x5e707c                       ; 00502feb | = "offEvent"
    ADD EBX,0x1c8                       ; 00502ff0
    PUSH EBX                            ; 00502ff6
    CALL FUN_0040b440                   ; 00502ff7
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00502ffc
    POP EBX                             ; 00502fff
    RET                                 ; 00503000

