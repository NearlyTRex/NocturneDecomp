; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509000(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00483490 at 004834a0
;   FUN_004834b0 at 004834fa
;
; Referenced Globals:
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509000
        ;   Label: FUN_00509000
    MOV [0x01c51d38],EAX                ; 00509004 | DAT_01c51d38
    MOV EAX,dword ptr [ESP + 0x8]       ; 00509009
    MOV [0x01c51d3c],EAX                ; 0050900d | DAT_01c51d3c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00509012
    MOV [0x01c51d40],EAX                ; 00509016 | DAT_01c51d40
    RET                                 ; 0050901b

