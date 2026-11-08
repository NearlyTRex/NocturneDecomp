; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047f970(undefined4 param_1)
;
;
; XREF[8]:
;   FUN_0047c2c0 at 0047c59f
;   FUN_0047c8e0 at 0047cbac
;   FUN_0047d230 at 0047d803
;   FUN_0047e470 at 0047e74b
;   FUN_00483450 at 004834ff
;   FUN_004b7f90 at 004b8560
;   FUN_004e80f0 at 004e832c
;   FUN_005043b0 at 00504528
;
; Called Functions:
;   FUN_0047ccb0
;   FUN_0047cd80
;   FUN_0047f990
;
; *****************************************************************************

section .text

    CALL FUN_0047cd80                   ; 0047f970
        ;   XREF to: 0047cd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cd80()
        ;   Label: FUN_0047f970
    CALL FUN_0047ccb0                   ; 0047f975
        ;   XREF to: 0047ccb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ccb0()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047f97a
    PUSH EDX                            ; 0047f97e
    CALL FUN_0047f990                   ; 0047f97f
        ;   XREF to: 0047f990 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f990()
    ADD ESP,0x4                         ; 0047f984
    RET                                 ; 0047f987

