; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_staticInit_FUN_004bf740(void)
;
;
; Referenced Globals:
;   float g_FastSqrtMagicSeedOne
;   int g_FastSqrtMagic
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004bf740
        ;   Label: core_flattn.cpp_staticInit_FUN_004bf740
    MOV EDX,0x3f800000                  ; 004bf743
    MOV dword ptr [ESP],EDX             ; 004bf748
    MOV dword ptr [0x01cc8048],EDX      ; 004bf74b | g_FastSqrtMagicSeedOne
    MOV ECX,dword ptr [ESP]             ; 004bf751
    SAR EDX,0x1                         ; 004bf754
    ADD ECX,EDX                         ; 004bf756
    MOV dword ptr [0x01cc804c],EDX      ; 004bf758 | g_FastSqrtMagic
    MOV dword ptr [0x01cc8050],ECX      ; 004bf75e | g_FastInvSqrtMagic
    ADD ESP,0x4                         ; 004bf764
    LEA EAX,[EAX]                       ; 004bf767
    LEA EDX,[EDX]                       ; 004bf76d

