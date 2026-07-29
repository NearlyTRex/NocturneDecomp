; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setLightingMultipliers_FUN_004c6a50(int diffuse_multiplier,int specular_multiplier)
;
; Parameters:
; int              Stack[0x4]:4   diffuse_multiplier
; int              Stack[0x8]:4   specular_multiplier
;
; Referenced Globals:
;   undefined4 DAT_005bacd8
;   undefined4 DAT_005bacdc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c6a50
        ;   Label: engine_light.cpp_setLightingMultipliers_FUN_004c6a50
    MOV [0x005bacd8],EAX                ; 004c6a54 | DAT_005bacd8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c6a59
    MOV [0x005bacdc],EAX                ; 004c6a5d | DAT_005bacdc
    RET                                 ; 004c6a62

