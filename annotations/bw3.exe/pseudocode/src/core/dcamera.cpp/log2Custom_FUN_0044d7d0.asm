; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_dcamera_cpp_log2Custom_FUN_0044d7d0(double val)
;
; Parameters:
; double           Stack[0x4]:8   val
;
; Referenced Globals:
;   undefined4 DAT_005b9ee6
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0044d7d0
        ;   Label: core_dcamera.cpp_log2Custom_FUN_0044d7d0
    FLD double ptr [ESP + 0xc]          ; 0044d7d3
    FLDLG2                              ; 0044d7d7
    FXCH                                ; 0044d7d9
    FYL2X                               ; 0044d7db
    FMUL double ptr [0x005b9ee6]        ; 0044d7dd | DAT_005b9ee6
    FSTP double ptr [ESP]               ; 0044d7e3
    MOV EAX,dword ptr [ESP]             ; 0044d7e6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044d7e9
    ADD ESP,0x8                         ; 0044d7ed
    RET                                 ; 0044d7f0

