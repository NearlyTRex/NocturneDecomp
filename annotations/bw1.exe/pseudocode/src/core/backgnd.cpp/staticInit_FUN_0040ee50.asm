; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_backgnd_cpp_staticInit_FUN_0040ee50(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0040ee50
        ;   Label: core_backgnd.cpp_staticInit_FUN_0040ee50
    PUSH 0x3                            ; 0040ee55
    PUSH 0x6108f4                       ; 0040ee57
    PUSH 0x40ee80                       ; 0040ee5c
    PUSH 0x5d331b                       ; 0040ee61
    PUSH 0x7c345c                       ; 0040ee66
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0040ee6b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040ee70
    RET                                 ; 0040ee73

