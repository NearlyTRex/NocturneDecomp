; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gasmask_cpp_staticInit_FUN_004dda60(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 004dda60
        ;   Label: core_gasmask.cpp_staticInit_FUN_004dda60
    PUSH 0x1                            ; 004dda65
    PUSH 0x61dc18                       ; 004dda67
    PUSH 0x4dda90                       ; 004dda6c
    PUSH 0x5e3a1c                       ; 004dda71
    PUSH 0x1cd0d08                      ; 004dda76
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004dda7b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004dda80
    RET                                 ; 004dda83

