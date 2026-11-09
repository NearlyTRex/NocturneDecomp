; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_staticInit_FUN_004cc700(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 004cc700
        ;   Label: core_haystack.cpp_staticInit_FUN_004cc700
    PUSH 0x1                            ; 004cc705
    PUSH 0x617a2c                       ; 004cc707
    PUSH 0x4cc730                       ; 004cc70c
    PUSH 0x5d97fe                       ; 004cc711
    PUSH 0x1cede64                      ; 004cc716
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004cc71b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cc720
    RET                                 ; 004cc723

