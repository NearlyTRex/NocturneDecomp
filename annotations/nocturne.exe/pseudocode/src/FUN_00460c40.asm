; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460c40(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_00507c80 at 00507caf
;
; Referenced Globals:
;   undefined4 DAT_0057dc5d
;
; Called Functions:
;   FUN_004c69d0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00460c40
        ;   Label: FUN_00460c40
    FLD float ptr [ESP + 0xc]           ; 00460c43
    FMUL double ptr [0x0057dc5d]        ; 00460c47 | DAT_0057dc5d
    CALL FUN_00563a30                   ; 00460c4d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP]               ; 00460c52
    MOV EDX,dword ptr [ESP]             ; 00460c55
    PUSH EDX                            ; 00460c58
    CALL FUN_004c69d0                   ; 00460c59
        ;   XREF to: 004c69d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c69d0()
    ADD ESP,0x4                         ; 00460c5e
    ADD ESP,0x4                         ; 00460c61
    RET                                 ; 00460c64

