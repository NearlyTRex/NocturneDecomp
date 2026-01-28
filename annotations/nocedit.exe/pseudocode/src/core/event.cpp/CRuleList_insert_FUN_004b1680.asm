; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_0040fffe at 00410038
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625f5d
;   TerminatedCString s_CRuleList_insert_invalid_00625f6f
;   TerminatedCString s_core_event_cpp_00625f91
;   TerminatedCString s_CRuleList_insert_list_fu_00625fa3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1680
        ;   Label: core_event.cpp_CRuleList_insert_FUN_004b1680
    PUSH ESI                            ; 004b1681
    PUSH EDI                            ; 004b1682
    PUSH EBP                            ; 004b1683
    SUB ESP,0x8                         ; 004b1684
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b1687
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b168b
    TEST ESI,ESI                        ; 004b168f
    JL 0x004b1697                       ; 004b1691
        ;   XREF to: 004b1697 (CONDITIONAL_JUMP)  ; LAB_004b1697
    CMP ESI,dword ptr [EBX]             ; 004b1693
    JLE 0x004b16ba                      ; 004b1695
        ;   XREF to: 004b16ba (CONDITIONAL_JUMP)  ; LAB_004b16ba
    MOV ECX,0x625f5d                    ; 004b1697 | = "..\\core\\event.cpp"
        ;   Label: LAB_004b1697
    MOV EDI,0xcd9                       ; 004b169c
    PUSH 0x625f6f                       ; 004b16a1 | = "CRuleList::insert - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b16a6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b16ac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b16b2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b16b7
    CMP dword ptr [EBX],0x5             ; 004b16ba
        ;   Label: LAB_004b16ba
    JGE 0x004b1794                      ; 004b16bd
        ;   XREF to: 004b1794 (CONDITIONAL_JUMP)  ; LAB_004b1794
    MOV EDX,dword ptr [EBX]             ; 004b16c3
        ;   Label: LAB_004b16c3
    SUB EDX,ESI                         ; 004b16c5
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b16c7
    SUB EAX,EDX                         ; 004b16ce
    SHL EAX,0x3                         ; 004b16d0
    ADD EAX,EDX                         ; 004b16d3
    SHL EAX,0x2                         ; 004b16d5
    PUSH EAX                            ; 004b16d8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b16d9
    SUB EAX,ESI                         ; 004b16e0
    SHL EAX,0x3                         ; 004b16e2
    ADD EAX,ESI                         ; 004b16e5
    LEA EBP,[EBX + 0x4]                 ; 004b16e7
    SHL EAX,0x2                         ; 004b16ea
    LEA EDX,[ESI + 0x1]                 ; 004b16ed
    MOV dword ptr [ESP + 0x4],EAX       ; 004b16f0
    LEA EDI,[EAX + EBP*0x1]             ; 004b16f4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b16f7
    SUB EAX,EDX                         ; 004b16fe
    SHL EAX,0x3                         ; 004b1700
    ADD EAX,EDX                         ; 004b1703
    SHL EAX,0x2                         ; 004b1705
    PUSH EDI                            ; 004b1708
    ADD EBP,EAX                         ; 004b1709
    PUSH EBP                            ; 004b170b
    MOV dword ptr [ESP + 0x10],EAX      ; 004b170c
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b1710
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004b1715
    SUB EDX,ESI                         ; 004b1717
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b1719
    SUB EAX,EDX                         ; 004b1720
    SHL EAX,0x3                         ; 004b1722
    ADD EAX,EDX                         ; 004b1725
    ADD ESP,0xc                         ; 004b1727
    SHL EAX,0x2                         ; 004b172a
    MOV EBP,dword ptr [ESP]             ; 004b172d
    PUSH EAX                            ; 004b1730
    LEA EAX,[EBX + 0x1f8]               ; 004b1731
    ADD EBP,EAX                         ; 004b1737
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b1739
    PUSH EBP                            ; 004b173d
    ADD EAX,ESI                         ; 004b173e
    PUSH EAX                            ; 004b1740
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b1741
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX]             ; 004b1746
    ADD ESP,0xc                         ; 004b1748
    INC EAX                             ; 004b174b
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b174c
    MOV dword ptr [EBX],EAX             ; 004b1750
    PUSH EDI                            ; 004b1752
    MOV AL,byte ptr [ESI]               ; 004b1753
        ;   Label: LAB_004b1753
    MOV byte ptr [EDI],AL               ; 004b1755
    CMP AL,0x0                          ; 004b1757
    JZ 0x004b176b                       ; 004b1759
        ;   XREF to: 004b176b (CONDITIONAL_JUMP)  ; LAB_004b176b
    MOV AL,byte ptr [ESI + 0x1]         ; 004b175b
    ADD ESI,0x2                         ; 004b175e
    MOV byte ptr [EDI + 0x1],AL         ; 004b1761
    ADD EDI,0x2                         ; 004b1764
    CMP AL,0x0                          ; 004b1767
    JNZ 0x004b1753                      ; 004b1769
        ;   XREF to: 004b1753 (CONDITIONAL_JUMP)  ; LAB_004b1753
    POP EDI                             ; 004b176b
        ;   Label: LAB_004b176b
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b176c
    MOV EDI,EBP                         ; 004b1770
    PUSH EDI                            ; 004b1772
    MOV AL,byte ptr [ESI]               ; 004b1773
        ;   Label: LAB_004b1773
    MOV byte ptr [EDI],AL               ; 004b1775
    CMP AL,0x0                          ; 004b1777
    JZ 0x004b178b                       ; 004b1779
        ;   XREF to: 004b178b (CONDITIONAL_JUMP)  ; LAB_004b178b
    MOV AL,byte ptr [ESI + 0x1]         ; 004b177b
    ADD ESI,0x2                         ; 004b177e
    MOV byte ptr [EDI + 0x1],AL         ; 004b1781
    ADD EDI,0x2                         ; 004b1784
    CMP AL,0x0                          ; 004b1787
    JNZ 0x004b1773                      ; 004b1789
        ;   XREF to: 004b1773 (CONDITIONAL_JUMP)  ; LAB_004b1773
    POP EDI                             ; 004b178b
        ;   Label: LAB_004b178b
    ADD ESP,0x8                         ; 004b178c
    POP EBP                             ; 004b178f
    POP EDI                             ; 004b1790
    POP ESI                             ; 004b1791
    POP EBX                             ; 004b1792
    RET                                 ; 004b1793
    MOV EAX,0x625f91                    ; 004b1794 | = "..\\core\\event.cpp"
        ;   Label: LAB_004b1794
    MOV EDX,0xcda                       ; 004b1799
    PUSH 0x625fa3                       ; 004b179e | = "CRuleList::insert - list full"
    MOV [0x02f0ca48],EAX                ; 004b17a3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b17a8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b17ae
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b17b3
    JMP 0x004b16c3                      ; 004b17b6
        ;   XREF to: 004b16c3 (UNCONDITIONAL_JUMP)  ; LAB_004b16c3

