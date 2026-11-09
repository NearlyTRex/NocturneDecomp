; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double core_dcamera_cpp_FUN_0043ffcc(double param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ce5b6
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0043ffcc
        ;   Label: core_dcamera.cpp_FUN_0043ffcc
    SUB ESP,0x8                         ; 0043ffd0
    FLD double ptr [ESP + 0xc]          ; 0043ffd3
    FLDLG2                              ; 0043ffd7
    FXCH                                ; 0043ffd9
    FYL2X                               ; 0043ffdb
    FMUL double ptr [0x005ce5b6]        ; 0043ffdd | DAT_005ce5b6
    FSTP double ptr [ESP]               ; 0043ffe3
    MOV EAX,dword ptr [ESP]             ; 0043ffe6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043ffe9
    ADD ESP,0x8                         ; 0043ffed
    RET                                 ; 0043fff0

