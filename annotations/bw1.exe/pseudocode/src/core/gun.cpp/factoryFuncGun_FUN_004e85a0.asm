; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gun_cpp_factoryFuncGun_FUN_004e85a0(void)
;
;
; Called Functions:
;   core_gun.cpp_CGun_ctor_FUN_004e85d0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x578                          ; 004e85a0
        ;   Label: core_gun.cpp_factoryFuncGun_FUN_004e85a0
    CALL crt_unknown.c_FUN_005c0f32     ; 004e85a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 004e85aa
    TEST EAX,EAX                        ; 004e85ad
    JNZ 0x004e85b2                      ; 004e85af
        ;   XREF to: 004e85b2 (CONDITIONAL_JUMP)  ; LAB_004e85b2
    RET                                 ; 004e85b1
    PUSH EAX                            ; 004e85b2
        ;   Label: LAB_004e85b2
    CALL core_gun.cpp_CGun_ctor_FUN_004e85d0 ; 004e85b3
        ;   XREF to: 004e85d0 (UNCONDITIONAL_CALL)  ; CGun * core_gun.cpp_CGun_ctor_FUN_004e85d0(CGun * this_ptr)
    ADD ESP,0x4                         ; 004e85b8
    RET                                 ; 004e85bb

