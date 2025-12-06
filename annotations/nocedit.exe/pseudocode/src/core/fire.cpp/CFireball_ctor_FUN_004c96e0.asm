; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CFireball * core_fire.cpp_CFireball_ctor_FUN_004c96e0(CFireball * this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CFireballVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c96e0
        ;   Label: core_fire.cpp_CFireball_ctor_FUN_004c96e0
    PUSH EDX                            ; 004c96e4
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c96e5 | CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004c96ea
    MOV dword ptr [EAX + 0x34],0x65dd74 ; 004c96ed | CParticle_vtable g_CFireballVTable
    RET                                 ; 004c96f4

