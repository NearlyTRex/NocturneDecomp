; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_isExternalRendererActive_FUN_005b7200(void)
;
;
; Referenced Globals:
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f6b978]                ; 005b7200 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_isExternalRendererActive_FUN_005b7200
    RET                                 ; 005b7205

