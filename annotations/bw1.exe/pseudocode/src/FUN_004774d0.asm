; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004774d0(int param_1)
;
;
; XREF[3]:
;   FUN_00432560 at 00432572
;   FUN_004eb5e0 at 004eb621
;   FUN_004ec640 at 004ec7b4
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_004a1b70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004774d0
        ;   Label: FUN_004774d0
    ADD EAX,0x2e8                       ; 004774d4
    PUSH EAX                            ; 004774d9
    MOV EDX,dword ptr [0x0061b4d0]      ; 004774da | DAT_0061b4d0
    PUSH EDX                            ; 004774e0
    CALL FUN_004a1b70                   ; 004774e1
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 004774e6
    RET                                 ; 004774e9

