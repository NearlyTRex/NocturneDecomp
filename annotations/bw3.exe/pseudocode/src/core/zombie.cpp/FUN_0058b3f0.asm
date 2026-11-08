; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058b3f0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x168]:1  local_168
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00588ee0 at 0058a6ba
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005d874e+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005d8781
;   TerminatedCString s_s_beginning_to_pickup_s_005d87a1
;   TerminatedCString s_core_zombie_cpp_005d87bc
;   TerminatedCString s_Invalid_zombie_object_sh_005d87cf
;   TerminatedCString s_CBodyPart_005d87ec
;   TerminatedCString s_s_is_going_to_try_to_pic_005d87f6
;   undefined4 DAT_005d881f
;   undefined4 DAT_005d8827
;   undefined4 DAT_005d882f
;   undefined4 DAT_005d8837
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_00603b28
;   undefined4 DAT_007f7ea4
;   undefined4 DAT_01d71de0
;   ... and 6 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040c790
;   FUN_0040ce40
;   FUN_0040cea0
;   FUN_00416bd0
;   FUN_00416c50
;   FUN_0042b9e0
;   FUN_00441ff0
;   FUN_004e4330
;   FUN_004fc0d0
;   FUN_00588750
;   FUN_0058bd50
;   FUN_0058bdf0
;   FUN_0058cc20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058b3f0
        ;   Label: FUN_0058b3f0
    PUSH ESI                            ; 0058b3f1
    PUSH EDI                            ; 0058b3f2
    PUSH EBP                            ; 0058b3f3
    MOV EBP,ESP                         ; 0058b3f4
    SUB ESP,0x224                       ; 0058b3f6
    AND ESP,0xfffffff8                  ; 0058b3fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b3ff
    CMP dword ptr [EAX + 0xd124],0x0    ; 0058b402
    JL 0x0058b46d                       ; 0058b409
        ;   XREF to: 0058b46d (CONDITIONAL_JUMP)  ; LAB_0058b46d
    FLD float ptr [EAX + 0xd05c]        ; 0058b40b
    FSUB float ptr [EBP + 0x18]         ; 0058b411
    FST float ptr [EAX + 0xd05c]        ; 0058b414
    FLDZ                                ; 0058b41a
    FCOMPP                              ; 0058b41c
    FNSTSW AX                           ; 0058b41e
    SAHF                                ; 0058b420
    JC 0x0058b476                       ; 0058b421
        ;   XREF to: 0058b476 (CONDITIONAL_JUMP)  ; LAB_0058b476
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b423
        ;   Label: LAB_0058b423
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 0058b426
    TEST EBX,EBX                        ; 0058b42c
    JNZ 0x0058b46d                      ; 0058b42e
        ;   XREF to: 0058b46d (CONDITIONAL_JUMP)  ; LAB_0058b46d
    MOV ESI,dword ptr [EAX + 0x2628]    ; 0058b430
    TEST ESI,ESI                        ; 0058b436
    JNZ 0x0058b46d                      ; 0058b438
        ;   XREF to: 0058b46d (CONDITIONAL_JUMP)  ; LAB_0058b46d
    FLD float ptr [EAX + 0xd060]        ; 0058b43a
    FLDZ                                ; 0058b440
    FCOMPP                              ; 0058b442
    FNSTSW AX                           ; 0058b444
    SAHF                                ; 0058b446
    JNC 0x0058b4b4                      ; 0058b447
        ;   XREF to: 0058b4b4 (CONDITIONAL_JUMP)  ; LAB_0058b4b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b449
    FLD float ptr [EAX + 0xd060]        ; 0058b44c
    FSUB float ptr [EBP + 0x18]         ; 0058b452
    FST float ptr [EAX + 0xd060]        ; 0058b455
    FLDZ                                ; 0058b45b
    FCOMPP                              ; 0058b45d
    FNSTSW AX                           ; 0058b45f
    SAHF                                ; 0058b461
    JBE 0x0058b46d                      ; 0058b462
        ;   XREF to: 0058b46d (CONDITIONAL_JUMP)  ; LAB_0058b46d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b464
    MOV dword ptr [EAX + 0xd060],EBX    ; 0058b467
    XOR EAX,EAX                         ; 0058b46d
        ;   Label: LAB_0058b46d
    MOV ESP,EBP                         ; 0058b46f
    POP EBP                             ; 0058b471
    POP EDI                             ; 0058b472
    POP ESI                             ; 0058b473
    POP EBX                             ; 0058b474
    RET                                 ; 0058b475
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b476
        ;   Label: LAB_0058b476
    MOV ECX,dword ptr [EAX + 0xd058]    ; 0058b479
    PUSH 0x41200000                     ; 0058b47f
    INC ECX                             ; 0058b484
    PUSH 0x40a00000                     ; 0058b485
    MOV dword ptr [EAX + 0xd058],ECX    ; 0058b48a
    CALL FUN_0040ce40                   ; 0058b490
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x228],EAX     ; 0058b495
    FLD float ptr [ESP + 0x228]         ; 0058b49c
    ADD ESP,0x8                         ; 0058b4a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b4a6
    FSTP float ptr [EAX + 0xd05c]       ; 0058b4a9
    JMP 0x0058b423                      ; 0058b4af
        ;   XREF to: 0058b423 (UNCONDITIONAL_JUMP)  ; LAB_0058b423
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b4b4
        ;   Label: LAB_0058b4b4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058b4b7
    MOV EDI,dword ptr [EAX + 0xd064]    ; 0058b4ba
    ADD EBX,0x20                        ; 0058b4c0
    TEST EDI,EDI                        ; 0058b4c3
    JNZ 0x0058b55e                      ; 0058b4c5
        ;   XREF to: 0058b55e (CONDITIONAL_JUMP)  ; LAB_0058b55e
    LEA EAX,[ESP + 0xd0]                ; 0058b4cb
    MOV dword ptr [ESP + 0x208],ESI     ; 0058b4d2
    MOV dword ptr [ESP + 0x218],ESI     ; 0058b4d9
    MOV dword ptr [ESP + 0x20c],EBX     ; 0058b4e0
    MOV dword ptr [ESP + 0x210],ESI     ; 0058b4e7
    ADD EAX,0xc                         ; 0058b4ee
    MOV dword ptr [ESP + 0x21c],ESI     ; 0058b4f1
    MOV dword ptr [ESP + 0x214],EAX     ; 0058b4f8
    MOV EAX,[0x00603b28]                ; 0058b4ff | DAT_00603b28
        ;   Label: LAB_0058b4ff
    MOV EBX,dword ptr [ESP + 0x218]     ; 0058b504
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0058b50b | DAT_02024a2c
    JGE 0x0058bcdb                      ; 0058b511
        ;   XREF to: 0058bcdb (CONDITIONAL_JUMP)  ; LAB_0058bcdb
    ADD EAX,dword ptr [ESP + 0x210]     ; 0058b517
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0058b51e | DAT_02024a30
    PUSH EBX                            ; 0058b524
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058b525
    CALL dword ptr [EAX + 0x94]         ; 0058b52b
    ADD ESP,0x4                         ; 0058b531
    TEST EAX,EAX                        ; 0058b534
    JZ 0x0058baf8                       ; 0058b536
        ;   XREF to: 0058baf8 (CONDITIONAL_JUMP)  ; LAB_0058baf8
    MOV ECX,dword ptr [ESP + 0x218]     ; 0058b53c
        ;   Label: LAB_0058b53c
    MOV EDX,dword ptr [ESP + 0x210]     ; 0058b543
    INC ECX                             ; 0058b54a
    ADD EDX,0x4                         ; 0058b54b
    MOV dword ptr [ESP + 0x218],ECX     ; 0058b54e
    MOV dword ptr [ESP + 0x210],EDX     ; 0058b555
    JMP 0x0058b4ff                      ; 0058b55c
        ;   XREF to: 0058b4ff (UNCONDITIONAL_JUMP)  ; LAB_0058b4ff
    PUSH EDI                            ; 0058b55e
        ;   Label: LAB_0058b55e
    MOV ESI,dword ptr [EDI + 0x154]     ; 0058b55f
    CALL dword ptr [ESI + 0x94]         ; 0058b565
    ADD ESP,0x4                         ; 0058b56b
    TEST EAX,EAX                        ; 0058b56e
    JNZ 0x0058b865                      ; 0058b570
        ;   XREF to: 0058b865 (CONDITIONAL_JUMP)  ; LAB_0058b865
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b576
    MOV EAX,dword ptr [EAX + 0xd064]    ; 0058b579
    FLD float ptr [EBX]                 ; 0058b57f
    FSUB float ptr [EAX + 0x20]         ; 0058b581
    FMUL ST0                            ; 0058b584
    FLD float ptr [EBX + 0x8]           ; 0058b586
    FSUB float ptr [EAX + 0x28]         ; 0058b589
    FMUL ST0                            ; 0058b58c
    FADDP                               ; 0058b58e
    FSQRT                               ; 0058b590
    FMUL double ptr [0x005d881f]        ; 0058b592 | DAT_005d881f
    FSUBR double ptr [0x005d8827]       ; 0058b598 | DAT_005d8827
    FST float ptr [ESP + 0x4]           ; 0058b59e
    FLD1                                ; 0058b5a2
    FCOMPP                              ; 0058b5a4
    FNSTSW AX                           ; 0058b5a6
    SAHF                                ; 0058b5a8
    JBE 0x0058b5b3                      ; 0058b5a9
        ;   XREF to: 0058b5b3 (CONDITIONAL_JUMP)  ; LAB_0058b5b3
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0058b5ab
    FLD float ptr [EBP + 0x18]          ; 0058b5b3
        ;   Label: LAB_0058b5b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b5b6
    FMUL float ptr [ESP + 0x4]          ; 0058b5b9
    MOV EDI,dword ptr [EAX + 0xd068]    ; 0058b5bd
    PUSH EDI                            ; 0058b5c3
    FADD float ptr [EAX + 0xd060]       ; 0058b5c4
    PUSH EAX                            ; 0058b5ca
    FSTP float ptr [EAX + 0xd060]       ; 0058b5cb
    CALL FUN_0058bd50                   ; 0058b5d1
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; undefined FUN_0058bd50()
    ADD ESP,0x8                         ; 0058b5d6
    MOV ESI,0xffffffff                  ; 0058b5d9
    MOV dword ptr [ESP + 0x200],EAX     ; 0058b5de
    TEST EAX,EAX                        ; 0058b5e5
    JL 0x0058b84b                       ; 0058b5e7
        ;   XREF to: 0058b84b (CONDITIONAL_JUMP)  ; LAB_0058b84b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b5ed
    FLD float ptr [EAX + 0xd060]        ; 0058b5f0
    FLDZ                                ; 0058b5f6
    FCOMPP                              ; 0058b5f8
    FNSTSW AX                           ; 0058b5fa
    SAHF                                ; 0058b5fc
    JBE 0x0058b84b                      ; 0058b5fd
        ;   XREF to: 0058b84b (CONDITIONAL_JUMP)  ; LAB_0058b84b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058b603
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b606
    PUSH EDX                            ; 0058b609
    MOV EAX,dword ptr [EAX + 0xd064]    ; 0058b60a
    PUSH EAX                            ; 0058b610
    MOV EBX,dword ptr [EAX + 0x154]     ; 0058b611
    CALL dword ptr [EBX + 0x84]         ; 0058b617
    ADD ESP,0x8                         ; 0058b61d
    CMP EAX,0x3                         ; 0058b620
    JNZ 0x0058b84b                      ; 0058b623
        ;   XREF to: 0058b84b (CONDITIONAL_JUMP)  ; LAB_0058b84b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b629
    MOV ECX,dword ptr [EAX + 0xd068]    ; 0058b62c
    PUSH ECX                            ; 0058b632
    PUSH EAX                            ; 0058b633
    CALL FUN_0058bdf0                   ; 0058b634
        ;   XREF to: 0058bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058bdf0()
    ADD ESP,0x8                         ; 0058b639
    TEST EAX,EAX                        ; 0058b63c
    JZ 0x0058b84b                       ; 0058b63e
        ;   XREF to: 0058b84b (CONDITIONAL_JUMP)  ; LAB_0058b84b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058b644
    MOV ESI,dword ptr [ESI + 0xd068]    ; 0058b647
    CMP ESI,0x2                         ; 0058b64d
    JNC 0x0058b9d7                      ; 0058b650
        ;   XREF to: 0058b9d7 (CONDITIONAL_JUMP)  ; LAB_0058b9d7
    CMP ESI,0x1                         ; 0058b656
    JNZ 0x0058b9e6                      ; 0058b659
        ;   XREF to: 0058b9e6 (CONDITIONAL_JUMP)  ; LAB_0058b9e6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058b65f
        ;   Label: LAB_0058b65f
    MOV EBX,dword ptr [EBX + 0xd064]    ; 0058b662
    PUSH EBX                            ; 0058b668
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058b669
    LEA ESI,[ESP + 0xa4]                ; 0058b66f
    LEA EDI,[ESP + 0x5c]                ; 0058b676
    CALL dword ptr [EAX + 0x1c]         ; 0058b67a
    MOV ECX,0x6                         ; 0058b67d
    ADD ESP,0x4                         ; 0058b682
    LEA EAX,[ESP + 0x1f0]               ; 0058b685
    LEA ESI,[ESP + 0xa0]                ; 0058b68c
    PUSH EAX                            ; 0058b693
    MOVSD.REP ES:EDI,ESI                ; 0058b694
    LEA EAX,[ESP + 0x68]                ; 0058b696
    MOV EDI,0x3f000000                  ; 0058b69a
    PUSH EAX                            ; 0058b69f
    LEA EAX,[ESP + 0x60]                ; 0058b6a0
    LEA ESI,[ESP + 0x1bc]               ; 0058b6a4
    PUSH EAX                            ; 0058b6ab
    MOV dword ptr [ESP + 0x1fc],EDI     ; 0058b6ac
    LEA EDI,[ESP + 0xf4]                ; 0058b6b3
    CALL FUN_00416c50                   ; 0058b6ba
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00416c50()
    LEA ESI,[ESP + 0x1c0]               ; 0058b6bf
    ADD ESP,0x8                         ; 0058b6c6
    LEA EAX,[ESP + 0xec]                ; 0058b6c9
    MOVSD ES:EDI,ESI                    ; 0058b6d0
    MOVSD ES:EDI,ESI                    ; 0058b6d1
    MOVSD ES:EDI,ESI                    ; 0058b6d2
    PUSH EAX                            ; 0058b6d3
    LEA ESI,[ESP + 0x1ec]               ; 0058b6d4
    LEA EDI,[ESP + 0x1e0]               ; 0058b6db
    CALL FUN_00416bd0                   ; 0058b6e2
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00416bd0()
    LEA ESI,[ESP + 0x1ec]               ; 0058b6e7
    ADD ESP,0x8                         ; 0058b6ee
    LEA EAX,[ESP + 0x13c]               ; 0058b6f1
    FLD float ptr [ESP + 0x60]          ; 0058b6f8
    MOVSD ES:EDI,ESI                    ; 0058b6fc
    MOVSD ES:EDI,ESI                    ; 0058b6fd
    MOVSD ES:EDI,ESI                    ; 0058b6fe
    PUSH EAX                            ; 0058b6ff
    LEA EDI,[ESP + 0x140]               ; 0058b700
    LEA ESI,[ESP + 0x1dc]               ; 0058b707
    FADD double ptr [0x005d882f]        ; 0058b70e | DAT_005d882f
    PUSH EBX                            ; 0058b714
    FSTP float ptr [ESP + 0x1e8]        ; 0058b715
    MOVSD ES:EDI,ESI                    ; 0058b71c
    MOVSD ES:EDI,ESI                    ; 0058b71d
    MOVSD ES:EDI,ESI                    ; 0058b71e
    LEA EBX,[ESP + 0x15c]               ; 0058b71f
    LEA ESI,[ESP + 0x12c]               ; 0058b726
    LEA EDI,[ESP + 0x1a4]               ; 0058b72d
    CALL FUN_00408b80                   ; 0058b734
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x12c]               ; 0058b739
    ADD ESP,0x8                         ; 0058b740
    LEA EAX,[ESP + 0x19c]               ; 0058b743
    MOVSD ES:EDI,ESI                    ; 0058b74a
    MOVSD ES:EDI,ESI                    ; 0058b74b
    MOVSD ES:EDI,ESI                    ; 0058b74c
    CMP EBX,EAX                         ; 0058b74d
    JZ 0x0058b77b                       ; 0058b74f
        ;   XREF to: 0058b77b (CONDITIONAL_JUMP)  ; LAB_0058b77b
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0058b751
    MOV dword ptr [ESP + 0x154],EAX     ; 0058b758
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0058b75f
    MOV dword ptr [ESP + 0x158],EAX     ; 0058b766
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0058b76d
    MOV dword ptr [ESP + 0x15c],EAX     ; 0058b774
        ;   Label: LAB_0058b774
    LEA EDI,[ESP + 0x178]               ; 0058b77b
        ;   Label: LAB_0058b77b
    MOV ESI,0x2cfd900                   ; 0058b782
    MOV EAX,dword ptr [ESP + 0x200]     ; 0058b787
    MOVSD ES:EDI,ESI                    ; 0058b78e | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 0058b78f | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 0058b790 | DAT_02cfd908
    TEST EAX,EAX                        ; 0058b791
    JNZ 0x0058b7d8                      ; 0058b793
        ;   XREF to: 0058b7d8 (CONDITIONAL_JUMP)  ; LAB_0058b7d8
    MOV EDX,0xbfc00000                  ; 0058b795
    LEA EBX,[ESP + 0x178]               ; 0058b79a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0058b7a1
    MOV dword ptr [ESP + 0x120],EAX     ; 0058b7a8
    LEA EAX,[ESP + 0x118]               ; 0058b7af
    MOV dword ptr [ESP + 0x118],EDX     ; 0058b7b6
    CMP EBX,EAX                         ; 0058b7bd
    JZ 0x0058b7d8                       ; 0058b7bf
        ;   XREF to: 0058b7d8 (CONDITIONAL_JUMP)  ; LAB_0058b7d8
    XOR EDI,EDI                         ; 0058b7c1
    MOV dword ptr [ESP + 0x178],EDX     ; 0058b7c3
    MOV dword ptr [ESP + 0x17c],EDI     ; 0058b7ca
    MOV dword ptr [ESP + 0x180],EDI     ; 0058b7d1
    CMP dword ptr [ESP + 0x200],0x1     ; 0058b7d8
        ;   Label: LAB_0058b7d8
    JNZ 0x0058b827                      ; 0058b7e0
        ;   XREF to: 0058b827 (CONDITIONAL_JUMP)  ; LAB_0058b827
    MOV ECX,0x3fc00000                  ; 0058b7e2
    XOR EBX,EBX                         ; 0058b7e7
    LEA EAX,[ESP + 0x178]               ; 0058b7e9
    MOV dword ptr [ESP + 0x1ac],EBX     ; 0058b7f0
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0058b7f7
    LEA EBX,[ESP + 0x1a8]               ; 0058b7fe
    MOV dword ptr [ESP + 0x1a8],ECX     ; 0058b805
    CMP EAX,EBX                         ; 0058b80c
    JZ 0x0058b827                       ; 0058b80e
        ;   XREF to: 0058b827 (CONDITIONAL_JUMP)  ; LAB_0058b827
    XOR EAX,EAX                         ; 0058b810
    MOV dword ptr [ESP + 0x178],ECX     ; 0058b812
    MOV dword ptr [ESP + 0x17c],EAX     ; 0058b819
    MOV dword ptr [ESP + 0x180],EAX     ; 0058b820
    PUSH 0x0                            ; 0058b827
        ;   Label: LAB_0058b827
    LEA EAX,[ESP + 0x17c]               ; 0058b829
    PUSH 0x0                            ; 0058b830
    PUSH EAX                            ; 0058b832
    PUSH 0x0                            ; 0058b833
    LEA EAX,[ESP + 0x164]               ; 0058b835
    PUSH EAX                            ; 0058b83c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058b83d
    PUSH ECX                            ; 0058b840
    CALL FUN_0042b9e0                   ; 0058b841
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 0058b846
    MOV ESI,EAX                         ; 0058b849
    TEST ESI,ESI                        ; 0058b84b
        ;   Label: LAB_0058b84b
    JL 0x0058ba1c                       ; 0058b84d
        ;   XREF to: 0058ba1c (CONDITIONAL_JUMP)  ; LAB_0058ba1c
    JG 0x0058ba8e                       ; 0058b853
        ;   XREF to: 0058ba8e (CONDITIONAL_JUMP)  ; LAB_0058ba8e
    MOV EAX,0x1                         ; 0058b859
    MOV ESP,EBP                         ; 0058b85e
    POP EBP                             ; 0058b860
    POP EDI                             ; 0058b861
    POP ESI                             ; 0058b862
    POP EBX                             ; 0058b863
    RET                                 ; 0058b864
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b865
        ;   Label: LAB_0058b865
    MOV EDX,dword ptr [EAX + 0xd064]    ; 0058b868
    PUSH EDX                            ; 0058b86e
    PUSH EAX                            ; 0058b86f
    PUSH 0x5d874f                       ; 0058b870 | s_s_can_t_pick_up_s_sombod_005d874e+1
    MOV EBX,dword ptr [0x005f1690]      ; 0058b875 | PTR_DAT_005f1690
    PUSH EBX                            ; 0058b87b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0058b87c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x10                        ; 0058b881
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058b884
    MOV dword ptr [EAX + 0xd064],0x0    ; 0058b887
    PUSH EAX                            ; 0058b891
    MOV dword ptr [EAX + 0xd060],0x0    ; 0058b892
    CALL FUN_0058cc20                   ; 0058b89c
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0058cc20()
    ADD ESP,0x4                         ; 0058b8a1
    XOR EAX,EAX                         ; 0058b8a4
    MOV ESP,EBP                         ; 0058b8a6
    POP EBP                             ; 0058b8a8
    POP EDI                             ; 0058b8a9
    POP ESI                             ; 0058b8aa
    POP EBX                             ; 0058b8ab
    RET                                 ; 0058b8ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058b8ad
        ;   Label: LAB_0058b8ad
    MOV EBX,dword ptr [EBX + 0xd064]    ; 0058b8b0
    PUSH EBX                            ; 0058b8b6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058b8b7
    LEA ESI,[ESP + 0xbc]                ; 0058b8bd
    LEA EDI,[ESP + 0x8c]                ; 0058b8c4
    CALL dword ptr [EAX + 0x1c]         ; 0058b8cb
    MOV ECX,0x6                         ; 0058b8ce
    ADD ESP,0x4                         ; 0058b8d3
    LEA EAX,[ESP + 0x1fc]               ; 0058b8d6
    LEA ESI,[ESP + 0xb8]                ; 0058b8dd
    PUSH EAX                            ; 0058b8e4
    MOVSD.REP ES:EDI,ESI                ; 0058b8e5
    LEA EAX,[ESP + 0x98]                ; 0058b8e7
    MOV ESI,0x3f000000                  ; 0058b8ee
    PUSH EAX                            ; 0058b8f3
    LEA EAX,[ESP + 0x90]                ; 0058b8f4
    MOV dword ptr [ESP + 0x204],ESI     ; 0058b8fb
    PUSH EAX                            ; 0058b902
    LEA ESI,[ESP + 0x178]               ; 0058b903
    LEA EDI,[ESP + 0x190]               ; 0058b90a
    CALL FUN_00416c50                   ; 0058b911
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00416c50()
    LEA ESI,[ESP + 0x178]               ; 0058b916
    ADD ESP,0x8                         ; 0058b91d
    LEA EAX,[ESP + 0x188]               ; 0058b920
    MOVSD ES:EDI,ESI                    ; 0058b927
    MOVSD ES:EDI,ESI                    ; 0058b928
    MOVSD ES:EDI,ESI                    ; 0058b929
    PUSH EAX                            ; 0058b92a
    LEA ESI,[ESP + 0xfc]                ; 0058b92b
    LEA EDI,[ESP + 0x198]               ; 0058b932
    CALL FUN_00416bd0                   ; 0058b939
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00416bd0()
    LEA ESI,[ESP + 0xfc]                ; 0058b93e
    ADD ESP,0x8                         ; 0058b945
    LEA EAX,[ESP + 0x10c]               ; 0058b948
    FLD float ptr [ESP + 0x90]          ; 0058b94f
    MOVSD ES:EDI,ESI                    ; 0058b956
    MOVSD ES:EDI,ESI                    ; 0058b957
    MOVSD ES:EDI,ESI                    ; 0058b958
    PUSH EAX                            ; 0058b959
    LEA EDI,[ESP + 0x110]               ; 0058b95a
    LEA ESI,[ESP + 0x194]               ; 0058b961
    FADD double ptr [0x005d882f]        ; 0058b968 | DAT_005d882f
    PUSH EBX                            ; 0058b96e
    FSTP float ptr [ESP + 0x1a0]        ; 0058b96f
    MOVSD ES:EDI,ESI                    ; 0058b976
    MOVSD ES:EDI,ESI                    ; 0058b977
    MOVSD ES:EDI,ESI                    ; 0058b978
    LEA EBX,[ESP + 0x168]               ; 0058b979
    LEA ESI,[ESP + 0x108]               ; 0058b980
    LEA EDI,[ESP + 0x168]               ; 0058b987
    CALL FUN_00408b80                   ; 0058b98e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x108]               ; 0058b993
    ADD ESP,0x8                         ; 0058b99a
    LEA EAX,[ESP + 0x154]               ; 0058b99d
    MOVSD ES:EDI,ESI                    ; 0058b9a4
    MOVSD ES:EDI,ESI                    ; 0058b9a5
    MOVSD ES:EDI,ESI                    ; 0058b9a6
    CMP EAX,EBX                         ; 0058b9a7
    JZ 0x0058b77b                       ; 0058b9a9
        ;   XREF to: 0058b77b (CONDITIONAL_JUMP)  ; LAB_0058b77b
    MOV EAX,dword ptr [ESP + 0x160]     ; 0058b9af
    MOV dword ptr [ESP + 0x154],EAX     ; 0058b9b6
    MOV EAX,dword ptr [ESP + 0x164]     ; 0058b9bd
    MOV dword ptr [ESP + 0x158],EAX     ; 0058b9c4
    MOV EAX,dword ptr [ESP + 0x168]     ; 0058b9cb
    JMP 0x0058b774                      ; 0058b9d2
        ;   XREF to: 0058b774 (UNCONDITIONAL_JUMP)  ; LAB_0058b774
    JBE 0x0058b8ad                      ; 0058b9d7
        ;   XREF to: 0058b8ad (CONDITIONAL_JUMP)  ; LAB_0058b8ad
        ;   Label: LAB_0058b9d7
    CMP ESI,0x3                         ; 0058b9dd
    JZ 0x0058b65f                       ; 0058b9e0
        ;   XREF to: 0058b65f (CONDITIONAL_JUMP)  ; LAB_0058b65f
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058b9e6
        ;   Label: LAB_0058b9e6
    MOV EBX,dword ptr [EBX + 0xd064]    ; 0058b9e9
    LEA EAX,[ESP + 0x154]               ; 0058b9ef
    ADD EBX,0x20                        ; 0058b9f6
    CMP EAX,EBX                         ; 0058b9f9
    JZ 0x0058b77b                       ; 0058b9fb
        ;   XREF to: 0058b77b (CONDITIONAL_JUMP)  ; LAB_0058b77b
    MOV EAX,dword ptr [EBX]             ; 0058ba01
    MOV dword ptr [ESP + 0x154],EAX     ; 0058ba03
    MOV EAX,dword ptr [EBX + 0x4]       ; 0058ba0a
    MOV dword ptr [ESP + 0x158],EAX     ; 0058ba0d
    MOV EAX,dword ptr [EBX + 0x8]       ; 0058ba14
    JMP 0x0058b774                      ; 0058ba17
        ;   XREF to: 0058b774 (UNCONDITIONAL_JUMP)  ; LAB_0058b774
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ba1c
        ;   Label: LAB_0058ba1c
    MOV ECX,dword ptr [EAX + 0xd064]    ; 0058ba1f
    PUSH ECX                            ; 0058ba25
    PUSH EAX                            ; 0058ba26
    PUSH 0x5d8781                       ; 0058ba27 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0058ba2c | PTR_DAT_005f1690
    PUSH ESI                            ; 0058ba32 | DAT_007f7ea4
    MOV EBX,EAX                         ; 0058ba33
    CALL FUN_00441ff0                   ; 0058ba35
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,EBX                         ; 0058ba3a
    ADD ESP,0x10                        ; 0058ba3c
    MOV dword ptr [EAX + 0xd064],0x0    ; 0058ba3f
    PUSH EAX                            ; 0058ba49
    MOV dword ptr [EAX + 0xd060],0x41a00000 ; 0058ba4a
    CALL FUN_0058cc20                   ; 0058ba54
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0058cc20()
    ADD ESP,0x4                         ; 0058ba59
    XOR EAX,EAX                         ; 0058ba5c
    MOV ESP,EBP                         ; 0058ba5e
    POP EBP                             ; 0058ba60
    POP EDI                             ; 0058ba61
    POP ESI                             ; 0058ba62
    POP EBX                             ; 0058ba63
    RET                                 ; 0058ba64
    PUSH 0x1                            ; 0058ba65
        ;   Label: LAB_0058ba65
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ba67
    PUSH 0xb                            ; 0058ba6a
    ADD EAX,0x158                       ; 0058ba6c
        ;   Label: LAB_0058ba6c
    PUSH EAX                            ; 0058ba71
    CALL FUN_004fc0d0                   ; 0058ba72
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0058ba77
    MOV EAX,0x1                         ; 0058ba7a
    MOV ESP,EBP                         ; 0058ba7f
    POP EBP                             ; 0058ba81
    POP EDI                             ; 0058ba82
    POP ESI                             ; 0058ba83
    POP EBX                             ; 0058ba84
    RET                                 ; 0058ba85
    PUSH 0x1                            ; 0058ba86
        ;   Label: LAB_0058ba86
    MOV EAX,ESI                         ; 0058ba88
    PUSH 0xd                            ; 0058ba8a
    JMP 0x0058ba6c                      ; 0058ba8c
        ;   XREF to: 0058ba6c (UNCONDITIONAL_JUMP)  ; LAB_0058ba6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ba8e
        ;   Label: LAB_0058ba8e
    MOV EBX,dword ptr [EAX + 0xd064]    ; 0058ba91
    PUSH EBX                            ; 0058ba97
    PUSH EAX                            ; 0058ba98
    PUSH 0x5d87a1                       ; 0058ba99 | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0058ba9e | PTR_DAT_005f1690
    PUSH EDI                            ; 0058baa4 | DAT_007f7ea4
    MOV ESI,EAX                         ; 0058baa5
    CALL FUN_00441ff0                   ; 0058baa7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,ESI                         ; 0058baac
    MOV EAX,dword ptr [EAX + 0xd068]    ; 0058baae
    ADD ESP,0x10                        ; 0058bab4
    CMP EAX,0x2                         ; 0058bab7
    JNC 0x0058bac3                      ; 0058baba
        ;   XREF to: 0058bac3 (CONDITIONAL_JUMP)  ; LAB_0058bac3
    CMP EAX,0x1                         ; 0058babc
    JZ 0x0058ba65                       ; 0058babf
        ;   XREF to: 0058ba65 (CONDITIONAL_JUMP)  ; LAB_0058ba65
    JMP 0x0058baca                      ; 0058bac1
        ;   XREF to: 0058baca (UNCONDITIONAL_JUMP)  ; LAB_0058baca
    JBE 0x0058ba86                      ; 0058bac3
        ;   XREF to: 0058ba86 (CONDITIONAL_JUMP)  ; LAB_0058ba86
        ;   Label: LAB_0058bac3
    CMP EAX,0x3                         ; 0058bac5
    JZ 0x0058ba65                       ; 0058bac8
        ;   XREF to: 0058ba65 (CONDITIONAL_JUMP)  ; LAB_0058ba65
    MOV EAX,0x5d87bc                    ; 0058baca | = "..\\core\\zombie.cpp"
        ;   Label: LAB_0058baca
    MOV EDX,0x5a2                       ; 0058bacf
    PUSH 0x5d87cf                       ; 0058bad4 | = "Invalid zombie object shape!"
    MOV [0x01d71de0],EAX                ; 0058bad9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0058bade | DAT_01d71de4
    CALL FUN_004e4330                   ; 0058bae4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0058bae9
    MOV EAX,0x1                         ; 0058baec
    MOV ESP,EBP                         ; 0058baf1
    POP EBP                             ; 0058baf3
    POP EDI                             ; 0058baf4
    POP ESI                             ; 0058baf5
    POP EBX                             ; 0058baf6
    RET                                 ; 0058baf7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058baf8
        ;   Label: LAB_0058baf8
    PUSH ECX                            ; 0058bafb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058bafc
    PUSH EBX                            ; 0058bb02
    CALL dword ptr [EAX + 0x84]         ; 0058bb03
    ADD ESP,0x8                         ; 0058bb09
    CMP EAX,0x3                         ; 0058bb0c
    JNZ 0x0058b53c                      ; 0058bb0f
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    PUSH EBX                            ; 0058bb15
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058bb16
    LEA ESI,[ESP + 0x74]                ; 0058bb1c
    LEA EDI,[ESP + 0xd4]                ; 0058bb20
    CALL dword ptr [EAX + 0x1c]         ; 0058bb27
    MOV ECX,0x6                         ; 0058bb2a
    ADD ESP,0x4                         ; 0058bb2f
    LEA ESI,[ESP + 0x70]                ; 0058bb32
    MOV EAX,dword ptr [ESP + 0x214]     ; 0058bb36
    MOVSD.REP ES:EDI,ESI                ; 0058bb3d
    FLD float ptr [EAX + 0x4]           ; 0058bb3f
    FLD float ptr [EAX + 0x8]           ; 0058bb42
    FLD float ptr [EAX]                 ; 0058bb45
    LEA EDI,[ESP + 0x1c0]               ; 0058bb47
    LEA ESI,[ESP + 0x148]               ; 0058bb4e
    LEA EAX,[ESP + 0x1c0]               ; 0058bb55
    FSUB float ptr [ESP + 0xd0]         ; 0058bb5c
    FXCH ST2                            ; 0058bb63
    FSUB float ptr [ESP + 0xd4]         ; 0058bb65
    FXCH                                ; 0058bb6c
    FSUB float ptr [ESP + 0xd8]         ; 0058bb6e
    FXCH ST2                            ; 0058bb75
    FSTP float ptr [ESP + 0x148]        ; 0058bb77
    FSTP float ptr [ESP + 0x14c]        ; 0058bb7e
    FSTP float ptr [ESP + 0x150]        ; 0058bb85
    PUSH EAX                            ; 0058bb8c
    MOVSD ES:EDI,ESI                    ; 0058bb8d
    MOVSD ES:EDI,ESI                    ; 0058bb8e
    MOVSD ES:EDI,ESI                    ; 0058bb8f
    CALL FUN_00588750                   ; 0058bb90
        ;   XREF to: 00588750 (UNCONDITIONAL_CALL)  ; undefined FUN_00588750()
    ADD ESP,0x4                         ; 0058bb95
    MOV dword ptr [ESP + 0x204],EAX     ; 0058bb98
    TEST EAX,EAX                        ; 0058bb9f
    JZ 0x0058b53c                       ; 0058bba1
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    PUSH EAX                            ; 0058bba7
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058bba8
    PUSH ESI                            ; 0058bbab
    CALL FUN_0058bdf0                   ; 0058bbac
        ;   XREF to: 0058bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058bdf0()
    ADD ESP,0x8                         ; 0058bbb1
    TEST EAX,EAX                        ; 0058bbb4
    JZ 0x0058b53c                       ; 0058bbb6
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    PUSH 0x5d87ec                       ; 0058bbbc | = "CBodyPart"
    PUSH EBX                            ; 0058bbc1
    CALL FUN_0040c790                   ; 0058bbc2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 0058bbc7
    TEST EAX,EAX                        ; 0058bbca
    JZ 0x0058bbe8                       ; 0058bbcc
        ;   XREF to: 0058bbe8 (CONDITIONAL_JUMP)  ; LAB_0058bbe8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058bbce
    MOV ESI,dword ptr [EBX + 0x6c]      ; 0058bbd1
    MOV EAX,dword ptr [EAX + 0xd058]    ; 0058bbd4
    AND ESI,0x3                         ; 0058bbda
    AND EAX,0x3                         ; 0058bbdd
    CMP ESI,EAX                         ; 0058bbe0
    JNZ 0x0058b53c                      ; 0058bbe2
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    LEA EAX,[EBX + 0x20]                ; 0058bbe8
        ;   Label: LAB_0058bbe8
    MOV ESI,dword ptr [ESP + 0x20c]     ; 0058bbeb
    LEA EDI,[ESP + 0x1cc]               ; 0058bbf2
    FLD float ptr [EAX]                 ; 0058bbf9
    FLD float ptr [EAX + 0x4]           ; 0058bbfb
    FLD float ptr [EAX + 0x8]           ; 0058bbfe
    FXCH ST2                            ; 0058bc01
    FSUB float ptr [ESI]                ; 0058bc03
    FXCH                                ; 0058bc05
    FSUB float ptr [ESI + 0x4]          ; 0058bc07
    FXCH ST2                            ; 0058bc0a
    FSUB float ptr [ESI + 0x8]          ; 0058bc0c
    FXCH                                ; 0058bc0f
    FSTP float ptr [ESP + 0x130]        ; 0058bc11
    FXCH                                ; 0058bc18
    FSTP float ptr [ESP + 0x134]        ; 0058bc1a
    LEA ESI,[ESP + 0x130]               ; 0058bc21
    FSTP float ptr [ESP + 0x138]        ; 0058bc28
    MOVSD ES:EDI,ESI                    ; 0058bc2f
    MOVSD ES:EDI,ESI                    ; 0058bc30
    MOVSD ES:EDI,ESI                    ; 0058bc31
    FLD float ptr [ESP + 0x1d0]         ; 0058bc32
    FMUL ST0                            ; 0058bc39
    FST float ptr [ESP + 0x1d0]         ; 0058bc3b
    FMUL float ptr [ESP + 0x1d0]        ; 0058bc42
    FST float ptr [ESP + 0x1d0]         ; 0058bc49
    FMUL float ptr [ESP + 0x1d0]        ; 0058bc50
    FLD float ptr [ESP + 0x1cc]         ; 0058bc57
    FMUL ST0                            ; 0058bc5e
    FADDP                               ; 0058bc60
    FLD float ptr [ESP + 0x1d4]         ; 0058bc62
    FMUL ST0                            ; 0058bc69
    FADDP                               ; 0058bc6b
    FSQRT                               ; 0058bc6d
    FST float ptr [ESP]                 ; 0058bc6f
    FCOMP double ptr [0x005d8827]       ; 0058bc72 | DAT_005d8827
    FNSTSW AX                           ; 0058bc78
    SAHF                                ; 0058bc7a
    JC 0x0058b53c                       ; 0058bc7b
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058bc81
    FLD float ptr [EAX + 0xd054]        ; 0058bc84
    FMUL float ptr [0x005d8837]         ; 0058bc8a | DAT_005d8837
    FCOMP float ptr [ESP]               ; 0058bc90
    FNSTSW AX                           ; 0058bc93
    SAHF                                ; 0058bc95
    JC 0x0058b53c                       ; 0058bc96
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0058bc9c
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 0058bca3
    MOV EBX,dword ptr [ESP + 0x21c]     ; 0058bca7
    MOV EAX,dword ptr [ESP + 0x204]     ; 0058bcae
    MOV dword ptr [ESP + EBX*0x1 + 0x30],EAX ; 0058bcb5
    MOV EAX,dword ptr [ESP + 0x208]     ; 0058bcb9
    LEA EDI,[EBX + 0x4]                 ; 0058bcc0
    INC EAX                             ; 0058bcc3
    MOV dword ptr [ESP + 0x21c],EDI     ; 0058bcc4
    MOV dword ptr [ESP + 0x208],EAX     ; 0058bccb
    CMP EDI,0x28                        ; 0058bcd2
    JL 0x0058b53c                       ; 0058bcd5
        ;   XREF to: 0058b53c (CONDITIONAL_JUMP)  ; LAB_0058b53c
    MOV ECX,dword ptr [ESP + 0x208]     ; 0058bcdb
        ;   Label: LAB_0058bcdb
    CMP ECX,0x1                         ; 0058bce2
    JL 0x0058b46d                       ; 0058bce5
        ;   XREF to: 0058b46d (CONDITIONAL_JUMP)  ; LAB_0058b46d
    LEA EAX,[ECX + -0x1]                ; 0058bceb
    PUSH EAX                            ; 0058bcee
    PUSH 0x0                            ; 0058bcef
    CALL FUN_0040cea0                   ; 0058bcf1
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0058bcf6
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058bcf9
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x8] ; 0058bcfc
    MOV dword ptr [ESI + 0xd064],EBX    ; 0058bd00
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x30] ; 0058bd06
    MOV EBX,dword ptr [ESI + 0xd058]    ; 0058bd0a
    MOV dword ptr [ESI + 0xd060],0xc2200000 ; 0058bd10
    INC EBX                             ; 0058bd1a
    MOV dword ptr [ESI + 0xd068],EAX    ; 0058bd1b
    MOV dword ptr [ESI + 0xd058],EBX    ; 0058bd21
    MOV EDI,ESI                         ; 0058bd27
    MOV ESI,dword ptr [ESI + 0xd064]    ; 0058bd29
    PUSH ESI                            ; 0058bd2f
    PUSH EDI                            ; 0058bd30
    PUSH 0x5d87f6                       ; 0058bd31 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x005f1690]                ; 0058bd36 | PTR_DAT_005f1690
    PUSH EAX                            ; 0058bd3b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0058bd3c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    MOV EAX,0x1                         ; 0058bd41
    ADD ESP,0x10                        ; 0058bd46
    MOV ESP,EBP                         ; 0058bd49
    POP EBP                             ; 0058bd4b
    POP EDI                             ; 0058bd4c
    POP ESI                             ; 0058bd4d
    POP EBX                             ; 0058bd4e
    RET                                 ; 0058bd4f

