; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_0045d100(float threshold)
;
; Parameters:
; float            Stack[0x4]:4   threshold
;
; Referenced Globals:
;   float g_FLOAT_005ae6f8 = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d100
        ;   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_0045d100
    MOV [0x005ae6f8],EAX                ; 0045d104 | g_FLOAT_005ae6f8
    RET                                 ; 0045d109

