; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1720(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_005b0c90 at 005b0cb2
;
; Referenced Globals:
;   void* PTR_CharUpperBuffA_005b34a0 = 001b3a68
;   undefined4 DAT_00607e7c
;   undefined4 DAT_02d25930
;
; Called Functions:
;   CharUpperBuffA
;   FUN_005ac9c0
;   FUN_005aca30
;   FUN_005aca50
;   FUN_005b1e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1720
        ;   Label: FUN_005b1720
    PUSH ESI                            ; 005b1721
    SUB ESP,0x4                         ; 005b1722
    MOV EAX,ESP                         ; 005b1725
    PUSH EAX                            ; 005b1727
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b1728
    PUSH EDX                            ; 005b172c
    CALL FUN_005aca30                   ; 005b172d
        ;   XREF to: 005aca30 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca30()
    ADD ESP,0x8                         ; 005b1732
    MOV EAX,ESP                         ; 005b1735
    PUSH EAX                            ; 005b1737
    CALL FUN_005aca50                   ; 005b1738
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca50()
    ADD ESP,0x4                         ; 005b173d
    XOR DL,DL                           ; 005b1740
    MOV EBX,dword ptr [0x00607e7c]      ; 005b1742 | DAT_00607e7c
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005b1748
    CMP EBX,0x3a4                       ; 005b174b
    JNZ 0x005b177c                      ; 005b1751
        ;   XREF to: 005b177c (CONDITIONAL_JUMP)  ; LAB_005b177c
    CMP dword ptr [0x02d25930],0x0      ; 005b1753 | DAT_02d25930
    JZ 0x005b177c                       ; 005b175a
        ;   XREF to: 005b177c (CONDITIONAL_JUMP)  ; LAB_005b177c
    XOR EAX,EAX                         ; 005b175c
    MOV AL,byte ptr [ESP]               ; 005b175e
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005b1761
    AND AL,0x1                          ; 005b1767
    AND EAX,0xff                        ; 005b1769
    JZ 0x005b177c                       ; 005b176e
        ;   XREF to: 005b177c (CONDITIONAL_JUMP)  ; LAB_005b177c
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b1770
    PUSH ESI                            ; 005b1774
    CALL FUN_005b1e90                   ; 005b1775
        ;   XREF to: 005b1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1e90()
    JMP 0x005b1792                      ; 005b177a
        ;   XREF to: 005b1792 (UNCONDITIONAL_JUMP)  ; LAB_005b1792
    PUSH 0x1                            ; 005b177c
        ;   Label: LAB_005b177c
    LEA EAX,[ESP + 0x4]                 ; 005b177e
    PUSH EAX                            ; 005b1782
    CALL dword ptr CS:[0x5b34a0]        ; 005b1783 | PTR_CharUpperBuffA_005b34a0
    MOV EAX,ESP                         ; 005b178a
    PUSH EAX                            ; 005b178c
    CALL FUN_005ac9c0                   ; 005b178d
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac9c0()
    ADD ESP,0x4                         ; 005b1792
        ;   Label: LAB_005b1792
    ADD ESP,0x4                         ; 005b1795
    POP ESI                             ; 005b1798
    POP EBX                             ; 005b1799
    RET                                 ; 005b179a

