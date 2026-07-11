; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052ede0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0047ac50 at 0047b4d5
;
; Referenced Globals:
;   undefined4 DAT_02dc9c9c
;   undefined4 DAT_02dc9ca0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ede0
        ;   Label: FUN_0052ede0
    MOV [0x02dc9c9c],EAX                ; 0052ede4 | DAT_02dc9c9c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052ede9
    MOV [0x02dc9ca0],EAX                ; 0052eded | DAT_02dc9ca0
    RET                                 ; 0052edf2

