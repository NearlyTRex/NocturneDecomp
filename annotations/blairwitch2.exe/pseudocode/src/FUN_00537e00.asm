; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537e00(int param_1)
;
;
; XREF[36]:
;   FUN_0040c990 at 0040ca0f
;   FUN_0040ca40 at 0040cb12
;   FUN_00423a60 at 00423f46
;   FUN_00429420 at 00429650
;   FUN_0043a7a0 at 0043a952
;   FUN_004599a0 at 00459a26
;   FUN_00459ff0 at 0045a868
;   FUN_0045b510 at 0045b6af
;   FUN_00485b40 at 00485dea
;   FUN_00487790 at 004877d1
;   ... and 26 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537e00
        ;   Label: FUN_00537e00
    MOV dword ptr [EAX + 0x15f6a8],0x0  ; 00537e04
    MOV dword ptr [EAX + 0x15f6ac],0x0  ; 00537e0e
    MOV dword ptr [EAX + 0x15f6f0],0x0  ; 00537e18
    MOV dword ptr [EAX + 0x15f694],0x0  ; 00537e22
    RET                                 ; 00537e2c

