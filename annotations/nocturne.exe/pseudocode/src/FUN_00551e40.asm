; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551e40(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_0059765f = 0.5
;   double DOUBLE_00597667 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00551e40
        ;   Label: FUN_00551e40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00551e44
    FLD float ptr [EDX + 0x150]         ; 00551e48
    FCHS                                ; 00551e4e
    FLD double ptr [0x0059765f]         ; 00551e50 | DOUBLE_0059765f
    FXCH                                ; 00551e56
    FMUL ST1                            ; 00551e58
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 00551e5a
    FSTP float ptr [EAX]                ; 00551e61
    FLD float ptr [EDX + 0x158]         ; 00551e63
    FCHS                                ; 00551e69
    FMUL ST1                            ; 00551e6b
    FSTP float ptr [EAX + 0x8]          ; 00551e6d
    FLD float ptr [EDX + 0x150]         ; 00551e70
    FMUL ST1                            ; 00551e76
    FSTP float ptr [EAX + 0xc]          ; 00551e78
    FLD float ptr [EDX + 0x154]         ; 00551e7b
    FADD double ptr [0x00597667]        ; 00551e81 | DOUBLE_00597667
    FSTP float ptr [EAX + 0x10]         ; 00551e87
    FMUL float ptr [EDX + 0x158]        ; 00551e8a
    FSTP float ptr [EAX + 0x14]         ; 00551e90
    RET                                 ; 00551e93

