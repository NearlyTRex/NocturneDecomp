; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stairs.cpp_FUN_005ba490()
;
;
; Referenced Globals:
;   double DOUBLE_00653062 = 0.5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ba490
        ;   Label: core_stairs.cpp_FUN_005ba490
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ba494
    FLD float ptr [EDX + 0x160]         ; 005ba498
    FCHS                                ; 005ba49e
    FLD double ptr [0x00653062]         ; 005ba4a0 | DOUBLE_00653062
    FXCH                                ; 005ba4a6
    FMUL ST1                            ; 005ba4a8
    FSTP float ptr [EAX]                ; 005ba4aa
    FLD float ptr [EDX + 0x160]         ; 005ba4ac
    MOV dword ptr [EAX + 0x4],0x0       ; 005ba4b2
    FMULP                               ; 005ba4b9
    MOV dword ptr [EAX + 0x8],0x0       ; 005ba4bb
    FSTP float ptr [EAX + 0xc]          ; 005ba4c2
    FILD dword ptr [EDX + 0x16c]        ; 005ba4c5
    FMUL float ptr [EDX + 0x158]        ; 005ba4cb
    FSTP float ptr [EAX + 0x10]         ; 005ba4d1
    FILD dword ptr [EDX + 0x16c]        ; 005ba4d4
    FMUL float ptr [EDX + 0x15c]        ; 005ba4da
    FSTP float ptr [EAX + 0x14]         ; 005ba4e0
    RET                                 ; 005ba4e3

