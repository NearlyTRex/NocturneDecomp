; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11120                        ; 00417f20
        ;   Label: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417f20
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00417f25
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00417f2a
    TEST EAX,EAX                        ; 00417f2d
    JNZ 0x00417f32                      ; 00417f2f
        ;   XREF to: 00417f32 (CONDITIONAL_JUMP)  ; LAB_00417f32
    RET                                 ; 00417f31
    PUSH EAX                            ; 00417f32
        ;   Label: LAB_00417f32
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0 ; 00417f33
        ;   XREF to: 004182d0 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00417f38
    RET                                 ; 00417f3b

