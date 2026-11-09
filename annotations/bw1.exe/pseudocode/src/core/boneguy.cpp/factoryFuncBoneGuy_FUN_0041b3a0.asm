; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc890                         ; 0041b3a0
        ;   Label: core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b3a0
    CALL crt_unknown.c_FUN_005c0f32     ; 0041b3a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0041b3aa
    TEST EAX,EAX                        ; 0041b3ad
    JNZ 0x0041b3b2                      ; 0041b3af
        ;   XREF to: 0041b3b2 (CONDITIONAL_JUMP)  ; LAB_0041b3b2
    RET                                 ; 0041b3b1
    PUSH EAX                            ; 0041b3b2
        ;   Label: LAB_0041b3b2
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 ; 0041b3b3
        ;   XREF to: 0041b750 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 0041b3b8
    RET                                 ; 0041b3bb

