; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f1830(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
; XREF[2]:
;   engine_mini3d.cpp_FUN_004f0f20 at 004f0ffc
;   engine_mini3d.cpp_FUN_004f12b0 at 004f1310
;
; Referenced Globals:
;   undefined4 DAT_005c822d
;   undefined4 DAT_005c8231
;   undefined4 DAT_005c8235
;   undefined4 DAT_005c8239
;   undefined4 DAT_005c823d
;   undefined4 DAT_005c8245
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d76c38
;   undefined4 DAT_01d76cf8
;   undefined4 DAT_01d80844
;   undefined4 DAT_01d80848
;   undefined4 DAT_01d8084c
;   ... and 12 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f13a0
;   engine_mini3d.cpp_FUN_004f1810
;   engine_special.cpp_drawPolygon_FUN_00565c10
;   engine_special.cpp_FUN_00561fdc
;   engine_special.cpp_FUN_005625a3
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1830
        ;   Label: engine_mini3d.cpp_FUN_004f1830
    PUSH ESI                            ; 004f1831
    PUSH EDI                            ; 004f1832
    PUSH EBP                            ; 004f1833
    SUB ESP,0xb0                        ; 004f1834
    MOV ESI,dword ptr [ESP + 0xc4]      ; 004f183a
    MOV EBX,dword ptr [ESP + 0xc8]      ; 004f1841
    MOV EBP,dword ptr [ESP + 0xcc]      ; 004f1848
    FLD float ptr [EBP + 0x14]          ; 004f184f
    FLD float ptr [EBX + 0x18]          ; 004f1852
    FSUB float ptr [ESI + 0x18]         ; 004f1855
    FXCH                                ; 004f1858
    FSUB float ptr [EBX + 0x14]         ; 004f185a
    FXCH                                ; 004f185d
    FSTP float ptr [ESP + 0x98]         ; 004f185f
    FSTP float ptr [ESP + 0x94]         ; 004f1866
    FLD float ptr [ESP + 0x98]          ; 004f186d
    FMUL float ptr [ESP + 0x94]         ; 004f1874
    FLD float ptr [EBP + 0x18]          ; 004f187b
    FLD float ptr [EBX + 0x14]          ; 004f187e
    FSUB float ptr [ESI + 0x14]         ; 004f1881
    FXCH                                ; 004f1884
    FSUB float ptr [EBX + 0x18]         ; 004f1886
    FXCH                                ; 004f1889
    FSTP float ptr [ESP + 0x90]         ; 004f188b
    FSTP float ptr [ESP + 0x9c]         ; 004f1892
    FLD float ptr [ESP + 0x90]          ; 004f1899
    FMUL float ptr [ESP + 0x9c]         ; 004f18a0
    MOV EDX,dword ptr [0x01d76cf8]      ; 004f18a7 | DAT_01d76cf8
    FXCH                                ; 004f18ad
    FSTP float ptr [ESP + 0xa0]         ; 004f18af
    FSTP float ptr [ESP + 0xa4]         ; 004f18b6
    TEST EDX,EDX                        ; 004f18bd
    JNZ 0x004f1b67                      ; 004f18bf
        ;   XREF to: 004f1b67 (CONDITIONAL_JUMP)  ; LAB_004f1b67
    FLD float ptr [ESP + 0xa4]          ; 004f18c5
    FCOMP float ptr [ESP + 0xa0]        ; 004f18cc
    FNSTSW AX                           ; 004f18d3
    SAHF                                ; 004f18d5
    JBE 0x004f1b7e                      ; 004f18d6
        ;   XREF to: 004f1b7e (CONDITIONAL_JUMP)  ; LAB_004f1b7e
    MOV ECX,dword ptr [0x01c6cee8]      ; 004f18dc | DAT_01c6cee8
        ;   Label: LAB_004f18dc
    TEST ECX,ECX                        ; 004f18e2
    JNZ 0x004f1b89                      ; 004f18e4
        ;   XREF to: 004f1b89 (CONDITIONAL_JUMP)  ; LAB_004f1b89
    PUSH EBX                            ; 004f18ea
    MOV EDI,0x4b0                       ; 004f18eb
    MOV dword ptr [0x01d80d4c],ECX      ; 004f18f0 | DAT_01d80d4c
    PUSH ESI                            ; 004f18f6
    MOV dword ptr [0x01d80844],ECX      ; 004f18f7 | DAT_01d80844
    MOV dword ptr [0x01d80d48],EDI      ; 004f18fd | DAT_01d80d48
    CALL engine_mini3d.cpp_FUN_004f13a0 ; 004f1903
        ;   XREF to: 004f13a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f13a0()
    ADD ESP,0x8                         ; 004f1908
    PUSH EBP                            ; 004f190b
    PUSH EBX                            ; 004f190c
    CALL engine_mini3d.cpp_FUN_004f13a0 ; 004f190d
        ;   XREF to: 004f13a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f13a0()
    ADD ESP,0x8                         ; 004f1912
    PUSH ESI                            ; 004f1915
    PUSH EBP                            ; 004f1916
    CALL engine_mini3d.cpp_FUN_004f13a0 ; 004f1917
        ;   XREF to: 004f13a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f13a0()
    MOV EAX,0x1d80848                   ; 004f191c | DAT_01d80848
    MOV ECX,dword ptr [0x01d80d48]      ; 004f1921 | DAT_01d80d48
    MOV EBX,dword ptr [0x01d80844]      ; 004f1927 | DAT_01d80844
    ADD ESP,0x8                         ; 004f192d
    XOR EDX,EDX                         ; 004f1930
    TEST EBX,EBX                        ; 004f1932
    JLE 0x004f1feb                      ; 004f1934
        ;   XREF to: 004f1feb (CONDITIONAL_JUMP)  ; LAB_004f1feb
    MOV EDI,dword ptr [0x01d80844]      ; 004f193a | DAT_01d80844
    CMP ECX,dword ptr [EAX]             ; 004f1940 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f1940
    JNZ 0x004f1fdf                      ; 004f1942
        ;   XREF to: 004f1fdf (CONDITIONAL_JUMP)  ; LAB_004f1fdf
    TEST EAX,EAX                        ; 004f1948
    JZ 0x004f1fdf                       ; 004f194a
        ;   XREF to: 004f1fdf (CONDITIONAL_JUMP)  ; LAB_004f1fdf
    MOV dword ptr [ESP + 0xac],EAX      ; 004f1950 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f1950
    TEST EAX,EAX                        ; 004f1957
    JZ 0x004f1b7e                       ; 004f1959
        ;   XREF to: 004f1b7e (CONDITIONAL_JUMP)  ; LAB_004f1b7e
    MOV ESI,dword ptr [0x01d80844]      ; 004f195f | DAT_01d80844
    MOV ECX,dword ptr [0x01d80d48]      ; 004f1965 | DAT_01d80d48
    MOV EBX,EAX                         ; 004f196b
    XOR EDX,EDX                         ; 004f196d
    MOV EAX,0x1d80848                   ; 004f196f
    TEST ESI,ESI                        ; 004f1974
    JLE 0x004f1ffe                      ; 004f1976
        ;   XREF to: 004f1ffe (CONDITIONAL_JUMP)  ; LAB_004f1ffe
    MOV EDI,dword ptr [0x01d80844]      ; 004f197c | DAT_01d80844
    CMP ECX,dword ptr [EAX]             ; 004f1982 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f1982
    JNZ 0x004f1ff2                      ; 004f1984
        ;   XREF to: 004f1ff2 (CONDITIONAL_JUMP)  ; LAB_004f1ff2
    CMP EAX,EBX                         ; 004f198a
    JZ 0x004f1ff2                       ; 004f198c
        ;   XREF to: 004f1ff2 (CONDITIONAL_JUMP)  ; LAB_004f1ff2
    MOV EBP,EAX                         ; 004f1992
        ;   Label: LAB_004f1992
    TEST EAX,EAX                        ; 004f1994
    JZ 0x004f1b7e                       ; 004f1996
        ;   XREF to: 004f1b7e (CONDITIONAL_JUMP)  ; LAB_004f1b7e
    MOV EAX,[0x01d80d48]                ; 004f199c | DAT_01d80d48
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f19a1
    MOV EDX,dword ptr [ESP + 0xac]      ; 004f19a8
        ;   Label: LAB_004f19a8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004f19af
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f19b6 | DAT_01d8084c
    JL 0x004f19ff                       ; 004f19b9
        ;   XREF to: 004f19ff (CONDITIONAL_JUMP)  ; LAB_004f19ff
    MOV ESI,dword ptr [0x01d80844]      ; 004f19bb | DAT_01d80844
    MOV EBX,EAX                         ; 004f19c1
    MOV ECX,EBP                         ; 004f19c3
    MOV dword ptr [EDX],0xffffffff      ; 004f19c5 | DAT_01d80848
    MOV EAX,0x1d80848                   ; 004f19cb
    XOR EDX,EDX                         ; 004f19d0
    TEST ESI,ESI                        ; 004f19d2
    JLE 0x004f2011                      ; 004f19d4
        ;   XREF to: 004f2011 (CONDITIONAL_JUMP)  ; LAB_004f2011
    MOV EDI,dword ptr [0x01d80844]      ; 004f19da | DAT_01d80844
    CMP EBX,dword ptr [EAX]             ; 004f19e0 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f19e0
    JNZ 0x004f2005                      ; 004f19e2
        ;   XREF to: 004f2005 (CONDITIONAL_JUMP)  ; LAB_004f2005
    CMP EAX,ECX                         ; 004f19e8
    JZ 0x004f2005                       ; 004f19ea
        ;   XREF to: 004f2005 (CONDITIONAL_JUMP)  ; LAB_004f2005
    MOV dword ptr [ESP + 0xac],EAX      ; 004f19f0 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f19f0
    TEST EAX,EAX                        ; 004f19f7
    JZ 0x004f1b7e                       ; 004f19f9
        ;   XREF to: 004f1b7e (CONDITIONAL_JUMP)  ; LAB_004f1b7e
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004f19ff
        ;   Label: LAB_004f19ff
    CMP EAX,dword ptr [EBP + 0x4]       ; 004f1a06
    JL 0x004f1a50                       ; 004f1a09
        ;   XREF to: 004f1a50 (CONDITIONAL_JUMP)  ; LAB_004f1a50
    MOV EBX,dword ptr [ESP + 0xac]      ; 004f1a0b
    MOV ECX,EAX                         ; 004f1a12
    MOV dword ptr [EBP],0xffffffff      ; 004f1a14
    XOR EDX,EDX                         ; 004f1a1b
    MOV EBP,dword ptr [0x01d80844]      ; 004f1a1d | DAT_01d80844
    MOV EAX,0x1d80848                   ; 004f1a23
    TEST EBP,EBP                        ; 004f1a28
    JLE 0x004f2024                      ; 004f1a2a
        ;   XREF to: 004f2024 (CONDITIONAL_JUMP)  ; LAB_004f2024
    MOV ESI,dword ptr [0x01d80844]      ; 004f1a30 | DAT_01d80844
    CMP ECX,dword ptr [EAX]             ; 004f1a36 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f1a36
    JNZ 0x004f2018                      ; 004f1a38
        ;   XREF to: 004f2018 (CONDITIONAL_JUMP)  ; LAB_004f2018
    CMP EAX,EBX                         ; 004f1a3e
    JZ 0x004f2018                       ; 004f1a40
        ;   XREF to: 004f2018 (CONDITIONAL_JUMP)  ; LAB_004f2018
    MOV EBP,EAX                         ; 004f1a46
        ;   Label: LAB_004f1a46
    TEST EAX,EAX                        ; 004f1a48
    JZ 0x004f1b7e                       ; 004f1a4a
        ;   XREF to: 004f1b7e (CONDITIONAL_JUMP)  ; LAB_004f1b7e
    CMP dword ptr [0x01c6e2a0],0x0      ; 004f1a50 | DAT_01c6e2a0
        ;   Label: LAB_004f1a50
    JZ 0x004f2045                       ; 004f1a57
        ;   XREF to: 004f2045 (CONDITIONAL_JUMP)  ; LAB_004f2045
    CMP dword ptr [0x005fba20],0x20     ; 004f1a5d | DAT_005fba20
    JNZ 0x004f202b                      ; 004f1a64
        ;   XREF to: 004f202b (CONDITIONAL_JUMP)  ; LAB_004f202b
    MOV ESI,dword ptr [ESP + 0xac]      ; 004f1a6a
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f1a71
    MOV EDI,EBP                         ; 004f1a78
    CALL engine_special.cpp_FUN_00561fdc ; 004f1a7a
        ;   XREF to: 00561fdc (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00561fdc()
    MOV EDX,dword ptr [ESP + 0xac]      ; 004f1a7f
        ;   Label: LAB_004f1a7f
    MOV EAX,dword ptr [ESP + 0xac]      ; 004f1a86
    MOV EBX,dword ptr [EDX + 0x8]       ; 004f1a8d | DAT_01d80850
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f1a90 | DAT_01d80854
    ADD EBX,EAX                         ; 004f1a93
    MOV dword ptr [EDX + 0x8],EBX       ; 004f1a95 | DAT_01d80850
    MOV ESI,dword ptr [EDX + 0x18]      ; 004f1a98 | DAT_01d80860
    MOV EDI,dword ptr [EDX + 0x20]      ; 004f1a9b | DAT_01d80868
    MOV ECX,dword ptr [EDX + 0x28]      ; 004f1a9e | DAT_01d80870
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f1aa1 | DAT_01d80864
    MOV EBX,dword ptr [EDX + 0x10]      ; 004f1aa4 | DAT_01d80858
    ADD ESI,EAX                         ; 004f1aa7
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f1aa9 | DAT_01d8086c
    MOV dword ptr [EDX + 0x18],ESI      ; 004f1aac | DAT_01d80860
    ADD EDI,EAX                         ; 004f1aaf
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f1ab1 | DAT_01d80874
    MOV dword ptr [EDX + 0x20],EDI      ; 004f1ab4 | DAT_01d80868
    ADD ECX,EAX                         ; 004f1ab7
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f1ab9
    MOV dword ptr [EDX + 0x28],ECX      ; 004f1abc
    ADD EBX,EAX                         ; 004f1abf
    MOV dword ptr [EDX + 0x10],EBX      ; 004f1ac1
    MOV ESI,dword ptr [EDX + 0x38]      ; 004f1ac4
    MOV EDI,dword ptr [EDX + 0x40]      ; 004f1ac7
    MOV ECX,dword ptr [EDX + 0x48]      ; 004f1aca
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f1acd
    MOV EBX,dword ptr [EDX + 0x30]      ; 004f1ad0
    ADD ESI,EAX                         ; 004f1ad3
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f1ad5
    MOV dword ptr [EDX + 0x38],ESI      ; 004f1ad8
    ADD EDI,EAX                         ; 004f1adb
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f1add
    MOV dword ptr [EDX + 0x40],EDI      ; 004f1ae0
    ADD ECX,EAX                         ; 004f1ae3
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f1ae5
    MOV dword ptr [EDX + 0x48],ECX      ; 004f1ae8
    ADD EBX,EAX                         ; 004f1aeb
    MOV dword ptr [EDX + 0x30],EBX      ; 004f1aed
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f1af0
    MOV ESI,dword ptr [EBP + 0x8]       ; 004f1af3
    MOV EDI,dword ptr [EBP + 0x18]      ; 004f1af6
    MOV EDX,dword ptr [EBP + 0x20]      ; 004f1af9
    MOV ECX,dword ptr [EBP + 0x28]      ; 004f1afc
    ADD ESI,EAX                         ; 004f1aff
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f1b01
    MOV dword ptr [EBP + 0x8],ESI       ; 004f1b04
    ADD EDI,EAX                         ; 004f1b07
    MOV EAX,dword ptr [EBP + 0x24]      ; 004f1b09
    MOV dword ptr [EBP + 0x18],EDI      ; 004f1b0c
    ADD EDX,EAX                         ; 004f1b0f
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004f1b11
    MOV dword ptr [EBP + 0x20],EDX      ; 004f1b14
    ADD ECX,EAX                         ; 004f1b17
    MOV dword ptr [EBP + 0x28],ECX      ; 004f1b19
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f1b1c
    MOV ESI,dword ptr [EBP + 0x38]      ; 004f1b1f
    MOV EDI,dword ptr [EBP + 0x40]      ; 004f1b22
    MOV EDX,dword ptr [EBP + 0x48]      ; 004f1b25
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f1b28
    MOV ECX,dword ptr [EBP + 0x30]      ; 004f1b2b
    ADD EBX,EAX                         ; 004f1b2e
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004f1b30
    MOV dword ptr [EBP + 0x10],EBX      ; 004f1b33
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f1b36
    ADD ESI,EAX                         ; 004f1b3d
    INC EBX                             ; 004f1b3f
    MOV EAX,dword ptr [EBP + 0x44]      ; 004f1b40
    MOV dword ptr [EBP + 0x38],ESI      ; 004f1b43
    ADD EDI,EAX                         ; 004f1b46
    MOV EAX,dword ptr [EBP + 0x4c]      ; 004f1b48
    MOV dword ptr [EBP + 0x40],EDI      ; 004f1b4b
    ADD EDX,EAX                         ; 004f1b4e
    MOV EAX,dword ptr [EBP + 0x34]      ; 004f1b50
    MOV dword ptr [EBP + 0x48],EDX      ; 004f1b53
    ADD ECX,EAX                         ; 004f1b56
    MOV dword ptr [ESP + 0xa8],EBX      ; 004f1b58
    MOV dword ptr [EBP + 0x30],ECX      ; 004f1b5f
    JMP 0x004f19a8                      ; 004f1b62
        ;   XREF to: 004f19a8 (UNCONDITIONAL_JUMP)  ; LAB_004f19a8
    FLD float ptr [ESP + 0xa4]          ; 004f1b67
        ;   Label: LAB_004f1b67
    FCOMP float ptr [ESP + 0xa0]        ; 004f1b6e
    FNSTSW AX                           ; 004f1b75
    SAHF                                ; 004f1b77
    JC 0x004f18dc                       ; 004f1b78
        ;   XREF to: 004f18dc (CONDITIONAL_JUMP)  ; LAB_004f18dc
    ADD ESP,0xb0                        ; 004f1b7e
        ;   Label: LAB_004f1b7e
    POP EBP                             ; 004f1b84
    POP EDI                             ; 004f1b85
    POP ESI                             ; 004f1b86
    POP EBX                             ; 004f1b87
    RET                                 ; 004f1b88
    FLD float ptr [ESI]                 ; 004f1b89
        ;   Label: LAB_004f1b89
    FMUL float ptr [0x005c822d]         ; 004f1b8b | DAT_005c822d
    SUB ESP,0x4                         ; 004f1b91
    FSTP float ptr [ESP]                ; 004f1b94
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1b97
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1b9c
    MOV dword ptr [ESP],EAX             ; 004f1b9f
    FLD float ptr [ESI + 0x4]           ; 004f1ba2
    FMUL float ptr [0x005c822d]         ; 004f1ba5 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1bab
    FSTP float ptr [ESP]                ; 004f1bae
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1bb1
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1bb6
    MOV dword ptr [ESP + 0x4],EAX       ; 004f1bb9
    FLD float ptr [ESI + 0x8]           ; 004f1bbd
    FMUL float ptr [0x005c822d]         ; 004f1bc0 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1bc6
    FSTP float ptr [ESP]                ; 004f1bc9
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1bcc
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1bd1
    MOV dword ptr [ESP + 0x8],EAX       ; 004f1bd4
    FLD float ptr [ESI + 0xc]           ; 004f1bd8
    FMUL float ptr [0x005c8231]         ; 004f1bdb | DAT_005c8231
    SUB ESP,0x4                         ; 004f1be1
    FSTP float ptr [ESP]                ; 004f1be4
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1be7
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1bec
    MOV dword ptr [ESP + 0xc],EAX       ; 004f1bef
    FLD float ptr [ESI + 0x14]          ; 004f1bf3
    FMUL float ptr [0x005c8235]         ; 004f1bf6 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1bfc
    FSTP float ptr [ESP]                ; 004f1bff
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c02
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c07
    MOV dword ptr [ESP + 0x10],EAX      ; 004f1c0a
    FLD float ptr [ESI + 0x18]          ; 004f1c0e
    FMUL float ptr [0x005c8235]         ; 004f1c11 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1c17
    FSTP float ptr [ESP]                ; 004f1c1a
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c1d
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c22
    MOV dword ptr [ESP + 0x14],EAX      ; 004f1c25
    FLD float ptr [ESI + 0x1c]          ; 004f1c29
    FMUL float ptr [0x005c822d]         ; 004f1c2c | DAT_005c822d
    FMUL float ptr [0x005c8235]         ; 004f1c32 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1c38
    FSTP float ptr [ESP]                ; 004f1c3b
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c3e
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c43
    MOV dword ptr [ESP + 0x18],EAX      ; 004f1c46
    FLD float ptr [ESI + 0x20]          ; 004f1c4a
    FMUL float ptr [0x005c822d]         ; 004f1c4d | DAT_005c822d
    FMUL float ptr [0x005c8235]         ; 004f1c53 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1c59
    FSTP float ptr [ESP]                ; 004f1c5c
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c5f
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c64
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f1c67
    FLD float ptr [ESI + 0x2c]          ; 004f1c6b
    FMUL float ptr [0x005c8239]         ; 004f1c6e | DAT_005c8239
    SUB ESP,0x4                         ; 004f1c74
    FSTP float ptr [ESP]                ; 004f1c77
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c7a
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c7f
    MOV dword ptr [ESP + 0x20],EAX      ; 004f1c82
    FLD float ptr [ESI + 0x28]          ; 004f1c86
    FMUL float ptr [0x005c8239]         ; 004f1c89 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1c8f
    FSTP float ptr [ESP]                ; 004f1c92
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1c95
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1c9a
    MOV dword ptr [ESP + 0x24],EAX      ; 004f1c9d
    FLD float ptr [ESI + 0x24]          ; 004f1ca1
    FMUL float ptr [0x005c8239]         ; 004f1ca4 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1caa
    FSTP float ptr [ESP]                ; 004f1cad
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1cb0
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1cb5
    MOV dword ptr [ESP + 0x28],EAX      ; 004f1cb8
    TEST byte ptr [0x01d76c38],0x8      ; 004f1cbc | DAT_01d76c38
    JZ 0x004f1fca                       ; 004f1cc3
        ;   XREF to: 004f1fca (CONDITIONAL_JUMP)  ; LAB_004f1fca
    FLD float ptr [ESI + 0x34]          ; 004f1cc9
    FMUL float ptr [0x005c8239]         ; 004f1ccc | DAT_005c8239
        ;   Label: LAB_004f1ccc
    SUB ESP,0x4                         ; 004f1cd2
    FSTP float ptr [ESP]                ; 004f1cd5
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1cd8
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1cdd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f1ce0
    FLD float ptr [EBX]                 ; 004f1ce4
    FMUL float ptr [0x005c822d]         ; 004f1ce6 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1cec
    FSTP float ptr [ESP]                ; 004f1cef
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1cf2
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1cf7
    MOV dword ptr [ESP + 0x30],EAX      ; 004f1cfa
    FLD float ptr [EBX + 0x4]           ; 004f1cfe
    FMUL float ptr [0x005c822d]         ; 004f1d01 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1d07
    FSTP float ptr [ESP]                ; 004f1d0a
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d0d
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d12
    MOV dword ptr [ESP + 0x34],EAX      ; 004f1d15
    FLD float ptr [EBX + 0x8]           ; 004f1d19
    FMUL float ptr [0x005c822d]         ; 004f1d1c | DAT_005c822d
    SUB ESP,0x4                         ; 004f1d22
    FSTP float ptr [ESP]                ; 004f1d25
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d28
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d2d
    MOV dword ptr [ESP + 0x38],EAX      ; 004f1d30
    FLD float ptr [EBX + 0xc]           ; 004f1d34
    FMUL float ptr [0x005c8231]         ; 004f1d37 | DAT_005c8231
    SUB ESP,0x4                         ; 004f1d3d
    FSTP float ptr [ESP]                ; 004f1d40
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d43
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d48
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f1d4b
    FLD float ptr [EBX + 0x14]          ; 004f1d4f
    FMUL float ptr [0x005c8235]         ; 004f1d52 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1d58
    FSTP float ptr [ESP]                ; 004f1d5b
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d5e
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d63
    MOV dword ptr [ESP + 0x40],EAX      ; 004f1d66
    FLD float ptr [EBX + 0x18]          ; 004f1d6a
    FMUL float ptr [0x005c8235]         ; 004f1d6d | DAT_005c8235
    SUB ESP,0x4                         ; 004f1d73
    FSTP float ptr [ESP]                ; 004f1d76
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d79
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d7e
    MOV dword ptr [ESP + 0x44],EAX      ; 004f1d81
    FLD float ptr [EBX + 0x1c]          ; 004f1d85
    FMUL float ptr [0x005c822d]         ; 004f1d88 | DAT_005c822d
    FMUL float ptr [0x005c8235]         ; 004f1d8e | DAT_005c8235
    SUB ESP,0x4                         ; 004f1d94
    FSTP float ptr [ESP]                ; 004f1d97
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1d9a
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1d9f
    MOV dword ptr [ESP + 0x48],EAX      ; 004f1da2
    FLD float ptr [EBX + 0x20]          ; 004f1da6
    FMUL float ptr [0x005c822d]         ; 004f1da9 | DAT_005c822d
    FMUL float ptr [0x005c8235]         ; 004f1daf | DAT_005c8235
    SUB ESP,0x4                         ; 004f1db5
    FSTP float ptr [ESP]                ; 004f1db8
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1dbb
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1dc0
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f1dc3
    FLD float ptr [EBX + 0x2c]          ; 004f1dc7
    FMUL float ptr [0x005c8239]         ; 004f1dca | DAT_005c8239
    SUB ESP,0x4                         ; 004f1dd0
    FSTP float ptr [ESP]                ; 004f1dd3
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1dd6
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1ddb
    MOV dword ptr [ESP + 0x50],EAX      ; 004f1dde
    FLD float ptr [EBX + 0x28]          ; 004f1de2
    FMUL float ptr [0x005c8239]         ; 004f1de5 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1deb
    FSTP float ptr [ESP]                ; 004f1dee
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1df1
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1df6
    MOV dword ptr [ESP + 0x54],EAX      ; 004f1df9
    FLD float ptr [EBX + 0x24]          ; 004f1dfd
    FMUL float ptr [0x005c8239]         ; 004f1e00 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1e06
    FSTP float ptr [ESP]                ; 004f1e09
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1e0c
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1e11
    MOV DL,byte ptr [0x01d76c38]        ; 004f1e14 | DAT_01d76c38
    MOV dword ptr [ESP + 0x58],EAX      ; 004f1e1a
    TEST DL,0x8                         ; 004f1e1e
    JZ 0x004f1fd2                       ; 004f1e21
        ;   XREF to: 004f1fd2 (CONDITIONAL_JUMP)  ; LAB_004f1fd2
    FLD float ptr [EBX + 0x34]          ; 004f1e27
    FMUL float ptr [0x005c8239]         ; 004f1e2a | DAT_005c8239
        ;   Label: LAB_004f1e2a
    SUB ESP,0x4                         ; 004f1e30
    FSTP float ptr [ESP]                ; 004f1e33
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1e36
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1e3b
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1e3e
    FLD float ptr [EBP]                 ; 004f1e42
    FMUL float ptr [0x005c822d]         ; 004f1e45 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1e4b
    FSTP float ptr [ESP]                ; 004f1e4e
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1e51
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1e56
    MOV dword ptr [ESP + 0x60],EAX      ; 004f1e59
    FLD float ptr [EBP + 0x4]           ; 004f1e5d
    FMUL float ptr [0x005c822d]         ; 004f1e60 | DAT_005c822d
    SUB ESP,0x4                         ; 004f1e66
    FSTP float ptr [ESP]                ; 004f1e69
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1e6c
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1e71
    MOV dword ptr [ESP + 0x64],EAX      ; 004f1e74
    FLD float ptr [EBP + 0x8]           ; 004f1e78
    FMUL float ptr [0x005c822d]         ; 004f1e7b | DAT_005c822d
    SUB ESP,0x4                         ; 004f1e81
    FSTP float ptr [ESP]                ; 004f1e84
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1e87
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1e8c
    MOV dword ptr [ESP + 0x68],EAX      ; 004f1e8f
    FLD float ptr [EBP + 0xc]           ; 004f1e93
    FMUL float ptr [0x005c8231]         ; 004f1e96 | DAT_005c8231
    SUB ESP,0x4                         ; 004f1e9c
    FSTP float ptr [ESP]                ; 004f1e9f
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1ea2
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1ea7
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f1eaa
    FLD float ptr [EBP + 0x14]          ; 004f1eae
    FMUL float ptr [0x005c8235]         ; 004f1eb1 | DAT_005c8235
    SUB ESP,0x4                         ; 004f1eb7
    FSTP float ptr [ESP]                ; 004f1eba
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1ebd
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1ec2
    MOV dword ptr [ESP + 0x70],EAX      ; 004f1ec5
    FLD float ptr [EBP + 0x18]          ; 004f1ec9
    FMUL float ptr [0x005c8235]         ; 004f1ecc | DAT_005c8235
    SUB ESP,0x4                         ; 004f1ed2
    FSTP float ptr [ESP]                ; 004f1ed5
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1ed8
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1edd
    MOV dword ptr [ESP + 0x74],EAX      ; 004f1ee0
    FLD float ptr [EBP + 0x1c]          ; 004f1ee4
    FMUL double ptr [0x005c823d]        ; 004f1ee7 | DAT_005c823d
    FMUL double ptr [0x005c8245]        ; 004f1eed | DAT_005c8245
    SUB ESP,0x4                         ; 004f1ef3
    FSTP float ptr [ESP]                ; 004f1ef6
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1ef9
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1efe
    MOV dword ptr [ESP + 0x78],EAX      ; 004f1f01
    FLD float ptr [EBP + 0x20]          ; 004f1f05
    FMUL double ptr [0x005c823d]        ; 004f1f08 | DAT_005c823d
    FMUL double ptr [0x005c8245]        ; 004f1f0e | DAT_005c8245
    SUB ESP,0x4                         ; 004f1f14
    FSTP float ptr [ESP]                ; 004f1f17
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1f1a
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1f1f
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f1f22
    FLD float ptr [EBP + 0x2c]          ; 004f1f26
    FMUL float ptr [0x005c8239]         ; 004f1f29 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1f2f
    FSTP float ptr [ESP]                ; 004f1f32
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1f35
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1f3a
    MOV dword ptr [ESP + 0x80],EAX      ; 004f1f3d
    FLD float ptr [EBP + 0x28]          ; 004f1f44
    FMUL float ptr [0x005c8239]         ; 004f1f47 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1f4d
    FSTP float ptr [ESP]                ; 004f1f50
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1f53
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1f58
    MOV dword ptr [ESP + 0x84],EAX      ; 004f1f5b
    FLD float ptr [EBP + 0x24]          ; 004f1f62
    FMUL float ptr [0x005c8239]         ; 004f1f65 | DAT_005c8239
    SUB ESP,0x4                         ; 004f1f6b
    FSTP float ptr [ESP]                ; 004f1f6e
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1f71
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1f76
    MOV DH,byte ptr [0x01d76c38]        ; 004f1f79 | DAT_01d76c38
    MOV dword ptr [ESP + 0x88],EAX      ; 004f1f7f
    TEST DH,0x8                         ; 004f1f86
    JZ 0x004f1fda                       ; 004f1f89
        ;   XREF to: 004f1fda (CONDITIONAL_JUMP)  ; LAB_004f1fda
    FLD float ptr [EBP + 0x34]          ; 004f1f8b
    FMUL float ptr [0x005c8239]         ; 004f1f8e | DAT_005c8239
        ;   Label: LAB_004f1f8e
    SUB ESP,0x4                         ; 004f1f94
    FSTP float ptr [ESP]                ; 004f1f97
    CALL engine_mini3d.cpp_FUN_004f1810 ; 004f1f9a
        ;   XREF to: 004f1810 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1810()
    ADD ESP,0x4                         ; 004f1f9f
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f1fa2
    MOV ESI,dword ptr [0x01c6e2b4]      ; 004f1fa9 | DAT_01c6e2b4
    PUSH ESI                            ; 004f1faf
    PUSH 0x3                            ; 004f1fb0
    LEA EAX,[ESP + 0x8]                 ; 004f1fb2
    PUSH EAX                            ; 004f1fb6
    CALL engine_special.cpp_drawPolygon_FUN_00565c10 ; 004f1fb7
        ;   XREF to: 00565c10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00565c10(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004f1fbc
    ADD ESP,0xb0                        ; 004f1fbf
    POP EBP                             ; 004f1fc5
    POP EDI                             ; 004f1fc6
    POP ESI                             ; 004f1fc7
    POP EBX                             ; 004f1fc8
    RET                                 ; 004f1fc9
    FLD float ptr [ESI + 0x30]          ; 004f1fca
        ;   Label: LAB_004f1fca
    JMP 0x004f1ccc                      ; 004f1fcd
        ;   XREF to: 004f1ccc (UNCONDITIONAL_JUMP)  ; LAB_004f1ccc
    FLD float ptr [EBX + 0x30]          ; 004f1fd2
        ;   Label: LAB_004f1fd2
    JMP 0x004f1e2a                      ; 004f1fd5
        ;   XREF to: 004f1e2a (UNCONDITIONAL_JUMP)  ; LAB_004f1e2a
    FLD float ptr [EBP + 0x30]          ; 004f1fda
        ;   Label: LAB_004f1fda
    JMP 0x004f1f8e                      ; 004f1fdd
        ;   XREF to: 004f1f8e (UNCONDITIONAL_JUMP)  ; LAB_004f1f8e
    INC EDX                             ; 004f1fdf
        ;   Label: LAB_004f1fdf
    ADD EAX,0x50                        ; 004f1fe0
    CMP EDX,EDI                         ; 004f1fe3
    JL 0x004f1940                       ; 004f1fe5
        ;   XREF to: 004f1940 (CONDITIONAL_JUMP)  ; LAB_004f1940
    XOR EAX,EAX                         ; 004f1feb
        ;   Label: LAB_004f1feb
    JMP 0x004f1950                      ; 004f1fed
        ;   XREF to: 004f1950 (UNCONDITIONAL_JUMP)  ; LAB_004f1950
    INC EDX                             ; 004f1ff2
        ;   Label: LAB_004f1ff2
    ADD EAX,0x50                        ; 004f1ff3
    CMP EDX,EDI                         ; 004f1ff6
    JL 0x004f1982                       ; 004f1ff8
        ;   XREF to: 004f1982 (CONDITIONAL_JUMP)  ; LAB_004f1982
    XOR EAX,EAX                         ; 004f1ffe
        ;   Label: LAB_004f1ffe
    JMP 0x004f1992                      ; 004f2000
        ;   XREF to: 004f1992 (UNCONDITIONAL_JUMP)  ; LAB_004f1992
    INC EDX                             ; 004f2005
        ;   Label: LAB_004f2005
    ADD EAX,0x50                        ; 004f2006
    CMP EDX,EDI                         ; 004f2009
    JL 0x004f19e0                       ; 004f200b
        ;   XREF to: 004f19e0 (CONDITIONAL_JUMP)  ; LAB_004f19e0
    XOR EAX,EAX                         ; 004f2011
        ;   Label: LAB_004f2011
    JMP 0x004f19f0                      ; 004f2013
        ;   XREF to: 004f19f0 (UNCONDITIONAL_JUMP)  ; LAB_004f19f0
    INC EDX                             ; 004f2018
        ;   Label: LAB_004f2018
    ADD EAX,0x50                        ; 004f2019
    CMP EDX,ESI                         ; 004f201c
    JL 0x004f1a36                       ; 004f201e
        ;   XREF to: 004f1a36 (CONDITIONAL_JUMP)  ; LAB_004f1a36
    XOR EAX,EAX                         ; 004f2024
        ;   Label: LAB_004f2024
    JMP 0x004f1a46                      ; 004f2026
        ;   XREF to: 004f1a46 (UNCONDITIONAL_JUMP)  ; LAB_004f1a46
    MOV ESI,dword ptr [ESP + 0xac]      ; 004f202b
        ;   Label: LAB_004f202b
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f2032
    MOV EDI,EBP                         ; 004f2039
    CALL engine_special.cpp_FUN_005625a3 ; 004f203b
        ;   XREF to: 005625a3 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005625a3()
    JMP 0x004f1a7f                      ; 004f2040
        ;   XREF to: 004f1a7f (UNCONDITIONAL_JUMP)  ; LAB_004f1a7f
    CMP dword ptr [0x005fba20],0x20     ; 004f2045 | DAT_005fba20
        ;   Label: LAB_004f2045
    JNZ 0x004f2068                      ; 004f204c
        ;   XREF to: 004f2068 (CONDITIONAL_JUMP)  ; LAB_004f2068
    MOV ESI,dword ptr [ESP + 0xac]      ; 004f204e
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f2055
    MOV EDI,EBP                         ; 004f205c
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33 ; 004f205e
        ;   XREF to: 00562c33 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f1a7f                      ; 004f2063
        ;   XREF to: 004f1a7f (UNCONDITIONAL_JUMP)  ; LAB_004f1a7f
    MOV ESI,dword ptr [ESP + 0xac]      ; 004f2068
        ;   Label: LAB_004f2068
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004f206f
    MOV EDI,EBP                         ; 004f2076
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69 ; 004f2078
        ;   XREF to: 00562e69 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f1a7f                      ; 004f207d
        ;   XREF to: 004f1a7f (UNCONDITIONAL_JUMP)  ; LAB_004f1a7f

