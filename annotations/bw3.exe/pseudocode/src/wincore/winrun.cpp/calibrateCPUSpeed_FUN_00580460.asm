; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_00580460(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_FUN_004e44e0 at 004e45d1
;
; Referenced Globals:
;   void* PTR_timeBeginPeriod_005b3450 = 001b3912
;   void* PTR_MessageBoxA_005b34d8 = 001b3b54
;   void* PTR_QueryPerformanceCounter_005b360c = 001b40b6
;   void* PTR_QueryPerformanceFrequency_005b3610 = 001b40d0
;   undefined4 s_Unable_to_set_timer_005d7c2a+1
;   undefined4 DAT_005d7c43
;   TerminatedCString s_Blair_Witch_3_005d7ecc
;   void* PTR_s_Blair_Witch_3_00607284 = 005d7ecc
;   undefined4 DAT_01c6e2a8
;   undefined4 DAT_02d202b8
;   undefined4 DAT_02d202c0
;   undefined4 DAT_02d202c4
;   undefined4 DAT_02d202c8
;   undefined4 DAT_02d202d4
;   undefined4 DAT_02d21b78
;   ... and 1 more
;
; Called Functions:
;   MessageBoxA
;   QueryPerformanceCounter
;   QueryPerformanceFrequency
;   timeBeginPeriod
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580460
        ;   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_00580460
    PUSH ESI                            ; 00580461
    PUSH EDI                            ; 00580462
    PUSH EBP                            ; 00580463
    MOV EBP,ESP                         ; 00580464
    SUB ESP,0x10                        ; 00580466
    PUSH 0x2d202c0                      ; 00580469 | DAT_02d202c0
    CALL dword ptr CS:[0x5b3610]        ; 0058046e | PTR_QueryPerformanceFrequency_005b3610
    CMP EAX,0x1                         ; 00580475
    JNZ 0x0058063a                      ; 00580478
        ;   XREF to: 0058063a (CONDITIONAL_JUMP)  ; LAB_0058063a
    FILD dword ptr [0x02d202c4]         ; 0058047e | DAT_02d202c4
    FMUL double ptr [0x005d7c43]        ; 00580484 | DAT_005d7c43
    XOR EDX,EDX                         ; 0058048a
    MOV EAX,[0x02d202c0]                ; 0058048c | DAT_02d202c0
    MOV dword ptr [EBP + -0xc],EDX      ; 00580491
    MOV dword ptr [EBP + -0x10],EAX     ; 00580494
    FILD qword ptr [EBP + -0x10]        ; 00580497
    FADDP                               ; 0058049a
    PUSH 0x2d202b8                      ; 0058049c | DAT_02d202b8
    FSTP double ptr [0x02d202c8]        ; 005804a1 | DAT_02d202c8
    CALL dword ptr CS:[0x5b360c]        ; 005804a7 | PTR_QueryPerformanceCounter_005b360c
    XOR EAX,EAX                         ; 005804ae
        ;   Label: LAB_005804ae
    MOV dword ptr [EBP + -0x8],EAX      ; 005804b0
    MOV dword ptr [EBP + -0x4],EAX      ; 005804b3
    CALL wincore_winrun.cpp_FUN_005806a0 ; 005804b6
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_005804b6
    PUSH EAX                            ; 005804bb
    MOV EBX,0x0                         ; 005804bc
    ADD EBX,0x1                         ; 005804c1
        ;   Label: LAB_005804c1
    ADD EBX,0x1                         ; 005804c4
    ADD EBX,0x1                         ; 005804c7
    ADD EBX,0x1                         ; 005804ca
    ADD EBX,0x1                         ; 005804cd
    ADD EBX,0x1                         ; 005804d0
    ADD EBX,0x1                         ; 005804d3
    ADD EBX,0x1                         ; 005804d6
    ADD EBX,0x1                         ; 005804d9
    ADD EBX,0x1                         ; 005804dc
    ADD EBX,0x1                         ; 005804df
    ADD EBX,0x1                         ; 005804e2
    ADD EBX,0x1                         ; 005804e5
    ADD EBX,0x1                         ; 005804e8
    ADD EBX,0x1                         ; 005804eb
    ADD EBX,0x1                         ; 005804ee
    ADD EBX,0x1                         ; 005804f1
    ADD EBX,0x1                         ; 005804f4
    ADD EBX,0x1                         ; 005804f7
    ADD EBX,0x1                         ; 005804fa
    ADD EBX,0x1                         ; 005804fd
    ADD EBX,0x1                         ; 00580500
    ADD EBX,0x1                         ; 00580503
    ADD EBX,0x1                         ; 00580506
    ADD EBX,0x1                         ; 00580509
    ADD EBX,0x1                         ; 0058050c
    ADD EBX,0x1                         ; 0058050f
    ADD EBX,0x1                         ; 00580512
    ADD EBX,0x1                         ; 00580515
    ADD EBX,0x1                         ; 00580518
    ADD EBX,0x1                         ; 0058051b
    ADD EBX,0x1                         ; 0058051e
    ADD EBX,0x1                         ; 00580521
    ADD EBX,0x1                         ; 00580524
    ADD EBX,0x1                         ; 00580527
    ADD EBX,0x1                         ; 0058052a
    ADD EBX,0x1                         ; 0058052d
    ADD EBX,0x1                         ; 00580530
    ADD EBX,0x1                         ; 00580533
    ADD EBX,0x1                         ; 00580536
    ADD EBX,0x1                         ; 00580539
    ADD EBX,0x1                         ; 0058053c
    ADD EBX,0x1                         ; 0058053f
    ADD EBX,0x1                         ; 00580542
    ADD EBX,0x1                         ; 00580545
    ADD EBX,0x1                         ; 00580548
    ADD EBX,0x1                         ; 0058054b
    ADD EBX,0x1                         ; 0058054e
    ADD EBX,0x1                         ; 00580551
    ADD EBX,0x1                         ; 00580554
    ADD EBX,0x1                         ; 00580557
    ADD EBX,0x1                         ; 0058055a
    ADD EBX,0x1                         ; 0058055d
    ADD EBX,0x1                         ; 00580560
    ADD EBX,0x1                         ; 00580563
    ADD EBX,0x1                         ; 00580566
    ADD EBX,0x1                         ; 00580569
    ADD EBX,0x1                         ; 0058056c
    ADD EBX,0x1                         ; 0058056f
    ADD EBX,0x1                         ; 00580572
    ADD EBX,0x1                         ; 00580575
    ADD EBX,0x1                         ; 00580578
    ADD EBX,0x1                         ; 0058057b
    ADD EBX,0x1                         ; 0058057e
    ADD EBX,0x1                         ; 00580581
    ADD EBX,0x1                         ; 00580584
    ADD EBX,0x1                         ; 00580587
    ADD EBX,0x1                         ; 0058058a
    ADD EBX,0x1                         ; 0058058d
    ADD EBX,0x1                         ; 00580590
    ADD EBX,0x1                         ; 00580593
    ADD EBX,0x1                         ; 00580596
    ADD EBX,0x1                         ; 00580599
    ADD EBX,0x1                         ; 0058059c
    ADD EBX,0x1                         ; 0058059f
    ADD EBX,0x1                         ; 005805a2
    ADD EBX,0x1                         ; 005805a5
    ADD EBX,0x1                         ; 005805a8
    ADD EBX,0x1                         ; 005805ab
    ADD EBX,0x1                         ; 005805ae
    ADD EBX,0x1                         ; 005805b1
    ADD EBX,0x1                         ; 005805b4
    ADD EBX,0x1                         ; 005805b7
    ADD EBX,0x1                         ; 005805ba
    ADD EBX,0x1                         ; 005805bd
    ADD EBX,0x1                         ; 005805c0
    ADD EBX,0x1                         ; 005805c3
    ADD EBX,0x1                         ; 005805c6
    ADD EBX,0x1                         ; 005805c9
    ADD EBX,0x1                         ; 005805cc
    ADD EBX,0x1                         ; 005805cf
    ADD EBX,0x1                         ; 005805d2
    ADD EBX,0x1                         ; 005805d5
    ADD EBX,0x1                         ; 005805d8
    ADD EBX,0x1                         ; 005805db
    ADD EBX,0x1                         ; 005805de
    ADD EBX,0x1                         ; 005805e1
    ADD EBX,0x1                         ; 005805e4
    ADD EBX,0x1                         ; 005805e7
    CMP EBX,0x5f5e100                   ; 005805ea
    JC 0x005804c1                       ; 005805f0
        ;   XREF to: 005804c1 (CONDITIONAL_JUMP)  ; LAB_005804c1
    CALL wincore_winrun.cpp_FUN_005806a0 ; 005805f6
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
    POP EBX                             ; 005805fb
    SUB EAX,EBX                         ; 005805fc
    MOV EBX,EAX                         ; 005805fe
    MOV EAX,0x7080000                   ; 00580600
    CDQ                                 ; 00580605
    DIV EBX                             ; 00580606
    ADD dword ptr [EBP + 0xfffffff8],EAX ; 00580608
    MOV ECX,dword ptr [EBP + -0x4]      ; 0058060e
    INC ECX                             ; 00580611
    MOV dword ptr [EBP + -0x4],ECX      ; 00580612
    CMP ECX,0x5                         ; 00580615
    JL 0x005804b6                       ; 00580618
        ;   XREF to: 005804b6 (CONDITIONAL_JUMP)  ; LAB_005804b6
    MOV ECX,0x5                         ; 0058061e
    MOV EAX,dword ptr [EBP + -0x8]      ; 00580623
    MOV EDX,dword ptr [EBP + -0x8]      ; 00580626
    SAR EDX,0x1f                        ; 00580629
    IDIV ECX                            ; 0058062c
    MOV [0x01c6e2a8],EAX                ; 0058062e | DAT_01c6e2a8
    MOV ESP,EBP                         ; 00580633
    POP EBP                             ; 00580635
    POP EDI                             ; 00580636
    POP ESI                             ; 00580637
    POP EBX                             ; 00580638
    RET                                 ; 00580639
    MOV ECX,0x1                         ; 0058063a
        ;   Label: LAB_0058063a
    PUSH ECX                            ; 0058063f
    MOV dword ptr [0x02d202d4],ECX      ; 00580640 | DAT_02d202d4
    CALL dword ptr CS:[0x5b3450]        ; 00580646 | PTR_timeBeginPeriod_005b3450
    TEST EAX,EAX                        ; 0058064d
    JZ 0x005804ae                       ; 0058064f
        ;   XREF to: 005804ae (CONDITIONAL_JUMP)  ; LAB_005804ae
    PUSH 0x31                           ; 00580655
    MOV EBX,dword ptr [0x00607284]      ; 00580657 | PTR_s_Blair_Witch_3_00607284
    PUSH EBX                            ; 0058065d | = "Blair Witch 3"
    PUSH 0x5d7c2b                       ; 0058065e | s_Unable_to_set_timer_005d7c2a+1
    MOV ESI,dword ptr [0x02d21b78]      ; 00580663 | DAT_02d21b78
    PUSH ESI                            ; 00580669
    CALL dword ptr CS:[0x5b34d8]        ; 0058066a | PTR_MessageBoxA_005b34d8
    CMP EAX,0x2                         ; 00580671
    JNZ 0x005804ae                      ; 00580674
        ;   XREF to: 005804ae (CONDITIONAL_JUMP)  ; LAB_005804ae
    MOV dword ptr [0x02d21b80],0x1      ; 0058067a | DAT_02d21b80
    JMP 0x005804ae                      ; 00580684
        ;   XREF to: 005804ae (UNCONDITIONAL_JUMP)  ; LAB_005804ae

