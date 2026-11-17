; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_setFlattenMatrixTransposed_FUN_004a68c0(CMatrix3x3f *matrix)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
;
; Referenced Globals:
;   float g_FLOAT_01caf5bc
;   float g_FLOAT_01caf5c0
;   float g_FLOAT_01caf5c4
;   float g_FLOAT_01caf5c8
;   float g_FLOAT_01caf5cc
;   float g_FLOAT_01caf5d0
;   float g_FLOAT_01caf5d4
;   float g_FLOAT_01caf5d8
;   float g_FLOAT_01caf5dc
;   float g_FLOAT_01caf5e0
;   float g_FLOAT_01caf5e4
;   float g_FLOAT_01caf5e8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a68c0
        ;   Label: core_flattn.cpp_setFlattenMatrixTransposed_FUN_004a68c0
    FLD float ptr [EAX]                 ; 004a68c4
    FLD float ptr [EAX + 0x4]           ; 004a68c6
    FLD float ptr [EAX + 0x8]           ; 004a68c9
    FLD float ptr [EAX + 0xc]           ; 004a68cc
    FLD float ptr [EAX + 0x10]          ; 004a68cf
    FLD float ptr [EAX + 0x14]          ; 004a68d2
    FLD float ptr [EAX + 0x18]          ; 004a68d5
    FXCH ST5                            ; 004a68d8
    FSTP float ptr [0x01caf5c8]         ; 004a68da | g_FLOAT_01caf5c8
    FLD float ptr [EAX + 0x1c]          ; 004a68e0
    FXCH ST4                            ; 004a68e3
    FSTP float ptr [0x01caf5d4]         ; 004a68e5 | g_FLOAT_01caf5d4
    FLD float ptr [EAX + 0x20]          ; 004a68eb
    FXCH ST3                            ; 004a68ee
    FSTP float ptr [0x01caf5c0]         ; 004a68f0 | g_FLOAT_01caf5c0
    FXCH                                ; 004a68f6
    FSTP float ptr [0x01caf5cc]         ; 004a68f8 | g_FLOAT_01caf5cc
    FSTP float ptr [0x01caf5d8]         ; 004a68fe | g_FLOAT_01caf5d8
    FXCH ST2                            ; 004a6904
    FSTP float ptr [0x01caf5c4]         ; 004a6906 | g_FLOAT_01caf5c4
    FSTP float ptr [0x01caf5d0]         ; 004a690c | g_FLOAT_01caf5d0
    FSTP float ptr [0x01caf5dc]         ; 004a6912 | g_FLOAT_01caf5dc
    XOR EDX,EDX                         ; 004a6918
    FSTP float ptr [0x01caf5bc]         ; 004a691a | g_FLOAT_01caf5bc
    MOV dword ptr [0x01caf5e0],EDX      ; 004a6920 | g_FLOAT_01caf5e0
    MOV dword ptr [0x01caf5e4],EDX      ; 004a6926 | g_FLOAT_01caf5e4
    MOV dword ptr [0x01caf5e8],EDX      ; 004a692c | g_FLOAT_01caf5e8
    RET                                 ; 004a6932

