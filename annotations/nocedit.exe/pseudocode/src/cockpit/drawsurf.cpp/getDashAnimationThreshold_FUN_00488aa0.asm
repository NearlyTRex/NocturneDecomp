; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl cockpit_drawsurf_cpp_getDashAnimationThreshold_FUN_00488aa0(void)
;
;
; Referenced Globals:
;   float g_DashAnimationThreshold = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,[0x006703e0]                ; 00488aa0 | g_DashAnimationThreshold
        ;   Label: cockpit_drawsurf.cpp_getDashAnimationThreshold_FUN_00488aa0
    RET                                 ; 00488aa5

