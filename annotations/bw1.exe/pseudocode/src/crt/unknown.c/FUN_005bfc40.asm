; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bfc40(void)
;
;
; XREF[1]:
;   crt_stdlib.c__qsort_FUN_005bfc68 at 005bfd76
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005bfc40
        ;   Label: crt_unknown.c_FUN_005bfc40
    PUSH DS                             ; 005bfc41
    POP ES                              ; 005bfc42
    MOVZX EDX,CL                        ; 005bfc43
    SHR ECX,0x2                         ; 005bfc46
    JZ 0x005bfc56                       ; 005bfc49
        ;   XREF to: 005bfc56 (CONDITIONAL_JUMP)  ; LAB_005bfc56
    MOV EAX,dword ptr [EDI]             ; 005bfc4b
        ;   Label: LAB_005bfc4b
    XCHG dword ptr [ESI],EAX            ; 005bfc4d
    STOSD ES:EDI                        ; 005bfc4f
    ADD ESI,0x4                         ; 005bfc50
    DEC ECX                             ; 005bfc53
    JNZ 0x005bfc4b                      ; 005bfc54
        ;   XREF to: 005bfc4b (CONDITIONAL_JUMP)  ; LAB_005bfc4b
    AND DL,0x3                          ; 005bfc56
        ;   Label: LAB_005bfc56
    JZ 0x005bfc64                       ; 005bfc59
        ;   XREF to: 005bfc64 (CONDITIONAL_JUMP)  ; LAB_005bfc64
    MOV AL,byte ptr [EDI]               ; 005bfc5b
        ;   Label: LAB_005bfc5b
    XCHG byte ptr [ESI],AL              ; 005bfc5d
    STOSB ES:EDI                        ; 005bfc5f
    INC ESI                             ; 005bfc60
    DEC EDX                             ; 005bfc61
    JNZ 0x005bfc5b                      ; 005bfc62
        ;   XREF to: 005bfc5b (CONDITIONAL_JUMP)  ; LAB_005bfc5b
    POP ES                              ; 005bfc64
        ;   Label: LAB_005bfc64
    RET                                 ; 005bfc65

