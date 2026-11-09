; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f4d7e(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d0988c
;   undefined4 DAT_01d09890
;   undefined4 DAT_01d09894
;   undefined4 DAT_01d09898
;   undefined4 DAT_01d0989c
;   undefined4 DAT_01d098a0
;   undefined4 DAT_01d098a4
;   undefined4 DAT_01d098a8
;   undefined4 DAT_01d098ac
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 004f4d7e
        ;   Label: engine_mini3d.cpp_FUN_004f4d7e
    SUB ESP,0xc                         ; 004f4d80
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f4d83
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f4d87
    FLD float ptr [EAX]                 ; 004f4d8b
    FSUB float ptr [0x01d09884]         ; 004f4d8d | DAT_01d09884
    FMUL float ptr [EAX + 0x8]          ; 004f4d93
    FDIV float ptr [0x01d0987c]         ; 004f4d96 | DAT_01d0987c
    FLD float ptr [EAX + 0x4]           ; 004f4d9c
    FSUB float ptr [0x01d09888]         ; 004f4d9f | DAT_01d09888
    FMUL float ptr [EAX + 0x8]          ; 004f4da5
    FLD ST1                             ; 004f4da8
    FMUL float ptr [0x01d0988c]         ; 004f4daa | DAT_01d0988c
    FLD ST2                             ; 004f4db0
    FMUL float ptr [0x01d09890]         ; 004f4db2 | DAT_01d09890
    FXCH ST3                            ; 004f4db8
    FMUL float ptr [0x01d09894]         ; 004f4dba | DAT_01d09894
    FXCH ST2                            ; 004f4dc0
    FDIV float ptr [0x01d09880]         ; 004f4dc2 | DAT_01d09880
    FLD ST0                             ; 004f4dc8
    FMUL float ptr [0x01d09898]         ; 004f4dca | DAT_01d09898
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f4dd0
    FLD ST1                             ; 004f4dd3
    FMUL float ptr [0x01d0989c]         ; 004f4dd5 | DAT_01d0989c
    MOV dword ptr [ESP + 0x8],EAX       ; 004f4ddb
    FXCH                                ; 004f4ddf
    FADDP ST3,ST0                       ; 004f4de1
    FXCH                                ; 004f4de3
    FMUL float ptr [0x01d098a0]         ; 004f4de5 | DAT_01d098a0
    FLD float ptr [ESP + 0x8]           ; 004f4deb
    FMUL float ptr [0x01d098a4]         ; 004f4def | DAT_01d098a4
    FXCH ST2                            ; 004f4df5
    FADDP ST5,ST0                       ; 004f4df7
    FADDP ST3,ST0                       ; 004f4df9
    FLD float ptr [ESP + 0x8]           ; 004f4dfb
    FMUL float ptr [0x01d098a8]         ; 004f4dff | DAT_01d098a8
    FLD float ptr [ESP + 0x8]           ; 004f4e05
    FMUL float ptr [0x01d098ac]         ; 004f4e09 | DAT_01d098ac
    FXCH ST2                            ; 004f4e0f
    FADDP ST3,ST0                       ; 004f4e11
    FADDP ST4,ST0                       ; 004f4e13
    FADDP ST2,ST0                       ; 004f4e15
    FLD float ptr [0x01d098b0]          ; 004f4e17 | DAT_01d098b0
    FLD float ptr [0x01d098b4]          ; 004f4e1d | DAT_01d098b4
    FLD float ptr [0x01d098b8]          ; 004f4e23 | DAT_01d098b8
    FXCH ST2                            ; 004f4e29
    FADDP ST3,ST0                       ; 004f4e2b
    FADDP ST4,ST0                       ; 004f4e2d
    FADDP ST2,ST0                       ; 004f4e2f
    FSTP float ptr [EDX]                ; 004f4e31
    FXCH                                ; 004f4e33
    FSTP float ptr [EDX + 0x4]          ; 004f4e35
    FSTP float ptr [EDX + 0x8]          ; 004f4e38
    ADD ESP,0xc                         ; 004f4e3b
    RET                                 ; 004f4e3e

