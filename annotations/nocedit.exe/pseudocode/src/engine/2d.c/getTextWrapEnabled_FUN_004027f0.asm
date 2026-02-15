; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getTextWrapEnabled_FUN_004027f0(void)
;
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004893ab
;   core_actor.cpp_CActorPropertyList_render_FUN_0040e850 at 0040e861
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,[0x0066df74]                ; 004027f0 | g_TextWrapEnabled
        ;   Label: engine_2d.c_getTextWrapEnabled_FUN_004027f0
    RET                                 ; 004027f5

