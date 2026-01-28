; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_FUN_00585220(void)
;
;
; Referenced Globals:
;   double DOUBLE_0064659d = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00585220
        ;   Label: core_setutil.cpp_FUN_00585220
    FMUL double ptr [0x0064659d]        ; 00585224 | DOUBLE_0064659d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058522a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058522e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x2fa4]      ; 00585233
    RET                                 ; 00585239

