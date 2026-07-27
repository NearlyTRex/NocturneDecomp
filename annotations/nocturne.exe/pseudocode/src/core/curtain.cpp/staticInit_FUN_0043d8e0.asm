; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CCurtain_0057b4be
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0043d8e0
        ;   Label: core_curtain.cpp_staticInit_FUN_0043d8e0
    PUSH 0x64                           ; 0043d8e5
    PUSH 0x77bdbc                       ; 0043d8e7
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0043d8ec
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0043d8f1
    PUSH 0x59bd70                       ; 0043d8f4
    PUSH 0x64                           ; 0043d8f9
    PUSH 0x77c26c                       ; 0043d8fb
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0043d900
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 0043d905
    PUSH 0x763e48                       ; 0043d908
    PUSH 0x6                            ; 0043d90d
    PUSH 0x5ad3f0                       ; 0043d90f
    PUSH 0x43d930                       ; 0043d914
    PUSH 0x57b4be                       ; 0043d919 | = "CCurtain"
    PUSH 0x77d20c                       ; 0043d91e
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0043d923
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0043d928
    RET                                 ; 0043d92b

