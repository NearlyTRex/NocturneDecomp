; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409fa0(int param_1)
;
;
; XREF[13]:
;   FUN_0040c040 at 0040c055
;   FUN_0040c160 at 0040c172
;   FUN_0040c320 at 0040c38e
;   FUN_00424260 at 0042446a
;   FUN_0047a390 at 0047a493
;   FUN_00480950 at 00480984
;   FUN_004bf360 at 004c0177
;   FUN_004c0a50 at 004c0ade
;   FUN_004c1140 at 004c115c
;   FUN_004c1b90 at 004c1bd5
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409fa0
        ;   Label: FUN_00409fa0
    PUSH EDX                            ; 00409fa4
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00409fa5
    CALL dword ptr [EAX + 0xc4]         ; 00409fab
    ADD ESP,0x4                         ; 00409fb1
    RET                                 ; 00409fb4

