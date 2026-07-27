; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_staticInit_FUN_004c3400(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CKeyActor_00587574
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004c3400
        ;   Label: core_keyactor.cpp_staticInit_FUN_004c3400
    PUSH 0x3                            ; 004c3405
    PUSH 0x5bac4c                       ; 004c3407
    PUSH 0x4c3430                       ; 004c340c
    PUSH 0x587574                       ; 004c3411 | = "CKeyActor"
    PUSH 0x1cc30a8                      ; 004c3416
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c341b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c3420
    RET                                 ; 004c3423

