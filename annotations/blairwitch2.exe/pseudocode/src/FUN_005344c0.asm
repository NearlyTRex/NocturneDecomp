; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005344c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[13]:
;   FUN_004e1600 at 004e17da
;   FUN_004e63c0 at 004e6464
;   FUN_004eb490 at 004eb5b2
;   FUN_004ebf10 at 004ebff6
;   FUN_004ecc70 at 004eccdb
;   FUN_004ed260 at 004ed2d0
;   FUN_004ee1a0 at 004ee211
;   FUN_004ee3f0 at 004ee4fd
;   FUN_00502510 at 00502626
;   FUN_0052bca0 at 0052bd08
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005344c0
        ;   Label: FUN_005344c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005344c4
    MOV dword ptr [EAX + 0x15ae9c],EDX  ; 005344c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005344ce
    MOV dword ptr [EAX + 0x15aea0],EDX  ; 005344d2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005344d8
    MOV dword ptr [EAX + 0x15aea4],EDX  ; 005344dc
    RET                                 ; 005344e2

