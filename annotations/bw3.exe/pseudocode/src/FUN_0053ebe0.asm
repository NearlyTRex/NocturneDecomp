; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053ebe0(int param_1)
;
;
; XREF[36]:
;   FUN_0040c8e0 at 0040c95f
;   FUN_0040c990 at 0040ca62
;   FUN_00410490 at 00410744
;   FUN_00424550 at 0042476c
;   FUN_00425da0 at 00426072
;   FUN_0042c230 at 0042c713
;   FUN_00432330 at 0043298d
;   FUN_00455080 at 004561ee
;   FUN_00486d40 at 00486fea
;   FUN_004889b0 at 004889f1
;   ... and 26 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ebe0
        ;   Label: FUN_0053ebe0
    MOV dword ptr [EAX + 0x15f6ac],0x0  ; 0053ebe4
    MOV dword ptr [EAX + 0x15f6b0],0x0  ; 0053ebee
    MOV dword ptr [EAX + 0x15f6f4],0x0  ; 0053ebf8
    MOV dword ptr [EAX + 0x15f698],0x0  ; 0053ec02
    RET                                 ; 0053ec0c

