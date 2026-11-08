; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4bc0(int param_1)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b844e
;
; Called Functions:
;   FUN_004c4a60
;   FUN_00556700
;   FUN_00556c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4bc0
        ;   Label: FUN_004c4bc0
    PUSH ESI                            ; 004c4bc1
    PUSH EBP                            ; 004c4bc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c4bc3
    CMP byte ptr [EBX + 0x298],0x0      ; 004c4bc7
    JZ 0x004c4c2e                       ; 004c4bce
        ;   XREF to: 004c4c2e (CONDITIONAL_JUMP)  ; LAB_004c4c2e
    MOV ESI,dword ptr [EBX + 0x2fc]     ; 004c4bd0
    TEST ESI,ESI                        ; 004c4bd6
    JZ 0x004c4c0e                       ; 004c4bd8
        ;   XREF to: 004c4c0e (CONDITIONAL_JUMP)  ; LAB_004c4c0e
    PUSH ESI                            ; 004c4bda
    CALL FUN_00556700                   ; 004c4bdb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 004c4be0
    TEST EAX,EAX                        ; 004c4be3
    JZ 0x004c4c0e                       ; 004c4be5
        ;   XREF to: 004c4c0e (CONDITIONAL_JUMP)  ; LAB_004c4c0e
    CMP dword ptr [EBX + 0x2fc],0x0     ; 004c4be7
        ;   Label: LAB_004c4be7
    JZ 0x004c4c0a                       ; 004c4bee
        ;   XREF to: 004c4c0a (CONDITIONAL_JUMP)  ; LAB_004c4c0a
    MOV ECX,dword ptr [EBX + 0x24c]     ; 004c4bf0
    TEST ECX,ECX                        ; 004c4bf6
    JZ 0x004c4c82                       ; 004c4bf8
        ;   XREF to: 004c4c82 (CONDITIONAL_JUMP)  ; LAB_004c4c82
    CMP dword ptr [EBX + 0x308],0x3f800000 ; 004c4bfe
    JZ 0x004c4c58                       ; 004c4c08
        ;   XREF to: 004c4c58 (CONDITIONAL_JUMP)  ; LAB_004c4c58
    POP EBP                             ; 004c4c0a
        ;   Label: LAB_004c4c0a
    POP ESI                             ; 004c4c0b
    POP EBX                             ; 004c4c0c
    RET                                 ; 004c4c0d
    MOV EBP,dword ptr [EBX + 0x304]     ; 004c4c0e
        ;   Label: LAB_004c4c0e
    PUSH EBP                            ; 004c4c14
    MOV EAX,dword ptr [EBX + 0x300]     ; 004c4c15
    PUSH EAX                            ; 004c4c1b
    LEA EAX,[EBX + 0x298]               ; 004c4c1c
    PUSH EAX                            ; 004c4c22
    PUSH EBX                            ; 004c4c23
    CALL FUN_004c4a60                   ; 004c4c24
        ;   XREF to: 004c4a60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4a60()
    ADD ESP,0x10                        ; 004c4c29
    JMP 0x004c4be7                      ; 004c4c2c
        ;   XREF to: 004c4be7 (UNCONDITIONAL_JUMP)  ; LAB_004c4be7
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 004c4c2e
        ;   Label: LAB_004c4c2e
    TEST EDX,EDX                        ; 004c4c34
    JZ 0x004c4be7                       ; 004c4c36
        ;   XREF to: 004c4be7 (CONDITIONAL_JUMP)  ; LAB_004c4be7
    PUSH 0x1                            ; 004c4c38
    PUSH 0x40000000                     ; 004c4c3a
    PUSH 0x0                            ; 004c4c3f
    PUSH EDX                            ; 004c4c41
    CALL FUN_00556c10                   ; 004c4c42
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c10()
    ADD ESP,0x10                        ; 004c4c47
    MOV dword ptr [EBX + 0x2fc],0x0     ; 004c4c4a
    POP EBP                             ; 004c4c54
    POP ESI                             ; 004c4c55
    POP EBX                             ; 004c4c56
    RET                                 ; 004c4c57
    PUSH 0x0                            ; 004c4c58
        ;   Label: LAB_004c4c58
    MOV dword ptr [EBX + 0x308],0x3e99999a ; 004c4c5a
    PUSH 0x40000000                     ; 004c4c64
    MOV EBP,dword ptr [EBX + 0x2fc]     ; 004c4c69
    PUSH dword ptr [EBX + 0x308]        ; 004c4c6f
    PUSH EBP                            ; 004c4c75
    CALL FUN_00556c10                   ; 004c4c76
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c10()
    ADD ESP,0x10                        ; 004c4c7b
    POP EBP                             ; 004c4c7e
    POP ESI                             ; 004c4c7f
    POP EBX                             ; 004c4c80
    RET                                 ; 004c4c81
    FLD float ptr [EBX + 0x308]         ; 004c4c82
        ;   Label: LAB_004c4c82
    FLD1                                ; 004c4c88
    FCOMPP                              ; 004c4c8a
    FNSTSW AX                           ; 004c4c8c
    SAHF                                ; 004c4c8e
    JBE 0x004c4c0a                      ; 004c4c8f
        ;   XREF to: 004c4c0a (CONDITIONAL_JUMP)  ; LAB_004c4c0a
    PUSH ECX                            ; 004c4c95
    MOV dword ptr [EBX + 0x308],0x3f800000 ; 004c4c96
    PUSH 0x40000000                     ; 004c4ca0
    MOV ESI,dword ptr [EBX + 0x2fc]     ; 004c4ca5
    PUSH dword ptr [EBX + 0x308]        ; 004c4cab
    PUSH ESI                            ; 004c4cb1
    CALL FUN_00556c10                   ; 004c4cb2
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c10()
    ADD ESP,0x10                        ; 004c4cb7
    POP EBP                             ; 004c4cba
    POP ESI                             ; 004c4cbb
    POP EBX                             ; 004c4cbc
    RET                                 ; 004c4cbd

