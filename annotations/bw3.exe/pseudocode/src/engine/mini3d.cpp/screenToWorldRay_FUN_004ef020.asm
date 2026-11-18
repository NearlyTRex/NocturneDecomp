; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004ef020(float screen_x,float screen_y,CVector3f *output)
;
; Parameters:
; float            Stack[0x4]:4   screen_x
; float            Stack[0x8]:4   screen_y
; CVector3f *      Stack[0xc]:4   output
;
; Referenced Globals:
;   float g_FLOAT_01d76c5c
;   float g_FLOAT_01d76c60
;   float g_FLOAT_01d76c64
;   float g_FLOAT_01d76c68
;   float g_FLOAT_01d76c6c
;   float g_FLOAT_01d76c70
;   float g_FLOAT_01d76c74
;   float g_FLOAT_01d76c78
;   float g_FLOAT_01d76c7c
;   float g_FLOAT_01d76c80
;   float g_FLOAT_01d76c84
;   float g_FLOAT_01d76c88
;   float g_FLOAT_01d76c8c
;   float g_FLOAT_01d76c90
;   float g_FLOAT_01d76c94
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 004ef020
        ;   Label: engine_mini3d.cpp_screenToWorldRay_FUN_004ef020
    FLD float ptr [ESP + 0x4]           ; 004ef024
    FSUB float ptr [0x01d76c64]         ; 004ef028 | g_FLOAT_01d76c64
    FDIV float ptr [0x01d76c5c]         ; 004ef02e | g_FLOAT_01d76c5c
    FLD float ptr [ESP + 0x8]           ; 004ef034
    FSUB float ptr [0x01d76c68]         ; 004ef038 | g_FLOAT_01d76c68
    FDIV float ptr [0x01d76c60]         ; 004ef03e | g_FLOAT_01d76c60
    FXCH                                ; 004ef044
    FST float ptr [ESP + 0x4]           ; 004ef046
    FMUL float ptr [0x01d76c6c]         ; 004ef04a | g_FLOAT_01d76c6c
    FLD float ptr [ESP + 0x4]           ; 004ef050
    FMUL float ptr [0x01d76c70]         ; 004ef054 | g_FLOAT_01d76c70
    FLD float ptr [ESP + 0x4]           ; 004ef05a
    FMUL float ptr [0x01d76c74]         ; 004ef05e | g_FLOAT_01d76c74
    FXCH ST3                            ; 004ef064
    FST float ptr [ESP + 0x8]           ; 004ef066
    FMUL float ptr [0x01d76c78]         ; 004ef06a | g_FLOAT_01d76c78
    FLD float ptr [ESP + 0x8]           ; 004ef070
    FMUL float ptr [0x01d76c7c]         ; 004ef074 | g_FLOAT_01d76c7c
    FLD float ptr [ESP + 0x8]           ; 004ef07a
    FMUL float ptr [0x01d76c80]         ; 004ef07e | g_FLOAT_01d76c80
    FXCH ST2                            ; 004ef084
    FADDP ST4,ST0                       ; 004ef086
    FADDP ST2,ST0                       ; 004ef088
    FADDP ST3,ST0                       ; 004ef08a
    FLD float ptr [0x01d76c84]          ; 004ef08c | g_FLOAT_01d76c84
    FLD float ptr [0x01d76c88]          ; 004ef092 | g_FLOAT_01d76c88
    FLD float ptr [0x01d76c8c]          ; 004ef098 | g_FLOAT_01d76c8c
    FXCH ST2                            ; 004ef09e
    FADDP ST4,ST0                       ; 004ef0a0
    FADDP ST2,ST0                       ; 004ef0a2
    FADDP ST3,ST0                       ; 004ef0a4
    FLD float ptr [0x01d76c90]          ; 004ef0a6 | g_FLOAT_01d76c90
    FLD float ptr [0x01d76c94]          ; 004ef0ac | g_FLOAT_01d76c94
    FLD float ptr [0x01d76c98]          ; 004ef0b2 | g_FLOAT_01d76c98
    FXCH ST2                            ; 004ef0b8
    FADDP ST4,ST0                       ; 004ef0ba
    FADDP ST2,ST0                       ; 004ef0bc
    FADDP ST3,ST0                       ; 004ef0be
    FXCH                                ; 004ef0c0
    FSTP float ptr [EAX]                ; 004ef0c2
    FSTP float ptr [EAX + 0x4]          ; 004ef0c4
    FSTP float ptr [EAX + 0x8]          ; 004ef0c7
    RET                                 ; 004ef0ca

