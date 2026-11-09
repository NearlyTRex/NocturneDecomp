; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004694e0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2af0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004694e0
        ;   Label: cockpit_drawsurf.cpp_FUN_004694e0
    MOV [0x005f2af0],EAX                ; 004694e4 | DAT_005f2af0
    RET                                 ; 004694e9

