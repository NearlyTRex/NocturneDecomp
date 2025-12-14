; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_stdlib.c_memory_swap_FUN_005fdf10(void * ptr1, void * ptr2, SIZE_T bytes)
;
;
; XREF[1]:
;   crt_stdlib.c_qsort_FUN_005fdf38 at 005fe403
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005fdf10
        ;   Label: crt_stdlib.c_memory_swap_FUN_005fdf10
    PUSH DS                             ; 005fdf11
    POP ES                              ; 005fdf12
    MOVZX EDX,CL                        ; 005fdf13
    SHR ECX,0x2                         ; 005fdf16
    JZ 0x005fdf26                       ; 005fdf19
        ;   XREF to: 005fdf26 (CONDITIONAL_JUMP)  ; LAB_005fdf26
    MOV EAX,dword ptr [EDI]             ; 005fdf1b
        ;   Label: LAB_005fdf1b
    XCHG dword ptr [ESI],EAX            ; 005fdf1d
    STOSD ES:EDI                        ; 005fdf1f
    ADD ESI,0x4                         ; 005fdf20
    DEC ECX                             ; 005fdf23
    JNZ 0x005fdf1b                      ; 005fdf24
        ;   XREF to: 005fdf1b (CONDITIONAL_JUMP)  ; LAB_005fdf1b
    AND DL,0x3                          ; 005fdf26
        ;   Label: LAB_005fdf26
    JZ 0x005fdf34                       ; 005fdf29
        ;   XREF to: 005fdf34 (CONDITIONAL_JUMP)  ; LAB_005fdf34
    MOV AL,byte ptr [EDI]               ; 005fdf2b
        ;   Label: LAB_005fdf2b
    XCHG byte ptr [ESI],AL              ; 005fdf2d
    STOSB ES:EDI                        ; 005fdf2f
    INC ESI                             ; 005fdf30
    DEC EDX                             ; 005fdf31
    JNZ 0x005fdf2b                      ; 005fdf32
        ;   XREF to: 005fdf2b (CONDITIONAL_JUMP)  ; LAB_005fdf2b
    POP ES                              ; 005fdf34
        ;   Label: LAB_005fdf34
    RET                                 ; 005fdf35

