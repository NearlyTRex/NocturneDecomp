; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483df0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_00413970 at 00413ac8
;   FUN_0047cfe0 at 0047d147
;   FUN_004b3d20 at 004b3d96
;
; Referenced Globals:
;   undefined4 DAT_005db3ec
;
; Called Functions:
;   FUN_00406bd0
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00483df0
        ;   Label: FUN_00483df0
    FLD float ptr [ESP + 0xc]           ; 00483df3
    FMUL double ptr [0x005db3ec]        ; 00483df7 | DAT_005db3ec
    CALL FUN_005c03a0                   ; 00483dfd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00483e02
    MOV EDX,dword ptr [ESP]             ; 00483e05
    PUSH EDX                            ; 00483e08
    CALL FUN_00406bd0                   ; 00483e09
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 00483e0e
    ADD ESP,0x4                         ; 00483e11
    RET                                 ; 00483e14

