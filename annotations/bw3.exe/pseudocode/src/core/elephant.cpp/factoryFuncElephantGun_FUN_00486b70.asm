; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70(void)
;
;
; Called Functions:
;   core_elephant.cpp_CElephantGun_ctor_FUN_00486ba0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5a0                          ; 00486b70
        ;   Label: core_elephant.cpp_factoryFuncElephantGun_FUN_00486b70
    CALL crt_unknown.c_FUN_005a3cb2     ; 00486b75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00486b7a
    TEST EAX,EAX                        ; 00486b7d
    JNZ 0x00486b82                      ; 00486b7f
        ;   XREF to: 00486b82 (CONDITIONAL_JUMP)  ; LAB_00486b82
    RET                                 ; 00486b81
    PUSH EAX                            ; 00486b82
        ;   Label: LAB_00486b82
    CALL core_elephant.cpp_CElephantGun_ctor_FUN_00486ba0 ; 00486b83
        ;   XREF to: 00486ba0 (UNCONDITIONAL_CALL)  ; CElephantGun * core_elephant.cpp_CElephantGun_ctor_FUN_00486ba0(CElephantGun * this_ptr)
    ADD ESP,0x4                         ; 00486b88
    RET                                 ; 00486b8b

