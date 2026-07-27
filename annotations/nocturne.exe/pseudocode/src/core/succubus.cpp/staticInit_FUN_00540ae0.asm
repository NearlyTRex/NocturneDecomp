; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_staticInit_FUN_00540ae0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CSuccubus_00595ff4
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 00540ae0
        ;   Label: core_succubus.cpp_staticInit_FUN_00540ae0
    PUSH 0x1                            ; 00540ae5
    PUSH 0x5c1008                       ; 00540ae7
    PUSH 0x540b10                       ; 00540aec
    PUSH 0x595ff4                       ; 00540af1 | = "CSuccubus"
    PUSH 0x2dca01c                      ; 00540af6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00540afb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00540b00
    RET                                 ; 00540b03

