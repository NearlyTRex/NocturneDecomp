; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpark * core_fire.cpp_CSpark_ctor_FUN_004c9710(CSpark * this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CSparkVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c9710
        ;   Label: core_fire.cpp_CSpark_ctor_FUN_004c9710
    PUSH EDX                            ; 004c9714
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c9715
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004c971a
    MOV dword ptr [EAX + 0x34],0x65dd94 ; 004c971d | g_CSparkVTable
    RET                                 ; 004c9724

