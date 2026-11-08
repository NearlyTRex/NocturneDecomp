; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051f490(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0051ecc0 at 0051f1cd
;
; Referenced Globals:
;   undefined4 DAT_005e2b53
;   undefined4 DAT_005e2b5b
;   undefined4 DAT_005e2b63
;   undefined4 DAT_005e2b6b
;   undefined4 DAT_005e2b73
;   undefined4 DAT_005e2b7b
;   undefined4 DAT_005e2b83
;   undefined4 DAT_005e2b87
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_0040d0c0
;   FUN_00423850
;   FUN_004d00c0
;   FUN_005035c0
;   FUN_00513650
;   FUN_00513ea0
;   FUN_005838f0
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f490
        ;   Label: FUN_0051f490
    PUSH ESI                            ; 0051f491
    PUSH EDI                            ; 0051f492
    PUSH EBP                            ; 0051f493
    MOV EBP,ESP                         ; 0051f494
    SUB ESP,0xa8                        ; 0051f496
    AND ESP,0xfffffff8                  ; 0051f49c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051f49f
    MOV EDX,0x3e800000                  ; 0051f4a2
    MOV ECX,0x3f490fdb                  ; 0051f4a7
    MOV EAX,[0x01cedef4]                ; 0051f4ac | DAT_01cedef4
    MOV ESI,dword ptr [EBX + 0x25638]   ; 0051f4b1
    MOV dword ptr [ESP + 0x94],EDX      ; 0051f4b7
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0051f4be
    MOV dword ptr [ESP + 0x90],ECX      ; 0051f4c5
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051f4cc
    TEST ESI,ESI                        ; 0051f4d3
    JNZ 0x0051f4de                      ; 0051f4d5
        ;   XREF to: 0051f4de (CONDITIONAL_JUMP)  ; LAB_0051f4de
    MOV ESP,EBP                         ; 0051f4d7
    POP EBP                             ; 0051f4d9
    POP EDI                             ; 0051f4da
    POP ESI                             ; 0051f4db
    POP EBX                             ; 0051f4dc
    RET                                 ; 0051f4dd
    PUSH 0x34                           ; 0051f4de
        ;   Label: LAB_0051f4de
    PUSH 0x0                            ; 0051f4e0
    LEA EAX,[EBX + 0x10a68]             ; 0051f4e2
    PUSH EAX                            ; 0051f4e8
    LEA EDI,[ESP + 0x70]                ; 0051f4e9
    LEA ESI,[ESP + 0x28]                ; 0051f4ed
    CALL FUN_005b77c0                   ; 0051f4f1
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    LEA EAX,[EBX + 0x20]                ; 0051f4f6
    MOV EDX,dword ptr [0x01cedef4]      ; 0051f4f9 | DAT_01cedef4
    ADD ESP,0xc                         ; 0051f4ff
    FLD float ptr [EAX]                 ; 0051f502
    FLD float ptr [EAX + 0x4]           ; 0051f504
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 0051f507
    FLD float ptr [EAX + 0x8]           ; 0051f50e
    FXCH ST2                            ; 0051f511
    FSUB float ptr [EDX + 0x20]         ; 0051f513
    FXCH                                ; 0051f516
    FSUB float ptr [EDX + 0x24]         ; 0051f518
    FXCH ST2                            ; 0051f51b
    FSUB float ptr [EDX + 0x28]         ; 0051f51d
    FXCH                                ; 0051f520
    FSTP float ptr [ESP + 0x1c]         ; 0051f522
    FXCH                                ; 0051f526
    FSTP float ptr [ESP + 0x20]         ; 0051f528
    FSTP float ptr [ESP + 0x24]         ; 0051f52c
    MOVSD ES:EDI,ESI                    ; 0051f530
    MOVSD ES:EDI,ESI                    ; 0051f531
    MOVSD ES:EDI,ESI                    ; 0051f532
    XOR EDI,EDI                         ; 0051f533
    MOV EAX,dword ptr [EBX + 0x25638]   ; 0051f535
    MOV dword ptr [ESP + 0x8c],EDI      ; 0051f53b
    CMP EAX,0x2                         ; 0051f542
    JNZ 0x0051f929                      ; 0051f545
        ;   XREF to: 0051f929 (CONDITIONAL_JUMP)  ; LAB_0051f929
    LEA EAX,[EBX + 0x2437c]             ; 0051f54b
        ;   Label: LAB_0051f54b
    MOV EDX,dword ptr [EAX + 0x468]     ; 0051f551
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 0051f557
    TEST EAX,EAX                        ; 0051f55e
    JZ 0x0051f5ab                       ; 0051f560
        ;   XREF to: 0051f5ab (CONDITIONAL_JUMP)  ; LAB_0051f5ab
    CMP dword ptr [EAX + 0x6c4],0x0     ; 0051f562
    JLE 0x0051f5ab                      ; 0051f569
        ;   XREF to: 0051f5ab (CONDITIONAL_JUMP)  ; LAB_0051f5ab
    LEA EAX,[ESP + 0xa0]                ; 0051f56b
    PUSH EAX                            ; 0051f572
    MOV ESI,0x461c3f9a                  ; 0051f573
    PUSH EBX                            ; 0051f578
    MOV dword ptr [ESP + 0xa8],ESI      ; 0051f579
    CALL FUN_004d00c0                   ; 0051f580
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d00c0()
    ADD ESP,0x8                         ; 0051f585
    TEST EAX,EAX                        ; 0051f588
    JZ 0x0051f5ab                       ; 0051f58a
        ;   XREF to: 0051f5ab (CONDITIONAL_JUMP)  ; LAB_0051f5ab
    CMP dword ptr [ESP + 0xa0],0x41f00000 ; 0051f58c
    JGE 0x0051f5ab                      ; 0051f597
        ;   XREF to: 0051f5ab (CONDITIONAL_JUMP)  ; LAB_0051f5ab
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051f599
    MOV dword ptr [ESP + 0x8c],0x1      ; 0051f5a0
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0051f5ab
        ;   Label: LAB_0051f5ab
    CMP EDX,dword ptr [EBX + 0x25640]   ; 0051f5b2
    JZ 0x0051f5c4                       ; 0051f5b8
        ;   XREF to: 0051f5c4 (CONDITIONAL_JUMP)  ; LAB_0051f5c4
    MOV dword ptr [EBX + 0x10a80],0x1   ; 0051f5ba
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051f5c4
        ;   Label: LAB_0051f5c4
    LEA EDI,[ESP + 0x34]                ; 0051f5cb
    LEA ESI,[ESP + 0x58]                ; 0051f5cf
    LEA EDX,[EBX + 0x20]                ; 0051f5d3
    FLD float ptr [EAX + 0x24]          ; 0051f5d6
    FLD float ptr [EAX + 0x28]          ; 0051f5d9
    FLD float ptr [EAX + 0x20]          ; 0051f5dc
    LEA EAX,[ESP + 0x34]                ; 0051f5df
    FSUB float ptr [EDX]                ; 0051f5e3
    FXCH ST2                            ; 0051f5e5
    FSUB float ptr [EDX + 0x4]          ; 0051f5e7
    FXCH                                ; 0051f5ea
    FSUB float ptr [EDX + 0x8]          ; 0051f5ec
    FXCH ST2                            ; 0051f5ef
    FSTP float ptr [ESP + 0x58]         ; 0051f5f1
    FSTP float ptr [ESP + 0x5c]         ; 0051f5f5
    FSTP float ptr [ESP + 0x60]         ; 0051f5f9
    LEA EDX,[ESP + 0x64]                ; 0051f5fd
    MOVSD ES:EDI,ESI                    ; 0051f601
    MOVSD ES:EDI,ESI                    ; 0051f602
    MOVSD ES:EDI,ESI                    ; 0051f603
    CMP EDX,EAX                         ; 0051f604
    JZ 0x0051f620                       ; 0051f606
        ;   XREF to: 0051f620 (CONDITIONAL_JUMP)  ; LAB_0051f620
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051f608
    MOV dword ptr [ESP + 0x64],EAX      ; 0051f60c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051f610
    MOV dword ptr [ESP + 0x68],EAX      ; 0051f614
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051f618
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051f61c
    FLD float ptr [ESP + 0x68]          ; 0051f620
        ;   Label: LAB_0051f620
    FMUL ST0                            ; 0051f624
    FLD float ptr [ESP + 0x64]          ; 0051f626
    FMUL ST0                            ; 0051f62a
    FADDP                               ; 0051f62c
    FLD float ptr [ESP + 0x6c]          ; 0051f62e
    FMUL ST0                            ; 0051f632
    FADDP                               ; 0051f634
    FSQRT                               ; 0051f636
    MOV ECX,dword ptr [EBX + 0x25638]   ; 0051f638
    FSTP float ptr [ESP]                ; 0051f63e
    CMP ECX,0x3                         ; 0051f641
    JNZ 0x0051f64b                      ; 0051f644
        ;   XREF to: 0051f64b (CONDITIONAL_JUMP)  ; LAB_0051f64b
    XOR ESI,ESI                         ; 0051f646
    MOV dword ptr [ESP],ESI             ; 0051f648
    MOV EDI,dword ptr [EBX + 0x25654]   ; 0051f64b
        ;   Label: LAB_0051f64b
    TEST EDI,EDI                        ; 0051f651
    JZ 0x0051f79a                       ; 0051f653
        ;   XREF to: 0051f79a (CONDITIONAL_JUMP)  ; LAB_0051f79a
    MOV EDX,dword ptr [EDI + 0x43c]     ; 0051f659
    XOR ESI,ESI                         ; 0051f65f
    CMP EDX,0x9                         ; 0051f661
    JNZ 0x0051f937                      ; 0051f664
        ;   XREF to: 0051f937 (CONDITIONAL_JUMP)  ; LAB_0051f937
    FLD float ptr [ESP]                 ; 0051f66a
    FCOMP double ptr [0x005e2b63]       ; 0051f66d | DAT_005e2b63
    FNSTSW AX                           ; 0051f673
    SAHF                                ; 0051f675
    JNC 0x0051f6aa                      ; 0051f676
        ;   XREF to: 0051f6aa (CONDITIONAL_JUMP)  ; LAB_0051f6aa
    LEA EAX,[EBX + 0x2b4]               ; 0051f678
    PUSH EAX                            ; 0051f67e
    CALL FUN_005035c0                   ; 0051f67f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051f684
    ADD ESP,0x4                         ; 0051f687
    CMP EAX,0x7                         ; 0051f68a
    JNZ 0x0051f6a2                      ; 0051f68d
        ;   XREF to: 0051f6a2 (CONDITIONAL_JUMP)  ; LAB_0051f6a2
    CMP dword ptr [EBX + 0x25640],0x0   ; 0051f68f
    JZ 0x0051f6a2                       ; 0051f696
        ;   XREF to: 0051f6a2 (CONDITIONAL_JUMP)  ; LAB_0051f6a2
    MOV dword ptr [EBX + 0x10a74],0x1   ; 0051f698
    TEST ESI,ESI                        ; 0051f6a2
        ;   Label: LAB_0051f6a2
    JZ 0x0051f79a                       ; 0051f6a4
        ;   XREF to: 0051f79a (CONDITIONAL_JUMP)  ; LAB_0051f79a
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0051f6aa
        ;   Label: LAB_0051f6aa
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051f6b1
    PUSH ECX                            ; 0051f6b8
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0051f6b9
    CALL dword ptr [EAX + 0xcc]         ; 0051f6bf
    ADD ESP,0x4                         ; 0051f6c5
    MOV EDX,EAX                         ; 0051f6c8
    TEST EAX,EAX                        ; 0051f6ca
    JNZ 0x0051f6e3                      ; 0051f6cc
        ;   XREF to: 0051f6e3 (CONDITIONAL_JUMP)  ; LAB_0051f6e3
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051f6ce
    ADD EAX,0x20                        ; 0051f6d5
    PUSH EAX                            ; 0051f6d8
    CALL FUN_00513ea0                   ; 0051f6d9
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00513ea0()
    ADD ESP,0x4                         ; 0051f6de
    MOV EDX,EAX                         ; 0051f6e1
    MOV ESI,dword ptr [EBX + 0x6c]      ; 0051f6e3
        ;   Label: LAB_0051f6e3
    PUSH ESI                            ; 0051f6e6
    LEA EAX,[ESP + 0x74]                ; 0051f6e7
    PUSH EAX                            ; 0051f6eb
    LEA EAX,[EBX + 0x20]                ; 0051f6ec
    PUSH EAX                            ; 0051f6ef
    PUSH EDX                            ; 0051f6f0
    CALL FUN_00513650                   ; 0051f6f1
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; undefined FUN_00513650()
    ADD ESP,0x10                        ; 0051f6f6
    TEST EAX,EAX                        ; 0051f6f9
    JZ 0x0051f79a                       ; 0051f6fb
        ;   XREF to: 0051f79a (CONDITIONAL_JUMP)  ; LAB_0051f79a
    FLD float ptr [ESP + 0x74]          ; 0051f701
    FSUB float ptr [EBX + 0x34]         ; 0051f705
    SUB ESP,0x4                         ; 0051f708
    FSTP float ptr [ESP]                ; 0051f70b
    CALL FUN_0040d0c0                   ; 0051f70e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 0051f713
    FLD float ptr [ESP + 0xa8]          ; 0051f71a
    FMUL float ptr [0x005e2b6b]         ; 0051f721 | DAT_005e2b6b
    ADD ESP,0x4                         ; 0051f727
    FMUL double ptr [0x005e2b73]        ; 0051f72a | DAT_005e2b73
    FLD float ptr [ESP + 0x94]          ; 0051f730
    FCHS                                ; 0051f737
    FSTP float ptr [ESP + 0x88]         ; 0051f739
    FST float ptr [EBX + 0x10a90]       ; 0051f740
    FCOMP float ptr [ESP + 0x88]        ; 0051f746
    FNSTSW AX                           ; 0051f74d
    SAHF                                ; 0051f74f
    JNC 0x0051f75f                      ; 0051f750
        ;   XREF to: 0051f75f (CONDITIONAL_JUMP)  ; LAB_0051f75f
    MOV EAX,dword ptr [ESP + 0x88]      ; 0051f752
    MOV dword ptr [EBX + 0x10a90],EAX   ; 0051f759
    FLD float ptr [EBX + 0x10a90]       ; 0051f75f
        ;   Label: LAB_0051f75f
    FCOMP float ptr [ESP + 0x94]        ; 0051f765
    FNSTSW AX                           ; 0051f76c
    SAHF                                ; 0051f76e
    JBE 0x0051f77e                      ; 0051f76f
        ;   XREF to: 0051f77e (CONDITIONAL_JUMP)  ; LAB_0051f77e
    MOV EAX,dword ptr [ESP + 0x94]      ; 0051f771
    MOV dword ptr [EBX + 0x10a90],EAX   ; 0051f778
    FLD float ptr [ESP]                 ; 0051f77e
        ;   Label: LAB_0051f77e
    FCOMP double ptr [0x005e2b7b]       ; 0051f781 | DAT_005e2b7b
    FNSTSW AX                           ; 0051f787
    SAHF                                ; 0051f789
    JNC 0x0051f9ad                      ; 0051f78a
        ;   XREF to: 0051f9ad (CONDITIONAL_JUMP)  ; LAB_0051f9ad
    MOV dword ptr [EBX + 0x10a68],0x1   ; 0051f790
        ;   Label: LAB_0051f790
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051f79a
        ;   Label: LAB_0051f79a
    LEA EDI,[ESP + 0x28]                ; 0051f7a1
    LEA ESI,[ESP + 0x4]                 ; 0051f7a5
    LEA EDX,[EBX + 0x20]                ; 0051f7a9
    FLD float ptr [EAX + 0x24]          ; 0051f7ac
    FLD float ptr [EAX + 0x28]          ; 0051f7af
    FLD float ptr [EAX + 0x20]          ; 0051f7b2
    LEA EAX,[ESP + 0x64]                ; 0051f7b5
    FSUB float ptr [EDX]                ; 0051f7b9
    FXCH ST2                            ; 0051f7bb
    FSUB float ptr [EDX + 0x4]          ; 0051f7bd
    FXCH                                ; 0051f7c0
    FSUB float ptr [EDX + 0x8]          ; 0051f7c2
    FXCH ST2                            ; 0051f7c5
    FSTP float ptr [ESP + 0x4]          ; 0051f7c7
    FSTP float ptr [ESP + 0x8]          ; 0051f7cb
    FSTP float ptr [ESP + 0xc]          ; 0051f7cf
    LEA EDX,[ESP + 0x28]                ; 0051f7d3
    MOVSD ES:EDI,ESI                    ; 0051f7d7
    MOVSD ES:EDI,ESI                    ; 0051f7d8
    MOVSD ES:EDI,ESI                    ; 0051f7d9
    CMP EAX,EDX                         ; 0051f7da
    JZ 0x0051f7f6                       ; 0051f7dc
        ;   XREF to: 0051f7f6 (CONDITIONAL_JUMP)  ; LAB_0051f7f6
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051f7de
    MOV dword ptr [ESP + 0x64],EAX      ; 0051f7e2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051f7e6
    MOV dword ptr [ESP + 0x68],EAX      ; 0051f7ea
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051f7ee
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051f7f2
    LEA EAX,[ESP + 0x64]                ; 0051f7f6
        ;   Label: LAB_0051f7f6
    PUSH EAX                            ; 0051f7fa
    LEA ESI,[ESP + 0x50]                ; 0051f7fb
    LEA EDI,[ESP + 0x44]                ; 0051f7ff
    CALL FUN_005838f0                   ; 0051f803
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x50]                ; 0051f808
    LEA EAX,[ESP + 0x44]                ; 0051f80c
    ADD ESP,0x4                         ; 0051f810
    LEA EDX,[ESP + 0x64]                ; 0051f813
    MOVSD ES:EDI,ESI                    ; 0051f817
    MOVSD ES:EDI,ESI                    ; 0051f818
    MOVSD ES:EDI,ESI                    ; 0051f819
    CMP EDX,EAX                         ; 0051f81a
    JZ 0x0051f836                       ; 0051f81c
        ;   XREF to: 0051f836 (CONDITIONAL_JUMP)  ; LAB_0051f836
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051f81e
    MOV dword ptr [ESP + 0x64],EAX      ; 0051f822
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051f826
    MOV dword ptr [ESP + 0x68],EAX      ; 0051f82a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051f82e
    MOV dword ptr [ESP + 0x6c],EAX      ; 0051f832
    FLD float ptr [ESP + 0x68]          ; 0051f836
        ;   Label: LAB_0051f836
    FSUB float ptr [EBX + 0x34]         ; 0051f83a
    SUB ESP,0x4                         ; 0051f83d
    FSTP float ptr [ESP]                ; 0051f840
    CALL FUN_0040d0c0                   ; 0051f843
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 0051f848
    FLD float ptr [ESP + 0xa8]          ; 0051f84f
    ADD ESP,0x4                         ; 0051f856
    FST float ptr [ESP + 0x14]          ; 0051f859
    FCOMP float ptr [ESP + 0x90]        ; 0051f85d
    FNSTSW AX                           ; 0051f864
    SAHF                                ; 0051f866
    JBE 0x0051f874                      ; 0051f867
        ;   XREF to: 0051f874 (CONDITIONAL_JUMP)  ; LAB_0051f874
    MOV EAX,dword ptr [ESP + 0x90]      ; 0051f869
    MOV dword ptr [ESP + 0x14],EAX      ; 0051f870
    FLD float ptr [ESP + 0x14]          ; 0051f874
        ;   Label: LAB_0051f874
    FLD float ptr [ESP + 0x90]          ; 0051f878
    FCHS                                ; 0051f87f
    FSTP float ptr [ESP + 0x84]         ; 0051f881
    FCOMP float ptr [ESP + 0x84]        ; 0051f888
    FNSTSW AX                           ; 0051f88f
    SAHF                                ; 0051f891
    JNC 0x0051f89f                      ; 0051f892
        ;   XREF to: 0051f89f (CONDITIONAL_JUMP)  ; LAB_0051f89f
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051f894
    MOV dword ptr [ESP + 0x14],EAX      ; 0051f89b
    FLD float ptr [EBP + 0x18]          ; 0051f89f
        ;   Label: LAB_0051f89f
    FLD float ptr [ESP + 0x14]          ; 0051f8a2
    FSUB float ptr [EBX + 0x25648]      ; 0051f8a6
    FXCH                                ; 0051f8ac
    FMUL float ptr [0x005e2b83]         ; 0051f8ae | DAT_005e2b83
    FXCH                                ; 0051f8b4
    FSTP float ptr [ESP + 0x98]         ; 0051f8b6
    FSTP float ptr [ESP + 0x7c]         ; 0051f8bd
    FLD float ptr [ESP + 0x98]          ; 0051f8c1
    FCOMP float ptr [ESP + 0x7c]        ; 0051f8c8
    FNSTSW AX                           ; 0051f8cc
    SAHF                                ; 0051f8ce
    JBE 0x0051f8dc                      ; 0051f8cf
        ;   XREF to: 0051f8dc (CONDITIONAL_JUMP)  ; LAB_0051f8dc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0051f8d1
    MOV dword ptr [ESP + 0x98],EAX      ; 0051f8d5
    FLD float ptr [EBP + 0x18]          ; 0051f8dc
        ;   Label: LAB_0051f8dc
    FMUL float ptr [0x005e2b87]         ; 0051f8df | DAT_005e2b87
    FLD float ptr [ESP + 0x98]          ; 0051f8e5
    FXCH                                ; 0051f8ec
    FSTP float ptr [ESP + 0x80]         ; 0051f8ee
    FCOMP float ptr [ESP + 0x80]        ; 0051f8f5
    FNSTSW AX                           ; 0051f8fc
    SAHF                                ; 0051f8fe
    JNC 0x0051f90f                      ; 0051f8ff
        ;   XREF to: 0051f90f (CONDITIONAL_JUMP)  ; LAB_0051f90f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051f901
    MOV dword ptr [ESP + 0x98],EAX      ; 0051f908
    FLD float ptr [EBX + 0x25648]       ; 0051f90f
        ;   Label: LAB_0051f90f
    FADD float ptr [ESP + 0x98]         ; 0051f915
    FSTP float ptr [EBX + 0x25648]      ; 0051f91c
    MOV ESP,EBP                         ; 0051f922
    POP EBP                             ; 0051f924
    POP EDI                             ; 0051f925
    POP ESI                             ; 0051f926
    POP EBX                             ; 0051f927
    RET                                 ; 0051f928
    CMP EAX,0x3                         ; 0051f929
        ;   Label: LAB_0051f929
    JZ 0x0051f54b                       ; 0051f92c
        ;   XREF to: 0051f54b (CONDITIONAL_JUMP)  ; LAB_0051f54b
    JMP 0x0051f5ab                      ; 0051f932
        ;   XREF to: 0051f5ab (UNCONDITIONAL_JUMP)  ; LAB_0051f5ab
    FLD float ptr [ESP]                 ; 0051f937
        ;   Label: LAB_0051f937
    FCOMP double ptr [0x005e2b53]       ; 0051f93a | DAT_005e2b53
    FNSTSW AX                           ; 0051f940
    SAHF                                ; 0051f942
    JNC 0x0051f6aa                      ; 0051f943
        ;   XREF to: 0051f6aa (CONDITIONAL_JUMP)  ; LAB_0051f6aa
    CMP dword ptr [EBX + 0x25640],0x0   ; 0051f949
    JZ 0x0051f994                       ; 0051f950
        ;   XREF to: 0051f994 (CONDITIONAL_JUMP)  ; LAB_0051f994
    CMP dword ptr [ESP + 0x8c],0x0      ; 0051f952
    JZ 0x0051f994                       ; 0051f95a
        ;   XREF to: 0051f994 (CONDITIONAL_JUMP)  ; LAB_0051f994
    FLD float ptr [EBX + 0x2d08]        ; 0051f95c
    FCOMP double ptr [0x005e2b5b]       ; 0051f962 | DAT_005e2b5b
    FNSTSW AX                           ; 0051f968
    SAHF                                ; 0051f96a
    JBE 0x0051f980                      ; 0051f96b
        ;   XREF to: 0051f980 (CONDITIONAL_JUMP)  ; LAB_0051f980
    CMP dword ptr [EBX + 0x25668],0x0   ; 0051f96d
    JZ 0x0051f980                       ; 0051f974
        ;   XREF to: 0051f980 (CONDITIONAL_JUMP)  ; LAB_0051f980
    MOV dword ptr [EBX + 0x10a74],0x1   ; 0051f976
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0051f980
        ;   Label: LAB_0051f980
    ADD EAX,0x20                        ; 0051f987
    PUSH EAX                            ; 0051f98a
    PUSH EBX                            ; 0051f98b
    CALL FUN_00423850                   ; 0051f98c
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 0051f991
    MOV dword ptr [EBX + 0x10a70],0x0   ; 0051f994
        ;   Label: LAB_0051f994
    MOV dword ptr [EBX + 0x10a68],0x0   ; 0051f99e
    JMP 0x0051f6a2                      ; 0051f9a8
        ;   XREF to: 0051f6a2 (UNCONDITIONAL_JUMP)  ; LAB_0051f6a2
    MOV dword ptr [EBX + 0x10a70],0x1   ; 0051f9ad
        ;   Label: LAB_0051f9ad
    JMP 0x0051f790                      ; 0051f9b7
        ;   XREF to: 0051f790 (UNCONDITIONAL_JUMP)  ; LAB_0051f790

