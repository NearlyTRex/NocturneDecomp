; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_setFlattenMatrix_FUN_004ad4d0(CMatrix3x3f *matrix)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ad4d0
        ;   Label: core_flattn.cpp_setFlattenMatrix_FUN_004ad4d0
    FLD float ptr [EAX]                 ; 004ad4d4
    FLD float ptr [EAX + 0x4]           ; 004ad4d6
    FLD float ptr [EAX + 0x8]           ; 004ad4d9
    FLD float ptr [EAX + 0xc]           ; 004ad4dc
    FLD float ptr [EAX + 0x10]          ; 004ad4df
    FLD float ptr [EAX + 0x14]          ; 004ad4e2
    FLD float ptr [EAX + 0x18]          ; 004ad4e5
    FXCH ST5                            ; 004ad4e8
    FSTP float ptr [0x01d1a0b0]         ; 004ad4ea | g_FLOAT_01d1a0b0
    FLD float ptr [EAX + 0x1c]          ; 004ad4f0
    FXCH ST4                            ; 004ad4f3
    FSTP float ptr [0x01d1a0b4]         ; 004ad4f5 | g_FLOAT_01d1a0b4
    FLD float ptr [EAX + 0x20]          ; 004ad4fb
    FXCH ST3                            ; 004ad4fe
    FSTP float ptr [0x01d1a0b8]         ; 004ad500 | g_FLOAT_01d1a0b8
    FXCH                                ; 004ad506
    FSTP float ptr [0x01d1a0bc]         ; 004ad508 | g_FLOAT_01d1a0bc
    FSTP float ptr [0x01d1a0c0]         ; 004ad50e | g_FLOAT_01d1a0c0
    FXCH ST2                            ; 004ad514
    FSTP float ptr [0x01d1a0c4]         ; 004ad516 | g_FLOAT_01d1a0c4
    FSTP float ptr [0x01d1a0c8]         ; 004ad51c | g_FLOAT_01d1a0c8
    FSTP float ptr [0x01d1a0cc]         ; 004ad522 | g_FLOAT_01d1a0cc
    XOR EDX,EDX                         ; 004ad528
    FSTP float ptr [0x01d1a0ac]         ; 004ad52a | g_FLOAT_01d1a0ac
    MOV dword ptr [0x01d1a0d0],EDX      ; 004ad530 | g_FLOAT_01d1a0d0
    MOV dword ptr [0x01d1a0d4],EDX      ; 004ad536 | g_FLOAT_01d1a0d4
    MOV dword ptr [0x01d1a0d8],EDX      ; 004ad53c | g_FLOAT_01d1a0d8
    RET                                 ; 004ad542

