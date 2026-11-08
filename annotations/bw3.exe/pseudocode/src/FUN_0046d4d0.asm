; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d4d0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_004a0680 at 004a06f6
;
; Referenced Globals:
;   undefined4 DAT_005bc583
;
; Called Functions:
;   FUN_00406bf0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046d4d0
        ;   Label: FUN_0046d4d0
    FLD float ptr [ESP + 0xc]           ; 0046d4d3
    FMUL double ptr [0x005bc583]        ; 0046d4d7 | DAT_005bc583
    CALL FUN_005a3120                   ; 0046d4dd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0046d4e2
    MOV EDX,dword ptr [ESP]             ; 0046d4e5
    PUSH EDX                            ; 0046d4e8
    CALL FUN_00406bf0                   ; 0046d4e9
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 0046d4ee
    ADD ESP,0x4                         ; 0046d4f1
    RET                                 ; 0046d4f4

