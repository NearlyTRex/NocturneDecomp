; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_staticInit_FUN_0048ee50(void)
;
;
; Referenced Globals:
;   float g_FastSqrtMagicSeedOne
;   int g_FastSqrtMagic
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048ee50
        ;   Label: core_flattn.cpp_staticInit_FUN_0048ee50
    MOV EDX,0x3f800000                  ; 0048ee53
    MOV dword ptr [ESP],EDX             ; 0048ee58
    MOV dword ptr [0x01c70708],EDX      ; 0048ee5b | g_FastSqrtMagicSeedOne
    MOV ECX,dword ptr [ESP]             ; 0048ee61
    SAR EDX,0x1                         ; 0048ee64
    ADD ECX,EDX                         ; 0048ee66
    MOV dword ptr [0x01c7070c],EDX      ; 0048ee68 | g_FastSqrtMagic
    MOV dword ptr [0x01c70710],ECX      ; 0048ee6e | g_FastInvSqrtMagic
    ADD ESP,0x4                         ; 0048ee74
    LEA EAX,[EAX]                       ; 0048ee77
    LEA EDX,[EDX]                       ; 0048ee7d

