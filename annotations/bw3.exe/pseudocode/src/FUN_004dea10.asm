; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dea10(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005c66bc+1
;   TerminatedCString s_keyMask_005c66c7
;   TerminatedCString s_descriptiveName_005c66cf
;   undefined4 DAT_0060026c
;
; Called Functions:
;   FUN_0040b7a0
;   FUN_0040b8b0
;   FUN_0040b9b0
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dea10
        ;   Label: FUN_004dea10
    SUB ESP,0x100                       ; 004dea11
    MOV EBX,dword ptr [ESP + 0x108]     ; 004dea17
    PUSH EBX                            ; 004dea1e
    CALL FUN_0040c280                   ; 004dea1f
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 004dea24
    PUSH 0x5c66bd                       ; 004dea27 | s_modelName_005c66bc+1
    LEA EAX,[EBX + 0x158]               ; 004dea2c
    PUSH EAX                            ; 004dea32
    CALL FUN_0040b9b0                   ; 004dea33
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9b0()
    ADD ESP,0x8                         ; 004dea38
    PUSH 0x5c66c7                       ; 004dea3b | = "keyMask"
    LEA EAX,[EBX + 0x2d4]               ; 004dea40
    PUSH EAX                            ; 004dea46
    CALL FUN_0040b8b0                   ; 004dea47
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8b0()
    MOV EDX,dword ptr [0x0060026c]      ; 004dea4c | DAT_0060026c
    ADD ESP,0x8                         ; 004dea52
    CMP EDX,0x2                         ; 004dea55
    JZ 0x004dea62                       ; 004dea58
        ;   XREF to: 004dea62 (CONDITIONAL_JUMP)  ; LAB_004dea62
    ADD ESP,0x100                       ; 004dea5a
    POP EBX                             ; 004dea60
    RET                                 ; 004dea61
    PUSH 0x5c66cf                       ; 004dea62 | = "descriptiveName"
        ;   Label: LAB_004dea62
    LEA EAX,[ESP + 0x4]                 ; 004dea67
    PUSH EAX                            ; 004dea6b
    CALL FUN_0040b7a0                   ; 004dea6c
        ;   XREF to: 0040b7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b7a0()
    ADD ESP,0x8                         ; 004dea71
    ADD ESP,0x100                       ; 004dea74
    POP EBX                             ; 004dea7a
    RET                                 ; 004dea7b

