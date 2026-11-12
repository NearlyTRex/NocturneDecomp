; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_factoryFuncArmour_FUN_0040ee10(void)
;
;
; Called Functions:
;   core_armour.cpp_CArmour_ctor_FUN_0040ee40
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b5c                        ; 0040ee10
        ;   Label: core_armour.cpp_factoryFuncArmour_FUN_0040ee10
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0040ee15
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040ee1a
    TEST EAX,EAX                        ; 0040ee1d
    JNZ 0x0040ee22                      ; 0040ee1f
        ;   XREF to: 0040ee22 (CONDITIONAL_JUMP)  ; LAB_0040ee22
    RET                                 ; 0040ee21
    PUSH EAX                            ; 0040ee22
        ;   Label: LAB_0040ee22
    CALL core_armour.cpp_CArmour_ctor_FUN_0040ee40 ; 0040ee23
        ;   XREF to: 0040ee40 (UNCONDITIONAL_CALL)  ; CArmour * core_armour.cpp_CArmour_ctor_FUN_0040ee40(CArmour * this_ptr)
    ADD ESP,0x4                         ; 0040ee28
    RET                                 ; 0040ee2b

