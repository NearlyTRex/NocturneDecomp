; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_factoryFuncZombieDog_FUN_00476780(void)
;
;
; Called Functions:
;   core_dog.cpp_CZombieDog_ctor_FUN_004767b0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc274                         ; 00476780
        ;   Label: core_dog.cpp_factoryFuncZombieDog_FUN_00476780
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00476785
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0047678a
    TEST EAX,EAX                        ; 0047678d
    JNZ 0x00476792                      ; 0047678f
        ;   XREF to: 00476792 (CONDITIONAL_JUMP)  ; LAB_00476792
    RET                                 ; 00476791
    PUSH EAX                            ; 00476792
        ;   Label: LAB_00476792
    CALL core_dog.cpp_CZombieDog_ctor_FUN_004767b0 ; 00476793
        ;   XREF to: 004767b0 (UNCONDITIONAL_CALL)  ; CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_004767b0(CZombieDog * this_ptr)
    ADD ESP,0x4                         ; 00476798
    RET                                 ; 0047679b

