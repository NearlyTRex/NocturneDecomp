; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stairs_cpp_factoryFuncStairs_FUN_00584910(void)
;
;
; Called Functions:
;   core_stairs.cpp_CStairs_ctor_FUN_00584940
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xa34                          ; 00584910
        ;   Label: core_stairs.cpp_factoryFuncStairs_FUN_00584910
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00584915
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0058491a
    TEST EAX,EAX                        ; 0058491d
    JNZ 0x00584922                      ; 0058491f
        ;   XREF to: 00584922 (CONDITIONAL_JUMP)  ; LAB_00584922
    RET                                 ; 00584921
    PUSH EAX                            ; 00584922
        ;   Label: LAB_00584922
    CALL core_stairs.cpp_CStairs_ctor_FUN_00584940 ; 00584923
        ;   XREF to: 00584940 (UNCONDITIONAL_CALL)  ; CStairs * core_stairs.cpp_CStairs_ctor_FUN_00584940(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00584928
    RET                                 ; 0058492b

