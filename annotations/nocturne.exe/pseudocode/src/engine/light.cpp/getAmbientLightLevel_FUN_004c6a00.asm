; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_004c6a00(void)
;
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,[0x005bacd0]                ; 004c6a00 | g_AmbientLightLevel
        ;   Label: engine_light.cpp_getAmbientLightLevel_FUN_004c6a00
    RET                                 ; 004c6a05

