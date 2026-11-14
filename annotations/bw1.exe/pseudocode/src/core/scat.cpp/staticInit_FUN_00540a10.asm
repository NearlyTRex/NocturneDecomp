; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_staticInit_FUN_00540a10(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1d06ad8                      ; 00540a10
        ;   Label: core_scat.cpp_staticInit_FUN_00540a10
    PUSH 0x1                            ; 00540a15
    PUSH 0x622a9c                       ; 00540a17
    PUSH 0x540aa0                       ; 00540a1c
    PUSH 0x5edcb7                       ; 00540a21
    PUSH 0x1e7e05c                      ; 00540a26
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 00540a2b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00540a30
    RET                                 ; 00540a33

