; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005332a0(void)
;
;
; XREF[1]:
;   FUN_004bb050 at 004bb058
;
; Referenced Globals:
;   undefined4 DAT_0061e520
;   undefined4 DAT_02653790
;
; Called Functions:
;   FUN_0044b920
;   FUN_00585de0
;
; *****************************************************************************

section .text

    CALL FUN_0044b920                   ; 005332a0
        ;   XREF to: 0044b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b920()
        ;   Label: FUN_005332a0
    MOV EDX,dword ptr [0x0061e520]      ; 005332a5 | DAT_0061e520
    PUSH EDX                            ; 005332ab | DAT_02653790
    CALL FUN_00585de0                   ; 005332ac
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585de0()
    ADD ESP,0x4                         ; 005332b1
    RET                                 ; 005332b4

