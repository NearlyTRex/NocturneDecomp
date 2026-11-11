; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 wincore_wddvmem_cpp_FUN_005ac300(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   core_game.cpp_CGame_setGameRes_FUN_004cf430 at 004cf45f
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004cf530 at 004cf55b
;   core_main.c_FUN_005032a0 at 005033a7
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040103d
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005aca40 at 005acb01
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830 at 005ac994
;   wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0 at 005ad3b2
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f9478
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_005f948f
;   TerminatedCString s_wincore_wddvmem_cpp_005f94bb
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_005f94d2
;   TerminatedCString s_wincore_wddvmem_cpp_005f94fa
;   TerminatedCString s_setScreenResolution_Crea_005f9511
;   TerminatedCString s_wincore_wddvmem_cpp_005f9542
;   TerminatedCString s_Clear_of_back_buffer_fai_005f9559
;   TerminatedCString s_wincore_wddvmem_cpp_005f9575
;   TerminatedCString s_Unlock_of_back_buffer_cl_005f958c
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;   ... and 18 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c09f0
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac300
        ;   Label: wincore_wddvmem.cpp_FUN_005ac300
    PUSH ESI                            ; 005ac301
    PUSH EDI                            ; 005ac302
    PUSH EBP                            ; 005ac303
    SUB ESP,0xe0                        ; 005ac304
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005ac30a
    MOV EDX,dword ptr [0x02c9930c]      ; 005ac311 | DAT_02c9930c
    TEST EDX,EDX                        ; 005ac317
    JNZ 0x005ac51f                      ; 005ac319
        ;   XREF to: 005ac51f (CONDITIONAL_JUMP)  ; LAB_005ac51f
    MOV ESI,dword ptr [0x02c99308]      ; 005ac31f | DAT_02c99308
        ;   Label: LAB_005ac31f
    TEST ESI,ESI                        ; 005ac325
    JZ 0x005ac337                       ; 005ac327
        ;   XREF to: 005ac337 (CONDITIONAL_JUMP)  ; LAB_005ac337
    PUSH ESI                            ; 005ac329
    MOV EDX,dword ptr [ESI]             ; 005ac32a
    XOR EDI,EDI                         ; 005ac32c
    CALL dword ptr [EDX + 0x8]          ; 005ac32e
    MOV dword ptr [0x02c99308],EDI      ; 005ac331 | DAT_02c99308
    MOV EBP,dword ptr [0x02c99304]      ; 005ac337 | DAT_02c99304
        ;   Label: LAB_005ac337
    TEST EBP,EBP                        ; 005ac33d
    JZ 0x005ac34f                       ; 005ac33f
        ;   XREF to: 005ac34f (CONDITIONAL_JUMP)  ; LAB_005ac34f
    PUSH EBP                            ; 005ac341
    MOV EDX,dword ptr [EBP]             ; 005ac342
    CALL dword ptr [EDX + 0x8]          ; 005ac345
    XOR EAX,EAX                         ; 005ac348
    MOV [0x02c99304],EAX                ; 005ac34a | DAT_02c99304
    CMP EBX,0x8                         ; 005ac34f
        ;   Label: LAB_005ac34f
    JZ 0x005ac362                       ; 005ac352
        ;   XREF to: 005ac362 (CONDITIONAL_JUMP)  ; LAB_005ac362
    CMP EBX,0x10                        ; 005ac354
    JZ 0x005ac362                       ; 005ac357
        ;   XREF to: 005ac362 (CONDITIONAL_JUMP)  ; LAB_005ac362
    CMP EBX,0x20                        ; 005ac359
    JNZ 0x005ac512                      ; 005ac35c
        ;   XREF to: 005ac512 (CONDITIONAL_JUMP)  ; LAB_005ac512
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ac362
        ;   Label: LAB_005ac362
    MOV EDI,dword ptr [0x00629010]      ; 005ac369 | DAT_00629010
    MOV dword ptr [0x0061b4a0],EBX      ; 005ac36f | DAT_0061b4a0
    MOV dword ptr [0x02c99328],EBX      ; 005ac375 | DAT_02c99328
    XOR EDX,EDX                         ; 005ac37b
    MOV [0x0061b498],EAX                ; 005ac37d | DAT_0061b498
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ac382
    MOV dword ptr [0x02c9932c],EDX      ; 005ac389 | DAT_02c9932c
    MOV [0x0061b49c],EAX                ; 005ac38f | DAT_0061b49c
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ac394
    MOV dword ptr [0x02c99330],EDX      ; 005ac39b | DAT_02c99330
    MOV [0x02c99320],EAX                ; 005ac3a1 | DAT_02c99320
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ac3a6
    MOV dword ptr [0x02c9931c],EDX      ; 005ac3ad | DAT_02c9931c
    MOV [0x02c99324],EAX                ; 005ac3b3 | DAT_02c99324
    TEST EDI,EDI                        ; 005ac3b8
    JZ 0x005ac3cc                       ; 005ac3ba
        ;   XREF to: 005ac3cc (CONDITIONAL_JUMP)  ; LAB_005ac3cc
    PUSH EDI                            ; 005ac3bc
    CALL crt_unknown.c_FUN_005c09f0     ; 005ac3bd
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR EAX,EAX                         ; 005ac3c2
    ADD ESP,0x4                         ; 005ac3c4
    MOV [0x00629010],EAX                ; 005ac3c7 | DAT_00629010
    MOV EDX,dword ptr [0x02c99310]      ; 005ac3cc | DAT_02c99310
        ;   Label: LAB_005ac3cc
    TEST EDX,EDX                        ; 005ac3d2
    JZ 0x005ac3e7                       ; 005ac3d4
        ;   XREF to: 005ac3e7 (CONDITIONAL_JUMP)  ; LAB_005ac3e7
    PUSH EDX                            ; 005ac3d6
    CALL crt_unknown.c_FUN_005c09f0     ; 005ac3d7
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    XOR ESI,ESI                         ; 005ac3dc
    ADD ESP,0x4                         ; 005ac3de
    MOV dword ptr [0x0071362c],ESI      ; 005ac3e1 | DAT_0071362c
    MOV EAX,[0x0061b4a0]                ; 005ac3e7 | DAT_0061b4a0
        ;   Label: LAB_005ac3e7
    MOV EDX,EAX                         ; 005ac3ec
    SAR EDX,0x1f                        ; 005ac3ee
    SHL EDX,0x3                         ; 005ac3f1
    SBB EAX,EDX                         ; 005ac3f4
    SAR EAX,0x3                         ; 005ac3f6
    MOV ECX,dword ptr [0x0061b498]      ; 005ac3f9 | DAT_0061b498
    IMUL ECX,dword ptr [0x0061b49c]     ; 005ac3ff | DAT_0061b49c
    IMUL EAX,ECX                        ; 005ac406
    PUSH EAX                            ; 005ac409
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005ac40a
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ac40f
    MOV [0x00629010],EAX                ; 005ac412 | DAT_00629010
    TEST EAX,EAX                        ; 005ac417
    JNZ 0x005ac43d                      ; 005ac419
        ;   XREF to: 005ac43d (CONDITIONAL_JUMP)  ; LAB_005ac43d
    MOV EBP,0x5f9478                    ; 005ac41b | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0xed                        ; 005ac420
    PUSH 0x5f948f                       ; 005ac425 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x01d1d400],EBP      ; 005ac42a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005ac430 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac435
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac43a
    MOV EAX,[0x0061b498]                ; 005ac43d | DAT_0061b498
        ;   Label: LAB_005ac43d
    IMUL EAX,dword ptr [0x0061b49c]     ; 005ac442 | DAT_0061b49c
    SHL EAX,0x2                         ; 005ac449
    ADD EAX,0x40                        ; 005ac44c
    PUSH EAX                            ; 005ac44f
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005ac450
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005ac455
    MOV [0x02c99310],EAX                ; 005ac458 | DAT_02c99310
    TEST EAX,EAX                        ; 005ac45d
    JNZ 0x005ac484                      ; 005ac45f
        ;   XREF to: 005ac484 (CONDITIONAL_JUMP)  ; LAB_005ac484
    MOV ECX,0x5f94bb                    ; 005ac461 | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0xf2                        ; 005ac466
    PUSH 0x5f94d2                       ; 005ac46b | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x01d1d400],ECX      ; 005ac470 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005ac476 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac47c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac481
    MOV EAX,[0x02c99310]                ; 005ac484 | DAT_02c99310
        ;   Label: LAB_005ac484
    PUSH EBX                            ; 005ac489
    MOV EDI,dword ptr [ESP + 0xfc]      ; 005ac48a
    ADD EAX,0x10                        ; 005ac491
    PUSH EDI                            ; 005ac494
    MOV EBP,dword ptr [ESP + 0xfc]      ; 005ac495
    AND AL,0xf0                         ; 005ac49c
    PUSH EBP                            ; 005ac49e
    MOV [0x0071362c],EAX                ; 005ac49f | DAT_0071362c
    MOV EAX,[0x02c99300]                ; 005ac4a4 | DAT_02c99300
    PUSH EAX                            ; 005ac4a9
    MOV EDX,dword ptr [EAX]             ; 005ac4aa
    CALL dword ptr [EDX + 0x54]         ; 005ac4ac
    MOV EDX,EAX                         ; 005ac4af
    TEST EAX,EAX                        ; 005ac4b1
    JZ 0x005ac509                       ; 005ac4b3
        ;   XREF to: 005ac509 (CONDITIONAL_JUMP)  ; LAB_005ac509
    CMP EDI,0x1e0                       ; 005ac4b5
    JGE 0x005ac509                      ; 005ac4bb
        ;   XREF to: 005ac509 (CONDITIONAL_JUMP)  ; LAB_005ac509
    MOV EDX,0x280                       ; 005ac4bd
    MOV dword ptr [0x02c99320],EDX      ; 005ac4c2 | DAT_02c99320
    SUB EDX,EBP                         ; 005ac4c8
    MOV EAX,EDX                         ; 005ac4ca
    SAR EDX,0x1f                        ; 005ac4cc
    SUB EAX,EDX                         ; 005ac4cf
    SAR EAX,0x1                         ; 005ac4d1
    MOV ECX,0x1e0                       ; 005ac4d3
    MOV EDX,ECX                         ; 005ac4d8
    SUB EDX,EDI                         ; 005ac4da
    MOV [0x02c9932c],EAX                ; 005ac4dc | DAT_02c9932c
    MOV EAX,EDX                         ; 005ac4e1
    SAR EDX,0x1f                        ; 005ac4e3
    SUB EAX,EDX                         ; 005ac4e6
    SAR EAX,0x1                         ; 005ac4e8
    PUSH EBX                            ; 005ac4ea
    PUSH ECX                            ; 005ac4eb
    PUSH 0x280                          ; 005ac4ec
    MOV [0x02c99330],EAX                ; 005ac4f1 | DAT_02c99330
    MOV EAX,[0x02c99300]                ; 005ac4f6 | DAT_02c99300
    PUSH EAX                            ; 005ac4fb
    MOV EDX,dword ptr [EAX]             ; 005ac4fc
    MOV dword ptr [0x02c99324],ECX      ; 005ac4fe | DAT_02c99324
    CALL dword ptr [EDX + 0x54]         ; 005ac504
    MOV EDX,EAX                         ; 005ac507
    TEST EDX,EDX                        ; 005ac509
        ;   Label: LAB_005ac509
    JZ 0x005ac569                       ; 005ac50b
        ;   XREF to: 005ac569 (CONDITIONAL_JUMP)  ; LAB_005ac569
    CMP EBX,0x20                        ; 005ac50d
    JZ 0x005ac534                       ; 005ac510
        ;   XREF to: 005ac534 (CONDITIONAL_JUMP)  ; LAB_005ac534
    XOR EAX,EAX                         ; 005ac512
        ;   Label: LAB_005ac512
    ADD ESP,0xe0                        ; 005ac514
    POP EBP                             ; 005ac51a
    POP EDI                             ; 005ac51b
    POP ESI                             ; 005ac51c
    POP EBX                             ; 005ac51d
    RET                                 ; 005ac51e
    MOV EAX,EDX                         ; 005ac51f
        ;   Label: LAB_005ac51f
    PUSH EAX                            ; 005ac521
    MOV EDX,dword ptr [EDX]             ; 005ac522
    CALL dword ptr [EDX + 0x8]          ; 005ac524
    XOR ECX,ECX                         ; 005ac527
    MOV dword ptr [0x02c9930c],ECX      ; 005ac529 | DAT_02c9930c
    JMP 0x005ac31f                      ; 005ac52f
        ;   XREF to: 005ac31f (UNCONDITIONAL_JUMP)  ; LAB_005ac31f
    PUSH 0x18                           ; 005ac534
        ;   Label: LAB_005ac534
    MOV EBP,dword ptr [0x02c99324]      ; 005ac536 | DAT_02c99324
    PUSH EBP                            ; 005ac53c
    MOV ECX,dword ptr [0x02c99320]      ; 005ac53d | DAT_02c99320
    MOV EAX,[0x02c99300]                ; 005ac543 | DAT_02c99300
    PUSH ECX                            ; 005ac548
    MOV EDX,dword ptr [EAX]             ; 005ac549
    PUSH EAX                            ; 005ac54b
    CALL dword ptr [EDX + 0x54]         ; 005ac54c
    TEST EAX,EAX                        ; 005ac54f
    JNZ 0x005ac512                      ; 005ac551
        ;   XREF to: 005ac512 (CONDITIONAL_JUMP)  ; LAB_005ac512
    MOV ESI,0x18                        ; 005ac553
    MOV EBX,0x1                         ; 005ac558
    MOV dword ptr [0x02c99328],ESI      ; 005ac55d | DAT_02c99328
    MOV dword ptr [0x02c9931c],EBX      ; 005ac563 | DAT_02c9931c
    PUSH 0x6c                           ; 005ac569
        ;   Label: LAB_005ac569
    PUSH 0x0                            ; 005ac56b
    LEA EAX,[ESP + 0x8]                 ; 005ac56d
    PUSH EAX                            ; 005ac571
    MOV EDI,0x6c                        ; 005ac572
    MOV EBP,0x21                        ; 005ac577
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ac57c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ac581
    MOV EAX,0x6218                      ; 005ac584
    MOV EDX,0x2                         ; 005ac589
    PUSH 0x0                            ; 005ac58e
    MOV dword ptr [ESP + 0x4],EDI       ; 005ac590
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ac594
    MOV dword ptr [ESP + 0x18],EDX      ; 005ac598
    PUSH 0x2c99304                      ; 005ac59c | DAT_02c99304
    LEA EDX,[ESP + 0x8]                 ; 005ac5a1
    MOV EAX,[0x02c99300]                ; 005ac5a5 | DAT_02c99300
    MOV dword ptr [ESP + 0xc],EBP       ; 005ac5aa
    PUSH EDX                            ; 005ac5ae
    MOV ECX,dword ptr [EAX]             ; 005ac5af
    PUSH EAX                            ; 005ac5b1
    CALL dword ptr [ECX + 0x18]         ; 005ac5b2
    TEST EAX,EAX                        ; 005ac5b5
    JZ 0x005ac605                       ; 005ac5b7
        ;   XREF to: 005ac605 (CONDITIONAL_JUMP)  ; LAB_005ac605
    PUSH 0x0                            ; 005ac5b9
    MOV ECX,0x1                         ; 005ac5bb
    PUSH 0x2c99304                      ; 005ac5c0 | DAT_02c99304
    MOV dword ptr [ESP + 0x1c],ECX      ; 005ac5c5
    LEA ECX,[ESP + 0x8]                 ; 005ac5c9
    MOV EAX,[0x02c99300]                ; 005ac5cd | DAT_02c99300
    PUSH ECX                            ; 005ac5d2
    MOV EDX,dword ptr [EAX]             ; 005ac5d3
    PUSH EAX                            ; 005ac5d5
    CALL dword ptr [EDX + 0x18]         ; 005ac5d6
    TEST EAX,EAX                        ; 005ac5d9
    JZ 0x005ac605                       ; 005ac5db
        ;   XREF to: 005ac605 (CONDITIONAL_JUMP)  ; LAB_005ac605
    PUSH 0x0                            ; 005ac5dd
    MOV EBX,0xa18                       ; 005ac5df
    LEA ECX,[ESP + 0x4]                 ; 005ac5e4
    PUSH 0x2c99304                      ; 005ac5e8 | DAT_02c99304
    MOV EAX,[0x02c99300]                ; 005ac5ed | DAT_02c99300
    MOV dword ptr [ESP + 0x70],EBX      ; 005ac5f2
    PUSH ECX                            ; 005ac5f6
    MOV EDX,dword ptr [EAX]             ; 005ac5f7
    PUSH EAX                            ; 005ac5f9
    CALL dword ptr [EDX + 0x18]         ; 005ac5fa
    TEST EAX,EAX                        ; 005ac5fd
    JNZ 0x005ac512                      ; 005ac5ff
        ;   XREF to: 005ac512 (CONDITIONAL_JUMP)  ; LAB_005ac512
    PUSH 0x4                            ; 005ac605
        ;   Label: LAB_005ac605
    PUSH 0x0                            ; 005ac607
    LEA EAX,[ESP + 0xe0]                ; 005ac609
    PUSH EAX                            ; 005ac610
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ac611
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ac616
    MOV ESI,0x4                         ; 005ac619
    LEA ECX,[ESP + 0xd8]                ; 005ac61e
    PUSH 0x2c99308                      ; 005ac625 | DAT_02c99308
    MOV EAX,[0x02c99304]                ; 005ac62a | DAT_02c99304
    MOV dword ptr [ESP + 0xdc],ESI      ; 005ac62f
    PUSH ECX                            ; 005ac636
    MOV EDX,dword ptr [EAX]             ; 005ac637
    PUSH EAX                            ; 005ac639
    CALL dword ptr [EDX + 0x30]         ; 005ac63a
    TEST EAX,EAX                        ; 005ac63d
    JNZ 0x005ac7f3                      ; 005ac63f
        ;   XREF to: 005ac7f3 (CONDITIONAL_JUMP)  ; LAB_005ac7f3
    MOV EDI,dword ptr [0x0061b49c]      ; 005ac645 | DAT_0061b49c
    XOR EBX,EBX                         ; 005ac64b
    TEST EDI,EDI                        ; 005ac64d
    JLE 0x005ac6d0                      ; 005ac64f
        ;   XREF to: 005ac6d0 (CONDITIONAL_JUMP)  ; LAB_005ac6d0
    MOV EAX,[0x0061b4a0]                ; 005ac655 | DAT_0061b4a0
    MOV EDX,EAX                         ; 005ac65a
    SAR EDX,0x1f                        ; 005ac65c
    SHL EDX,0x3                         ; 005ac65f
    SBB EAX,EDX                         ; 005ac662
    SAR EAX,0x3                         ; 005ac664
    MOV ECX,EAX                         ; 005ac667
    MOV EAX,[0x0061b498]                ; 005ac669 | DAT_0061b498
    SHL EAX,0x2                         ; 005ac66e
    MOV EBP,dword ptr [0x0061b498]      ; 005ac671 | DAT_0061b498
    MOV dword ptr [ESP + 0xdc],EAX      ; 005ac677
    XOR EAX,EAX                         ; 005ac67e
    IMUL EDX,EBP,0x0                    ; 005ac680
    MOV ESI,dword ptr [0x0061b498]      ; 005ac683 | DAT_0061b498
        ;   Label: LAB_005ac683
    IMUL ESI,EBX                        ; 005ac689
    IMUL ESI,ECX                        ; 005ac68c
    MOV EDI,dword ptr [0x00629010]      ; 005ac68f | DAT_00629010
    ADD ESI,EDI                         ; 005ac695
    MOV dword ptr [EAX + 0x1c4354c],ESI ; 005ac697 | DAT_01c4354c | DAT_01c43550
    MOV ESI,dword ptr [0x0071362c]      ; 005ac69d | DAT_0071362c
    ADD EAX,0x4                         ; 005ac6a3
    ADD ESI,EDX                         ; 005ac6a6
    INC EBX                             ; 005ac6a8
    MOV dword ptr [EAX + 0x1c44808],ESI ; 005ac6a9 | DAT_01c4480c | DAT_01c44810
    MOV ESI,dword ptr [ESP + 0xdc]      ; 005ac6af
    MOV EDI,dword ptr [0x0061b49c]      ; 005ac6b6 | DAT_0061b49c
    ADD EDX,ESI                         ; 005ac6bc
    CMP EBX,EDI                         ; 005ac6be
    JL 0x005ac683                       ; 005ac6c0
        ;   XREF to: 005ac683 (CONDITIONAL_JUMP)  ; LAB_005ac683
    LEA EAX,[EAX]                       ; 005ac6c2
    LEA EDX,[EDX]                       ; 005ac6c8
    MOV EAX,EAX                         ; 005ac6ce
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ac6d0
        ;   Label: LAB_005ac6d0
    DEC EAX                             ; 005ac6d7
    PUSH EAX                            ; 005ac6d8
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ac6d9
    DEC EAX                             ; 005ac6e0
    PUSH EAX                            ; 005ac6e1
    PUSH 0x0                            ; 005ac6e2
    PUSH 0x0                            ; 005ac6e4
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 005ac6e6
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 005ac6eb
    XOR EDI,EDI                         ; 005ac6ee
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0 ; 005ac6f0
        ;   XREF to: 005acec0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0()
    XOR EBP,EBP                         ; 005ac6f5
    PUSH 0x6c                           ; 005ac6f7
        ;   Label: LAB_005ac6f7
    PUSH EBP                            ; 005ac6f9
    LEA EAX,[ESP + 0x74]                ; 005ac6fa
    PUSH EAX                            ; 005ac6fe
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ac6ff
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ac704
    PUSH EBP                            ; 005ac707
    PUSH 0x1                            ; 005ac708
    LEA EDX,[ESP + 0x74]                ; 005ac70a
    MOV EAX,0x6c                        ; 005ac70e
    PUSH EDX                            ; 005ac713
    MOV dword ptr [ESP + 0x78],EAX      ; 005ac714
    MOV EAX,[0x02c99308]                ; 005ac718 | DAT_02c99308
    PUSH EBP                            ; 005ac71d
    MOV EBX,dword ptr [EAX]             ; 005ac71e
    PUSH EAX                            ; 005ac720
    CALL dword ptr [EBX + 0x64]         ; 005ac721
    TEST EAX,EAX                        ; 005ac724
    JZ 0x005ac74b                       ; 005ac726
        ;   XREF to: 005ac74b (CONDITIONAL_JUMP)  ; LAB_005ac74b
    MOV EDX,0x5f9542                    ; 005ac728 | = "..\\wincore\\wddvmem.cpp"
    MOV ECX,0x1ec                       ; 005ac72d
    PUSH 0x5f9559                       ; 005ac732 | = "Clear of back buffer failed"
    MOV dword ptr [0x01d1d400],EDX      ; 005ac737 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005ac73d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac743
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac748
    MOV EBX,dword ptr [ESP + 0x90]      ; 005ac74b
        ;   Label: LAB_005ac74b
    MOV EAX,[0x02c99324]                ; 005ac752 | DAT_02c99324
    MOV ESI,EBP                         ; 005ac757
    CMP EBP,EAX                         ; 005ac759
    JGE 0x005ac795                      ; 005ac75b
        ;   XREF to: 005ac795 (CONDITIONAL_JUMP)  ; LAB_005ac795
    MOV EDX,dword ptr [0x02c99320]      ; 005ac75d | DAT_02c99320
        ;   Label: LAB_005ac75d
    MOV ECX,dword ptr [0x02c99328]      ; 005ac763 | DAT_02c99328
    IMUL EDX,ECX                        ; 005ac769
    MOV EAX,EDX                         ; 005ac76c
    SAR EDX,0x1f                        ; 005ac76e
    SHL EDX,0x3                         ; 005ac771
    SBB EAX,EDX                         ; 005ac774
    SAR EAX,0x3                         ; 005ac776
    PUSH EAX                            ; 005ac779
    PUSH EBP                            ; 005ac77a
    PUSH EBX                            ; 005ac77b
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005ac77c
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ac781
    INC ESI                             ; 005ac784
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005ac785
    MOV EDX,dword ptr [0x02c99324]      ; 005ac789 | DAT_02c99324
    ADD EBX,EAX                         ; 005ac78f
    CMP ESI,EDX                         ; 005ac791
    JL 0x005ac75d                       ; 005ac793
        ;   XREF to: 005ac75d (CONDITIONAL_JUMP)  ; LAB_005ac75d
    PUSH EBP                            ; 005ac795
        ;   Label: LAB_005ac795
    MOV EAX,[0x02c99308]                ; 005ac796 | DAT_02c99308
    PUSH EAX                            ; 005ac79b
    MOV EDX,dword ptr [EAX]             ; 005ac79c
    CALL dword ptr [EDX + 0x80]         ; 005ac79e
    TEST EAX,EAX                        ; 005ac7a4
    JZ 0x005ac7cb                       ; 005ac7a6
        ;   XREF to: 005ac7cb (CONDITIONAL_JUMP)  ; LAB_005ac7cb
    MOV ECX,0x5f9575                    ; 005ac7a8 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0x1f6                       ; 005ac7ad
    PUSH 0x5f958c                       ; 005ac7b2 | = "Unlock of back buffer clear failed"
    MOV dword ptr [0x01d1d400],ECX      ; 005ac7b7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005ac7bd | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac7c3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac7c8
    MOV ESI,0x1                         ; 005ac7cb
        ;   Label: LAB_005ac7cb
    MOV dword ptr [0x02c99314],ESI      ; 005ac7d0 | DAT_02c99314
    ADD EDI,ESI                         ; 005ac7d6
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 005ac7d8
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CMP EDI,0x3                         ; 005ac7dd
    JL 0x005ac6f7                       ; 005ac7e0
        ;   XREF to: 005ac6f7 (CONDITIONAL_JUMP)  ; LAB_005ac6f7
    MOV EAX,ESI                         ; 005ac7e6
    ADD ESP,0xe0                        ; 005ac7e8
    POP EBP                             ; 005ac7ee
    POP EDI                             ; 005ac7ef
    POP ESI                             ; 005ac7f0
    POP EBX                             ; 005ac7f1
    RET                                 ; 005ac7f2
    MOV EBP,0x5f94fa                    ; 005ac7f3 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005ac7f3
    MOV EAX,0x1d1                       ; 005ac7f8
    PUSH 0x5f9511                       ; 005ac7fd | = "setScreenResolution - Create back buf..."
    MOV dword ptr [0x01d1d400],EBP      ; 005ac802 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005ac808 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005ac80d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005ac812
    XOR EAX,EAX                         ; 005ac815
    ADD ESP,0xe0                        ; 005ac817
    POP EBP                             ; 005ac81d
    POP EDI                             ; 005ac81e
    POP ESI                             ; 005ac81f
    POP EBX                             ; 005ac820
    RET                                 ; 005ac821

