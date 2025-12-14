; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bride.cpp_FUN_00424800()
;
;
; Referenced Globals:
;   double DOUBLE_00616c8d = 2.5
;
; *****************************************************************************

section .text

    FLD ST0                             ; 00424800
        ;   Label: core_bride.cpp_FUN_00424800
    FMUL double ptr [0x00616c8d]        ; 00424802 | DOUBLE_00616c8d
    FSTP ST1                            ; 00424808
    FSTP float ptr [EBX + 0x4]          ; 0042480a
    MOV ESP,EBP                         ; 0042480d
    POP EBP                             ; 0042480f
    POP EDI                             ; 00424810
    POP ESI                             ; 00424811
    POP EBX                             ; 00424812
    RET                                 ; 00424813

