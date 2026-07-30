; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_curtain_cpp_CCurtain_getBoundingBox_FUN_0043f650(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_0057b53e = 0.5
;   double DOUBLE_0057b546 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043f650
        ;   Label: core_curtain.cpp_CCurtain_getBoundingBox_FUN_0043f650
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043f654
    FLD float ptr [EDX + 0x150]         ; 0043f658
    FCHS                                ; 0043f65e
    FLD double ptr [0x0057b53e]         ; 0043f660 | DOUBLE_0057b53e
    FXCH                                ; 0043f666
    FMUL ST1                            ; 0043f668
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0043f66a
    FSTP float ptr [EAX]                ; 0043f671
    FLD float ptr [EDX + 0x158]         ; 0043f673
    FCHS                                ; 0043f679
    FMUL ST1                            ; 0043f67b
    FSTP float ptr [EAX + 0x8]          ; 0043f67d
    FLD float ptr [EDX + 0x150]         ; 0043f680
    FMUL ST1                            ; 0043f686
    FSTP float ptr [EAX + 0xc]          ; 0043f688
    FLD float ptr [EDX + 0x154]         ; 0043f68b
    FADD double ptr [0x0057b546]        ; 0043f691 | DOUBLE_0057b546
    FSTP float ptr [EAX + 0x10]         ; 0043f697
    FMUL float ptr [EDX + 0x158]        ; 0043f69a
    FSTP float ptr [EAX + 0x14]         ; 0043f6a0
    RET                                 ; 0043f6a3

