; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_staticInit_FUN_004a6770(void)
;
;
; Referenced Globals:
;   float g_FastSqrtMagicSeedOne
;   int g_FastSqrtMagic
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004a6770
        ;   Label: core_flattn.cpp_staticInit_FUN_004a6770
    MOV EDX,0x3f800000                  ; 004a6773
    MOV dword ptr [ESP],EDX             ; 004a6778
    MOV dword ptr [0x01caf5b0],EDX      ; 004a677b | g_FastSqrtMagicSeedOne
    MOV ECX,dword ptr [ESP]             ; 004a6781
    SAR EDX,0x1                         ; 004a6784
    ADD ECX,EDX                         ; 004a6786
    MOV dword ptr [0x01caf5b4],EDX      ; 004a6788 | g_FastSqrtMagic
    MOV dword ptr [0x01caf5b8],ECX      ; 004a678e | g_FastInvSqrtMagic
    ADD ESP,0x4                         ; 004a6794
    LEA EAX,[EAX]                       ; 004a6797
    LEA EDX,[EDX]                       ; 004a679d

