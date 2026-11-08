; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b4f0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0052d0e0 at 0052d10f
;
; Referenced Globals:
;   undefined4 DAT_005d15bb
;
; Called Functions:
;   FUN_004e25c0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b4f0
        ;   Label: FUN_0046b4f0
    FLD float ptr [ESP + 0xc]           ; 0046b4f3
    FMUL double ptr [0x005d15bb]        ; 0046b4f7 | DAT_005d15bb
    CALL FUN_005b7ff0                   ; 0046b4fd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0046b502
    MOV EDX,dword ptr [ESP]             ; 0046b505
    PUSH EDX                            ; 0046b508
    CALL FUN_004e25c0                   ; 0046b509
        ;   XREF to: 004e25c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e25c0()
    ADD ESP,0x4                         ; 0046b50e
    ADD ESP,0x4                         ; 0046b511
    RET                                 ; 0046b514

