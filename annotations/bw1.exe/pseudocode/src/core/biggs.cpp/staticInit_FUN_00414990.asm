; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_biggs_cpp_staticInit_FUN_00414990(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 00414990
        ;   Label: core_biggs.cpp_staticInit_FUN_00414990
    PUSH 0x1                            ; 00414995
    PUSH 0x6109cc                       ; 00414997
    PUSH 0x4149c0                       ; 0041499c
    PUSH 0x5d3c00                       ; 004149a1
    PUSH 0x7c38cc                       ; 004149a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004149ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004149b0
    RET                                 ; 004149b3

