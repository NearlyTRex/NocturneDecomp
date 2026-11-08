; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004610a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[10]:
;   FUN_004610d0 at 00461120
;   FUN_004611a0 at 004611f3
;   FUN_00461260 at 0046134f
;   FUN_0047c970 at 0047ca24
;   FUN_00481620 at 004816be
;   FUN_00481870 at 00481954
;   FUN_00481a70 at 00481b54
;   FUN_00481e20 at 00481e80
;   FUN_004a7d00 at 004a7e6d
;   FUN_0054bac0 at 0054bb57
;
; Called Functions:
;   FUN_005b9f4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004610a0
        ;   Label: FUN_004610a0
    PUSH ESI                            ; 004610a1
    PUSH EDI                            ; 004610a2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004610a3
    PUSH EDX                            ; 004610a7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004610a8
    PUSH ECX                            ; 004610ac
    MOV EBX,dword ptr [ESP + 0x20]      ; 004610ad
    PUSH EBX                            ; 004610b1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004610b2
    PUSH ESI                            ; 004610b6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004610b7
    PUSH EDI                            ; 004610bb
    CALL FUN_005b9f4c                   ; 004610bc
        ;   XREF to: 005b9f4c (UNCONDITIONAL_CALL)  ; undefined FUN_005b9f4c()
    ADD ESP,0x14                        ; 004610c1
    POP EDI                             ; 004610c4
    POP ESI                             ; 004610c5
    POP EBX                             ; 004610c6
    RET                                 ; 004610c7

