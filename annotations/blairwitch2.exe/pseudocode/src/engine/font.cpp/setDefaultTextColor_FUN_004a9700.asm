; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setDefaultTextColor_FUN_004a9700(int text_color)
;
; Parameters:
; int              Stack[0x4]:4   text_color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 at 00468014
;
; Referenced Globals:
;   undefined4 DAT_01cb0254
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9700
        ;   Label: engine_font.cpp_setDefaultTextColor_FUN_004a9700
    MOV [0x01cb0254],EAX                ; 004a9704 | DAT_01cb0254
    RET                                 ; 004a9709

