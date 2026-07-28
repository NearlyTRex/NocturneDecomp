; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00460c26(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7648
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00460c26
        ;   Label: engine_drender.cpp_FUN_00460c26
    FCOM double ptr [EDI]               ; 00460c27
    CALL crt_math.c_round_FUN_00563a30  ; 00460c2a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x005b7648]        ; 00460c2f | DAT_005b7648
    RET                                 ; 00460c35

