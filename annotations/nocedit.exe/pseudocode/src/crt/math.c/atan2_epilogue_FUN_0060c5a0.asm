; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __watcallRegister crt_math_c_atan2_epilogue_FUN_0060c5a0(void)
;
;
; *****************************************************************************

section .text

    FLDCW word ptr [ESP + 0x18]         ; 0060c5a0
        ;   Label: crt_math.c_atan2_epilogue_FUN_0060c5a0
    ADD ESP,0x24                        ; 0060c5a4
    POP EDX                             ; 0060c5a7
    POP ECX                             ; 0060c5a8
    POP EAX                             ; 0060c5a9
    RET                                 ; 0060c5aa

