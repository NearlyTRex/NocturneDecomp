; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005459f0(void)
;
;
; XREF[2]:
;   FUN_004d23d0 at 004d2472
;   FUN_004d9900 at 004d9900
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   FUN_00544e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dd0f84]      ; 005459f0 | DAT_02dd0f84
        ;   Label: FUN_005459f0
    PUSH EDX                            ; 005459f6
    CALL FUN_00544e60                   ; 005459f7
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00544e60()
    ADD ESP,0x4                         ; 005459fc
    NOP                                 ; 005459ff
    RET                                 ; 00545a00

