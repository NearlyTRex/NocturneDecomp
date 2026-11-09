; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004e2640(int diffuse_multiplier,int specular_multiplier)
;
; Parameters:
; int              Stack[0x4]:4   diffuse_multiplier
; int              Stack[0x8]:4   specular_multiplier
;
; Referenced Globals:
;   undefined4 DAT_00617e48
;   undefined4 DAT_00617e4c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e2640
        ;   Label: engine_light.cpp_setLightingMultipliers_FUN_004e2640
    MOV [0x00617e48],EAX                ; 004e2644 | DAT_00617e48
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e2649
    MOV [0x00617e4c],EAX                ; 004e264d | DAT_00617e4c
    RET                                 ; 004e2652

