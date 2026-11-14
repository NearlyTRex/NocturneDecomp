; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0047fe10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00612550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047fe10
        ;   Label: cockpit_drawsurf.cpp_FUN_0047fe10
    MOV [0x00612550],EAX                ; 0047fe14 | DAT_00612550
    RET                                 ; 0047fe19

