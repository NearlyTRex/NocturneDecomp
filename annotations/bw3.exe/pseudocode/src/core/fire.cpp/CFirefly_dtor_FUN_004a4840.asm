; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_dtor_FUN_004a4840(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4840
        ;   Label: core_fire.cpp_CFirefly_dtor_FUN_004a4840
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4842
    PUSH EDX                            ; 004a4846
    CALL core_particle.cpp_FUN_00509e30 ; 004a4847
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a484c
    RET                                 ; 004a484f

