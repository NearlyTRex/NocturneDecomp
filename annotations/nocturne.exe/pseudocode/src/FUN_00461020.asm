; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461020(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_00414340 at 00414486
;   FUN_0045a260 at 0045a3b5
;   FUN_00489360 at 004893d3
;
; Referenced Globals:
;   undefined4 DAT_0057dc95
;
; Called Functions:
;   FUN_00408370
;   FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00461020
        ;   Label: FUN_00461020
    FLD float ptr [ESP + 0xc]           ; 00461023
    FMUL double ptr [0x0057dc95]        ; 00461027 | DAT_0057dc95
    CALL FUN_00563a30                   ; 0046102d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP]               ; 00461032
    MOV EDX,dword ptr [ESP]             ; 00461035
    PUSH EDX                            ; 00461038
    CALL FUN_00408370                   ; 00461039
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined FUN_00408370()
    ADD ESP,0x4                         ; 0046103e
    ADD ESP,0x4                         ; 00461041
    RET                                 ; 00461044

