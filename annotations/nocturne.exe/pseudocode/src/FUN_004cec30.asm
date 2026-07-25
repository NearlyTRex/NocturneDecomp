; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cec30(void)
;
;
; Called Functions:
;   core_melee.cpp_CMelee_ctor_FUN_004cec60
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x6c4                          ; 004cec30
        ;   Label: FUN_004cec30
    CALL FUN_0056497c                   ; 004cec35
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004cec3a
    TEST EAX,EAX                        ; 004cec3d
    JNZ 0x004cec42                      ; 004cec3f
        ;   XREF to: 004cec42 (CONDITIONAL_JUMP)  ; LAB_004cec42
    RET                                 ; 004cec41
    PUSH EAX                            ; 004cec42
        ;   Label: LAB_004cec42
    CALL core_melee.cpp_CMelee_ctor_FUN_004cec60 ; 004cec43
        ;   XREF to: 004cec60 (UNCONDITIONAL_CALL)  ; undefined core_melee.cpp_CMelee_ctor_FUN_004cec60()
    ADD ESP,0x4                         ; 004cec48
    RET                                 ; 004cec4b

