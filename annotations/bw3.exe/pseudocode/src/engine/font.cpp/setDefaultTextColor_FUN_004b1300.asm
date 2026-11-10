; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setDefaultTextColor_FUN_004b1300(int text_color)
;
; Parameters:
; int              Stack[0x4]:4   text_color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 at 00469be4
;
; Referenced Globals:
;   undefined4 DAT_01d1ad74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b1300
        ;   Label: engine_font.cpp_setDefaultTextColor_FUN_004b1300
    MOV [0x01d1ad74],EAX                ; 004b1304 | DAT_01d1ad74
    RET                                 ; 004b1309

