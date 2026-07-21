; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_setDefaultTextColor_FUN_00491150(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d804
;
; Referenced Globals:
;   undefined4 DAT_01c70f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00491150
        ;   Label: engine_font.cpp_setDefaultTextColor_FUN_00491150
    MOV [0x01c70f70],EAX                ; 00491154 | DAT_01c70f70
    RET                                 ; 00491159

