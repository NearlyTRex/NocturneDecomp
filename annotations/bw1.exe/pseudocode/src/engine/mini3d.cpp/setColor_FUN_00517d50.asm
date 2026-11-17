; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setColor_FUN_00517d50(uint rgb)
;
; Parameters:
; uint             Stack[0x4]:4   rgb
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[16]:
;   shape_edittool.cpp_CEdButton_paint_FUN_0049d580 at 0049d6e5
;   shape_edittool.cpp_CEdCheck_render_FUN_0049dc70 at 0049dd96
;   shape_edittool.cpp_CEdScrollBar_render_FUN_0049caa0 at 0049cb30
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00498360 at 004983f3
;   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004987b0 at 00498893
;   shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_00497870 at 00497987
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_00497660 at 0049771b
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0 at 00497013
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004962b0 at 00496447
;   shape_edittool.cpp_CInputString_draw_FUN_004934b0 at 004936a2
;   ... and 6 more
;
; Referenced Globals:
;   float g_FLOAT_005e9033 = 0.003921569
;   float g_FLOAT_005e9037 = 255
;   float g_FLOAT_01d224c0
;   float g_FLOAT_01d25f38
;   float g_FLOAT_01d25f3c
;   float g_FLOAT_01d25f40
;   int g_INT_01d25f44
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00517d50
        ;   Label: engine_mini3d.cpp_setColor_FUN_00517d50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517d53
    MOV EDX,EAX                         ; 00517d57
    FLD float ptr [0x01d224c0]          ; 00517d59 | g_FLOAT_01d224c0
    SHR EDX,0x10                        ; 00517d5f
    FMUL float ptr [0x005e9037]         ; 00517d62 | g_FLOAT_005e9037
    AND EDX,0xff                        ; 00517d68
    MOV dword ptr [ESP],EDX             ; 00517d6e
    MOV EDX,EAX                         ; 00517d71
    FILD dword ptr [ESP]                ; 00517d73
    SHR EDX,0x8                         ; 00517d76
    FLD float ptr [0x005e9033]          ; 00517d79 | g_FLOAT_005e9033
    FXCH                                ; 00517d7f
    FMUL ST1                            ; 00517d81
    AND EDX,0xff                        ; 00517d83
    MOV dword ptr [ESP],EDX             ; 00517d89
    MOV EDX,EAX                         ; 00517d8c
    FILD dword ptr [ESP]                ; 00517d8e
    AND EDX,0xff                        ; 00517d91
    FMUL ST2                            ; 00517d97
    MOV dword ptr [ESP],EDX             ; 00517d99
    FILD dword ptr [ESP]                ; 00517d9c
    FMULP ST3                           ; 00517d9f
    FXCH ST3                            ; 00517da1
    CALL crt_math.c_round_FUN_005c03a0  ; 00517da3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [ESP]               ; 00517da8
    FSTP float ptr [0x01d25f38]         ; 00517dab | g_FLOAT_01d25f38
    MOV EDX,dword ptr [ESP]             ; 00517db1
    AND EAX,0xffffff                    ; 00517db4
    SHL EDX,0x18                        ; 00517db9
    FXCH                                ; 00517dbc
    FSTP float ptr [0x01d25f3c]         ; 00517dbe | g_FLOAT_01d25f3c
    OR EAX,EDX                          ; 00517dc4
    FSTP float ptr [0x01d25f40]         ; 00517dc6 | g_FLOAT_01d25f40
    MOV [0x01d25f44],EAX                ; 00517dcc | g_INT_01d25f44
    ADD ESP,0x4                         ; 00517dd1
    RET                                 ; 00517dd4

