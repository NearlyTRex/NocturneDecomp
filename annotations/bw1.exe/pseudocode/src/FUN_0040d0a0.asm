; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d0a0(undefined4 *param_1)
;
;
; XREF[19]:
;   FUN_00415d90 at 00415da1
;   FUN_004175f0 at 00417601
;   FUN_00418850 at 00418855
;   FUN_00418870 at 00418875
;   FUN_004b9ab0 at 004b9af7
;   FUN_004baa10 at 004baa21
;   FUN_004baa40 at 004baa5c
;   FUN_004bc1b0 at 004bc1b9
;   FUN_004cf530 at 004cf579
;   FUN_004d8700 at 004d8712
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d0a0
        ;   Label: FUN_0040d0a0
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d0a4
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d0ab
    MOV dword ptr [EAX],0x0             ; 0040d0b2
    RET                                 ; 0040d0b8

