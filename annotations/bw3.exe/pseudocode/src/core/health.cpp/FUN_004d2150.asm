; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_FUN_004d2150(void)
;
;
; Called Functions:
;   core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2e4                          ; 004d2150
        ;   Label: core_health.cpp_FUN_004d2150
    CALL crt_unknown.c_FUN_005a3cb2     ; 004d2155
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004d215a
    TEST EAX,EAX                        ; 004d215d
    JNZ 0x004d2162                      ; 004d215f
        ;   XREF to: 004d2162 (CONDITIONAL_JUMP)  ; LAB_004d2162
    RET                                 ; 004d2161
    PUSH EAX                            ; 004d2162
        ;   Label: LAB_004d2162
    CALL core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180 ; 004d2163
        ;   XREF to: 004d2180 (UNCONDITIONAL_CALL)  ; CHealthItemSmall * core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall * this_ptr)
    ADD ESP,0x4                         ; 004d2168
    RET                                 ; 004d216b

