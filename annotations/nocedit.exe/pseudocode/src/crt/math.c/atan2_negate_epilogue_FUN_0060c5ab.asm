; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float10 crt_math_c_atan2_negate_epilogue_FUN_0060c5ab(void)
;
;
; *****************************************************************************

section .text

    FCHS                                ; 0060c5ab
        ;   Label: crt_math.c_atan2_negate_epilogue_FUN_0060c5ab
    FLDCW word ptr [ESP + 0x18]         ; 0060c5ad
    ADD ESP,0x24                        ; 0060c5b1
    POP EDX                             ; 0060c5b4
    POP ECX                             ; 0060c5b5
    POP EAX                             ; 0060c5b6
    RET                                 ; 0060c5b7

