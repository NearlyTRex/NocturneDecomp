; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c4850(void)
;
;
; Called Functions:
;   core_larva.cpp_CLarva_ctor_FUN_004c4880
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd30                         ; 004c4850
        ;   Label: FUN_004c4850
    CALL FUN_0056497c                   ; 004c4855
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004c485a
    TEST EAX,EAX                        ; 004c485d
    JNZ 0x004c4862                      ; 004c485f
        ;   XREF to: 004c4862 (CONDITIONAL_JUMP)  ; LAB_004c4862
    RET                                 ; 004c4861
    PUSH EAX                            ; 004c4862
        ;   Label: LAB_004c4862
    CALL core_larva.cpp_CLarva_ctor_FUN_004c4880 ; 004c4863
        ;   XREF to: 004c4880 (UNCONDITIONAL_CALL)  ; undefined core_larva.cpp_CLarva_ctor_FUN_004c4880()
    ADD ESP,0x4                         ; 004c4868
    RET                                 ; 004c486b

