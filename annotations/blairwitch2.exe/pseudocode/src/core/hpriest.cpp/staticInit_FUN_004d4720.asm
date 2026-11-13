; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hpriest_cpp_staticInit_FUN_004d4720(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 004d4720
        ;   Label: core_hpriest.cpp_staticInit_FUN_004d4720
    PUSH 0x1                            ; 004d4725
    PUSH 0x617af4                       ; 004d4727
    PUSH 0x4d4750                       ; 004d472c
    PUSH 0x5da6b9                       ; 004d4731
    PUSH 0x1cee078                      ; 004d4736
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004d473b
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004d4740
    RET                                 ; 004d4743

