; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421010(void)
;
;
; Called Functions:
;   core_bugs.cpp_CBugs_ctor_FUN_00421040
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x19860                        ; 00421010
        ;   Label: FUN_00421010
    CALL FUN_0056497c                   ; 00421015
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0042101a
    TEST EAX,EAX                        ; 0042101d
    JNZ 0x00421022                      ; 0042101f
        ;   XREF to: 00421022 (CONDITIONAL_JUMP)  ; LAB_00421022
    RET                                 ; 00421021
    PUSH EAX                            ; 00421022
        ;   Label: LAB_00421022
    CALL core_bugs.cpp_CBugs_ctor_FUN_00421040 ; 00421023
        ;   XREF to: 00421040 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_CBugs_ctor_FUN_00421040()
    ADD ESP,0x4                         ; 00421028
    RET                                 ; 0042102b

