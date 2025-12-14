; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_windll.cpp_addParticle_FUN_005b7985(void * particle_data, int particle_type)
;
; Parameters:
; void *           Stack[0x4]:4   particle_data
; int              Stack[0x8]:4   particle_type
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_addParticle* g_APIDLL_addParticle
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b7985
        ;   Label: wincore_windll.cpp_addParticle_FUN_005b7985
    LEA EDX,[EDX]                       ; 005b798b
    MOV EBX,EBX                         ; 005b798e
    CMP dword ptr [0x02d03e94],0x0      ; 005b7990 | g_UseExternalRenderer
    JNZ 0x005b799c                      ; 005b7997
        ;   XREF to: 005b799c (CONDITIONAL_JUMP)  ; LAB_005b799c
    XOR EAX,EAX                         ; 005b7999
    RET                                 ; 005b799b
    PUSH EBX                            ; 005b799c
        ;   Label: LAB_005b799c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b799d
    PUSH ECX                            ; 005b79a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b79a2
    PUSH EBX                            ; 005b79a6
    CALL dword ptr [0x03f6b8dc]         ; 005b79a7 | g_APIDLL_addParticle
    ADD ESP,0x8                         ; 005b79ad
    POP EBX                             ; 005b79b0
    RET                                 ; 005b79b1

