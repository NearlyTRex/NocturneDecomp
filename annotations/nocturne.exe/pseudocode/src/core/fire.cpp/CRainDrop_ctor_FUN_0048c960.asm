; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_0048c960(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CRainDropVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048c960
        ;   Label: core_fire.cpp_CRainDrop_ctor_FUN_0048c960
    PUSH EDX                            ; 0048c964
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048c965
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048c96a
    MOV dword ptr [EAX + 0x34],0x59d224 ; 0048c96d | g_CRainDropVTable
    RET                                 ; 0048c974

