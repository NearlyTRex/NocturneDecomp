; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cdc0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004bf4b0 at 004bf4e6
;   FUN_00505a30 at 00506036
;   FUN_00507790 at 00507a05
;
; Referenced Globals:
;   undefined4 DAT_007dfce8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cdc0
        ;   Label: FUN_0040cdc0
    MOV [0x007dfce8],EAX                ; 0040cdc4 | DAT_007dfce8
    RET                                 ; 0040cdc9

