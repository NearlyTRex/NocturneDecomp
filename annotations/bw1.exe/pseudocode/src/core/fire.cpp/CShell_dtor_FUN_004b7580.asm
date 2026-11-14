; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_dtor_FUN_004b7580(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7580
        ;   Label: core_fire.cpp_CShell_dtor_FUN_004b7580
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7582
    PUSH EDX                            ; 004b7586
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004b7587
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b758c
    RET                                 ; 004b758f

