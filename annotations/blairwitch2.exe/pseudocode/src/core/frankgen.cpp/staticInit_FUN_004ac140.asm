; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_frankgen_cpp_staticInit_FUN_004ac140(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 004ac140
        ;   Label: core_frankgen.cpp_staticInit_FUN_004ac140
    PUSH 0x1                            ; 004ac145
    PUSH 0x6163b4                       ; 004ac147
    PUSH 0x4ac170                       ; 004ac14c
    PUSH 0x5d6a71                       ; 004ac151
    PUSH 0x1cb05e4                      ; 004ac156
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004ac15b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ac160
    RET                                 ; 004ac163

