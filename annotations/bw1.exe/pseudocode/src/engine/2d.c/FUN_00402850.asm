; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402850(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00480480 at 00480729
;
; Referenced Globals:
;   undefined4 DAT_006104a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402850
        ;   Label: engine_2d.c_FUN_00402850
    MOV [0x006104a0],EAX                ; 00402854 | DAT_006104a0
    RET                                 ; 00402859

