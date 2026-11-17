; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_004e0b40(void)
;
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,[0x006002c4]                ; 004e0b40 | g_AmbientLightLevel
        ;   Label: engine_light.cpp_getAmbientLightLevel_FUN_004e0b40
    RET                                 ; 004e0b45

