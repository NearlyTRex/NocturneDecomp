; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_factoryFuncBride_FUN_00423890(void)
;
;
; Called Functions:
;   core_bride.cpp_CBride_ctor_FUN_004238c0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc29c                         ; 00423890
        ;   Label: core_bride.cpp_factoryFuncBride_FUN_00423890
    CALL crt_unknown.c_FUN_005c0f32     ; 00423895
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0042389a
    TEST EAX,EAX                        ; 0042389d
    JNZ 0x004238a2                      ; 0042389f
        ;   XREF to: 004238a2 (CONDITIONAL_JUMP)  ; LAB_004238a2
    RET                                 ; 004238a1
    PUSH EAX                            ; 004238a2
        ;   Label: LAB_004238a2
    CALL core_bride.cpp_CBride_ctor_FUN_004238c0 ; 004238a3
        ;   XREF to: 004238c0 (UNCONDITIONAL_CALL)  ; CBride * core_bride.cpp_CBride_ctor_FUN_004238c0(CBride * this_ptr)
    ADD ESP,0x4                         ; 004238a8
    RET                                 ; 004238ab

