; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a1570(char *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a5700 at 004a58cc
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00616040
;   undefined4 DAT_01511cbc
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf48c
;   undefined4 DAT_01caf490
;   undefined4 DAT_01caf494
;   undefined4 DAT_01caf498
;   undefined4 DAT_01caf49c
;   undefined4 DAT_01caf4a0
;   undefined4 DAT_01caf4a1
;   ... and 3 more
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0
;   engine_font.cpp_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1570
        ;   Label: core_flashlit.cpp_FUN_004a1570
    PUSH ESI                            ; 004a1571
    PUSH EDI                            ; 004a1572
    PUSH EBP                            ; 004a1573
    SUB ESP,0x4                         ; 004a1574
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a1577
    PUSH 0x1caf4a0                      ; 004a157b | DAT_01caf4a0
    MOV EDX,0x1                         ; 004a1580
    PUSH EBP                            ; 004a1585
    MOV dword ptr [0x01caf568],EDX      ; 004a1586 | DAT_01caf568
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004a158c
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1591
    TEST EAX,EAX                        ; 004a1594
    JNZ 0x004a15a9                      ; 004a1596
        ;   XREF to: 004a15a9 (CONDITIONAL_JUMP)  ; LAB_004a15a9
    CMP dword ptr [0x00616040],0x0      ; 004a1598 | DAT_00616040
    JL 0x004a15dc                       ; 004a159f
        ;   XREF to: 004a15dc (CONDITIONAL_JUMP)  ; LAB_004a15dc
    ADD ESP,0x4                         ; 004a15a1
        ;   Label: LAB_004a15a1
    POP EBP                             ; 004a15a4
    POP EDI                             ; 004a15a5
    POP ESI                             ; 004a15a6
    POP EBX                             ; 004a15a7
    RET                                 ; 004a15a8
    MOV EDI,0x1caf4a0                   ; 004a15a9
        ;   Label: LAB_004a15a9
    XOR EBX,EBX                         ; 004a15ae
    MOV ESI,EBP                         ; 004a15b0
    MOV dword ptr [0x01caf488],EBX      ; 004a15b2 | DAT_01caf488
    PUSH EDI                            ; 004a15b8 | DAT_01caf4a0
    MOV AL,byte ptr [ESI]               ; 004a15b9
        ;   Label: LAB_004a15b9
    MOV byte ptr [EDI],AL               ; 004a15bb | DAT_01caf4a0 | DAT_01caf4a2
    CMP AL,0x0                          ; 004a15bd
    JZ 0x004a15d1                       ; 004a15bf
        ;   XREF to: 004a15d1 (CONDITIONAL_JUMP)  ; LAB_004a15d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004a15c1
    ADD ESI,0x2                         ; 004a15c4
    MOV byte ptr [EDI + 0x1],AL         ; 004a15c7 | DAT_01caf4a1 | DAT_01caf4a3
    ADD EDI,0x2                         ; 004a15ca
    CMP AL,0x0                          ; 004a15cd
    JNZ 0x004a15b9                      ; 004a15cf
        ;   XREF to: 004a15b9 (CONDITIONAL_JUMP)  ; LAB_004a15b9
    POP EDI                             ; 004a15d1
        ;   Label: LAB_004a15d1
    MOV dword ptr [0x00616040],0xffffffff ; 004a15d2 | DAT_00616040
    MOV EDI,dword ptr [0x01caf488]      ; 004a15dc | DAT_01caf488
        ;   Label: LAB_004a15dc
    MOV EAX,[0x01c2a370]                ; 004a15e2 | DAT_01c2a370
    ADD EDI,EAX                         ; 004a15e7
    MOV dword ptr [0x01caf488],EDI      ; 004a15e9 | DAT_01caf488
    CMP EDI,0x10000                     ; 004a15ef
    JL 0x004a15a1                       ; 004a15f5
        ;   XREF to: 004a15a1 (CONDITIONAL_JUMP)  ; LAB_004a15a1
    PUSH EBP                            ; 004a15f7
    MOV EDX,dword ptr [0x01511cbc]      ; 004a15f8 | DAT_01511cbc
    PUSH EDX                            ; 004a15fe
    CALL engine_font.cpp_FUN_004aaf00   ; 004a15ff
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 004a1604
    PUSH EBP                            ; 004a1607
    MOV ECX,dword ptr [0x01511cbc]      ; 004a1608 | DAT_01511cbc
    MOV EBX,EAX                         ; 004a160e
    PUSH ECX                            ; 004a1610
    MOV dword ptr [ESP + 0x8],EAX       ; 004a1611
    LEA ESI,[EBX + 0x8]                 ; 004a1615
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0 ; 004a1618
        ;   XREF to: 004aafb0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004aafb0(CBitFont * this_ptr, char * text_string)
    MOV EDX,dword ptr [0x01c2a37c]      ; 004a161d | DAT_01c2a37c
    MOV EBX,dword ptr [0x01c2a380]      ; 004a1623 | DAT_01c2a380
    ADD ESP,0x8                         ; 004a1629
    MOV EDI,EAX                         ; 004a162c
    LEA EBP,[EAX + 0x6]                 ; 004a162e
    ADD EBX,0x40                        ; 004a1631
    LEA EAX,[EDX + ESI*0x1]             ; 004a1634
    LEA ECX,[EBX + EBP*0x1]             ; 004a1637
    CMP EAX,dword ptr [0x006141b8]      ; 004a163a | DAT_006141b8
    JLE 0x004a164b                      ; 004a1640
        ;   XREF to: 004a164b (CONDITIONAL_JUMP)  ; LAB_004a164b
    MOV EAX,[0x006141b8]                ; 004a1642 | DAT_006141b8
    MOV EDX,EAX                         ; 004a1647
    SUB EDX,ESI                         ; 004a1649
    CMP ECX,dword ptr [0x006141bc]      ; 004a164b | DAT_006141bc
        ;   Label: LAB_004a164b
    JLE 0x004a1660                      ; 004a1651
        ;   XREF to: 004a1660 (CONDITIONAL_JUMP)  ; LAB_004a1660
    MOV ECX,dword ptr [0x01c2a380]      ; 004a1653 | DAT_01c2a380
    SUB ECX,0x14                        ; 004a1659
    MOV EBX,ECX                         ; 004a165c
    SUB EBX,EBP                         ; 004a165e
    MOV EBP,dword ptr [ESP]             ; 004a1660
        ;   Label: LAB_004a1660
    MOV dword ptr [0x00616040],EDX      ; 004a1663 | DAT_00616040
    ADD EDX,EAX                         ; 004a1669
    SUB EDX,EBP                         ; 004a166b
    MOV [0x01caf490],EAX                ; 004a166d | DAT_01caf490
    MOV EAX,EDX                         ; 004a1672
    SAR EDX,0x1f                        ; 004a1674
    SUB EAX,EDX                         ; 004a1677
    SAR EAX,0x1                         ; 004a1679
    MOV dword ptr [0x01caf48c],EBX      ; 004a167b | DAT_01caf48c
    LEA EDX,[EBX + ECX*0x1]             ; 004a1681
    SUB EDX,EDI                         ; 004a1684
    MOV [0x01caf498],EAX                ; 004a1686 | DAT_01caf498
    MOV EAX,EDX                         ; 004a168b
    SAR EDX,0x1f                        ; 004a168d
    SUB EAX,EDX                         ; 004a1690
    SAR EAX,0x1                         ; 004a1692
    MOV dword ptr [0x01caf494],ECX      ; 004a1694 | DAT_01caf494
    MOV [0x01caf49c],EAX                ; 004a169a | DAT_01caf49c
    ADD ESP,0x4                         ; 004a169f
    POP EBP                             ; 004a16a2
    POP EDI                             ; 004a16a3
    POP ESI                             ; 004a16a4
    POP EBX                             ; 004a16a5
    RET                                 ; 004a16a6

