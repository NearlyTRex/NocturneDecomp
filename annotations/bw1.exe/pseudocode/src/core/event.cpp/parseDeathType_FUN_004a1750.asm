; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseDeathType_FUN_004a1750(char *type_name,int *out_type_id)
;
; Parameters:
; char *           Stack[0x4]:4   type_name
; int *            Stack[0x8]:4   out_type_id
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a438e
;
; Referenced Globals:
;   TerminatedCString s_generic_005dcd05
;   TerminatedCString s_drown_005dcd0d
;   undefined4 DAT_005dcd13
;   TerminatedCString s_explode_005dcd18
;   TerminatedCString s_fallApart_005dcd20
;   TerminatedCString s_shatter_005dcd2a
;   TerminatedCString s_electrocute_005dcd32
;   undefined4 DAT_005dcd3e
;   TerminatedCString s_Chopped_005dcd42
;   TerminatedCString s_Crushed_005dcd4a
;   TerminatedCString s_Impale_005dcd52
;   undefined4 DAT_005dcd59
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1750
        ;   Label: core_event.cpp_parseDeathType_FUN_004a1750
    PUSH ESI                            ; 004a1751
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a1752
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a1756
    PUSH 0x5dcd05                       ; 004a175a | = "generic"
    PUSH EBX                            ; 004a175f
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a1760
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1765
    TEST EAX,EAX                        ; 004a1768
    JNZ 0x004a1776                      ; 004a176a
        ;   XREF to: 004a1776 (CONDITIONAL_JUMP)  ; LAB_004a1776
    MOV dword ptr [ESI],EAX             ; 004a176c
    MOV EAX,0x1                         ; 004a176e
    POP ESI                             ; 004a1773
    POP EBX                             ; 004a1774
    RET                                 ; 004a1775
    PUSH 0x5dcd0d                       ; 004a1776 | = "drown"
        ;   Label: LAB_004a1776
    PUSH EBX                            ; 004a177b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a177c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1781
    TEST EAX,EAX                        ; 004a1784
    JNZ 0x004a1796                      ; 004a1786
        ;   XREF to: 004a1796 (CONDITIONAL_JUMP)  ; LAB_004a1796
    MOV dword ptr [ESI],0x1             ; 004a1788
    MOV EAX,0x1                         ; 004a178e
    POP ESI                             ; 004a1793
    POP EBX                             ; 004a1794
    RET                                 ; 004a1795
    PUSH 0x5dcd13                       ; 004a1796 | DAT_005dcd13
        ;   Label: LAB_004a1796
    PUSH EBX                            ; 004a179b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a179c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a17a1
    TEST EAX,EAX                        ; 004a17a4
    JNZ 0x004a17b6                      ; 004a17a6
        ;   XREF to: 004a17b6 (CONDITIONAL_JUMP)  ; LAB_004a17b6
    MOV dword ptr [ESI],0x2             ; 004a17a8
    MOV EAX,0x1                         ; 004a17ae
    POP ESI                             ; 004a17b3
    POP EBX                             ; 004a17b4
    RET                                 ; 004a17b5
    PUSH 0x5dcd18                       ; 004a17b6 | = "explode"
        ;   Label: LAB_004a17b6
    PUSH EBX                            ; 004a17bb
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a17bc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a17c1
    TEST EAX,EAX                        ; 004a17c4
    JNZ 0x004a17d6                      ; 004a17c6
        ;   XREF to: 004a17d6 (CONDITIONAL_JUMP)  ; LAB_004a17d6
    MOV dword ptr [ESI],0x3             ; 004a17c8
    MOV EAX,0x1                         ; 004a17ce
    POP ESI                             ; 004a17d3
    POP EBX                             ; 004a17d4
    RET                                 ; 004a17d5
    PUSH 0x5dcd20                       ; 004a17d6 | = "fallApart"
        ;   Label: LAB_004a17d6
    PUSH EBX                            ; 004a17db
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a17dc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a17e1
    TEST EAX,EAX                        ; 004a17e4
    JNZ 0x004a17f6                      ; 004a17e6
        ;   XREF to: 004a17f6 (CONDITIONAL_JUMP)  ; LAB_004a17f6
    MOV dword ptr [ESI],0x4             ; 004a17e8
    MOV EAX,0x1                         ; 004a17ee
    POP ESI                             ; 004a17f3
    POP EBX                             ; 004a17f4
    RET                                 ; 004a17f5
    PUSH 0x5dcd2a                       ; 004a17f6 | = "shatter"
        ;   Label: LAB_004a17f6
    PUSH EBX                            ; 004a17fb
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a17fc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1801
    TEST EAX,EAX                        ; 004a1804
    JNZ 0x004a1816                      ; 004a1806
        ;   XREF to: 004a1816 (CONDITIONAL_JUMP)  ; LAB_004a1816
    MOV dword ptr [ESI],0x5             ; 004a1808
    MOV EAX,0x1                         ; 004a180e
    POP ESI                             ; 004a1813
    POP EBX                             ; 004a1814
    RET                                 ; 004a1815
    PUSH 0x5dcd32                       ; 004a1816 | = "electrocute"
        ;   Label: LAB_004a1816
    PUSH EBX                            ; 004a181b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a181c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1821
    TEST EAX,EAX                        ; 004a1824
    JNZ 0x004a1836                      ; 004a1826
        ;   XREF to: 004a1836 (CONDITIONAL_JUMP)  ; LAB_004a1836
    MOV dword ptr [ESI],0x6             ; 004a1828
    MOV EAX,0x1                         ; 004a182e
    POP ESI                             ; 004a1833
    POP EBX                             ; 004a1834
    RET                                 ; 004a1835
    PUSH 0x5dcd3e                       ; 004a1836 | DAT_005dcd3e
        ;   Label: LAB_004a1836
    PUSH EBX                            ; 004a183b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a183c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1841
    TEST EAX,EAX                        ; 004a1844
    JNZ 0x004a1856                      ; 004a1846
        ;   XREF to: 004a1856 (CONDITIONAL_JUMP)  ; LAB_004a1856
    MOV dword ptr [ESI],0x69            ; 004a1848
    MOV EAX,0x1                         ; 004a184e
    POP ESI                             ; 004a1853
    POP EBX                             ; 004a1854
    RET                                 ; 004a1855
    PUSH 0x5dcd42                       ; 004a1856 | = "Chopped"
        ;   Label: LAB_004a1856
    PUSH EBX                            ; 004a185b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a185c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1861
    TEST EAX,EAX                        ; 004a1864
    JNZ 0x004a1876                      ; 004a1866
        ;   XREF to: 004a1876 (CONDITIONAL_JUMP)  ; LAB_004a1876
    MOV dword ptr [ESI],0x7             ; 004a1868
    MOV EAX,0x1                         ; 004a186e
    POP ESI                             ; 004a1873
    POP EBX                             ; 004a1874
    RET                                 ; 004a1875
    PUSH 0x5dcd4a                       ; 004a1876 | = "Crushed"
        ;   Label: LAB_004a1876
    PUSH EBX                            ; 004a187b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a187c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a1881
    TEST EAX,EAX                        ; 004a1884
    JNZ 0x004a1896                      ; 004a1886
        ;   XREF to: 004a1896 (CONDITIONAL_JUMP)  ; LAB_004a1896
    MOV dword ptr [ESI],0x8             ; 004a1888
    MOV EAX,0x1                         ; 004a188e
    POP ESI                             ; 004a1893
    POP EBX                             ; 004a1894
    RET                                 ; 004a1895
    PUSH 0x5dcd52                       ; 004a1896 | = "Impale"
        ;   Label: LAB_004a1896
    PUSH EBX                            ; 004a189b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a189c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a18a1
    TEST EAX,EAX                        ; 004a18a4
    JNZ 0x004a18b6                      ; 004a18a6
        ;   XREF to: 004a18b6 (CONDITIONAL_JUMP)  ; LAB_004a18b6
    MOV dword ptr [ESI],0x9             ; 004a18a8
    MOV EAX,0x1                         ; 004a18ae
    POP ESI                             ; 004a18b3
    POP EBX                             ; 004a18b4
    RET                                 ; 004a18b5
    PUSH 0x5dcd59                       ; 004a18b6 | DAT_005dcd59
        ;   Label: LAB_004a18b6
    PUSH EBX                            ; 004a18bb
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a18bc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a18c1
    TEST EAX,EAX                        ; 004a18c4
    JNZ 0x004a18d6                      ; 004a18c6
        ;   XREF to: 004a18d6 (CONDITIONAL_JUMP)  ; LAB_004a18d6
    MOV dword ptr [ESI],0xa             ; 004a18c8
    MOV EAX,0x1                         ; 004a18ce
    POP ESI                             ; 004a18d3
    POP EBX                             ; 004a18d4
    RET                                 ; 004a18d5
    XOR EAX,EAX                         ; 004a18d6
        ;   Label: LAB_004a18d6
    POP ESI                             ; 004a18d8
    POP EBX                             ; 004a18d9
    RET                                 ; 004a18da

