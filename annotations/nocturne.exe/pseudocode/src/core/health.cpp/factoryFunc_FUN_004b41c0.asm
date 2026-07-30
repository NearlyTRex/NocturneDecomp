; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItem * __cdecl core_health_cpp_factoryFunc_FUN_004b41c0(void)
;
;
; Called Functions:
;   core_health.cpp_FUN_004b41f0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d4                          ; 004b41c0
        ;   Label: core_health.cpp_factoryFunc_FUN_004b41c0
    CALL crt_unknown.c_FUN_0056497c     ; 004b41c5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b41ca
    TEST EAX,EAX                        ; 004b41cd
    JNZ 0x004b41d2                      ; 004b41cf
        ;   XREF to: 004b41d2 (CONDITIONAL_JUMP)  ; LAB_004b41d2
    RET                                 ; 004b41d1
    PUSH EAX                            ; 004b41d2
        ;   Label: LAB_004b41d2
    CALL core_health.cpp_FUN_004b41f0   ; 004b41d3
        ;   XREF to: 004b41f0 (UNCONDITIONAL_CALL)  ; undefined core_health.cpp_FUN_004b41f0()
    ADD ESP,0x4                         ; 004b41d8
    RET                                 ; 004b41db

