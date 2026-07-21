; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CGlassParticle_dtor_FUN_0048cb30(int param_1)
;
;
; Called Functions:
;   core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
;   core_particle.cpp_CParticle_dtor_FUN_004ef030
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cb30
        ;   Label: core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30
    PUSH 0x0                            ; 0048cb34
    ADD EAX,0x78                        ; 0048cb36
    PUSH EAX                            ; 0048cb39
    CALL core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0 ; 0048cb3a
        ;   XREF to: 004389e0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0()
    ADD ESP,0x8                         ; 0048cb3f
    PUSH 0x1                            ; 0048cb42
    SUB EAX,0x78                        ; 0048cb44
    PUSH EAX                            ; 0048cb47
    CALL core_particle.cpp_CParticle_dtor_FUN_004ef030 ; 0048cb48
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_dtor_FUN_004ef030()
    ADD ESP,0x8                         ; 0048cb4d
    RET                                 ; 0048cb50

