; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister float10 crt_math_c_atan2_minus_pi_half_epilogue_FUN_0060c5f3(void)
;
;
; Referenced Globals:
;   float10 g_HalfCalculatedPi = 1.570796326794896619
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x0068750e] ; 0060c5f3 | g_HalfCalculatedPi
        ;   Label: crt_math.c_atan2_minus_pi_half_epilogue_FUN_0060c5f3
    FSUBRP                              ; 0060c5f9
    FCHS                                ; 0060c5fb
    FLDCW word ptr [ESP + 0x18]         ; 0060c5fd
    ADD ESP,0x24                        ; 0060c601
    POP EDX                             ; 0060c604
    POP ECX                             ; 0060c605
    POP EAX                             ; 0060c606
    RET                                 ; 0060c607

