; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_staticInit_FUN_005763f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005763f0
        ;   Label: core_trap.cpp_staticInit_FUN_005763f0
    PUSH 0x1                            ; 005763f5
    PUSH 0x61e3f8                       ; 005763f7
    PUSH 0x576420                       ; 005763fc
    PUSH 0x5eccd8                       ; 00576401
    PUSH 0x2653578                      ; 00576406
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0057640b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00576410
    RET                                 ; 00576413

