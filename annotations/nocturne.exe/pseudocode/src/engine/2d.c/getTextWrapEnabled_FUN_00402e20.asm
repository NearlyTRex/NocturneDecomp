; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_2d_c_getTextWrapEnabled_FUN_00402e20(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d9eb
;
; Referenced Globals:
;   undefined4 DAT_005acaa4
;
; *****************************************************************************

section .text

    MOV EAX,[0x005acaa4]                ; 00402e20 | DAT_005acaa4
        ;   Label: engine_2d.c_getTextWrapEnabled_FUN_00402e20
    RET                                 ; 00402e25

