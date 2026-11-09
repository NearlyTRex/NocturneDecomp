; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4290(void)
;
;
; XREF[1]:
;   crt_memory.c_memset_FUN_005bfb70 at 005bfb89
;
; Called Functions:
;   crt_unknown.c_FUN_005c42c7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005c4290
        ;   Label: crt_unknown.c_FUN_005c4290
    JZ 0x005c42c0                       ; 005c4292
        ;   XREF to: 005c42c0 (CONDITIONAL_JUMP)  ; LAB_005c42c0
    CMP byte ptr [EAX],DL               ; 005c4294
    TEST AL,0x3                         ; 005c4296
        ;   Label: LAB_005c4296
    JZ 0x005c42a3                       ; 005c4298
        ;   XREF to: 005c42a3 (CONDITIONAL_JUMP)  ; LAB_005c42a3
    MOV byte ptr [EAX],DL               ; 005c429a
    INC EAX                             ; 005c429c
    ROR EDX,0x8                         ; 005c429d
    DEC ECX                             ; 005c42a0
    JNZ 0x005c4296                      ; 005c42a1
        ;   XREF to: 005c4296 (CONDITIONAL_JUMP)  ; LAB_005c4296
    PUSH ECX                            ; 005c42a3
        ;   Label: LAB_005c42a3
    SHR ECX,0x2                         ; 005c42a4
    CALL crt_unknown.c_FUN_005c42c7     ; 005c42a7
        ;   XREF to: 005c42c7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c42c7()
    POP ECX                             ; 005c42ac
    AND ECX,0x3                         ; 005c42ad
    JZ 0x005c42c0                       ; 005c42b0
        ;   XREF to: 005c42c0 (CONDITIONAL_JUMP)  ; LAB_005c42c0
    MOV byte ptr [EAX],DL               ; 005c42b2
    DEC ECX                             ; 005c42b4
    JZ 0x005c42c0                       ; 005c42b5
        ;   XREF to: 005c42c0 (CONDITIONAL_JUMP)  ; LAB_005c42c0
    MOV byte ptr [EAX + 0x1],DH         ; 005c42b7
    DEC ECX                             ; 005c42ba
    JZ 0x005c42c0                       ; 005c42bb
        ;   XREF to: 005c42c0 (CONDITIONAL_JUMP)  ; LAB_005c42c0
    MOV byte ptr [EAX + 0x2],DL         ; 005c42bd
    RET                                 ; 005c42c0
        ;   Label: LAB_005c42c0

