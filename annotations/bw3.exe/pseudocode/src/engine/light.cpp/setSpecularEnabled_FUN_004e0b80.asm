; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setSpecularEnabled_FUN_004e0b80(int enabled)
;
; Parameters:
; int              Stack[0x4]:4   enabled
;
; Referenced Globals:
;   int g_SpecularEnabled = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0b80
        ;   Label: engine_light.cpp_setSpecularEnabled_FUN_004e0b80
    MOV [0x006002c8],EAX                ; 004e0b84 | g_SpecularEnabled
    RET                                 ; 004e0b89

