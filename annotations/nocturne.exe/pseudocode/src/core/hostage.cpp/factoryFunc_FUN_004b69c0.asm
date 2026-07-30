; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004b69c0(void)
;
;
; Called Functions:
;   core_hostage.cpp_CHostage_ctor_FUN_004b69f0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f958                        ; 004b69c0
        ;   Label: core_hostage.cpp_factoryFunc_FUN_004b69c0
    CALL crt_unknown.c_FUN_0056497c     ; 004b69c5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b69ca
    TEST EAX,EAX                        ; 004b69cd
    JNZ 0x004b69d2                      ; 004b69cf
        ;   XREF to: 004b69d2 (CONDITIONAL_JUMP)  ; LAB_004b69d2
    RET                                 ; 004b69d1
    PUSH EAX                            ; 004b69d2
        ;   Label: LAB_004b69d2
    CALL core_hostage.cpp_CHostage_ctor_FUN_004b69f0 ; 004b69d3
        ;   XREF to: 004b69f0 (UNCONDITIONAL_CALL)  ; CHostage * core_hostage.cpp_CHostage_ctor_FUN_004b69f0(CHostage * this_ptr)
    ADD ESP,0x4                         ; 004b69d8
    RET                                 ; 004b69db

