; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_00509a80 at 0050a23c
;
; Referenced Globals:
;   float FLOAT_00587469 = 65535
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   int INT_005bab60 = 0xd0
;   int INT_005bab64 = 0x60
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.letterbox_mode
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc30a0
;
; Called Functions:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
;   core_inv.cpp_drawItemIconBackground_FUN_004c1f90
;   core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0
;   core_inv.cpp_loadAssets_FUN_004befa0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2150
        ;   Label: core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150
    PUSH ESI                            ; 004c2151
    PUSH EDI                            ; 004c2152
    PUSH EBP                            ; 004c2153
    SUB ESP,0x2c                        ; 004c2154
    MOV EBX,dword ptr [ESP + 0x40]      ; 004c2157
    MOV EAX,[0x005b9354]                ; 004c215b | g_CGame_PTR_005b9354 | g_CGame_01c775ec
    CMP dword ptr [EAX + 0x228],0x0     ; 004c2160 | g_CGame_01c775ec.letterbox_mode
    JNZ 0x004c23c9                      ; 004c2167
        ;   XREF to: 004c23c9 (CONDITIONAL_JUMP)  ; LAB_004c23c9
    MOV EDX,dword ptr [0x01cae0e8]      ; 004c216d | DAT_01cae0e8
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c2173
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 004c2176
    JNZ 0x004c23c9                      ; 004c217d
        ;   XREF to: 004c23c9 (CONDITIONAL_JUMP)  ; LAB_004c23c9
    MOV ESI,dword ptr [0x005b7620]      ; 004c2183 | g_WindowHeight
    CMP ESI,dword ptr [0x01cc30a0]      ; 004c2189 | DAT_01cc30a0
    JNZ 0x004c23d1                      ; 004c218f
        ;   XREF to: 004c23d1 (CONDITIONAL_JUMP)  ; LAB_004c23d1
    CMP dword ptr [EBX + 0x330],0x0     ; 004c2195
        ;   Label: LAB_004c2195
    JZ 0x004c22b1                       ; 004c219c
        ;   XREF to: 004c22b1 (CONDITIONAL_JUMP)  ; LAB_004c22b1
    FLD float ptr [EBX + 0x338]         ; 004c21a2
    FLDZ                                ; 004c21a8
    FCOMPP                              ; 004c21aa
    FNSTSW AX                           ; 004c21ac
    SAHF                                ; 004c21ae
    JNC 0x004c22b1                      ; 004c21af
        ;   XREF to: 004c22b1 (CONDITIONAL_JUMP)  ; LAB_004c22b1
    MOV EAX,0x8                         ; 004c21b5
    MOV EDI,0x50                        ; 004c21ba
    MOV ESI,dword ptr [0x005bab60]      ; 004c21bf | INT_005bab60
    MOV EBP,dword ptr [0x005b7620]      ; 004c21c5 | g_WindowHeight
    MOV ECX,dword ptr [0x005bab64]      ; 004c21cb | INT_005bab64
    CMP EBP,0x180                       ; 004c21d1
    JGE 0x004c21e6                      ; 004c21d7
        ;   XREF to: 004c21e6 (CONDITIONAL_JUMP)  ; LAB_004c21e6
    CMP dword ptr [EBX + 0x44c],0x0     ; 004c21d9
    JZ 0x004c23db                       ; 004c21e0
        ;   XREF to: 004c23db (CONDITIONAL_JUMP)  ; LAB_004c23db
    MOV EDX,dword ptr [0x005b761c]      ; 004c21e6 | g_WindowWidth
        ;   Label: LAB_004c21e6
    SUB EDX,EDI                         ; 004c21ec
    SUB EDX,EAX                         ; 004c21ee
    FLD float ptr [EBX + 0x338]         ; 004c21f0
    MOV dword ptr [ESP],EDX             ; 004c21f6
    MOV EDX,dword ptr [0x005b7620]      ; 004c21f9 | g_WindowHeight
    MOV EBP,0xffff                      ; 004c21ff
    SUB EDX,EDI                         ; 004c2204
    FLD1                                ; 004c2206
    SUB EDX,EAX                         ; 004c2208
    MOV dword ptr [ESP + 0x20],EBP      ; 004c220a
    MOV dword ptr [ESP + 0xc],EDX       ; 004c220e
    FCOMPP                              ; 004c2212
    FNSTSW AX                           ; 004c2214
    SAHF                                ; 004c2216
    JBE 0x004c222e                      ; 004c2217
        ;   XREF to: 004c222e (CONDITIONAL_JUMP)  ; LAB_004c222e
    FLD float ptr [EBX + 0x338]         ; 004c2219
    FMUL float ptr [0x00587469]         ; 004c221f | FLOAT_00587469
    CALL crt_math.c_round_FUN_00563a30  ; 004c2225
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x20]        ; 004c222a
    MOV EAX,[0x005b761c]                ; 004c222e | g_WindowWidth
        ;   Label: LAB_004c222e
    DEC EAX                             ; 004c2233
    MOV dword ptr [ESP + 0x10],EAX      ; 004c2234
    MOV EAX,[0x005b7620]                ; 004c2238 | g_WindowHeight
    DEC EAX                             ; 004c223d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c223e
    MOV dword ptr [ESP + 0x14],EAX      ; 004c2242
    MOV EAX,0x3                         ; 004c2246
    ADD EDX,EDX                         ; 004c224b
    MOV dword ptr [ESP + 0x28],EAX      ; 004c224d
    MOV EAX,EDX                         ; 004c2251
    SAR EDX,0x1f                        ; 004c2253
    IDIV dword ptr [ESP + 0x28]         ; 004c2256
    MOV EBP,dword ptr [0x005b7620]      ; 004c225a | g_WindowHeight
    MOV EDX,dword ptr [EBX + 0x44c]     ; 004c2260
    SUB EBP,ECX                         ; 004c2266
    TEST EDX,EDX                        ; 004c2268
    JZ 0x004c2404                       ; 004c226a
        ;   XREF to: 004c2404 (CONDITIONAL_JUMP)  ; LAB_004c2404
    PUSH EAX                            ; 004c2270
    MOV EDX,dword ptr [ESP + 0x18]      ; 004c2271
    PUSH EDX                            ; 004c2275
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c2276
    PUSH ECX                            ; 004c227a
    MOV EAX,[0x005b761c]                ; 004c227b | g_WindowWidth
    PUSH EBP                            ; 004c2280
    SUB EAX,ESI                         ; 004c2281
    PUSH EAX                            ; 004c2283
    CALL core_inv.cpp_drawItemIconBackground_FUN_004c1f90 ; 004c2284
        ;   XREF to: 004c1f90 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004c1f90(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004c2289
        ;   Label: LAB_004c2289
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c228c
    PUSH ESI                            ; 004c2290
    PUSH 0x3fc90fdb                     ; 004c2291
    PUSH EDI                            ; 004c2296
    MOV EDI,dword ptr [ESP + 0x18]      ; 004c2297
    PUSH EDI                            ; 004c229b
    MOV EBP,dword ptr [ESP + 0x10]      ; 004c229c
    PUSH EBP                            ; 004c22a0
    MOV EAX,dword ptr [EBX + 0x330]     ; 004c22a1
    PUSH EAX                            ; 004c22a7
    PUSH EBX                            ; 004c22a8
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 ; 004c22a9
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004c22ae
    CMP dword ptr [EBX + 0x334],0x0     ; 004c22b1
        ;   Label: LAB_004c22b1
    JZ 0x004c23c9                       ; 004c22b8
        ;   XREF to: 004c23c9 (CONDITIONAL_JUMP)  ; LAB_004c23c9
    FLD float ptr [EBX + 0x33c]         ; 004c22be
    FLDZ                                ; 004c22c4
    FCOMPP                              ; 004c22c6
    FNSTSW AX                           ; 004c22c8
    SAHF                                ; 004c22ca
    JNC 0x004c23c9                      ; 004c22cb
        ;   XREF to: 004c23c9 (CONDITIONAL_JUMP)  ; LAB_004c23c9
    MOV EDX,0x10                        ; 004c22d1
    MOV EDI,0x40                        ; 004c22d6
    MOV ESI,dword ptr [0x005bab60]      ; 004c22db | INT_005bab60
    MOV EBP,dword ptr [0x005b7620]      ; 004c22e1 | g_WindowHeight
    MOV ECX,dword ptr [0x005bab64]      ; 004c22e7 | INT_005bab64
    CMP EBP,0x180                       ; 004c22ed
    JGE 0x004c2302                      ; 004c22f3
        ;   XREF to: 004c2302 (CONDITIONAL_JUMP)  ; LAB_004c2302
    CMP dword ptr [EBX + 0x44c],0x0     ; 004c22f5
    JZ 0x004c2422                       ; 004c22fc
        ;   XREF to: 004c2422 (CONDITIONAL_JUMP)  ; LAB_004c2422
    MOV EAX,[0x005b761c]                ; 004c2302 | g_WindowWidth
        ;   Label: LAB_004c2302
    SUB EAX,EDI                         ; 004c2307
    SUB EAX,EDX                         ; 004c2309
    MOV dword ptr [ESP + 0x8],EAX       ; 004c230b
    MOV EAX,[0x005b7620]                ; 004c230f | g_WindowHeight
    FLD float ptr [EBX + 0x33c]         ; 004c2314
    SUB EAX,EDI                         ; 004c231a
    FLD1                                ; 004c231c
    SUB EAX,EDX                         ; 004c231e
    MOV EDX,0xffff                      ; 004c2320
    MOV dword ptr [ESP + 0x4],EAX       ; 004c2325
    MOV dword ptr [ESP + 0x24],EDX      ; 004c2329
    FCOMPP                              ; 004c232d
    FNSTSW AX                           ; 004c232f
    SAHF                                ; 004c2331
    JBE 0x004c2349                      ; 004c2332
        ;   XREF to: 004c2349 (CONDITIONAL_JUMP)  ; LAB_004c2349
    FLD float ptr [EBX + 0x33c]         ; 004c2334
    FMUL float ptr [0x00587469]         ; 004c233a | FLOAT_00587469
    CALL crt_math.c_round_FUN_00563a30  ; 004c2340
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x24]        ; 004c2345
    MOV EAX,[0x005b761c]                ; 004c2349 | g_WindowWidth
        ;   Label: LAB_004c2349
    DEC EAX                             ; 004c234e
    MOV dword ptr [ESP + 0x18],EAX      ; 004c234f
    MOV EAX,[0x005b7620]                ; 004c2353 | g_WindowHeight
    DEC EAX                             ; 004c2358
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c2359
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c235d
    MOV EAX,0x3                         ; 004c2361
    ADD EDX,EDX                         ; 004c2366
    MOV dword ptr [ESP + 0x28],EAX      ; 004c2368
    MOV EAX,EDX                         ; 004c236c
    SAR EDX,0x1f                        ; 004c236e
    IDIV dword ptr [ESP + 0x28]         ; 004c2371
    MOV EBP,dword ptr [0x005b7620]      ; 004c2375 | g_WindowHeight
    MOV EDX,dword ptr [EBX + 0x44c]     ; 004c237b
    SUB EBP,ECX                         ; 004c2381
    TEST EDX,EDX                        ; 004c2383
    JZ 0x004c244b                       ; 004c2385
        ;   XREF to: 004c244b (CONDITIONAL_JUMP)  ; LAB_004c244b
    PUSH EAX                            ; 004c238b
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c238c
    PUSH EDX                            ; 004c2390
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c2391
    PUSH ECX                            ; 004c2395
    MOV EAX,[0x005b761c]                ; 004c2396 | g_WindowWidth
    PUSH EBP                            ; 004c239b
    SUB EAX,ESI                         ; 004c239c
    PUSH EAX                            ; 004c239e
    CALL core_inv.cpp_drawItemIconBackground_FUN_004c1f90 ; 004c239f
        ;   XREF to: 004c1f90 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004c1f90(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004c23a4
        ;   Label: LAB_004c23a4
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c23a7
    PUSH ESI                            ; 004c23ab
    PUSH 0x0                            ; 004c23ac
    PUSH EDI                            ; 004c23ae
    MOV EDI,dword ptr [ESP + 0x10]      ; 004c23af
    PUSH EDI                            ; 004c23b3
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c23b4
    PUSH EBP                            ; 004c23b8
    MOV EAX,dword ptr [EBX + 0x334]     ; 004c23b9
    PUSH EAX                            ; 004c23bf
    PUSH EBX                            ; 004c23c0
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 ; 004c23c1
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004c23c6
    ADD ESP,0x2c                        ; 004c23c9
        ;   Label: LAB_004c23c9
    POP EBP                             ; 004c23cc
    POP EDI                             ; 004c23cd
    POP ESI                             ; 004c23ce
    POP EBX                             ; 004c23cf
    RET                                 ; 004c23d0
    CALL core_inv.cpp_loadAssets_FUN_004befa0 ; 004c23d1
        ;   XREF to: 004befa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004befa0()
        ;   Label: LAB_004c23d1
    JMP 0x004c2195                      ; 004c23d6
        ;   XREF to: 004c2195 (UNCONDITIONAL_JUMP)  ; LAB_004c2195
    MOV EDX,ESI                         ; 004c23db
        ;   Label: LAB_004c23db
    MOV EAX,ESI                         ; 004c23dd
    SAR EDX,0x1f                        ; 004c23df
    SUB EAX,EDX                         ; 004c23e2
    SAR EAX,0x1                         ; 004c23e4
    MOV ESI,EAX                         ; 004c23e6
    MOV EDX,ECX                         ; 004c23e8
    MOV EAX,ECX                         ; 004c23ea
    SAR EDX,0x1f                        ; 004c23ec
    SUB EAX,EDX                         ; 004c23ef
    SAR EAX,0x1                         ; 004c23f1
    MOV EDI,0x28                        ; 004c23f3
    MOV ECX,EAX                         ; 004c23f8
    MOV EAX,0x4                         ; 004c23fa
    JMP 0x004c21e6                      ; 004c23ff
        ;   XREF to: 004c21e6 (UNCONDITIONAL_JUMP)  ; LAB_004c21e6
    PUSH EAX                            ; 004c2404
        ;   Label: LAB_004c2404
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c2405
    PUSH ESI                            ; 004c2409
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c240a
    PUSH EAX                            ; 004c240e
    MOV EAX,[0x005b761c]                ; 004c240f | g_WindowWidth
    PUSH EBP                            ; 004c2414
    SUB EAX,ECX                         ; 004c2415
    PUSH EAX                            ; 004c2417
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0 ; 004c2418
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0(int x1, int y1, int x2, int y2, ...)
    JMP 0x004c2289                      ; 004c241d
        ;   XREF to: 004c2289 (UNCONDITIONAL_JUMP)  ; LAB_004c2289
    MOV EDX,ESI                         ; 004c2422
        ;   Label: LAB_004c2422
    MOV EAX,ESI                         ; 004c2424
    SAR EDX,0x1f                        ; 004c2426
    SUB EAX,EDX                         ; 004c2429
    SAR EAX,0x1                         ; 004c242b
    MOV ESI,EAX                         ; 004c242d
    MOV EDX,ECX                         ; 004c242f
    MOV EAX,ECX                         ; 004c2431
    SAR EDX,0x1f                        ; 004c2433
    SUB EAX,EDX                         ; 004c2436
    SAR EAX,0x1                         ; 004c2438
    MOV EDI,0x20                        ; 004c243a
    MOV EDX,0x8                         ; 004c243f
    MOV ECX,EAX                         ; 004c2444
    JMP 0x004c2302                      ; 004c2446
        ;   XREF to: 004c2302 (UNCONDITIONAL_JUMP)  ; LAB_004c2302
    PUSH EAX                            ; 004c244b
        ;   Label: LAB_004c244b
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c244c
    PUSH ESI                            ; 004c2450
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c2451
    PUSH EAX                            ; 004c2455
    MOV EAX,[0x005b761c]                ; 004c2456 | g_WindowWidth
    PUSH EBP                            ; 004c245b
    SUB EAX,ECX                         ; 004c245c
    PUSH EAX                            ; 004c245e
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0 ; 004c245f
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0(int x1, int y1, int x2, int y2, ...)
    JMP 0x004c23a4                      ; 004c2464
        ;   XREF to: 004c23a4 (UNCONDITIONAL_JUMP)  ; LAB_004c23a4

