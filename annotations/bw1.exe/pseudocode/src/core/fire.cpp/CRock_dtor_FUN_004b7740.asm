; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_dtor_FUN_004b7740(CRock *this_ptr,uint flags)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7740
        ;   Label: core_fire.cpp_CRock_dtor_FUN_004b7740
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7742
    PUSH EDX                            ; 004b7746
    CALL core_particle.cpp_FUN_00532150 ; 004b7747
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b774c
    RET                                 ; 004b774f

