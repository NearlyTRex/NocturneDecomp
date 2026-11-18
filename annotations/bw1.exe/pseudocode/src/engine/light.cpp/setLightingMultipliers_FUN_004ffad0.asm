; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004ffad0(int diffuse_multiplier,int specular_multiplier)
;
; Parameters:
; int              Stack[0x4]:4   diffuse_multiplier
; int              Stack[0x8]:4   specular_multiplier
;
; Referenced Globals:
;   int g_DiffuseLightMultiplier = 0x10000
;   int g_SpecularLightMultiplier = 0x10000
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffad0
        ;   Label: engine_light.cpp_setLightingMultipliers_FUN_004ffad0
    MOV [0x0061f318],EAX                ; 004ffad4 | g_DiffuseLightMultiplier
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ffad9
    MOV [0x0061f31c],EAX                ; 004ffadd | g_SpecularLightMultiplier
    RET                                 ; 004ffae2

