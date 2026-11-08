; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d420(undefined4 *param_1)
;
;
; XREF[17]:
;   FUN_004a1200 at 004a1247
;   FUN_004a2140 at 004a2151
;   FUN_004a2170 at 004a218c
;   FUN_004a37c0 at 004a37c9
;   FUN_004b60c0 at 004b6109
;   FUN_004bdfb0 at 004be0ba
;   FUN_004be430 at 004be472
;   FUN_004d9c00 at 004d9c05
;   FUN_004e1480 at 004e1524
;   FUN_004e4490 at 004e4495
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d420
        ;   Label: FUN_0040d420
    MOV dword ptr [EAX + 0x4],0x0       ; 0040d424
    MOV dword ptr [EAX + 0x8],0x0       ; 0040d42b
    MOV dword ptr [EAX],0x0             ; 0040d432
    RET                                 ; 0040d438

