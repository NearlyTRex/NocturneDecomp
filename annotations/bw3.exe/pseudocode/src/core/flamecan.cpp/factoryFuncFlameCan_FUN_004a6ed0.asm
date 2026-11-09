; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamecan_cpp_factoryFuncFlameCan_FUN_004a6ed0(void)
;
;
; Called Functions:
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004a6f00
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x5e8                          ; 004a6ed0
        ;   Label: core_flamecan.cpp_factoryFuncFlameCan_FUN_004a6ed0
    CALL crt_unknown.c_FUN_005a3cb2     ; 004a6ed5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004a6eda
    TEST EAX,EAX                        ; 004a6edd
    JNZ 0x004a6ee2                      ; 004a6edf
        ;   XREF to: 004a6ee2 (CONDITIONAL_JUMP)  ; LAB_004a6ee2
    RET                                 ; 004a6ee1
    PUSH EAX                            ; 004a6ee2
        ;   Label: LAB_004a6ee2
    CALL core_flamecan.cpp_CFlameCan_ctor_FUN_004a6f00 ; 004a6ee3
        ;   XREF to: 004a6f00 (UNCONDITIONAL_CALL)  ; CFlameCan * core_flamecan.cpp_CFlameCan_ctor_FUN_004a6f00(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004a6ee8
    RET                                 ; 004a6eeb

