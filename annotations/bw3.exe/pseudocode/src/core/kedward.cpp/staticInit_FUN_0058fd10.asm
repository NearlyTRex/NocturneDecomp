; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_staticInit_FUN_0058fd10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 0058fd10
        ;   Label: core_kedward.cpp_staticInit_FUN_0058fd10
    PUSH 0x4                            ; 0058fd15
    PUSH 0x607360                       ; 0058fd17
    PUSH 0x58fd40                       ; 0058fd1c
    PUSH 0x5d8cf4                       ; 0058fd21
    PUSH 0x2d249dc                      ; 0058fd26
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0058fd2b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0058fd30
    RET                                 ; 0058fd33

