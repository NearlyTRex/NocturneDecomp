; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_FUN_004da120(void)
;
;
; Called Functions:
;   core_mobster.cpp_CMobster_ctor_FUN_004da150
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbdfc                         ; 004da120
        ;   Label: core_mobster.cpp_FUN_004da120
    CALL crt_unknown.c_FUN_0056497c     ; 004da125
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004da12a
    TEST EAX,EAX                        ; 004da12d
    JNZ 0x004da132                      ; 004da12f
        ;   XREF to: 004da132 (CONDITIONAL_JUMP)  ; LAB_004da132
    RET                                 ; 004da131
    PUSH EAX                            ; 004da132
        ;   Label: LAB_004da132
    CALL core_mobster.cpp_CMobster_ctor_FUN_004da150 ; 004da133
        ;   XREF to: 004da150 (UNCONDITIONAL_CALL)  ; undefined core_mobster.cpp_CMobster_ctor_FUN_004da150()
    ADD ESP,0x4                         ; 004da138
    RET                                 ; 004da13b

