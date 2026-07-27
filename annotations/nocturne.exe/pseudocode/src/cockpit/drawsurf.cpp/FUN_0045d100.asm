; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045d100(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ae6f8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d100
        ;   Label: cockpit_drawsurf.cpp_FUN_0045d100
    MOV [0x005ae6f8],EAX                ; 0045d104 | DAT_005ae6f8
    RET                                 ; 0045d109

