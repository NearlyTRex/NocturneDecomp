; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2090(int param_1,int param_2)
;
; Local Variables:
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
;   engine_mini3d.cpp_FUN_004ee5b0 at 004ee887
;   engine_mini3d.cpp_FUN_004f1190 at 004f1298
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01d76cf8
;   undefined4 DAT_01d80844
;   undefined4 DAT_01d80848
;   undefined4 DAT_01d80850
;   undefined4 DAT_01d80854
;   undefined4 DAT_01d80858
;   undefined4 DAT_01d80860
;   undefined4 DAT_01d80864
;   undefined4 DAT_01d80868
;   undefined4 DAT_01d8086c
;   undefined4 DAT_01d80870
;   undefined4 DAT_01d80874
;   undefined4 DAT_01d80898
;   ... and 2 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f13a0
;   engine_special.cpp_FUN_00561fdc
;   engine_special.cpp_FUN_005625a3
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2090
        ;   Label: engine_mini3d.cpp_FUN_004f2090
    PUSH ESI                            ; 004f2091
    PUSH EDI                            ; 004f2092
    PUSH EBP                            ; 004f2093
    SUB ESP,0x24                        ; 004f2094
    MOV EBP,dword ptr [0x01d80844]      ; 004f2097 | DAT_01d80844
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004f209d
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f20a1
    FLD float ptr [EAX + 0x94]          ; 004f20a5
    FLD float ptr [EAX + 0x58]          ; 004f20ab
    FSUB float ptr [EAX + 0x18]         ; 004f20ae
    FXCH                                ; 004f20b1
    FSUB float ptr [EAX + 0x54]         ; 004f20b3
    FXCH                                ; 004f20b6
    FSTP float ptr [ESP + 0x18]         ; 004f20b8
    FSTP float ptr [ESP + 0x1c]         ; 004f20bc
    FLD float ptr [ESP + 0x18]          ; 004f20c0
    FMUL float ptr [ESP + 0x1c]         ; 004f20c4
    FLD float ptr [EAX + 0x98]          ; 004f20c8
    FLD float ptr [EAX + 0x54]          ; 004f20ce
    FSUB float ptr [EAX + 0x14]         ; 004f20d1
    FXCH                                ; 004f20d4
    FSUB float ptr [EAX + 0x58]         ; 004f20d6
    FXCH                                ; 004f20d9
    FSTP float ptr [ESP + 0x4]          ; 004f20db
    FSTP float ptr [ESP]                ; 004f20df
    FLD float ptr [ESP + 0x4]           ; 004f20e2
    FMUL float ptr [ESP]                ; 004f20e6
    MOV EDX,dword ptr [0x01d76cf8]      ; 004f20e9 | DAT_01d76cf8
    FXCH                                ; 004f20ef
    FSTP float ptr [ESP + 0x8]          ; 004f20f1
    FSTP float ptr [ESP + 0x20]         ; 004f20f5
    TEST EDX,EDX                        ; 004f20f9
    JNZ 0x004f236c                      ; 004f20fb
        ;   XREF to: 004f236c (CONDITIONAL_JUMP)  ; LAB_004f236c
    FLD float ptr [ESP + 0x20]          ; 004f2101
    FCOMP float ptr [ESP + 0x8]         ; 004f2105
    FNSTSW AX                           ; 004f2109
    SAHF                                ; 004f210b
    JBE 0x004f237d                      ; 004f210c
        ;   XREF to: 004f237d (CONDITIONAL_JUMP)  ; LAB_004f237d
    MOV ECX,0x4b0                       ; 004f2112
        ;   Label: LAB_004f2112
    XOR EBX,EBX                         ; 004f2117
    XOR EBP,EBP                         ; 004f2119
    MOV dword ptr [0x01d80d4c],EBX      ; 004f211b | DAT_01d80d4c
    MOV dword ptr [0x01d80844],EBX      ; 004f2121 | DAT_01d80844
    MOV dword ptr [0x01d80d48],ECX      ; 004f2127 | DAT_01d80d48
    TEST EDI,EDI                        ; 004f212d
    JLE 0x004f2159                      ; 004f212f
        ;   XREF to: 004f2159 (CONDITIONAL_JUMP)  ; LAB_004f2159
    MOV ESI,dword ptr [ESP + 0x38]      ; 004f2131
    LEA EAX,[EBX + 0x1]                 ; 004f2135
        ;   Label: LAB_004f2135
    CMP EAX,EDI                         ; 004f2138
    JL 0x004f213e                       ; 004f213a
        ;   XREF to: 004f213e (CONDITIONAL_JUMP)  ; LAB_004f213e
    XOR EAX,EAX                         ; 004f213c
    MOV EDX,dword ptr [ESP + 0x38]      ; 004f213e
        ;   Label: LAB_004f213e
    SHL EAX,0x6                         ; 004f2142
    ADD EAX,EDX                         ; 004f2145
    PUSH EAX                            ; 004f2147
    PUSH ESI                            ; 004f2148
    INC EBX                             ; 004f2149
    CALL engine_mini3d.cpp_FUN_004f13a0 ; 004f214a
        ;   XREF to: 004f13a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f13a0()
    ADD ESP,0x8                         ; 004f214f
    ADD ESI,0x40                        ; 004f2152
    CMP EBX,EDI                         ; 004f2155
    JL 0x004f2135                       ; 004f2157
        ;   XREF to: 004f2135 (CONDITIONAL_JUMP)  ; LAB_004f2135
    MOV EAX,0x1d80848                   ; 004f2159
        ;   Label: LAB_004f2159
    MOV EBP,dword ptr [0x01d80844]      ; 004f215e | DAT_01d80844
    MOV EDX,dword ptr [0x01d80d48]      ; 004f2164 | DAT_01d80d48
    XOR ESI,ESI                         ; 004f216a
    TEST EBP,EBP                        ; 004f216c
    JLE 0x004f2397                      ; 004f216e
        ;   XREF to: 004f2397 (CONDITIONAL_JUMP)  ; LAB_004f2397
    CMP EDX,dword ptr [EAX]             ; 004f2174 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2174
    JNZ 0x004f238b                      ; 004f2176
        ;   XREF to: 004f238b (CONDITIONAL_JUMP)  ; LAB_004f238b
    TEST EAX,EAX                        ; 004f217c
    JZ 0x004f238b                       ; 004f217e
        ;   XREF to: 004f238b (CONDITIONAL_JUMP)  ; LAB_004f238b
    MOV dword ptr [ESP + 0x14],EAX      ; 004f2184 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2184
    TEST EAX,EAX                        ; 004f2188
    JZ 0x004f237d                       ; 004f218a
        ;   XREF to: 004f237d (CONDITIONAL_JUMP)  ; LAB_004f237d
    MOV EBX,dword ptr [0x01d80d48]      ; 004f2190 | DAT_01d80d48
    MOV ECX,EAX                         ; 004f2196
    XOR EDX,EDX                         ; 004f2198
    MOV EAX,0x1d80848                   ; 004f219a
    TEST EBP,EBP                        ; 004f219f
    JLE 0x004f23aa                      ; 004f21a1
        ;   XREF to: 004f23aa (CONDITIONAL_JUMP)  ; LAB_004f23aa
    CMP EBX,dword ptr [EAX]             ; 004f21a7 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f21a7
    JNZ 0x004f239e                      ; 004f21a9
        ;   XREF to: 004f239e (CONDITIONAL_JUMP)  ; LAB_004f239e
    CMP EAX,ECX                         ; 004f21af
    JZ 0x004f239e                       ; 004f21b1
        ;   XREF to: 004f239e (CONDITIONAL_JUMP)  ; LAB_004f239e
    MOV dword ptr [ESP + 0x10],EAX      ; 004f21b7 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f21b7
    TEST EAX,EAX                        ; 004f21bb
    JZ 0x004f237d                       ; 004f21bd
        ;   XREF to: 004f237d (CONDITIONAL_JUMP)  ; LAB_004f237d
    MOV EAX,[0x01d80d48]                ; 004f21c3 | DAT_01d80d48
    MOV dword ptr [ESP + 0xc],EAX       ; 004f21c8
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f21cc
        ;   Label: LAB_004f21cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f21d0
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f21d4
    JL 0x004f2210                       ; 004f21d7
        ;   XREF to: 004f2210 (CONDITIONAL_JUMP)  ; LAB_004f2210
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f21d9
    MOV ECX,EAX                         ; 004f21dd
    MOV dword ptr [EDX],0xffffffff      ; 004f21df
    MOV EAX,0x1d80848                   ; 004f21e5
    XOR EDX,EDX                         ; 004f21ea
    TEST EBP,EBP                        ; 004f21ec
    JLE 0x004f23bd                      ; 004f21ee
        ;   XREF to: 004f23bd (CONDITIONAL_JUMP)  ; LAB_004f23bd
    CMP ECX,dword ptr [EAX]             ; 004f21f4 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f21f4
    JNZ 0x004f23b1                      ; 004f21f6
        ;   XREF to: 004f23b1 (CONDITIONAL_JUMP)  ; LAB_004f23b1
    CMP EAX,EBX                         ; 004f21fc
    JZ 0x004f23b1                       ; 004f21fe
        ;   XREF to: 004f23b1 (CONDITIONAL_JUMP)  ; LAB_004f23b1
    MOV dword ptr [ESP + 0x14],EAX      ; 004f2204 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2204
    TEST EAX,EAX                        ; 004f2208
    JZ 0x004f237d                       ; 004f220a
        ;   XREF to: 004f237d (CONDITIONAL_JUMP)  ; LAB_004f237d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f2210
        ;   Label: LAB_004f2210
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2214
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f2218
    JL 0x004f2254                       ; 004f221b
        ;   XREF to: 004f2254 (CONDITIONAL_JUMP)  ; LAB_004f2254
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f221d
    MOV EBX,EAX                         ; 004f2221
    MOV dword ptr [EDX],0xffffffff      ; 004f2223
    MOV EAX,0x1d80848                   ; 004f2229
    XOR EDX,EDX                         ; 004f222e
    TEST EBP,EBP                        ; 004f2230
    JLE 0x004f23d0                      ; 004f2232
        ;   XREF to: 004f23d0 (CONDITIONAL_JUMP)  ; LAB_004f23d0
    CMP EBX,dword ptr [EAX]             ; 004f2238 | DAT_01d80848 | DAT_01d80898
        ;   Label: LAB_004f2238
    JNZ 0x004f23c4                      ; 004f223a
        ;   XREF to: 004f23c4 (CONDITIONAL_JUMP)  ; LAB_004f23c4
    CMP EAX,ECX                         ; 004f2240
    JZ 0x004f23c4                       ; 004f2242
        ;   XREF to: 004f23c4 (CONDITIONAL_JUMP)  ; LAB_004f23c4
    MOV dword ptr [ESP + 0x10],EAX      ; 004f2248 | DAT_01d80898 | DAT_01d80848
        ;   Label: LAB_004f2248
    TEST EAX,EAX                        ; 004f224c
    JZ 0x004f237d                       ; 004f224e
        ;   XREF to: 004f237d (CONDITIONAL_JUMP)  ; LAB_004f237d
    CMP dword ptr [0x01c6e2a0],0x0      ; 004f2254 | DAT_01c6e2a0
        ;   Label: LAB_004f2254
    JZ 0x004f23ed                       ; 004f225b
        ;   XREF to: 004f23ed (CONDITIONAL_JUMP)  ; LAB_004f23ed
    MOV EDX,dword ptr [0x005fba20]      ; 004f2261 | DAT_005fba20
    MOV dword ptr [0x01d80844],EBP      ; 004f2267 | DAT_01d80844
    CMP EDX,0x20                        ; 004f226d
    JNZ 0x004f23d7                      ; 004f2270
        ;   XREF to: 004f23d7 (CONDITIONAL_JUMP)  ; LAB_004f23d7
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f2276
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f227a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f227e
    CALL engine_special.cpp_FUN_00561fdc ; 004f2282
        ;   XREF to: 00561fdc (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00561fdc()
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f2287
        ;   Label: LAB_004f2287
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f228b
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f228f | DAT_01d80850
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f2292 | DAT_01d80854
    ADD ECX,EAX                         ; 004f2295
    MOV dword ptr [EDX + 0x8],ECX       ; 004f2297 | DAT_01d80850
    MOV EBX,dword ptr [EDX + 0x18]      ; 004f229a | DAT_01d80860
    MOV ESI,dword ptr [EDX + 0x20]      ; 004f229d | DAT_01d80868
    MOV EDI,dword ptr [EDX + 0x28]      ; 004f22a0 | DAT_01d80870
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f22a3 | DAT_01d80864
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f22a6 | DAT_01d80858
    ADD EBX,EAX                         ; 004f22a9
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f22ab | DAT_01d8086c
    MOV dword ptr [EDX + 0x18],EBX      ; 004f22ae | DAT_01d80860
    ADD ESI,EAX                         ; 004f22b1
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f22b3 | DAT_01d80874
    MOV dword ptr [EDX + 0x20],ESI      ; 004f22b6 | DAT_01d80868
    ADD EDI,EAX                         ; 004f22b9
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f22bb
    MOV dword ptr [EDX + 0x28],EDI      ; 004f22be
    ADD ECX,EAX                         ; 004f22c1
    MOV dword ptr [EDX + 0x10],ECX      ; 004f22c3
    MOV EBX,dword ptr [EDX + 0x38]      ; 004f22c6
    MOV ESI,dword ptr [EDX + 0x40]      ; 004f22c9
    MOV EDI,dword ptr [EDX + 0x48]      ; 004f22cc
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f22cf
    MOV ECX,dword ptr [EDX + 0x30]      ; 004f22d2
    ADD EBX,EAX                         ; 004f22d5
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f22d7
    MOV dword ptr [EDX + 0x38],EBX      ; 004f22da
    ADD ESI,EAX                         ; 004f22dd
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f22df
    MOV dword ptr [EDX + 0x40],ESI      ; 004f22e2
    ADD EDI,EAX                         ; 004f22e5
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f22e7
    MOV dword ptr [EDX + 0x48],EDI      ; 004f22ea
    ADD ECX,EAX                         ; 004f22ed
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f22ef
    MOV dword ptr [EDX + 0x30],ECX      ; 004f22f3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f22f6
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f22fa
    ADD dword ptr [EDX + 0x8],EAX       ; 004f22fd
    MOV ESI,dword ptr [EDX + 0x18]      ; 004f2300
    MOV EDI,dword ptr [EDX + 0x20]      ; 004f2303
    MOV ECX,dword ptr [EDX + 0x28]      ; 004f2306
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f2309
    MOV EBX,dword ptr [EDX + 0x10]      ; 004f230c
    ADD ESI,EAX                         ; 004f230f
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f2311
    MOV dword ptr [EDX + 0x18],ESI      ; 004f2314
    ADD EDI,EAX                         ; 004f2317
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f2319
    MOV dword ptr [EDX + 0x20],EDI      ; 004f231c
    ADD ECX,EAX                         ; 004f231f
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f2321
    MOV dword ptr [EDX + 0x28],ECX      ; 004f2324
    ADD EBX,EAX                         ; 004f2327
    MOV dword ptr [EDX + 0x10],EBX      ; 004f2329
    MOV EBP,dword ptr [0x01d80844]      ; 004f232c | DAT_01d80844
    MOV ESI,dword ptr [EDX + 0x38]      ; 004f2332
    MOV EDI,dword ptr [EDX + 0x40]      ; 004f2335
    MOV ECX,dword ptr [EDX + 0x48]      ; 004f2338
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f233b
    MOV EBX,dword ptr [EDX + 0x30]      ; 004f233e
    ADD ESI,EAX                         ; 004f2341
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f2343
    MOV dword ptr [EDX + 0x38],ESI      ; 004f2346
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f2349
    ADD EDI,EAX                         ; 004f234d
    INC ESI                             ; 004f234f
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f2350
    MOV dword ptr [EDX + 0x40],EDI      ; 004f2353
    ADD ECX,EAX                         ; 004f2356
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f2358
    MOV dword ptr [EDX + 0x48],ECX      ; 004f235b
    ADD EBX,EAX                         ; 004f235e
    MOV dword ptr [ESP + 0xc],ESI       ; 004f2360
    MOV dword ptr [EDX + 0x30],EBX      ; 004f2364
    JMP 0x004f21cc                      ; 004f2367
        ;   XREF to: 004f21cc (UNCONDITIONAL_JUMP)  ; LAB_004f21cc
    FLD float ptr [ESP + 0x20]          ; 004f236c
        ;   Label: LAB_004f236c
    FCOMP float ptr [ESP + 0x8]         ; 004f2370
    FNSTSW AX                           ; 004f2374
    SAHF                                ; 004f2376
    JC 0x004f2112                       ; 004f2377
        ;   XREF to: 004f2112 (CONDITIONAL_JUMP)  ; LAB_004f2112
    MOV dword ptr [0x01d80844],EBP      ; 004f237d | DAT_01d80844
        ;   Label: LAB_004f237d
    ADD ESP,0x24                        ; 004f2383
    POP EBP                             ; 004f2386
    POP EDI                             ; 004f2387
    POP ESI                             ; 004f2388
    POP EBX                             ; 004f2389
    RET                                 ; 004f238a
    INC ESI                             ; 004f238b
        ;   Label: LAB_004f238b
    ADD EAX,0x50                        ; 004f238c
    CMP ESI,EBP                         ; 004f238f
    JL 0x004f2174                       ; 004f2391
        ;   XREF to: 004f2174 (CONDITIONAL_JUMP)  ; LAB_004f2174
    XOR EAX,EAX                         ; 004f2397
        ;   Label: LAB_004f2397
    JMP 0x004f2184                      ; 004f2399
        ;   XREF to: 004f2184 (UNCONDITIONAL_JUMP)  ; LAB_004f2184
    INC EDX                             ; 004f239e
        ;   Label: LAB_004f239e
    ADD EAX,0x50                        ; 004f239f
    CMP EDX,EBP                         ; 004f23a2
    JL 0x004f21a7                       ; 004f23a4
        ;   XREF to: 004f21a7 (CONDITIONAL_JUMP)  ; LAB_004f21a7
    XOR EAX,EAX                         ; 004f23aa
        ;   Label: LAB_004f23aa
    JMP 0x004f21b7                      ; 004f23ac
        ;   XREF to: 004f21b7 (UNCONDITIONAL_JUMP)  ; LAB_004f21b7
    INC EDX                             ; 004f23b1
        ;   Label: LAB_004f23b1
    ADD EAX,0x50                        ; 004f23b2
    CMP EDX,EBP                         ; 004f23b5
    JL 0x004f21f4                       ; 004f23b7
        ;   XREF to: 004f21f4 (CONDITIONAL_JUMP)  ; LAB_004f21f4
    XOR EAX,EAX                         ; 004f23bd
        ;   Label: LAB_004f23bd
    JMP 0x004f2204                      ; 004f23bf
        ;   XREF to: 004f2204 (UNCONDITIONAL_JUMP)  ; LAB_004f2204
    INC EDX                             ; 004f23c4
        ;   Label: LAB_004f23c4
    ADD EAX,0x50                        ; 004f23c5
    CMP EDX,EBP                         ; 004f23c8
    JL 0x004f2238                       ; 004f23ca
        ;   XREF to: 004f2238 (CONDITIONAL_JUMP)  ; LAB_004f2238
    XOR EAX,EAX                         ; 004f23d0
        ;   Label: LAB_004f23d0
    JMP 0x004f2248                      ; 004f23d2
        ;   XREF to: 004f2248 (UNCONDITIONAL_JUMP)  ; LAB_004f2248
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f23d7
        ;   Label: LAB_004f23d7
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f23db
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f23df
    CALL engine_special.cpp_FUN_005625a3 ; 004f23e3
        ;   XREF to: 005625a3 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005625a3()
    JMP 0x004f2287                      ; 004f23e8
        ;   XREF to: 004f2287 (UNCONDITIONAL_JUMP)  ; LAB_004f2287
    MOV EAX,[0x005fba20]                ; 004f23ed | DAT_005fba20
        ;   Label: LAB_004f23ed
    MOV dword ptr [0x01d80844],EBP      ; 004f23f2 | DAT_01d80844
    CMP EAX,0x20                        ; 004f23f8
    JNZ 0x004f2413                      ; 004f23fb
        ;   XREF to: 004f2413 (CONDITIONAL_JUMP)  ; LAB_004f2413
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f23fd
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f2401
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f2405
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33 ; 004f2409
        ;   XREF to: 00562c33 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_00562c33(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f2287                      ; 004f240e
        ;   XREF to: 004f2287 (UNCONDITIONAL_JUMP)  ; LAB_004f2287
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f2413
        ;   Label: LAB_004f2413
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f2417
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f241b
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69 ; 004f241f
        ;   XREF to: 00562e69 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x004f2287                      ; 004f2424
        ;   XREF to: 004f2287 (UNCONDITIONAL_JUMP)  ; LAB_004f2287

