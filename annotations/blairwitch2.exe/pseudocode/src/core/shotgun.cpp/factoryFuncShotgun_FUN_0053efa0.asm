; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0(void)
;
;
; Called Functions:
;   core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6e0                          ; 0053efa0
        ;   Label: core_shotgun.cpp_factoryFuncShotgun_FUN_0053efa0
    CALL crt_unknown.c_FUN_005b8be2     ; 0053efa5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0053efaa
    TEST EAX,EAX                        ; 0053efad
    JNZ 0x0053efb2                      ; 0053efaf
        ;   XREF to: 0053efb2 (CONDITIONAL_JUMP)  ; LAB_0053efb2
    RET                                 ; 0053efb1
    PUSH EAX                            ; 0053efb2
        ;   Label: LAB_0053efb2
    CALL core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0 ; 0053efb3
        ;   XREF to: 0053efd0 (UNCONDITIONAL_CALL)  ; CShotgun * core_shotgun.cpp_CShotgun_ctor_FUN_0053efd0(CShotgun * this_ptr)
    ADD ESP,0x4                         ; 0053efb8
    RET                                 ; 0053efbb

