; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_staticInit_FUN_005a4a20(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a4a20
        ;   Label: core_union.cpp_staticInit_FUN_005a4a20
    PUSH 0x1                            ; 005a4a25
    PUSH 0x61eb70                       ; 005a4a27
    PUSH 0x5a4a50                       ; 005a4a2c
    PUSH 0x5f041a                       ; 005a4a31
    PUSH 0x2668604                      ; 005a4a36
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a4a3b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a4a40
    RET                                 ; 005a4a43

