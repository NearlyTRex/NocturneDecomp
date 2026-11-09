; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_dtor_FUN_004b77d0(CSpark *this_ptr,uint flags)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b77d0
        ;   Label: core_fire.cpp_CSpark_dtor_FUN_004b77d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b77d2
    PUSH EDX                            ; 004b77d6
    CALL core_particle.cpp_FUN_00532150 ; 004b77d7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b77dc
    RET                                 ; 004b77df

