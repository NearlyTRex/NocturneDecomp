; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040e3a0(void)
;
;
; XREF[1]:
;   core_ammo.cpp_staticInit_FUN_0040dda0 at 0040de15
;
; Called Functions:
;   core_ammo.cpp_CAmmoBullet_ctor_FUN_0040e3d0
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x320                          ; 0040e3a0
        ;   Label: core_ammo.cpp_FUN_0040e3a0
    CALL crt_unknown.c_FUN_005a3cb2     ; 0040e3a5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040e3aa
    TEST EAX,EAX                        ; 0040e3ad
    JNZ 0x0040e3b2                      ; 0040e3af
        ;   XREF to: 0040e3b2 (CONDITIONAL_JUMP)  ; LAB_0040e3b2
    RET                                 ; 0040e3b1
    PUSH EAX                            ; 0040e3b2
        ;   Label: LAB_0040e3b2
    CALL core_ammo.cpp_CAmmoBullet_ctor_FUN_0040e3d0 ; 0040e3b3
        ;   XREF to: 0040e3d0 (UNCONDITIONAL_CALL)  ; CAmmoBullet * core_ammo.cpp_CAmmoBullet_ctor_FUN_0040e3d0(CAmmoBullet * this_ptr)
    ADD ESP,0x4                         ; 0040e3b8
    RET                                 ; 0040e3bb

