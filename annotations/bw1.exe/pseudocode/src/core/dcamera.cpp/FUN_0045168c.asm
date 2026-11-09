; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double core_dcamera_cpp_FUN_0045168c(double param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d787f
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0045168c
        ;   Label: core_dcamera.cpp_FUN_0045168c
    SUB ESP,0x8                         ; 00451690
    FLD double ptr [ESP + 0xc]          ; 00451693
    FLDLG2                              ; 00451697
    FXCH                                ; 00451699
    FYL2X                               ; 0045169b
    FMUL double ptr [0x005d787f]        ; 0045169d | DAT_005d787f
    FSTP double ptr [ESP]               ; 004516a3
    MOV EAX,dword ptr [ESP]             ; 004516a6
    MOV EDX,dword ptr [ESP + 0x4]       ; 004516a9
    ADD ESP,0x8                         ; 004516ad
    RET                                 ; 004516b0

