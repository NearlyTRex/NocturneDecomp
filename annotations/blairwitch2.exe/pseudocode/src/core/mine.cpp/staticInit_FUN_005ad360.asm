; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mine_cpp_staticInit_FUN_005ad360(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bc9b0                       ; 005ad360
        ;   Label: core_mine.cpp_staticInit_FUN_005ad360
    PUSH 0x1                            ; 005ad365
    PUSH 0x61ecf4                       ; 005ad367
    PUSH 0x5ad390                       ; 005ad36c
    PUSH 0x5f0ed3                       ; 005ad371
    PUSH 0x2668998                      ; 005ad376
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005ad37b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005ad380
    RET                                 ; 005ad383

