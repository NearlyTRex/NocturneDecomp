; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_004626e0(void)
;
;
; Called Functions:
;   core_dog.cpp_CZombieDog_ctor_FUN_00462710
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd064                         ; 004626e0
        ;   Label: core_dog.cpp_factoryFuncZombieDog_FUN_004626e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004626e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004626ea
    TEST EAX,EAX                        ; 004626ed
    JNZ 0x004626f2                      ; 004626ef
        ;   XREF to: 004626f2 (CONDITIONAL_JUMP)  ; LAB_004626f2
    RET                                 ; 004626f1
    PUSH EAX                            ; 004626f2
        ;   Label: LAB_004626f2
    CALL core_dog.cpp_CZombieDog_ctor_FUN_00462710 ; 004626f3
        ;   XREF to: 00462710 (UNCONDITIONAL_CALL)  ; CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_00462710(CZombieDog * this_ptr)
    ADD ESP,0x4                         ; 004626f8
    RET                                 ; 004626fb

