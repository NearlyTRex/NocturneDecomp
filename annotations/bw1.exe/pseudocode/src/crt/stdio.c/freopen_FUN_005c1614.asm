; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_freopen_FUN_005c1614(char *filename,char *mode,_FILE *stream)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; _FILE *          Stack[0xc]:4   stream
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 005032f6
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;   undefined4 DAT_00626778
;
; Called Functions:
;   crt_unknown.c_FUN_005c12d0
;   crt_unknown.c_FUN_005c140c
;   crt_unknown.c_FUN_005c1594
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1614
        ;   Label: crt_stdio.c_freopen_FUN_005c1614
    PUSH ESI                            ; 005c1615
    PUSH EDI                            ; 005c1616
    PUSH EBP                            ; 005c1617
    SUB ESP,0x4                         ; 005c1618
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c161b
    MOV EAX,ESP                         ; 005c161f
    PUSH EAX                            ; 005c1621
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c1622
    PUSH EDX                            ; 005c1626
    CALL crt_unknown.c_FUN_005c12d0     ; 005c1627
        ;   XREF to: 005c12d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c12d0()
    ADD ESP,0x8                         ; 005c162c
    MOV EDI,EAX                         ; 005c162f
    TEST EAX,EAX                        ; 005c1631
    JZ 0x005c169e                       ; 005c1633
        ;   XREF to: 005c169e (CONDITIONAL_JUMP)  ; LAB_005c169e
    MOV EBX,dword ptr [ESI + 0x10]      ; 005c1635
    PUSH EBX                            ; 005c1638
    CALL dword ptr [0x00626600]         ; 005c1639 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV ECX,dword ptr [0x00626778]      ; 005c163f | DAT_00626778
    ADD ESP,0x4                         ; 005c1645
    TEST ECX,ECX                        ; 005c1648
    JZ 0x005c1656                       ; 005c164a
        ;   XREF to: 005c1656 (CONDITIONAL_JUMP)  ; LAB_005c1656
    PUSH EBX                            ; 005c164c
    CALL dword ptr [0x00626778]         ; 005c164d | DAT_00626778
    ADD ESP,0x4                         ; 005c1653
    PUSH ESI                            ; 005c1656
        ;   Label: LAB_005c1656
    CALL crt_unknown.c_FUN_005c1594     ; 005c1657
        ;   XREF to: 005c1594 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1594()
    ADD ESP,0x4                         ; 005c165c
    MOV ESI,EAX                         ; 005c165f
    TEST EAX,EAX                        ; 005c1661
    JZ 0x005c1692                       ; 005c1663
        ;   XREF to: 005c1692 (CONDITIONAL_JUMP)  ; LAB_005c1692
    MOV ESI,dword ptr [EAX + 0xc]       ; 005c1665
    AND ESI,0x4000                      ; 005c1668
    PUSH EAX                            ; 005c166e
    MOV dword ptr [EAX + 0xc],ESI       ; 005c166f
    PUSH 0x0                            ; 005c1672
    MOV EBP,dword ptr [ESP + 0x8]       ; 005c1674
    PUSH EBP                            ; 005c1678
    MOV ESI,dword ptr [ESP + 0x28]      ; 005c1679
    XOR EAX,EAX                         ; 005c167d
    PUSH EDI                            ; 005c167f
    MOV AL,byte ptr [ESI]               ; 005c1680
    PUSH EAX                            ; 005c1682
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005c1683
    PUSH EAX                            ; 005c1687
    CALL crt_unknown.c_FUN_005c140c     ; 005c1688
        ;   XREF to: 005c140c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c140c()
    ADD ESP,0x18                        ; 005c168d
    MOV ESI,EAX                         ; 005c1690
    PUSH EBX                            ; 005c1692
        ;   Label: LAB_005c1692
    CALL dword ptr [0x00626604]         ; 005c1693 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c1699
    MOV EAX,ESI                         ; 005c169c
    ADD ESP,0x4                         ; 005c169e
        ;   Label: LAB_005c169e
    POP EBP                             ; 005c16a1
    POP EDI                             ; 005c16a2
    POP ESI                             ; 005c16a3
    POP EBX                             ; 005c16a4
    RET                                 ; 005c16a5

