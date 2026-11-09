; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_00463780(void)
;
;
; Called Functions:
;   core_dog.cpp_CEtherealDog_ctor_FUN_004637b0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd064                         ; 00463780
        ;   Label: core_dog.cpp_FUN_00463780
    CALL crt_unknown.c_FUN_005a3cb2     ; 00463785
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0046378a
    TEST EAX,EAX                        ; 0046378d
    JNZ 0x00463792                      ; 0046378f
        ;   XREF to: 00463792 (CONDITIONAL_JUMP)  ; LAB_00463792
    RET                                 ; 00463791
    PUSH EAX                            ; 00463792
        ;   Label: LAB_00463792
    CALL core_dog.cpp_CEtherealDog_ctor_FUN_004637b0 ; 00463793
        ;   XREF to: 004637b0 (UNCONDITIONAL_CALL)  ; CEtherealDog * core_dog.cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog * this_ptr)
    ADD ESP,0x4                         ; 00463798
    RET                                 ; 0046379b

