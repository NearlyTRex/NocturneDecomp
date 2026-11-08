; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053b340(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00529a70 at 0052c625
;   FUN_0053b360 at 0053b397
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x8],0x1a4 ; 0053b340
        ;   Label: FUN_0053b340
    ADD EAX,dword ptr [ESP + 0x4]       ; 0053b348
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053b34c
    MOV dword ptr [EAX + 0x1a4],EDX     ; 0053b350
    RET                                 ; 0053b356

