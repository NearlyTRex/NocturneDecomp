; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSmokeParticle * core_fire.cpp_allocateSmokeParticle_FUN_004c6be0(void)
;
;
; Referenced Globals:
;   int g_SmokeParticleAllocIndex
;   CSmokeParticle[2048] g_SmokeParticlePool
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02d141e8]      ; 004c6be0 | int g_SmokeParticleAllocIndex
        ;   Label: core_fire.cpp_allocateSmokeParticle_FUN_004c6be0
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c6be6
    SUB EAX,ECX                         ; 004c6bed
    SHL EAX,0x2                         ; 004c6bef
    SUB EAX,ECX                         ; 004c6bf2
    SHL EAX,0x2                         ; 004c6bf4
    INC ECX                             ; 004c6bf7
    ADD EAX,0x2d141ec                   ; 004c6bf8 | CSmokeParticle[2048] g_SmokeParticlePool
    CMP ECX,0x800                       ; 004c6bfd
    JL 0x004c6c07                       ; 004c6c03 | LAB_004c6c07
        ;   XREF to: 004c6c07 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004c6c05
    MOV dword ptr [0x02d141e8],ECX      ; 004c6c07 | int g_SmokeParticleAllocIndex
        ;   Label: LAB_004c6c07
    RET                                 ; 004c6c0d

