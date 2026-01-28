; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flamegun_cpp_staticInit_FUN_004cbcb0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int INT_02d7a7b4
;   int INT_02d7a7b8
;   int g_LightAttenuationMax
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004cbcb0
        ;   Label: core_flamegun.cpp_staticInit_FUN_004cbcb0
    MOV EDX,0x3f800000                  ; 004cbcb3
    MOV dword ptr [ESP],EDX             ; 004cbcb8
    MOV dword ptr [0x02d7a7b4],EDX      ; 004cbcbb | INT_02d7a7b4
    MOV ECX,dword ptr [ESP]             ; 004cbcc1
    SAR EDX,0x1                         ; 004cbcc4
    ADD ECX,EDX                         ; 004cbcc6
    MOV dword ptr [0x02d7a7b8],EDX      ; 004cbcc8 | INT_02d7a7b8
    MOV dword ptr [0x02d7a7bc],ECX      ; 004cbcce | g_LightAttenuationMax
    ADD ESP,0x4                         ; 004cbcd4
    LEA EAX,[EAX]                       ; 004cbcd7
    LEA EDX,[EDX]                       ; 004cbcdd

