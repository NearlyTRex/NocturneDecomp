; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_staticInit_FUN_00462650(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 00462650
        ;   Label: core_dog.cpp_staticInit_FUN_00462650
    PUSH 0x2                            ; 00462655
    PUSH 0x5f2a5c                       ; 00462657
    PUSH 0x4626e0                       ; 0046265c
    PUSH 0x5bbb94                       ; 00462661
    PUSH 0x1b8504c                      ; 00462666
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0046266b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00462670
    PUSH 0x1b8504c                      ; 00462673
    PUSH 0x1                            ; 00462678
    PUSH 0x5f2a60                       ; 0046267a
    PUSH 0x463650                       ; 0046267f
    PUSH 0x5bbb9f                       ; 00462684
    PUSH 0x1b85088                      ; 00462689
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0046268e
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00462693
    PUSH 0x1b8504c                      ; 00462696
    PUSH 0x1                            ; 0046269b
    PUSH 0x5f2a64                       ; 0046269d
    PUSH 0x4636e0                       ; 004626a2
    PUSH 0x5bbbab                       ; 004626a7
    PUSH 0x1b850c4                      ; 004626ac
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004626b1
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004626b6
    PUSH 0x1b8504c                      ; 004626b9
    PUSH 0x1                            ; 004626be
    PUSH 0x5f2a68                       ; 004626c0
    PUSH 0x463780                       ; 004626c5
    PUSH 0x5bbbb5                       ; 004626ca
    PUSH 0x1b85100                      ; 004626cf
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004626d4
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004626d9
    RET                                 ; 004626dc

