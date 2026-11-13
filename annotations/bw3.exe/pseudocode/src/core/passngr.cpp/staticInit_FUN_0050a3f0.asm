; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_staticInit_FUN_0050a3f0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1dd6a44                      ; 0050a3f0
        ;   Label: core_passngr.cpp_staticInit_FUN_0050a3f0
    PUSH 0x6                            ; 0050a3f5
    PUSH 0x6035f4                       ; 0050a3f7
    PUSH 0x50a420                       ; 0050a3fc
    PUSH 0x5cb69a                       ; 0050a401
    PUSH 0x1dd6a80                      ; 0050a406
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0050a40b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0050a410
    RET                                 ; 0050a413

