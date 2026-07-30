; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_0043d930(void)
;
;
; Called Functions:
;   core_curtain.cpp_CCurtain_ctor_FUN_0043d960
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x65b30                        ; 0043d930
        ;   Label: core_curtain.cpp_factoryFunc_FUN_0043d930
    CALL crt_unknown.c_FUN_0056497c     ; 0043d935
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0043d93a
    TEST EAX,EAX                        ; 0043d93d
    JNZ 0x0043d942                      ; 0043d93f
        ;   XREF to: 0043d942 (CONDITIONAL_JUMP)  ; LAB_0043d942
    RET                                 ; 0043d941
    PUSH EAX                            ; 0043d942
        ;   Label: LAB_0043d942
    CALL core_curtain.cpp_CCurtain_ctor_FUN_0043d960 ; 0043d943
        ;   XREF to: 0043d960 (UNCONDITIONAL_CALL)  ; CCurtain * core_curtain.cpp_CCurtain_ctor_FUN_0043d960(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0043d948
    RET                                 ; 0043d94b

