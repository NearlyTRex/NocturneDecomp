; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_00488ab0(int length)
;
; Parameters:
; int              Stack[0x4]:4   length
;
; Referenced Globals:
;   int g_DashLength = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488ab0
        ;   Label: cockpit_drawsurf.cpp_setDashLength_FUN_00488ab0
    MOV [0x006703dc],EAX                ; 00488ab4 | g_DashLength
    RET                                 ; 00488ab9

