; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_factoryFuncZombieDog_FUN_0045e240(void)
;
;
; Called Functions:
;   core_dog.cpp_CZombieDog_ctor_FUN_0045e270
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b04                        ; 0045e240
        ;   Label: core_dog.cpp_factoryFuncZombieDog_FUN_0045e240
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 0045e245
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0045e24a
    TEST EAX,EAX                        ; 0045e24d
    JNZ 0x0045e252                      ; 0045e24f
        ;   XREF to: 0045e252 (CONDITIONAL_JUMP)  ; LAB_0045e252
    RET                                 ; 0045e251
    PUSH EAX                            ; 0045e252
        ;   Label: LAB_0045e252
    CALL core_dog.cpp_CZombieDog_ctor_FUN_0045e270 ; 0045e253
        ;   XREF to: 0045e270 (UNCONDITIONAL_CALL)  ; CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog * this_ptr)
    ADD ESP,0x4                         ; 0045e258
    RET                                 ; 0045e25b

