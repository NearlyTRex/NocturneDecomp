; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_staticInit_FUN_00487d80(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bdc5c                       ; 00487d80
        ;   Label: core_enemy.cpp_staticInit_FUN_00487d80
    PUSH 0xa                            ; 00487d85
    PUSH 0x6141a0                       ; 00487d87
    PUSH 0x0                            ; 00487d8c
    PUSH 0x5d2d21                       ; 00487d8e
    PUSH 0x1c264a8                      ; 00487d93
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00487d98
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00487d9d
    RET                                 ; 00487da0

