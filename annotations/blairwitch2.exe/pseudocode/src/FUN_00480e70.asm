; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00480e70(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[15]:
;   FUN_0047c760 at 0047c79e
;   FUN_00480dc0 at 00480e00
;   FUN_00481a70 at 00481c6b
;   FUN_00481ca0 at 00481dec
;   FUN_00481e20 at 00481fb1
;   FUN_004a41b0 at 004a4ff0
;   FUN_004b6170 at 004b673d
;   FUN_004ed260 at 004ee0d1
;   FUN_004eed60 at 004ef9fa
;   FUN_004fd280 at 004fd2bd
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e70
        ;   Label: FUN_00480e70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00480e71
    MOV ECX,dword ptr [ESP + 0xc]       ; 00480e75
    PUSH ECX                            ; 00480e79
    MOV EBX,dword ptr [EDX]             ; 00480e7a
    PUSH EBX                            ; 00480e7c
    MOV EAX,dword ptr [EDX + 0xc]       ; 00480e7d
    PUSH EDX                            ; 00480e80
    CALL dword ptr [EAX + 0xc]          ; 00480e81
    ADD ESP,0xc                         ; 00480e84
    POP EBX                             ; 00480e87
    RET                                 ; 00480e88

