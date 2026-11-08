; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f2a0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0050f910 at 0050f92b
;   FUN_00510160 at 00510178
;
; Called Functions:
;   FUN_005a4ee0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 0050f2a0
        ;   Label: FUN_0050f2a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050f2a2
    PUSH EDX                            ; 0050f2a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050f2a7
    PUSH ECX                            ; 0050f2ab
    CALL FUN_005a4ee0                   ; 0050f2ac
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    ADD ESP,0xc                         ; 0050f2b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050f2b4
    MOV byte ptr [EAX + 0x13],0x0       ; 0050f2b8
    RET                                 ; 0050f2bc

