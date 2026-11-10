; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_remove_FUN_005b1640(CClothList *this_ptr,int index)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_setCharacterModel_FUN_0042b440 at 0042b503
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005f121a
;   TerminatedCString s_CClothList_remove_invali_005f122c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_necklace.cpp_FUN_005ade00
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1640
        ;   Label: core_cloth.cpp_CClothList_remove_FUN_005b1640
    PUSH ESI                            ; 005b1641
    PUSH EBP                            ; 005b1642
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b1643
    TEST EBP,EBP                        ; 005b1647
    JL 0x005b1653                       ; 005b1649
        ;   XREF to: 005b1653 (CONDITIONAL_JUMP)  ; LAB_005b1653
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b164b
    CMP EBP,dword ptr [EAX]             ; 005b164f
    JL 0x005b1676                       ; 005b1651
        ;   XREF to: 005b1676 (CONDITIONAL_JUMP)  ; LAB_005b1676
    MOV ECX,0x5f121a                    ; 005b1653 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_005b1653
    MOV EBX,0x5f1                       ; 005b1658
    PUSH 0x5f122c                       ; 005b165d | = "CClothList::remove - invalid index"
    MOV dword ptr [0x01d046a0],ECX      ; 005b1662 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005b1668 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b166e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b1673
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b1676
        ;   Label: LAB_005b1676
    LEA EAX,[EBP*0x4 + 0x0]             ; 005b167a
    ADD EAX,ESI                         ; 005b1681
    MOV EAX,dword ptr [EAX + 0x194]     ; 005b1683
    TEST EAX,EAX                        ; 005b1689
    JZ 0x005b16a1                       ; 005b168b
        ;   XREF to: 005b16a1 (CONDITIONAL_JUMP)  ; LAB_005b16a1
    PUSH 0x0                            ; 005b168d
    PUSH EAX                            ; 005b168f
    CALL core_necklace.cpp_FUN_005ade00 ; 005b1690
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 005b1695
    PUSH EAX                            ; 005b1698
    CALL crt_unknown.c_FUN_005b7fdc     ; 005b1699
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b169e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b16a1
        ;   Label: LAB_005b16a1
    INC EBP                             ; 005b16a5
    CMP EBP,dword ptr [EAX]             ; 005b16a6
    JGE 0x005b170a                      ; 005b16a8
        ;   XREF to: 005b170a (CONDITIONAL_JUMP)  ; LAB_005b170a
    PUSH EDI                            ; 005b16aa
    LEA ECX,[EBP*0x4 + 0x0]             ; 005b16ab
    LEA ESI,[EAX + 0x4]                 ; 005b16b2
    ADD ECX,EAX                         ; 005b16b5
    LEA EAX,[EBP*0x4 + 0x0]             ; 005b16b7
    ADD EAX,EBP                         ; 005b16be
    SHL EAX,0x3                         ; 005b16c0
    LEA EBX,[EAX + -0x28]               ; 005b16c3
    ADD EBX,ESI                         ; 005b16c6
    LEA EDX,[EAX + ESI*0x1]             ; 005b16c8
    MOV ESI,EDX                         ; 005b16cb
        ;   Label: LAB_005b16cb
    MOV EDI,EBX                         ; 005b16cd
    ADD ECX,0x4                         ; 005b16cf
    PUSH EDI                            ; 005b16d2
    MOV AL,byte ptr [ESI]               ; 005b16d3
        ;   Label: LAB_005b16d3
    MOV byte ptr [EDI],AL               ; 005b16d5
    CMP AL,0x0                          ; 005b16d7
    JZ 0x005b16eb                       ; 005b16d9
        ;   XREF to: 005b16eb (CONDITIONAL_JUMP)  ; LAB_005b16eb
    MOV AL,byte ptr [ESI + 0x1]         ; 005b16db
    ADD ESI,0x2                         ; 005b16de
    MOV byte ptr [EDI + 0x1],AL         ; 005b16e1
    ADD EDI,0x2                         ; 005b16e4
    CMP AL,0x0                          ; 005b16e7
    JNZ 0x005b16d3                      ; 005b16e9
        ;   XREF to: 005b16d3 (CONDITIONAL_JUMP)  ; LAB_005b16d3
    POP EDI                             ; 005b16eb
        ;   Label: LAB_005b16eb
    MOV EAX,dword ptr [ECX + 0x190]     ; 005b16ec
    MOV dword ptr [ECX + 0x18c],EAX     ; 005b16f2
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b16f8
    INC EBP                             ; 005b16fc
    ADD EBX,0x28                        ; 005b16fd
    MOV ESI,dword ptr [EAX]             ; 005b1700
    ADD EDX,0x28                        ; 005b1702
    CMP EBP,ESI                         ; 005b1705
    JL 0x005b16cb                       ; 005b1707
        ;   XREF to: 005b16cb (CONDITIONAL_JUMP)  ; LAB_005b16cb
    POP EDI                             ; 005b1709
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b170a
        ;   Label: LAB_005b170a
    MOV EBP,dword ptr [EAX]             ; 005b170e
    DEC EBP                             ; 005b1710
    MOV dword ptr [EAX],EBP             ; 005b1711
    LEA EAX,[EBP*0x4 + 0x0]             ; 005b1713
    ADD EAX,EBP                         ; 005b171a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b171c
    SHL EAX,0x3                         ; 005b1720
    ADD EAX,EDX                         ; 005b1723
    MOV byte ptr [EAX + 0x4],0x0        ; 005b1725
    MOV EAX,dword ptr [EDX]             ; 005b1729
    SHL EAX,0x2                         ; 005b172b
    ADD EAX,EDX                         ; 005b172e
    MOV dword ptr [EAX + 0x194],0x0     ; 005b1730
    POP EBP                             ; 005b173a
    POP ESI                             ; 005b173b
    POP EBX                             ; 005b173c
    RET                                 ; 005b173d

