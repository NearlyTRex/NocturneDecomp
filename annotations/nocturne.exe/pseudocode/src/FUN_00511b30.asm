; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511b30(void)
;
;
; XREF[2]:
;   FUN_004d8fc0 at 004d900c
;   FUN_00506f10 at 00507c6b
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_0046bcf0
;   FUN_004f1e90
;
; *****************************************************************************

section .text

    PUSH 0x1fba938                      ; 00511b30 | DAT_01fba938
        ;   Label: FUN_00511b30
    CALL FUN_0046bcf0                   ; 00511b35
        ;   XREF to: 0046bcf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046bcf0()
    ADD ESP,0x4                         ; 00511b3a
    JMP 0x004f1e90                      ; 00511b3d
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)

