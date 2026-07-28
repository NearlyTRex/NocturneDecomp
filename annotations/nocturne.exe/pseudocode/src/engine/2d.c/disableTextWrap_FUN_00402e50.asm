; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_disableTextWrap_FUN_00402e50(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d9fd
;
; Called Functions:
;   engine_2d.c_setTextWrapEnabled_FUN_00402e30
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00402e50
        ;   Label: engine_2d.c_disableTextWrap_FUN_00402e50
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402e30 ; 00402e52
        ;   XREF to: 00402e30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextWrapEnabled_FUN_00402e30(int enabled)
    ADD ESP,0x4                         ; 00402e57
    RET                                 ; 00402e5a

