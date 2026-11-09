; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050(void)
;
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd698                         ; 00417050
        ;   Label: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417050
    CALL crt_unknown.c_FUN_005a3cb2     ; 00417055
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0041705a
    TEST EAX,EAX                        ; 0041705d
    JNZ 0x00417062                      ; 0041705f
        ;   XREF to: 00417062 (CONDITIONAL_JUMP)  ; LAB_00417062
    RET                                 ; 00417061
    PUSH EAX                            ; 00417062
        ;   Label: LAB_00417062
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 ; 00417063
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00417068
    RET                                 ; 0041706b

