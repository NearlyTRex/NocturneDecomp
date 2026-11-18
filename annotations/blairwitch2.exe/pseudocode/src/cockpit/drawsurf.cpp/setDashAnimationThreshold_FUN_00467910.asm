; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_00467910(float threshold)
;
; Parameters:
; float            Stack[0x4]:4   threshold
;
; Referenced Globals:
;   float g_FLOAT_0060b274 = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00467910
        ;   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00467910
    MOV [0x0060b274],EAX                ; 00467914 | g_FLOAT_0060b274
    RET                                 ; 00467919

