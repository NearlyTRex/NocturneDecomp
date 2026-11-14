; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_staticInit_FUN_004355b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 004355b0
        ;   Label: core_colonel.cpp_staticInit_FUN_004355b0
    PUSH 0x1                            ; 004355b5
    PUSH 0x609ea0                       ; 004355b7
    PUSH 0x4355e0                       ; 004355bc
    PUSH 0x5cdaad                       ; 004355c1
    PUSH 0x7c1550                       ; 004355c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 004355cb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004355d0
    RET                                 ; 004355d3

