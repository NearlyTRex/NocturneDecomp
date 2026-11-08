; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040cee0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004bd570 at 004bd5a6
;   FUN_0050cf50 at 0050d556
;   FUN_0050ecb0 at 0050ef25
;
; Referenced Globals:
;   undefined4 DAT_007bc368
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040cee0
        ;   Label: FUN_0040cee0
    MOV [0x007bc368],EAX                ; 0040cee4 | DAT_007bc368
    RET                                 ; 0040cee9

