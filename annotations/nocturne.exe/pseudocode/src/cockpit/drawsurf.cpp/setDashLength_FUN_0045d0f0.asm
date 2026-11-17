; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_0045d0f0(int length)
;
; Parameters:
; int              Stack[0x4]:4   length
;
; Referenced Globals:
;   int g_INT_005ae6f4 = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d0f0
        ;   Label: cockpit_drawsurf.cpp_setDashLength_FUN_0045d0f0
    MOV [0x005ae6f4],EAX                ; 0045d0f4 | g_INT_005ae6f4
    RET                                 ; 0045d0f9

