; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461050(int param_1,undefined4 param_2)
;
;
; XREF[16]:
;   FUN_00416030 at 004160fe
;   FUN_0041d050 at 0041d0ee
;   FUN_00437db0 at 00437fcc
;   FUN_0044aff0 at 0044b027
;   FUN_00453170 at 00453260
;   FUN_004dfcb0 at 004dfe84
;   FUN_004dfea0 at 004dffa1
;   FUN_00508750 at 00508848
;   FUN_00509760 at 0050991e
;   FUN_0050a260 at 0050a432
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 DAT_005b7644
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00461050
        ;   Label: FUN_00461050
    MOV EDX,dword ptr [ESP + 0x4]       ; 00461054
    MOV [0x005b7644],EAX                ; 00461058 | DAT_005b7644
    MOV dword ptr [EDX + 0x10],EAX      ; 0046105d
    RET                                 ; 00461060

