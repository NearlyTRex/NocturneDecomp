; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004a4550(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a4550
        ;   Label: core_fire.cpp_CRainDrop_ctor_FUN_004a4550
    PUSH EDX                            ; 004a4554
    CALL core_particle.cpp_FUN_00509e10 ; 004a4555
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e10(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004a455a
    MOV dword ptr [EAX + 0x3c],0x5df914 ; 004a455d
    RET                                 ; 004a4564

