; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_factoryFuncAmmo_FUN_0040de30(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040dda0 at 0040ddac
;
; Called Functions:
;   core_ammo.cpp_CAmmo_ctor_FUN_0040de60
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x320                          ; 0040de30
        ;   Label: core_ammo.cpp_factoryFuncAmmo_FUN_0040de30
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0040de35
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040de3a
    TEST EAX,EAX                        ; 0040de3d
    JNZ 0x0040de42                      ; 0040de3f
        ;   XREF to: 0040de42 (CONDITIONAL_JUMP)  ; LAB_0040de42
    RET                                 ; 0040de41
    PUSH EAX                            ; 0040de42
        ;   Label: LAB_0040de42
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040de60 ; 0040de43
        ;   XREF to: 0040de60 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040de60(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 0040de48
    RET                                 ; 0040de4b

