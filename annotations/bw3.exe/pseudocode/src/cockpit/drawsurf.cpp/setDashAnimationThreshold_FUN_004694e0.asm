; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_004694e0(float threshold)
;
; Parameters:
; float            Stack[0x4]:4   threshold
;
; Referenced Globals:
;   float g_FLOAT_005f2af0 = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004694e0
        ;   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_004694e0
    MOV [0x005f2af0],EAX                ; 004694e4 | g_FLOAT_005f2af0
    RET                                 ; 004694e9

