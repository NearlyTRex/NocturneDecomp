; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402810(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_00469b40 at 00469d73
;   engine_2d.c_FUN_00402830 at 00402832
;
; Referenced Globals:
;   undefined4 DAT_005f076c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402810
        ;   Label: engine_2d.c_FUN_00402810
    MOV [0x005f076c],EAX                ; 00402814 | DAT_005f076c
    RET                                 ; 00402819

