; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fseek_FUN_005c170c(undefined4 *param_1,int param_2,uint param_3)
;
;
; XREF[17]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 at 0053846c
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538e6a
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 00450810
;   core_game.cpp_FUN_004d6990 at 004d6b9d
;   crt_unknown.c_FUN_005c140c at 005c1506
;   engine_dosio.cpp_FUN_00479180 at 00479229
;   engine_pod.cpp_FUN_0053b110 at 0053b14b
;   engine_pod.cpp_FUN_0053bfc0 at 0053c03d
;   engine_pod.cpp_FUN_0053c290 at 0053c336
;   engine_pod.cpp_FUN_0053c3b0 at 0053c44f
;   ... and 7 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c16b0
;   crt_unknown.c_FUN_005c16f4
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c6d50
;   crt_unknown.c_FUN_005c6e80
;   crt_unknown.c_FUN_005c7510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c170c
        ;   Label: crt_stdio.c_fseek_FUN_005c170c
    PUSH ESI                            ; 005c170d
    PUSH EDI                            ; 005c170e
    PUSH EBP                            ; 005c170f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c1710
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c1714
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c1718
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c171c
    PUSH EDX                            ; 005c171f
    CALL dword ptr [0x00626600]         ; 005c1720 | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV AH,byte ptr [EBX + 0xc]         ; 005c1726
    ADD ESP,0x4                         ; 005c1729
    TEST AH,0x6                         ; 005c172c
    JZ 0x005c17bf                       ; 005c172f
        ;   XREF to: 005c17bf (CONDITIONAL_JUMP)  ; LAB_005c17bf
    TEST byte ptr [EBX + 0xd],0x10      ; 005c1735
    JZ 0x005c1771                       ; 005c1739
        ;   XREF to: 005c1771 (CONDITIONAL_JUMP)  ; LAB_005c1771
    PUSH EBX                            ; 005c173b
    CALL crt_unknown.c_FUN_005c6d50     ; 005c173c
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c1741
    TEST EAX,EAX                        ; 005c1744
    JZ 0x005c1788                       ; 005c1746
        ;   XREF to: 005c1788 (CONDITIONAL_JUMP)  ; LAB_005c1788
    TEST EDI,EDI                        ; 005c1748
    JNZ 0x005c175a                      ; 005c174a
        ;   XREF to: 005c175a (CONDITIONAL_JUMP)  ; LAB_005c175a
    TEST ESI,ESI                        ; 005c174c
    JGE 0x005c175a                      ; 005c174e
        ;   XREF to: 005c175a (CONDITIONAL_JUMP)  ; LAB_005c175a
    PUSH 0x9                            ; 005c1750
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c1752
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c1757
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c175a
        ;   Label: LAB_005c175a
    PUSH ESI                            ; 005c175d
    CALL dword ptr [0x00626604]         ; 005c175e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c1764
    ADD ESP,0x4                         ; 005c1769
    POP EBP                             ; 005c176c
    POP EDI                             ; 005c176d
    POP ESI                             ; 005c176e
    POP EBX                             ; 005c176f
    RET                                 ; 005c1770
    CMP EDI,0x1                         ; 005c1771
        ;   Label: LAB_005c1771
    JNZ 0x005c1779                      ; 005c1774
        ;   XREF to: 005c1779 (CONDITIONAL_JUMP)  ; LAB_005c1779
    SUB ESI,dword ptr [EBX + 0x4]       ; 005c1776
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1779
        ;   Label: LAB_005c1779
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c177c
    MOV dword ptr [EBX + 0x4],0x0       ; 005c177f
    MOV dword ptr [EBX],EAX             ; 005c1786
    PUSH EDI                            ; 005c1788
        ;   Label: LAB_005c1788
    MOV CL,byte ptr [EBX + 0xc]         ; 005c1789
    PUSH ESI                            ; 005c178c
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c178d
    AND CL,0xeb                         ; 005c1790
    PUSH EAX                            ; 005c1793
    MOV byte ptr [EBX + 0xc],CL         ; 005c1794
    CALL crt_unknown.c_FUN_005c6e80     ; 005c1797
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c179c
    CMP EAX,-0x1                        ; 005c179f
    JNZ 0x005c18df                      ; 005c17a2
        ;   XREF to: 005c18df (CONDITIONAL_JUMP)  ; LAB_005c18df
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c17a8
    PUSH ECX                            ; 005c17ab
    CALL dword ptr [0x00626604]         ; 005c17ac | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c17b2
    ADD ESP,0x4                         ; 005c17b7
    POP EBP                             ; 005c17ba
    POP EDI                             ; 005c17bb
    POP ESI                             ; 005c17bc
    POP EBX                             ; 005c17bd
    RET                                 ; 005c17be
    CMP EDI,0x1                         ; 005c17bf
        ;   Label: LAB_005c17bf
    JC 0x005c17d4                       ; 005c17c2
        ;   XREF to: 005c17d4 (CONDITIONAL_JUMP)  ; LAB_005c17d4
    JBE 0x005c17dd                      ; 005c17c4
        ;   XREF to: 005c17dd (CONDITIONAL_JUMP)  ; LAB_005c17dd
    CMP EDI,0x2                         ; 005c17c6
    JZ 0x005c187d                       ; 005c17c9
        ;   XREF to: 005c187d (CONDITIONAL_JUMP)  ; LAB_005c187d
    JMP 0x005c18be                      ; 005c17cf
        ;   XREF to: 005c18be (UNCONDITIONAL_JUMP)  ; LAB_005c18be
    TEST EDI,EDI                        ; 005c17d4
        ;   Label: LAB_005c17d4
    JZ 0x005c182c                       ; 005c17d6
        ;   XREF to: 005c182c (CONDITIONAL_JUMP)  ; LAB_005c182c
    JMP 0x005c18be                      ; 005c17d8
        ;   XREF to: 005c18be (UNCONDITIONAL_JUMP)  ; LAB_005c18be
    PUSH EBX                            ; 005c17dd
        ;   Label: LAB_005c17dd
    PUSH ESI                            ; 005c17de
    MOV EBP,dword ptr [EBX + 0x4]       ; 005c17df
    CALL crt_unknown.c_FUN_005c16b0     ; 005c17e2
        ;   XREF to: 005c16b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c16b0()
    ADD ESP,0x8                         ; 005c17e7
    TEST EAX,EAX                        ; 005c17ea
    JZ 0x005c18df                       ; 005c17ec
        ;   XREF to: 005c18df (CONDITIONAL_JUMP)  ; LAB_005c18df
    PUSH EDI                            ; 005c17f2
    SUB ESI,EBP                         ; 005c17f3
    PUSH ESI                            ; 005c17f5
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c17f6
    PUSH EDI                            ; 005c17f9
    CALL crt_unknown.c_FUN_005c6e80     ; 005c17fa
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c17ff
    CMP EAX,-0x1                        ; 005c1802
    JNZ 0x005c181e                      ; 005c1805
        ;   XREF to: 005c181e (CONDITIONAL_JUMP)  ; LAB_005c181e
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c1807
    PUSH EBP                            ; 005c180a
    CALL dword ptr [0x00626604]         ; 005c180b | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c1811
    ADD ESP,0x4                         ; 005c1816
    POP EBP                             ; 005c1819
    POP EDI                             ; 005c181a
    POP ESI                             ; 005c181b
    POP EBX                             ; 005c181c
    RET                                 ; 005c181d
    PUSH EBX                            ; 005c181e
        ;   Label: LAB_005c181e
    CALL crt_unknown.c_FUN_005c16f4     ; 005c181f
        ;   XREF to: 005c16f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c16f4()
    ADD ESP,0x4                         ; 005c1824
    JMP 0x005c18df                      ; 005c1827
        ;   XREF to: 005c18df (UNCONDITIONAL_JUMP)  ; LAB_005c18df
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c182c
        ;   Label: LAB_005c182c
    PUSH EDX                            ; 005c182f
    CALL crt_unknown.c_FUN_005c7510     ; 005c1830
        ;   XREF to: 005c7510 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7510()
    ADD ESP,0x4                         ; 005c1835
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c1838
    MOV EBP,ESI                         ; 005c183b
    SUB EAX,ECX                         ; 005c183d
    PUSH EBX                            ; 005c183f
    SUB EBP,EAX                         ; 005c1840
    PUSH EBP                            ; 005c1842
    CALL crt_unknown.c_FUN_005c16b0     ; 005c1843
        ;   XREF to: 005c16b0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c16b0()
    ADD ESP,0x8                         ; 005c1848
    TEST EAX,EAX                        ; 005c184b
    JZ 0x005c18df                       ; 005c184d
        ;   XREF to: 005c18df (CONDITIONAL_JUMP)  ; LAB_005c18df
    PUSH EDI                            ; 005c1853
    PUSH ESI                            ; 005c1854
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c1855
    PUSH ESI                            ; 005c1858
    CALL crt_unknown.c_FUN_005c6e80     ; 005c1859
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c185e
    CMP EAX,-0x1                        ; 005c1861
    JNZ 0x005c181e                      ; 005c1864
        ;   XREF to: 005c181e (CONDITIONAL_JUMP)  ; LAB_005c181e
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c1866
    PUSH EDI                            ; 005c1869
    CALL dword ptr [0x00626604]         ; 005c186a | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c1870
    ADD ESP,0x4                         ; 005c1875
    POP EBP                             ; 005c1878
    POP EDI                             ; 005c1879
    POP ESI                             ; 005c187a
    POP EBX                             ; 005c187b
    RET                                 ; 005c187c
    MOV DL,AH                           ; 005c187d
        ;   Label: LAB_005c187d
    PUSH EDI                            ; 005c187f
    MOV ECX,dword ptr [EBX + 0x10]      ; 005c1880
    AND DL,0xef                         ; 005c1883
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c1886
    MOV byte ptr [EBX + 0xc],DL         ; 005c1889
    PUSH ESI                            ; 005c188c
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c188d
    MOV dword ptr [EBX + 0x4],0x0       ; 005c1890
    PUSH ECX                            ; 005c1897
    MOV dword ptr [EBX],EAX             ; 005c1898
    CALL crt_unknown.c_FUN_005c6e80     ; 005c189a
        ;   XREF to: 005c6e80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6e80()
    ADD ESP,0xc                         ; 005c189f
    CMP EAX,-0x1                        ; 005c18a2
    JNZ 0x005c18df                      ; 005c18a5
        ;   XREF to: 005c18df (CONDITIONAL_JUMP)  ; LAB_005c18df
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c18a7
    PUSH ESI                            ; 005c18aa
    CALL dword ptr [0x00626604]         ; 005c18ab | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c18b1
    ADD ESP,0x4                         ; 005c18b6
    POP EBP                             ; 005c18b9
    POP EDI                             ; 005c18ba
    POP ESI                             ; 005c18bb
    POP EBX                             ; 005c18bc
    RET                                 ; 005c18bd
    PUSH 0x9                            ; 005c18be
        ;   Label: LAB_005c18be
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c18c0
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c18c5
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c18c8
    PUSH EAX                            ; 005c18cb
    CALL dword ptr [0x00626604]         ; 005c18cc | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c18d2
    ADD ESP,0x4                         ; 005c18d7
    POP EBP                             ; 005c18da
    POP EDI                             ; 005c18db
    POP ESI                             ; 005c18dc
    POP EBX                             ; 005c18dd
    RET                                 ; 005c18de
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c18df
        ;   Label: LAB_005c18df
    PUSH EDX                            ; 005c18e2
    CALL dword ptr [0x00626604]         ; 005c18e3 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c18e9
    XOR EAX,EAX                         ; 005c18ec
    POP EBP                             ; 005c18ee
    POP EDI                             ; 005c18ef
    POP ESI                             ; 005c18f0
    POP EBX                             ; 005c18f1
    RET                                 ; 005c18f2

