; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_staticInit_FUN_00518050(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 00518050
        ;   Label: core_platfrm.cpp_staticInit_FUN_00518050
    PUSH 0xb                            ; 00518055
    PUSH 0x61b3dc                       ; 00518057
    PUSH 0x518080                       ; 0051805c
    PUSH 0x5e21b0                       ; 00518061
    PUSH 0x1e61474                      ; 00518066
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0051806b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00518070
    RET                                 ; 00518073

