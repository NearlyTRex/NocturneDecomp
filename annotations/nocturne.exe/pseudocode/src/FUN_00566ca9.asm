; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_00566ca9(double param_1,double param_2)
;
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    FLD double ptr [ESP + 0xc]          ; 00566ca9
        ;   Label: FUN_00566ca9
    FLD double ptr [ESP + 0x4]          ; 00566cad
    CALL crt_math.c_atan2_FUN_00566c81  ; 00566cb1
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    SUB ESP,0x8                         ; 00566cb6
    FSTP double ptr [ESP]               ; 00566cb9
    WAIT                                ; 00566cbc
    POP EAX                             ; 00566cbd
    POP EDX                             ; 00566cbe
    RET                                 ; 00566cbf

