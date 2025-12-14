; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_light.cpp_setSpecularEnabled_FUN_00505500(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   int g_SpecularEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00505500
        ;   Label: engine_light.cpp_setSpecularEnabled_FUN_00505500
    MOV [0x0067cfcc],EAX                ; 00505504 | g_SpecularEnabled
    RET                                 ; 00505509

