; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040e230(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040dda0 at 0040ddf2
;
; Called Functions:
;   core_ammo.cpp_CAmmoManaLarge_ctor_FUN_0040e260
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x320                          ; 0040e230
        ;   Label: core_ammo.cpp_FUN_0040e230
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0040e235
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040e23a
    TEST EAX,EAX                        ; 0040e23d
    JNZ 0x0040e242                      ; 0040e23f
        ;   XREF to: 0040e242 (CONDITIONAL_JUMP)  ; LAB_0040e242
    RET                                 ; 0040e241
    PUSH EAX                            ; 0040e242
        ;   Label: LAB_0040e242
    CALL core_ammo.cpp_CAmmoManaLarge_ctor_FUN_0040e260 ; 0040e243
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CAmmoManaLarge * core_ammo.cpp_CAmmoManaLarge_ctor_FUN_0040e260(CAmmoManaLarge * this_ptr)
    ADD ESP,0x4                         ; 0040e248
    RET                                 ; 0040e24b

