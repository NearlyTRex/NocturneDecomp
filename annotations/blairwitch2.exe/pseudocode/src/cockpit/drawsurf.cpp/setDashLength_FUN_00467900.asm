; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_00467900(int length)
;
; Parameters:
; int              Stack[0x4]:4   length
;
; Referenced Globals:
;   int g_INT_0060b270 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00467900
        ;   Label: cockpit_drawsurf.cpp_setDashLength_FUN_00467900
    MOV [0x0060b270],EAX                ; 00467904 | g_INT_0060b270
    RET                                 ; 00467909

