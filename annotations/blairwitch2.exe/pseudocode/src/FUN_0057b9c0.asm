; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b9c0(undefined4 *param_1)
;
;
; XREF[7]:
;   FUN_00434e70 at 00434e75
;   FUN_0057cd50 at 0057cd55
;   FUN_0057cdb0 at 0057cdb6
;   FUN_0057ce90 at 0057ce95
;   FUN_0057d4f0 at 0057d4f5
;   FUN_0057d520 at 0057d527
;   FUN_0057d570 at 0057d575
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd3b4 = 0057b9d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057b9c0
        ;   Label: FUN_0057b9c0
    MOV dword ptr [EAX],0x5fd3b4        ; 0057b9c4 | PTR_FUN_005fd3b4
    RET                                 ; 0057b9ca

