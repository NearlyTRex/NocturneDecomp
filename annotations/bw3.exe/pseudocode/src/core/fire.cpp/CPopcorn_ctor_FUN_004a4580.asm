; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004a4580(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4580
        ;   Label: core_fire.cpp_CPopcorn_ctor_FUN_004a4580
    PUSH EDX                            ; 004a4584
    CALL core_particle.cpp_FUN_00509e10 ; 004a4585
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a458a
    MOV dword ptr [EAX + 0x3c],0x5df934 ; 004a458d
    RET                                 ; 004a4594

