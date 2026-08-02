; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_ctor_FUN_0048cbb0(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CFireballVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbb0
        ;   Label: core_fire.cpp_CFireball_ctor_FUN_0048cbb0
    PUSH EDX                            ; 0048cbb4
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cbb5
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048cbba
    MOV dword ptr [EAX + 0x34],0x59d2c4 ; 0048cbbd | g_CFireballVTable
    RET                                 ; 0048cbc4

