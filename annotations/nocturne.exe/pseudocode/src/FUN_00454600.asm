; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454600(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00454600
        ;   Label: FUN_00454600
    PUSH 0x2                            ; 00454605
    PUSH 0x5ae678                       ; 00454607
    PUSH 0x454630                       ; 0045460c
    PUSH 0x57cf26                       ; 00454611
    PUSH 0x1af4e5c                      ; 00454616
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0045461b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00454620
    RET                                 ; 00454623

