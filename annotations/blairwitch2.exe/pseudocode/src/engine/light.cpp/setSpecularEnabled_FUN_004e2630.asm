; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setSpecularEnabled_FUN_004e2630(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   undefined4 DAT_00617e44
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2630
        ;   Label: engine_light.cpp_setSpecularEnabled_FUN_004e2630
    MOV [0x00617e44],EAX                ; 004e2634 | DAT_00617e44
    RET                                 ; 004e2639

