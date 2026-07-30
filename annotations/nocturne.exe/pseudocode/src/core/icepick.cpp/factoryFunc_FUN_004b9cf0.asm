; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * __cdecl core_icepick_cpp_factoryFunc_FUN_004b9cf0(void)
;
;
; Called Functions:
;   core_icepick.cpp_CIcePick_ctor_FUN_004b9d20
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fa6c                        ; 004b9cf0
        ;   Label: core_icepick.cpp_factoryFunc_FUN_004b9cf0
    CALL crt_unknown.c_FUN_0056497c     ; 004b9cf5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b9cfa
    TEST EAX,EAX                        ; 004b9cfd
    JNZ 0x004b9d02                      ; 004b9cff
        ;   XREF to: 004b9d02 (CONDITIONAL_JUMP)  ; LAB_004b9d02
    RET                                 ; 004b9d01
    PUSH EAX                            ; 004b9d02
        ;   Label: LAB_004b9d02
    CALL core_icepick.cpp_CIcePick_ctor_FUN_004b9d20 ; 004b9d03
        ;   XREF to: 004b9d20 (UNCONDITIONAL_CALL)  ; CIcePick * core_icepick.cpp_CIcePick_ctor_FUN_004b9d20(CIcePick * this_ptr)
    ADD ESP,0x4                         ; 004b9d08
    RET                                 ; 004b9d0b

