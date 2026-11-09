; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_0049ec30(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00510dd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ec30
        ;   Label: core_fire.cpp_CRainDrop_ctor_FUN_0049ec30
    PUSH EDX                            ; 0049ec34
    CALL core_particle.cpp_FUN_00510dd0 ; 0049ec35
        ;   XREF to: 00510dd0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00510dd0(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0049ec3a
    MOV dword ptr [EAX + 0x3c],0x5f6514 ; 0049ec3d
    RET                                 ; 0049ec44

