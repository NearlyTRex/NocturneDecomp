; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402800(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; XREF[4]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489353
;   core_actor.cpp_CActorPropertyList_render_FUN_0040e850 at 0040e86f
;   engine_2d.c_disableTextWrap_FUN_00402820 at 00402822
;   engine_2d.c_enableTextWrap_FUN_00402810 at 00402812
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402800
        ;   Label: engine_2d.c_setTextWrapEnabled_FUN_00402800
    MOV [0x0066df74],EAX                ; 00402804 | g_TextWrapEnabled
    RET                                 ; 00402809

