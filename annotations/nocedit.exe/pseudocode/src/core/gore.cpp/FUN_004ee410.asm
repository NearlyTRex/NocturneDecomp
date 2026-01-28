; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBloodParticle * __cdecl core_gore_cpp_FUN_004ee410(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00545670
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004ee410
        ;   Label: core_gore.cpp_FUN_004ee410
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ee412
    PUSH EDX                            ; 004ee416
    CALL core_particle.cpp_CParticle_dtor_FUN_00545670 ; 004ee417
        ;   XREF to: 00545670 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00545670(CParticle * this_ptr)
    ADD ESP,0x8                         ; 004ee41c
    RET                                 ; 004ee41f

