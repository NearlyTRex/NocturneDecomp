; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0(float threshold)
;
; Parameters:
; float            Stack[0x4]:4   threshold
;
; Referenced Globals:
;   float g_DashAnimationThreshold = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488ac0
        ;   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0
    MOV [0x006703e0],EAX                ; 00488ac4 | g_DashAnimationThreshold
    RET                                 ; 00488ac9

