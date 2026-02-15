; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float10 __watcallRegister crt_math_c_atan2_minus_pi_epilogue_FUN_0060c5cb(void)
;
;
; Referenced Globals:
;   float10 g_CalculatedPi = 3.141592653589793239
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00687504] ; 0060c5cb | g_CalculatedPi
        ;   Label: crt_math.c_atan2_minus_pi_epilogue_FUN_0060c5cb
    FSUBRP                              ; 0060c5d1
    FCHS                                ; 0060c5d3
    FLDCW word ptr [ESP + 0x18]         ; 0060c5d5
    ADD ESP,0x24                        ; 0060c5d9
    POP EDX                             ; 0060c5dc
    POP ECX                             ; 0060c5dd
    POP EAX                             ; 0060c5de
    RET                                 ; 0060c5df

