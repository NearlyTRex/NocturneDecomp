; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3000(int param_1)
;
;
; XREF[10]:
;   FUN_004b6170 at 004b6515
;   FUN_004bcbf0 at 004bd1ff
;   FUN_004bd570 at 004bdaa4
;   FUN_004bdfb0 at 004bdff8
;   FUN_004be430 at 004be585
;   FUN_004ebf10 at 004ebf2f
;   FUN_004ecc70 at 004ecc8f
;   FUN_004ed260 at 004ed27f
;   FUN_004ee1a0 at 004ee1c4
;   FUN_004ee3f0 at 004ee4b8
;
; Called Functions:
;   FUN_0058e9e0
;
; *****************************************************************************

section .text

    CALL FUN_0058e9e0                   ; 004b3000
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
        ;   Label: FUN_004b3000
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3005
    MOV dword ptr [EDX + 0x27c],EAX     ; 004b3009
    RET                                 ; 004b300f

