; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_light.cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier, int specular_multiplier)
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 00505510
        ;   Label: engine_light.cpp_setLightingMultipliers_FUN_00505510
    MOV [0x0067cfd0],EAX                ; 00505514 | int g_DiffuseLightMultiplier
    MOV EAX,dword ptr [ESP + 0x8]       ; 00505519
    MOV [0x0067cfd4],EAX                ; 0050551d | int g_SpecularLightMultiplier
    RET                                 ; 00505522

