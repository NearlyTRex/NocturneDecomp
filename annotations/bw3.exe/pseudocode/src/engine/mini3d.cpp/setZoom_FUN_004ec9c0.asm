; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setZoom_FUN_004ec9c0(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_005c7e65
;   undefined4 DAT_01d76ca8
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 004ec9c0
        ;   Label: engine_mini3d.cpp_setZoom_FUN_004ec9c0
    FMUL float ptr [0x005c7e65]         ; 004ec9c4 | DAT_005c7e65
    FSTP float ptr [0x01d76ca8]         ; 004ec9ca | DAT_01d76ca8
    RET                                 ; 004ec9d0

