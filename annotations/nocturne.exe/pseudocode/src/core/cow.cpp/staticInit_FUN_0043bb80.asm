; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_staticInit_FUN_0043bb80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CZombieCow_0057b2ca
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0043bb80
        ;   Label: core_cow.cpp_staticInit_FUN_0043bb80
    PUSH 0x2                            ; 0043bb85
    PUSH 0x5ad3ac                       ; 0043bb87
    PUSH 0x43bbb0                       ; 0043bb8c
    PUSH 0x57b2ca                       ; 0043bb91 | = "CZombieCow"
    PUSH 0x77bd04                       ; 0043bb96
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0043bb9b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043bba0
    RET                                 ; 0043bba3

