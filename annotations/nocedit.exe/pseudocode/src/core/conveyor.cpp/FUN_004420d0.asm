; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_conveyor_cpp_FUN_004420d0(void)
;
;
; Referenced Globals:
;   double DOUBLE_00618e7b = 0.5
;   double DOUBLE_00618e83 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004420d0
        ;   Label: core_conveyor.cpp_FUN_004420d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004420d4
    FLD float ptr [EDX + 0x72c]         ; 004420d8
    FCHS                                ; 004420de
    FLD double ptr [0x00618e7b]         ; 004420e0 | DOUBLE_00618e7b
    FXCH                                ; 004420e6
    FMUL ST1                            ; 004420e8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004420ea
    FSTP float ptr [EAX]                ; 004420f1
    FLD float ptr [EDX + 0x734]         ; 004420f3
    FCHS                                ; 004420f9
    FMUL ST1                            ; 004420fb
    FSTP float ptr [EAX + 0x8]          ; 004420fd
    FLD float ptr [EDX + 0x72c]         ; 00442100
    FMUL ST1                            ; 00442106
    FSTP float ptr [EAX + 0xc]          ; 00442108
    FLD float ptr [EDX + 0x730]         ; 0044210b
    FADD double ptr [0x00618e83]        ; 00442111 | DOUBLE_00618e83
    FSTP float ptr [EAX + 0x10]         ; 00442117
    FMUL float ptr [EDX + 0x734]        ; 0044211a
    FSTP float ptr [EAX + 0x14]         ; 00442120
    RET                                 ; 00442123

