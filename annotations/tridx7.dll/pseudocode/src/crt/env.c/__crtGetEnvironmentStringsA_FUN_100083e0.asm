; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c___crtGetEnvironmentStringsA_FUN_100083e0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 10005757
;
; Referenced Globals:
;   undefined4 DAT_10016ff4
;   void* PTR_FreeEnvironmentStringsA_1024221c = 00242560
;   void* PTR_GetEnvironmentStrings_10242224 = 00242590
;   void* PTR_FreeEnvironmentStringsW_10242228 = 002425a8
;   void* PTR_GetEnvironmentStringsW_1024222c = 002425c2
;   void* PTR_WideCharToMultiByte_10242230 = 002425dc
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   FreeEnvironmentStringsA
;   FreeEnvironmentStringsW
;   GetEnvironmentStrings
;   GetEnvironmentStringsW
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 100083e0
        ;   Label: crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0
    CMP dword ptr [0x10016ff4],0x0      ; 100083e3 | DAT_10016ff4
    PUSH EBX                            ; 100083ea
    PUSH ESI                            ; 100083eb
    PUSH EDI                            ; 100083ec
    MOV ESI,dword ptr [0x1024222c]      ; 100083ed | PTR_GetEnvironmentStringsW_1024222c
    PUSH EBP                            ; 100083f3
    JNZ 0x10008430                      ; 100083f4
        ;   XREF to: 10008430 (CONDITIONAL_JUMP)  ; LAB_10008430
    CALL ESI                            ; 100083f6 | LPWCH GetEnvironmentStringsW()
    MOV EDI,EAX                         ; 100083f8
    TEST EDI,EDI                        ; 100083fa
    JZ 0x1000840e                       ; 100083fc
        ;   XREF to: 1000840e (CONDITIONAL_JUMP)  ; LAB_1000840e
    MOV dword ptr [0x10016ff4],0x1      ; 100083fe | DAT_10016ff4
    MOV EBX,dword ptr [ESP + 0x10]      ; 10008408
    JMP 0x10008438                      ; 1000840c
        ;   XREF to: 10008438 (UNCONDITIONAL_JUMP)  ; LAB_10008438
    CALL dword ptr [0x10242224]         ; 1000840e | PTR_GetEnvironmentStrings_10242224
        ;   Label: LAB_1000840e
    MOV EBX,EAX                         ; 10008414
    TEST EBX,EBX                        ; 10008416
    JZ 0x10008426                       ; 10008418
        ;   XREF to: 10008426 (CONDITIONAL_JUMP)  ; LAB_10008426
    MOV dword ptr [0x10016ff4],0x2      ; 1000841a | DAT_10016ff4
    JMP 0x10008438                      ; 10008424
        ;   XREF to: 10008438 (UNCONDITIONAL_JUMP)  ; LAB_10008438
    XOR EAX,EAX                         ; 10008426
        ;   Label: LAB_10008426
    POP EBP                             ; 10008428
    POP EDI                             ; 10008429
    POP ESI                             ; 1000842a
    POP EBX                             ; 1000842b
    ADD ESP,0x4                         ; 1000842c
    RET                                 ; 1000842f
    MOV EBX,dword ptr [ESP + 0x10]      ; 10008430
        ;   Label: LAB_10008430
    MOV EDI,dword ptr [ESP + 0x10]      ; 10008434
    CMP dword ptr [0x10016ff4],0x1      ; 10008438 | DAT_10016ff4
        ;   Label: LAB_10008438
    JNZ 0x100084e7                      ; 1000843f
        ;   XREF to: 100084e7 (CONDITIONAL_JUMP)  ; LAB_100084e7
    TEST EDI,EDI                        ; 10008445
    JNZ 0x1000845b                      ; 10008447
        ;   XREF to: 1000845b (CONDITIONAL_JUMP)  ; LAB_1000845b
    CALL ESI                            ; 10008449 | LPWCH GetEnvironmentStringsW()
    MOV EDI,EAX                         ; 1000844b
    TEST EDI,EDI                        ; 1000844d
    JNZ 0x1000845b                      ; 1000844f
        ;   XREF to: 1000845b (CONDITIONAL_JUMP)  ; LAB_1000845b
    XOR EAX,EAX                         ; 10008451
    POP EBP                             ; 10008453
    POP EDI                             ; 10008454
    POP ESI                             ; 10008455
    POP EBX                             ; 10008456
    ADD ESP,0x4                         ; 10008457
    RET                                 ; 1000845a
    CMP word ptr [EDI],0x0              ; 1000845b
        ;   Label: LAB_1000845b
    MOV ESI,EDI                         ; 1000845f
    JZ 0x10008475                       ; 10008461
        ;   XREF to: 10008475 (CONDITIONAL_JUMP)  ; LAB_10008475
    ADD ESI,0x2                         ; 10008463
        ;   Label: LAB_10008463
    CMP word ptr [ESI],0x0              ; 10008466
    JNZ 0x10008463                      ; 1000846a
        ;   XREF to: 10008463 (CONDITIONAL_JUMP)  ; LAB_10008463
    ADD ESI,0x2                         ; 1000846c
    CMP word ptr [ESI],0x0              ; 1000846f
    JNZ 0x10008463                      ; 10008473
        ;   XREF to: 10008463 (CONDITIONAL_JUMP)  ; LAB_10008463
    SUB ESI,EDI                         ; 10008475
        ;   Label: LAB_10008475
    PUSH 0x0                            ; 10008477
    SAR ESI,0x1                         ; 10008479
    PUSH 0x0                            ; 1000847c
    INC ESI                             ; 1000847e
    PUSH 0x0                            ; 1000847f
    PUSH 0x0                            ; 10008481
    PUSH ESI                            ; 10008483
    PUSH EDI                            ; 10008484
    PUSH 0x0                            ; 10008485
    PUSH 0x0                            ; 10008487
    CALL dword ptr [0x10242230]         ; 10008489 | PTR_WideCharToMultiByte_10242230
    MOV EBP,EAX                         ; 1000848f
    TEST EBP,EBP                        ; 10008491
    JZ 0x100084d6                       ; 10008493
        ;   XREF to: 100084d6 (CONDITIONAL_JUMP)  ; LAB_100084d6
    PUSH EBP                            ; 10008495
    CALL crt_heap.c_malloc_FUN_10008830 ; 10008496
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000849b
    MOV EBX,EAX                         ; 1000849e
    TEST EBX,EBX                        ; 100084a0
    JZ 0x100084d6                       ; 100084a2
        ;   XREF to: 100084d6 (CONDITIONAL_JUMP)  ; LAB_100084d6
    PUSH 0x0                            ; 100084a4
    PUSH 0x0                            ; 100084a6
    PUSH EBP                            ; 100084a8
    PUSH EBX                            ; 100084a9
    PUSH ESI                            ; 100084aa
    PUSH EDI                            ; 100084ab
    PUSH 0x0                            ; 100084ac
    PUSH 0x0                            ; 100084ae
    CALL dword ptr [0x10242230]         ; 100084b0 | PTR_WideCharToMultiByte_10242230
    TEST EAX,EAX                        ; 100084b6
    JNZ 0x100084c5                      ; 100084b8
        ;   XREF to: 100084c5 (CONDITIONAL_JUMP)  ; LAB_100084c5
    PUSH EBX                            ; 100084ba
    CALL crt_heap.c_free_FUN_10005b30   ; 100084bb
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 100084c0
    XOR EBX,EBX                         ; 100084c3
    PUSH EDI                            ; 100084c5
        ;   Label: LAB_100084c5
    CALL dword ptr [0x10242228]         ; 100084c6 | PTR_FreeEnvironmentStringsW_10242228
    MOV EAX,EBX                         ; 100084cc
    POP EBP                             ; 100084ce
    POP EDI                             ; 100084cf
    POP ESI                             ; 100084d0
    POP EBX                             ; 100084d1
    ADD ESP,0x4                         ; 100084d2
    RET                                 ; 100084d5
    PUSH EDI                            ; 100084d6
        ;   Label: LAB_100084d6
    CALL dword ptr [0x10242228]         ; 100084d7 | PTR_FreeEnvironmentStringsW_10242228
    XOR EAX,EAX                         ; 100084dd
    POP EBP                             ; 100084df
    POP EDI                             ; 100084e0
    POP ESI                             ; 100084e1
    POP EBX                             ; 100084e2
    ADD ESP,0x4                         ; 100084e3
    RET                                 ; 100084e6
    CMP dword ptr [0x10016ff4],0x2      ; 100084e7 | DAT_10016ff4
        ;   Label: LAB_100084e7
    JNZ 0x1000856b                      ; 100084ee
        ;   XREF to: 1000856b (CONDITIONAL_JUMP)  ; LAB_1000856b
    TEST EBX,EBX                        ; 100084f0
    JNZ 0x1000850a                      ; 100084f2
        ;   XREF to: 1000850a (CONDITIONAL_JUMP)  ; LAB_1000850a
    CALL dword ptr [0x10242224]         ; 100084f4 | PTR_GetEnvironmentStrings_10242224
    MOV EBX,EAX                         ; 100084fa
    TEST EBX,EBX                        ; 100084fc
    JNZ 0x1000850a                      ; 100084fe
        ;   XREF to: 1000850a (CONDITIONAL_JUMP)  ; LAB_1000850a
    XOR EAX,EAX                         ; 10008500
    POP EBP                             ; 10008502
    POP EDI                             ; 10008503
    POP ESI                             ; 10008504
    POP EBX                             ; 10008505
    ADD ESP,0x4                         ; 10008506
    RET                                 ; 10008509
    MOV EBP,EBX                         ; 1000850a
        ;   Label: LAB_1000850a
    CMP byte ptr [EBX],0x0              ; 1000850c
    JZ 0x1000851f                       ; 1000850f
        ;   XREF to: 1000851f (CONDITIONAL_JUMP)  ; LAB_1000851f
    INC EBP                             ; 10008511
        ;   Label: LAB_10008511
    CMP byte ptr [EBP],0x0              ; 10008512
    JNZ 0x10008511                      ; 10008516
        ;   XREF to: 10008511 (CONDITIONAL_JUMP)  ; LAB_10008511
    INC EBP                             ; 10008518
    CMP byte ptr [EBP],0x0              ; 10008519
    JNZ 0x10008511                      ; 1000851d
        ;   XREF to: 10008511 (CONDITIONAL_JUMP)  ; LAB_10008511
    SUB EBP,EBX                         ; 1000851f
        ;   Label: LAB_1000851f
    INC EBP                             ; 10008521
    PUSH EBP                            ; 10008522
    CALL crt_heap.c_malloc_FUN_10008830 ; 10008523
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    MOV dword ptr [ESP + 0x14],EAX      ; 10008528
    ADD ESP,0x4                         ; 1000852c
    TEST EAX,EAX                        ; 1000852f
    JNZ 0x10008544                      ; 10008531
        ;   XREF to: 10008544 (CONDITIONAL_JUMP)  ; LAB_10008544
    PUSH EBX                            ; 10008533
    CALL dword ptr [0x1024221c]         ; 10008534 | PTR_FreeEnvironmentStringsA_1024221c
    XOR EAX,EAX                         ; 1000853a
    POP EBP                             ; 1000853c
    POP EDI                             ; 1000853d
    POP ESI                             ; 1000853e
    POP EBX                             ; 1000853f
    ADD ESP,0x4                         ; 10008540
    RET                                 ; 10008543
    MOV EDI,dword ptr [ESP + 0x10]      ; 10008544
        ;   Label: LAB_10008544
    MOV ESI,EBX                         ; 10008548
    MOV ECX,EBP                         ; 1000854a
    SHR ECX,0x2                         ; 1000854c
    MOVSD.REP ES:EDI,ESI                ; 1000854f
    MOV ECX,EBP                         ; 10008551
    PUSH EBX                            ; 10008553
    AND ECX,0x3                         ; 10008554
    MOVSB.REP ES:EDI,ESI                ; 10008557
    CALL dword ptr [0x1024221c]         ; 10008559 | PTR_FreeEnvironmentStringsA_1024221c
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000855f
    POP EBP                             ; 10008563
    POP EDI                             ; 10008564
    POP ESI                             ; 10008565
    POP EBX                             ; 10008566
    ADD ESP,0x4                         ; 10008567
    RET                                 ; 1000856a
    XOR EAX,EAX                         ; 1000856b
        ;   Label: LAB_1000856b
    POP EBP                             ; 1000856d
    POP EDI                             ; 1000856e
    POP ESI                             ; 1000856f
    POP EBX                             ; 10008570
    ADD ESP,0x4                         ; 10008571
    RET                                 ; 10008574

