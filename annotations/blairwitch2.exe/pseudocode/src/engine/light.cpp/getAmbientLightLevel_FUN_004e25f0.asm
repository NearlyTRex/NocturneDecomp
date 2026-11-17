; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_004e25f0(void)
;
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,[0x00617e40]                ; 004e25f0 | g_AmbientLightLevel
        ;   Label: engine_light.cpp_getAmbientLightLevel_FUN_004e25f0
    RET                                 ; 004e25f5

