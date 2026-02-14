; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float10 __watcallRegister crt_math_c_atan2_pi_half_plus_epilogue_FUN_0060c608(void)
;
;
; Referenced Globals:
;   float10 g_HalfCalculatedPi = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0068750e] ; 0060c608 | g_HalfCalculatedPi
        ;   Label: crt_math.c_atan2_pi_half_plus_epilogue_FUN_0060c608
    FADDP                               ; 0060c60e
    FLDCW word ptr [ESP + 0x18]         ; 0060c610
    ADD ESP,0x24                        ; 0060c614
    POP EDX                             ; 0060c617
    POP ECX                             ; 0060c618
    POP EAX                             ; 0060c619
    RET                                 ; 0060c61a

