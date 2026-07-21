; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setTextColor_FUN_00402e70(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 at 0045da09
;
; Referenced Globals:
;   undefined4 DAT_005acaa8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402e70
        ;   Label: engine_2d.c_setTextColor_FUN_00402e70
    MOV [0x005acaa8],EAX                ; 00402e74 | DAT_005acaa8
    RET                                 ; 00402e79

