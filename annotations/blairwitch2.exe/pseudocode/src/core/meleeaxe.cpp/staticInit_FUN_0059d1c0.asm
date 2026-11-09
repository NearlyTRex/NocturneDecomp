; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_meleeaxe_cpp_staticInit_FUN_0059d1c0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d05544                      ; 0059d1c0
        ;   Label: core_meleeaxe.cpp_staticInit_FUN_0059d1c0
    PUSH 0x1                            ; 0059d1c5
    PUSH 0x61eaa0                       ; 0059d1c7
    PUSH 0x59d1f0                       ; 0059d1cc
    PUSH 0x5ef7f1                       ; 0059d1d1
    PUSH 0x26681a4                      ; 0059d1d6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0059d1db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059d1e0
    RET                                 ; 0059d1e3

