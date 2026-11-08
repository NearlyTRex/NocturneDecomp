; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b510(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00450c60 at 004515c8
;
; Referenced Globals:
;   undefined4 DAT_005d05f7
;   undefined4 DAT_005d05ff
;   undefined4 DAT_005d0607
;   undefined4 DAT_005d060f
;   undefined4 DAT_005f512c
;   undefined4 DAT_005f5130
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01b4d25c
;   undefined4 DAT_01b4d260
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb5260
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_00535ee0
;   FUN_00537e00
;   FUN_00537e30
;   FUN_00537fa0
;   FUN_005469a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b510
        ;   Label: FUN_0045b510
    PUSH ESI                            ; 0045b511
    PUSH EDI                            ; 0045b512
    PUSH EBP                            ; 0045b513
    MOV EBP,ESP                         ; 0045b514
    SUB ESP,0x164                       ; 0045b516
    AND ESP,0xfffffff8                  ; 0045b51c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0045b51f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b522
    MOV EDX,dword ptr [EAX + 0x25698]   ; 0045b525
    TEST EDX,EDX                        ; 0045b52b
    JNZ 0x0045b5d1                      ; 0045b52d
        ;   XREF to: 0045b5d1 (CONDITIONAL_JUMP)  ; LAB_0045b5d1
    XOR EBX,EBX                         ; 0045b533
    XOR EDI,EDI                         ; 0045b535
        ;   Label: LAB_0045b535
    MOV dword ptr [ESP + 0x20],EDI      ; 0045b537
    TEST EBX,EBX                        ; 0045b53b
    JZ 0x0045ba83                       ; 0045b53d
        ;   XREF to: 0045ba83 (CONDITIONAL_JUMP)  ; LAB_0045ba83
    MOV dword ptr [ESP + 0x158],EDI     ; 0045b543
    MOV dword ptr [ESP + 0x15c],EDI     ; 0045b54a
    MOV EAX,[0x0061b5a8]                ; 0045b551 | DAT_0061b5a8
        ;   Label: LAB_0045b551
    MOV EBX,dword ptr [ESP + 0x158]     ; 0045b556
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 0045b55d | DAT_01fb5260
    JGE 0x0045b6ae                      ; 0045b563
        ;   XREF to: 0045b6ae (CONDITIONAL_JUMP)  ; LAB_0045b6ae
    ADD EAX,dword ptr [ESP + 0x15c]     ; 0045b569
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0045b570
    LEA EAX,[EBX + 0x20]                ; 0045b576
    PUSH EAX                            ; 0045b579
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045b57a
    PUSH ECX                            ; 0045b57d
    LEA ESI,[ESP + 0x110]               ; 0045b57e
    LEA EDI,[ESP + 0x80]                ; 0045b585
    CALL FUN_00408de0                   ; 0045b58c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x110]               ; 0045b591
    ADD ESP,0x8                         ; 0045b598
    MOVSD ES:EDI,ESI                    ; 0045b59b
    MOVSD ES:EDI,ESI                    ; 0045b59c
    MOVSD ES:EDI,ESI                    ; 0045b59d
    FLD float ptr [ESP + 0x78]          ; 0045b59e
    FABS                                ; 0045b5a2
    FCOMP double ptr [0x005d05ff]       ; 0045b5a4 | DAT_005d05ff
    FNSTSW AX                           ; 0045b5aa
    SAHF                                ; 0045b5ac
    JBE 0x0045b5f1                      ; 0045b5ad
        ;   XREF to: 0045b5f1 (CONDITIONAL_JUMP)  ; LAB_0045b5f1
    MOV ECX,dword ptr [ESP + 0x158]     ; 0045b5af
        ;   Label: LAB_0045b5af
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0045b5b6
    INC ECX                             ; 0045b5bd
    ADD EDX,0x4                         ; 0045b5be
    MOV dword ptr [ESP + 0x158],ECX     ; 0045b5c1
    MOV dword ptr [ESP + 0x15c],EDX     ; 0045b5c8
    JMP 0x0045b551                      ; 0045b5cf
        ;   XREF to: 0045b551 (UNCONDITIONAL_JUMP)  ; LAB_0045b551
    MOV ECX,dword ptr [EDX + 0x43c]     ; 0045b5d1
        ;   Label: LAB_0045b5d1
    MOV EAX,EDX                         ; 0045b5d7
    TEST ECX,ECX                        ; 0045b5d9
    JNZ 0x0045b5e7                      ; 0045b5db
        ;   XREF to: 0045b5e7 (CONDITIONAL_JUMP)  ; LAB_0045b5e7
    MOV EBX,0x1                         ; 0045b5dd
        ;   Label: LAB_0045b5dd
    JMP 0x0045b535                      ; 0045b5e2
        ;   XREF to: 0045b535 (UNCONDITIONAL_JUMP)  ; LAB_0045b535
    CMP ECX,0x5                         ; 0045b5e7
        ;   Label: LAB_0045b5e7
    JZ 0x0045b5dd                       ; 0045b5ea
        ;   XREF to: 0045b5dd (CONDITIONAL_JUMP)  ; LAB_0045b5dd
    JMP 0x0045b535                      ; 0045b5ec
        ;   XREF to: 0045b535 (UNCONDITIONAL_JUMP)  ; LAB_0045b535
    FLD float ptr [ESP + 0x7c]          ; 0045b5f1
        ;   Label: LAB_0045b5f1
    FABS                                ; 0045b5f5
    FCOMP double ptr [0x005d0607]       ; 0045b5f7 | DAT_005d0607
    FNSTSW AX                           ; 0045b5fd
    SAHF                                ; 0045b5ff
    JA 0x0045b5af                       ; 0045b600
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    FLDZ                                ; 0045b602
    FCOMP float ptr [ESP + 0x80]        ; 0045b604
    FNSTSW AX                           ; 0045b60b
    SAHF                                ; 0045b60d
    JA 0x0045b5af                       ; 0045b60e
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    CMP dword ptr [ESP + 0x80],0x40c00000 ; 0045b610
    JG 0x0045b5af                       ; 0045b61b
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    CMP EBX,dword ptr [EBP + 0x14]      ; 0045b61d
    JZ 0x0045b5af                       ; 0045b620
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    PUSH EBX                            ; 0045b622
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b623
    CALL dword ptr [EAX + 0x114]        ; 0045b629
    ADD ESP,0x4                         ; 0045b62f
    TEST EAX,EAX                        ; 0045b632
    JNZ 0x0045b5af                      ; 0045b634
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    LEA EAX,[ESP + 0x2c]                ; 0045b63a
    PUSH EAX                            ; 0045b63e
    CALL FUN_00537fa0                   ; 0045b63f
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537fa0()
    ADD ESP,0x4                         ; 0045b644
    LEA ESI,[ESP + 0x2c]                ; 0045b647
    PUSH ESI                            ; 0045b64b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045b64c
    PUSH EBX                            ; 0045b652
    CALL dword ptr [EAX + 0x44]         ; 0045b653
    ADD ESP,0x8                         ; 0045b656
    CMP EAX,0x2                         ; 0045b659
    JNZ 0x0045b5af                      ; 0045b65c
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    FLD float ptr [ESP + 0x80]          ; 0045b662
    FSUB float ptr [ESP + 0x48]         ; 0045b669
    FADD double ptr [0x005d060f]        ; 0045b66d | DAT_005d060f
    FMUL double ptr [0x005d05f7]        ; 0045b673 | DAT_005d05f7
    FLD1                                ; 0045b679
    FSUBRP                              ; 0045b67b
    FST float ptr [ESP + 0x28]          ; 0045b67d
    FCOMP float ptr [ESP + 0x20]        ; 0045b681
    FNSTSW AX                           ; 0045b685
    SAHF                                ; 0045b687
    JC 0x0045b5af                       ; 0045b688
        ;   XREF to: 0045b5af (CONDITIONAL_JUMP)  ; LAB_0045b5af
    FLD float ptr [ESP + 0x28]          ; 0045b68e
    FLDZ                                ; 0045b692
    FCOMPP                              ; 0045b694
    FNSTSW AX                           ; 0045b696
    SAHF                                ; 0045b698
    JBE 0x0045b6a1                      ; 0045b699
        ;   XREF to: 0045b6a1 (CONDITIONAL_JUMP)  ; LAB_0045b6a1
    XOR EAX,EAX                         ; 0045b69b
    MOV dword ptr [ESP + 0x28],EAX      ; 0045b69d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045b6a1
        ;   Label: LAB_0045b6a1
    MOV dword ptr [ESP + 0x20],EAX      ; 0045b6a5
    JMP 0x0045b5af                      ; 0045b6a9
        ;   XREF to: 0045b5af (UNCONDITIONAL_JUMP)  ; LAB_0045b5af
    PUSH EAX                            ; 0045b6ae | DAT_01e661b8
        ;   Label: LAB_0045b6ae
    CALL FUN_00537e00                   ; 0045b6af
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0045b6b4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045b6b7
    PUSH EBX                            ; 0045b6ba
    MOV ESI,dword ptr [0x0061b5a8]      ; 0045b6bb | DAT_0061b5a8
    PUSH ESI                            ; 0045b6c1 | DAT_01e661b8
    MOV EDI,0x40600000                  ; 0045b6c2
    CALL FUN_00537e30                   ; 0045b6c7
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    MOV EAX,0x3fc00000                  ; 0045b6cc
    LEA ESI,[ESP + 0xd4]                ; 0045b6d1
    ADD ESP,0x8                         ; 0045b6d8
    XOR EDX,EDX                         ; 0045b6db
    MOV dword ptr [ESP + 0x150],EAX     ; 0045b6dd
    LEA EAX,[ESP + 0xc0]                ; 0045b6e4
    MOV dword ptr [ESP + 0x154],EDI     ; 0045b6eb
    PUSH EAX                            ; 0045b6f2
    MOV dword ptr [ESP + 0xc4],EDX      ; 0045b6f3
    MOV dword ptr [ESP + 0xc8],EDX      ; 0045b6fa
    PUSH EBX                            ; 0045b701
    MOV dword ptr [ESP + 0xd0],EDI      ; 0045b702
    LEA EDI,[ESP + 0x134]               ; 0045b709
    CALL FUN_00408cf0                   ; 0045b710
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0xd4]                ; 0045b715
    LEA EBX,[ESP + 0x134]               ; 0045b71c
    ADD ESP,0x8                         ; 0045b723
    LEA EAX,[ESP + 0xfc]                ; 0045b726
    MOVSD ES:EDI,ESI                    ; 0045b72d
    MOVSD ES:EDI,ESI                    ; 0045b72e
    MOVSD ES:EDI,ESI                    ; 0045b72f
    CMP EAX,EBX                         ; 0045b730
    JZ 0x0045b75e                       ; 0045b732
        ;   XREF to: 0045b75e (CONDITIONAL_JUMP)  ; LAB_0045b75e
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0045b734
    MOV dword ptr [ESP + 0xfc],EAX      ; 0045b73b
    MOV EAX,dword ptr [ESP + 0x130]     ; 0045b742
    MOV dword ptr [ESP + 0x100],EAX     ; 0045b749
    MOV EAX,dword ptr [ESP + 0x134]     ; 0045b750
    MOV dword ptr [ESP + 0x104],EAX     ; 0045b757
    MOV EDI,dword ptr [0x01b4d25c]      ; 0045b75e | DAT_01b4d25c
        ;   Label: LAB_0045b75e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b764
    PUSH EDI                            ; 0045b767
    ADD EAX,0x2b4                       ; 0045b768
    LEA ESI,[ESP + 0xac]                ; 0045b76d
    PUSH EAX                            ; 0045b774
    LEA EBX,[ESP + 0x5c]                ; 0045b775
    LEA EDI,[ESP + 0x8c]                ; 0045b779
    CALL FUN_005469a0                   ; 0045b780
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 0045b785
    LEA EAX,[ESP + 0x84]                ; 0045b788
    LEA ESI,[ESP + 0xa8]                ; 0045b78f
    PUSH EAX                            ; 0045b796
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b797
    MOVSD ES:EDI,ESI                    ; 0045b79a
    MOVSD ES:EDI,ESI                    ; 0045b79b
    MOVSD ES:EDI,ESI                    ; 0045b79c
    PUSH EAX                            ; 0045b79d
    LEA ESI,[ESP + 0x140]               ; 0045b79e
    LEA EDI,[ESP + 0x68]                ; 0045b7a5
    CALL FUN_00408d70                   ; 0045b7a9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x140]               ; 0045b7ae
    ADD ESP,0x8                         ; 0045b7b5
    LEA EAX,[ESP + 0x60]                ; 0045b7b8
    MOVSD ES:EDI,ESI                    ; 0045b7bc
    MOVSD ES:EDI,ESI                    ; 0045b7bd
    MOVSD ES:EDI,ESI                    ; 0045b7be
    CMP EBX,EAX                         ; 0045b7bf
    JZ 0x0045b7db                       ; 0045b7c1
        ;   XREF to: 0045b7db (CONDITIONAL_JUMP)  ; LAB_0045b7db
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045b7c3
    MOV dword ptr [ESP + 0x54],EAX      ; 0045b7c7
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045b7cb
    MOV dword ptr [ESP + 0x58],EAX      ; 0045b7cf
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045b7d3
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045b7d7
    FLD float ptr [ESP + 0x54]          ; 0045b7db
        ;   Label: LAB_0045b7db
    FLD float ptr [ESP + 0x58]          ; 0045b7df
    FLD float ptr [ESP + 0x5c]          ; 0045b7e3
    LEA EDI,[ESP + 0x114]               ; 0045b7e7
    LEA ESI,[ESP + 0x9c]                ; 0045b7ee
    LEA EAX,[ESP + 0x114]               ; 0045b7f5
    LEA EBX,[ESP + 0xe4]                ; 0045b7fc
    FXCH ST2                            ; 0045b803
    FADD float ptr [ESP + 0xfc]         ; 0045b805
    FXCH                                ; 0045b80c
    FADD float ptr [ESP + 0x100]        ; 0045b80e
    FXCH ST2                            ; 0045b815
    FADD float ptr [ESP + 0x104]        ; 0045b817
    FXCH ST2                            ; 0045b81e
    FSTP float ptr [ESP + 0xa0]         ; 0045b820
    FXCH                                ; 0045b827
    FSTP float ptr [ESP + 0xa4]         ; 0045b829
    FSTP float ptr [ESP + 0x9c]         ; 0045b830
    MOVSD ES:EDI,ESI                    ; 0045b837
    MOVSD ES:EDI,ESI                    ; 0045b838
    MOVSD ES:EDI,ESI                    ; 0045b839
    CMP EBX,EAX                         ; 0045b83a
    JZ 0x0045b868                       ; 0045b83c
        ;   XREF to: 0045b868 (CONDITIONAL_JUMP)  ; LAB_0045b868
    MOV EAX,dword ptr [ESP + 0x114]     ; 0045b83e
    MOV dword ptr [ESP + 0xe4],EAX      ; 0045b845
    MOV EAX,dword ptr [ESP + 0x118]     ; 0045b84c
    MOV dword ptr [ESP + 0xe8],EAX      ; 0045b853
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0045b85a
    MOV dword ptr [ESP + 0xec],EAX      ; 0045b861
    LEA EAX,[ESP + 0xe4]                ; 0045b868
        ;   Label: LAB_0045b868
    PUSH EAX                            ; 0045b86f
    LEA EAX,[ESP + 0x58]                ; 0045b870
    PUSH EAX                            ; 0045b874
    MOV EDX,dword ptr [0x0061b5a8]      ; 0045b875 | DAT_0061b5a8
    PUSH EDX                            ; 0045b87b | DAT_01e661b8
    CALL FUN_00535ee0                   ; 0045b87c
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0045b881
    FLD float ptr [ESP + 0x16c]         ; 0045b888
    ADD ESP,0xc                         ; 0045b88f
    FLDZ                                ; 0045b892
    FXCH                                ; 0045b894
    FST float ptr [ESP + 0x24]          ; 0045b896
    FSTP double ptr [ESP + 0x8]         ; 0045b89a
    FCOMP double ptr [ESP + 0x8]        ; 0045b89e
    FNSTSW AX                           ; 0045b8a2
    SAHF                                ; 0045b8a4
    JA 0x0045b8e9                       ; 0045b8a5
        ;   XREF to: 0045b8e9 (CONDITIONAL_JUMP)  ; LAB_0045b8e9
    FLD1                                ; 0045b8a7
    FCOMP double ptr [ESP + 0x8]        ; 0045b8a9
    FNSTSW AX                           ; 0045b8ad
    SAHF                                ; 0045b8af
    JBE 0x0045b8e9                      ; 0045b8b0
        ;   XREF to: 0045b8e9 (CONDITIONAL_JUMP)  ; LAB_0045b8e9
    FLD float ptr [ESP + 0x154]         ; 0045b8b2
    FLD float ptr [ESP + 0x24]          ; 0045b8b9
    FMUL ST1                            ; 0045b8bd
    FLD float ptr [ESP + 0x150]         ; 0045b8bf
    FXCH                                ; 0045b8c6
    FSUB ST0,ST1                        ; 0045b8c8
    FXCH ST2                            ; 0045b8ca
    FSUBRP                              ; 0045b8cc
    FDIVP                               ; 0045b8ce
    FLD1                                ; 0045b8d0
    FSUBRP                              ; 0045b8d2
    FST float ptr [ESP + 0x24]          ; 0045b8d4
    FCOMP float ptr [ESP + 0x20]        ; 0045b8d8
    FNSTSW AX                           ; 0045b8dc
    SAHF                                ; 0045b8de
    JBE 0x0045b8e9                      ; 0045b8df
        ;   XREF to: 0045b8e9 (CONDITIONAL_JUMP)  ; LAB_0045b8e9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045b8e1
    MOV dword ptr [ESP + 0x20],EAX      ; 0045b8e5
    MOV ECX,dword ptr [0x01b4d260]      ; 0045b8e9 | DAT_01b4d260
        ;   Label: LAB_0045b8e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045b8ef
    PUSH ECX                            ; 0045b8f2
    ADD EAX,0x2b4                       ; 0045b8f3
    PUSH EAX                            ; 0045b8f8
    LEA ESI,[ESP + 0x128]               ; 0045b8f9
    LEA EDI,[ESP + 0xf8]                ; 0045b900
    CALL FUN_005469a0                   ; 0045b907
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    LEA ESI,[ESP + 0x128]               ; 0045b90c
    ADD ESP,0x8                         ; 0045b913
    LEA EAX,[ESP + 0xf0]                ; 0045b916
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045b91d
    PUSH EAX                            ; 0045b920
    MOVSD ES:EDI,ESI                    ; 0045b921
    MOVSD ES:EDI,ESI                    ; 0045b922
    MOVSD ES:EDI,ESI                    ; 0045b923
    PUSH EBX                            ; 0045b924
    LEA ESI,[ESP + 0xbc]                ; 0045b925
    LEA EDI,[ESP + 0xe0]                ; 0045b92c
    CALL FUN_00408d70                   ; 0045b933
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0xbc]                ; 0045b938
    LEA EBX,[ESP + 0xe0]                ; 0045b93f
    ADD ESP,0x8                         ; 0045b946
    LEA EAX,[ESP + 0x54]                ; 0045b949
    MOVSD ES:EDI,ESI                    ; 0045b94d
    MOVSD ES:EDI,ESI                    ; 0045b94e
    MOVSD ES:EDI,ESI                    ; 0045b94f
    CMP EAX,EBX                         ; 0045b950
    JZ 0x0045b975                       ; 0045b952
        ;   XREF to: 0045b975 (CONDITIONAL_JUMP)  ; LAB_0045b975
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0045b954
    MOV dword ptr [ESP + 0x54],EAX      ; 0045b95b
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0045b95f
    MOV dword ptr [ESP + 0x58],EAX      ; 0045b966
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0045b96a
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045b971
    FLD float ptr [ESP + 0x54]          ; 0045b975
        ;   Label: LAB_0045b975
    FLD float ptr [ESP + 0x58]          ; 0045b979
    FLD float ptr [ESP + 0x5c]          ; 0045b97d
    LEA EDI,[ESP + 0x90]                ; 0045b981
    LEA ESI,[ESP + 0x6c]                ; 0045b988
    LEA EAX,[ESP + 0x90]                ; 0045b98c
    LEA EBX,[ESP + 0xe4]                ; 0045b993
    FXCH ST2                            ; 0045b99a
    FADD float ptr [ESP + 0xfc]         ; 0045b99c
    FXCH                                ; 0045b9a3
    FADD float ptr [ESP + 0x100]        ; 0045b9a5
    FXCH ST2                            ; 0045b9ac
    FADD float ptr [ESP + 0x104]        ; 0045b9ae
    FXCH ST2                            ; 0045b9b5
    FSTP float ptr [ESP + 0x70]         ; 0045b9b7
    FXCH                                ; 0045b9bb
    FSTP float ptr [ESP + 0x74]         ; 0045b9bd
    FSTP float ptr [ESP + 0x6c]         ; 0045b9c1
    MOVSD ES:EDI,ESI                    ; 0045b9c5
    MOVSD ES:EDI,ESI                    ; 0045b9c6
    MOVSD ES:EDI,ESI                    ; 0045b9c7
    CMP EBX,EAX                         ; 0045b9c8
    JZ 0x0045b9f6                       ; 0045b9ca
        ;   XREF to: 0045b9f6 (CONDITIONAL_JUMP)  ; LAB_0045b9f6
    MOV EAX,dword ptr [ESP + 0x90]      ; 0045b9cc
    MOV dword ptr [ESP + 0xe4],EAX      ; 0045b9d3
    MOV EAX,dword ptr [ESP + 0x94]      ; 0045b9da
    MOV dword ptr [ESP + 0xe8],EAX      ; 0045b9e1
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045b9e8
    MOV dword ptr [ESP + 0xec],EAX      ; 0045b9ef
    LEA EAX,[ESP + 0xe4]                ; 0045b9f6
        ;   Label: LAB_0045b9f6
    PUSH EAX                            ; 0045b9fd
    LEA EAX,[ESP + 0x58]                ; 0045b9fe
    PUSH EAX                            ; 0045ba02
    MOV ESI,dword ptr [0x0061b5a8]      ; 0045ba03 | DAT_0061b5a8
    PUSH ESI                            ; 0045ba09 | DAT_01e661b8
    CALL FUN_00535ee0                   ; 0045ba0a
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0045ba0f
    FLD float ptr [ESP + 0x16c]         ; 0045ba16
    ADD ESP,0xc                         ; 0045ba1d
    FLDZ                                ; 0045ba20
    FXCH                                ; 0045ba22
    FST float ptr [ESP + 0x18]          ; 0045ba24
    FSTP double ptr [ESP]               ; 0045ba28
    FCOMP double ptr [ESP]              ; 0045ba2b
    FNSTSW AX                           ; 0045ba2e
    SAHF                                ; 0045ba30
    JA 0x0045ba74                       ; 0045ba31
        ;   XREF to: 0045ba74 (CONDITIONAL_JUMP)  ; LAB_0045ba74
    FLD1                                ; 0045ba33
    FCOMP double ptr [ESP]              ; 0045ba35
    FNSTSW AX                           ; 0045ba38
    SAHF                                ; 0045ba3a
    JBE 0x0045ba74                      ; 0045ba3b
        ;   XREF to: 0045ba74 (CONDITIONAL_JUMP)  ; LAB_0045ba74
    FLD float ptr [ESP + 0x154]         ; 0045ba3d
    FLD float ptr [ESP + 0x18]          ; 0045ba44
    FMUL ST1                            ; 0045ba48
    FLD float ptr [ESP + 0x150]         ; 0045ba4a
    FXCH                                ; 0045ba51
    FSUB ST0,ST1                        ; 0045ba53
    FXCH ST2                            ; 0045ba55
    FSUBRP                              ; 0045ba57
    FDIVP                               ; 0045ba59
    FLD1                                ; 0045ba5b
    FSUBRP                              ; 0045ba5d
    FST float ptr [ESP + 0x18]          ; 0045ba5f
    FCOMP float ptr [ESP + 0x20]        ; 0045ba63
    FNSTSW AX                           ; 0045ba67
    SAHF                                ; 0045ba69
    JBE 0x0045ba74                      ; 0045ba6a
        ;   XREF to: 0045ba74 (CONDITIONAL_JUMP)  ; LAB_0045ba74
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045ba6c
    MOV dword ptr [ESP + 0x20],EAX      ; 0045ba70
    MOV EDI,dword ptr [0x0061b5a8]      ; 0045ba74 | DAT_0061b5a8
        ;   Label: LAB_0045ba74
    PUSH EDI                            ; 0045ba7a | DAT_01e661b8
    CALL FUN_00537e00                   ; 0045ba7b
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e00()
    ADD ESP,0x4                         ; 0045ba80
    FLD float ptr [ESP + 0x20]          ; 0045ba83
        ;   Label: LAB_0045ba83
    FLD1                                ; 0045ba87
    FCOMPP                              ; 0045ba89
    FNSTSW AX                           ; 0045ba8b
    SAHF                                ; 0045ba8d
    JNC 0x0045ba98                      ; 0045ba8e
        ;   XREF to: 0045ba98 (CONDITIONAL_JUMP)  ; LAB_0045ba98
    MOV dword ptr [ESP + 0x20],0x3f800000 ; 0045ba90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045ba98
        ;   Label: LAB_0045ba98
    FLD float ptr [ESP + 0x20]          ; 0045ba9b
    FSUB float ptr [EAX + 0x256f4]      ; 0045ba9f
    FLDZ                                ; 0045baa5
    FXCH                                ; 0045baa7
    FST float ptr [ESP + 0x1c]          ; 0045baa9
    FSTP double ptr [ESP + 0x10]        ; 0045baad
    FCOMP double ptr [ESP + 0x10]       ; 0045bab1
    FNSTSW AX                           ; 0045bab5
    SAHF                                ; 0045bab7
    JBE 0x0045bb17                      ; 0045bab8
        ;   XREF to: 0045bb17 (CONDITIONAL_JUMP)  ; LAB_0045bb17
    FLD1                                ; 0045baba
    FDIV float ptr [0x005f5130]         ; 0045babc | DAT_005f5130
    FLD float ptr [EBP + 0x18]          ; 0045bac2
    FCHS                                ; 0045bac5
    FXCH                                ; 0045bac7
    FSTP float ptr [ESP + 0x144]        ; 0045bac9
    FMUL float ptr [ESP + 0x144]        ; 0045bad0
    FLD float ptr [ESP + 0x1c]          ; 0045bad7
    FXCH                                ; 0045badb
    FSTP float ptr [ESP + 0x14c]        ; 0045badd
    FCOMP float ptr [ESP + 0x14c]       ; 0045bae4
    FNSTSW AX                           ; 0045baeb
    SAHF                                ; 0045baed
    JC 0x0045bb0a                       ; 0045baee
        ;   XREF to: 0045bb0a (CONDITIONAL_JUMP)  ; LAB_0045bb0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045baf0
        ;   Label: LAB_0045baf0
    FLD float ptr [EAX + 0x256f4]       ; 0045baf3
    FADD float ptr [ESP + 0x1c]         ; 0045baf9
    FSTP float ptr [EAX + 0x256f4]      ; 0045bafd
    MOV ESP,EBP                         ; 0045bb03
    POP EBP                             ; 0045bb05
    POP EDI                             ; 0045bb06
    POP ESI                             ; 0045bb07
    POP EBX                             ; 0045bb08
    RET                                 ; 0045bb09
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0045bb0a
        ;   Label: LAB_0045bb0a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045bb11
    JMP 0x0045baf0                      ; 0045bb15
        ;   XREF to: 0045baf0 (UNCONDITIONAL_JUMP)  ; LAB_0045baf0
    JNC 0x0045baf0                      ; 0045bb17
        ;   XREF to: 0045baf0 (CONDITIONAL_JUMP)  ; LAB_0045baf0
        ;   Label: LAB_0045bb17
    FLD float ptr [EBP + 0x18]          ; 0045bb19
    FDIV float ptr [0x005f512c]         ; 0045bb1c | DAT_005f512c
    FLD float ptr [ESP + 0x1c]          ; 0045bb22
    FXCH                                ; 0045bb26
    FSTP float ptr [ESP + 0x148]        ; 0045bb28
    FCOMP float ptr [ESP + 0x148]       ; 0045bb2f
    FNSTSW AX                           ; 0045bb36
    SAHF                                ; 0045bb38
    JBE 0x0045baf0                      ; 0045bb39
        ;   XREF to: 0045baf0 (CONDITIONAL_JUMP)  ; LAB_0045baf0
    MOV EAX,dword ptr [ESP + 0x148]     ; 0045bb3b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045bb42
    JMP 0x0045baf0                      ; 0045bb46
        ;   XREF to: 0045baf0 (UNCONDITIONAL_JUMP)  ; LAB_0045baf0

