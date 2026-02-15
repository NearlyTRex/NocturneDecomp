; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_disableTextWrap_FUN_00402820(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004893bd
;
; Called Functions:
;   engine_2d.c_setTextWrapEnabled_FUN_00402800
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00402820
        ;   Label: engine_2d.c_disableTextWrap_FUN_00402820
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402800 ; 00402822
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
    ADD ESP,0x4                         ; 00402827
    RET                                 ; 0040282a

