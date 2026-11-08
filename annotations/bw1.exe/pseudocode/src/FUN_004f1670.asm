; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1670(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   FUN_004f0e50 at 004f11d6
;
; Referenced Globals:
;   TerminatedCString s_shoot_005e53af
;   undefined4 DAT_005e53b7
;   undefined4 DAT_005e53bf
;   undefined4 DAT_005e53c3
;   undefined4 DAT_01d06cb4
;
; Called Functions:
;   FUN_005240c0
;   FUN_00524a00
;   FUN_00568100
;   FUN_005695e0
;   FUN_005b7af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1670
        ;   Label: FUN_004f1670
    SUB ESP,0x28                        ; 004f1671
    MOV EBX,dword ptr [ESP + 0x30]      ; 004f1674
    CMP dword ptr [EBX + 0x1ffcc],0x0   ; 004f1678
    JZ 0x004f1778                       ; 004f167f
        ;   XREF to: 004f1778 (CONDITIONAL_JUMP)  ; LAB_004f1778
    MOV ECX,dword ptr [EBX + 0x1ffac]   ; 004f1685
    TEST ECX,ECX                        ; 004f168b
    JNZ 0x004f177d                      ; 004f168d
        ;   XREF to: 004f177d (CONDITIONAL_JUMP)  ; LAB_004f177d
    FLD float ptr [ESP + 0x34]          ; 004f1693
    FMUL double ptr [0x005e53b7]        ; 004f1697 | DAT_005e53b7
    FSUBR float ptr [EBX + 0x1ffd4]     ; 004f169d
    FST float ptr [EBX + 0x1ffd4]       ; 004f16a3
    FLDZ                                ; 004f16a9
    FCOMPP                              ; 004f16ab
    FNSTSW AX                           ; 004f16ad
    SAHF                                ; 004f16af
    JBE 0x004f16b8                      ; 004f16b0
        ;   XREF to: 004f16b8 (CONDITIONAL_JUMP)  ; LAB_004f16b8
    MOV dword ptr [EBX + 0x1ffd4],ECX   ; 004f16b2
    PUSH EDI                            ; 004f16b8
        ;   Label: LAB_004f16b8
    PUSH ESI                            ; 004f16b9
    PUSH 0x1                            ; 004f16ba
    PUSH 0x5e53af                       ; 004f16bc | = "shoot"
    LEA ESI,[EBX + 0x158]               ; 004f16c1
    PUSH ESI                            ; 004f16c7
    CALL FUN_00524a00                   ; 004f16c8
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a00()
    ADD ESP,0x4                         ; 004f16cd
    PUSH EAX                            ; 004f16d0
    CALL FUN_005240c0                   ; 004f16d1
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005240c0()
    ADD ESP,0xc                         ; 004f16d6
    PUSH 0x567360                       ; 004f16d9 | LAB_00567360
    MOV EDI,dword ptr [0x01d06cb4]      ; 004f16de | DAT_01d06cb4
    PUSH EDI                            ; 004f16e4
    PUSH dword ptr [EBX + 0x1ffd4]      ; 004f16e5
    PUSH 0x0                            ; 004f16eb
    PUSH EAX                            ; 004f16ed
    PUSH ESI                            ; 004f16ee
    CALL FUN_00568100                   ; 004f16ef
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined FUN_00568100()
    FLD float ptr [EBX + 0xc204]        ; 004f16f4
    FMUL float ptr [0x005e53bf]         ; 004f16fa | DAT_005e53bf
    FMUL double ptr [0x005e53b7]        ; 004f1700 | DAT_005e53b7
    ADD ESP,0x18                        ; 004f1706
    FMUL float ptr [ESP + 0x3c]         ; 004f1709
    FADD float ptr [EBX + 0x1ffd8]      ; 004f170d
    FSTP float ptr [EBX + 0x1ffd8]      ; 004f1713
    CMP dword ptr [EBX + 0x1ffd8],0x3f490fdb ; 004f1719
    JLE 0x004f17af                      ; 004f1723
        ;   XREF to: 004f17af (CONDITIONAL_JUMP)  ; LAB_004f17af
    MOV dword ptr [EBX + 0x1ffd8],0x3f490fdb ; 004f1729
    LEA ESI,[ESP + 0x8]                 ; 004f1733
        ;   Label: LAB_004f1733
    PUSH dword ptr [EBX + 0x1ffd8]      ; 004f1737
    CALL FUN_005b7af0                   ; 004f173d
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7af0()
    ADD ESP,0x4                         ; 004f1742
    LEA EDI,[ESP + 0x18]                ; 004f1745
    PUSH 0x567360                       ; 004f1749 | LAB_00567360
    MOV EAX,[0x01d06cb4]                ; 004f174e | DAT_01d06cb4
    LEA ESI,[ESP + 0xc]                 ; 004f1753
    PUSH EAX                            ; 004f1757
    MOVSD ES:EDI,ESI                    ; 004f1758
    MOVSD ES:EDI,ESI                    ; 004f1759
    MOVSD ES:EDI,ESI                    ; 004f175a
    MOVSD ES:EDI,ESI                    ; 004f175b
    LEA EAX,[ESP + 0x20]                ; 004f175c
    PUSH dword ptr [EBX + 0x1ffd4]      ; 004f1760
    PUSH EAX                            ; 004f1766
    ADD EBX,0x158                       ; 004f1767
    PUSH EBX                            ; 004f176d
    CALL FUN_005695e0                   ; 004f176e
        ;   XREF to: 005695e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005695e0()
    ADD ESP,0x14                        ; 004f1773
    POP ESI                             ; 004f1776
    POP EDI                             ; 004f1777
    ADD ESP,0x28                        ; 004f1778
        ;   Label: LAB_004f1778
    POP EBX                             ; 004f177b
    RET                                 ; 004f177c
    FLD float ptr [ESP + 0x34]          ; 004f177d
        ;   Label: LAB_004f177d
    FMUL double ptr [0x005e53b7]        ; 004f1781 | DAT_005e53b7
    FADD float ptr [EBX + 0x1ffd4]      ; 004f1787
    FST float ptr [EBX + 0x1ffd4]       ; 004f178d
    FLD1                                ; 004f1793
    FCOMPP                              ; 004f1795
    FNSTSW AX                           ; 004f1797
    SAHF                                ; 004f1799
    JNC 0x004f16b8                      ; 004f179a
        ;   XREF to: 004f16b8 (CONDITIONAL_JUMP)  ; LAB_004f16b8
    MOV dword ptr [EBX + 0x1ffd4],0x3f800000 ; 004f17a0
    JMP 0x004f16b8                      ; 004f17aa
        ;   XREF to: 004f16b8 (UNCONDITIONAL_JUMP)  ; LAB_004f16b8
    FLD float ptr [EBX + 0x1ffd8]       ; 004f17af
        ;   Label: LAB_004f17af
    FCOMP float ptr [0x005e53c3]        ; 004f17b5 | DAT_005e53c3
    FNSTSW AX                           ; 004f17bb
    SAHF                                ; 004f17bd
    JNC 0x004f1733                      ; 004f17be
        ;   XREF to: 004f1733 (CONDITIONAL_JUMP)  ; LAB_004f1733
    MOV dword ptr [EBX + 0x1ffd8],0xbf490fdb ; 004f17c4
    JMP 0x004f1733                      ; 004f17ce
        ;   XREF to: 004f1733 (UNCONDITIONAL_JUMP)  ; LAB_004f1733

