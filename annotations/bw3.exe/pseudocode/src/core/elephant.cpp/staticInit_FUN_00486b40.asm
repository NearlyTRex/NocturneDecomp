; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_staticInit_FUN_00486b40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 00486b40
        ;   Label: core_elephant.cpp_staticInit_FUN_00486b40
    PUSH 0x1                            ; 00486b45
    PUSH 0x5fb9d4                       ; 00486b47
    PUSH 0x486b70                       ; 00486b4c
    PUSH 0x5bd95c                       ; 00486b51
    PUSH 0x1c5bb98                      ; 00486b56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 00486b5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00486b60
    RET                                 ; 00486b63

