; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextWrapEnabled_FUN_00402e30(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d993
;   engine_2d.c_disableTextWrap_FUN_00402e50 at 00402e52
;
; Referenced Globals:
;   int INT_005acaa4 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402e30
        ;   Label: engine_2d.c_setTextWrapEnabled_FUN_00402e30
    MOV [0x005acaa4],EAX                ; 00402e34 | INT_005acaa4
    RET                                 ; 00402e39

