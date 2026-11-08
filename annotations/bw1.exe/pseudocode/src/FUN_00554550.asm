; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554550(void)
;
;
; XREF[1]:
;   FUN_004d5e40 at 004d5e48
;
; Referenced Globals:
;   undefined4 DAT_00625c90
;   undefined4 DAT_02c8afb0
;
; Called Functions:
;   FUN_00464150
;   FUN_005a9a10
;
; *****************************************************************************

section .text

    CALL FUN_00464150                   ; 00554550
        ;   XREF to: 00464150 (UNCONDITIONAL_CALL)  ; undefined FUN_00464150()
        ;   Label: FUN_00554550
    MOV EDX,dword ptr [0x00625c90]      ; 00554555 | DAT_00625c90
    PUSH EDX                            ; 0055455b | DAT_02c8afb0
    CALL FUN_005a9a10                   ; 0055455c
        ;   XREF to: 005a9a10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9a10()
    ADD ESP,0x4                         ; 00554561
    RET                                 ; 00554564

