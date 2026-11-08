; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ec540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_0042d5f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec540
        ;   Label: FUN_004ec540
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ec544
    PUSH dword ptr [ESP + 0x10]         ; 004ec548
    PUSH EDX                            ; 004ec54c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ec54d
    PUSH ECX                            ; 004ec551
    PUSH EAX                            ; 004ec552
    MOV dword ptr [EAX + 0xc1d0],0x0    ; 004ec553
    CALL FUN_0042d5f0                   ; 004ec55d
        ;   XREF to: 0042d5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d5f0()
    ADD ESP,0x10                        ; 004ec562
    RET                                 ; 004ec565

