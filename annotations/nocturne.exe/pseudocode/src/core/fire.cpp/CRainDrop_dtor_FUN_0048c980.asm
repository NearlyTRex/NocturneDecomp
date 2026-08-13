; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_dtor_FUN_0048c980(CRainDrop *this_ptr,uint flags)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0048c980
        ;   Label: core_fire.cpp_CRainDrop_dtor_FUN_0048c980
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048c982
    PUSH EDX                            ; 0048c986
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048c987
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_004ef030(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048c98c
    RET                                 ; 0048c98f

