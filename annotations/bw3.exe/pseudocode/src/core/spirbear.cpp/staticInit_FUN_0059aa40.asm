; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spirbear_cpp_staticInit_FUN_0059aa40(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1dd6a44                      ; 0059aa40
        ;   Label: core_spirbear.cpp_staticInit_FUN_0059aa40
    PUSH 0x1                            ; 0059aa45
    PUSH 0x60744c                       ; 0059aa47
    PUSH 0x59aa70                       ; 0059aa4c
    PUSH 0x5d9af8                       ; 0059aa51
    PUSH 0x2d24c10                      ; 0059aa56
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0059aa5b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0059aa60
    RET                                 ; 0059aa63

