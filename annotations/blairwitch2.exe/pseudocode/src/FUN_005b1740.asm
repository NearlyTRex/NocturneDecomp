; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1740(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_00422930 at 00422add
;   FUN_0042b440 at 0042b537
;   FUN_0056f3a0 at 0056f42c
;
; Called Functions:
;   FUN_005ae680
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b1740
        ;   Label: FUN_005b1740
    PUSH EDI                            ; 005b1741
    PUSH EBP                            ; 005b1742
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b1743
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b1747
    MOV EDX,dword ptr [EDI]             ; 005b174b
    XOR ESI,ESI                         ; 005b174d
    TEST EDX,EDX                        ; 005b174f
    JLE 0x005b177b                      ; 005b1751
        ;   XREF to: 005b177b (CONDITIONAL_JUMP)  ; LAB_005b177b
    PUSH EBX                            ; 005b1753
    MOV EBX,EDI                         ; 005b1754
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b1756
        ;   Label: LAB_005b1756
    PUSH ECX                            ; 005b175a
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b175b
    PUSH EAX                            ; 005b175f
    PUSH EBP                            ; 005b1760
    MOV EDX,dword ptr [EBX + 0x194]     ; 005b1761
    PUSH EDX                            ; 005b1767
    ADD EBX,0x4                         ; 005b1768
    INC ESI                             ; 005b176b
    CALL FUN_005ae680                   ; 005b176c
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae680()
    MOV ECX,dword ptr [EDI]             ; 005b1771
    ADD ESP,0x10                        ; 005b1773
    CMP ESI,ECX                         ; 005b1776
    JL 0x005b1756                       ; 005b1778
        ;   XREF to: 005b1756 (CONDITIONAL_JUMP)  ; LAB_005b1756
    POP EBX                             ; 005b177a
    POP EBP                             ; 005b177b
        ;   Label: LAB_005b177b
    POP EDI                             ; 005b177c
    POP ESI                             ; 005b177d
    RET                                 ; 005b177e

