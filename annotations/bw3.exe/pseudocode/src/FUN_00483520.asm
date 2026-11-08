; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00483450 at 004834cd
;   FUN_004b7f90 at 004b8b95
;
; Called Functions:
;   FUN_00483c00
;   FUN_004849f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483520
        ;   Label: FUN_00483520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00483521
    MOV EDX,dword ptr [ESP + 0x14]      ; 00483525
    PUSH EDX                            ; 00483529
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048352a
    PUSH ECX                            ; 0048352e
    PUSH EBX                            ; 0048352f
    CALL FUN_00483c00                   ; 00483530
        ;   XREF to: 00483c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00483c00()
    ADD ESP,0xc                         ; 00483535
    MOV EAX,dword ptr [ESP + 0x10]      ; 00483538
    PUSH EBX                            ; 0048353c
    MOV dword ptr [EBX + 0x194],EAX     ; 0048353d
    CALL FUN_004849f0                   ; 00483543
        ;   XREF to: 004849f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004849f0()
    ADD ESP,0x4                         ; 00483548
    POP EBX                             ; 0048354b
    RET                                 ; 0048354c

