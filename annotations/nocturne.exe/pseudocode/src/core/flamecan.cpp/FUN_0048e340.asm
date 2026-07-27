; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flamecan_cpp_FUN_0048e340(void)
;
;
; Called Functions:
;   core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x5d8                          ; 0048e340
        ;   Label: core_flamecan.cpp_FUN_0048e340
    CALL crt_unknown.c_FUN_0056497c     ; 0048e345
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0048e34a
    TEST EAX,EAX                        ; 0048e34d
    JNZ 0x0048e352                      ; 0048e34f
        ;   XREF to: 0048e352 (CONDITIONAL_JUMP)  ; LAB_0048e352
    RET                                 ; 0048e351
    PUSH EAX                            ; 0048e352
        ;   Label: LAB_0048e352
    CALL core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370 ; 0048e353
        ;   XREF to: 0048e370 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370()
    ADD ESP,0x4                         ; 0048e358
    RET                                 ; 0048e35b

