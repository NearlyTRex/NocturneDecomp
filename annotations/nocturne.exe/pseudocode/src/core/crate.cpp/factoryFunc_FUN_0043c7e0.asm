; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void)
;
;
; Called Functions:
;   core_crate.cpp_CCrate_ctor_FUN_0043c810
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2f4                          ; 0043c7e0
        ;   Label: core_crate.cpp_factoryFunc_FUN_0043c7e0
    CALL crt_unknown.c_FUN_0056497c     ; 0043c7e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0043c7ea
    TEST EAX,EAX                        ; 0043c7ed
    JNZ 0x0043c7f2                      ; 0043c7ef
        ;   XREF to: 0043c7f2 (CONDITIONAL_JUMP)  ; LAB_0043c7f2
    RET                                 ; 0043c7f1
    PUSH EAX                            ; 0043c7f2
        ;   Label: LAB_0043c7f2
    CALL core_crate.cpp_CCrate_ctor_FUN_0043c810 ; 0043c7f3
        ;   XREF to: 0043c810 (UNCONDITIONAL_CALL)  ; CCrate * core_crate.cpp_CCrate_ctor_FUN_0043c810(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0043c7f8
    RET                                 ; 0043c7fb

