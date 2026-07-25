; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_00566c96(double param_1)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; Called Functions:
;   FUN_00566c6c
;
; *****************************************************************************

section .text

    FLD double ptr [ESP + 0x4]          ; 00566c96
        ;   Label: FUN_00566c96
    CALL FUN_00566c6c                   ; 00566c9a
        ;   XREF to: 00566c6c (UNCONDITIONAL_CALL)  ; undefined FUN_00566c6c()
    SUB ESP,0x8                         ; 00566c9f
    FSTP double ptr [ESP]               ; 00566ca2
    WAIT                                ; 00566ca5
    POP EAX                             ; 00566ca6
    POP EDX                             ; 00566ca7
    RET                                 ; 00566ca8

