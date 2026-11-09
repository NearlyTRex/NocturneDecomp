; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402850(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00467f70 at 00468219
;
; Referenced Globals:
;   undefined4 DAT_00609370
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00402850
        ;   Label: engine_2d.c_FUN_00402850
    MOV [0x00609370],EAX                ; 00402854 | DAT_00609370
    RET                                 ; 00402859

