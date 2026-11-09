; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpark * __cdecl core_fire_cpp_CSpark_ctor_FUN_004b77b0(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b77b0
        ;   Label: core_fire.cpp_CSpark_ctor_FUN_004b77b0
    PUSH EDX                            ; 004b77b4
    CALL core_particle.cpp_FUN_00532130 ; 004b77b5
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b77ba
    MOV dword ptr [EAX + 0x3c],0x6000c4 ; 004b77bd
    RET                                 ; 004b77c4

