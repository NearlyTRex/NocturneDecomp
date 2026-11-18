; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_setFlattenMatrixAndOffset_FUN_004ad550(CMatrix3x3f *matrix,CVector3f *offset)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   offset
;
; Referenced Globals:
;   float g_FLOAT_01d1a0ac
;   float g_FLOAT_01d1a0b0
;   float g_FLOAT_01d1a0b4
;   float g_FLOAT_01d1a0b8
;   float g_FLOAT_01d1a0bc
;   float g_FLOAT_01d1a0c0
;   float g_FLOAT_01d1a0c4
;   float g_FLOAT_01d1a0c8
;   float g_FLOAT_01d1a0cc
;   float g_FLOAT_01d1a0d0
;   float g_FLOAT_01d1a0d4
;   float g_FLOAT_01d1a0d8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad550
        ;   Label: core_flattn.cpp_setFlattenMatrixAndOffset_FUN_004ad550
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ad554
    FLD float ptr [EAX]                 ; 004ad558
    FLD float ptr [EAX + 0x4]           ; 004ad55a
    FLD float ptr [EAX + 0x8]           ; 004ad55d
    FLD float ptr [EAX + 0xc]           ; 004ad560
    FLD float ptr [EAX + 0x10]          ; 004ad563
    FLD float ptr [EAX + 0x14]          ; 004ad566
    FLD float ptr [EAX + 0x18]          ; 004ad569
    FXCH ST5                            ; 004ad56c
    FSTP float ptr [0x01d1a0b0]         ; 004ad56e | g_FLOAT_01d1a0b0
    FLD float ptr [EAX + 0x1c]          ; 004ad574
    FXCH ST4                            ; 004ad577
    FSTP float ptr [0x01d1a0b4]         ; 004ad579 | g_FLOAT_01d1a0b4
    FLD float ptr [EAX + 0x20]          ; 004ad57f
    FXCH ST3                            ; 004ad582
    FSTP float ptr [0x01d1a0b8]         ; 004ad584 | g_FLOAT_01d1a0b8
    FLD float ptr [EDX]                 ; 004ad58a
    FXCH ST2                            ; 004ad58c
    FSTP float ptr [0x01d1a0bc]         ; 004ad58e | g_FLOAT_01d1a0bc
    FLD float ptr [EDX + 0x4]           ; 004ad594
    FXCH                                ; 004ad597
    FSTP float ptr [0x01d1a0c0]         ; 004ad599 | g_FLOAT_01d1a0c0
    FLD float ptr [EDX + 0x8]           ; 004ad59f
    FXCH ST5                            ; 004ad5a2
    FSTP float ptr [0x01d1a0c4]         ; 004ad5a4 | g_FLOAT_01d1a0c4
    FXCH ST3                            ; 004ad5aa
    FSTP float ptr [0x01d1a0c8]         ; 004ad5ac | g_FLOAT_01d1a0c8
    FXCH                                ; 004ad5b2
    FSTP float ptr [0x01d1a0cc]         ; 004ad5b4 | g_FLOAT_01d1a0cc
    FSTP float ptr [0x01d1a0d0]         ; 004ad5ba | g_FLOAT_01d1a0d0
    FSTP float ptr [0x01d1a0d4]         ; 004ad5c0 | g_FLOAT_01d1a0d4
    FSTP float ptr [0x01d1a0d8]         ; 004ad5c6 | g_FLOAT_01d1a0d8
    FSTP float ptr [0x01d1a0ac]         ; 004ad5cc | g_FLOAT_01d1a0ac
    RET                                 ; 004ad5d2

