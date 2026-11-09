; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRainDrop * __cdecl core_fire_cpp_CRainDrop_ctor_FUN_004b7500(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_particle.cpp_FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7500
        ;   Label: core_fire.cpp_CRainDrop_ctor_FUN_004b7500
    PUSH EDX                            ; 004b7504
    CALL core_particle.cpp_FUN_00532130 ; 004b7505
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_FUN_00532130(CParticle * this_ptr)
    ADD ESP,0x4                         ; 004b750a
    MOV dword ptr [EAX + 0x3c],0x5fffc4 ; 004b750d
    RET                                 ; 004b7514

