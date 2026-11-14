; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_staticInit_FUN_004ed4a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d8136c                      ; 004ed4a0
        ;   Label: core_hostage.cpp_staticInit_FUN_004ed4a0
    PUSH 0xc                            ; 004ed4a5
    PUSH 0x61ef8c                       ; 004ed4a7
    PUSH 0x4ed4d0                       ; 004ed4ac
    PUSH 0x5e4c5f                       ; 004ed4b1
    PUSH 0x1d06b90                      ; 004ed4b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004ed4bb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004ed4c0
    RET                                 ; 004ed4c3

