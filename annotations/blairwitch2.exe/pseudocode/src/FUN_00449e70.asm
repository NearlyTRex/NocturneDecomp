; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449e70(int param_1)
;
;
; XREF[2]:
;   FUN_00449d30 at 00449d44
;   FUN_00449d90 at 00449d9a
;
; Called Functions:
;   FUN_00449ff0
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449e70
        ;   Label: FUN_00449e70
    PUSH ESI                            ; 00449e71
    PUSH EBP                            ; 00449e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00449e73
    CMP dword ptr [EBX + 0x2f94],0x0    ; 00449e77
    JNZ 0x00449eb4                      ; 00449e7e
        ;   XREF to: 00449eb4 (CONDITIONAL_JUMP)  ; LAB_00449eb4
    PUSH EBX                            ; 00449e80
        ;   Label: LAB_00449e80
    CALL FUN_00449ff0                   ; 00449e81
        ;   XREF to: 00449ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00449ff0()
    MOV ESI,dword ptr [EBX + 0x2fa0]    ; 00449e86
    ADD ESP,0x4                         ; 00449e8c
    TEST ESI,ESI                        ; 00449e8f
    JZ 0x00449ea6                       ; 00449e91
        ;   XREF to: 00449ea6 (CONDITIONAL_JUMP)  ; LAB_00449ea6
    PUSH ESI                            ; 00449e93
    CALL FUN_005b86a0                   ; 00449e94
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00449e99
    MOV dword ptr [EBX + 0x2fa0],0x0    ; 00449e9c
    MOV EBP,dword ptr [EBX + 0x1c6c]    ; 00449ea6
        ;   Label: LAB_00449ea6
    TEST EBP,EBP                        ; 00449eac
    JNZ 0x00449ed9                      ; 00449eae
        ;   XREF to: 00449ed9 (CONDITIONAL_JUMP)  ; LAB_00449ed9
    POP EBP                             ; 00449eb0
    POP ESI                             ; 00449eb1
    POP EBX                             ; 00449eb2
    RET                                 ; 00449eb3
    MOV ECX,dword ptr [EBX + 0x2f98]    ; 00449eb4
        ;   Label: LAB_00449eb4
    PUSH ECX                            ; 00449eba
    CALL FUN_005b86a0                   ; 00449ebb
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    MOV dword ptr [EBX + 0x2f94],0x0    ; 00449ec0
    ADD ESP,0x4                         ; 00449eca
    MOV dword ptr [EBX + 0x2f98],0x0    ; 00449ecd
    JMP 0x00449e80                      ; 00449ed7
        ;   XREF to: 00449e80 (UNCONDITIONAL_JUMP)  ; LAB_00449e80
    PUSH EBP                            ; 00449ed9
        ;   Label: LAB_00449ed9
    CALL FUN_005b86a0                   ; 00449eda
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00449edf
    MOV dword ptr [EBX + 0x1c6c],0x0    ; 00449ee2
    POP EBP                             ; 00449eec
    POP ESI                             ; 00449eed
    POP EBX                             ; 00449eee
    RET                                 ; 00449eef

