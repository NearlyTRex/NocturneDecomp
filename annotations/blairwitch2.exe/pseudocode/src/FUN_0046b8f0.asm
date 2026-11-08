; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b8f0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_00413c70 at 00413dc8
;   FUN_00464ac0 at 00464c27
;   FUN_0049b380 at 0049b3f6
;
; Referenced Globals:
;   undefined4 DAT_005d15f3
;
; Called Functions:
;   FUN_00406da0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b8f0
        ;   Label: FUN_0046b8f0
    FLD float ptr [ESP + 0xc]           ; 0046b8f3
    FMUL double ptr [0x005d15f3]        ; 0046b8f7 | DAT_005d15f3
    CALL FUN_005b7ff0                   ; 0046b8fd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0046b902
    MOV EDX,dword ptr [ESP]             ; 0046b905
    PUSH EDX                            ; 0046b908
    CALL FUN_00406da0                   ; 0046b909
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406da0()
    ADD ESP,0x4                         ; 0046b90e
    ADD ESP,0x4                         ; 0046b911
    RET                                 ; 0046b914

