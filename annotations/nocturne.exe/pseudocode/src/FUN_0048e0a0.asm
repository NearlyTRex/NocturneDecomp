; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048e0a0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0058159f
;   undefined4 DAT_005815a7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048e0a0
        ;   Label: FUN_0048e0a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048e0a4
    FLD float ptr [EDX + 0x150]         ; 0048e0a8
    FCHS                                ; 0048e0ae
    FLD double ptr [0x0058159f]         ; 0048e0b0 | DAT_0058159f
    FXCH                                ; 0048e0b6
    FMUL ST1                            ; 0048e0b8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0048e0ba
    FSTP float ptr [EAX]                ; 0048e0c1
    FLD float ptr [EDX + 0x158]         ; 0048e0c3
    FCHS                                ; 0048e0c9
    FMUL ST1                            ; 0048e0cb
    FSTP float ptr [EAX + 0x8]          ; 0048e0cd
    FLD float ptr [EDX + 0x150]         ; 0048e0d0
    FMUL ST1                            ; 0048e0d6
    FSTP float ptr [EAX + 0xc]          ; 0048e0d8
    FLD float ptr [EDX + 0x154]         ; 0048e0db
    FADD double ptr [0x005815a7]        ; 0048e0e1 | DAT_005815a7
    FSTP float ptr [EAX + 0x10]         ; 0048e0e7
    FMUL float ptr [EDX + 0x158]        ; 0048e0ea
    FSTP float ptr [EAX + 0x14]         ; 0048e0f0
    RET                                 ; 0048e0f3

