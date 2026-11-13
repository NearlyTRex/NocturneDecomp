; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004f4b00(float screen_x,float screen_y,CVector3f *output)
;
; Parameters:
; float            Stack[0x4]:4   screen_x
; float            Stack[0x8]:4   screen_y
; CVector3f *      Stack[0xc]:4   output
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

    MOV EAX,dword ptr [ESP + 0xc]       ; 004f4b00
        ;   Label: engine_mini3d.cpp_screenToWorldRay_FUN_004f4b00
    FLD float ptr [ESP + 0x4]           ; 004f4b04
    FSUB float ptr [0x01d09884]         ; 004f4b08 | DAT_01d09884
    FDIV float ptr [0x01d0987c]         ; 004f4b0e | DAT_01d0987c
    FLD float ptr [ESP + 0x8]           ; 004f4b14
    FSUB float ptr [0x01d09888]         ; 004f4b18 | DAT_01d09888
    FDIV float ptr [0x01d09880]         ; 004f4b1e | DAT_01d09880
    FXCH                                ; 004f4b24
    FST float ptr [ESP + 0x4]           ; 004f4b26
    FMUL float ptr [0x01d0988c]         ; 004f4b2a | DAT_01d0988c
    FLD float ptr [ESP + 0x4]           ; 004f4b30
    FMUL float ptr [0x01d09890]         ; 004f4b34 | DAT_01d09890
    FLD float ptr [ESP + 0x4]           ; 004f4b3a
    FMUL float ptr [0x01d09894]         ; 004f4b3e | DAT_01d09894
    FXCH ST3                            ; 004f4b44
    FST float ptr [ESP + 0x8]           ; 004f4b46
    FMUL float ptr [0x01d09898]         ; 004f4b4a | DAT_01d09898
    FLD float ptr [ESP + 0x8]           ; 004f4b50
    FMUL float ptr [0x01d0989c]         ; 004f4b54 | DAT_01d0989c
    FLD float ptr [ESP + 0x8]           ; 004f4b5a
    FMUL float ptr [0x01d098a0]         ; 004f4b5e | DAT_01d098a0
    FXCH ST2                            ; 004f4b64
    FADDP ST4,ST0                       ; 004f4b66
    FADDP ST2,ST0                       ; 004f4b68
    FADDP ST3,ST0                       ; 004f4b6a
    FLD float ptr [0x01d098a4]          ; 004f4b6c | DAT_01d098a4
    FLD float ptr [0x01d098a8]          ; 004f4b72 | DAT_01d098a8
    FLD float ptr [0x01d098ac]          ; 004f4b78 | DAT_01d098ac
    FXCH ST2                            ; 004f4b7e
    FADDP ST4,ST0                       ; 004f4b80
    FADDP ST2,ST0                       ; 004f4b82
    FADDP ST3,ST0                       ; 004f4b84
    FLD float ptr [0x01d098b0]          ; 004f4b86 | DAT_01d098b0
    FLD float ptr [0x01d098b4]          ; 004f4b8c | DAT_01d098b4
    FLD float ptr [0x01d098b8]          ; 004f4b92 | DAT_01d098b8
    FXCH ST2                            ; 004f4b98
    FADDP ST4,ST0                       ; 004f4b9a
    FADDP ST2,ST0                       ; 004f4b9c
    FADDP ST3,ST0                       ; 004f4b9e
    FXCH                                ; 004f4ba0
    FSTP float ptr [EAX]                ; 004f4ba2
    FSTP float ptr [EAX + 0x4]          ; 004f4ba4
    FSTP float ptr [EAX + 0x8]          ; 004f4ba7
    RET                                 ; 004f4baa

