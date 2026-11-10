; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040e0c0(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040dda0 at 0040ddcf
;
; Called Functions:
;   core_ammo.cpp_CAmmoMana_ctor_FUN_0040e0f0
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x320                          ; 0040e0c0
        ;   Label: core_ammo.cpp_FUN_0040e0c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 0040e0c5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040e0ca
    TEST EAX,EAX                        ; 0040e0cd
    JNZ 0x0040e0d2                      ; 0040e0cf
        ;   XREF to: 0040e0d2 (CONDITIONAL_JUMP)  ; LAB_0040e0d2
    RET                                 ; 0040e0d1
    PUSH EAX                            ; 0040e0d2
        ;   Label: LAB_0040e0d2
    CALL core_ammo.cpp_CAmmoMana_ctor_FUN_0040e0f0 ; 0040e0d3
        ;   XREF to: 0040e0f0 (UNCONDITIONAL_CALL)  ; CAmmoMana * core_ammo.cpp_CAmmoMana_ctor_FUN_0040e0f0(CAmmoMana * this_ptr)
    ADD ESP,0x4                         ; 0040e0d8
    RET                                 ; 0040e0db

