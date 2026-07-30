; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * __cdecl core_gargoyle_cpp_factoryFunc_FUN_004a7320(void)
;
;
; Called Functions:
;   core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd80                         ; 004a7320
        ;   Label: core_gargoyle.cpp_factoryFunc_FUN_004a7320
    CALL crt_unknown.c_FUN_0056497c     ; 004a7325
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004a732a
    TEST EAX,EAX                        ; 004a732d
    JNZ 0x004a7332                      ; 004a732f
        ;   XREF to: 004a7332 (CONDITIONAL_JUMP)  ; LAB_004a7332
    RET                                 ; 004a7331
    PUSH EAX                            ; 004a7332
        ;   Label: LAB_004a7332
    CALL core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350 ; 004a7333
        ;   XREF to: 004a7350 (UNCONDITIONAL_CALL)  ; CGargoyle * core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004a7338
    RET                                 ; 004a733b

