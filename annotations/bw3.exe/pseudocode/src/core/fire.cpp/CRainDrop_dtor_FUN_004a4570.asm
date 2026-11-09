; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_004a4570(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4570
        ;   Label: core_fire.cpp_CRainDrop_dtor_FUN_004a4570
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4572
    PUSH EDX                            ; 004a4576
    CALL core_particle.cpp_FUN_00509e30 ; 004a4577
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a457c
    RET                                 ; 004a457f

