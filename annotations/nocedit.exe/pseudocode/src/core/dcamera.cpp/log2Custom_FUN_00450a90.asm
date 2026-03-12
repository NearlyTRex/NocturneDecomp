; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_dcamera_cpp_log2Custom_FUN_00450a90(double val)
;
; Parameters:
; double           Stack[0x4]:8   val
;
; Referenced Globals:
;   double g_Log2CustomMultiplier = 3.32192809489000
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00450a90
        ;   Label: core_dcamera.cpp_log2Custom_FUN_00450a90
    FLD double ptr [ESP + 0xc]          ; 00450a93
    FLDLG2                              ; 00450a97
    FXCH                                ; 00450a99
    FYL2X                               ; 00450a9b
    FMUL double ptr [0x0061a2ba]        ; 00450a9d | g_Log2CustomMultiplier
    FSTP double ptr [ESP]               ; 00450aa3
    MOV EAX,dword ptr [ESP]             ; 00450aa6
    MOV EDX,dword ptr [ESP + 0x4]       ; 00450aa9
    ADD ESP,0x8                         ; 00450aad
    RET                                 ; 00450ab0

