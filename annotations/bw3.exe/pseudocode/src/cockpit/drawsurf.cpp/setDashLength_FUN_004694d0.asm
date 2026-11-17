; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_004694d0(int length)
;
; Parameters:
; int              Stack[0x4]:4   length
;
; Referenced Globals:
;   int g_INT_005f2aec = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004694d0
        ;   Label: cockpit_drawsurf.cpp_setDashLength_FUN_004694d0
    MOV [0x005f2aec],EAX                ; 004694d4 | g_INT_005f2aec
    RET                                 ; 004694d9

