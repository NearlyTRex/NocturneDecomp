; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c16c8(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c17c8 at 005c17fa
;
; Referenced Globals:
;   undefined4 DAT_006013f2
;   undefined4 DAT_006013f4
;   undefined4 DAT_0060140c
;   undefined4 DAT_0060140e
;
; Called Functions:
;   FUN_005c1690
;   FUN_005c43e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c16c8
        ;   Label: FUN_005c16c8
    PUSH ESI                            ; 005c16c9
    PUSH EDI                            ; 005c16ca
    PUSH EBP                            ; 005c16cb
    SUB ESP,0x24                        ; 005c16cc
    MOV EBX,dword ptr [ESP + 0x38]      ; 005c16cf
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005c16d3
    MOV EDX,dword ptr [EBX + 0x20]      ; 005c16d7
    TEST EDX,EDX                        ; 005c16da
    JNZ 0x005c17a8                      ; 005c16dc
        ;   XREF to: 005c17a8 (CONDITIONAL_JUMP)  ; LAB_005c17a8
    LEA EAX,[EDI + 0x76c]               ; 005c16e2
    PUSH EAX                            ; 005c16e8
    CALL FUN_005c1690                   ; 005c16e9
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1690()
    ADD ESP,0x4                         ; 005c16ee
    TEST EAX,EAX                        ; 005c16f1
    JZ 0x005c1708                       ; 005c16f3
        ;   XREF to: 005c1708 (CONDITIONAL_JUMP)  ; LAB_005c1708
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c16f5
    MOV ESI,dword ptr [EAX*0x2 + 0x60140e] ; 005c16f8 | DAT_0060140e
    MOV EAX,dword ptr [EAX*0x2 + 0x60140c] ; 005c16ff | DAT_0060140c
    JMP 0x005c1719                      ; 005c1706
        ;   XREF to: 005c1719 (UNCONDITIONAL_JUMP)  ; LAB_005c1719
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c1708
        ;   Label: LAB_005c1708
    MOV ESI,dword ptr [EAX*0x2 + 0x6013f4] ; 005c170b | DAT_006013f4
    MOV EAX,dword ptr [EAX*0x2 + 0x6013f2] ; 005c1712 | DAT_006013f2
    SAR ESI,0x10                        ; 005c1719
        ;   Label: LAB_005c1719
    SAR EAX,0x10                        ; 005c171c
    SUB ESI,EAX                         ; 005c171f
    XOR EBP,EBP                         ; 005c1721
    MOV ECX,0x1                         ; 005c1723
    MOV dword ptr [ESP],EBP             ; 005c1728
    MOV dword ptr [ESP + 0x4],EBP       ; 005c172b
    MOV dword ptr [ESP + 0x8],EBP       ; 005c172f
    MOV dword ptr [ESP + 0xc],ECX       ; 005c1733
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c1737
    MOV dword ptr [ESP + 0x10],EAX      ; 005c173a
    MOV EAX,ESP                         ; 005c173e
    PUSH EAX                            ; 005c1740
    MOV dword ptr [ESP + 0x18],EDI      ; 005c1741
    MOV dword ptr [ESP + 0x24],EBP      ; 005c1745
    CALL FUN_005c43e0                   ; 005c1749
        ;   XREF to: 005c43e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c43e0()
    ADD ESP,0x4                         ; 005c174e
    MOV EDX,dword ptr [EBX + 0x18]      ; 005c1751
    SUB EDX,dword ptr [ESP + 0x18]      ; 005c1754
    ADD EDX,0x7                         ; 005c1758
    MOV ECX,0x7                         ; 005c175b
    MOV EAX,EDX                         ; 005c1760
    SAR EDX,0x1f                        ; 005c1762
    IDIV ECX                            ; 005c1765
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c1767
    CMP EAX,0x5                         ; 005c176a
    JNZ 0x005c1790                      ; 005c176d
        ;   XREF to: 005c1790 (CONDITIONAL_JUMP)  ; LAB_005c1790
    LEA EDI,[EAX + -0x1]                ; 005c176f
    LEA ECX,[EDI*0x8 + 0x0]             ; 005c1772
    LEA EAX,[EDX + 0x1]                 ; 005c1779
    SUB ECX,EDI                         ; 005c177c
    ADD EAX,ECX                         ; 005c177e
    CMP EAX,ESI                         ; 005c1780
    JLE 0x005c178c                      ; 005c1782
        ;   XREF to: 005c178c (CONDITIONAL_JUMP)  ; LAB_005c178c
    MOV EAX,dword ptr [EBX + 0xc]       ; 005c1784
    SUB EAX,0x2                         ; 005c1787
    JMP 0x005c1791                      ; 005c178a
        ;   XREF to: 005c1791 (UNCONDITIONAL_JUMP)  ; LAB_005c1791
    MOV EAX,EDI                         ; 005c178c
        ;   Label: LAB_005c178c
    JMP 0x005c1791                      ; 005c178e
        ;   XREF to: 005c1791 (UNCONDITIONAL_JUMP)  ; LAB_005c1791
    DEC EAX                             ; 005c1790
        ;   Label: LAB_005c1790
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c1791
        ;   Label: LAB_005c1791
    ADD EBX,EDX                         ; 005c1795
    MOV EDX,EAX                         ; 005c1797
    SHL EAX,0x3                         ; 005c1799
    SUB EAX,EDX                         ; 005c179c
    ADD EAX,EBX                         ; 005c179e
    ADD ESP,0x24                        ; 005c17a0
    POP EBP                             ; 005c17a3
    POP EDI                             ; 005c17a4
    POP ESI                             ; 005c17a5
    POP EBX                             ; 005c17a6
    RET                                 ; 005c17a7
    CMP EDX,0x1                         ; 005c17a8
        ;   Label: LAB_005c17a8
    JNZ 0x005c17ba                      ; 005c17ab
        ;   XREF to: 005c17ba (CONDITIONAL_JUMP)  ; LAB_005c17ba
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c17ad
    SUB EAX,EDX                         ; 005c17b0
    ADD ESP,0x24                        ; 005c17b2
    POP EBP                             ; 005c17b5
    POP EDI                             ; 005c17b6
    POP ESI                             ; 005c17b7
    POP EBX                             ; 005c17b8
    RET                                 ; 005c17b9
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005c17ba
        ;   Label: LAB_005c17ba
    ADD ESP,0x24                        ; 005c17bd
    POP EBP                             ; 005c17c0
    POP EDI                             ; 005c17c1
    POP ESI                             ; 005c17c2
    POP EBX                             ; 005c17c3
    RET                                 ; 005c17c4

