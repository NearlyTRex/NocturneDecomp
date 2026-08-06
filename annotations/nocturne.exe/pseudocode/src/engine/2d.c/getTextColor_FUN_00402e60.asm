; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_getTextColor_FUN_00402e60(void)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045d9f4
;
; Referenced Globals:
;   undefined4 g_ResolutionTable[7].height
;
; *****************************************************************************

section .text

    MOV EAX,[0x005acaa8]                ; 00402e60 | g_ResolutionTable[7].height
        ;   Label: engine_2d.c_getTextColor_FUN_00402e60
    RET                                 ; 00402e65

