; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trash_cpp_staticInit_FUN_00546c30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CTrash_0059692b
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 00546c30
        ;   Label: core_trash.cpp_staticInit_FUN_00546c30
    PUSH 0x1                            ; 00546c35
    PUSH 0x5c111c                       ; 00546c37
    PUSH 0x546c60                       ; 00546c3c
    PUSH 0x59692b                       ; 00546c41 | = "CTrash"
    PUSH 0x2dd1048                      ; 00546c46
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00546c4b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00546c50
    RET                                 ; 00546c53

