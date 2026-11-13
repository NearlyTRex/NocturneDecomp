; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_00513850(float screen_x,float screen_y,CVector3f *output)
;
; Parameters:
; float            Stack[0x4]:4   screen_x
; float            Stack[0x8]:4   screen_y
; CVector3f *      Stack[0xc]:4   output
;
; Referenced Globals:
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d224ec
;   undefined4 DAT_01d224f0
;   undefined4 DAT_01d224f4
;   undefined4 DAT_01d224f8
;   undefined4 DAT_01d224fc
;   undefined4 DAT_01d22500
;   undefined4 DAT_01d22504
;   undefined4 DAT_01d22508
;   undefined4 DAT_01d2250c
;   undefined4 DAT_01d22510
;   undefined4 DAT_01d22514
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 00513850
        ;   Label: engine_mini3d.cpp_screenToWorldRay_FUN_00513850
    FLD float ptr [ESP + 0x4]           ; 00513854
    FSUB float ptr [0x01d224e4]         ; 00513858 | DAT_01d224e4
    FDIV float ptr [0x01d224dc]         ; 0051385e | DAT_01d224dc
    FLD float ptr [ESP + 0x8]           ; 00513864
    FSUB float ptr [0x01d224e8]         ; 00513868 | DAT_01d224e8
    FDIV float ptr [0x01d224e0]         ; 0051386e | DAT_01d224e0
    FXCH                                ; 00513874
    FST float ptr [ESP + 0x4]           ; 00513876
    FMUL float ptr [0x01d224ec]         ; 0051387a | DAT_01d224ec
    FLD float ptr [ESP + 0x4]           ; 00513880
    FMUL float ptr [0x01d224f0]         ; 00513884 | DAT_01d224f0
    FLD float ptr [ESP + 0x4]           ; 0051388a
    FMUL float ptr [0x01d224f4]         ; 0051388e | DAT_01d224f4
    FXCH ST3                            ; 00513894
    FST float ptr [ESP + 0x8]           ; 00513896
    FMUL float ptr [0x01d224f8]         ; 0051389a | DAT_01d224f8
    FLD float ptr [ESP + 0x8]           ; 005138a0
    FMUL float ptr [0x01d224fc]         ; 005138a4 | DAT_01d224fc
    FLD float ptr [ESP + 0x8]           ; 005138aa
    FMUL float ptr [0x01d22500]         ; 005138ae | DAT_01d22500
    FXCH ST2                            ; 005138b4
    FADDP ST4,ST0                       ; 005138b6
    FADDP ST2,ST0                       ; 005138b8
    FADDP ST3,ST0                       ; 005138ba
    FLD float ptr [0x01d22504]          ; 005138bc | DAT_01d22504
    FLD float ptr [0x01d22508]          ; 005138c2 | DAT_01d22508
    FLD float ptr [0x01d2250c]          ; 005138c8 | DAT_01d2250c
    FXCH ST2                            ; 005138ce
    FADDP ST4,ST0                       ; 005138d0
    FADDP ST2,ST0                       ; 005138d2
    FADDP ST3,ST0                       ; 005138d4
    FLD float ptr [0x01d22510]          ; 005138d6 | DAT_01d22510
    FLD float ptr [0x01d22514]          ; 005138dc | DAT_01d22514
    FLD float ptr [0x01d22518]          ; 005138e2 | DAT_01d22518
    FXCH ST2                            ; 005138e8
    FADDP ST4,ST0                       ; 005138ea
    FADDP ST2,ST0                       ; 005138ec
    FADDP ST3,ST0                       ; 005138ee
    FXCH                                ; 005138f0
    FSTP float ptr [EAX]                ; 005138f2
    FSTP float ptr [EAX + 0x4]          ; 005138f4
    FSTP float ptr [EAX + 0x8]          ; 005138f7
    RET                                 ; 005138fa

