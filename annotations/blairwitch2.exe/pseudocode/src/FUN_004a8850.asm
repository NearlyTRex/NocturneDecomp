; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8850(int param_1)
;
;
; XREF[2]:
;   FUN_004a7b90 at 004a7b96
;   FUN_004a8560 at 004a8568
;
; Called Functions:
;   FUN_004a7bb0
;   FUN_005b7fce
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8850
        ;   Label: FUN_004a8850
    PUSH ESI                            ; 004a8851
    PUSH EDI                            ; 004a8852
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a8853
    MOV EBX,EDI                         ; 004a8857
    LEA ESI,[EDI + 0x10]                ; 004a8859
    MOV EDX,dword ptr [EBX + 0x194]     ; 004a885c
        ;   Label: LAB_004a885c
    PUSH EDX                            ; 004a8862
    ADD EBX,0x4                         ; 004a8863
    CALL FUN_005b7fce                   ; 004a8866
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004a886b
    MOV dword ptr [EBX + 0x190],0x0     ; 004a886e
    CMP EBX,ESI                         ; 004a8878
    JNZ 0x004a885c                      ; 004a887a
        ;   XREF to: 004a885c (CONDITIONAL_JUMP)  ; LAB_004a885c
    MOV ECX,dword ptr [EDI + 0x1dcc]    ; 004a887c
    TEST ECX,ECX                        ; 004a8882
    JNZ 0x004a889d                      ; 004a8884
        ;   XREF to: 004a889d (CONDITIONAL_JUMP)  ; LAB_004a889d
    MOV ESI,dword ptr [EDI + 0x1dd4]    ; 004a8886
        ;   Label: LAB_004a8886
    TEST ESI,ESI                        ; 004a888c
    JNZ 0x004a88b2                      ; 004a888e
        ;   XREF to: 004a88b2 (CONDITIONAL_JUMP)  ; LAB_004a88b2
    PUSH EDI                            ; 004a8890
    CALL FUN_004a7bb0                   ; 004a8891
        ;   XREF to: 004a7bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7bb0()
    ADD ESP,0x4                         ; 004a8896
    POP EDI                             ; 004a8899
    POP ESI                             ; 004a889a
    POP EBX                             ; 004a889b
    RET                                 ; 004a889c
    PUSH ECX                            ; 004a889d
        ;   Label: LAB_004a889d
    CALL FUN_005b86a0                   ; 004a889e
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004a88a3
    MOV dword ptr [EDI + 0x1dcc],0x0    ; 004a88a6
    JMP 0x004a8886                      ; 004a88b0
        ;   XREF to: 004a8886 (UNCONDITIONAL_JUMP)  ; LAB_004a8886
    PUSH ESI                            ; 004a88b2
        ;   Label: LAB_004a88b2
    CALL FUN_005b86a0                   ; 004a88b3
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004a88b8
    PUSH EDI                            ; 004a88bb
    CALL FUN_004a7bb0                   ; 004a88bc
        ;   XREF to: 004a7bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7bb0()
    ADD ESP,0x4                         ; 004a88c1
    POP EDI                             ; 004a88c4
    POP ESI                             ; 004a88c5
    POP EBX                             ; 004a88c6
    RET                                 ; 004a88c7

