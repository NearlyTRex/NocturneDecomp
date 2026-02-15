; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_flushParticleList_FUN_005b79b2(void)
;
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_flushParticleList* g_APIDLL_flushParticleList
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b79b2
        ;   Label: wincore_windll.cpp_flushParticleList_FUN_005b79b2
    LEA EDX,[EDX]                       ; 005b79b8
    MOV EAX,EAX                         ; 005b79be
    CMP dword ptr [0x02d03e94],0x0      ; 005b79c0 | g_UseExternalRenderer
    JNZ 0x005b79cc                      ; 005b79c7
        ;   XREF to: 005b79cc (CONDITIONAL_JUMP)  ; LAB_005b79cc
    XOR EAX,EAX                         ; 005b79c9
    RET                                 ; 005b79cb
    CALL dword ptr [0x03f6b8e0]         ; 005b79cc | g_APIDLL_flushParticleList
        ;   Label: LAB_005b79cc
    RET                                 ; 005b79d2

