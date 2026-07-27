; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_staticInit_FUN_0040f500(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAnvil_005783e8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0040f500
        ;   Label: core_anvil.cpp_staticInit_FUN_0040f500
    PUSH 0x1                            ; 0040f505
    PUSH 0x5acec8                       ; 0040f507
    PUSH 0x40f530                       ; 0040f50c
    PUSH 0x5783e8                       ; 0040f511 | = "CAnvil"
    PUSH 0x764234                       ; 0040f516
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0040f51b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f520
    RET                                 ; 0040f523

