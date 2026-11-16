; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_0047fe10(int length)
;
; Parameters:
; int              Stack[0x4]:4   length
;
; Referenced Globals:
;   undefined4 DAT_00612550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047fe10
        ;   Label: cockpit_drawsurf.cpp_setDashLength_FUN_0047fe10
    MOV [0x00612550],EAX                ; 0047fe14 | DAT_00612550
    RET                                 ; 0047fe19

