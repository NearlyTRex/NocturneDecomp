; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a29c0(void)
;
;
; XREF[1]:
;   crt_stdlib.c__qsort_FUN_005a29e8 at 005a2af6
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005a29c0
        ;   Label: crt_unknown.c_FUN_005a29c0
    PUSH DS                             ; 005a29c1
    POP ES                              ; 005a29c2
    MOVZX EDX,CL                        ; 005a29c3
    SHR ECX,0x2                         ; 005a29c6
    JZ 0x005a29d6                       ; 005a29c9
        ;   XREF to: 005a29d6 (CONDITIONAL_JUMP)  ; LAB_005a29d6
    MOV EAX,dword ptr [EDI]             ; 005a29cb
        ;   Label: LAB_005a29cb
    XCHG dword ptr [ESI],EAX            ; 005a29cd
    STOSD ES:EDI                        ; 005a29cf
    ADD ESI,0x4                         ; 005a29d0
    DEC ECX                             ; 005a29d3
    JNZ 0x005a29cb                      ; 005a29d4
        ;   XREF to: 005a29cb (CONDITIONAL_JUMP)  ; LAB_005a29cb
    AND DL,0x3                          ; 005a29d6
        ;   Label: LAB_005a29d6
    JZ 0x005a29e4                       ; 005a29d9
        ;   XREF to: 005a29e4 (CONDITIONAL_JUMP)  ; LAB_005a29e4
    MOV AL,byte ptr [EDI]               ; 005a29db
        ;   Label: LAB_005a29db
    XCHG byte ptr [ESI],AL              ; 005a29dd
    STOSB ES:EDI                        ; 005a29df
    INC ESI                             ; 005a29e0
    DEC EDX                             ; 005a29e1
    JNZ 0x005a29db                      ; 005a29e2
        ;   XREF to: 005a29db (CONDITIONAL_JUMP)  ; LAB_005a29db
    POP ES                              ; 005a29e4
        ;   Label: LAB_005a29e4
    RET                                 ; 005a29e5

