; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_staticInit_FUN_0042b6f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CChain_0057a556
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0042b6f0
        ;   Label: core_chain.cpp_staticInit_FUN_0042b6f0
    PUSH 0x4                            ; 0042b6f5
    PUSH 0x5ad250                       ; 0042b6f7
    PUSH 0x42b720                       ; 0042b6fc
    PUSH 0x57a556                       ; 0042b701 | = "CChain"
    PUSH 0x765c30                       ; 0042b706
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0042b70b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0042b710
    RET                                 ; 0042b713

