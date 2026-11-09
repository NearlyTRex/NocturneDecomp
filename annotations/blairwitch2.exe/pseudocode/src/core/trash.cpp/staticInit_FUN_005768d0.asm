; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_staticInit_FUN_005768d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005768d0
        ;   Label: core_trash.cpp_staticInit_FUN_005768d0
    PUSH 0x1                            ; 005768d5
    PUSH 0x61e40c                       ; 005768d7
    PUSH 0x576900                       ; 005768dc
    PUSH 0x5ecd06                       ; 005768e1
    PUSH 0x26535b4                      ; 005768e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005768eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005768f0
    RET                                 ; 005768f3

