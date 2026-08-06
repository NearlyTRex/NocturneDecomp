; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextColor_FUN_00402e70(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045da09
;
; Referenced Globals:
;   undefined4 g_ResolutionTable[7].height
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402e70
        ;   Label: engine_2d.c_setTextColor_FUN_00402e70
    MOV [0x005acaa8],EAX                ; 00402e74 | g_ResolutionTable[7].height
    RET                                 ; 00402e79

