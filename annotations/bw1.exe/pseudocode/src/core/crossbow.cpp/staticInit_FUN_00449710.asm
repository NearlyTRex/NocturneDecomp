; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_staticInit_FUN_00449710(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 00449710
        ;   Label: core_crossbow.cpp_staticInit_FUN_00449710
    PUSH 0x1                            ; 00449715
    PUSH 0x6111b8                       ; 00449717
    PUSH 0x449740                       ; 0044971c
    PUSH 0x5d7372                       ; 00449721
    PUSH 0x7dc6dc                       ; 00449726
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0044972b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00449730
    RET                                 ; 00449733

