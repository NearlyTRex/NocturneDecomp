; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_004ef2a0(float *screen_point,CVector3f *output)
;
; Parameters:
; float *          Stack[0x4]:4   screen_point
; CVector3f *      Stack[0x8]:4   output
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

    SUB ESP,0xc                         ; 004ef2a0
        ;   Label: engine_mini3d.cpp_unprojectPoint_FUN_004ef2a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ef2a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ef2a7
    FLD float ptr [EAX]                 ; 004ef2ab
    FSUB float ptr [0x01d76c64]         ; 004ef2ad | DAT_01d76c64
    FMUL float ptr [EAX + 0x8]          ; 004ef2b3
    FDIV float ptr [0x01d76c5c]         ; 004ef2b6 | DAT_01d76c5c
    FLD float ptr [EAX + 0x4]           ; 004ef2bc
    FSUB float ptr [0x01d76c68]         ; 004ef2bf | DAT_01d76c68
    FMUL float ptr [EAX + 0x8]          ; 004ef2c5
    FLD ST1                             ; 004ef2c8
    FMUL float ptr [0x01d76c6c]         ; 004ef2ca | DAT_01d76c6c
    FLD ST2                             ; 004ef2d0
    FMUL float ptr [0x01d76c70]         ; 004ef2d2 | DAT_01d76c70
    FXCH ST3                            ; 004ef2d8
    FMUL float ptr [0x01d76c74]         ; 004ef2da | DAT_01d76c74
    FXCH ST2                            ; 004ef2e0
    FDIV float ptr [0x01d76c60]         ; 004ef2e2 | DAT_01d76c60
    FLD ST0                             ; 004ef2e8
    FMUL float ptr [0x01d76c78]         ; 004ef2ea | DAT_01d76c78
    MOV EAX,dword ptr [EAX + 0x8]       ; 004ef2f0
    FLD ST1                             ; 004ef2f3
    FMUL float ptr [0x01d76c7c]         ; 004ef2f5 | DAT_01d76c7c
    MOV dword ptr [ESP + 0x8],EAX       ; 004ef2fb
    FXCH                                ; 004ef2ff
    FADDP ST3,ST0                       ; 004ef301
    FXCH                                ; 004ef303
    FMUL float ptr [0x01d76c80]         ; 004ef305 | DAT_01d76c80
    FLD float ptr [ESP + 0x8]           ; 004ef30b
    FMUL float ptr [0x01d76c84]         ; 004ef30f | DAT_01d76c84
    FXCH ST2                            ; 004ef315
    FADDP ST5,ST0                       ; 004ef317
    FADDP ST3,ST0                       ; 004ef319
    FLD float ptr [ESP + 0x8]           ; 004ef31b
    FMUL float ptr [0x01d76c88]         ; 004ef31f | DAT_01d76c88
    FLD float ptr [ESP + 0x8]           ; 004ef325
    FMUL float ptr [0x01d76c8c]         ; 004ef329 | DAT_01d76c8c
    FXCH ST2                            ; 004ef32f
    FADDP ST3,ST0                       ; 004ef331
    FADDP ST4,ST0                       ; 004ef333
    FADDP ST2,ST0                       ; 004ef335
    FLD float ptr [0x01d76c90]          ; 004ef337 | DAT_01d76c90
    FLD float ptr [0x01d76c94]          ; 004ef33d | DAT_01d76c94
    FLD float ptr [0x01d76c98]          ; 004ef343 | DAT_01d76c98
    FXCH ST2                            ; 004ef349
    FADDP ST3,ST0                       ; 004ef34b
    FADDP ST4,ST0                       ; 004ef34d
    FADDP ST2,ST0                       ; 004ef34f
    FSTP float ptr [EDX]                ; 004ef351
    FXCH                                ; 004ef353
    FSTP float ptr [EDX + 0x4]          ; 004ef355
    FSTP float ptr [EDX + 0x8]          ; 004ef358
    ADD ESP,0xc                         ; 004ef35b
    RET                                 ; 004ef35e

