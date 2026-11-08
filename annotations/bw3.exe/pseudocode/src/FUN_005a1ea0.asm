; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1ea0(int *param_1,int param_2)
;
; Local Variables:
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
;   FUN_0046b160 at 0046b21c
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01bdd520
;   undefined4 DAT_01bdd814
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02d24d80
;   undefined4 DAT_02d24d84
;   ... and 3 more
;
; Called Functions:
;   FUN_00515920
;   FUN_00515a80
;   FUN_00515ac0
;   FUN_00563257
;   FUN_00565c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1ea0
        ;   Label: FUN_005a1ea0
    PUSH ESI                            ; 005a1ea1
    PUSH EDI                            ; 005a1ea2
    PUSH EBP                            ; 005a1ea3
    SUB ESP,0x20                        ; 005a1ea4
    MOV EBP,dword ptr [0x02d24d80]      ; 005a1ea7 | DAT_02d24d80
    CMP dword ptr [0x005fba40],0x0      ; 005a1ead | DAT_005fba40
    JZ 0x005a1f63                       ; 005a1eb4
        ;   XREF to: 005a1f63 (CONDITIONAL_JUMP)  ; LAB_005a1f63
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a1eba
    MOV ECX,dword ptr [ESP + 0x34]      ; 005a1ebe
    XOR ESI,ESI                         ; 005a1ec2
    TEST EBX,EBX                        ; 005a1ec4
    JLE 0x005a1f63                      ; 005a1ec6
        ;   XREF to: 005a1f63 (CONDITIONAL_JUMP)  ; LAB_005a1f63
    MOV EDI,dword ptr [ESP + 0x38]      ; 005a1ecc
    MOV AH,byte ptr [ECX + 0x13]        ; 005a1ed0
        ;   Label: LAB_005a1ed0
    MOV dword ptr [0x02d24d80],EBP      ; 005a1ed3 | DAT_02d24d80
    TEST AH,0x80                        ; 005a1ed9
    JZ 0x005a1f51                       ; 005a1edc
        ;   XREF to: 005a1f51 (CONDITIONAL_JUMP)  ; LAB_005a1f51
    TEST byte ptr [0x01c6e2b8],0x6      ; 005a1ede | DAT_01c6e2b8
    JZ 0x005a1ef9                       ; 005a1ee5
        ;   XREF to: 005a1ef9 (CONDITIONAL_JUMP)  ; LAB_005a1ef9
    MOV EAX,0x7fffffff                  ; 005a1ee7
    MOV EDX,EAX                         ; 005a1eec
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a1eee
    SAR EDX,0x1f                        ; 005a1ef1
    IDIV EBX                            ; 005a1ef4
    MOV dword ptr [ECX + 0xc],EAX       ; 005a1ef6
    MOV DH,byte ptr [0x01c6e2b8]        ; 005a1ef9 | DAT_01c6e2b8
        ;   Label: LAB_005a1ef9
    MOV dword ptr [0x02d24d80],EBP      ; 005a1eff | DAT_02d24d80
    TEST DH,0x1                         ; 005a1f05
    JZ 0x005a1f1c                       ; 005a1f08
        ;   XREF to: 005a1f1c (CONDITIONAL_JUMP)  ; LAB_005a1f1c
    MOV EAX,0x7fffffff                  ; 005a1f0a
    MOV EDX,EAX                         ; 005a1f0f
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a1f11
    SAR EDX,0x1f                        ; 005a1f14
    IDIV EBX                            ; 005a1f17
    MOV dword ptr [ECX + 0xc],EAX       ; 005a1f19
    MOV EDX,dword ptr [0x01c6b598]      ; 005a1f1c | DAT_01c6b598
        ;   Label: LAB_005a1f1c
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a1f22
    MOV EAX,dword ptr [ECX]             ; 005a1f25
    IMUL EDX                            ; 005a1f27
    IDIV EBX                            ; 005a1f29
    MOV EDX,dword ptr [0x01c6b5a0]      ; 005a1f2b | DAT_01c6b5a0
    ADD EAX,EDX                         ; 005a1f31
    MOV EBX,dword ptr [ECX + 0x8]       ; 005a1f33
    MOV dword ptr [ECX + 0x10],EAX      ; 005a1f36
    MOV EDX,dword ptr [0x01c6b59c]      ; 005a1f39 | DAT_01c6b59c
    MOV EAX,dword ptr [ECX + 0x4]       ; 005a1f3f
    IMUL EDX                            ; 005a1f42
    IDIV EBX                            ; 005a1f44
    MOV EDX,dword ptr [0x01c6b5a4]      ; 005a1f46 | DAT_01c6b5a4
    ADD EAX,EDX                         ; 005a1f4c
    MOV dword ptr [ECX + 0x14],EAX      ; 005a1f4e
    MOV EBP,dword ptr [0x02d24d80]      ; 005a1f51 | DAT_02d24d80
        ;   Label: LAB_005a1f51
    INC ESI                             ; 005a1f57
    ADD ECX,0x30                        ; 005a1f58
    CMP ESI,EDI                         ; 005a1f5b
    JL 0x005a1ed0                       ; 005a1f5d
        ;   XREF to: 005a1ed0 (CONDITIONAL_JUMP)  ; LAB_005a1ed0
    MOV EAX,[0x007303fc]                ; 005a1f63 | DAT_007303fc
        ;   Label: LAB_005a1f63
    MOV dword ptr [0x02d24d80],EBP      ; 005a1f68 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a1f6e
    JNZ 0x005a214c                      ; 005a1f70
        ;   XREF to: 005a214c (CONDITIONAL_JUMP)  ; LAB_005a214c
    MOV ECX,dword ptr [0x01ed3198]      ; 005a1f76 | DAT_01ed3198
        ;   Label: LAB_005a1f76
    INC ECX                             ; 005a1f7c
    MOV EBX,dword ptr [0x01c6cee8]      ; 005a1f7d | DAT_01c6cee8
    MOV dword ptr [0x01ed3198],ECX      ; 005a1f83 | DAT_01ed3198
    TEST EBX,EBX                        ; 005a1f89
    JZ 0x005a1f9a                       ; 005a1f8b
        ;   XREF to: 005a1f9a (CONDITIONAL_JUMP)  ; LAB_005a1f9a
    CMP dword ptr [0x007303f4],0x0      ; 005a1f8d | DAT_007303f4
    JZ 0x005a217f                       ; 005a1f94
        ;   XREF to: 005a217f (CONDITIONAL_JUMP)  ; LAB_005a217f
    MOV EAX,[0x01c6e2b8]                ; 005a1f9a | DAT_01c6e2b8
        ;   Label: LAB_005a1f9a
    MOV EBP,dword ptr [0x02d24d80]      ; 005a1f9f | DAT_02d24d80
    CMP EAX,0x1                         ; 005a1fa5
    JNC 0x005a21d4                      ; 005a1fa8
        ;   XREF to: 005a21d4 (CONDITIONAL_JUMP)  ; LAB_005a21d4
    MOV ECX,0x4b0                       ; 005a1fae
        ;   Label: LAB_005a1fae
    MOV ESI,dword ptr [ESP + 0x38]      ; 005a1fb3
    XOR EBX,EBX                         ; 005a1fb7
    XOR EBP,EBP                         ; 005a1fb9
    XOR EDI,EDI                         ; 005a1fbb
    MOV dword ptr [0x02d25288],EBX      ; 005a1fbd | DAT_02d25288
    MOV dword ptr [0x02d25284],ECX      ; 005a1fc3 | DAT_02d25284
    TEST ESI,ESI                        ; 005a1fc9
    JLE 0x005a201b                      ; 005a1fcb
        ;   XREF to: 005a201b (CONDITIONAL_JUMP)  ; LAB_005a201b
    MOV ESI,dword ptr [ESP + 0x38]      ; 005a1fcd
        ;   Label: LAB_005a1fcd
    LEA EAX,[EDI + 0x1]                 ; 005a1fd1
    CMP EAX,ESI                         ; 005a1fd4
    JL 0x005a1fda                       ; 005a1fd6
        ;   XREF to: 005a1fda (CONDITIONAL_JUMP)  ; LAB_005a1fda
    XOR EAX,EAX                         ; 005a1fd8
    IMUL EAX,EAX,0x30                   ; 005a1fda
        ;   Label: LAB_005a1fda
    MOV EDX,dword ptr [ESP + 0x34]      ; 005a1fdd
    ADD EDX,EAX                         ; 005a1fe1
    IMUL EAX,EDI,0x30                   ; 005a1fe3
    MOV dword ptr [ESP + 0xc],EDX       ; 005a1fe6
    MOV EDX,dword ptr [ESP + 0x34]      ; 005a1fea
    ADD EDX,EAX                         ; 005a1fee
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a1ff0
    MOV dword ptr [ESP + 0x8],EDX       ; 005a1ff4
    MOV ESI,EDX                         ; 005a1ff8
    MOV dword ptr [ESP + 0x10],EAX      ; 005a1ffa
    MOV EDX,dword ptr [EDX + 0x14]      ; 005a1ffe
    MOV EAX,dword ptr [EAX + 0x14]      ; 005a2001
    SAR EDX,0x10                        ; 005a2004
    SAR EAX,0x10                        ; 005a2007
    CMP EDX,EAX                         ; 005a200a
    JNZ 0x005a21e0                      ; 005a200c
        ;   XREF to: 005a21e0 (CONDITIONAL_JUMP)  ; LAB_005a21e0
    MOV ECX,dword ptr [ESP + 0x38]      ; 005a2012
        ;   Label: LAB_005a2012
    INC EDI                             ; 005a2016
    CMP EDI,ECX                         ; 005a2017
    JL 0x005a1fcd                       ; 005a2019
        ;   XREF to: 005a1fcd (CONDITIONAL_JUMP)  ; LAB_005a1fcd
    MOV ESI,0x2d24d84                   ; 005a201b
        ;   Label: LAB_005a201b
    MOV EDI,dword ptr [0x02d25284]      ; 005a2020 | DAT_02d25284
    XOR EBX,EBX                         ; 005a2026
    XOR EAX,EAX                         ; 005a2028
    MOV dword ptr [0x01bdd814],EBX      ; 005a202a | DAT_01bdd814
    TEST EBP,EBP                        ; 005a2030
    JLE 0x005a22ee                      ; 005a2032
        ;   XREF to: 005a22ee (CONDITIONAL_JUMP)  ; LAB_005a22ee
    CMP EDI,dword ptr [ESI]             ; 005a2038 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a2038
    JNZ 0x005a22e2                      ; 005a203a
        ;   XREF to: 005a22e2 (CONDITIONAL_JUMP)  ; LAB_005a22e2
    TEST ESI,ESI                        ; 005a2040
    JZ 0x005a22e2                       ; 005a2042
        ;   XREF to: 005a22e2 (CONDITIONAL_JUMP)  ; LAB_005a22e2
    MOV dword ptr [ESP + 0x1c],ESI      ; 005a2048 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a2048
    MOV dword ptr [0x02d24d80],EBP      ; 005a204c | DAT_02d24d80
    TEST ESI,ESI                        ; 005a2052
    JZ 0x005a213e                       ; 005a2054
        ;   XREF to: 005a213e (CONDITIONAL_JUMP)  ; LAB_005a213e
    MOV EAX,0x2d24d84                   ; 005a205a
    MOV EBX,dword ptr [0x02d25284]      ; 005a205f | DAT_02d25284
    MOV ECX,ESI                         ; 005a2065
    XOR EDX,EDX                         ; 005a2067
    TEST EBP,EBP                        ; 005a2069
    JLE 0x005a2301                      ; 005a206b
        ;   XREF to: 005a2301 (CONDITIONAL_JUMP)  ; LAB_005a2301
    CMP EBX,dword ptr [EAX]             ; 005a2071 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a2071
    JNZ 0x005a22f5                      ; 005a2073
        ;   XREF to: 005a22f5 (CONDITIONAL_JUMP)  ; LAB_005a22f5
    CMP EAX,ECX                         ; 005a2079
    JZ 0x005a22f5                       ; 005a207b
        ;   XREF to: 005a22f5 (CONDITIONAL_JUMP)  ; LAB_005a22f5
    MOV dword ptr [ESP + 0x18],EAX      ; 005a2081 | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a2081
    MOV dword ptr [0x02d24d80],EBP      ; 005a2085 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a208b
    JZ 0x005a213e                       ; 005a208d
        ;   XREF to: 005a213e (CONDITIONAL_JUMP)  ; LAB_005a213e
    MOV EAX,[0x02d25284]                ; 005a2093 | DAT_02d25284
    MOV dword ptr [ESP + 0x14],EAX      ; 005a2098
        ;   Label: LAB_005a2098
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a209c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a20a0
    MOV EDI,dword ptr [EDX + 0x4]       ; 005a20a4
    MOV dword ptr [0x02d24d80],EBP      ; 005a20a7 | DAT_02d24d80
    CMP EAX,EDI                         ; 005a20ad
    JL 0x005a20ea                       ; 005a20af
        ;   XREF to: 005a20ea (CONDITIONAL_JUMP)  ; LAB_005a20ea
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a20b1
    MOV EBX,EAX                         ; 005a20b5
    MOV dword ptr [EDX],0xffffffff      ; 005a20b7
    MOV EAX,0x2d24d84                   ; 005a20bd
    XOR EDX,EDX                         ; 005a20c2
    TEST EBP,EBP                        ; 005a20c4
    JLE 0x005a2314                      ; 005a20c6
        ;   XREF to: 005a2314 (CONDITIONAL_JUMP)  ; LAB_005a2314
    CMP EBX,dword ptr [EAX]             ; 005a20cc | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a20cc
    JNZ 0x005a2308                      ; 005a20ce
        ;   XREF to: 005a2308 (CONDITIONAL_JUMP)  ; LAB_005a2308
    CMP EAX,ECX                         ; 005a20d4
    JZ 0x005a2308                       ; 005a20d6
        ;   XREF to: 005a2308 (CONDITIONAL_JUMP)  ; LAB_005a2308
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a20dc | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a20dc
    MOV dword ptr [0x02d24d80],EBP      ; 005a20e0 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a20e6
    JZ 0x005a213e                       ; 005a20e8
        ;   XREF to: 005a213e (CONDITIONAL_JUMP)  ; LAB_005a213e
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a20ea
        ;   Label: LAB_005a20ea
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a20ee
    CMP EAX,dword ptr [EDX + 0x4]       ; 005a20f2
    JL 0x005a232e                       ; 005a20f5
        ;   XREF to: 005a232e (CONDITIONAL_JUMP)  ; LAB_005a232e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005a20fb
    MOV EBP,dword ptr [0x02d24d80]      ; 005a20ff | DAT_02d24d80
    MOV EBX,EAX                         ; 005a2105
    MOV dword ptr [EDX],0xffffffff      ; 005a2107
    MOV EAX,0x2d24d84                   ; 005a210d
    XOR EDX,EDX                         ; 005a2112
    TEST EBP,EBP                        ; 005a2114
    JLE 0x005a2327                      ; 005a2116
        ;   XREF to: 005a2327 (CONDITIONAL_JUMP)  ; LAB_005a2327
    CMP EBX,dword ptr [EAX]             ; 005a211c | DAT_02d24d84 | DAT_02d24dd4
        ;   Label: LAB_005a211c
    JNZ 0x005a231b                      ; 005a211e
        ;   XREF to: 005a231b (CONDITIONAL_JUMP)  ; LAB_005a231b
    CMP EAX,ECX                         ; 005a2124
    JZ 0x005a231b                       ; 005a2126
        ;   XREF to: 005a231b (CONDITIONAL_JUMP)  ; LAB_005a231b
    MOV dword ptr [ESP + 0x18],EAX      ; 005a212c | DAT_02d24dd4 | DAT_02d24d84
        ;   Label: LAB_005a212c
    MOV dword ptr [0x02d24d80],EBP      ; 005a2130 | DAT_02d24d80
    TEST EAX,EAX                        ; 005a2136
    JNZ 0x005a232e                      ; 005a2138
        ;   XREF to: 005a232e (CONDITIONAL_JUMP)  ; LAB_005a232e
    MOV EBP,dword ptr [0x02d24d80]      ; 005a213e | DAT_02d24d80
        ;   Label: LAB_005a213e
    ADD ESP,0x20                        ; 005a2144
    POP EBP                             ; 005a2147
    POP EDI                             ; 005a2148
    POP ESI                             ; 005a2149
    POP EBX                             ; 005a214a
    RET                                 ; 005a214b
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a214c
        ;   Label: LAB_005a214c
    ADD EAX,0x60                        ; 005a2150
    PUSH EAX                            ; 005a2153
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a2154
    ADD EAX,0x30                        ; 005a2158
    PUSH EAX                            ; 005a215b
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005a215c
    PUSH EDX                            ; 005a2160
    CALL FUN_00515ac0                   ; 005a2161
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 005a2166
    TEST EAX,EAX                        ; 005a2169
    JNZ 0x005a1f76                      ; 005a216b
        ;   XREF to: 005a1f76 (CONDITIONAL_JUMP)  ; LAB_005a1f76
    MOV EBP,dword ptr [0x02d24d80]      ; 005a2171 | DAT_02d24d80
    ADD ESP,0x20                        ; 005a2177
    POP EBP                             ; 005a217a
    POP EDI                             ; 005a217b
    POP ESI                             ; 005a217c
    POP EBX                             ; 005a217d
    RET                                 ; 005a217e
    MOV EDI,dword ptr [0x01c6e2b4]      ; 005a217f | DAT_01c6e2b4
        ;   Label: LAB_005a217f
    PUSH EDI                            ; 005a2185
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a2186
    PUSH EAX                            ; 005a218a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005a218b
    PUSH EDX                            ; 005a218f
    CALL FUN_00565c10                   ; 005a2190
        ;   XREF to: 00565c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c10()
    ADD ESP,0xc                         ; 005a2195
    MOV EBP,dword ptr [0x02d24d80]      ; 005a2198 | DAT_02d24d80
    ADD ESP,0x20                        ; 005a219e
    POP EBP                             ; 005a21a1
    POP EDI                             ; 005a21a2
    POP ESI                             ; 005a21a3
    POP EBX                             ; 005a21a4
    RET                                 ; 005a21a5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a21a6
        ;   Label: LAB_005a21a6
    PUSH EAX                            ; 005a21aa
    MOV EDX,dword ptr [ESP + 0x38]      ; 005a21ab
    PUSH EDX                            ; 005a21af
    CALL FUN_00515920                   ; 005a21b0
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; undefined FUN_00515920()
    ADD ESP,0x8                         ; 005a21b5
    JMP 0x005a1fae                      ; 005a21b8
        ;   XREF to: 005a1fae (UNCONDITIONAL_JUMP)  ; LAB_005a1fae
    MOV EDI,dword ptr [ESP + 0x38]      ; 005a21bd
        ;   Label: LAB_005a21bd
    PUSH EDI                            ; 005a21c1
    MOV EBP,dword ptr [ESP + 0x38]      ; 005a21c2
    PUSH EBP                            ; 005a21c6
    CALL FUN_00515a80                   ; 005a21c7
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00515a80()
    ADD ESP,0x8                         ; 005a21cc
    JMP 0x005a1fae                      ; 005a21cf
        ;   XREF to: 005a1fae (UNCONDITIONAL_JUMP)  ; LAB_005a1fae
    JBE 0x005a21a6                      ; 005a21d4
        ;   XREF to: 005a21a6 (CONDITIONAL_JUMP)  ; LAB_005a21a6
        ;   Label: LAB_005a21d4
    CMP EAX,0x6                         ; 005a21d6
    JZ 0x005a21bd                       ; 005a21d9
        ;   XREF to: 005a21bd (CONDITIONAL_JUMP)  ; LAB_005a21bd
    JMP 0x005a1fae                      ; 005a21db
        ;   XREF to: 005a1fae (UNCONDITIONAL_JUMP)  ; LAB_005a1fae
    MOV ECX,ESI                         ; 005a21e0
        ;   Label: LAB_005a21e0
    MOV ECX,dword ptr [ECX + 0x14]      ; 005a21e2
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a21e5
    CMP ECX,dword ptr [EBX + 0x14]      ; 005a21e9
    JLE 0x005a21fe                      ; 005a21ec
        ;   XREF to: 005a21fe (CONDITIONAL_JUMP)  ; LAB_005a21fe
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a21ee
    MOV ESI,EBX                         ; 005a21f2
    MOV dword ptr [ESP + 0x10],ECX      ; 005a21f4
    MOV ECX,EDX                         ; 005a21f8
    MOV EDX,EAX                         ; 005a21fa
    MOV EAX,ECX                         ; 005a21fc
    IMUL EBX,EBP,0x50                   ; 005a21fe
        ;   Label: LAB_005a21fe
    ADD EBX,0x2d24d84                   ; 005a2201
    MOV dword ptr [EBX],EDX             ; 005a2207 | DAT_02d24d84
    MOV ECX,dword ptr [0x02d25284]      ; 005a2209 | DAT_02d25284
    MOV dword ptr [EBX + 0x4],EAX       ; 005a220f
    CMP EDX,ECX                         ; 005a2212
    JGE 0x005a221c                      ; 005a2214
        ;   XREF to: 005a221c (CONDITIONAL_JUMP)  ; LAB_005a221c
    MOV dword ptr [0x02d25284],EDX      ; 005a2216 | DAT_02d25284
    CMP EAX,dword ptr [0x02d25288]      ; 005a221c | DAT_02d25288
        ;   Label: LAB_005a221c
    JLE 0x005a2229                      ; 005a2222
        ;   XREF to: 005a2229 (CONDITIONAL_JUMP)  ; LAB_005a2229
    MOV [0x02d25288],EAX                ; 005a2224 | DAT_02d25288
    MOV ECX,dword ptr [ESP + 0x10]      ; 005a2229
        ;   Label: LAB_005a2229
    MOV EAX,dword ptr [ESI + 0x14]      ; 005a222d
    MOV ECX,dword ptr [ECX + 0x14]      ; 005a2230
    SUB ECX,EAX                         ; 005a2233
    CMP ECX,0x10000                     ; 005a2235
    JNC 0x005a22d2                      ; 005a223b
        ;   XREF to: 005a22d2 (CONDITIONAL_JUMP)  ; LAB_005a22d2
    XOR ECX,ECX                         ; 005a2241
    MOV EAX,dword ptr [ESI + 0x14]      ; 005a2243
        ;   Label: LAB_005a2243
    AND EAX,0xffff                      ; 005a2246
    XOR AX,0xffff                       ; 005a224b
    MOV dword ptr [ESP],EAX             ; 005a224f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a2252
    MOV EDX,dword ptr [ESI + 0x10]      ; 005a2256
    MOV EAX,dword ptr [EAX + 0x10]      ; 005a2259
    SUB EAX,EDX                         ; 005a225c
    MOV EDX,EAX                         ; 005a225e
    MOV EAX,ECX                         ; 005a2260
    MOV dword ptr [0x02d24d80],EBP      ; 005a2262 | DAT_02d24d80
    IMUL EDX                            ; 005a2268
    SHRD EAX,EDX,0x10                   ; 005a226a
    MOV EDX,EAX                         ; 005a226e
    MOV dword ptr [EBX + 0xc],EAX       ; 005a2270
    MOV EAX,dword ptr [ESP]             ; 005a2273
    IMUL EDX                            ; 005a2276
    SHRD EAX,EDX,0x10                   ; 005a2278
    MOV dword ptr [ESP + 0x4],EAX       ; 005a227c
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2280
    MOV EAX,dword ptr [ESI + 0x10]      ; 005a2284
    ADD EAX,EDX                         ; 005a2287
    MOV dword ptr [EBX + 0x8],EAX       ; 005a2289
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a228c
    MOV EDX,dword ptr [ESI + 0x8]       ; 005a2290
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a2293
    SUB EAX,EDX                         ; 005a2296
    MOV EDX,EAX                         ; 005a2298
    SHL EDX,0x8                         ; 005a229a
    MOV EAX,ECX                         ; 005a229d
    IMUL EDX                            ; 005a229f
    SHRD EAX,EDX,0x10                   ; 005a22a1
    MOV EDX,EAX                         ; 005a22a5
    MOV dword ptr [EBX + 0x2c],EAX      ; 005a22a7
    MOV EAX,dword ptr [ESP]             ; 005a22aa
    MOV ECX,dword ptr [ESI + 0x8]       ; 005a22ad
    MOV ESI,dword ptr [0x01bdd520]      ; 005a22b0 | DAT_01bdd520
    SHL ECX,0x8                         ; 005a22b6
    IMUL EDX                            ; 005a22b9
    SHRD EAX,EDX,0x10                   ; 005a22bb
    SUB ECX,ESI                         ; 005a22bf
    MOV EBP,dword ptr [0x02d24d80]      ; 005a22c1 | DAT_02d24d80
    ADD ECX,EAX                         ; 005a22c7
    INC EBP                             ; 005a22c9
    MOV dword ptr [EBX + 0x28],ECX      ; 005a22ca
    JMP 0x005a2012                      ; 005a22cd
        ;   XREF to: 005a2012 (UNCONDITIONAL_JUMP)  ; LAB_005a2012
    MOV EAX,0xffffffff                  ; 005a22d2
        ;   Label: LAB_005a22d2
    XOR EDX,EDX                         ; 005a22d7
    DIV ECX                             ; 005a22d9
    MOV ECX,EAX                         ; 005a22db
    JMP 0x005a2243                      ; 005a22dd
        ;   XREF to: 005a2243 (UNCONDITIONAL_JUMP)  ; LAB_005a2243
    INC EAX                             ; 005a22e2
        ;   Label: LAB_005a22e2
    ADD ESI,0x50                        ; 005a22e3
    CMP EAX,EBP                         ; 005a22e6
    JL 0x005a2038                       ; 005a22e8
        ;   XREF to: 005a2038 (CONDITIONAL_JUMP)  ; LAB_005a2038
    XOR ESI,ESI                         ; 005a22ee
        ;   Label: LAB_005a22ee
    JMP 0x005a2048                      ; 005a22f0
        ;   XREF to: 005a2048 (UNCONDITIONAL_JUMP)  ; LAB_005a2048
    INC EDX                             ; 005a22f5
        ;   Label: LAB_005a22f5
    ADD EAX,0x50                        ; 005a22f6
    CMP EDX,EBP                         ; 005a22f9
    JL 0x005a2071                       ; 005a22fb
        ;   XREF to: 005a2071 (CONDITIONAL_JUMP)  ; LAB_005a2071
    XOR EAX,EAX                         ; 005a2301
        ;   Label: LAB_005a2301
    JMP 0x005a2081                      ; 005a2303
        ;   XREF to: 005a2081 (UNCONDITIONAL_JUMP)  ; LAB_005a2081
    INC EDX                             ; 005a2308
        ;   Label: LAB_005a2308
    ADD EAX,0x50                        ; 005a2309
    CMP EDX,EBP                         ; 005a230c
    JL 0x005a20cc                       ; 005a230e
        ;   XREF to: 005a20cc (CONDITIONAL_JUMP)  ; LAB_005a20cc
    XOR EAX,EAX                         ; 005a2314
        ;   Label: LAB_005a2314
    JMP 0x005a20dc                      ; 005a2316
        ;   XREF to: 005a20dc (UNCONDITIONAL_JUMP)  ; LAB_005a20dc
    INC EDX                             ; 005a231b
        ;   Label: LAB_005a231b
    ADD EAX,0x50                        ; 005a231c | DAT_02d24dd4
    CMP EDX,EBP                         ; 005a231f
    JL 0x005a211c                       ; 005a2321
        ;   XREF to: 005a211c (CONDITIONAL_JUMP)  ; LAB_005a211c
    XOR EAX,EAX                         ; 005a2327
        ;   Label: LAB_005a2327
    JMP 0x005a212c                      ; 005a2329
        ;   XREF to: 005a212c (UNCONDITIONAL_JUMP)  ; LAB_005a212c
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a232e
        ;   Label: LAB_005a232e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a2332
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a2336
    CALL FUN_00563257                   ; 005a233a
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined FUN_00563257()
    CMP dword ptr [0x01bdd814],0x0      ; 005a233f | DAT_01bdd814
    JNZ 0x005a213e                      ; 005a2346
        ;   XREF to: 005a213e (CONDITIONAL_JUMP)  ; LAB_005a213e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a234c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a2350
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a2354
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a2357
    MOV EBX,dword ptr [EDX + 0x28]      ; 005a235a
    ADD ECX,EAX                         ; 005a235d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a235f
    MOV dword ptr [EDX + 0x8],ECX       ; 005a2362
    ADD EBX,EAX                         ; 005a2365
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a2367
    MOV dword ptr [EDX + 0x28],EBX      ; 005a236b
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a236e
    MOV EAX,dword ptr [EAX + 0xc]       ; 005a2372
    MOV ESI,dword ptr [EDX + 0x8]       ; 005a2375
    MOV EDI,dword ptr [EDX + 0x28]      ; 005a2378
    ADD ESI,EAX                         ; 005a237b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a237d
    MOV EBP,dword ptr [0x02d24d80]      ; 005a2380 | DAT_02d24d80
    ADD EDI,EAX                         ; 005a2386
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a2388
    MOV dword ptr [EDX + 0x8],ESI       ; 005a238c
    INC EAX                             ; 005a238f
    MOV dword ptr [EDX + 0x28],EDI      ; 005a2390
    JMP 0x005a2098                      ; 005a2393
        ;   XREF to: 005a2098 (UNCONDITIONAL_JUMP)  ; LAB_005a2098

