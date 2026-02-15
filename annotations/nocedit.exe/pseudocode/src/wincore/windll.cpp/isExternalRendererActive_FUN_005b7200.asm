; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_isExternalRendererActive_FUN_005b7200(void)
;
;
; Referenced Globals:
;   int g_ExternalRendererActive
;
; *****************************************************************************

section .text

    MOV EAX,[0x03f6b978]                ; 005b7200 | g_ExternalRendererActive
        ;   Label: wincore_windll.cpp_isExternalRendererActive_FUN_005b7200
    RET                                 ; 005b7205

