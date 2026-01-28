; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_emitter_cpp_FUN_004a8ad0(void)
;
;
; Referenced Globals:
;   double DOUBLE_006240c2 = 0.5
;   double DOUBLE_006240ca = 0.100000000000000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a8ad0
        ;   Label: core_emitter.cpp_FUN_004a8ad0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a8ad4
    FLD float ptr [EDX + 0x15c]         ; 004a8ad8
    FCHS                                ; 004a8ade
    FLD double ptr [0x006240c2]         ; 004a8ae0 | DOUBLE_006240c2
    FXCH                                ; 004a8ae6
    FMUL ST1                            ; 004a8ae8
    MOV dword ptr [EAX + 0x4],0xbdcccccd ; 004a8aea
    FSTP float ptr [EAX]                ; 004a8af1
    FLD float ptr [EDX + 0x164]         ; 004a8af3
    FCHS                                ; 004a8af9
    FMUL ST1                            ; 004a8afb
    FSTP float ptr [EAX + 0x8]          ; 004a8afd
    FLD float ptr [EDX + 0x15c]         ; 004a8b00
    FMUL ST1                            ; 004a8b06
    FSTP float ptr [EAX + 0xc]          ; 004a8b08
    FLD float ptr [EDX + 0x160]         ; 004a8b0b
    FADD double ptr [0x006240ca]        ; 004a8b11 | DOUBLE_006240ca
    FSTP float ptr [EAX + 0x10]         ; 004a8b17
    FMUL float ptr [EDX + 0x164]        ; 004a8b1a
    FSTP float ptr [EAX + 0x14]         ; 004a8b20
    RET                                 ; 004a8b23

