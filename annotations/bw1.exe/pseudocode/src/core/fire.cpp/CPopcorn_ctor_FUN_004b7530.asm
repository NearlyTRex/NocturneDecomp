; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004b7530(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7530
        ;   Label: core_fire.cpp_CPopcorn_ctor_FUN_004b7530
    PUSH EDX                            ; 004b7534
    CALL core_particle.cpp_FUN_00532130 ; 004b7535
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b753a
    MOV dword ptr [EAX + 0x3c],0x5fffe4 ; 004b753d
    RET                                 ; 004b7544

