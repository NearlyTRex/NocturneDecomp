; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dynamite_cpp_factoryFuncDynamite_FUN_0047b050(void)
;
;
; Called Functions:
;   core_dynamite.cpp_CDynamite_ctor_FUN_0047b080
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a8                          ; 0047b050
        ;   Label: core_dynamite.cpp_factoryFuncDynamite_FUN_0047b050
    CALL crt_unknown.c_FUN_005a3cb2     ; 0047b055
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0047b05a
    TEST EAX,EAX                        ; 0047b05d
    JNZ 0x0047b062                      ; 0047b05f
        ;   XREF to: 0047b062 (CONDITIONAL_JUMP)  ; LAB_0047b062
    RET                                 ; 0047b061
    PUSH EAX                            ; 0047b062
        ;   Label: LAB_0047b062
    CALL core_dynamite.cpp_CDynamite_ctor_FUN_0047b080 ; 0047b063
        ;   XREF to: 0047b080 (UNCONDITIONAL_CALL)  ; CDynamite * core_dynamite.cpp_CDynamite_ctor_FUN_0047b080(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 0047b068
    RET                                 ; 0047b06b

