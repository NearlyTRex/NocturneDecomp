; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b8d8c(undefined4 param_1)
;
;
; XREF[35]:
;   FUN_0041bc90 at 0041bccc
;   FUN_00436650 at 0043666a
;   FUN_0043aee0 at 0043af10
;   FUN_00447560 at 00447579
;   FUN_0044dbb0 at 0044dbcc
;   FUN_0047a430 at 0047a442
;   FUN_004930e0 at 004931a0
;   FUN_004a1200 at 004a1219
;   FUN_004b28b0 at 004b28cc
;   FUN_004c7360 at 004c7372
;   ... and 25 more
;
; Called Functions:
;   FUN_005bef45
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8d8c
        ;   Label: FUN_005b8d8c
    PUSH EDX                            ; 005b8d90
    CALL FUN_005bef45                   ; 005b8d91
        ;   XREF to: 005bef45 (UNCONDITIONAL_CALL)  ; undefined FUN_005bef45()
    ADD ESP,0x4                         ; 005b8d96
    RET                                 ; 005b8d99

