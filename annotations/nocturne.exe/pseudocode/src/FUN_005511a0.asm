; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005511a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 005511a0
        ;   Label: FUN_005511a0
    PUSH 0x64                           ; 005511a5
    PUSH 0x2dd9268                      ; 005511a7
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005511ac
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 005511b1
    PUSH 0x59bd70                       ; 005511b4
    PUSH 0x64                           ; 005511b9
    PUSH 0x2dd9718                      ; 005511bb
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005511c0
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 005511c5
    PUSH 0x763e48                       ; 005511c8
    PUSH 0x6                            ; 005511cd
    PUSH 0x5c154c                       ; 005511cf
    PUSH 0x5511f0                       ; 005511d4
    PUSH 0x5975bf                       ; 005511d9
    PUSH 0x2ddd598                      ; 005511de
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005511e3
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005511e8
    RET                                 ; 005511eb

