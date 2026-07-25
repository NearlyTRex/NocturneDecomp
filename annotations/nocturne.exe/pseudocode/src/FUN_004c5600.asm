; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5600(void)
;
;
; Referenced Globals:
;   undefined4 SUB_004c5630
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1cc3160                      ; 004c5600
        ;   Label: FUN_004c5600
    CALL 0x004c5630                     ; 004c5605
        ;   XREF to: 004c5630 (UNCONDITIONAL_CALL)  ; SUB_004c5630
    ADD ESP,0x4                         ; 004c560a
    PUSH 0x1cc3290                      ; 004c560d
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590 ; 004c5612
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590()
    ADD ESP,0x4                         ; 004c5617
    PUSH 0x5bac90                       ; 004c561a
    CALL FUN_00564bb0                   ; 004c561f
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004c5624
    RET                                 ; 004c5627

