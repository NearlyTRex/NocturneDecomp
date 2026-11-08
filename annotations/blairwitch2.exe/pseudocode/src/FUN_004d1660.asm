; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d1660(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004d1620 = 004d1684
;   undefined1* switchdataD_004d1638 = 004d246f
;   undefined1* switchdataD_004d1648 = 004d20cb
;   TerminatedCString s_s_escaping_from_s_005da1c3
;   TerminatedCString s_s_confused_while_walking_005da1d8
;   TerminatedCString s_s_rescued_entering_follo_005da202
;   TerminatedCString s_s_was_led_close_enough_g_005da224
;   TerminatedCString s_s_left_behind_005da24a
;   TerminatedCString s_s_was_left_behind_but_no_005da25b
;   TerminatedCString s_s_doesn_t_know_next_wayp_005da28a
;   TerminatedCString s_s_reached_waypoint_s_005da2bf
;   TerminatedCString s_s_rescued_and_taken_home_005da2d8
;   TerminatedCString s_s_got_confused_going_hom_005da2f4
;   TerminatedCString s_Bip01_L_Forearm_005da31b
;   TerminatedCString s_deputeFireShotgun_005da32b
;   ... and 26 more
;
; Called Functions:
;   FUN_00408ae0
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_0040d060
;   FUN_0040d0c0
;   FUN_004222d0
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424470
;   FUN_004244b0
;   FUN_00428260
;   FUN_004287f0
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1660
        ;   Label: FUN_004d1660
    PUSH ESI                            ; 004d1661
    PUSH EDI                            ; 004d1662
    PUSH EBP                            ; 004d1663
    MOV EBP,ESP                         ; 004d1664
    SUB ESP,0x284                       ; 004d1666
    AND ESP,0xfffffff8                  ; 004d166c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d166f
    MOV EAX,dword ptr [EBX + 0x246fc]   ; 004d1672
    CMP EAX,0x5                         ; 004d1678
    JA 0x004d1698                       ; 004d167b
        ;   XREF to: 004d1698 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d1620]  ; 004d167d | caseD_4 | caseD_2 | caseD_5
        ;   Label: switchD
    MOV dword ptr [EBX + 0x343c],0x42480000 ; 004d1684
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x3438],0x41a00000 ; 004d168e
    FLD float ptr [EBX + 0x25a8]        ; 004d1698
        ;   Label: default
    FLDZ                                ; 004d169e
    FCOMPP                              ; 004d16a0
    FNSTSW AX                           ; 004d16a2
    SAHF                                ; 004d16a4
    JC 0x004d16bb                       ; 004d16a5
        ;   XREF to: 004d16bb (CONDITIONAL_JUMP)  ; LAB_004d16bb
    MOV dword ptr [EBX + 0x343c],0x47c34f80 ; 004d16a7
    MOV dword ptr [EBX + 0x3438],0x47c34f80 ; 004d16b1
    PUSH dword ptr [EBP + 0x18]         ; 004d16bb
        ;   Label: LAB_004d16bb
    PUSH EBX                            ; 004d16be
    CALL FUN_004244b0                   ; 004d16bf
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 004d16c4
    TEST EAX,EAX                        ; 004d16c7
    JZ 0x004d1db9                       ; 004d16c9
        ;   XREF to: 004d1db9 (CONDITIONAL_JUMP)  ; LAB_004d1db9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d16cf
    MOV dword ptr [ESP + 0x24],EAX      ; 004d16d2
    LEA EAX,[EBX + 0x2508]              ; 004d16d6
    MOV dword ptr [EAX + 0x8],0x0       ; 004d16dc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d16e3
    MOV dword ptr [EAX + 0x4],EDX       ; 004d16e6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d16e9
    MOV dword ptr [EAX],EDX             ; 004d16ec
    LEA EAX,[EBX + 0x2b4]               ; 004d16ee
    MOV dword ptr [ESP + 0x268],EAX     ; 004d16f4
    FLD float ptr [ESP + 0x24]          ; 004d16fb
        ;   Label: LAB_004d16fb
    FLDZ                                ; 004d16ff
    FCOMPP                              ; 004d1701
    FNSTSW AX                           ; 004d1703
    SAHF                                ; 004d1705
    JNC 0x004d19ea                      ; 004d1706
        ;   XREF to: 004d19ea (CONDITIONAL_JUMP)  ; LAB_004d19ea
    LEA EAX,[ESP + 0x24]                ; 004d170c
    PUSH EAX                            ; 004d1710
    MOV ESI,dword ptr [ESP + 0x26c]     ; 004d1711
    PUSH ESI                            ; 004d1718
    CALL FUN_005030c0                   ; 004d1719
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 004d171e
    MOV ESI,EAX                         ; 004d1721
    CMP EAX,0xb                         ; 004d1723
    JNC 0x004d19d0                      ; 004d1726
        ;   XREF to: 004d19d0 (CONDITIONAL_JUMP)  ; LAB_004d19d0
    CMP EAX,0x6                         ; 004d172c
    JZ 0x004d176f                       ; 004d172f
        ;   XREF to: 004d176f (CONDITIONAL_JUMP)  ; LAB_004d176f
    PUSH ESI                            ; 004d1731
    PUSH EBX                            ; 004d1732
    CALL FUN_0042aa00                   ; 004d1733
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004d1738
    JMP 0x004d16fb                      ; 004d173b
        ;   XREF to: 004d16fb (UNCONDITIONAL_JUMP)  ; LAB_004d16fb
    MOV dword ptr [EBX + 0x343c],0x42960000 ; 004d173d
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x3438],0x42200000 ; 004d1747
    JMP 0x004d1698                      ; 004d1751
        ;   XREF to: 004d1698 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x343c],0x47c34f80 ; 004d1756
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x3438],0x47c34f80 ; 004d1760
    JMP 0x004d1698                      ; 004d176a
        ;   XREF to: 004d1698 (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBX + 0x276c]    ; 004d176f
        ;   Label: LAB_004d176f
    TEST EDX,EDX                        ; 004d1775
    JZ 0x004d16fb                       ; 004d1777
        ;   XREF to: 004d16fb (CONDITIONAL_JUMP)  ; LAB_004d16fb
    PUSH EDX                            ; 004d1779
    PUSH EBX                            ; 004d177a
    PUSH 0x5da1c3                       ; 004d177b | = "%s escaping from %s\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004d1780 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004d1786 | DAT_007c158c
    CALL FUN_00436710                   ; 004d1787
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004d178c
    LEA EAX,[ESP + 0x28]                ; 004d178f
    PUSH EAX                            ; 004d1793
    CALL FUN_004222d0                   ; 004d1794
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004d1799
    PUSH 0x41700000                     ; 004d179c
    PUSH 0x41200000                     ; 004d17a1
    CALL FUN_0040cf60                   ; 004d17a6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d17ab
    FLD float ptr [ESP + 0x288]         ; 004d17b2
    ADD ESP,0x8                         ; 004d17b9
    LEA ESI,[ESP + 0x28]                ; 004d17bc
    MOV dword ptr [ESP + 0x5c],EBX      ; 004d17c0
    MOV dword ptr [ESP + 0x60],EBX      ; 004d17c4
    PUSH ESI                            ; 004d17c8
    FSTP float ptr [ESP + 0x30]         ; 004d17c9
    MOV EAX,dword ptr [EBX + 0x276c]    ; 004d17cd
    PUSH EAX                            ; 004d17d3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004d17d4
    CALL dword ptr [EDX + 0x110]        ; 004d17da
    ADD ESP,0x8                         ; 004d17e0
    JMP 0x004d16fb                      ; 004d17e3
        ;   XREF to: 004d16fb (UNCONDITIONAL_JUMP)  ; LAB_004d16fb
    XOR EAX,EAX                         ; 004d17e8
        ;   Label: LAB_004d17e8
    MOV EDI,0x7149f2ca                  ; 004d17ea
    MOV dword ptr [ESP + 0x26c],EAX     ; 004d17ef
    MOV dword ptr [ESP + 0xa0],EAX      ; 004d17f6
    MOV dword ptr [ESP + 0xa4],EAX      ; 004d17fd
    LEA EAX,[ESP + 0xa0]                ; 004d1804
    MOV ESI,0x3fc00000                  ; 004d180b
    PUSH EAX                            ; 004d1810
    MOV dword ptr [ESP + 0x274],EDI     ; 004d1811
    MOV dword ptr [ESP + 0xac],ESI      ; 004d1818
    PUSH EBX                            ; 004d181f
    LEA ESI,[ESP + 0x9c]                ; 004d1820
    LEA EDI,[ESP + 0x1b0]               ; 004d1827
    CALL FUN_00408d70                   ; 004d182e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x9c]                ; 004d1833
    ADD ESP,0x8                         ; 004d183a
    MOVSD ES:EDI,ESI                    ; 004d183d
    MOVSD ES:EDI,ESI                    ; 004d183e
    MOVSD ES:EDI,ESI                    ; 004d183f
    XOR EDI,EDI                         ; 004d1840
    MOV dword ptr [ESP + 0x27c],EDI     ; 004d1842
    MOV dword ptr [ESP + 0x278],EDI     ; 004d1849
    MOV EAX,[0x0061b5a8]                ; 004d1850 | DAT_0061b5a8
        ;   Label: LAB_004d1850
    MOV EDX,dword ptr [ESP + 0x27c]     ; 004d1855
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004d185c | DAT_01fb331c
    JGE 0x004d1968                      ; 004d1862
        ;   XREF to: 004d1968 (CONDITIONAL_JUMP)  ; LAB_004d1968
    MOV ESI,dword ptr [ESP + 0x278]     ; 004d1868
    MOV ECX,dword ptr [0x01b4d36c]      ; 004d186f | DAT_01b4d36c
    ADD EAX,ESI                         ; 004d1875
    PUSH ECX                            ; 004d1877
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 004d1878 | DAT_01fb3320
    PUSH EDI                            ; 004d187e
    CALL FUN_0040c8f0                   ; 004d187f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EDX,EAX                         ; 004d1884
    ADD ESP,0x8                         ; 004d1886
    TEST EAX,EAX                        ; 004d1889
    JNZ 0x004d18af                      ; 004d188b
        ;   XREF to: 004d18af (CONDITIONAL_JUMP)  ; LAB_004d18af
    MOV ECX,dword ptr [ESP + 0x27c]     ; 004d188d
        ;   Label: LAB_004d188d
    MOV EDX,dword ptr [ESP + 0x278]     ; 004d1894
    INC ECX                             ; 004d189b
    ADD EDX,0x4                         ; 004d189c
    MOV dword ptr [ESP + 0x27c],ECX     ; 004d189f
    MOV dword ptr [ESP + 0x278],EDX     ; 004d18a6
    JMP 0x004d1850                      ; 004d18ad
        ;   XREF to: 004d1850 (UNCONDITIONAL_JUMP)  ; LAB_004d1850
    FLD float ptr [EAX + 0x20]          ; 004d18af
        ;   Label: LAB_004d18af
    FLD float ptr [EAX + 0x24]          ; 004d18b2
    FLD float ptr [EAX + 0x28]          ; 004d18b5
    LEA EDI,[ESP + 0x208]               ; 004d18b8
    LEA ESI,[ESP + 0x178]               ; 004d18bf
    FXCH ST2                            ; 004d18c6
    FSUB float ptr [ESP + 0x1a8]        ; 004d18c8
    FXCH                                ; 004d18cf
    FSUB float ptr [ESP + 0x1ac]        ; 004d18d1
    FXCH ST2                            ; 004d18d8
    FSUB float ptr [ESP + 0x1b0]        ; 004d18da
    FXCH                                ; 004d18e1
    FSTP float ptr [ESP + 0x178]        ; 004d18e3
    FXCH                                ; 004d18ea
    FSTP float ptr [ESP + 0x17c]        ; 004d18ec
    FSTP float ptr [ESP + 0x180]        ; 004d18f3
    MOVSD ES:EDI,ESI                    ; 004d18fa
    MOVSD ES:EDI,ESI                    ; 004d18fb
    MOVSD ES:EDI,ESI                    ; 004d18fc
    ADD EAX,0x20                        ; 004d18fd
    FLD float ptr [ESP + 0x20c]         ; 004d1900
    FABS                                ; 004d1907
    FCOMP double ptr [0x005da39e]       ; 004d1909 | DAT_005da39e
    FNSTSW AX                           ; 004d190f
    SAHF                                ; 004d1911
    JA 0x004d188d                       ; 004d1912
        ;   XREF to: 004d188d (CONDITIONAL_JUMP)  ; LAB_004d188d
    FLD float ptr [ESP + 0x208]         ; 004d1918
    FMUL ST0                            ; 004d191f
    FLD float ptr [ESP + 0x210]         ; 004d1921
    FMUL ST0                            ; 004d1928
    XOR EAX,EAX                         ; 004d192a
    FADDP                               ; 004d192c
    MOV dword ptr [ESP + 0x20c],EAX     ; 004d192e
    FSQRT                               ; 004d1935
    FST float ptr [ESP + 0x274]         ; 004d1937
    FCOMP float ptr [ESP + 0x270]       ; 004d193e
    FNSTSW AX                           ; 004d1945
    SAHF                                ; 004d1947
    JNC 0x004d188d                      ; 004d1948
        ;   XREF to: 004d188d (CONDITIONAL_JUMP)  ; LAB_004d188d
    MOV EAX,dword ptr [ESP + 0x274]     ; 004d194e
    MOV dword ptr [ESP + 0x26c],EDX     ; 004d1955
    MOV dword ptr [ESP + 0x270],EAX     ; 004d195c
    JMP 0x004d188d                      ; 004d1963
        ;   XREF to: 004d188d (UNCONDITIONAL_JUMP)  ; LAB_004d188d
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004d1968
        ;   Label: LAB_004d1968
    TEST EAX,EAX                        ; 004d196f
    JZ 0x004d16fb                       ; 004d1971
        ;   XREF to: 004d16fb (CONDITIONAL_JUMP)  ; LAB_004d16fb
    PUSH 0x3dcccccd                     ; 004d1977
    PUSH EAX                            ; 004d197c
    CALL FUN_00460310                   ; 004d197d
        ;   XREF to: 00460310 (UNCONDITIONAL_CALL)  ; undefined FUN_00460310()
    ADD ESP,0x8                         ; 004d1982
    JMP 0x004d16fb                      ; 004d1985
        ;   XREF to: 004d16fb (UNCONDITIONAL_JUMP)  ; LAB_004d16fb
    MOV ESI,dword ptr [EBX + 0x2698]    ; 004d198a
        ;   Label: LAB_004d198a
    TEST ESI,ESI                        ; 004d1990
    JZ 0x004d16fb                       ; 004d1992
        ;   XREF to: 004d16fb (CONDITIONAL_JUMP)  ; LAB_004d16fb
    PUSH 0x0                            ; 004d1998
    PUSH 0x1                            ; 004d199a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d199c
    PUSH EBX                            ; 004d19a2
    CALL dword ptr [EAX + 0x130]        ; 004d19a3
    ADD ESP,0xc                         ; 004d19a9
    PUSH 0x0                            ; 004d19ac
    MOV EAX,[0x01cedef4]                ; 004d19ae | DAT_01cedef4
    PUSH 0x1                            ; 004d19b3
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d19b5
    PUSH ESI                            ; 004d19bc
    ADD EAX,0x2437c                     ; 004d19bd
    PUSH EAX                            ; 004d19c2
    CALL FUN_004dadb0                   ; 004d19c3
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dadb0()
    ADD ESP,0x10                        ; 004d19c8
    JMP 0x004d16fb                      ; 004d19cb
        ;   XREF to: 004d16fb (UNCONDITIONAL_JUMP)  ; LAB_004d16fb
    JBE 0x004d17e8                      ; 004d19d0
        ;   XREF to: 004d17e8 (CONDITIONAL_JUMP)  ; LAB_004d17e8
        ;   Label: LAB_004d19d0
    CMP EAX,0xc                         ; 004d19d6
    JZ 0x004d198a                       ; 004d19d9
        ;   XREF to: 004d198a (CONDITIONAL_JUMP)  ; LAB_004d198a
    PUSH ESI                            ; 004d19db
    PUSH EBX                            ; 004d19dc
    CALL FUN_0042aa00                   ; 004d19dd
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 004d19e2
    JMP 0x004d16fb                      ; 004d19e5
        ;   XREF to: 004d16fb (UNCONDITIONAL_JUMP)  ; LAB_004d16fb
    PUSH dword ptr [EBP + 0x18]         ; 004d19ea
        ;   Label: LAB_004d19ea
    FLD float ptr [EBX + 0x2510]        ; 004d19ed
    PUSH EBX                            ; 004d19f3
    FSTP float ptr [EBX + 0x2594]       ; 004d19f4
    CALL FUN_0042b2a0                   ; 004d19fa
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 004d19ff
    PUSH 0xa                            ; 004d1a02
    MOV ESI,dword ptr [ESP + 0x26c]     ; 004d1a04
    XOR EDX,EDX                         ; 004d1a0b
    PUSH ESI                            ; 004d1a0d
    MOV dword ptr [ESP + 0x264],EDX     ; 004d1a0e
    MOV dword ptr [ESP + 0x268],EDX     ; 004d1a15
    CALL FUN_005038a0                   ; 004d1a1c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1a21
    FLD float ptr [ESP + 0x288]         ; 004d1a28
    FLDZ                                ; 004d1a2f
    ADD ESP,0x8                         ; 004d1a31
    FCOMPP                              ; 004d1a34
    FNSTSW AX                           ; 004d1a36
    SAHF                                ; 004d1a38
    JNC 0x004d1a4e                      ; 004d1a39
        ;   XREF to: 004d1a4e (CONDITIONAL_JUMP)  ; LAB_004d1a4e
    MOV EDI,0x1                         ; 004d1a3b
    MOV dword ptr [ESP + 0x25c],EDI     ; 004d1a40
    MOV dword ptr [ESP + 0x260],EDI     ; 004d1a47
    FLD float ptr [EBX + 0x25a8]        ; 004d1a4e
        ;   Label: LAB_004d1a4e
    FLDZ                                ; 004d1a54
    FCOMPP                              ; 004d1a56
    FNSTSW AX                           ; 004d1a58
    SAHF                                ; 004d1a5a
    JC 0x004d1dc0                       ; 004d1a5b
        ;   XREF to: 004d1dc0 (CONDITIONAL_JUMP)  ; LAB_004d1dc0
    PUSH 0x5                            ; 004d1a61
    LEA EAX,[EBX + 0x2b4]               ; 004d1a63
    PUSH EAX                            ; 004d1a69
    CALL FUN_005038a0                   ; 004d1a6a
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1a6f
    FLD float ptr [ESP + 0x288]         ; 004d1a76
    FLDZ                                ; 004d1a7d
    ADD ESP,0x8                         ; 004d1a7f
    FCOMPP                              ; 004d1a82
    FNSTSW AX                           ; 004d1a84
    SAHF                                ; 004d1a86
    JC 0x004d1ac4                       ; 004d1a87
        ;   XREF to: 004d1ac4 (CONDITIONAL_JUMP)  ; LAB_004d1ac4
    PUSH 0x8                            ; 004d1a89
    LEA EAX,[EBX + 0x2b4]               ; 004d1a8b
    PUSH EAX                            ; 004d1a91
    CALL FUN_005038a0                   ; 004d1a92
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1a97
    FLD float ptr [ESP + 0x288]         ; 004d1a9e
    FLDZ                                ; 004d1aa5
    ADD ESP,0x8                         ; 004d1aa7
    FCOMPP                              ; 004d1aaa
    FNSTSW AX                           ; 004d1aac
    SAHF                                ; 004d1aae
    JC 0x004d1ac4                       ; 004d1aaf
        ;   XREF to: 004d1ac4 (CONDITIONAL_JUMP)  ; LAB_004d1ac4
    PUSH 0x1                            ; 004d1ab1
    PUSH 0x6                            ; 004d1ab3
    LEA EAX,[EBX + 0x2b4]               ; 004d1ab5
    PUSH EAX                            ; 004d1abb
    CALL FUN_00503620                   ; 004d1abc
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d1ac1
    MOV dword ptr [ESP + 0x260],0x1     ; 004d1ac4
        ;   Label: LAB_004d1ac4
    FLD float ptr [EBX + 0x25a8]        ; 004d1acf
        ;   Label: default
    FLDZ                                ; 004d1ad5
    FCOMPP                              ; 004d1ad7
    FNSTSW AX                           ; 004d1ad9
    SAHF                                ; 004d1adb
    JNC 0x004d1bda                      ; 004d1adc
        ;   XREF to: 004d1bda (CONDITIONAL_JUMP)  ; LAB_004d1bda
    CMP dword ptr [EBX + 0x246f8],0x1   ; 004d1ae2
    JNZ 0x004d1bda                      ; 004d1ae9
        ;   XREF to: 004d1bda (CONDITIONAL_JUMP)  ; LAB_004d1bda
    FLD float ptr [EBP + 0x18]          ; 004d1aef
    FMUL float ptr [0x005da37a]         ; 004d1af2 | DAT_005da37a
    SUB ESP,0x4                         ; 004d1af8
    FSTP float ptr [ESP]                ; 004d1afb
    CALL FUN_0040d060                   ; 004d1afe
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 004d1b03
    TEST EAX,EAX                        ; 004d1b06
    JZ 0x004d1bda                       ; 004d1b08
        ;   XREF to: 004d1bda (CONDITIONAL_JUMP)  ; LAB_004d1bda
    PUSH 0x0                            ; 004d1b0e
    PUSH 0x5da31b                       ; 004d1b10 | = "Bip01 L Forearm"
    LEA ESI,[EBX + 0x2b4]               ; 004d1b15
    PUSH ESI                            ; 004d1b1b
    CALL FUN_00547890                   ; 004d1b1c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004d1b21
    PUSH EAX                            ; 004d1b24
    CALL FUN_00540e80                   ; 004d1b25
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004d1b2a
    TEST EAX,EAX                        ; 004d1b2d
    JL 0x004d1bda                       ; 004d1b2f
        ;   XREF to: 004d1bda (CONDITIONAL_JUMP)  ; LAB_004d1bda
    PUSH EAX                            ; 004d1b35
    PUSH ESI                            ; 004d1b36
    LEA ESI,[ESP + 0x6c]                ; 004d1b37
    LEA EDI,[ESP + 0xe4]                ; 004d1b3b
    CALL FUN_005469a0                   ; 004d1b42
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 004d1b47
    LEA EAX,[ESP + 0xdc]                ; 004d1b4a
    LEA ESI,[ESP + 0x64]                ; 004d1b51
    PUSH EAX                            ; 004d1b55
    MOVSD ES:EDI,ESI                    ; 004d1b56
    MOVSD ES:EDI,ESI                    ; 004d1b57
    MOVSD ES:EDI,ESI                    ; 004d1b58
    PUSH EBX                            ; 004d1b59
    LEA ESI,[ESP + 0x1f8]               ; 004d1b5a
    LEA EDI,[ESP + 0x18c]               ; 004d1b61
    CALL FUN_00408d70                   ; 004d1b68
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x1f8]               ; 004d1b6d
    ADD ESP,0x8                         ; 004d1b74
    LEA EAX,[ESP + 0x154]               ; 004d1b77
    MOVSD ES:EDI,ESI                    ; 004d1b7e
    MOVSD ES:EDI,ESI                    ; 004d1b7f
    MOVSD ES:EDI,ESI                    ; 004d1b80
    PUSH EAX                            ; 004d1b81
    MOV ESI,0x40400000                  ; 004d1b82
    PUSH EBX                            ; 004d1b87
    XOR EDI,EDI                         ; 004d1b88
    MOV dword ptr [ESP + 0x15c],ESI     ; 004d1b8a
    MOV dword ptr [ESP + 0x160],EDI     ; 004d1b91
    LEA ESI,[ESP + 0x78]                ; 004d1b98
    MOV dword ptr [ESP + 0x164],EDI     ; 004d1b9c
    CALL FUN_00408cf0                   ; 004d1ba3
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 004d1ba8
    PUSH 0x0                            ; 004d1bab
    LEA EAX,[ESP + 0x1c4]               ; 004d1bad
    PUSH EAX                            ; 004d1bb4
    LEA EAX,[ESP + 0x18c]               ; 004d1bb5
    LEA EDI,[ESP + 0x1c8]               ; 004d1bbc
    PUSH EAX                            ; 004d1bc3
    MOV EDX,dword ptr [0x006167e0]      ; 004d1bc4 | DAT_006167e0
    LEA ESI,[ESP + 0x7c]                ; 004d1bca
    PUSH EDX                            ; 004d1bce
    MOVSD ES:EDI,ESI                    ; 004d1bcf
    MOVSD ES:EDI,ESI                    ; 004d1bd0
    MOVSD ES:EDI,ESI                    ; 004d1bd1
    CALL FUN_004c9730                   ; 004d1bd2
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9730()
    ADD ESP,0x10                        ; 004d1bd7
    PUSH EBX                            ; 004d1bda
        ;   Label: LAB_004d1bda
    CALL FUN_00424470                   ; 004d1bdb
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 004d1be0
    CMP dword ptr [ESP + 0x25c],0x0     ; 004d1be3
    JZ 0x004d28ca                       ; 004d1beb
        ;   XREF to: 004d28ca (CONDITIONAL_JUMP)  ; LAB_004d28ca
    LEA EAX,[EBX + 0x257c]              ; 004d1bf1
    PUSH EAX                            ; 004d1bf7
    PUSH EBX                            ; 004d1bf8
    LEA ESI,[ESP + 0x168]               ; 004d1bf9
    LEA EDI,[ESP + 0x108]               ; 004d1c00
    CALL FUN_00408cf0                   ; 004d1c07
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x168]               ; 004d1c0c
    ADD ESP,0x8                         ; 004d1c13
    LEA EAX,[EBX + 0x20]                ; 004d1c16
    MOVSD ES:EDI,ESI                    ; 004d1c19
    MOVSD ES:EDI,ESI                    ; 004d1c1a
    MOVSD ES:EDI,ESI                    ; 004d1c1b
    FLD float ptr [EAX]                 ; 004d1c1c
    FLD float ptr [EAX + 0x4]           ; 004d1c1e
    FLD float ptr [EAX + 0x8]           ; 004d1c21
    FXCH ST2                            ; 004d1c24
    FADD float ptr [ESP + 0x100]        ; 004d1c26
    FXCH                                ; 004d1c2d
    FADD float ptr [ESP + 0x104]        ; 004d1c2f
    FXCH ST2                            ; 004d1c36
    FADD float ptr [ESP + 0x108]        ; 004d1c38
    FXCH                                ; 004d1c3f
    FSTP float ptr [EAX]                ; 004d1c41
    FXCH                                ; 004d1c43
    FSTP float ptr [EAX + 0x4]          ; 004d1c45
    FSTP float ptr [EAX + 0x8]          ; 004d1c48
    MOV dword ptr [EBX + 0x304c],0x0    ; 004d1c4b
        ;   Label: LAB_004d1c4b
    LEA ESI,[EBX + 0x2b4]               ; 004d1c55
        ;   Label: LAB_004d1c55
    PUSH ESI                            ; 004d1c5b
    CALL FUN_00544f00                   ; 004d1c5c
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    MOV EDI,dword ptr [EBX + 0x246f8]   ; 004d1c61
    ADD ESP,0x4                         ; 004d1c67
    CMP EDI,0x1                         ; 004d1c6a
    JNZ 0x004d1d14                      ; 004d1c6d
        ;   XREF to: 004d1d14 (CONDITIONAL_JUMP)  ; LAB_004d1d14
    MOV ECX,dword ptr [0x02661f38]      ; 004d1c73 | DAT_02661f38
    MOV EAX,0x3f000000                  ; 004d1c79
    PUSH ECX                            ; 004d1c7e
    MOV EDI,dword ptr [EBX + 0x2698]    ; 004d1c7f
    MOV EDX,0x3f400000                  ; 004d1c85
    PUSH EDI                            ; 004d1c8a
    MOV dword ptr [ESP + 0x244],EAX     ; 004d1c8b
    MOV dword ptr [ESP + 0x238],EDX     ; 004d1c92
    CALL FUN_0040c8f0                   ; 004d1c99
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d1c9e
    XOR EDI,EDI                         ; 004d1ca1
    TEST EAX,EAX                        ; 004d1ca3
    JZ 0x004d2adc                       ; 004d1ca5
        ;   XREF to: 004d2adc (CONDITIONAL_JUMP)  ; LAB_004d2adc
    PUSH 0x10                           ; 004d1cab
    PUSH ESI                            ; 004d1cad
    CALL FUN_005038a0                   ; 004d1cae
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1cb3
    FLD float ptr [ESP + 0x288]         ; 004d1cba
    FLDZ                                ; 004d1cc1
    ADD ESP,0x8                         ; 004d1cc3
    FCOMPP                              ; 004d1cc6
    FNSTSW AX                           ; 004d1cc8
    SAHF                                ; 004d1cca
    JC 0x004d2adc                       ; 004d1ccb
        ;   XREF to: 004d2adc (CONDITIONAL_JUMP)  ; LAB_004d2adc
    FLD float ptr [EBP + 0x18]          ; 004d1cd1
        ;   Label: LAB_004d1cd1
    FDIV float ptr [ESP + 0x23c]        ; 004d1cd4
    FADD float ptr [EBX + 0x24724]      ; 004d1cdb
    FSTP float ptr [EBX + 0x24724]      ; 004d1ce1
        ;   Label: LAB_004d1ce1
    FLDZ                                ; 004d1ce7
    FLD float ptr [EBX + 0x24724]       ; 004d1ce9
    FSTP double ptr [ESP + 0x8]         ; 004d1cef
    FCOMP double ptr [ESP + 0x8]        ; 004d1cf3
    FNSTSW AX                           ; 004d1cf7
    SAHF                                ; 004d1cf9
    JC 0x004d2af9                       ; 004d1cfa
        ;   XREF to: 004d2af9 (CONDITIONAL_JUMP)  ; LAB_004d2af9
    MOV dword ptr [EBX + 0x24720],0x0   ; 004d1d00
    MOV dword ptr [EBX + 0x24724],0x0   ; 004d1d0a
    MOV EDX,dword ptr [ESP + 0x260]     ; 004d1d14
        ;   Label: LAB_004d1d14
    PUSH EDX                            ; 004d1d1b
    PUSH dword ptr [EBP + 0x18]         ; 004d1d1c
    PUSH EBX                            ; 004d1d1f
    CALL FUN_00429420                   ; 004d1d20
        ;   XREF to: 00429420 (UNCONDITIONAL_CALL)  ; undefined FUN_00429420()
    ADD ESP,0xc                         ; 004d1d25
    PUSH dword ptr [EBP + 0x18]         ; 004d1d28
    PUSH EBX                            ; 004d1d2b
    CALL FUN_00429e90                   ; 004d1d2c
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    FLD float ptr [EBX + 0x24720]       ; 004d1d31
    FLD1                                ; 004d1d37
    ADD ESP,0x8                         ; 004d1d39
    FCOMPP                              ; 004d1d3c
    FNSTSW AX                           ; 004d1d3e
    SAHF                                ; 004d1d40
    JA 0x004d1dac                       ; 004d1d41
        ;   XREF to: 004d1dac (CONDITIONAL_JUMP)  ; LAB_004d1dac
    MOV ECX,dword ptr [0x02661f38]      ; 004d1d43 | DAT_02661f38
    PUSH ECX                            ; 004d1d49
    MOV ESI,dword ptr [EBX + 0x2698]    ; 004d1d4a
    PUSH ESI                            ; 004d1d50
    CALL FUN_0040c8f0                   ; 004d1d51
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV ESI,EAX                         ; 004d1d56
    ADD ESP,0x8                         ; 004d1d58
    TEST EAX,EAX                        ; 004d1d5b
    JZ 0x004d1dac                       ; 004d1d5d
        ;   XREF to: 004d1dac (CONDITIONAL_JUMP)  ; LAB_004d1dac
    MOV EDI,dword ptr [EAX + 0x6c8]     ; 004d1d5f
    MOV dword ptr [EAX + 0x6c8],0x6     ; 004d1d65
    PUSH ESI                            ; 004d1d6f
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004d1d70
    CALL dword ptr [EAX + 0xec]         ; 004d1d76
    ADD ESP,0x4                         ; 004d1d7c
    PUSH 0x1                            ; 004d1d7f
    PUSH 0xc                            ; 004d1d81
    LEA EAX,[EBX + 0x2b4]               ; 004d1d83
    PUSH EAX                            ; 004d1d89
    MOV dword ptr [ESI + 0x6c8],EDI     ; 004d1d8a
    CALL FUN_00503620                   ; 004d1d90
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV dword ptr [EBX + 0x24724],0x0   ; 004d1d95
    ADD ESP,0xc                         ; 004d1d9f
    MOV dword ptr [EBX + 0x24720],0x0   ; 004d1da2
    CMP dword ptr [EBX + 0x246f8],0x1   ; 004d1dac
        ;   Label: LAB_004d1dac
    JZ 0x004d2bf9                       ; 004d1db3
        ;   XREF to: 004d2bf9 (CONDITIONAL_JUMP)  ; LAB_004d2bf9
    MOV ESP,EBP                         ; 004d1db9
        ;   Label: LAB_004d1db9
    POP EBP                             ; 004d1dbb
    POP EDI                             ; 004d1dbc
    POP ESI                             ; 004d1dbd
    POP EBX                             ; 004d1dbe
    RET                                 ; 004d1dbf
    MOV EDX,dword ptr [EBX + 0x276c]    ; 004d1dc0
        ;   Label: LAB_004d1dc0
    TEST EDX,EDX                        ; 004d1dc6
    JZ 0x004d1fb3                       ; 004d1dc8
        ;   XREF to: 004d1fb3 (CONDITIONAL_JUMP)  ; LAB_004d1fb3
    LEA EAX,[EDX + 0x20]                ; 004d1dce
    PUSH EAX                            ; 004d1dd1
    PUSH EBX                            ; 004d1dd2
    LEA ESI,[ESP + 0xb4]                ; 004d1dd3
    LEA EDI,[ESP + 0x1e0]               ; 004d1dda
    CALL FUN_00408de0                   ; 004d1de1
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0xb4]                ; 004d1de6
    ADD ESP,0x8                         ; 004d1ded
    LEA EAX,[ESP + 0x1d8]               ; 004d1df0
    MOVSD ES:EDI,ESI                    ; 004d1df7
    MOVSD ES:EDI,ESI                    ; 004d1df8
    MOVSD ES:EDI,ESI                    ; 004d1df9
    PUSH EAX                            ; 004d1dfa
    LEA ESI,[ESP + 0xbc]                ; 004d1dfb
    LEA EDI,[ESP + 0x200]               ; 004d1e02
    CALL FUN_005838f0                   ; 004d1e09
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0xbc]                ; 004d1e0e
    ADD ESP,0x4                         ; 004d1e15
    MOVSD ES:EDI,ESI                    ; 004d1e18
    MOVSD ES:EDI,ESI                    ; 004d1e19
    MOVSD ES:EDI,ESI                    ; 004d1e1a
    PUSH dword ptr [ESP + 0x200]        ; 004d1e1b
    CALL FUN_0040d0c0                   ; 004d1e22
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x284],EAX     ; 004d1e27
    FLD float ptr [ESP + 0x284]         ; 004d1e2e
    ADD ESP,0x4                         ; 004d1e35
    FST float ptr [ESP + 0x264]         ; 004d1e38
    FCOMP float ptr [0x005da36e]        ; 004d1e3f | DAT_005da36e
    FNSTSW AX                           ; 004d1e45
    SAHF                                ; 004d1e47
    JNC 0x004d1e5e                      ; 004d1e48
        ;   XREF to: 004d1e5e (CONDITIONAL_JUMP)  ; LAB_004d1e5e
    FLD float ptr [ESP + 0x264]         ; 004d1e4a
    FADD float ptr [0x005da35e]         ; 004d1e51 | DAT_005da35e
    FSTP float ptr [ESP + 0x264]        ; 004d1e57
    FLD float ptr [ESP + 0x264]         ; 004d1e5e
        ;   Label: LAB_004d1e5e
    FCOMP float ptr [0x005da372]        ; 004d1e65 | DAT_005da372
    FNSTSW AX                           ; 004d1e6b
    SAHF                                ; 004d1e6d
    JBE 0x004d1e84                      ; 004d1e6e
        ;   XREF to: 004d1e84 (CONDITIONAL_JUMP)  ; LAB_004d1e84
    FLD float ptr [ESP + 0x264]         ; 004d1e70
    FADD float ptr [0x005da376]         ; 004d1e77 | DAT_005da376
    FSTP float ptr [ESP + 0x264]        ; 004d1e7d
    FLD float ptr [EBP + 0x18]          ; 004d1e84
        ;   Label: LAB_004d1e84
    FMUL float ptr [0x005da35e]         ; 004d1e87 | DAT_005da35e
    FLD float ptr [ESP + 0x264]         ; 004d1e8d
    FXCH                                ; 004d1e94
    FST float ptr [ESP + 0x248]         ; 004d1e96
    FCHS                                ; 004d1e9d
    FSTP float ptr [ESP + 0x240]        ; 004d1e9f
    FCOMP float ptr [ESP + 0x240]       ; 004d1ea6
    FNSTSW AX                           ; 004d1ead
    SAHF                                ; 004d1eaf
    JNC 0x004d1ec0                      ; 004d1eb0
        ;   XREF to: 004d1ec0 (CONDITIONAL_JUMP)  ; LAB_004d1ec0
    MOV EAX,dword ptr [ESP + 0x240]     ; 004d1eb2
    MOV dword ptr [ESP + 0x264],EAX     ; 004d1eb9
    FLD float ptr [ESP + 0x264]         ; 004d1ec0
        ;   Label: LAB_004d1ec0
    FCOMP float ptr [ESP + 0x248]       ; 004d1ec7
    FNSTSW AX                           ; 004d1ece
    SAHF                                ; 004d1ed0
    JBE 0x004d1ee1                      ; 004d1ed1
        ;   XREF to: 004d1ee1 (CONDITIONAL_JUMP)  ; LAB_004d1ee1
    MOV EAX,dword ptr [ESP + 0x248]     ; 004d1ed3
    MOV dword ptr [ESP + 0x264],EAX     ; 004d1eda
    FLD float ptr [EBX + 0x34]          ; 004d1ee1
        ;   Label: LAB_004d1ee1
    FADD float ptr [ESP + 0x264]        ; 004d1ee4
    PUSH EBX                            ; 004d1eeb
    FSTP float ptr [EBX + 0x34]         ; 004d1eec
    CALL FUN_00408ae0                   ; 004d1eef
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 004d1ef4
    MOV EAX,dword ptr [EBX + 0x276c]    ; 004d1ef7
    MOV dword ptr [ESP + 0x21c],EAX     ; 004d1efd
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004d1f04
    PUSH 0x0                            ; 004d1f0a
    MOV dword ptr [ESP + 0x284],EAX     ; 004d1f0c
    LEA EAX,[EBX + 0x2b4]               ; 004d1f13
    PUSH EAX                            ; 004d1f19
    LEA ESI,[ESP + 0x1ec]               ; 004d1f1a
    CALL FUN_00546a90                   ; 004d1f21
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 004d1f26
    LEA EAX,[ESP + 0x88]                ; 004d1f29
    PUSH EAX                            ; 004d1f30
    LEA EDI,[ESP + 0x8c]                ; 004d1f31
    LEA ESI,[ESP + 0x1e8]               ; 004d1f38
    PUSH EBX                            ; 004d1f3f
    MOV ECX,dword ptr [ESP + 0x224]     ; 004d1f40
    MOV EAX,dword ptr [ESP + 0x288]     ; 004d1f47
    PUSH ECX                            ; 004d1f4e
    MOVSD ES:EDI,ESI                    ; 004d1f4f
    MOVSD ES:EDI,ESI                    ; 004d1f50
    MOVSD ES:EDI,ESI                    ; 004d1f51
    CALL dword ptr [EAX + 0x118]        ; 004d1f52
    ADD ESP,0xc                         ; 004d1f58
    TEST EAX,EAX                        ; 004d1f5b
    JZ 0x004d1fab                       ; 004d1f5d
        ;   XREF to: 004d1fab (CONDITIONAL_JUMP)  ; LAB_004d1fab
    CMP dword ptr [EBX + 0x276c],0x0    ; 004d1f5f
    JNZ 0x004d1f7b                      ; 004d1f66
        ;   XREF to: 004d1f7b (CONDITIONAL_JUMP)  ; LAB_004d1f7b
    PUSH 0x1                            ; 004d1f68
        ;   Label: LAB_004d1f68
    PUSH 0x0                            ; 004d1f6a
    LEA EAX,[EBX + 0x2b4]               ; 004d1f6c
    PUSH EAX                            ; 004d1f72
    CALL FUN_00503620                   ; 004d1f73
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d1f78
    MOV EDI,0x1                         ; 004d1f7b
        ;   Label: LAB_004d1f7b
    LEA EAX,[EBX + 0x2508]              ; 004d1f80
    MOV dword ptr [ESP + 0x25c],EDI     ; 004d1f86
    MOV dword ptr [EAX + 0x8],0x0       ; 004d1f8d
    MOV dword ptr [ESP + 0x260],EDI     ; 004d1f94
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d1f9b
    MOV dword ptr [EAX + 0x4],EDX       ; 004d1f9e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d1fa1
    MOV dword ptr [EAX],EDX             ; 004d1fa4
    JMP 0x004d1acf                      ; 004d1fa6
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x276c],EAX    ; 004d1fab
        ;   Label: LAB_004d1fab
    JMP 0x004d1f68                      ; 004d1fb1
        ;   XREF to: 004d1f68 (UNCONDITIONAL_JUMP)  ; LAB_004d1f68
    PUSH 0x3                            ; 004d1fb3
        ;   Label: LAB_004d1fb3
    LEA ESI,[EBX + 0x2b4]               ; 004d1fb5
    PUSH ESI                            ; 004d1fbb
    CALL FUN_005038a0                   ; 004d1fbc
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1fc1
    FLD float ptr [ESP + 0x288]         ; 004d1fc8
    FLDZ                                ; 004d1fcf
    ADD ESP,0x8                         ; 004d1fd1
    FCOMPP                              ; 004d1fd4
    FNSTSW AX                           ; 004d1fd6
    SAHF                                ; 004d1fd8
    JC 0x004d1ac4                       ; 004d1fd9
        ;   XREF to: 004d1ac4 (CONDITIONAL_JUMP)  ; LAB_004d1ac4
    PUSH 0x5                            ; 004d1fdf
    PUSH ESI                            ; 004d1fe1
    CALL FUN_005038a0                   ; 004d1fe2
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d1fe7
    FLD float ptr [ESP + 0x288]         ; 004d1fee
    FLDZ                                ; 004d1ff5
    ADD ESP,0x8                         ; 004d1ff7
    FCOMPP                              ; 004d1ffa
    FNSTSW AX                           ; 004d1ffc
    SAHF                                ; 004d1ffe
    JC 0x004d1ac4                       ; 004d1fff
        ;   XREF to: 004d1ac4 (CONDITIONAL_JUMP)  ; LAB_004d1ac4
    PUSH 0x8                            ; 004d2005
    PUSH ESI                            ; 004d2007
    CALL FUN_005038a0                   ; 004d2008
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 004d200d
    FLD float ptr [ESP + 0x288]         ; 004d2014
    FLDZ                                ; 004d201b
    ADD ESP,0x8                         ; 004d201d
    FCOMPP                              ; 004d2020
    FNSTSW AX                           ; 004d2022
    SAHF                                ; 004d2024
    JC 0x004d1ac4                       ; 004d2025
        ;   XREF to: 004d1ac4 (CONDITIONAL_JUMP)  ; LAB_004d1ac4
    PUSH dword ptr [EBP + 0x18]         ; 004d202b
    PUSH EBX                            ; 004d202e
    CALL FUN_004287f0                   ; 004d202f
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 004d2034
    TEST EAX,EAX                        ; 004d2037
    JZ 0x004d28b4                       ; 004d2039
        ;   XREF to: 004d28b4 (CONDITIONAL_JUMP)  ; LAB_004d28b4
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004d203f
    CMP EAX,0x2                         ; 004d2045
    JNC 0x004d20c2                      ; 004d2048
        ;   XREF to: 004d20c2 (CONDITIONAL_JUMP)  ; LAB_004d20c2
    CMP EAX,0x1                         ; 004d204a
    JNZ 0x004d20aa                      ; 004d204d
        ;   XREF to: 004d20aa (CONDITIONAL_JUMP)  ; LAB_004d20aa
    PUSH EAX                            ; 004d204f
    PUSH EAX                            ; 004d2050
    LEA EAX,[EBX + 0x2b4]               ; 004d2051
    PUSH EAX                            ; 004d2057
    CALL FUN_00503620                   ; 004d2058
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d205d
    JMP 0x004d1acf                      ; 004d2060
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d2065
        ;   Label: LAB_004d2065
    PUSH 0x0                            ; 004d2067
    LEA EAX,[EBX + 0x2b4]               ; 004d2069
    PUSH EAX                            ; 004d206f
    CALL FUN_00503620                   ; 004d2070
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d2075
    PUSH EBX                            ; 004d2078
    MOV EAX,0x5da1d8                    ; 004d2079 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004d207e | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00609ed0]                ; 004d207f | PTR_DAT_00609ed0
    PUSH EAX                            ; 004d2084 | DAT_007c158c
    CALL FUN_00436710                   ; 004d2085
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d208a
    JMP 0x004d1acf                      ; 004d208d
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d2092
        ;   Label: LAB_004d2092
    PUSH 0x2                            ; 004d2094
    LEA EAX,[EBX + 0x2b4]               ; 004d2096
    PUSH EAX                            ; 004d209c
    CALL FUN_00503620                   ; 004d209d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d20a2
    JMP 0x004d1acf                      ; 004d20a5
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d20aa
        ;   Label: LAB_004d20aa
    PUSH 0x0                            ; 004d20ac
    LEA EAX,[EBX + 0x2b4]               ; 004d20ae
    PUSH EAX                            ; 004d20b4
    CALL FUN_00503620                   ; 004d20b5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d20ba
    JMP 0x004d1acf                      ; 004d20bd
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004d2092                      ; 004d20c2
        ;   XREF to: 004d2092 (CONDITIONAL_JUMP)  ; LAB_004d2092
        ;   Label: LAB_004d20c2
    CMP EAX,0x3                         ; 004d20c4
    JZ 0x004d2065                       ; 004d20c7
        ;   XREF to: 004d2065 (CONDITIONAL_JUMP)  ; LAB_004d2065
    JMP 0x004d20aa                      ; 004d20c9
        ;   XREF to: 004d20aa (UNCONDITIONAL_JUMP)  ; LAB_004d20aa
    PUSH dword ptr [EBP + 0x18]         ; 004d20cb
        ;   Label: caseD_0
    PUSH EBX                            ; 004d20ce
    CALL FUN_004d2c50                   ; 004d20cf
        ;   XREF to: 004d2c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d2c50()
    ADD ESP,0x8                         ; 004d20d4
    TEST EAX,EAX                        ; 004d20d7
    JNZ 0x004d1acf                      ; 004d20d9
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,[0x01cedef4]                ; 004d20df | DAT_01cedef4
    LEA EDI,[ESP + 0x148]               ; 004d20e4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d20eb
    LEA ESI,[ESP + 0x190]               ; 004d20f2
    LEA EDX,[EBX + 0x20]                ; 004d20f9
    FLD float ptr [EAX + 0x20]          ; 004d20fc
    FLD float ptr [EAX + 0x24]          ; 004d20ff
    FLD float ptr [EAX + 0x28]          ; 004d2102
    FXCH ST2                            ; 004d2105
    FSUB float ptr [EDX]                ; 004d2107
    FXCH                                ; 004d2109
    FSUB float ptr [EDX + 0x4]          ; 004d210b
    FXCH ST2                            ; 004d210e
    FSUB float ptr [EDX + 0x8]          ; 004d2110
    FXCH                                ; 004d2113
    FSTP float ptr [ESP + 0x190]        ; 004d2115
    FXCH                                ; 004d211c
    FSTP float ptr [ESP + 0x194]        ; 004d211e
    FSTP float ptr [ESP + 0x198]        ; 004d2125
    MOVSD ES:EDI,ESI                    ; 004d212c
    MOVSD ES:EDI,ESI                    ; 004d212d
    MOVSD ES:EDI,ESI                    ; 004d212e
    LEA EDI,[ESP + 0xf4]                ; 004d212f
    LEA ESI,[ESP + 0x148]               ; 004d2136
    MOVSD ES:EDI,ESI                    ; 004d213d
    MOVSD ES:EDI,ESI                    ; 004d213e
    MOVSD ES:EDI,ESI                    ; 004d213f
    LEA EDI,[ESP + 0xd0]                ; 004d2140
    LEA ESI,[ESP + 0xf4]                ; 004d2147
    MOVSD ES:EDI,ESI                    ; 004d214e
    MOVSD ES:EDI,ESI                    ; 004d214f
    MOVSD ES:EDI,ESI                    ; 004d2150
    FLD float ptr [EBX + 0x24348]       ; 004d2151
    FLDZ                                ; 004d2157
    FCOMPP                              ; 004d2159
    FNSTSW AX                           ; 004d215b
    SAHF                                ; 004d215d
    JNC 0x004d21a0                      ; 004d215e
        ;   XREF to: 004d21a0 (CONDITIONAL_JUMP)  ; LAB_004d21a0
    FLD float ptr [ESP + 0xd4]          ; 004d2160
    FMUL ST0                            ; 004d2167
    FLD float ptr [ESP + 0xd0]          ; 004d2169
    FMUL ST0                            ; 004d2170
    FADDP                               ; 004d2172
    FLD float ptr [ESP + 0xd8]          ; 004d2174
    FMUL ST0                            ; 004d217b
    FADDP                               ; 004d217d
    LEA EAX,[ESP + 0x258]               ; 004d217f
    FSTP float ptr [ESP + 0x258]        ; 004d2186
    FLD float ptr [EAX]                 ; 004d218d
    FSQRT                               ; 004d218f
    FCOMP float ptr [EBX + 0x24348]     ; 004d2191
    FNSTSW AX                           ; 004d2197
    SAHF                                ; 004d2199
    JNC 0x004d20aa                      ; 004d219a
        ;   XREF to: 004d20aa (CONDITIONAL_JUMP)  ; LAB_004d20aa
    LEA EAX,[EBX + 0x2434c]             ; 004d21a0
        ;   Label: LAB_004d21a0
    PUSH EAX                            ; 004d21a6
    MOV ECX,dword ptr [0x006141f0]      ; 004d21a7 | DAT_006141f0
    PUSH ECX                            ; 004d21ad
    CALL FUN_0048e340                   ; 004d21ae
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004d21b3
    TEST EAX,EAX                        ; 004d21b6
    JZ 0x004d20aa                       ; 004d21b8
        ;   XREF to: 004d20aa (CONDITIONAL_JUMP)  ; LAB_004d20aa
    PUSH EBX                            ; 004d21be
    PUSH 0x5da202                       ; 004d21bf | = "%s rescued, entering follow mode\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004d21c4 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004d21ca | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x1   ; 004d21cb
    CALL FUN_00436710                   ; 004d21d5
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d21da
    LEA EAX,[EBX + 0x243d0]             ; 004d21dd
    PUSH EAX                            ; 004d21e3
    MOV EDI,dword ptr [0x006141f0]      ; 004d21e4 | DAT_006141f0
    PUSH EDI                            ; 004d21ea
    CALL FUN_004894f0                   ; 004d21eb
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d21f0
    JMP 0x004d1acf                      ; 004d21f3
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x24700]   ; 004d21f8
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 004d21fe
    JNZ 0x004d2252                      ; 004d2200
        ;   XREF to: 004d2252 (CONDITIONAL_JUMP)  ; LAB_004d2252
    CMP dword ptr [EBX + 0x24708],0x0   ; 004d2202
        ;   Label: LAB_004d2202
    JZ 0x004d228d                       ; 004d2209
        ;   XREF to: 004d228d (CONDITIONAL_JUMP)  ; LAB_004d228d
    PUSH EBX                            ; 004d220f
    PUSH 0x5da224                       ; 004d2210 | = "%s was led close enough, going home!\n"
    MOV EAX,[0x00609ed0]                ; 004d2215 | PTR_DAT_00609ed0
    PUSH EAX                            ; 004d221a | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x3   ; 004d221b
    CALL FUN_00436710                   ; 004d2225
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d222a
    LEA EAX,[EBX + 0x24560]             ; 004d222d
    PUSH EAX                            ; 004d2233
    MOV EDX,dword ptr [0x006141f0]      ; 004d2234 | DAT_006141f0
    PUSH EDX                            ; 004d223a
    CALL FUN_004894f0                   ; 004d223b
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d2240
    MOV dword ptr [EBX + 0x303c],0x0    ; 004d2243
    JMP 0x004d1acf                      ; 004d224d
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EDX,[EBX + 0x20]                ; 004d2252
        ;   Label: LAB_004d2252
    FLD float ptr [EDX]                 ; 004d2255
    FSUB float ptr [EDI + 0x20]         ; 004d2257
    FMUL ST0                            ; 004d225a
    FLD float ptr [EDX + 0x8]           ; 004d225c
    FSUB float ptr [EDI + 0x28]         ; 004d225f
    FMUL ST0                            ; 004d2262
    FADDP                               ; 004d2264
    FSQRT                               ; 004d2266
    FCOMP double ptr [0x005da366]       ; 004d2268 | DAT_005da366
    FNSTSW AX                           ; 004d226e
    SAHF                                ; 004d2270
    JNC 0x004d2202                      ; 004d2271
        ;   XREF to: 004d2202 (CONDITIONAL_JUMP)  ; LAB_004d2202
    PUSH 0x0                            ; 004d2273
    PUSH EDI                            ; 004d2275
    LEA EAX,[EBX + 0x20]                ; 004d2276
    PUSH EAX                            ; 004d2279
    CALL FUN_005882d0                   ; 004d227a
        ;   XREF to: 005882d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005882d0()
    ADD ESP,0xc                         ; 004d227f
    MOV dword ptr [EBX + 0x24708],EAX   ; 004d2282
    JMP 0x004d2202                      ; 004d2288
        ;   XREF to: 004d2202 (UNCONDITIONAL_JUMP)  ; LAB_004d2202
    PUSH dword ptr [EBP + 0x18]         ; 004d228d
        ;   Label: LAB_004d228d
    PUSH EBX                            ; 004d2290
    CALL FUN_004d2c50                   ; 004d2291
        ;   XREF to: 004d2c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d2c50()
    ADD ESP,0x8                         ; 004d2296
    TEST EAX,EAX                        ; 004d2299
    JNZ 0x004d1acf                      ; 004d229b
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x18]         ; 004d22a1
    PUSH EBX                            ; 004d22a4
    CALL FUN_0042abe0                   ; 004d22a5
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abe0()
    ADD ESP,0x8                         ; 004d22aa
    TEST EAX,EAX                        ; 004d22ad
    JNZ 0x004d2306                      ; 004d22af
        ;   XREF to: 004d2306 (CONDITIONAL_JUMP)  ; LAB_004d2306
    LEA EAX,[EBX + 0x246f4]             ; 004d22b1
    PUSH EAX                            ; 004d22b7
    MOV EAX,[0x01cedef4]                ; 004d22b8 | DAT_01cedef4
    PUSH 0x41200000                     ; 004d22bd
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d22c2
    PUSH 0x40a00000                     ; 004d22c9
    PUSH ECX                            ; 004d22ce
    PUSH EBX                            ; 004d22cf
    CALL FUN_00428260                   ; 004d22d0
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined FUN_00428260()
    ADD ESP,0x14                        ; 004d22d5
    MOV EAX,dword ptr [EBX + 0x246f4]   ; 004d22d8
        ;   Label: LAB_004d22d8
    LEA EDX,[EBX + 0x2b4]               ; 004d22de
    CMP EAX,0x2                         ; 004d22e4
    JNC 0x004d2371                      ; 004d22e7
        ;   XREF to: 004d2371 (CONDITIONAL_JUMP)  ; LAB_004d2371
    CMP EAX,0x1                         ; 004d22ed
    JNZ 0x004d20aa                      ; 004d22f0
        ;   XREF to: 004d20aa (CONDITIONAL_JUMP)  ; LAB_004d20aa
    PUSH EAX                            ; 004d22f6
    PUSH EAX                            ; 004d22f7
    PUSH EDX                            ; 004d22f8
    CALL FUN_00503620                   ; 004d22f9
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d22fe
    JMP 0x004d1acf                      ; 004d2301
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x246f4],EAX   ; 004d2306
        ;   Label: LAB_004d2306
    JMP 0x004d22d8                      ; 004d230c
        ;   XREF to: 004d22d8 (UNCONDITIONAL_JUMP)  ; LAB_004d22d8
    PUSH 0x1                            ; 004d230e
        ;   Label: LAB_004d230e
    PUSH 0x0                            ; 004d2310
    PUSH EDX                            ; 004d2312
    CALL FUN_00503620                   ; 004d2313
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d2318
    PUSH EBX                            ; 004d231b
    PUSH 0x5da24a                       ; 004d231c | = "%s left behind!\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004d2321 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004d2327 | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x2   ; 004d2328
    CALL FUN_00436710                   ; 004d2332
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d2337
    LEA EAX,[EBX + 0x24434]             ; 004d233a
    PUSH EAX                            ; 004d2340
    MOV EDI,dword ptr [0x006141f0]      ; 004d2341 | DAT_006141f0
    PUSH EDI                            ; 004d2347
    CALL FUN_004894f0                   ; 004d2348
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d234d
    MOV dword ptr [EBX + 0x303c],0x0    ; 004d2350
    JMP 0x004d1acf                      ; 004d235a
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d235f
        ;   Label: LAB_004d235f
    PUSH 0x2                            ; 004d2361
    PUSH EDX                            ; 004d2363
    CALL FUN_00503620                   ; 004d2364
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d2369
    JMP 0x004d1acf                      ; 004d236c
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004d235f                      ; 004d2371
        ;   XREF to: 004d235f (CONDITIONAL_JUMP)  ; LAB_004d235f
        ;   Label: LAB_004d2371
    CMP EAX,0x3                         ; 004d2373
    JZ 0x004d230e                       ; 004d2376
        ;   XREF to: 004d230e (CONDITIONAL_JUMP)  ; LAB_004d230e
    JMP 0x004d20aa                      ; 004d2378
        ;   XREF to: 004d20aa (UNCONDITIONAL_JUMP)  ; LAB_004d20aa
    PUSH dword ptr [EBP + 0x18]         ; 004d237d
        ;   Label: caseD_2
    PUSH EBX                            ; 004d2380
    CALL FUN_004d2c50                   ; 004d2381
        ;   XREF to: 004d2c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d2c50()
    ADD ESP,0x8                         ; 004d2386
    TEST EAX,EAX                        ; 004d2389
    JNZ 0x004d1acf                      ; 004d238b
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x246f4]             ; 004d2391
    PUSH EAX                            ; 004d2397
    MOV EAX,[0x01cedef4]                ; 004d2398 | DAT_01cedef4
    PUSH 0x41200000                     ; 004d239d
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004d23a2
    PUSH 0x40800000                     ; 004d23a9
    PUSH EDX                            ; 004d23ae
    PUSH EBX                            ; 004d23af
    XOR EDI,EDI                         ; 004d23b0
    CALL FUN_00428260                   ; 004d23b2
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined FUN_00428260()
    MOV EAX,dword ptr [EBX + 0x246f4]   ; 004d23b7
    ADD ESP,0x14                        ; 004d23bd
    CMP EAX,0x1                         ; 004d23c0
    JNC 0x004d241a                      ; 004d23c3
        ;   XREF to: 004d241a (CONDITIONAL_JUMP)  ; LAB_004d241a
    TEST EAX,EAX                        ; 004d23c5
    JNZ 0x004d2421                      ; 004d23c7
        ;   XREF to: 004d2421 (CONDITIONAL_JUMP)  ; LAB_004d2421
    PUSH 0x1                            ; 004d23c9
    PUSH EDI                            ; 004d23cb
    PUSH ESI                            ; 004d23cc
        ;   Label: LAB_004d23cc
    MOV dword ptr [EBX + 0x246fc],0x1   ; 004d23cd
    CALL FUN_00503620                   ; 004d23d7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d23dc
    PUSH EBX                            ; 004d23df
        ;   Label: LAB_004d23df
    PUSH 0x5da25b                       ; 004d23e0 | = "%s was left behind, but now can follo..."
    MOV ECX,dword ptr [0x00609ed0]      ; 004d23e5 | PTR_DAT_00609ed0
    PUSH ECX                            ; 004d23eb | DAT_007c158c
    CALL FUN_00436710                   ; 004d23ec
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d23f1
    LEA EAX,[EBX + 0x24498]             ; 004d23f4
    PUSH EAX                            ; 004d23fa
    MOV ESI,dword ptr [0x006141f0]      ; 004d23fb | DAT_006141f0
    PUSH ESI                            ; 004d2401
    CALL FUN_004894f0                   ; 004d2402
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d2407
    JMP 0x004d1acf                      ; 004d240a
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d240f
        ;   Label: LAB_004d240f
    PUSH 0x1                            ; 004d2411
    JMP 0x004d23cc                      ; 004d2413
        ;   XREF to: 004d23cc (UNCONDITIONAL_JUMP)  ; LAB_004d23cc
    PUSH 0x1                            ; 004d2415
        ;   Label: LAB_004d2415
    PUSH EAX                            ; 004d2417
    JMP 0x004d23cc                      ; 004d2418
        ;   XREF to: 004d23cc (UNCONDITIONAL_JUMP)  ; LAB_004d23cc
    JBE 0x004d240f                      ; 004d241a
        ;   XREF to: 004d240f (CONDITIONAL_JUMP)  ; LAB_004d240f
        ;   Label: LAB_004d241a
    CMP EAX,0x2                         ; 004d241c
    JZ 0x004d2415                       ; 004d241f
        ;   XREF to: 004d2415 (CONDITIONAL_JUMP)  ; LAB_004d2415
    PUSH 0x1                            ; 004d2421
        ;   Label: LAB_004d2421
    PUSH 0x0                            ; 004d2423
    LEA EAX,[EBX + 0x2b4]               ; 004d2425
    PUSH EAX                            ; 004d242b
    CALL FUN_00503620                   ; 004d242c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d2431
    TEST EDI,EDI                        ; 004d2434
    JNZ 0x004d23df                      ; 004d2436
        ;   XREF to: 004d23df (CONDITIONAL_JUMP)  ; LAB_004d23df
    JMP 0x004d1acf                      ; 004d2438
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x24708]   ; 004d243d
        ;   Label: caseD_3
    TEST EDI,EDI                        ; 004d2443
    JNZ 0x004d2586                      ; 004d2445
        ;   XREF to: 004d2586 (CONDITIONAL_JUMP)  ; LAB_004d2586
    PUSH EBX                            ; 004d244b
    PUSH 0x5da28a                       ; 004d244c | = "%s doesn't know next waypoint going h..."
    MOV EDI,dword ptr [0x00609ed0]      ; 004d2451 | PTR_DAT_00609ed0
    PUSH EDI                            ; 004d2457 | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x2   ; 004d2458
    CALL FUN_00436710                   ; 004d2462
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d2467
    JMP 0x004d1acf                      ; 004d246a
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x24708]   ; 004d246f
        ;   Label: caseD_0
    PUSH EDI                            ; 004d2475
    PUSH EBX                            ; 004d2476
    PUSH 0x5da2bf                       ; 004d2477 | = "%s reached waypoint %s!\n"
    MOV EAX,[0x00609ed0]                ; 004d247c | PTR_DAT_00609ed0
    PUSH EAX                            ; 004d2481 | DAT_007c158c
    CALL FUN_00436710                   ; 004d2482
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    MOV EAX,dword ptr [EBX + 0x24708]   ; 004d2487
    MOV EDX,dword ptr [EBX + 0x24700]   ; 004d248d
    ADD ESP,0x10                        ; 004d2493
    CMP EAX,EDX                         ; 004d2496
    JNZ 0x004d24c8                      ; 004d2498
        ;   XREF to: 004d24c8 (CONDITIONAL_JUMP)  ; LAB_004d24c8
    PUSH EBX                            ; 004d249a
    PUSH 0x5da2d8                       ; 004d249b | = "%s rescued and taken home!\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004d24a0 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004d24a6 | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x4   ; 004d24a7
    CALL FUN_00436710                   ; 004d24b1
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d24b6
    MOV dword ptr [EBX + 0x24708],0x0   ; 004d24b9
    JMP 0x004d1acf                      ; 004d24c3
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x0                            ; 004d24c8
        ;   Label: LAB_004d24c8
    PUSH EDX                            ; 004d24ca
    LEA EAX,[EBX + 0x20]                ; 004d24cb
    PUSH EAX                            ; 004d24ce
    CALL FUN_005882d0                   ; 004d24cf
        ;   XREF to: 005882d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005882d0()
    ADD ESP,0xc                         ; 004d24d4
    MOV dword ptr [EBX + 0x24708],EAX   ; 004d24d7
    JMP 0x004d1acf                      ; 004d24dd
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d24e2
        ;   Label: caseD_3
    PUSH 0x0                            ; 004d24e4
    PUSH ESI                            ; 004d24e6
    CALL FUN_00503620                   ; 004d24e7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d24ec
    PUSH EBX                            ; 004d24ef
    PUSH 0x5da2f4                       ; 004d24f0 | = "%s got confused going home.  Help me!\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 004d24f5 | PTR_DAT_00609ed0
    PUSH EDX                            ; 004d24fb | DAT_007c158c
    MOV dword ptr [EBX + 0x246fc],0x2   ; 004d24fc
    CALL FUN_00436710                   ; 004d2506
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004d250b
    PUSH 0x1                            ; 004d250e
    PUSH 0x0                            ; 004d2510
    PUSH ESI                            ; 004d2512
    CALL FUN_00503620                   ; 004d2513
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d2518
    LEA EAX,[EBX + 0x245c4]             ; 004d251b
    PUSH EAX                            ; 004d2521
    MOV ECX,dword ptr [0x006141f0]      ; 004d2522 | DAT_006141f0
    PUSH ECX                            ; 004d2528
    CALL FUN_004894f0                   ; 004d2529
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d252e
    PUSH 0x1                            ; 004d2531
    LEA EAX,[EBX + 0x243b0]             ; 004d2533
    PUSH EAX                            ; 004d2539
    MOV ESI,dword ptr [0x006141f0]      ; 004d253a | DAT_006141f0
    PUSH ESI                            ; 004d2540
    CALL FUN_00490f80                   ; 004d2541
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00490f80()
    MOV dword ptr [EBX + 0x246fc],0x4   ; 004d2546
    ADD ESP,0xc                         ; 004d2550
    MOV dword ptr [EBX + 0x24708],0x0   ; 004d2553
    JMP 0x004d1acf                      ; 004d255d
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d2562
        ;   Label: caseD_1
    PUSH 0x1                            ; 004d2564
    PUSH ESI                            ; 004d2566
    CALL FUN_00503620                   ; 004d2567
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d256c
    JMP 0x004d1acf                      ; 004d256f
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004d2574
        ;   Label: caseD_2
    PUSH 0x2                            ; 004d2576
    PUSH ESI                            ; 004d2578
    CALL FUN_00503620                   ; 004d2579
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d257e
    JMP 0x004d1acf                      ; 004d2581
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x246f4]             ; 004d2586
        ;   Label: LAB_004d2586
    PUSH EAX                            ; 004d258c
    PUSH 0xbf800000                     ; 004d258d
    PUSH 0x3f800000                     ; 004d2592
    PUSH EDI                            ; 004d2597
    PUSH EBX                            ; 004d2598
    CALL FUN_00428260                   ; 004d2599
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined FUN_00428260()
    MOV EAX,dword ptr [EBX + 0x246f4]   ; 004d259e
    ADD ESP,0x14                        ; 004d25a4
    CMP EAX,0x3                         ; 004d25a7
    JA 0x004d1acf                       ; 004d25aa
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4d1638]  ; 004d25b0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,0x1                         ; 004d25b7
        ;   Label: caseD_4
    MOV ESI,dword ptr [EBX + 0x24704]   ; 004d25bc
    MOV dword ptr [ESP + 0x25c],ECX     ; 004d25c2
    TEST ESI,ESI                        ; 004d25c9
    JZ 0x004d1acf                       ; 004d25cb
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBX + 0x2594]        ; 004d25d1
    FLD float ptr [EBP + 0x18]          ; 004d25d7
    FMUL double ptr [0x005da33e]        ; 004d25da | DAT_005da33e
    FSTP double ptr [ESP]               ; 004d25e0
    FCOMP double ptr [ESP]              ; 004d25e3
    FNSTSW AX                           ; 004d25e6
    SAHF                                ; 004d25e8
    JNC 0x004d25f4                      ; 004d25e9
        ;   XREF to: 004d25f4 (CONDITIONAL_JUMP)  ; LAB_004d25f4
    FLD double ptr [ESP]                ; 004d25eb
    FSTP float ptr [EBX + 0x2594]       ; 004d25ee
    MOV EAX,dword ptr [EBX + 0x24704]   ; 004d25f4
        ;   Label: LAB_004d25f4
    ADD EAX,0x20                        ; 004d25fa
    PUSH EAX                            ; 004d25fd
    PUSH EBX                            ; 004d25fe
    LEA ESI,[ESP + 0x174]               ; 004d25ff
    LEA EDI,[ESP + 0x120]               ; 004d2606
    CALL FUN_00408de0                   ; 004d260d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x174]               ; 004d2612
    LEA EAX,[ESP + 0x120]               ; 004d2619
    ADD ESP,0x8                         ; 004d2620
    LEA EDX,[EBX + 0x257c]              ; 004d2623
    MOVSD ES:EDI,ESI                    ; 004d2629
    MOVSD ES:EDI,ESI                    ; 004d262a
    MOVSD ES:EDI,ESI                    ; 004d262b
    CMP EDX,EAX                         ; 004d262c
    JZ 0x004d264d                       ; 004d262e
        ;   XREF to: 004d264d (CONDITIONAL_JUMP)  ; LAB_004d264d
    MOV EAX,dword ptr [ESP + 0x118]     ; 004d2630
    MOV dword ptr [EDX],EAX             ; 004d2637
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004d2639
    MOV dword ptr [EDX + 0x4],EAX       ; 004d2640
    MOV EAX,dword ptr [ESP + 0x120]     ; 004d2643
    MOV dword ptr [EDX + 0x8],EAX       ; 004d264a
    LEA EDI,[ESP + 0x7c]                ; 004d264d
        ;   Label: LAB_004d264d
    LEA ESI,[EBX + 0x257c]              ; 004d2651
    MOVSD ES:EDI,ESI                    ; 004d2657
    MOVSD ES:EDI,ESI                    ; 004d2658
    MOVSD ES:EDI,ESI                    ; 004d2659
    FLD float ptr [ESP + 0x7c]          ; 004d265a
    FMUL ST0                            ; 004d265e
    FLD float ptr [ESP + 0x84]          ; 004d2660
    FMUL ST0                            ; 004d2667
    FADDP                               ; 004d2669
    FSQRT                               ; 004d266b
    XOR EDI,EDI                         ; 004d266d
    MOV dword ptr [ESP + 0x80],EDI      ; 004d266f
    FSTP float ptr [ESP + 0x254]        ; 004d2676
    MOV EAX,dword ptr [ESP + 0x254]     ; 004d267d
    FLD float ptr [ESP + 0x254]         ; 004d2684
    MOV dword ptr [ESP + 0x20],EAX      ; 004d268b
    FCOMP float ptr [EBX + 0x2594]      ; 004d268f
    FNSTSW AX                           ; 004d2695
    SAHF                                ; 004d2697
    JBE 0x004d26dd                      ; 004d2698
        ;   XREF to: 004d26dd (CONDITIONAL_JUMP)  ; LAB_004d26dd
    FLD float ptr [EBX + 0x2594]        ; 004d269a
    FDIV float ptr [ESP + 0x254]        ; 004d26a0
    LEA EAX,[EBX + 0x257c]              ; 004d26a7
    FLD float ptr [EAX]                 ; 004d26ad
    FXCH                                ; 004d26af
    FSTP float ptr [ESP + 0x250]        ; 004d26b1
    FMUL float ptr [ESP + 0x250]        ; 004d26b8
    FLD float ptr [EAX + 0x4]           ; 004d26bf
    FMUL float ptr [ESP + 0x250]        ; 004d26c2
    FLD float ptr [EAX + 0x8]           ; 004d26c9
    FMUL float ptr [ESP + 0x250]        ; 004d26cc
    FXCH ST2                            ; 004d26d3
    FSTP float ptr [EAX]                ; 004d26d5
    FSTP float ptr [EAX + 0x4]          ; 004d26d7
    FSTP float ptr [EAX + 0x8]          ; 004d26da
    LEA EAX,[EBX + 0x257c]              ; 004d26dd
        ;   Label: LAB_004d26dd
    PUSH EAX                            ; 004d26e3
    LEA ESI,[ESP + 0x1b8]               ; 004d26e4
    LEA EDI,[ESP + 0x140]               ; 004d26eb
    CALL FUN_005838f0                   ; 004d26f2
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    ADD ESP,0x4                         ; 004d26f7
    LEA ESI,[ESP + 0x1b4]               ; 004d26fa
    FLD float ptr [ESP + 0x20]          ; 004d2701
    FMUL double ptr [0x005da346]        ; 004d2705 | DAT_005da346
    MOVSD ES:EDI,ESI                    ; 004d270b
    MOVSD ES:EDI,ESI                    ; 004d270c
    MOVSD ES:EDI,ESI                    ; 004d270d
    FLD1                                ; 004d270e
    MOV EAX,dword ptr [ESP + 0x140]     ; 004d2710
    FXCH                                ; 004d2717
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2719
    FSTP double ptr [ESP + 0x10]        ; 004d271f
    FCOMP double ptr [ESP + 0x10]       ; 004d2723
    FNSTSW AX                           ; 004d2727
    SAHF                                ; 004d2729
    JBE 0x004d278a                      ; 004d272a
        ;   XREF to: 004d278a (CONDITIONAL_JUMP)  ; LAB_004d278a
    MOV EAX,dword ptr [EBX + 0x24704]   ; 004d272c
    FLD float ptr [EAX + 0x34]          ; 004d2732
    FSUB float ptr [EBX + 0x34]         ; 004d2735
    SUB ESP,0x4                         ; 004d2738
    FSTP float ptr [ESP]                ; 004d273b
    CALL FUN_0040d0c0                   ; 004d273e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x284],EAX     ; 004d2743
    FLD float ptr [ESP + 0x284]         ; 004d274a
    ADD ESP,0x4                         ; 004d2751
    FSUB float ptr [EBX + 0x2578]       ; 004d2754
    SUB ESP,0x4                         ; 004d275a
    FSTP float ptr [ESP]                ; 004d275d
    CALL FUN_0040d0c0                   ; 004d2760
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x284],EAX     ; 004d2765
    FLD float ptr [ESP + 0x284]         ; 004d276c
    ADD ESP,0x4                         ; 004d2773
    FLD1                                ; 004d2776
    FSUB double ptr [ESP + 0x10]        ; 004d2778
    FMULP                               ; 004d277c
    FADD float ptr [EBX + 0x2578]       ; 004d277e
    FSTP float ptr [EBX + 0x2578]       ; 004d2784
    PUSH dword ptr [EBX + 0x2578]       ; 004d278a
        ;   Label: LAB_004d278a
    CALL FUN_0040d0c0                   ; 004d2790
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x284],EAX     ; 004d2795
    FLD float ptr [ESP + 0x284]         ; 004d279c
    ADD ESP,0x4                         ; 004d27a3
    FSTP float ptr [EBX + 0x2578]       ; 004d27a6
    FLD float ptr [ESP + 0x20]          ; 004d27ac
    FCOMP double ptr [0x005da34e]       ; 004d27b0 | DAT_005da34e
    FNSTSW AX                           ; 004d27b6
    SAHF                                ; 004d27b8
    JNC 0x004d2831                      ; 004d27b9
        ;   XREF to: 004d2831 (CONDITIONAL_JUMP)  ; LAB_004d2831
    FLD float ptr [EBX + 0x2578]        ; 004d27bb
    FABS                                ; 004d27c1
    FCOMP double ptr [0x005da356]       ; 004d27c3 | DAT_005da356
    FNSTSW AX                           ; 004d27c9
    SAHF                                ; 004d27cb
    JNC 0x004d2831                      ; 004d27cc
        ;   XREF to: 004d2831 (CONDITIONAL_JUMP)  ; LAB_004d2831
    MOV EAX,dword ptr [EBX + 0x246f8]   ; 004d27ce
    TEST EAX,EAX                        ; 004d27d4
    JNZ 0x004d2893                      ; 004d27d6
        ;   XREF to: 004d2893 (CONDITIONAL_JUMP)  ; LAB_004d2893
    PUSH 0x1                            ; 004d27dc
        ;   Label: LAB_004d27dc
    PUSH 0x0                            ; 004d27de
    LEA EAX,[EBX + 0x2b4]               ; 004d27e0
    PUSH EAX                            ; 004d27e6
    CALL FUN_00503620                   ; 004d27e7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d27ec
    MOV dword ptr [EBX + 0x246fc],0x5   ; 004d27ef
    LEA EAX,[EBX + 0x245c4]             ; 004d27f9
        ;   Label: LAB_004d27f9
    PUSH EAX                            ; 004d27ff
    MOV ECX,dword ptr [0x006141f0]      ; 004d2800 | DAT_006141f0
    PUSH ECX                            ; 004d2806
    CALL FUN_004894f0                   ; 004d2807
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004d280c
    PUSH 0x1                            ; 004d280f
    LEA EAX,[EBX + 0x243b0]             ; 004d2811
    PUSH EAX                            ; 004d2817
    MOV ESI,dword ptr [0x006141f0]      ; 004d2818 | DAT_006141f0
    PUSH ESI                            ; 004d281e
    CALL FUN_00490f80                   ; 004d281f
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00490f80()
    ADD ESP,0xc                         ; 004d2824
    MOV dword ptr [EBX + 0x24704],0x0   ; 004d2827
    FLD float ptr [EBP + 0x18]          ; 004d2831
        ;   Label: LAB_004d2831
    FMUL float ptr [0x005da35e]         ; 004d2834 | DAT_005da35e
    FLD float ptr [EBX + 0x2578]        ; 004d283a
    FXCH                                ; 004d2840
    FST float ptr [ESP + 0x24c]         ; 004d2842
    FCHS                                ; 004d2849
    FSTP float ptr [ESP + 0x244]        ; 004d284b
    FCOMP float ptr [ESP + 0x244]       ; 004d2852
    FNSTSW AX                           ; 004d2859
    SAHF                                ; 004d285b
    JNC 0x004d286b                      ; 004d285c
        ;   XREF to: 004d286b (CONDITIONAL_JUMP)  ; LAB_004d286b
    MOV EAX,dword ptr [ESP + 0x244]     ; 004d285e
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2865
    FLD float ptr [EBX + 0x2578]        ; 004d286b
        ;   Label: LAB_004d286b
    FCOMP float ptr [ESP + 0x24c]       ; 004d2871
    FNSTSW AX                           ; 004d2878
    SAHF                                ; 004d287a
    JBE 0x004d1acf                      ; 004d287b
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004d2881
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2888
    JMP 0x004d1acf                      ; 004d288e
        ;   XREF to: 004d1acf (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP EAX,0x4                         ; 004d2893
        ;   Label: LAB_004d2893
    JZ 0x004d27dc                       ; 004d2896
        ;   XREF to: 004d27dc (CONDITIONAL_JUMP)  ; LAB_004d27dc
    PUSH 0x1                            ; 004d289c
    PUSH 0xa                            ; 004d289e
    LEA EAX,[EBX + 0x2b4]               ; 004d28a0
    PUSH EAX                            ; 004d28a6
    CALL FUN_00503620                   ; 004d28a7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004d28ac
    JMP 0x004d27f9                      ; 004d28af
        ;   XREF to: 004d27f9 (UNCONDITIONAL_JUMP)  ; LAB_004d27f9
    MOV EAX,dword ptr [EBX + 0x246fc]   ; 004d28b4
        ;   Label: LAB_004d28b4
    CMP EAX,0x5                         ; 004d28ba
    JA 0x004d1acf                       ; 004d28bd
        ;   XREF to: 004d1acf (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4d1648]  ; 004d28c3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x2b4]               ; 004d28ca
        ;   Label: LAB_004d28ca
    PUSH EAX                            ; 004d28d0
    CALL FUN_005035c0                   ; 004d28d1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d28d6
    ADD ESP,0x4                         ; 004d28d9
    CMP EAX,0x8                         ; 004d28dc
    JZ 0x004d2a7b                       ; 004d28df
        ;   XREF to: 004d2a7b (CONDITIONAL_JUMP)  ; LAB_004d2a7b
    TEST EAX,EAX                        ; 004d28e5
    JZ 0x004d2a7b                       ; 004d28e7
        ;   XREF to: 004d2a7b (CONDITIONAL_JUMP)  ; LAB_004d2a7b
    CMP EAX,0xd                         ; 004d28ed
    JZ 0x004d2a7b                       ; 004d28f0
        ;   XREF to: 004d2a7b (CONDITIONAL_JUMP)  ; LAB_004d2a7b
    CMP EAX,0xa                         ; 004d28f6
    JZ 0x004d2a7b                       ; 004d28f9
        ;   XREF to: 004d2a7b (CONDITIONAL_JUMP)  ; LAB_004d2a7b
    PUSH dword ptr [EBP + 0x18]         ; 004d28ff
        ;   Label: LAB_004d28ff
    PUSH EBX                            ; 004d2902
    LEA ESI,[EBX + 0x2588]              ; 004d2903
    CALL FUN_00423a10                   ; 004d2909
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    ADD ESP,0x8                         ; 004d290e
    FLD float ptr [ESI]                 ; 004d2911
    FMUL float ptr [EBP + 0x18]         ; 004d2913
    FLD float ptr [ESI + 0x4]           ; 004d2916
    FMUL float ptr [EBP + 0x18]         ; 004d2919
    FLD float ptr [ESI + 0x8]           ; 004d291c
    FMUL float ptr [EBP + 0x18]         ; 004d291f
    LEA EDI,[ESP + 0x124]               ; 004d2922
    LEA ESI,[ESP + 0x130]               ; 004d2929
    FXCH ST2                            ; 004d2930
    FSTP float ptr [ESP + 0x130]        ; 004d2932
    FSTP float ptr [ESP + 0x134]        ; 004d2939
    FSTP float ptr [ESP + 0x138]        ; 004d2940
    MOVSD ES:EDI,ESI                    ; 004d2947
    MOVSD ES:EDI,ESI                    ; 004d2948
    MOVSD ES:EDI,ESI                    ; 004d2949
    LEA EDX,[EBX + 0x257c]              ; 004d294a
    FLD float ptr [ESP + 0x124]         ; 004d2950
    FLD float ptr [ESP + 0x128]         ; 004d2957
    FLD float ptr [ESP + 0x12c]         ; 004d295e
    LEA EDI,[ESP + 0x10c]               ; 004d2965
    LEA ESI,[ESP + 0x1cc]               ; 004d296c
    FXCH ST2                            ; 004d2973
    FADD float ptr [EDX]                ; 004d2975
    FXCH                                ; 004d2977
    FADD float ptr [EDX + 0x4]          ; 004d2979
    FXCH ST2                            ; 004d297c
    FADD float ptr [EDX + 0x8]          ; 004d297e
    FXCH                                ; 004d2981
    FSTP float ptr [ESP + 0x1cc]        ; 004d2983
    FXCH                                ; 004d298a
    FSTP float ptr [ESP + 0x1d0]        ; 004d298c
    FSTP float ptr [ESP + 0x1d4]        ; 004d2993
    MOVSD ES:EDI,ESI                    ; 004d299a
    MOVSD ES:EDI,ESI                    ; 004d299b
    MOVSD ES:EDI,ESI                    ; 004d299c
    LEA EAX,[EBX + 0x2508]              ; 004d299d
    FLD float ptr [ESP + 0x10c]         ; 004d29a3
    FLD float ptr [ESP + 0x110]         ; 004d29aa
    FLD float ptr [ESP + 0x114]         ; 004d29b1
    LEA EDI,[ESP + 0x19c]               ; 004d29b8
    LEA ESI,[ESP + 0xe8]                ; 004d29bf
    FXCH ST2                            ; 004d29c6
    FADD float ptr [EAX]                ; 004d29c8
    FXCH                                ; 004d29ca
    FADD float ptr [EAX + 0x4]          ; 004d29cc
    FXCH ST2                            ; 004d29cf
    FADD float ptr [EAX + 0x8]          ; 004d29d1
    FXCH                                ; 004d29d4
    FSTP float ptr [ESP + 0xe8]         ; 004d29d6
    FXCH                                ; 004d29dd
    FSTP float ptr [ESP + 0xec]         ; 004d29df
    FSTP float ptr [ESP + 0xf0]         ; 004d29e6
    MOVSD ES:EDI,ESI                    ; 004d29ed
    MOVSD ES:EDI,ESI                    ; 004d29ee
    MOVSD ES:EDI,ESI                    ; 004d29ef
    MOV dword ptr [EDX + 0x8],0x0       ; 004d29f0
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d29f7
    MOV dword ptr [EDX + 0x4],ECX       ; 004d29fa
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d29fd
    MOV dword ptr [EDX],ECX             ; 004d2a00
    MOV dword ptr [EAX + 0x8],0x0       ; 004d2a02
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d2a09
    MOV dword ptr [EAX + 0x4],EDX       ; 004d2a0c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d2a0f
    MOV dword ptr [EAX],EDX             ; 004d2a12
    LEA EAX,[ESP + 0x19c]               ; 004d2a14
    PUSH EAX                            ; 004d2a1b
    LEA EDI,[ESP + 0xc8]                ; 004d2a1c
    LEA ESI,[EBX + 0x20]                ; 004d2a23
    PUSH EBX                            ; 004d2a26
    MOVSD ES:EDI,ESI                    ; 004d2a27
    MOVSD ES:EDI,ESI                    ; 004d2a28
    MOVSD ES:EDI,ESI                    ; 004d2a29
    CALL FUN_00423a60                   ; 004d2a2a
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 004d2a2f
    FLD float ptr [EBX + 0x304c]        ; 004d2a32
    FADD float ptr [EBP + 0x18]         ; 004d2a38
    FSTP float ptr [EBX + 0x304c]       ; 004d2a3b
    FLD float ptr [ESP + 0x1a0]         ; 004d2a41
    FMUL ST0                            ; 004d2a48
    FLD float ptr [ESP + 0x19c]         ; 004d2a4a
    FMUL ST0                            ; 004d2a51
    FADDP                               ; 004d2a53
    FLD float ptr [ESP + 0x1a4]         ; 004d2a55
    FMUL ST0                            ; 004d2a5c
    FADDP                               ; 004d2a5e
    FSQRT                               ; 004d2a60
    FLD float ptr [EBP + 0x18]          ; 004d2a62
    FST double ptr [ESP + 0x18]         ; 004d2a65
    FMUL double ptr [0x005da37e]        ; 004d2a69 | DAT_005da37e
    FCOMPP                              ; 004d2a6f
    FNSTSW AX                           ; 004d2a71
    SAHF                                ; 004d2a73
    JBE 0x004d2a94                      ; 004d2a74
        ;   XREF to: 004d2a94 (CONDITIONAL_JUMP)  ; LAB_004d2a94
    JMP 0x004d1c4b                      ; 004d2a76
        ;   XREF to: 004d1c4b (UNCONDITIONAL_JUMP)  ; LAB_004d1c4b
    MOV ESI,dword ptr [EBX + 0xdc]      ; 004d2a7b
        ;   Label: LAB_004d2a7b
    TEST ESI,ESI                        ; 004d2a81
    JNZ 0x004d28ff                      ; 004d2a83
        ;   XREF to: 004d28ff (CONDITIONAL_JUMP)  ; LAB_004d28ff
    MOV dword ptr [EBX + 0x304c],ESI    ; 004d2a89
    JMP 0x004d1c55                      ; 004d2a8f
        ;   XREF to: 004d1c55 (UNCONDITIONAL_JUMP)  ; LAB_004d1c55
    LEA EAX,[EBX + 0x20]                ; 004d2a94
        ;   Label: LAB_004d2a94
    FLD float ptr [EAX]                 ; 004d2a97
    FSUB float ptr [ESP + 0xc4]         ; 004d2a99
    FMUL ST0                            ; 004d2aa0
    FLD float ptr [EAX + 0x4]           ; 004d2aa2
    FSUB float ptr [ESP + 0xc8]         ; 004d2aa5
    FMUL ST0                            ; 004d2aac
    FLD float ptr [EAX + 0x8]           ; 004d2aae
    FXCH                                ; 004d2ab1
    FADDP ST2,ST0                       ; 004d2ab3
    FSUB float ptr [ESP + 0xcc]         ; 004d2ab5
    FMUL ST0                            ; 004d2abc
    FADDP                               ; 004d2abe
    FSQRT                               ; 004d2ac0
    FLD double ptr [ESP + 0x18]         ; 004d2ac2
    FMUL double ptr [0x005da386]        ; 004d2ac6 | DAT_005da386
    FCOMPP                              ; 004d2acc
    FNSTSW AX                           ; 004d2ace
    SAHF                                ; 004d2ad0
    JC 0x004d1c4b                       ; 004d2ad1
        ;   XREF to: 004d1c4b (CONDITIONAL_JUMP)  ; LAB_004d1c4b
    JMP 0x004d1c55                      ; 004d2ad7
        ;   XREF to: 004d1c55 (UNCONDITIONAL_JUMP)  ; LAB_004d1c55
    TEST EDI,EDI                        ; 004d2adc
        ;   Label: LAB_004d2adc
    JNZ 0x004d1cd1                      ; 004d2ade
        ;   XREF to: 004d1cd1 (CONDITIONAL_JUMP)  ; LAB_004d1cd1
    FLD float ptr [EBP + 0x18]          ; 004d2ae4
    FDIV float ptr [ESP + 0x23c]        ; 004d2ae7
    FSUBR float ptr [EBX + 0x24724]     ; 004d2aee
    JMP 0x004d1ce1                      ; 004d2af4
        ;   XREF to: 004d1ce1 (UNCONDITIONAL_JUMP)  ; LAB_004d1ce1
    FLD1                                ; 004d2af9
        ;   Label: LAB_004d2af9
    FCOMP double ptr [ESP + 0x8]        ; 004d2afb
    FNSTSW AX                           ; 004d2aff
    SAHF                                ; 004d2b01
    JNC 0x004d2b0e                      ; 004d2b02
        ;   XREF to: 004d2b0e (CONDITIONAL_JUMP)  ; LAB_004d2b0e
    MOV dword ptr [EBX + 0x24724],0x3f800000 ; 004d2b04
    FLD float ptr [EBX + 0x24720]       ; 004d2b0e
        ;   Label: LAB_004d2b0e
    FMUL double ptr [0x005da38e]        ; 004d2b14 | DAT_005da38e
    SUB ESP,0x4                         ; 004d2b1a
    FADD double ptr [0x005da396]        ; 004d2b1d | DAT_005da396
    MOV EAX,[0x01cedfcc]                ; 004d2b23 | DAT_01cedfcc
    FSTP float ptr [ESP]                ; 004d2b28
    PUSH EAX                            ; 004d2b2b
    LEA ESI,[EBX + 0x2b4]               ; 004d2b2c
    PUSH ESI                            ; 004d2b32
    CALL FUN_00503f50                   ; 004d2b33
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00503f50()
    MOV dword ptr [ESP + 0x28c],EAX     ; 004d2b38
    FLD float ptr [ESP + 0x28c]         ; 004d2b3f
    ADD ESP,0xc                         ; 004d2b46
    PUSH 0x544cc0                       ; 004d2b49 | LAB_00544cc0
    MOV EDX,dword ptr [EBX + 0x2470c]   ; 004d2b4e
    PUSH EDX                            ; 004d2b54
    MOV ECX,dword ptr [0x01cedfcc]      ; 004d2b55 | DAT_01cedfcc
    PUSH dword ptr [EBX + 0x24724]      ; 004d2b5b
    FSTP float ptr [ESP + 0x238]        ; 004d2b61
    PUSH dword ptr [ESP + 0x238]        ; 004d2b68
    PUSH ECX                            ; 004d2b6f
    PUSH ESI                            ; 004d2b70
    CALL FUN_00545a60                   ; 004d2b71
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00545a60()
    ADD ESP,0x18                        ; 004d2b76
    PUSH 0x544cc0                       ; 004d2b79 | LAB_00544cc0
    MOV EDI,dword ptr [EBX + 0x24710]   ; 004d2b7e
    PUSH EDI                            ; 004d2b84
    PUSH dword ptr [EBX + 0x24724]      ; 004d2b85
    MOV EAX,[0x01cedfcc]                ; 004d2b8b | DAT_01cedfcc
    PUSH dword ptr [ESP + 0x238]        ; 004d2b90
    PUSH EAX                            ; 004d2b97
    PUSH ESI                            ; 004d2b98
    CALL FUN_00545a60                   ; 004d2b99
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00545a60()
    FLD float ptr [EBX + 0x24724]       ; 004d2b9e
    FLD1                                ; 004d2ba4
    ADD ESP,0x18                        ; 004d2ba6
    FCOMPP                              ; 004d2ba9
    FNSTSW AX                           ; 004d2bab
    SAHF                                ; 004d2bad
    JA 0x004d1d14                       ; 004d2bae
        ;   XREF to: 004d1d14 (CONDITIONAL_JUMP)  ; LAB_004d1d14
    FLD float ptr [EBX + 0x24720]       ; 004d2bb4
    FLDZ                                ; 004d2bba
    FCOMPP                              ; 004d2bbc
    FNSTSW AX                           ; 004d2bbe
    SAHF                                ; 004d2bc0
    JNC 0x004d1d14                      ; 004d2bc1
        ;   XREF to: 004d1d14 (CONDITIONAL_JUMP)  ; LAB_004d1d14
    FLD float ptr [EBP + 0x18]          ; 004d2bc7
    FDIV float ptr [ESP + 0x230]        ; 004d2bca
    FADD float ptr [EBX + 0x24720]      ; 004d2bd1
    FST float ptr [EBX + 0x24720]       ; 004d2bd7
    FLD1                                ; 004d2bdd
    FCOMPP                              ; 004d2bdf
    FNSTSW AX                           ; 004d2be1
    SAHF                                ; 004d2be3
    JNC 0x004d1d14                      ; 004d2be4
        ;   XREF to: 004d1d14 (CONDITIONAL_JUMP)  ; LAB_004d1d14
    MOV dword ptr [EBX + 0x24720],0x3f800000 ; 004d2bea
    JMP 0x004d1d14                      ; 004d2bf4
        ;   XREF to: 004d1d14 (UNCONDITIONAL_JUMP)  ; LAB_004d1d14
    MOV EAX,[0x02661f38]                ; 004d2bf9 | DAT_02661f38
        ;   Label: LAB_004d2bf9
    PUSH EAX                            ; 004d2bfe
    MOV EDX,dword ptr [EBX + 0x2698]    ; 004d2bff
    PUSH EDX                            ; 004d2c05
    CALL FUN_0040c8f0                   ; 004d2c06
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d2c0b
    TEST EAX,EAX                        ; 004d2c0e
    JZ 0x004d1db9                       ; 004d2c10
        ;   XREF to: 004d1db9 (CONDITIONAL_JUMP)  ; LAB_004d1db9
    PUSH 0x5da32b                       ; 004d2c16 | = "deputeFireShotgun"
    MOV ECX,dword ptr [0x006141f0]      ; 004d2c1b | DAT_006141f0
    PUSH ECX                            ; 004d2c21
    CALL FUN_0048e340                   ; 004d2c22
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004d2c27
    TEST EAX,EAX                        ; 004d2c2a
    JZ 0x004d1db9                       ; 004d2c2c
        ;   XREF to: 004d1db9 (CONDITIONAL_JUMP)  ; LAB_004d1db9
    MOV dword ptr [EBX + 0x24720],0x3c23d70a ; 004d2c32
    MOV ESP,EBP                         ; 004d2c3c
    POP EBP                             ; 004d2c3e
    POP EDI                             ; 004d2c3f
    POP ESI                             ; 004d2c40
    POP EBX                             ; 004d2c41
    RET                                 ; 004d2c42

