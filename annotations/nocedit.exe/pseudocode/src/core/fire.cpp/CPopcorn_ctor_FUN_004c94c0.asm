; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPopcorn * __cdecl core_fire_cpp_CPopcorn_ctor_FUN_004c94c0(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CPopcornVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_00545650
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c94c0
        ;   Label: core_fire.cpp_CPopcorn_ctor_FUN_004c94c0
    PUSH EDX                            ; 004c94c4
    CALL core_particle.cpp_CParticle_ctor_FUN_00545650 ; 004c94c5
        ;   XREF to: 00545650 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004c94ca
    MOV dword ptr [EAX + 0x34],0x65dcf4 ; 004c94cd | g_CPopcornVTable
    RET                                 ; 004c94d4

