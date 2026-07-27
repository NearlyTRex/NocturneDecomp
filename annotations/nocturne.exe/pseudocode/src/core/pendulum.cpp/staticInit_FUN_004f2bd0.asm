; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_staticInit_FUN_004f2bd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CPendulum_0058cfe8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004f2bd0
        ;   Label: core_pendulum.cpp_staticInit_FUN_004f2bd0
    PUSH 0x8                            ; 004f2bd5
    PUSH 0x5be164                       ; 004f2bd7
    PUSH 0x4f2c00                       ; 004f2bdc
    PUSH 0x58cfe8                       ; 004f2be1 | = "CPendulum"
    PUSH 0x1e42858                      ; 004f2be6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004f2beb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f2bf0
    RET                                 ; 004f2bf3

