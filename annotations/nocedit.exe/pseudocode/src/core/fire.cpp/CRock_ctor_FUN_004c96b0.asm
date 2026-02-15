; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_004c96b0(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CRockVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c96b0
        ;   Label: core_fire.cpp_CRock_ctor_FUN_004c96b0
    PUSH EDX                            ; 004c96b4
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c96b5
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004c96ba
    MOV dword ptr [EAX + 0x34],0x65dd54 ; 004c96bd | g_CRockVTable
    RET                                 ; 004c96c4

