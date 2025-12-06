; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBloodParticle * core_gore.cpp_FUN_004ee3f0(CBloodParticle * this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_core_particle.cpp_FUN_0065f044 = 00545680
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ee3f0
        ;   Label: core_gore.cpp_FUN_004ee3f0
    PUSH EDX                            ; 004ee3f4
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004ee3f5 | CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ee3fa
    MOV dword ptr [EAX + 0x34],0x65f044 ; 004ee3fd | void * PTR_core_particle.cpp_FUN_0065f044
    RET                                 ; 004ee404

