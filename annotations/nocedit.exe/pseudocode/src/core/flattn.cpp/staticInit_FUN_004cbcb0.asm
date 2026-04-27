; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flattn_cpp_staticInit_FUN_004cbcb0(void)
;
;
; Referenced Globals:
;   int INT_02d7a7b4
;   int g_FastSqrtMagic
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004cbcb0
        ;   Label: core_flattn.cpp_staticInit_FUN_004cbcb0
    MOV EDX,0x3f800000                  ; 004cbcb3
    MOV dword ptr [ESP],EDX             ; 004cbcb8
    MOV dword ptr [0x02d7a7b4],EDX      ; 004cbcbb | INT_02d7a7b4
    MOV ECX,dword ptr [ESP]             ; 004cbcc1
    SAR EDX,0x1                         ; 004cbcc4
    ADD ECX,EDX                         ; 004cbcc6
    MOV dword ptr [0x02d7a7b8],EDX      ; 004cbcc8 | g_FastSqrtMagic
    MOV dword ptr [0x02d7a7bc],ECX      ; 004cbcce | g_FastInvSqrtMagic
    ADD ESP,0x4                         ; 004cbcd4
    LEA EAX,[EAX]                       ; 004cbcd7
    LEA EDX,[EDX]                       ; 004cbcdd

