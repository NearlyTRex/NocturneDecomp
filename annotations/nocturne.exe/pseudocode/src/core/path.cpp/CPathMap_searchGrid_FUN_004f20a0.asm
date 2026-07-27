; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20 at 004f1242
;   core_path.cpp_FUN_004f2050 at 004f208e
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0058cc6f
;   TerminatedCString s_queuePop_empty_queue_0058cc80
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e312f4
;   undefined4 DAT_01e3161c
;   undefined4 DAT_01e31620
;   undefined4 DAT_01e31624
;   undefined4 DAT_01e31628
;   undefined4 DAT_01e3162c
;   undefined4 DAT_01e31630
;   undefined4 DAT_01e31634
;   undefined4 DAT_01e31638
;   undefined4 DAT_01e3163c
;   undefined4 DAT_01e31640
;   ... and 12 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f20a0
        ;   Label: core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
    PUSH ESI                            ; 004f20a1
    PUSH EDI                            ; 004f20a2
    PUSH EBP                            ; 004f20a3
    SUB ESP,0x18                        ; 004f20a4
    MOV EBX,dword ptr [0x01e40090]      ; 004f20a7 | DAT_01e40090
    PUSH 0x2774                         ; 004f20ad
    PUSH 0x0                            ; 004f20b2
    PUSH 0x1e40098                      ; 004f20b4
    MOV ESI,0x1                         ; 004f20b9
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004f20be
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV ECX,dword ptr [0x01e3161c]      ; 004f20c3 | DAT_01e3161c
    MOV EBX,dword ptr [0x01e31620]      ; 004f20c9 | DAT_01e31620
    ADD ESP,0xc                         ; 004f20cf
    MOV dword ptr [0x01e4280c],ESI      ; 004f20d2 | DAT_01e4280c
    XOR EDX,EDX                         ; 004f20d8
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f20da
    MOV dword ptr [0x01e4008c],EDX      ; 004f20e1 | DAT_01e4008c
    SUB EAX,EBX                         ; 004f20e7
    MOV dword ptr [ESP + 0x4],ESI       ; 004f20e9
    SHL EAX,0x3                         ; 004f20ed
    MOV dword ptr [0x01e3162c],ECX      ; 004f20f0 | DAT_01e3162c
    ADD EAX,EBX                         ; 004f20f6
    MOV DL,byte ptr [ESP + 0x4]         ; 004f20f8
    MOV dword ptr [0x01e31634],EBX      ; 004f20fc | DAT_01e31634
    MOV byte ptr [ECX + EAX*0x4 + 0x1e40098],DL ; 004f2102
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f2109
    MOV EBX,ESI                         ; 004f210d
    MOV [0x01e31630],EAX                ; 004f210f | DAT_01e31630
    IMUL EAX,dword ptr [0x01e31628],0x64 ; 004f2114 | DAT_01e31628
        ;   Label: LAB_004f2114
    ADD EAX,dword ptr [0x01e31624]      ; 004f211b | DAT_01e31624
    CMP byte ptr [EAX + 0x1e40098],0x0  ; 004f2121
    JNZ 0x004f2259                      ; 004f2128
        ;   XREF to: 004f2259 (CONDITIONAL_JUMP)  ; LAB_004f2259
    LEA ESI,[ESP + 0xc]                 ; 004f212e
    LEA EBP,[ESP + 0x10]                ; 004f2132
    LEA EDI,[ESP + 0x8]                 ; 004f2136
    MOV EAX,[0x01e4008c]                ; 004f213a | DAT_01e4008c
    MOV dword ptr [0x01e40090],EBX      ; 004f213f | DAT_01e40090
    CMP EAX,EBX                         ; 004f2145
    JZ 0x004f2260                       ; 004f2147
        ;   XREF to: 004f2260 (CONDITIONAL_JUMP)  ; LAB_004f2260
    IMUL EAX,dword ptr [0x01e4008c],0xc ; 004f214d | DAT_01e4008c
        ;   Label: LAB_004f214d
    MOV EDX,dword ptr [EAX + 0x1e3162c] ; 004f2154 | DAT_01e3162c | DAT_01e31638
    MOV dword ptr [EDI],EDX             ; 004f215a
    MOV EDX,dword ptr [EAX + 0x1e31630] ; 004f215c | DAT_01e31630 | DAT_01e3163c
    MOV ECX,dword ptr [0x01e4008c]      ; 004f2162 | DAT_01e4008c
    MOV dword ptr [ESI],EDX             ; 004f2168
    INC ECX                             ; 004f216a
    MOV EAX,dword ptr [EAX + 0x1e31634] ; 004f216b | DAT_01e31634 | DAT_01e31640
    MOV dword ptr [0x01e4008c],ECX      ; 004f2171 | DAT_01e4008c
    MOV dword ptr [EBP],EAX             ; 004f2177
    CMP ECX,0x1388                      ; 004f217a
    JL 0x004f218a                       ; 004f2180
        ;   XREF to: 004f218a (CONDITIONAL_JUMP)  ; LAB_004f218a
    XOR EDI,EDI                         ; 004f2182
    MOV dword ptr [0x01e4008c],EDI      ; 004f2184 | DAT_01e4008c
    MOV EBP,dword ptr [ESP + 0xc]       ; 004f218a
        ;   Label: LAB_004f218a
    PUSH EBP                            ; 004f218e
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f218f
    PUSH EAX                            ; 004f2193
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f2194
    INC EAX                             ; 004f2198
    PUSH EAX                            ; 004f2199
    MOV EDX,dword ptr [ESP + 0x38]      ; 004f219a
    PUSH EDX                            ; 004f219e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f219f
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0()
    ADD ESP,0x10                        ; 004f21a4
    MOV EBP,EAX                         ; 004f21a7
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f21a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f21ad
    PUSH ECX                            ; 004f21b1
    INC EAX                             ; 004f21b2
    PUSH EAX                            ; 004f21b3
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f21b4
    PUSH ESI                            ; 004f21b8
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f21b9
    PUSH EDI                            ; 004f21bd
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f21be
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0()
    ADD ESP,0x10                        ; 004f21c3
    MOV EDI,EAX                         ; 004f21c6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f21c8
    PUSH EAX                            ; 004f21cc
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f21cd
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f21d1
    PUSH EDX                            ; 004f21d5
    DEC EAX                             ; 004f21d6
    PUSH EAX                            ; 004f21d7
    MOV ECX,dword ptr [ESP + 0x38]      ; 004f21d8
    PUSH ECX                            ; 004f21dc
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f21dd
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0()
    ADD ESP,0x10                        ; 004f21e2
    MOV ESI,EAX                         ; 004f21e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f21e7
    PUSH EAX                            ; 004f21eb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f21ec
    DEC EAX                             ; 004f21f0
    PUSH EAX                            ; 004f21f1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f21f2
    PUSH EDX                            ; 004f21f6
    MOV ECX,dword ptr [ESP + 0x38]      ; 004f21f7
    PUSH ECX                            ; 004f21fb
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f21fc
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0()
    MOV EDX,dword ptr [0x01e3161c]      ; 004f2201 | DAT_01e3161c
    ADD ESP,0x10                        ; 004f2207
    MOV ECX,EAX                         ; 004f220a
    CMP EDX,dword ptr [ESP + 0x8]       ; 004f220c
    JZ 0x004f2287                       ; 004f2210
        ;   XREF to: 004f2287 (CONDITIONAL_JUMP)  ; LAB_004f2287
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2212
        ;   Label: LAB_004f2212
    CMP EAX,dword ptr [0x01e31624]      ; 004f2216 | DAT_01e31624
    JZ 0x004f24e5                       ; 004f221c
        ;   XREF to: 004f24e5 (CONDITIONAL_JUMP)  ; LAB_004f24e5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2222
        ;   Label: LAB_004f2222
    MOV EDX,dword ptr [0x01e312f4]      ; 004f2226 | DAT_01e312f4
    SUB EAX,EBP                         ; 004f222c
    CMP EAX,EDX                         ; 004f222e
    JL 0x004f24fa                       ; 004f2230
        ;   XREF to: 004f24fa (CONDITIONAL_JUMP)  ; LAB_004f24fa
    MOV EBX,dword ptr [0x01e40090]      ; 004f2236 | DAT_01e40090
        ;   Label: LAB_004f2236
    MOV EAX,[0x01e4008c]                ; 004f223c | DAT_01e4008c
    CMP EAX,EBX                         ; 004f2241
    JNZ 0x004f2114                      ; 004f2243
        ;   XREF to: 004f2114 (CONDITIONAL_JUMP)  ; LAB_004f2114
    XOR EAX,EBX                         ; 004f2249
    MOV dword ptr [0x01e40090],EBX      ; 004f224b | DAT_01e40090
        ;   Label: LAB_004f224b
    ADD ESP,0x18                        ; 004f2251
    POP EBP                             ; 004f2254
    POP EDI                             ; 004f2255
    POP ESI                             ; 004f2256
    POP EBX                             ; 004f2257
    RET                                 ; 004f2258
    MOV EAX,0x1                         ; 004f2259
        ;   Label: LAB_004f2259
    JMP 0x004f224b                      ; 004f225e
        ;   XREF to: 004f224b (UNCONDITIONAL_JUMP)  ; LAB_004f224b
    MOV ECX,0x58cc6f                    ; 004f2260 | = "..\\core\\path.cpp"
        ;   Label: LAB_004f2260
    MOV EAX,0xdf                        ; 004f2265
    PUSH 0x58cc80                       ; 004f226a | = "queuePop - empty queue?!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f226f | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f2275 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f227a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f227f
    JMP 0x004f214d                      ; 004f2282
        ;   XREF to: 004f214d (UNCONDITIONAL_JUMP)  ; LAB_004f214d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2287
        ;   Label: LAB_004f2287
    CMP EAX,dword ptr [0x01e31620]      ; 004f228b | DAT_01e31620
    JNZ 0x004f2212                      ; 004f2291
        ;   XREF to: 004f2212 (CONDITIONAL_JUMP)  ; LAB_004f2212
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f2297
        ;   Label: LAB_004f2297
    CMP EAX,0x63                        ; 004f229b
    JGE 0x004f2330                      ; 004f229e
        ;   XREF to: 004f2330 (CONDITIONAL_JUMP)  ; LAB_004f2330
    INC EAX                             ; 004f22a4
    IMUL EAX,EAX,0x64                   ; 004f22a5
    ADD EAX,dword ptr [ESP + 0x8]       ; 004f22a8
    CMP byte ptr [EAX + 0x1e40098],0x0  ; 004f22ac
    JNZ 0x004f2330                      ; 004f22b3
        ;   XREF to: 004f2330 (CONDITIONAL_JUMP)  ; LAB_004f2330
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f22b9
    MOV EAX,EBP                         ; 004f22bd
    SUB EAX,EDX                         ; 004f22bf
    CDQ                                 ; 004f22c1
    XOR EAX,EDX                         ; 004f22c2
    SUB EAX,EDX                         ; 004f22c4
    CMP EAX,dword ptr [0x01e312f4]      ; 004f22c6 | DAT_01e312f4
    JGE 0x004f2330                      ; 004f22cc
        ;   XREF to: 004f2330 (CONDITIONAL_JUMP)  ; LAB_004f2330
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f22ce
    INC EAX                             ; 004f22d2
    MOV dword ptr [ESP + 0x14],EAX      ; 004f22d3
    IMUL EAX,EAX,0x64                   ; 004f22d7
    ADD EAX,dword ptr [ESP + 0x8]       ; 004f22da
    MOV EDX,0x1                         ; 004f22de
    MOV EBX,dword ptr [0x01e40090]      ; 004f22e3 | DAT_01e40090
    MOV byte ptr [EAX + 0x1e40098],DL   ; 004f22e9
    IMUL EDX,EBX,0xc                    ; 004f22ef
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f22f2
    MOV dword ptr [EDX + 0x1e3162c],EAX ; 004f22f6 | DAT_01e31638
    INC EBX                             ; 004f22fc
    MOV dword ptr [EDX + 0x1e31630],EBP ; 004f22fd | DAT_01e3163c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f2303
    MOV EBP,dword ptr [0x01e4280c]      ; 004f2307 | DAT_01e4280c
    MOV dword ptr [0x01e40090],EBX      ; 004f230d | DAT_01e40090
    INC EBP                             ; 004f2313
    MOV dword ptr [EDX + 0x1e31634],EAX ; 004f2314 | DAT_01e31640
    MOV dword ptr [0x01e4280c],EBP      ; 004f231a | DAT_01e4280c
    CMP EBX,0x1388                      ; 004f2320
    JL 0x004f2330                       ; 004f2326
        ;   XREF to: 004f2330 (CONDITIONAL_JUMP)  ; LAB_004f2330
    XOR EBX,EBX                         ; 004f2328
    MOV dword ptr [0x01e40090],EBX      ; 004f232a | DAT_01e40090
    CMP dword ptr [ESP + 0x8],0x63      ; 004f2330
        ;   Label: LAB_004f2330
    JGE 0x004f23b7                      ; 004f2335
        ;   XREF to: 004f23b7 (CONDITIONAL_JUMP)  ; LAB_004f23b7
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 004f233b
    ADD EAX,dword ptr [ESP + 0x8]       ; 004f2340
    CMP byte ptr [EAX + 0x1e40099],0x0  ; 004f2344
    JNZ 0x004f23b7                      ; 004f234b
        ;   XREF to: 004f23b7 (CONDITIONAL_JUMP)  ; LAB_004f23b7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f234d
    MOV EAX,EDI                         ; 004f2351
    SUB EAX,EDX                         ; 004f2353
    CDQ                                 ; 004f2355
    XOR EAX,EDX                         ; 004f2356
    SUB EAX,EDX                         ; 004f2358
    CMP EAX,dword ptr [0x01e312f4]      ; 004f235a | DAT_01e312f4
    JGE 0x004f23b7                      ; 004f2360
        ;   XREF to: 004f23b7 (CONDITIONAL_JUMP)  ; LAB_004f23b7
    MOV EBP,dword ptr [ESP + 0x10]      ; 004f2362
    IMUL EBX,EBP,0x64                   ; 004f2366
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f2369
    MOV EDX,0x3                         ; 004f236d
    MOV byte ptr [EBX + EAX*0x1 + 0x1e40099],DL ; 004f2372
    MOV EBX,dword ptr [0x01e40090]      ; 004f2379 | DAT_01e40090
    IMUL EDX,EBX,0xc                    ; 004f237f
    INC EAX                             ; 004f2382
    MOV dword ptr [EDX + 0x1e3162c],EAX ; 004f2383 | DAT_01e31644
    INC EBX                             ; 004f2389
    MOV dword ptr [EDX + 0x1e31630],EDI ; 004f238a | DAT_01e31648
    MOV EAX,[0x01e4280c]                ; 004f2390 | DAT_01e4280c
    MOV dword ptr [EDX + 0x1e31634],EBP ; 004f2395 | DAT_01e3164c
    INC EAX                             ; 004f239b
    MOV dword ptr [0x01e40090],EBX      ; 004f239c | DAT_01e40090
    MOV [0x01e4280c],EAX                ; 004f23a2 | DAT_01e4280c
    CMP EBX,0x1388                      ; 004f23a7
    JL 0x004f23b7                       ; 004f23ad
        ;   XREF to: 004f23b7 (CONDITIONAL_JUMP)  ; LAB_004f23b7
    XOR EBX,EBX                         ; 004f23af
    MOV dword ptr [0x01e40090],EBX      ; 004f23b1 | DAT_01e40090
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f23b7
        ;   Label: LAB_004f23b7
    TEST EDX,EDX                        ; 004f23bb
    JLE 0x004f2445                      ; 004f23bd
        ;   XREF to: 004f2445 (CONDITIONAL_JUMP)  ; LAB_004f2445
    LEA EAX,[EDX + -0x1]                ; 004f23c3
    IMUL EAX,EAX,0x64                   ; 004f23c6
    ADD EAX,dword ptr [ESP + 0x8]       ; 004f23c9
    CMP byte ptr [EAX + 0x1e40098],0x0  ; 004f23cd
    JNZ 0x004f2445                      ; 004f23d4
        ;   XREF to: 004f2445 (CONDITIONAL_JUMP)  ; LAB_004f2445
    MOV EBP,dword ptr [ESP + 0xc]       ; 004f23d6
    MOV EAX,ESI                         ; 004f23da
    SUB EAX,EBP                         ; 004f23dc
    CDQ                                 ; 004f23de
    XOR EAX,EDX                         ; 004f23df
    SUB EAX,EDX                         ; 004f23e1
    CMP EAX,dword ptr [0x01e312f4]      ; 004f23e3 | DAT_01e312f4
    JGE 0x004f2445                      ; 004f23e9
        ;   XREF to: 004f2445 (CONDITIONAL_JUMP)  ; LAB_004f2445
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f23eb
    DEC EDI                             ; 004f23ef
    IMUL EDX,EDI,0x64                   ; 004f23f0
    ADD EDX,dword ptr [ESP + 0x8]       ; 004f23f3
    MOV EAX,0x2                         ; 004f23f7
    MOV EBX,dword ptr [0x01e40090]      ; 004f23fc | DAT_01e40090
    MOV byte ptr [EDX + 0x1e40098],AL   ; 004f2402
    IMUL EDX,EBX,0xc                    ; 004f2408
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f240b
    MOV dword ptr [EDX + 0x1e3162c],EAX ; 004f240f | DAT_01e31650
    INC EBX                             ; 004f2415
    MOV dword ptr [EDX + 0x1e31630],ESI ; 004f2416 | DAT_01e31654
    MOV ESI,dword ptr [0x01e4280c]      ; 004f241c | DAT_01e4280c
    MOV dword ptr [EDX + 0x1e31634],EDI ; 004f2422 | DAT_01e31658
    INC ESI                             ; 004f2428
    MOV dword ptr [0x01e40090],EBX      ; 004f2429 | DAT_01e40090
    MOV dword ptr [0x01e4280c],ESI      ; 004f242f | DAT_01e4280c
    CMP EBX,0x1388                      ; 004f2435
    JL 0x004f2445                       ; 004f243b
        ;   XREF to: 004f2445 (CONDITIONAL_JUMP)  ; LAB_004f2445
    XOR EBX,EBX                         ; 004f243d
    MOV dword ptr [0x01e40090],EBX      ; 004f243f | DAT_01e40090
    MOV EDI,dword ptr [ESP + 0x8]       ; 004f2445
        ;   Label: LAB_004f2445
    TEST EDI,EDI                        ; 004f2449
    JLE 0x004f2236                      ; 004f244b
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    IMUL EAX,dword ptr [ESP + 0x10],0x64 ; 004f2451
    ADD EAX,EDI                         ; 004f2456
    CMP byte ptr [EAX + 0x1e40097],0x0  ; 004f2458
    JNZ 0x004f2236                      ; 004f245f
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f2465
    MOV EAX,ECX                         ; 004f2469
    SUB EAX,ESI                         ; 004f246b
    CDQ                                 ; 004f246d
    XOR EAX,EDX                         ; 004f246e
    SUB EAX,EDX                         ; 004f2470
    CMP EAX,dword ptr [0x01e312f4]      ; 004f2472 | DAT_01e312f4
    JGE 0x004f2236                      ; 004f2478
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    IMUL EDX,dword ptr [ESP + 0x10],0x64 ; 004f247e
    MOV dword ptr [ESP],0x4             ; 004f2483
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f248a
    MOV BL,byte ptr [ESP]               ; 004f248e
    MOV byte ptr [EDX + EAX*0x1 + 0x1e40097],BL ; 004f2491
    MOV EBX,dword ptr [0x01e40090]      ; 004f2498 | DAT_01e40090
    IMUL EDX,EBX,0xc                    ; 004f249e
    MOV ESI,dword ptr [0x01e4280c]      ; 004f24a1 | DAT_01e4280c
    INC ESI                             ; 004f24a7
    DEC EAX                             ; 004f24a8
    MOV dword ptr [0x01e4280c],ESI      ; 004f24a9 | DAT_01e4280c
    MOV dword ptr [EDX + 0x1e3162c],EAX ; 004f24af | DAT_01e3165c
    INC EBX                             ; 004f24b5
    MOV dword ptr [EDX + 0x1e31630],ECX ; 004f24b6 | DAT_01e31660
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f24bc
    MOV dword ptr [0x01e40090],EBX      ; 004f24c0 | DAT_01e40090
    MOV dword ptr [EDX + 0x1e31634],EAX ; 004f24c6 | DAT_01e31664
    CMP EBX,0x1388                      ; 004f24cc
    JL 0x004f2236                       ; 004f24d2
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    XOR EBX,EBX                         ; 004f24d8
    MOV dword ptr [0x01e40090],EBX      ; 004f24da | DAT_01e40090
    JMP 0x004f2236                      ; 004f24e0
        ;   XREF to: 004f2236 (UNCONDITIONAL_JUMP)  ; LAB_004f2236
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f24e5
        ;   Label: LAB_004f24e5
    CMP EAX,dword ptr [0x01e31628]      ; 004f24e9 | DAT_01e31628
    JNZ 0x004f2222                      ; 004f24ef
        ;   XREF to: 004f2222 (CONDITIONAL_JUMP)  ; LAB_004f2222
    JMP 0x004f2297                      ; 004f24f5
        ;   XREF to: 004f2297 (UNCONDITIONAL_JUMP)  ; LAB_004f2297
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f24fa
        ;   Label: LAB_004f24fa
    SUB EAX,ESI                         ; 004f24fe
    CMP EAX,EDX                         ; 004f2500
    JGE 0x004f2236                      ; 004f2502
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2508
    SUB EAX,EDI                         ; 004f250c
    CMP EAX,EDX                         ; 004f250e
    JGE 0x004f2236                      ; 004f2510
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f2516
    SUB EAX,ECX                         ; 004f251a
    CMP EAX,EDX                         ; 004f251c
    JGE 0x004f2236                      ; 004f251e
        ;   XREF to: 004f2236 (CONDITIONAL_JUMP)  ; LAB_004f2236
    JMP 0x004f2297                      ; 004f2524
        ;   XREF to: 004f2297 (UNCONDITIONAL_JUMP)  ; LAB_004f2297

