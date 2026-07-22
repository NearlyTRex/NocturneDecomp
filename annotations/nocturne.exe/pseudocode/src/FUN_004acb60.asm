; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004acb60(int param_1,float *param_2)
;
;
; Referenced Globals:
;   double DOUBLE_00584fb8 = 0.5
;   double DOUBLE_00584fc0 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004acb60
        ;   Label: FUN_004acb60
    MOV EAX,dword ptr [ESP + 0x8]       ; 004acb64
    FLD float ptr [EDX + 0x150]         ; 004acb68
    FCHS                                ; 004acb6e
    FLD double ptr [0x00584fb8]         ; 004acb70 | DOUBLE_00584fb8
    FXCH                                ; 004acb76
    FMUL ST1                            ; 004acb78
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004acb7a
    FSTP float ptr [EAX]                ; 004acb81
    FLD float ptr [EDX + 0x158]         ; 004acb83
    FCHS                                ; 004acb89
    FMUL ST1                            ; 004acb8b
    FSTP float ptr [EAX + 0x8]          ; 004acb8d
    FLD float ptr [EDX + 0x150]         ; 004acb90
    FMUL ST1                            ; 004acb96
    FSTP float ptr [EAX + 0xc]          ; 004acb98
    FLD float ptr [EDX + 0x154]         ; 004acb9b
    FADD double ptr [0x00584fc0]        ; 004acba1 | DOUBLE_00584fc0
    FSTP float ptr [EAX + 0x10]         ; 004acba7
    FMUL float ptr [EDX + 0x158]        ; 004acbaa
    FSTP float ptr [EAX + 0x14]         ; 004acbb0
    RET                                 ; 004acbb3

