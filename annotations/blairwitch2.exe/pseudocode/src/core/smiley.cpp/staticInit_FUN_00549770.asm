; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_staticInit_FUN_00549770(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00549770
        ;   Label: core_smiley.cpp_staticInit_FUN_00549770
    PUSH 0x1                            ; 00549775
    PUSH 0x61bc48                       ; 00549777
    PUSH 0x5497a0                       ; 0054977c
    PUSH 0x5e7655                       ; 00549781
    PUSH 0x2628640                      ; 00549786
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0054978b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00549790
    RET                                 ; 00549793

