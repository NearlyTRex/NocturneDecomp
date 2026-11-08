; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530390(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0042cd70 at 0042d103
;   FUN_00529a70 at 0052bcea
;   FUN_00530500 at 0053050a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00530390
        ;   Label: FUN_00530390
    MOV EDX,dword ptr [ESP + 0x8]       ; 00530394
    CMP EDX,dword ptr [EAX + 0x4]       ; 00530398
    JZ 0x0053039e                       ; 0053039b
        ;   XREF to: 0053039e (CONDITIONAL_JUMP)  ; LAB_0053039e
    RET                                 ; 0053039d
    MOV dword ptr [EAX + 0x4],0x0       ; 0053039e
        ;   Label: LAB_0053039e
    MOV byte ptr [EAX + 0x50],0x0       ; 005303a5
    RET                                 ; 005303a9

