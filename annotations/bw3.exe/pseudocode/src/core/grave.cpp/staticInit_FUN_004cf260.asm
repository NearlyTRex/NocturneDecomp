; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_staticInit_FUN_004cf260(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004cf260
        ;   Label: core_grave.cpp_staticInit_FUN_004cf260
    PUSH 0x4                            ; 004cf265
    PUSH 0x5fff28                       ; 004cf267
    PUSH 0x4cf290                       ; 004cf26c
    PUSH 0x5c47af                       ; 004cf271
    PUSH 0x1d5b86c                      ; 004cf276
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004cf27b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cf280
    RET                                 ; 004cf283

