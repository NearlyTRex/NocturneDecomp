; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_0047fe20(float threshold)
;
; Parameters:
; float            Stack[0x4]:4   threshold
;
; Referenced Globals:
;   float g_FLOAT_00612554 = 0.1000000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047fe20
        ;   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_0047fe20
    MOV [0x00612554],EAX                ; 0047fe24 | g_FLOAT_00612554
    RET                                 ; 0047fe29

