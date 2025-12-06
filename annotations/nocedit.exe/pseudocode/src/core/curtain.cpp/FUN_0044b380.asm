; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_0044b380()
;
;
; Referenced Globals:
;   double DOUBLE_00619c4a = 0.5
;   double DOUBLE_00619c52 = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044b380
        ;   Label: core_curtain.cpp_FUN_0044b380
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044b384
    FLD float ptr [EDX + 0x158]         ; 0044b388
    FCHS                                ; 0044b38e
    FLD double ptr [0x00619c4a]         ; 0044b390 | double DOUBLE_00619c4a
    FXCH                                ; 0044b396
    FMUL ST1                            ; 0044b398
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 0044b39a
    FSTP float ptr [EAX]                ; 0044b3a1
    FLD float ptr [EDX + 0x160]         ; 0044b3a3
    FCHS                                ; 0044b3a9
    FMUL ST1                            ; 0044b3ab
    FSTP float ptr [EAX + 0x8]          ; 0044b3ad
    FLD float ptr [EDX + 0x158]         ; 0044b3b0
    FMUL ST1                            ; 0044b3b6
    FSTP float ptr [EAX + 0xc]          ; 0044b3b8
    FLD float ptr [EDX + 0x15c]         ; 0044b3bb
    FADD double ptr [0x00619c52]        ; 0044b3c1 | double DOUBLE_00619c52
    FSTP float ptr [EAX + 0x10]         ; 0044b3c7
    FMUL float ptr [EDX + 0x160]        ; 0044b3ca
    FSTP float ptr [EAX + 0x14]         ; 0044b3d0
    RET                                 ; 0044b3d3

