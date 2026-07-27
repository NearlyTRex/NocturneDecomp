; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hpriest_cpp_FUN_004b9ac0(void)
;
;
; Called Functions:
;   core_hpriest.cpp_FUN_004b9af0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f5d4                        ; 004b9ac0
        ;   Label: core_hpriest.cpp_FUN_004b9ac0
    CALL crt_unknown.c_FUN_0056497c     ; 004b9ac5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b9aca
    TEST EAX,EAX                        ; 004b9acd
    JNZ 0x004b9ad2                      ; 004b9acf
        ;   XREF to: 004b9ad2 (CONDITIONAL_JUMP)  ; LAB_004b9ad2
    RET                                 ; 004b9ad1
    PUSH EAX                            ; 004b9ad2
        ;   Label: LAB_004b9ad2
    CALL core_hpriest.cpp_FUN_004b9af0  ; 004b9ad3
        ;   XREF to: 004b9af0 (UNCONDITIONAL_CALL)  ; undefined core_hpriest.cpp_FUN_004b9af0()
    ADD ESP,0x4                         ; 004b9ad8
    RET                                 ; 004b9adb

