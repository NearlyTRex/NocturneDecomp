; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setZoom_FUN_004f2460(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   float g_FLOAT_005ddadc = 0.05555556
;   float g_FLOAT_01d098c8
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 004f2460
        ;   Label: engine_mini3d.cpp_setZoom_FUN_004f2460
    FMUL float ptr [0x005ddadc]         ; 004f2464 | g_FLOAT_005ddadc
    FSTP float ptr [0x01d098c8]         ; 004f246a | g_FLOAT_01d098c8
    RET                                 ; 004f2470

