; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ef020(float param_1,float param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76c5c
;   undefined4 DAT_01d76c60
;   undefined4 DAT_01d76c64
;   undefined4 DAT_01d76c68
;   undefined4 DAT_01d76c6c
;   undefined4 DAT_01d76c70
;   undefined4 DAT_01d76c74
;   undefined4 DAT_01d76c78
;   undefined4 DAT_01d76c7c
;   undefined4 DAT_01d76c80
;   undefined4 DAT_01d76c84
;   undefined4 DAT_01d76c88
;   undefined4 DAT_01d76c8c
;   undefined4 DAT_01d76c90
;   undefined4 DAT_01d76c94
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 004ef020
        ;   Label: engine_mini3d.cpp_FUN_004ef020
    FLD float ptr [ESP + 0x4]           ; 004ef024
    FSUB float ptr [0x01d76c64]         ; 004ef028 | DAT_01d76c64
    FDIV float ptr [0x01d76c5c]         ; 004ef02e | DAT_01d76c5c
    FLD float ptr [ESP + 0x8]           ; 004ef034
    FSUB float ptr [0x01d76c68]         ; 004ef038 | DAT_01d76c68
    FDIV float ptr [0x01d76c60]         ; 004ef03e | DAT_01d76c60
    FXCH                                ; 004ef044
    FST float ptr [ESP + 0x4]           ; 004ef046
    FMUL float ptr [0x01d76c6c]         ; 004ef04a | DAT_01d76c6c
    FLD float ptr [ESP + 0x4]           ; 004ef050
    FMUL float ptr [0x01d76c70]         ; 004ef054 | DAT_01d76c70
    FLD float ptr [ESP + 0x4]           ; 004ef05a
    FMUL float ptr [0x01d76c74]         ; 004ef05e | DAT_01d76c74
    FXCH ST3                            ; 004ef064
    FST float ptr [ESP + 0x8]           ; 004ef066
    FMUL float ptr [0x01d76c78]         ; 004ef06a | DAT_01d76c78
    FLD float ptr [ESP + 0x8]           ; 004ef070
    FMUL float ptr [0x01d76c7c]         ; 004ef074 | DAT_01d76c7c
    FLD float ptr [ESP + 0x8]           ; 004ef07a
    FMUL float ptr [0x01d76c80]         ; 004ef07e | DAT_01d76c80
    FXCH ST2                            ; 004ef084
    FADDP ST4,ST0                       ; 004ef086
    FADDP ST2,ST0                       ; 004ef088
    FADDP ST3,ST0                       ; 004ef08a
    FLD float ptr [0x01d76c84]          ; 004ef08c | DAT_01d76c84
    FLD float ptr [0x01d76c88]          ; 004ef092 | DAT_01d76c88
    FLD float ptr [0x01d76c8c]          ; 004ef098 | DAT_01d76c8c
    FXCH ST2                            ; 004ef09e
    FADDP ST4,ST0                       ; 004ef0a0
    FADDP ST2,ST0                       ; 004ef0a2
    FADDP ST3,ST0                       ; 004ef0a4
    FLD float ptr [0x01d76c90]          ; 004ef0a6 | DAT_01d76c90
    FLD float ptr [0x01d76c94]          ; 004ef0ac | DAT_01d76c94
    FLD float ptr [0x01d76c98]          ; 004ef0b2 | DAT_01d76c98
    FXCH ST2                            ; 004ef0b8
    FADDP ST4,ST0                       ; 004ef0ba
    FADDP ST2,ST0                       ; 004ef0bc
    FADDP ST3,ST0                       ; 004ef0be
    FXCH                                ; 004ef0c0
    FSTP float ptr [EAX]                ; 004ef0c2
    FSTP float ptr [EAX + 0x4]          ; 004ef0c4
    FSTP float ptr [EAX + 0x8]          ; 004ef0c7
    RET                                 ; 004ef0ca

