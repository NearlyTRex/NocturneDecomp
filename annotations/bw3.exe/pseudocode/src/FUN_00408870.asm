; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408870(int param_1)
;
;
; XREF[11]:
;   FUN_0040aff0 at 0040b005
;   FUN_0040b110 at 0040b122
;   FUN_0040b2d0 at 0040b33e
;   FUN_0042b0e0 at 0042b2cf
;   FUN_0048b950 at 0048ba53
;   FUN_00494e70 at 00494ea4
;   FUN_004da880 at 004db52c
;   FUN_004dc700 at 004dc71c
;   FUN_004f6410 at 004f65e9
;   FUN_004f7530 at 004f753e
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408870
        ;   Label: FUN_00408870
    PUSH EDX                            ; 00408874
    MOV EAX,dword ptr [EDX + 0x154]     ; 00408875
    CALL dword ptr [EAX + 0xcc]         ; 0040887b
    ADD ESP,0x4                         ; 00408881
    RET                                 ; 00408884

