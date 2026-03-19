; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c962
;
; Referenced Globals:
;   float FLOAT_00630b0a = 65535
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   int g_InventoryWidth = 0xd0
;   int g_InventoryHeight = 0x60
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.letterbox_mode
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;   int g_InventoryScreenHeight
;
; Called Functions:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
;   core_inv.cpp_drawItemIconBackground_FUN_005001e0
;   core_inv.cpp_drawWeaponIconBackground_FUN_00500050
;   core_inv.cpp_loadAssets_FUN_004fd220
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500370
        ;   Label: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
    PUSH ESI                            ; 00500371
    PUSH EDI                            ; 00500372
    PUSH EBP                            ; 00500373
    SUB ESP,0x2c                        ; 00500374
    MOV EBX,dword ptr [ESP + 0x40]      ; 00500377
    MOV EAX,[0x0067b654]                ; 0050037b | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 00500380 | g_CGameInstance.letterbox_mode
    JNZ 0x005005e9                      ; 00500387
        ;   XREF to: 005005e9 (CONDITIONAL_JUMP)  ; LAB_005005e9
    MOV EDX,dword ptr [0x02db87d0]      ; 0050038d | g_LocalHeroIndex
    MOV EAX,dword ptr [EBX + 0x4]       ; 00500393
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 00500396 | g_HeroActors
    JNZ 0x005005e9                      ; 0050039d
        ;   XREF to: 005005e9 (CONDITIONAL_JUMP)  ; LAB_005005e9
    MOV ESI,dword ptr [0x00679398]      ; 005003a3 | g_WindowHeight
    CMP ESI,dword ptr [0x02dcd790]      ; 005003a9 | g_InventoryScreenHeight
    JNZ 0x005005f1                      ; 005003af
        ;   XREF to: 005005f1 (CONDITIONAL_JUMP)  ; LAB_005005f1
    CMP dword ptr [EBX + 0x330],0x0     ; 005003b5
        ;   Label: LAB_005003b5
    JZ 0x005004d1                       ; 005003bc
        ;   XREF to: 005004d1 (CONDITIONAL_JUMP)  ; LAB_005004d1
    FLD float ptr [EBX + 0x338]         ; 005003c2
    FLDZ                                ; 005003c8
    FCOMPP                              ; 005003ca
    FNSTSW AX                           ; 005003cc
    SAHF                                ; 005003ce
    JNC 0x005004d1                      ; 005003cf
        ;   XREF to: 005004d1 (CONDITIONAL_JUMP)  ; LAB_005004d1
    MOV EAX,0x8                         ; 005003d5
    MOV EDI,0x50                        ; 005003da
    MOV ESI,dword ptr [0x0067ce40]      ; 005003df | g_InventoryWidth
    MOV EBP,dword ptr [0x00679398]      ; 005003e5 | g_WindowHeight
    MOV ECX,dword ptr [0x0067ce44]      ; 005003eb | g_InventoryHeight
    CMP EBP,0x180                       ; 005003f1
    JGE 0x00500406                      ; 005003f7
        ;   XREF to: 00500406 (CONDITIONAL_JUMP)  ; LAB_00500406
    CMP dword ptr [EBX + 0x44c],0x0     ; 005003f9
    JZ 0x005005fb                       ; 00500400
        ;   XREF to: 005005fb (CONDITIONAL_JUMP)  ; LAB_005005fb
    MOV EDX,dword ptr [0x00679394]      ; 00500406 | g_WindowWidth
        ;   Label: LAB_00500406
    SUB EDX,EDI                         ; 0050040c
    SUB EDX,EAX                         ; 0050040e
    FLD float ptr [EBX + 0x338]         ; 00500410
    MOV dword ptr [ESP],EDX             ; 00500416
    MOV EDX,dword ptr [0x00679398]      ; 00500419 | g_WindowHeight
    MOV EBP,0xffff                      ; 0050041f
    SUB EDX,EDI                         ; 00500424
    FLD1                                ; 00500426
    SUB EDX,EAX                         ; 00500428
    MOV dword ptr [ESP + 0x20],EBP      ; 0050042a
    MOV dword ptr [ESP + 0xc],EDX       ; 0050042e
    FCOMPP                              ; 00500432
    FNSTSW AX                           ; 00500434
    SAHF                                ; 00500436
    JBE 0x0050044e                      ; 00500437
        ;   XREF to: 0050044e (CONDITIONAL_JUMP)  ; LAB_0050044e
    FLD float ptr [EBX + 0x338]         ; 00500439
    FMUL float ptr [0x00630b0a]         ; 0050043f | FLOAT_00630b0a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500445
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x20]        ; 0050044a
    MOV EAX,[0x00679394]                ; 0050044e | g_WindowWidth
        ;   Label: LAB_0050044e
    DEC EAX                             ; 00500453
    MOV dword ptr [ESP + 0x10],EAX      ; 00500454
    MOV EAX,[0x00679398]                ; 00500458 | g_WindowHeight
    DEC EAX                             ; 0050045d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050045e
    MOV dword ptr [ESP + 0x14],EAX      ; 00500462
    MOV EAX,0x3                         ; 00500466
    ADD EDX,EDX                         ; 0050046b
    MOV dword ptr [ESP + 0x28],EAX      ; 0050046d
    MOV EAX,EDX                         ; 00500471
    SAR EDX,0x1f                        ; 00500473
    IDIV dword ptr [ESP + 0x28]         ; 00500476
    MOV EBP,dword ptr [0x00679398]      ; 0050047a | g_WindowHeight
    MOV EDX,dword ptr [EBX + 0x44c]     ; 00500480
    SUB EBP,ECX                         ; 00500486
    TEST EDX,EDX                        ; 00500488
    JZ 0x00500624                       ; 0050048a
        ;   XREF to: 00500624 (CONDITIONAL_JUMP)  ; LAB_00500624
    PUSH EAX                            ; 00500490
    MOV EDX,dword ptr [ESP + 0x18]      ; 00500491
    PUSH EDX                            ; 00500495
    MOV ECX,dword ptr [ESP + 0x18]      ; 00500496
    PUSH ECX                            ; 0050049a
    MOV EAX,[0x00679394]                ; 0050049b | g_WindowWidth
    PUSH EBP                            ; 005004a0
    SUB EAX,ESI                         ; 005004a1
    PUSH EAX                            ; 005004a3
    CALL core_inv.cpp_drawItemIconBackground_FUN_005001e0 ; 005004a4
        ;   XREF to: 005001e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 005004a9
        ;   Label: LAB_005004a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 005004ac
    PUSH ESI                            ; 005004b0
    PUSH 0x3fc90fdb                     ; 005004b1
    PUSH EDI                            ; 005004b6
    MOV EDI,dword ptr [ESP + 0x18]      ; 005004b7
    PUSH EDI                            ; 005004bb
    MOV EBP,dword ptr [ESP + 0x10]      ; 005004bc
    PUSH EBP                            ; 005004c0
    MOV EAX,dword ptr [EBX + 0x330]     ; 005004c1
    PUSH EAX                            ; 005004c7
    PUSH EBX                            ; 005004c8
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 ; 005004c9
        ;   XREF to: 004fee00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004fee00(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 005004ce
    CMP dword ptr [EBX + 0x334],0x0     ; 005004d1
        ;   Label: LAB_005004d1
    JZ 0x005005e9                       ; 005004d8
        ;   XREF to: 005005e9 (CONDITIONAL_JUMP)  ; LAB_005005e9
    FLD float ptr [EBX + 0x33c]         ; 005004de
    FLDZ                                ; 005004e4
    FCOMPP                              ; 005004e6
    FNSTSW AX                           ; 005004e8
    SAHF                                ; 005004ea
    JNC 0x005005e9                      ; 005004eb
        ;   XREF to: 005005e9 (CONDITIONAL_JUMP)  ; LAB_005005e9
    MOV EDX,0x10                        ; 005004f1
    MOV EDI,0x40                        ; 005004f6
    MOV ESI,dword ptr [0x0067ce40]      ; 005004fb | g_InventoryWidth
    MOV EBP,dword ptr [0x00679398]      ; 00500501 | g_WindowHeight
    MOV ECX,dword ptr [0x0067ce44]      ; 00500507 | g_InventoryHeight
    CMP EBP,0x180                       ; 0050050d
    JGE 0x00500522                      ; 00500513
        ;   XREF to: 00500522 (CONDITIONAL_JUMP)  ; LAB_00500522
    CMP dword ptr [EBX + 0x44c],0x0     ; 00500515
    JZ 0x00500642                       ; 0050051c
        ;   XREF to: 00500642 (CONDITIONAL_JUMP)  ; LAB_00500642
    MOV EAX,[0x00679394]                ; 00500522 | g_WindowWidth
        ;   Label: LAB_00500522
    SUB EAX,EDI                         ; 00500527
    SUB EAX,EDX                         ; 00500529
    MOV dword ptr [ESP + 0x8],EAX       ; 0050052b
    MOV EAX,[0x00679398]                ; 0050052f | g_WindowHeight
    FLD float ptr [EBX + 0x33c]         ; 00500534
    SUB EAX,EDI                         ; 0050053a
    FLD1                                ; 0050053c
    SUB EAX,EDX                         ; 0050053e
    MOV EDX,0xffff                      ; 00500540
    MOV dword ptr [ESP + 0x4],EAX       ; 00500545
    MOV dword ptr [ESP + 0x24],EDX      ; 00500549
    FCOMPP                              ; 0050054d
    FNSTSW AX                           ; 0050054f
    SAHF                                ; 00500551
    JBE 0x00500569                      ; 00500552
        ;   XREF to: 00500569 (CONDITIONAL_JUMP)  ; LAB_00500569
    FLD float ptr [EBX + 0x33c]         ; 00500554
    FMUL float ptr [0x00630b0a]         ; 0050055a | FLOAT_00630b0a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00500560
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x24]        ; 00500565
    MOV EAX,[0x00679394]                ; 00500569 | g_WindowWidth
        ;   Label: LAB_00500569
    DEC EAX                             ; 0050056e
    MOV dword ptr [ESP + 0x18],EAX      ; 0050056f
    MOV EAX,[0x00679398]                ; 00500573 | g_WindowHeight
    DEC EAX                             ; 00500578
    MOV EDX,dword ptr [ESP + 0x24]      ; 00500579
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050057d
    MOV EAX,0x3                         ; 00500581
    ADD EDX,EDX                         ; 00500586
    MOV dword ptr [ESP + 0x28],EAX      ; 00500588
    MOV EAX,EDX                         ; 0050058c
    SAR EDX,0x1f                        ; 0050058e
    IDIV dword ptr [ESP + 0x28]         ; 00500591
    MOV EBP,dword ptr [0x00679398]      ; 00500595 | g_WindowHeight
    MOV EDX,dword ptr [EBX + 0x44c]     ; 0050059b
    SUB EBP,ECX                         ; 005005a1
    TEST EDX,EDX                        ; 005005a3
    JZ 0x0050066b                       ; 005005a5
        ;   XREF to: 0050066b (CONDITIONAL_JUMP)  ; LAB_0050066b
    PUSH EAX                            ; 005005ab
    MOV EDX,dword ptr [ESP + 0x20]      ; 005005ac
    PUSH EDX                            ; 005005b0
    MOV ECX,dword ptr [ESP + 0x20]      ; 005005b1
    PUSH ECX                            ; 005005b5
    MOV EAX,[0x00679394]                ; 005005b6 | g_WindowWidth
    PUSH EBP                            ; 005005bb
    SUB EAX,ESI                         ; 005005bc
    PUSH EAX                            ; 005005be
    CALL core_inv.cpp_drawItemIconBackground_FUN_005001e0 ; 005005bf
        ;   XREF to: 005001e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_005001e0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 005005c4
        ;   Label: LAB_005005c4
    MOV ESI,dword ptr [ESP + 0x24]      ; 005005c7
    PUSH ESI                            ; 005005cb
    PUSH 0x0                            ; 005005cc
    PUSH EDI                            ; 005005ce
    MOV EDI,dword ptr [ESP + 0x10]      ; 005005cf
    PUSH EDI                            ; 005005d3
    MOV EBP,dword ptr [ESP + 0x18]      ; 005005d4
    PUSH EBP                            ; 005005d8
    MOV EAX,dword ptr [EBX + 0x334]     ; 005005d9
    PUSH EAX                            ; 005005df
    PUSH EBX                            ; 005005e0
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 ; 005005e1
        ;   XREF to: 004fee00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004fee00(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 005005e6
    ADD ESP,0x2c                        ; 005005e9
        ;   Label: LAB_005005e9
    POP EBP                             ; 005005ec
    POP EDI                             ; 005005ed
    POP ESI                             ; 005005ee
    POP EBX                             ; 005005ef
    RET                                 ; 005005f0
    CALL core_inv.cpp_loadAssets_FUN_004fd220 ; 005005f1
        ;   XREF to: 004fd220 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004fd220()
        ;   Label: LAB_005005f1
    JMP 0x005003b5                      ; 005005f6
        ;   XREF to: 005003b5 (UNCONDITIONAL_JUMP)  ; LAB_005003b5
    MOV EDX,ESI                         ; 005005fb
        ;   Label: LAB_005005fb
    MOV EAX,ESI                         ; 005005fd
    SAR EDX,0x1f                        ; 005005ff
    SUB EAX,EDX                         ; 00500602
    SAR EAX,0x1                         ; 00500604
    MOV ESI,EAX                         ; 00500606
    MOV EDX,ECX                         ; 00500608
    MOV EAX,ECX                         ; 0050060a
    SAR EDX,0x1f                        ; 0050060c
    SUB EAX,EDX                         ; 0050060f
    SAR EAX,0x1                         ; 00500611
    MOV EDI,0x28                        ; 00500613
    MOV ECX,EAX                         ; 00500618
    MOV EAX,0x4                         ; 0050061a
    JMP 0x00500406                      ; 0050061f
        ;   XREF to: 00500406 (UNCONDITIONAL_JUMP)  ; LAB_00500406
    PUSH EAX                            ; 00500624
        ;   Label: LAB_00500624
    MOV ESI,dword ptr [ESP + 0x18]      ; 00500625
    PUSH ESI                            ; 00500629
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050062a
    PUSH EAX                            ; 0050062e
    MOV EAX,[0x00679394]                ; 0050062f | g_WindowWidth
    PUSH EBP                            ; 00500634
    SUB EAX,ECX                         ; 00500635
    PUSH EAX                            ; 00500637
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_00500050 ; 00500638
        ;   XREF to: 00500050 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, ...)
    JMP 0x005004a9                      ; 0050063d
        ;   XREF to: 005004a9 (UNCONDITIONAL_JUMP)  ; LAB_005004a9
    MOV EDX,ESI                         ; 00500642
        ;   Label: LAB_00500642
    MOV EAX,ESI                         ; 00500644
    SAR EDX,0x1f                        ; 00500646
    SUB EAX,EDX                         ; 00500649
    SAR EAX,0x1                         ; 0050064b
    MOV ESI,EAX                         ; 0050064d
    MOV EDX,ECX                         ; 0050064f
    MOV EAX,ECX                         ; 00500651
    SAR EDX,0x1f                        ; 00500653
    SUB EAX,EDX                         ; 00500656
    SAR EAX,0x1                         ; 00500658
    MOV EDI,0x20                        ; 0050065a
    MOV EDX,0x8                         ; 0050065f
    MOV ECX,EAX                         ; 00500664
    JMP 0x00500522                      ; 00500666
        ;   XREF to: 00500522 (UNCONDITIONAL_JUMP)  ; LAB_00500522
    PUSH EAX                            ; 0050066b
        ;   Label: LAB_0050066b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050066c
    PUSH ESI                            ; 00500670
    MOV EAX,dword ptr [ESP + 0x20]      ; 00500671
    PUSH EAX                            ; 00500675
    MOV EAX,[0x00679394]                ; 00500676 | g_WindowWidth
    PUSH EBP                            ; 0050067b
    SUB EAX,ECX                         ; 0050067c
    PUSH EAX                            ; 0050067e
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_00500050 ; 0050067f
        ;   XREF to: 00500050 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawWeaponIconBackground_FUN_00500050(int x1, int y1, int x2, int y2, ...)
    JMP 0x005005c4                      ; 00500684
        ;   XREF to: 005005c4 (UNCONDITIONAL_JUMP)  ; LAB_005005c4

