; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_staticInit_FUN_00487980(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00487980
        ;   Label: core_emitter.cpp_staticInit_FUN_00487980
    PUSH 0xe                            ; 00487985
    PUSH 0x5fb9ec                       ; 00487987
    PUSH 0x4879b0                       ; 0048798c
    PUSH 0x5bd9e4                       ; 00487991
    PUSH 0x1c5bbd4                      ; 00487996
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0048799b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004879a0
    RET                                 ; 004879a3

