; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fire_cpp_CGlassParticle_ctor_FUN_0048cb00(undefined4 param_1)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d284 = 004ef040
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cb00
        ;   Label: core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00
    PUSH EAX                            ; 0048cb04
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cb05
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_CParticle_ctor_FUN_004ef010()
    ADD ESP,0x4                         ; 0048cb0a
    PUSH 0x5993b0                       ; 0048cb0d | g_CVectorTypeInfo_005993b0
    PUSH 0x3                            ; 0048cb12
    ADD EAX,0x78                        ; 0048cb14
    PUSH EAX                            ; 0048cb17
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0048cb18
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0048cb1d
    MOV dword ptr [EAX + -0x44],0x59d284 ; 0048cb20 | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_0059d284
    SUB EAX,0x78                        ; 0048cb27
    RET                                 ; 0048cb2a

