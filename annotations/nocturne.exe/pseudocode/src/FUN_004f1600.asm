; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f1600(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)
;
;
; XREF[13]:
;   FUN_00422050 at 004221b7
;   FUN_00422370 at 00422638
;   FUN_004247f0 at 00424978
;   FUN_0043a470 at 0043a8a9
;   FUN_00479b60 at 00479d96
;   FUN_00496d10 at 00497277
;   FUN_004a9040 at 004a918c
;   FUN_004b3880 at 004b3d09
;   FUN_004baba0 at 004bb15b
;   FUN_004de1b0 at 004de2c1
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_01e312f4
;
; Called Functions:
;   FUN_004f0c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1600
        ;   Label: FUN_004f1600
    PUSH ESI                            ; 004f1601
    PUSH EDI                            ; 004f1602
    PUSH EBP                            ; 004f1603
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f1604
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f1608
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f160c
    LEA EDI,[EBX + 0x138c0]             ; 004f1610
    FLD float ptr [EDI]                 ; 004f1616
    FCOMP float ptr [ESI]               ; 004f1618
    FNSTSW AX                           ; 004f161a
    SAHF                                ; 004f161c
    JZ 0x004f166a                       ; 004f161d
        ;   XREF to: 004f166a (CONDITIONAL_JUMP)  ; LAB_004f166a
    LEA EAX,[EBX + 0x138c0]             ; 004f161f
        ;   Label: LAB_004f161f
    CMP EAX,ESI                         ; 004f1625
    JNZ 0x004f1682                      ; 004f1627
        ;   XREF to: 004f1682 (CONDITIONAL_JUMP)  ; LAB_004f1682
    MOV EDX,0x1                         ; 004f1629
        ;   Label: LAB_004f1629
    LEA EDI,[EBX + 0x138cc]             ; 004f162e
    MOV dword ptr [0x01e312f4],EDX      ; 004f1634 | DAT_01e312f4
    PUSH EBP                            ; 004f163a
        ;   Label: LAB_004f163a
    PUSH EDI                            ; 004f163b
    PUSH ESI                            ; 004f163c
    PUSH EBX                            ; 004f163d
    CALL FUN_004f0c20                   ; 004f163e
        ;   XREF to: 004f0c20 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0c20()
    ADD ESP,0x10                        ; 004f1643
    MOV dword ptr [EBX + 0x138bc],EAX   ; 004f1646
    CMP EAX,0x1                         ; 004f164c
    JNZ 0x004f1694                      ; 004f164f
        ;   XREF to: 004f1694 (CONDITIONAL_JUMP)  ; LAB_004f1694
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f1651
        ;   Label: LAB_004f1651
    LEA EAX,[EBX + 0x138cc]             ; 004f1655
    CMP EAX,ECX                         ; 004f165b
    JNZ 0x004f16a6                      ; 004f165d
        ;   XREF to: 004f16a6 (CONDITIONAL_JUMP)  ; LAB_004f16a6
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 004f165f
    POP EBP                             ; 004f1665
    POP EDI                             ; 004f1666
    POP ESI                             ; 004f1667
    POP EBX                             ; 004f1668
    RET                                 ; 004f1669
    FLD float ptr [EDI + 0x4]           ; 004f166a
        ;   Label: LAB_004f166a
    FCOMP float ptr [ESI + 0x4]         ; 004f166d
    FNSTSW AX                           ; 004f1670
    SAHF                                ; 004f1672
    JNZ 0x004f161f                      ; 004f1673
        ;   XREF to: 004f161f (CONDITIONAL_JUMP)  ; LAB_004f161f
    FLD float ptr [EDI + 0x8]           ; 004f1675
    FCOMP float ptr [ESI + 0x8]         ; 004f1678
    FNSTSW AX                           ; 004f167b
    SAHF                                ; 004f167d
    JZ 0x004f1651                       ; 004f167e
        ;   XREF to: 004f1651 (CONDITIONAL_JUMP)  ; LAB_004f1651
    JMP 0x004f161f                      ; 004f1680
        ;   XREF to: 004f161f (UNCONDITIONAL_JUMP)  ; LAB_004f161f
    MOV EDX,dword ptr [ESI]             ; 004f1682
        ;   Label: LAB_004f1682
    MOV dword ptr [EAX],EDX             ; 004f1684
    MOV EDX,dword ptr [ESI + 0x4]       ; 004f1686
    MOV dword ptr [EAX + 0x4],EDX       ; 004f1689
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f168c
    MOV dword ptr [EAX + 0x8],EDX       ; 004f168f
    JMP 0x004f1629                      ; 004f1692
        ;   XREF to: 004f1629 (UNCONDITIONAL_JUMP)  ; LAB_004f1629
    MOV EAX,[0x01e312f4]                ; 004f1694 | DAT_01e312f4
        ;   Label: LAB_004f1694
    INC EAX                             ; 004f1699
    MOV [0x01e312f4],EAX                ; 004f169a | DAT_01e312f4
    CMP EAX,0x3                         ; 004f169f
    JLE 0x004f163a                      ; 004f16a2
        ;   XREF to: 004f163a (CONDITIONAL_JUMP)  ; LAB_004f163a
    JMP 0x004f1651                      ; 004f16a4
        ;   XREF to: 004f1651 (UNCONDITIONAL_JUMP)  ; LAB_004f1651
    MOV EDX,dword ptr [EAX]             ; 004f16a6
        ;   Label: LAB_004f16a6
    MOV dword ptr [ECX],EDX             ; 004f16a8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f16aa
    MOV dword ptr [ECX + 0x4],EDX       ; 004f16ad
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f16b0
    MOV dword ptr [ECX + 0x8],EDX       ; 004f16b3
    MOV EAX,dword ptr [EBX + 0x138bc]   ; 004f16b6
    POP EBP                             ; 004f16bc
    POP EDI                             ; 004f16bd
    POP ESI                             ; 004f16be
    POP EBX                             ; 004f16bf
    RET                                 ; 004f16c0

