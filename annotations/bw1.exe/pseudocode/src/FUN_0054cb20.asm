; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054cb20(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005f042d
;   TerminatedCString s_guardDistance_005f0437
;   TerminatedCString s_motion_state_005f0445
;   undefined4 DAT_00622bc0
;
; Called Functions:
;   FUN_0040b5f0
;   FUN_0040b7f0
;   FUN_0040b870
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cb20
        ;   Label: FUN_0054cb20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054cb21
    PUSH EBX                            ; 0054cb25
    CALL FUN_004a0520                   ; 0054cb26
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 0054cb2b
    PUSH 0x5f042d                       ; 0054cb2e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0054cb33
    PUSH EAX                            ; 0054cb39
    CALL FUN_0040b7f0                   ; 0054cb3a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7f0()
    MOV EDX,dword ptr [0x00622bc0]      ; 0054cb3f | DAT_00622bc0
    ADD ESP,0x8                         ; 0054cb45
    CMP EDX,0x2                         ; 0054cb48
    JL 0x0054cb63                       ; 0054cb4b
        ;   XREF to: 0054cb63 (CONDITIONAL_JUMP)  ; LAB_0054cb63
    PUSH 0x5f0445                       ; 0054cb4d | = "motion state"
        ;   Label: LAB_0054cb4d
    ADD EBX,0x158                       ; 0054cb52
    PUSH EBX                            ; 0054cb58
    CALL FUN_0040b870                   ; 0054cb59
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b870()
    ADD ESP,0x8                         ; 0054cb5e
    POP EBX                             ; 0054cb61
    RET                                 ; 0054cb62
    PUSH 0x5f0437                       ; 0054cb63 | = "guardDistance"
        ;   Label: LAB_0054cb63
    LEA EAX,[EBX + 0xc1e0]              ; 0054cb68
    PUSH EAX                            ; 0054cb6e
    CALL FUN_0040b5f0                   ; 0054cb6f
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0054cb74
    JMP 0x0054cb4d                      ; 0054cb77
        ;   XREF to: 0054cb4d (UNCONDITIONAL_JUMP)  ; LAB_0054cb4d

