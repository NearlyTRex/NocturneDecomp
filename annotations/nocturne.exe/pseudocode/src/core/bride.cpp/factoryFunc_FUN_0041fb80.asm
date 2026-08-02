; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBride * __cdecl core_bride_cpp_factoryFunc_FUN_0041fb80(void)
;
;
; Called Functions:
;   core_bride.cpp_CBride_ctor_FUN_0041fbb0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd54                         ; 0041fb80
        ;   Label: core_bride.cpp_factoryFunc_FUN_0041fb80
    CALL crt_unknown.c_FUN_0056497c     ; 0041fb85
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0041fb8a
    TEST EAX,EAX                        ; 0041fb8d
    JNZ 0x0041fb92                      ; 0041fb8f
        ;   XREF to: 0041fb92 (CONDITIONAL_JUMP)  ; LAB_0041fb92
    RET                                 ; 0041fb91
    PUSH EAX                            ; 0041fb92
        ;   Label: LAB_0041fb92
    CALL core_bride.cpp_CBride_ctor_FUN_0041fbb0 ; 0041fb93
        ;   XREF to: 0041fbb0 (UNCONDITIONAL_CALL)  ; CBride * core_bride.cpp_CBride_ctor_FUN_0041fbb0(CBride * this_ptr)
    ADD ESP,0x4                         ; 0041fb98
    RET                                 ; 0041fb9b

