; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040dd50 at 0040dd5c
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x47c                          ; 0040dd80
        ;   Label: core_ammo.cpp_factoryFuncAmmo_FUN_0040dd80
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 0040dd85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 0040dd8a
    TEST EAX,EAX                        ; 0040dd8d
    JNZ 0x0040dd92                      ; 0040dd8f
        ;   XREF to: 0040dd92 (CONDITIONAL_JUMP)  ; LAB_0040dd92
    RET                                 ; 0040dd91
    PUSH EAX                            ; 0040dd92
        ;   Label: LAB_0040dd92
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 ; 0040dd93
        ;   XREF to: 0040ddb0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040dd98
    RET                                 ; 0040dd9b

