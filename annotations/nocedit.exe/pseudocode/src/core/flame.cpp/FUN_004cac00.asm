; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_flame_cpp_FUN_004cac00(void)
;
;
; Referenced Globals:
;   double DOUBLE_0062a146 = 0.5
;   double DOUBLE_0062a14e = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cac00
        ;   Label: core_flame.cpp_FUN_004cac00
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cac04
    FLD float ptr [EDX + 0x158]         ; 004cac08
    FCHS                                ; 004cac0e
    FLD double ptr [0x0062a146]         ; 004cac10 | DOUBLE_0062a146
    FXCH                                ; 004cac16
    FMUL ST1                            ; 004cac18
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004cac1a
    FSTP float ptr [EAX]                ; 004cac21
    FLD float ptr [EDX + 0x160]         ; 004cac23
    FCHS                                ; 004cac29
    FMUL ST1                            ; 004cac2b
    FSTP float ptr [EAX + 0x8]          ; 004cac2d
    FLD float ptr [EDX + 0x158]         ; 004cac30
    FMUL ST1                            ; 004cac36
    FSTP float ptr [EAX + 0xc]          ; 004cac38
    FLD float ptr [EDX + 0x15c]         ; 004cac3b
    FADD double ptr [0x0062a14e]        ; 004cac41 | DOUBLE_0062a14e
    FSTP float ptr [EAX + 0x10]         ; 004cac47
    FMUL float ptr [EDX + 0x160]        ; 004cac4a
    FSTP float ptr [EAX + 0x14]         ; 004cac50
    RET                                 ; 004cac53

