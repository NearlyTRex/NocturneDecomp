; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040e320(undefined4 *param_1)
;
;
; XREF[6]:
;   FUN_0049d960 at 0049d9a6
;   FUN_004a6680 at 004a6692
;   FUN_004a6a10 at 004a6b1d
;   FUN_004a6e90 at 004a6ecc
;   FUN_004c5640 at 004c5714
;   FUN_004c85f0 at 004c8c1e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e320
        ;   Label: FUN_0040e320
    MOV dword ptr [EAX + 0x4],0x0       ; 0040e324
    MOV dword ptr [EAX + 0x8],0x0       ; 0040e32b
    MOV dword ptr [EAX],0x0             ; 0040e332
    RET                                 ; 0040e338

