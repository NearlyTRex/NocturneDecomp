; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamegun_cpp_staticInit_FUN_004a0cb0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x2661f00                      ; 004a0cb0
        ;   Label: core_flamegun.cpp_staticInit_FUN_004a0cb0
    PUSH 0x1                            ; 004a0cb5
    PUSH 0x615edc                       ; 004a0cb7
    PUSH 0x4a0ce0                       ; 004a0cbc
    PUSH 0x5d5990                       ; 004a0cc1
    PUSH 0x1cab6fc                      ; 004a0cc6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004a0ccb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a0cd0
    RET                                 ; 004a0cd3

