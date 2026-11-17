; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_isExternalRendererActive_FUN_00581f40(void)
;
;
; Referenced Globals:
;   int g_LoadedExternalDLLRenderer
;
; *****************************************************************************

section .text

    MOV EAX,[0x02c834ac]                ; 00581f40 | g_LoadedExternalDLLRenderer
        ;   Label: engine_special.cpp_isExternalRendererActive_FUN_00581f40
    RET                                 ; 00581f45

