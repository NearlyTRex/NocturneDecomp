; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_00411320(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x574                          ; 00411320
        ;   Label: core_baron.cpp_FUN_00411320
    CALL crt_unknown.c_FUN_0056497c     ; 00411325
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041132a
    TEST EAX,EAX                        ; 0041132d
    JNZ 0x00411332                      ; 0041132f
        ;   XREF to: 00411332 (CONDITIONAL_JUMP)  ; LAB_00411332
    RET                                 ; 00411331
    PUSH EAX                            ; 00411332
        ;   Label: LAB_00411332
    CALL core_baron.cpp_CBaronWeapon_ctor_FUN_00411350 ; 00411333
        ;   XREF to: 00411350 (UNCONDITIONAL_CALL)  ; CBaronWeapon * core_baron.cpp_CBaronWeapon_ctor_FUN_00411350(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 00411338
    RET                                 ; 0041133b

