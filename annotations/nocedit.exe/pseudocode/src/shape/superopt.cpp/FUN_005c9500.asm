; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_FUN_005c9500(void)
;
; Local Variables:
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined8       Stack[-0x178]:8  local_178
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined8       Stack[-0xe0]:8  local_e0
; undefined8       Stack[-0xd8]:8  local_d8
; undefined8       Stack[-0xd0]:8  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined8       Stack[-0xc0]:8  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
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
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   double DOUBLE_0065423a = 0.5
;
; Called Functions:
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_free_FUN_005fe659
;   shape_memdbg.cpp_malloc_FUN_006021da
;   shape_superopt.cpp_FUN_005c79a0
;   shape_superopt.cpp_FUN_005c79f0
;   shape_superopt.cpp_FUN_005c9aa0
;   shape_superopt.cpp_FUN_005ca590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9500
        ;   Label: shape_superopt.cpp_FUN_005c9500
    PUSH ESI                            ; 005c9501
    PUSH EDI                            ; 005c9502
    PUSH EBP                            ; 005c9503
    MOV EBP,ESP                         ; 005c9504
    SUB ESP,0x178                       ; 005c9506
    SUB EBP,0x7a                        ; 005c950c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005c950f
    CMP dword ptr [EBX + 0x2c],0x0      ; 005c9515
    JZ 0x005c963a                       ; 005c9519
        ;   XREF to: 005c963a (CONDITIONAL_JUMP)  ; LAB_005c963a
    MOV ECX,dword ptr [EBX + 0x30]      ; 005c951f
    TEST ECX,ECX                        ; 005c9522
    JZ 0x005c963a                       ; 005c9524
        ;   XREF to: 005c963a (CONDITIONAL_JUMP)  ; LAB_005c963a
    MOV EAX,ECX                         ; 005c952a
    LEA EDI,[EBP + -0x56]               ; 005c952c
    MOV ECX,0x6                         ; 005c952f
    LEA ESI,[EAX + 0x10]                ; 005c9534
    MOVSD.REP ES:EDI,ESI                ; 005c9537
    MOV ECX,0x6                         ; 005c9539
    LEA EDI,[EBP + 0xffffff02]          ; 005c953e
    LEA ESI,[EBP + -0x56]               ; 005c9544
    MOVSD.REP ES:EDI,ESI                ; 005c9547
    MOV EDI,dword ptr [EBX + 0x2c]      ; 005c9549
    XOR ESI,ESI                         ; 005c954c
    TEST EDI,EDI                        ; 005c954e
    JBE 0x005c960b                      ; 005c9550
        ;   XREF to: 005c960b (CONDITIONAL_JUMP)  ; LAB_005c960b
    LEA ECX,[EAX + 0x10]                ; 005c9556
    FLD double ptr [ECX]                ; 005c9559
        ;   Label: LAB_005c9559
    MOV EDX,ECX                         ; 005c955b
    FCOMP double ptr [EBP + -0x56]      ; 005c955d
    FNSTSW AX                           ; 005c9560
    SAHF                                ; 005c9562
    JNC 0x005c9570                      ; 005c9563
        ;   XREF to: 005c9570 (CONDITIONAL_JUMP)  ; LAB_005c9570
    MOV EAX,dword ptr [ECX]             ; 005c9565
    MOV dword ptr [EBP + -0x56],EAX     ; 005c9567
    MOV EAX,dword ptr [ECX + 0x4]       ; 005c956a
    MOV dword ptr [EBP + -0x52],EAX     ; 005c956d
    FLD double ptr [EDX + 0x8]          ; 005c9570
        ;   Label: LAB_005c9570
    FCOMP double ptr [EBP + -0x4e]      ; 005c9573
    FNSTSW AX                           ; 005c9576
    SAHF                                ; 005c9578
    JNC 0x005c9587                      ; 005c9579
        ;   XREF to: 005c9587 (CONDITIONAL_JUMP)  ; LAB_005c9587
    MOV EAX,dword ptr [EDX + 0x8]       ; 005c957b
    MOV dword ptr [EBP + -0x4e],EAX     ; 005c957e
    MOV EAX,dword ptr [EDX + 0xc]       ; 005c9581
    MOV dword ptr [EBP + -0x4a],EAX     ; 005c9584
    FLD double ptr [EDX + 0x10]         ; 005c9587
        ;   Label: LAB_005c9587
    FCOMP double ptr [EBP + -0x46]      ; 005c958a
    FNSTSW AX                           ; 005c958d
    SAHF                                ; 005c958f
    JNC 0x005c959e                      ; 005c9590
        ;   XREF to: 005c959e (CONDITIONAL_JUMP)  ; LAB_005c959e
    MOV EAX,dword ptr [EDX + 0x10]      ; 005c9592
    MOV dword ptr [EBP + -0x46],EAX     ; 005c9595
    MOV EAX,dword ptr [EDX + 0x14]      ; 005c9598
    MOV dword ptr [EBP + -0x42],EAX     ; 005c959b
    FLD double ptr [EDX]                ; 005c959e
        ;   Label: LAB_005c959e
    FCOMP double ptr [EBP + 0xffffff02] ; 005c95a0
    FNSTSW AX                           ; 005c95a6
    SAHF                                ; 005c95a8
    JBE 0x005c95bc                      ; 005c95a9
        ;   XREF to: 005c95bc (CONDITIONAL_JUMP)  ; LAB_005c95bc
    MOV EAX,dword ptr [EDX]             ; 005c95ab
    MOV dword ptr [EBP + 0xffffff02],EAX ; 005c95ad
    MOV EAX,dword ptr [EDX + 0x4]       ; 005c95b3
    MOV dword ptr [EBP + 0xffffff06],EAX ; 005c95b6
    FLD double ptr [EDX + 0x8]          ; 005c95bc
        ;   Label: LAB_005c95bc
    FCOMP double ptr [EBP + 0xffffff0a] ; 005c95bf
    FNSTSW AX                           ; 005c95c5
    SAHF                                ; 005c95c7
    JBE 0x005c95dc                      ; 005c95c8
        ;   XREF to: 005c95dc (CONDITIONAL_JUMP)  ; LAB_005c95dc
    MOV EAX,dword ptr [EDX + 0x8]       ; 005c95ca
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 005c95cd
    MOV EAX,dword ptr [EDX + 0xc]       ; 005c95d3
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 005c95d6
    FLD double ptr [EDX + 0x10]         ; 005c95dc
        ;   Label: LAB_005c95dc
    FCOMP double ptr [EBP + 0xffffff12] ; 005c95df
    FNSTSW AX                           ; 005c95e5
    SAHF                                ; 005c95e7
    JBE 0x005c95fc                      ; 005c95e8
        ;   XREF to: 005c95fc (CONDITIONAL_JUMP)  ; LAB_005c95fc
    MOV EAX,dword ptr [EDX + 0x10]      ; 005c95ea
    MOV dword ptr [EBP + 0xffffff12],EAX ; 005c95ed
    MOV EAX,dword ptr [EDX + 0x14]      ; 005c95f3
    MOV dword ptr [EBP + 0xffffff16],EAX ; 005c95f6
    INC ESI                             ; 005c95fc
        ;   Label: LAB_005c95fc
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c95fd
    ADD ECX,0x60                        ; 005c9600
    CMP ESI,EAX                         ; 005c9603
    JC 0x005c9559                       ; 005c9605
        ;   XREF to: 005c9559 (CONDITIONAL_JUMP)  ; LAB_005c9559
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005c960b
        ;   Label: LAB_005c960b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c960e
    SUB EAX,EDX                         ; 005c9615
    SHL EAX,0x6                         ; 005c9617
    PUSH EAX                            ; 005c961a
    CALL shape_memdbg.cpp_malloc_FUN_006021da ; 005c961b
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_006021da(SIZE_T size)
    MOV dword ptr [EBP + 0x72],EAX      ; 005c9620
    ADD ESP,0x4                         ; 005c9623
    XOR EDX,EDX                         ; 005c9626
    MOV dword ptr [EBP + 0x6e],EAX      ; 005c9628
    MOV dword ptr [EBP + 0x62],EDX      ; 005c962b
    TEST EAX,EAX                        ; 005c962e
    JNZ 0x005c963e                      ; 005c9630
        ;   XREF to: 005c963e (CONDITIONAL_JUMP)  ; LAB_005c963e
    LEA ESP,[EBP + 0x7a]                ; 005c9632
        ;   Label: LAB_005c9632
    POP EBP                             ; 005c9635
    POP EDI                             ; 005c9636
    POP ESI                             ; 005c9637
    POP EBX                             ; 005c9638
    RET                                 ; 005c9639
    XOR EAX,EAX                         ; 005c963a
        ;   Label: LAB_005c963a
    JMP 0x005c9632                      ; 005c963c
        ;   XREF to: 005c9632 (UNCONDITIONAL_JUMP)  ; LAB_005c9632
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005c963e
        ;   Label: LAB_005c963e
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c9641
    SUB EAX,EDX                         ; 005c9648
    SHL EAX,0x6                         ; 005c964a
    PUSH EAX                            ; 005c964d
    XOR ESI,ESI                         ; 005c964e
    CALL shape_memdbg.cpp_malloc_FUN_006021da ; 005c9650
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_006021da(SIZE_T size)
    MOV dword ptr [EBP + 0x6a],EAX      ; 005c9655
    ADD ESP,0x4                         ; 005c9658
    MOV dword ptr [EBP + 0x76],EAX      ; 005c965b
    MOV dword ptr [EBP + 0x66],ESI      ; 005c965e
    TEST EAX,EAX                        ; 005c9661
    JZ 0x005c9869                       ; 005c9663
        ;   XREF to: 005c9869 (CONDITIONAL_JUMP)  ; LAB_005c9869
    FLD double ptr [EBP + 0xffffff02]   ; 005c9669
    FSUB double ptr [EBP + -0x56]       ; 005c966f
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c9672
    FLD double ptr [EAX]                ; 005c9678
    FADD double ptr [0x0065423a]        ; 005c967a | DOUBLE_0065423a
    FCOMPP                              ; 005c9680
    FNSTSW AX                           ; 005c9682
    SAHF                                ; 005c9684
    JC 0x005c987f                       ; 005c9685
        ;   XREF to: 005c987f (CONDITIONAL_JUMP)  ; LAB_005c987f
    FLD double ptr [EBP + 0xffffff0a]   ; 005c968b
    FSUB double ptr [EBP + -0x4e]       ; 005c9691
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c9694
    FLD double ptr [EAX + 0x8]          ; 005c969a
    FADD double ptr [0x0065423a]        ; 005c969d | DOUBLE_0065423a
    FCOMPP                              ; 005c96a3
    FNSTSW AX                           ; 005c96a5
    SAHF                                ; 005c96a7
    JC 0x005c9923                       ; 005c96a8
        ;   XREF to: 005c9923 (CONDITIONAL_JUMP)  ; LAB_005c9923
    FLD double ptr [EBP + 0xffffff12]   ; 005c96ae
    FSUB double ptr [EBP + -0x46]       ; 005c96b4
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c96b7
    FLD double ptr [EAX + 0x10]         ; 005c96bd
    FADD double ptr [0x0065423a]        ; 005c96c0 | DOUBLE_0065423a
    FCOMPP                              ; 005c96c6
    FNSTSW AX                           ; 005c96c8
    SAHF                                ; 005c96ca
    JNC 0x005c99d7                      ; 005c96cb
        ;   XREF to: 005c99d7 (CONDITIONAL_JUMP)  ; LAB_005c99d7
    MOV dword ptr [EBP + -0xe],ESI      ; 005c96d1
    MOV dword ptr [EBP + -0xa],ESI      ; 005c96d4
    MOV dword ptr [EBP + -0x6],ESI      ; 005c96d7
    MOV dword ptr [EBP + -0x2],ESI      ; 005c96da
    MOV dword ptr [EBP + 0x2],ESI       ; 005c96dd
    MOV ESI,0x3ff00000                  ; 005c96e0
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c96e5
    MOV dword ptr [EBP + 0x6],ESI       ; 005c96eb
    MOV EAX,dword ptr [EAX + 0x10]      ; 005c96ee
    MOV dword ptr [EBP + 0x5a],EAX      ; 005c96f1
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c96f4
    FLD double ptr [EBP + -0x46]        ; 005c96fa
    MOV EAX,dword ptr [EAX + 0x14]      ; 005c96fd
    MOV ECX,0x6                         ; 005c9700
    MOV dword ptr [EBP + 0x5e],EAX      ; 005c9705
    MOV EAX,dword ptr [EBP + -0x56]     ; 005c9708
    LEA EDI,[EBP + 0x22]                ; 005c970b
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 005c970e
    MOV EAX,dword ptr [EBP + -0x52]     ; 005c9714
    MOV EDX,dword ptr [EBP + 0x6a]      ; 005c9717
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 005c971a
    MOV EAX,dword ptr [EBP + -0x4e]     ; 005c9720
    LEA ESI,[EBP + 0xffffff7a]          ; 005c9723
    MOV dword ptr [EBP + -0x7e],EAX     ; 005c9729
    MOV EAX,dword ptr [EBP + -0x4a]     ; 005c972c
    FADD double ptr [EBP + 0x5a]        ; 005c972f
    MOV dword ptr [EBP + -0x7a],EAX     ; 005c9732
    LEA EAX,[EBP + 0x66]                ; 005c9735
    FSTP double ptr [EBP + -0x76]       ; 005c9738
    PUSH EAX                            ; 005c973b
    LEA EAX,[EBP + 0x62]                ; 005c973c
    MOVSD.REP ES:EDI,ESI                ; 005c973f
    PUSH EAX                            ; 005c9741
    MOV ECX,dword ptr [EBP + 0x72]      ; 005c9742
    XOR EDI,EDI                         ; 005c9745
    PUSH EDX                            ; 005c9747
    MOV ESI,0x3ff00000                  ; 005c9748
    MOV dword ptr [EBP + 0x62],EDI      ; 005c974d
    PUSH ECX                            ; 005c9750
    LEA EAX,[EBP + -0x26]               ; 005c9751
    MOV dword ptr [EBP + -0x26],EDI     ; 005c9754
    PUSH EAX                            ; 005c9757
    LEA EAX,[EBP + 0x22]                ; 005c9758
    MOV dword ptr [EBP + -0x22],EDI     ; 005c975b
    PUSH EAX                            ; 005c975e
    MOV dword ptr [EBP + -0x1e],EDI     ; 005c975f
    MOV dword ptr [EBP + -0x1a],EDI     ; 005c9762
    PUSH EBX                            ; 005c9765
    MOV dword ptr [EBP + -0x16],EDI     ; 005c9766
    MOV dword ptr [EBP + -0x12],ESI     ; 005c9769
    CALL shape_superopt.cpp_FUN_005c9aa0 ; 005c976c
        ;   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_FUN_005c9aa0()
        ;   Label: LAB_005c976c
    ADD ESP,0x1c                        ; 005c9771
    MOV EDX,dword ptr [EBP + 0x62]      ; 005c9774
    XOR ESI,ESI                         ; 005c9777
    TEST EDX,EDX                        ; 005c9779
    JBE 0x005c97a7                      ; 005c977b
        ;   XREF to: 005c97a7 (CONDITIONAL_JUMP)  ; LAB_005c97a7
    MOV ECX,EDX                         ; 005c977d
    SHL EDX,0x2                         ; 005c977f
    SUB EDX,ECX                         ; 005c9782
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c9784
    SHL EDX,0x5                         ; 005c9787
    ADD EDX,EAX                         ; 005c978a
    CMP dword ptr [EAX + 0x8],0x0       ; 005c978c
        ;   Label: LAB_005c978c
    JZ 0x005c99f9                       ; 005c9790
        ;   XREF to: 005c99f9 (CONDITIONAL_JUMP)  ; LAB_005c99f9
    CMP dword ptr [EAX + 0xc],0x0       ; 005c9796
    JZ 0x005c99f9                       ; 005c979a
        ;   XREF to: 005c99f9 (CONDITIONAL_JUMP)  ; LAB_005c99f9
    ADD EAX,0x60                        ; 005c97a0
    CMP EAX,EDX                         ; 005c97a3
    JC 0x005c978c                       ; 005c97a5
        ;   XREF to: 005c978c (CONDITIONAL_JUMP)  ; LAB_005c978c
    MOV EAX,dword ptr [EBP + 0x66]      ; 005c97a7
        ;   Label: LAB_005c97a7
    XOR EDI,EDI                         ; 005c97aa
    TEST EAX,EAX                        ; 005c97ac
    JBE 0x005c97df                      ; 005c97ae
        ;   XREF to: 005c97df (CONDITIONAL_JUMP)  ; LAB_005c97df
    MOV ECX,dword ptr [EBP + 0x66]      ; 005c97b0
    LEA EDX,[ECX*0x4 + 0x0]             ; 005c97b3
    SUB EDX,ECX                         ; 005c97ba
    MOV EAX,dword ptr [EBP + 0x76]      ; 005c97bc
    SHL EDX,0x5                         ; 005c97bf
    ADD EDX,EAX                         ; 005c97c2
    CMP dword ptr [EAX + 0x8],0x0       ; 005c97c4
        ;   Label: LAB_005c97c4
    JZ 0x005c9a03                       ; 005c97c8
        ;   XREF to: 005c9a03 (CONDITIONAL_JUMP)  ; LAB_005c9a03
    CMP dword ptr [EAX + 0xc],0x0       ; 005c97ce
    JZ 0x005c9a03                       ; 005c97d2
        ;   XREF to: 005c9a03 (CONDITIONAL_JUMP)  ; LAB_005c9a03
    ADD EAX,0x60                        ; 005c97d8
    CMP EAX,EDX                         ; 005c97db
    JC 0x005c97c4                       ; 005c97dd
        ;   XREF to: 005c97c4 (CONDITIONAL_JUMP)  ; LAB_005c97c4
    TEST ESI,ESI                        ; 005c97df
        ;   Label: LAB_005c97df
    JNZ 0x005c9a0d                      ; 005c97e1
        ;   XREF to: 005c9a0d (CONDITIONAL_JUMP)  ; LAB_005c9a0d
    TEST EDI,EDI                        ; 005c97e7
    JNZ 0x005c9a0d                      ; 005c97e9
        ;   XREF to: 005c9a0d (CONDITIONAL_JUMP)  ; LAB_005c9a0d
    PUSH 0x34                           ; 005c97ef
        ;   Label: LAB_005c97ef
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005c97f1
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005c97f6
    TEST EAX,EAX                        ; 005c97f9
    JZ 0x005c9806                       ; 005c97fb
        ;   XREF to: 005c9806 (CONDITIONAL_JUMP)  ; LAB_005c9806
    PUSH EAX                            ; 005c97fd
    CALL shape_superopt.cpp_FUN_005c79a0 ; 005c97fe
        ;   XREF to: 005c79a0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_FUN_005c79a0()
    ADD ESP,0x4                         ; 005c9803
    MOV ESI,EAX                         ; 005c9806
        ;   Label: LAB_005c9806
    TEST ESI,ESI                        ; 005c9808
    JZ 0x005c9a7d                       ; 005c980a
        ;   XREF to: 005c9a7d (CONDITIONAL_JUMP)  ; LAB_005c9a7d
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c9810
    LEA EDX,[EBX + 0x14]                ; 005c9813
    MOV dword ptr [ESI + 0x10],EAX      ; 005c9816
    LEA EAX,[ESI + 0x14]                ; 005c9819
    MOV ECX,dword ptr [EDX]             ; 005c981c
    MOV dword ptr [EAX],ECX             ; 005c981e
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c9820
    MOV dword ptr [EAX + 0x4],ECX       ; 005c9823
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c9826
    MOV dword ptr [EAX + 0x8],ECX       ; 005c9829
    MOV ECX,dword ptr [EDX + 0xc]       ; 005c982c
    MOV dword ptr [EAX + 0xc],ECX       ; 005c982f
    MOV ECX,dword ptr [EDX + 0x10]      ; 005c9832
    MOV dword ptr [EAX + 0x10],ECX      ; 005c9835
    MOV ECX,dword ptr [EDX + 0x14]      ; 005c9838
    MOV dword ptr [EAX + 0x14],ECX      ; 005c983b
    MOV EAX,dword ptr [EBP + 0x62]      ; 005c983e
    MOV dword ptr [ESI + 0x2c],EAX      ; 005c9841
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c9844
    PUSH EBX                            ; 005c9847
    MOV dword ptr [ESI + 0x30],EAX      ; 005c9848
    CALL shape_superopt.cpp_FUN_005c79f0 ; 005c984b
        ;   XREF to: 005c79f0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_FUN_005c79f0()
    MOV EAX,dword ptr [EBP + 0x66]      ; 005c9850
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c9853
    MOV EAX,dword ptr [EBP + 0x76]      ; 005c9856
    ADD ESP,0x4                         ; 005c9859
    MOV dword ptr [EBX + 0x30],EAX      ; 005c985c
    MOV EAX,ESI                         ; 005c985f
    LEA ESP,[EBP + 0x7a]                ; 005c9861
    POP EBP                             ; 005c9864
    POP EDI                             ; 005c9865
    POP ESI                             ; 005c9866
    POP EBX                             ; 005c9867
    RET                                 ; 005c9868
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c9869
        ;   Label: LAB_005c9869
    PUSH EAX                            ; 005c986c
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c986d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9872
    XOR EAX,EAX                         ; 005c9875
    LEA ESP,[EBP + 0x7a]                ; 005c9877
    POP EBP                             ; 005c987a
    POP EDI                             ; 005c987b
    POP ESI                             ; 005c987c
    POP EBX                             ; 005c987d
    RET                                 ; 005c987e
    MOV EDX,0x3ff00000                  ; 005c987f
        ;   Label: LAB_005c987f
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c9884
    MOV ECX,0x6                         ; 005c988a
    LEA EDI,[EBP + 0xffffff32]          ; 005c988f
    MOV dword ptr [EBP + 0xa],ESI       ; 005c9895
    MOV dword ptr [EBP + 0x12],ESI      ; 005c9898
    MOV dword ptr [EBP + 0x16],ESI      ; 005c989b
    MOV dword ptr [EBP + 0x1a],ESI      ; 005c989e
    MOV dword ptr [EBP + 0x1e],ESI      ; 005c98a1
    MOV dword ptr [EBP + 0xe],EDX       ; 005c98a4
    LEA ESI,[EBP + -0x6e]               ; 005c98a7
    FLD double ptr [EAX]                ; 005c98aa
    MOV EAX,dword ptr [EBP + -0x4e]     ; 005c98ac
    XOR EDX,EDX                         ; 005c98af
    MOV dword ptr [EBP + -0x66],EAX     ; 005c98b1
    MOV EAX,dword ptr [EBP + -0x4a]     ; 005c98b4
    FADD double ptr [EBP + -0x56]       ; 005c98b7
    MOV dword ptr [EBP + -0x62],EAX     ; 005c98ba
    MOV EAX,dword ptr [EBP + -0x46]     ; 005c98bd
    MOV dword ptr [EBP + 0x62],EDX      ; 005c98c0
    MOV dword ptr [EBP + -0x5e],EAX     ; 005c98c3
    MOV EAX,dword ptr [EBP + -0x42]     ; 005c98c6
    MOV dword ptr [EBP + 0x66],EDX      ; 005c98c9
    MOV dword ptr [EBP + -0x5a],EAX     ; 005c98cc
    LEA EAX,[EBP + 0x66]                ; 005c98cf
    FSTP double ptr [EBP + -0x6e]       ; 005c98d2
    PUSH EAX                            ; 005c98d5
    LEA EAX,[EBP + 0x62]                ; 005c98d6
    MOVSD.REP ES:EDI,ESI                ; 005c98d9
    PUSH EAX                            ; 005c98db
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c98dc
    MOV dword ptr [EBP + 0xffffff4a],EDX ; 005c98df
    PUSH ESI                            ; 005c98e5
    MOV EDI,dword ptr [EBP + 0x72]      ; 005c98e6
    MOV EDX,0x3ff00000                  ; 005c98e9
    PUSH EDI                            ; 005c98ee
    LEA EAX,[EBP + 0xffffff4a]          ; 005c98ef
    MOV dword ptr [EBP + 0xffffff4e],EDX ; 005c98f5
    PUSH EAX                            ; 005c98fb
    LEA EAX,[EBP + 0xffffff32]          ; 005c98fc
    XOR ECX,ECX                         ; 005c9902
    PUSH EAX                            ; 005c9904
    MOV dword ptr [EBP + 0xffffff52],ECX ; 005c9905
    MOV dword ptr [EBP + 0xffffff56],ECX ; 005c990b
    PUSH EBX                            ; 005c9911
    MOV dword ptr [EBP + 0xffffff5a],ECX ; 005c9912
    MOV dword ptr [EBP + 0xffffff5e],ECX ; 005c9918
    JMP 0x005c976c                      ; 005c991e
        ;   XREF to: 005c976c (UNCONDITIONAL_JUMP)  ; LAB_005c976c
    MOV ECX,0x3ff00000                  ; 005c9923
        ;   Label: LAB_005c9923
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c9928
    MOV dword ptr [EBP + 0x3a],ESI      ; 005c992e
    MOV dword ptr [EBP + 0x3e],ESI      ; 005c9931
    MOV dword ptr [EBP + 0x42],ESI      ; 005c9934
    MOV dword ptr [EBP + 0x4a],ESI      ; 005c9937
    MOV dword ptr [EBP + 0x4e],ESI      ; 005c993a
    MOV dword ptr [EBP + 0x46],ECX      ; 005c993d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c9940
    MOV dword ptr [EBP + 0x52],EAX      ; 005c9943
    MOV EAX,dword ptr [EBP + 0x92]      ; 005c9946
    MOV EAX,dword ptr [EAX + 0xc]       ; 005c994c
    MOV dword ptr [EBP + 0x56],EAX      ; 005c994f
    MOV EAX,dword ptr [EBP + -0x56]     ; 005c9952
    FLD double ptr [EBP + -0x4e]        ; 005c9955
    MOV dword ptr [EBP + -0x3e],EAX     ; 005c9958
    MOV EAX,dword ptr [EBP + -0x52]     ; 005c995b
    LEA EDI,[EBP + 0xffffff1a]          ; 005c995e
    MOV dword ptr [EBP + -0x3a],EAX     ; 005c9964
    MOV EAX,dword ptr [EBP + -0x46]     ; 005c9967
    LEA ESI,[EBP + -0x3e]               ; 005c996a
    MOV dword ptr [EBP + -0x2e],EAX     ; 005c996d
    MOV EAX,dword ptr [EBP + -0x42]     ; 005c9970
    MOV ECX,0x6                         ; 005c9973
    MOV dword ptr [EBP + -0x2a],EAX     ; 005c9978
    XOR EAX,EAX                         ; 005c997b
    FADD double ptr [EBP + 0x52]        ; 005c997d
    MOV dword ptr [EBP + 0x62],EAX      ; 005c9980
    LEA EAX,[EBP + 0x66]                ; 005c9983
    FSTP double ptr [EBP + -0x36]       ; 005c9986
    PUSH EAX                            ; 005c9989
    LEA EAX,[EBP + 0x62]                ; 005c998a
    MOVSD.REP ES:EDI,ESI                ; 005c998d
    PUSH EAX                            ; 005c998f
    MOV ECX,dword ptr [EBP + 0x6a]      ; 005c9990
    XOR EDI,EDI                         ; 005c9993
    PUSH ECX                            ; 005c9995
    MOV ESI,dword ptr [EBP + 0x72]      ; 005c9996
    MOV dword ptr [EBP + 0xffffff62],EDI ; 005c9999
    PUSH ESI                            ; 005c999f
    LEA EAX,[EBP + 0xffffff62]          ; 005c99a0
    MOV dword ptr [EBP + 0xffffff66],EDI ; 005c99a6
    PUSH EAX                            ; 005c99ac
    LEA EAX,[EBP + 0xffffff1a]          ; 005c99ad
    MOV dword ptr [EBP + 0xffffff6a],EDI ; 005c99b3
    PUSH EAX                            ; 005c99b9
    MOV dword ptr [EBP + 0xffffff72],EDI ; 005c99ba
    MOV ECX,0x3ff00000                  ; 005c99c0
    PUSH EBX                            ; 005c99c5
    MOV dword ptr [EBP + 0xffffff76],EDI ; 005c99c6
    MOV dword ptr [EBP + 0xffffff6e],ECX ; 005c99cc
    JMP 0x005c976c                      ; 005c99d2
        ;   XREF to: 005c976c (UNCONDITIONAL_JUMP)  ; LAB_005c976c
    MOV EDX,dword ptr [EBP + 0x72]      ; 005c99d7
        ;   Label: LAB_005c99d7
    PUSH EDX                            ; 005c99da
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c99db
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c99e0
    MOV ECX,dword ptr [EBP + 0x6a]      ; 005c99e3
    PUSH ECX                            ; 005c99e6
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c99e7
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c99ec
    XOR EAX,EAX                         ; 005c99ef
    LEA ESP,[EBP + 0x7a]                ; 005c99f1
    POP EBP                             ; 005c99f4
    POP EDI                             ; 005c99f5
    POP ESI                             ; 005c99f6
    POP EBX                             ; 005c99f7
    RET                                 ; 005c99f8
    MOV ESI,0x1                         ; 005c99f9
        ;   Label: LAB_005c99f9
    JMP 0x005c97a7                      ; 005c99fe
        ;   XREF to: 005c97a7 (UNCONDITIONAL_JUMP)  ; LAB_005c97a7
    MOV EDI,0x1                         ; 005c9a03
        ;   Label: LAB_005c9a03
    JMP 0x005c97df                      ; 005c9a08
        ;   XREF to: 005c97df (UNCONDITIONAL_JUMP)  ; LAB_005c97df
    PUSH 0x0                            ; 005c9a0d
        ;   Label: LAB_005c9a0d
    LEA EAX,[EBP + 0x62]                ; 005c9a0f
    PUSH EAX                            ; 005c9a12
    MOV ESI,dword ptr [EBP + 0x6e]      ; 005c9a13
    PUSH ESI                            ; 005c9a16
    PUSH EBX                            ; 005c9a17
    CALL shape_superopt.cpp_FUN_005ca590 ; 005c9a18
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_FUN_005ca590()
    ADD ESP,0x10                        ; 005c9a1d
    TEST EAX,EAX                        ; 005c9a20
    JZ 0x005c9a5e                       ; 005c9a22
        ;   XREF to: 005c9a5e (CONDITIONAL_JUMP)  ; LAB_005c9a5e
    PUSH 0x0                            ; 005c9a24
    LEA EAX,[EBP + 0x66]                ; 005c9a26
    PUSH EAX                            ; 005c9a29
    MOV EDX,dword ptr [EBP + 0x76]      ; 005c9a2a
    PUSH EDX                            ; 005c9a2d
    PUSH EBX                            ; 005c9a2e
    CALL shape_superopt.cpp_FUN_005ca590 ; 005c9a2f
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_FUN_005ca590()
    ADD ESP,0x10                        ; 005c9a34
    TEST EAX,EAX                        ; 005c9a37
    JNZ 0x005c97ef                      ; 005c9a39
        ;   XREF to: 005c97ef (CONDITIONAL_JUMP)  ; LAB_005c97ef
    PUSH ESI                            ; 005c9a3f
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a40
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a45
    MOV EBX,dword ptr [EBP + 0x76]      ; 005c9a48
    PUSH EBX                            ; 005c9a4b
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a4c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a51
    XOR EAX,EAX                         ; 005c9a54
    LEA ESP,[EBP + 0x7a]                ; 005c9a56
    POP EBP                             ; 005c9a59
    POP EDI                             ; 005c9a5a
    POP ESI                             ; 005c9a5b
    POP EBX                             ; 005c9a5c
    RET                                 ; 005c9a5d
    PUSH ESI                            ; 005c9a5e
        ;   Label: LAB_005c9a5e
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a5f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a64
    MOV EAX,dword ptr [EBP + 0x76]      ; 005c9a67
    PUSH EAX                            ; 005c9a6a
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a6b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a70
    XOR EAX,EAX                         ; 005c9a73
    LEA ESP,[EBP + 0x7a]                ; 005c9a75
    POP EBP                             ; 005c9a78
    POP EDI                             ; 005c9a79
    POP ESI                             ; 005c9a7a
    POP EBX                             ; 005c9a7b
    RET                                 ; 005c9a7c
    MOV ESI,dword ptr [EBP + 0x6e]      ; 005c9a7d
        ;   Label: LAB_005c9a7d
    PUSH ESI                            ; 005c9a80
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a81
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a86
    MOV EDI,dword ptr [EBP + 0x76]      ; 005c9a89
    PUSH EDI                            ; 005c9a8c
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005c9a8d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c9a92
    XOR EAX,EAX                         ; 005c9a95
    LEA ESP,[EBP + 0x7a]                ; 005c9a97
    POP EBP                             ; 005c9a9a
    POP EDI                             ; 005c9a9b
    POP ESI                             ; 005c9a9c
    POP EBX                             ; 005c9a9d
    RET                                 ; 005c9a9e

