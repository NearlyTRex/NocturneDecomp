; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_staticInit_FUN_00577690(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00577690
        ;   Label: core_trigger.cpp_staticInit_FUN_00577690
    PUSH 0xc                            ; 00577695
    PUSH 0x61e420                       ; 00577697
    PUSH 0x5776c0                       ; 0057769c
    PUSH 0x5ecd5a                       ; 005776a1
    PUSH 0x26535f0                      ; 005776a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005776ab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005776b0
    RET                                 ; 005776b3

