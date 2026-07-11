; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511750(int param_1)
;
;
; XREF[15]:
;   FUN_00425050 at 004254e1
;   FUN_00429730 at 00429a7d
;   FUN_0048b6f0 at 0048bc14
;   FUN_00496d10 at 004971e0
;   FUN_00498b60 at 00498bb6
;   FUN_00498de0 at 00499068
;   FUN_004998c0 at 00499a74
;   FUN_004cb2d0 at 004cb421
;   FUN_004fda20 at 004fdca8
;   FUN_0052dff0 at 0052e2cd
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511750
        ;   Label: FUN_00511750
    MOV dword ptr [EAX + 0x15f2ac],0x0  ; 00511754
    MOV dword ptr [EAX + 0x15f2b0],0x0  ; 0051175e
    MOV dword ptr [EAX + 0x15f2f4],0x0  ; 00511768
    MOV dword ptr [EAX + 0x15f298],0x0  ; 00511772
    RET                                 ; 0051177c

