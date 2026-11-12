; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bwsearch_cpp_staticInit_FUN_005a8c90(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x26685c8                      ; 005a8c90
        ;   Label: core_bwsearch.cpp_staticInit_FUN_005a8c90
    PUSH 0x1                            ; 005a8c95
    PUSH 0x61ec64                       ; 005a8c97
    PUSH 0x5a8cc0                       ; 005a8c9c
    PUSH 0x5f0837                       ; 005a8ca1
    PUSH 0x26687f4                      ; 005a8ca6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005a8cab
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005a8cb0
    RET                                 ; 005a8cb3

