; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00534780(void)
;
;
; Called Functions:
;   core_stairs.cpp_CStairs_ctor_FUN_005347b0
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xa2c                          ; 00534780
        ;   Label: core_stairs.cpp_factoryFuncStairs_FUN_00534780
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00534785
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 0053478a
    TEST EAX,EAX                        ; 0053478d
    JNZ 0x00534792                      ; 0053478f
        ;   XREF to: 00534792 (CONDITIONAL_JUMP)  ; LAB_00534792
    RET                                 ; 00534791
    PUSH EAX                            ; 00534792
        ;   Label: LAB_00534792
    CALL core_stairs.cpp_CStairs_ctor_FUN_005347b0 ; 00534793
        ;   XREF to: 005347b0 (UNCONDITIONAL_CALL)  ; CStairs * core_stairs.cpp_CStairs_ctor_FUN_005347b0(CStairs * this_ptr)
    ADD ESP,0x4                         ; 00534798
    RET                                 ; 0053479b

