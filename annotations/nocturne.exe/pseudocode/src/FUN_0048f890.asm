; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048f890(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0058172f
;   undefined4 DAT_00581737
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048f890
        ;   Label: FUN_0048f890
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048f894
    MOV dword ptr [EAX + 0x4],0x0       ; 0048f898
    MOV ECX,dword ptr [EDX + 0x154]     ; 0048f89f
    MOV dword ptr [EAX + 0x10],ECX      ; 0048f8a5
    FLD double ptr [0x0058172f]         ; 0048f8a8 | DAT_0058172f
    FLD float ptr [EDX + 0x150]         ; 0048f8ae
    FMUL ST1                            ; 0048f8b4
    FSTP float ptr [EAX]                ; 0048f8b6
    FLD double ptr [0x00581737]         ; 0048f8b8 | DAT_00581737
    FLD float ptr [EDX + 0x150]         ; 0048f8be
    FMUL ST1                            ; 0048f8c4
    FSTP float ptr [EAX + 0xc]          ; 0048f8c6
    FLD float ptr [EDX + 0x158]         ; 0048f8c9
    FMULP ST2                           ; 0048f8cf
    FXCH                                ; 0048f8d1
    FSTP float ptr [EAX + 0x8]          ; 0048f8d3
    FMUL float ptr [EDX + 0x158]        ; 0048f8d6
    FSTP float ptr [EAX + 0x14]         ; 0048f8dc
    RET                                 ; 0048f8df

