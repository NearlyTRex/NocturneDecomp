; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004b0a30(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CBloodParticleVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0a30
        ;   Label: core_gore.cpp_CBloodParticle_ctor_FUN_004b0a30
    PUSH EDX                            ; 004b0a34
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 004b0a35
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b0a3a
    MOV dword ptr [EAX + 0x34],0x59e4f4 ; 004b0a3d | g_CBloodParticleVTable
    RET                                 ; 004b0a44

