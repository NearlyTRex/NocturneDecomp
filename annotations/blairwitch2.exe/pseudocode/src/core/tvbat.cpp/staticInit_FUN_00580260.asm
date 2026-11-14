; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_staticInit_FUN_00580260(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1c264a8                      ; 00580260
        ;   Label: core_tvbat.cpp_staticInit_FUN_00580260
    PUSH 0x5                            ; 00580265
    PUSH 0x61e4a8                       ; 00580267
    PUSH 0x580290                       ; 0058026c
    PUSH 0x5ed834                       ; 00580271
    PUSH 0x2653694                      ; 00580276
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0058027b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00580280
    RET                                 ; 00580283

