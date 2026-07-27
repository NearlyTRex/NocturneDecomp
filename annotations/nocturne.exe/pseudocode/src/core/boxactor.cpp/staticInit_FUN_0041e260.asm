; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_staticInit_FUN_0041e260(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBoxActor_005797dd
;   TerminatedCString s_CLightActor_005797e7
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0041e260
        ;   Label: core_boxactor.cpp_staticInit_FUN_0041e260
    PUSH 0xf                            ; 0041e265
    PUSH 0x5ad09c                       ; 0041e267
    PUSH 0x41e2d0                       ; 0041e26c
    PUSH 0x5797dd                       ; 0041e271 | = "CBoxActor"
    PUSH 0x764800                       ; 0041e276
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041e27b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041e280
    PUSH 0x59ac90                       ; 0041e283
    PUSH 0x8                            ; 0041e288
    PUSH 0x76483c                       ; 0041e28a
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0041e28f
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0041e294
    PUSH 0x5ad08c                       ; 0041e297
    CALL crt_unknown.c_FUN_00564bb0     ; 0041e29c
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564bb0()
    ADD ESP,0x4                         ; 0041e2a1
    PUSH 0x764800                       ; 0041e2a4
    PUSH 0x2                            ; 0041e2a9
    PUSH 0x5ad0a0                       ; 0041e2ab
    PUSH 0x41f2e0                       ; 0041e2b0
    PUSH 0x5797e7                       ; 0041e2b5 | = "CLightActor"
    PUSH 0x764a9c                       ; 0041e2ba
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041e2bf
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041e2c4
    RET                                 ; 0041e2c7

