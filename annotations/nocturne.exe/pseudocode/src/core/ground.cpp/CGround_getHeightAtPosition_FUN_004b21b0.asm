; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0(CGround *this_ptr,int world_x,int world_z)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_00549310 at 00549356
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b21b0
        ;   Label: core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
    PUSH ESI                            ; 004b21b1
    PUSH EDI                            ; 004b21b2
    PUSH EBP                            ; 004b21b3
    SUB ESP,0x14                        ; 004b21b4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004b21b7
    MOV ESI,dword ptr [ESP + 0x30]      ; 004b21bb
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004b21bf
    SHL EBX,0x8                         ; 004b21c2
    LEA EAX,[EBX + -0x1]                ; 004b21c5
    MOV EDX,0x10000                     ; 004b21c8
    AND EAX,ESI                         ; 004b21cd
    IMUL EDX                            ; 004b21cf
    IDIV EBX                            ; 004b21d1
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004b21d3
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004b21d6
    SHL EBX,0x8                         ; 004b21da
    MOV EDI,EAX                         ; 004b21dd
    LEA EAX,[EBX + -0x1]                ; 004b21df
    AND EAX,EDX                         ; 004b21e2
    MOV EDX,0x10000                     ; 004b21e4
    IMUL EDX                            ; 004b21e9
    IDIV EBX                            ; 004b21eb
    MOV EBX,EAX                         ; 004b21ed
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004b21ef
    XOR EDX,EDX                         ; 004b21f2
    SHL EBP,0x8                         ; 004b21f4
    MOV EAX,ESI                         ; 004b21f7
    DIV EBP                             ; 004b21f9
    MOV ESI,dword ptr [ECX + 0x8]       ; 004b21fb
    AND ESI,EAX                         ; 004b21fe
    XOR EDX,EDX                         ; 004b2200
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b2202
    DIV EBP                             ; 004b2206
    MOV EDX,ESI                         ; 004b2208
    MOV EBP,dword ptr [ECX + 0xc]       ; 004b220a
    AND EDX,0x1                         ; 004b220d
    AND EAX,EBP                         ; 004b2210
    MOV dword ptr [ESP + 0xc],EDX       ; 004b2212
    MOV EDX,EAX                         ; 004b2216
    AND EDX,0x1                         ; 004b2218
    MOV dword ptr [ESP + 0x8],EDX       ; 004b221b
    LEA EDX,[EAX + 0x1]                 ; 004b221f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004b2222
    MOV dword ptr [ESP + 0x10],EDX      ; 004b2226
    LEA EDX,[ESI + 0x1]                 ; 004b222a
    CMP EBP,dword ptr [ESP + 0x8]       ; 004b222d
    JNZ 0x004b232b                      ; 004b2231
        ;   XREF to: 004b232b (CONDITIONAL_JUMP)  ; LAB_004b232b
    CMP EDI,EBX                         ; 004b2237
    JLE 0x004b22b2                      ; 004b2239
        ;   XREF to: 004b22b2 (CONDITIONAL_JUMP)  ; LAB_004b22b2
    MOV EBP,dword ptr [ECX]             ; 004b223b
    IMUL EBP,EAX                        ; 004b223d
    MOV EAX,dword ptr [ECX + 0x24]      ; 004b2240
    ADD ESI,EBP                         ; 004b2243
    MOV dword ptr [ESP + 0x8],EBP       ; 004b2245
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004b2249
    MOV EBP,dword ptr [ECX + 0x20]      ; 004b224d
    IMUL EBP,ESI                        ; 004b2250
    MOV dword ptr [ESP],EBP             ; 004b2253
    MOV ESI,dword ptr [ECX + 0x8]       ; 004b2256
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b2259
    AND ESI,EDX                         ; 004b225d
    ADD ESI,EBP                         ; 004b225f
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004b2261
    IMUL ESI,dword ptr [ECX + 0x20]     ; 004b2265
    MOV EBP,dword ptr [ESP + 0x10]      ; 004b2269
    AND EBP,dword ptr [ECX + 0xc]       ; 004b226d
    IMUL EBP,dword ptr [ECX]            ; 004b2270
    MOV dword ptr [ESP + 0x8],EBP       ; 004b2273
    AND EDX,dword ptr [ECX + 0xc]       ; 004b2277
    ADD EDX,dword ptr [ESP + 0x8]       ; 004b227a
    MOV ECX,dword ptr [ECX + 0x20]      ; 004b227e
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004b2281
    IMUL ECX,EAX                        ; 004b2285
    MOV EDX,ESI                         ; 004b2288
    MOV EAX,dword ptr [ESP]             ; 004b228a
    SUB ECX,ESI                         ; 004b228d
    SUB EDX,EAX                         ; 004b228f
    MOV EAX,EDI                         ; 004b2291
    MOV ESI,dword ptr [ESP]             ; 004b2293
    IMUL EDX                            ; 004b2296
    SHRD EAX,EDX,0x10                   ; 004b2298
    MOV EDX,ECX                         ; 004b229c
    ADD ESI,EAX                         ; 004b229e
    MOV EAX,EBX                         ; 004b22a0
    IMUL EDX                            ; 004b22a2
    SHRD EAX,EDX,0x10                   ; 004b22a4
    ADD EAX,ESI                         ; 004b22a8
    ADD ESP,0x14                        ; 004b22aa
    POP EBP                             ; 004b22ad
    POP EDI                             ; 004b22ae
    POP ESI                             ; 004b22af
    POP EBX                             ; 004b22b0
    RET                                 ; 004b22b1
    IMUL EAX,dword ptr [ECX]            ; 004b22b2
        ;   Label: LAB_004b22b2
    ADD EAX,ESI                         ; 004b22b5
    MOV EBP,dword ptr [ECX + 0x24]      ; 004b22b7
    SHL EAX,0x2                         ; 004b22ba
    ADD EAX,EBP                         ; 004b22bd
    MOVSX EAX,word ptr [EAX]            ; 004b22bf
    MOV dword ptr [ESP + 0xc],EBP       ; 004b22c2
    MOV EBP,EAX                         ; 004b22c6
    IMUL EBP,dword ptr [ECX + 0x20]     ; 004b22c8
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b22cc
    AND EAX,dword ptr [ECX + 0xc]       ; 004b22d0
    IMUL EAX,dword ptr [ECX]            ; 004b22d3
    MOV dword ptr [ESP + 0x8],EAX       ; 004b22d6
    AND EDX,dword ptr [ECX + 0x8]       ; 004b22da
    ADD EDX,dword ptr [ESP + 0x8]       ; 004b22dd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b22e1
    SHL EDX,0x2                         ; 004b22e5
    ADD EDX,EAX                         ; 004b22e8
    MOVSX EDX,word ptr [EDX]            ; 004b22ea
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004b22ed
    ADD ESI,dword ptr [ESP + 0x8]       ; 004b22f1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004b22f5
    ADD EAX,dword ptr [ESP + 0xc]       ; 004b22fc
    MOV ECX,dword ptr [ECX + 0x20]      ; 004b2300
    MOVSX EAX,word ptr [EAX]            ; 004b2303
    IMUL ECX,EAX                        ; 004b2306
    MOV EAX,EDI                         ; 004b2309
    SUB EDX,ECX                         ; 004b230b
    SUB ECX,EBP                         ; 004b230d
    IMUL EDX                            ; 004b230f
    SHRD EAX,EDX,0x10                   ; 004b2311
    MOV EDX,ECX                         ; 004b2315
    ADD EBP,EAX                         ; 004b2317
    MOV EAX,EBX                         ; 004b2319
    IMUL EDX                            ; 004b231b
    SHRD EAX,EDX,0x10                   ; 004b231d
    ADD EAX,EBP                         ; 004b2321
    ADD ESP,0x14                        ; 004b2323
    POP EBP                             ; 004b2326
    POP EDI                             ; 004b2327
    POP ESI                             ; 004b2328
    POP EBX                             ; 004b2329
    RET                                 ; 004b232a
    MOV EBP,0x10000                     ; 004b232b
        ;   Label: LAB_004b232b
    SUB EBP,EDI                         ; 004b2330
    MOV EDI,EBP                         ; 004b2332
    CMP EBP,EBX                         ; 004b2334
    JLE 0x004b23b2                      ; 004b2336
        ;   XREF to: 004b23b2 (CONDITIONAL_JUMP)  ; LAB_004b23b2
    MOV EBP,dword ptr [ECX]             ; 004b2338
    IMUL EBP,EAX                        ; 004b233a
    MOV dword ptr [ESP + 0xc],EBP       ; 004b233d
    LEA EAX,[ESI + EBP*0x1]             ; 004b2341
    SHL EAX,0x2                         ; 004b2344
    MOV EBP,dword ptr [ECX + 0x24]      ; 004b2347
    ADD EAX,EBP                         ; 004b234a
    MOV dword ptr [ESP + 0x8],EBP       ; 004b234c
    MOVSX EAX,word ptr [EAX]            ; 004b2350
    IMUL EAX,dword ptr [ECX + 0x20]     ; 004b2353
    AND EDX,dword ptr [ECX + 0x8]       ; 004b2357
    ADD EDX,dword ptr [ESP + 0xc]       ; 004b235a
    MOV EBP,dword ptr [ESP + 0x8]       ; 004b235e
    SHL EDX,0x2                         ; 004b2362
    ADD EDX,EBP                         ; 004b2365
    MOVSX EDX,word ptr [EDX]            ; 004b2367
    MOV EBP,dword ptr [ECX + 0x20]      ; 004b236a
    IMUL EBP,EDX                        ; 004b236d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b2370
    AND EDX,dword ptr [ECX + 0xc]       ; 004b2374
    IMUL EDX,dword ptr [ECX]            ; 004b2377
    ADD ESI,EDX                         ; 004b237a
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b237c
    SHL ESI,0x2                         ; 004b2380
    ADD ESI,EDX                         ; 004b2383
    MOV ECX,dword ptr [ECX + 0x20]      ; 004b2385
    MOVSX ESI,word ptr [ESI]            ; 004b2388
    IMUL ECX,ESI                        ; 004b238b
    MOV EDX,EAX                         ; 004b238e
    SUB EDX,EBP                         ; 004b2390
    SUB ECX,EAX                         ; 004b2392
    MOV EAX,EDI                         ; 004b2394
    IMUL EDX                            ; 004b2396
    SHRD EAX,EDX,0x10                   ; 004b2398
    MOV EDX,ECX                         ; 004b239c
    ADD EBP,EAX                         ; 004b239e
    MOV EAX,EBX                         ; 004b23a0
    IMUL EDX                            ; 004b23a2
    SHRD EAX,EDX,0x10                   ; 004b23a4
    ADD EAX,EBP                         ; 004b23a8
    ADD ESP,0x14                        ; 004b23aa
    POP EBP                             ; 004b23ad
    POP EDI                             ; 004b23ae
    POP ESI                             ; 004b23af
    POP EBX                             ; 004b23b0
    RET                                 ; 004b23b1
    MOV EBP,dword ptr [ECX + 0x8]       ; 004b23b2
        ;   Label: LAB_004b23b2
    AND EBP,EDX                         ; 004b23b5
    IMUL EAX,dword ptr [ECX]            ; 004b23b7
    ADD EAX,EBP                         ; 004b23ba
    LEA EDX,[EAX*0x4 + 0x0]             ; 004b23bc
    MOV EAX,dword ptr [ECX + 0x24]      ; 004b23c3
    MOV dword ptr [ESP + 0x8],EBP       ; 004b23c6
    MOV EBP,dword ptr [ECX + 0x20]      ; 004b23ca
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004b23cd
    IMUL EBP,EDX                        ; 004b23d1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b23d4
    MOV dword ptr [ESP + 0x4],EBP       ; 004b23d8
    AND EDX,dword ptr [ECX + 0xc]       ; 004b23dc
    MOV EBP,dword ptr [ECX]             ; 004b23df
    IMUL EBP,EDX                        ; 004b23e1
    MOV dword ptr [ESP + 0xc],EBP       ; 004b23e4
    MOV EDX,EBP                         ; 004b23e8
    ADD EDX,dword ptr [ESP + 0x8]       ; 004b23ea
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004b23ee
    MOV EBP,dword ptr [ECX + 0x20]      ; 004b23f2
    IMUL EBP,EDX                        ; 004b23f5
    ADD ESI,dword ptr [ESP + 0xc]       ; 004b23f8
    MOVSX EAX,word ptr [EAX + ESI*0x4]  ; 004b23fc
    MOV EDX,EAX                         ; 004b2400
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004b2402
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2406
    SUB EDX,EBP                         ; 004b240a
    SUB EBP,EAX                         ; 004b240c
    MOV EAX,EDI                         ; 004b240e
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b2410
    IMUL EDX                            ; 004b2414
    SHRD EAX,EDX,0x10                   ; 004b2416
    MOV EDX,EBP                         ; 004b241a
    ADD ECX,EAX                         ; 004b241c
    MOV EAX,EBX                         ; 004b241e
    IMUL EDX                            ; 004b2420
    SHRD EAX,EDX,0x10                   ; 004b2422
    ADD EAX,ECX                         ; 004b2426
    ADD ESP,0x14                        ; 004b2428
    POP EBP                             ; 004b242b
    POP EDI                             ; 004b242c
    POP ESI                             ; 004b242d
    POP EBX                             ; 004b242e
    RET                                 ; 004b242f

