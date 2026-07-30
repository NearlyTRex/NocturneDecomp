; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_0040f930(void)
;
;
; Called Functions:
;   core_armour.cpp_FUN_0040f960
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd88                         ; 0040f930
        ;   Label: core_armour.cpp_factoryFunc_FUN_0040f930
    CALL crt_unknown.c_FUN_0056497c     ; 0040f935
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0040f93a
    TEST EAX,EAX                        ; 0040f93d
    JNZ 0x0040f942                      ; 0040f93f
        ;   XREF to: 0040f942 (CONDITIONAL_JUMP)  ; LAB_0040f942
    RET                                 ; 0040f941
    PUSH EAX                            ; 0040f942
        ;   Label: LAB_0040f942
    CALL core_armour.cpp_FUN_0040f960   ; 0040f943
        ;   XREF to: 0040f960 (UNCONDITIONAL_CALL)  ; CArmour * core_armour.cpp_FUN_0040f960(CArmour * this_ptr)
    ADD ESP,0x4                         ; 0040f948
    RET                                 ; 0040f94b

