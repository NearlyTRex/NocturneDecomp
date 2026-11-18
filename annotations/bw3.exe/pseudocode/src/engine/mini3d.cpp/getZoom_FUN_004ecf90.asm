; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl engine_mini3d_cpp_getZoom_FUN_004ecf90(void)
;
;
; Referenced Globals:
;   float g_FLOAT_005c7e6d = 0.05555556
;   float g_FLOAT_01d76ca8
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ecf90
        ;   Label: engine_mini3d.cpp_getZoom_FUN_004ecf90
    FLD float ptr [0x01d76ca8]          ; 004ecf93 | g_FLOAT_01d76ca8
    FMUL float ptr [0x005c7e6d]         ; 004ecf99 | g_FLOAT_005c7e6d
    FSTP float ptr [ESP]                ; 004ecf9f
    MOV EAX,dword ptr [ESP]             ; 004ecfa2
    ADD ESP,0x4                         ; 004ecfa5
    RET                                 ; 004ecfa8

