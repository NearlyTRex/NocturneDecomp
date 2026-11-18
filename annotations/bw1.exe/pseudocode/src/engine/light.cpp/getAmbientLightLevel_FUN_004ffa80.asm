; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_004ffa80(void)
;
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061f310]                ; 004ffa80 | g_AmbientLightLevel
        ;   Label: engine_light.cpp_getAmbientLightLevel_FUN_004ffa80
    RET                                 ; 004ffa85

