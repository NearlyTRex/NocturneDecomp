; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_005054c0(void)
;
;
; Referenced Globals:
;   int g_AmbientLightLevel = 0x8000
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067cfc8]                ; 005054c0 | g_AmbientLightLevel
        ;   Label: engine_light.cpp_getAmbientLightLevel_FUN_005054c0
    RET                                 ; 005054c5

