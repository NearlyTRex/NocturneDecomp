; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0()
;
; Local Variables:
; undefined8       Stack[-0x15c]:8  local_15c
; undefined8       Stack[-0x154]:8  local_154
; undefined8       Stack[-0x14c]:8  local_14c
; undefined8       Stack[-0x144]:8  local_144
; undefined8       Stack[-0x13c]:8  local_13c
; undefined8       Stack[-0x134]:8  local_134
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined1       Stack[-0x114]:1  local_114
; undefined8       Stack[-0xfc]:8  local_fc
; undefined8       Stack[-0xf4]:8  local_f4
; undefined8       Stack[-0xec]:8  local_ec
; undefined8       Stack[-0xe4]:8  local_e4
; undefined8       Stack[-0xdc]:8  local_dc
; undefined8       Stack[-0xd4]:8  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
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
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined1       Stack[-0x6c]:1  local_6c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x44]:8  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7690 at 005d76aa
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_malloc_FUN_006021da
;   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
;   shape_superopt.cpp_FUN_005c8b50
;   shape_superopt.cpp_FUN_005c8e70
;   shape_superopt.cpp_FUN_005c91e0
;   shape_superopt.cpp_FUN_005c9aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c84c0
        ;   Label: shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
    PUSH ESI                            ; 005c84c1
    PUSH EDI                            ; 005c84c2
    PUSH EBP                            ; 005c84c3
    MOV EBP,ESP                         ; 005c84c4
    SUB ESP,0x14c                       ; 005c84c6
    SUB EBP,0x7e                        ; 005c84cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 005c84cf
    CMP dword ptr [EBX + 0x2c],0x0      ; 005c84d5
    JNZ 0x005c84e8                      ; 005c84d9
        ;   XREF to: 005c84e8 (CONDITIONAL_JUMP)  ; LAB_005c84e8
    MOV EAX,0x1                         ; 005c84db
        ;   Label: LAB_005c84db
    LEA ESP,[EBP + 0x7e]                ; 005c84e0
        ;   Label: LAB_005c84e0
    POP EBP                             ; 005c84e3
    POP EDI                             ; 005c84e4
    POP ESI                             ; 005c84e5
    POP EBX                             ; 005c84e6
    RET                                 ; 005c84e7
    LEA EAX,[EBX + 0x2c]                ; 005c84e8
        ;   Label: LAB_005c84e8
    PUSH EAX                            ; 005c84eb
    MOV ECX,dword ptr [EBX + 0x30]      ; 005c84ec
    PUSH ECX                            ; 005c84ef
    PUSH EBX                            ; 005c84f0
    CALL shape_superopt.cpp_FUN_005c91e0 ; 005c84f1
        ;   XREF to: 005c91e0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c91e0()
    ADD ESP,0xc                         ; 005c84f6
    TEST EAX,EAX                        ; 005c84f9
    JZ 0x005c84e0                       ; 005c84fb
        ;   XREF to: 005c84e0 (CONDITIONAL_JUMP)  ; LAB_005c84e0
    MOV ESI,dword ptr [EBX + 0x2c]      ; 005c84fd
    TEST ESI,ESI                        ; 005c8500
    JZ 0x005c84db                       ; 005c8502
        ;   XREF to: 005c84db (CONDITIONAL_JUMP)  ; LAB_005c84db
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c8504
    SUB EAX,ESI                         ; 005c850b
    SHL EAX,0x6                         ; 005c850d
    PUSH EAX                            ; 005c8510
    CALL crt_memory.c_malloc_FUN_006021da ; 005c8511
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
    MOV EDI,EAX                         ; 005c8516
    ADD ESP,0x4                         ; 005c8518
    MOV dword ptr [EBP + 0x6e],EAX      ; 005c851b
    TEST EAX,EAX                        ; 005c851e
    JZ 0x005c84e0                       ; 005c8520
        ;   XREF to: 005c84e0 (CONDITIONAL_JUMP)  ; LAB_005c84e0
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005c8522
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c8525
    SUB EAX,EDX                         ; 005c852c
    SHL EAX,0x6                         ; 005c852e
    PUSH EAX                            ; 005c8531
    CALL crt_memory.c_malloc_FUN_006021da ; 005c8532
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
    ADD ESP,0x4                         ; 005c8537
    MOV dword ptr [EBP + 0x6a],EAX      ; 005c853a
    TEST EAX,EAX                        ; 005c853d
    JZ 0x005c8782                       ; 005c853f
        ;   XREF to: 005c8782 (CONDITIONAL_JUMP)  ; LAB_005c8782
    LEA EAX,[EBX + 0x14]                ; 005c8545
    MOV dword ptr [EBP + 0x72],EAX      ; 005c8548
    MOV EDI,dword ptr [EBP + 0x6a]      ; 005c854b
        ;   Label: LAB_005c854b
    PUSH EDI                            ; 005c854e
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c854f
    PUSH EAX                            ; 005c8552
    PUSH EBX                            ; 005c8553
    CALL shape_superopt.cpp_FUN_005c8b50 ; 005c8554
        ;   XREF to: 005c8b50 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c8b50()
    ADD ESP,0xc                         ; 005c8559
    TEST EAX,EAX                        ; 005c855c
    JZ 0x005c8795                       ; 005c855e
        ;   XREF to: 005c8795 (CONDITIONAL_JUMP)  ; LAB_005c8795
    MOV ECX,0x6                         ; 005c8564
    LEA EDI,[EBP + 0xffffff7a]          ; 005c8569
    LEA ESI,[EAX + 0x10]                ; 005c856f
    LEA EDX,[EAX + 0x28]                ; 005c8572
    MOVSD.REP ES:EDI,ESI                ; 005c8575
    FLD double ptr [EDX]                ; 005c8577
    FLD double ptr [EDX + 0x8]          ; 005c8579
    FLD double ptr [EDX + 0x10]         ; 005c857c
    MOV ECX,0x6                         ; 005c857f
    LEA EDI,[EBP + 0xa]                 ; 005c8584
    LEA ESI,[EBP + -0x6e]               ; 005c8587
    FXCH ST2                            ; 005c858a
    FSUB double ptr [EAX + 0x10]        ; 005c858c
    FXCH                                ; 005c858f
    FSUB double ptr [EAX + 0x18]        ; 005c8591
    FXCH ST2                            ; 005c8594
    FSUB double ptr [EAX + 0x20]        ; 005c8596
    FXCH                                ; 005c8599
    FSTP double ptr [EBP + -0x6e]       ; 005c859b
    FXCH                                ; 005c859e
    FSTP double ptr [EBP + -0x66]       ; 005c85a0
    FSTP double ptr [EBP + -0x5e]       ; 005c85a3
    MOVSD.REP ES:EDI,ESI                ; 005c85a6
    MOV EAX,dword ptr [EBP + 0xa]       ; 005c85a8
    MOV dword ptr [EBP + -0x26],EAX     ; 005c85ab
    MOV EAX,dword ptr [EBP + 0xe]       ; 005c85ae
    MOV dword ptr [EBP + -0x22],EAX     ; 005c85b1
    MOV EAX,dword ptr [EBP + 0x12]      ; 005c85b4
    MOV dword ptr [EBP + -0x1e],EAX     ; 005c85b7
    MOV EAX,dword ptr [EBP + 0x16]      ; 005c85ba
    MOV dword ptr [EBP + -0x1a],EAX     ; 005c85bd
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005c85c0
    MOV dword ptr [EBP + -0x16],EAX     ; 005c85c3
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005c85c6
    MOV dword ptr [EBP + -0x12],EAX     ; 005c85c9
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c85cc
    FLD double ptr [EBP + 0x12]         ; 005c85cf
    FMUL double ptr [EAX + 0x10]        ; 005c85d2
    FLD double ptr [EBP + 0x1a]         ; 005c85d5
    FMUL double ptr [EAX + 0x8]         ; 005c85d8
    FSUBP                               ; 005c85db
    FLD double ptr [EBP + 0x1a]         ; 005c85dd
    FXCH                                ; 005c85e0
    FSTP double ptr [EBP + 0xffffff32]  ; 005c85e2
    FMUL double ptr [EAX]               ; 005c85e8
    FLD double ptr [EBP + 0xa]          ; 005c85ea
    FMUL double ptr [EAX + 0x10]        ; 005c85ed
    FSUBP                               ; 005c85f0
    FLD double ptr [EBP + 0xa]          ; 005c85f2
    FXCH                                ; 005c85f5
    FSTP double ptr [EBP + 0xffffff3a]  ; 005c85f7
    FMUL double ptr [EAX + 0x8]         ; 005c85fd
    FLD double ptr [EBP + 0xffffff3a]   ; 005c8600
    FMUL ST0                            ; 005c8606
    FLD double ptr [EBP + 0x12]         ; 005c8608
    FMUL double ptr [EAX]               ; 005c860b
    FLD double ptr [EBP + 0xffffff32]   ; 005c860d
    FMUL ST0                            ; 005c8613
    FXCH                                ; 005c8615
    FSUBP ST3,ST0                       ; 005c8617
    FADDP                               ; 005c8619
    FXCH                                ; 005c861b
    FST double ptr [EBP + 0xffffff42]   ; 005c861d
    FMUL double ptr [EBP + 0xffffff42]  ; 005c8623
    FADDP                               ; 005c8629
    FSQRT                               ; 005c862b
    FLD double ptr [EBP + 0xffffff32]   ; 005c862d
    FLD1                                ; 005c8633
    FDIVRP ST2,ST0                      ; 005c8635
    FMUL ST1                            ; 005c8637
    FLD double ptr [EBP + 0xffffff3a]   ; 005c8639
    FMUL ST2                            ; 005c863f
    LEA EAX,[EBP + 0x7a]                ; 005c8641
    FLD double ptr [EBP + 0xffffff42]   ; 005c8644
    PUSH EAX                            ; 005c864a
    LEA EAX,[EBP + 0x76]                ; 005c864b
    FMULP ST3                           ; 005c864e
    PUSH EAX                            ; 005c8650
    FXCH                                ; 005c8651
    FSTP double ptr [EBP + 0xffffff32]  ; 005c8653
    MOV EAX,dword ptr [EBP + 0xffffff32] ; 005c8659
    MOV EDX,dword ptr [EBP + 0x6a]      ; 005c865f
    MOV dword ptr [EBP + -0x3e],EAX     ; 005c8662
    MOV EAX,dword ptr [EBP + 0xffffff36] ; 005c8665
    FSTP double ptr [EBP + 0xffffff3a]  ; 005c866b
    MOV dword ptr [EBP + -0x3a],EAX     ; 005c8671
    MOV EAX,dword ptr [EBP + 0xffffff3a] ; 005c8674
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005c867a
    MOV dword ptr [EBP + -0x36],EAX     ; 005c867d
    MOV EAX,dword ptr [EBP + 0xffffff3e] ; 005c8680
    FSTP double ptr [EBP + 0xffffff42]  ; 005c8686
    MOV dword ptr [EBP + -0x32],EAX     ; 005c868c
    MOV EAX,dword ptr [EBP + 0xffffff42] ; 005c868f
    PUSH EDX                            ; 005c8695
    MOV dword ptr [EBP + -0x2e],EAX     ; 005c8696
    MOV EAX,dword ptr [EBP + 0xffffff46] ; 005c8699
    PUSH ECX                            ; 005c869f
    MOV dword ptr [EBP + -0x2a],EAX     ; 005c86a0
    LEA EAX,[EBP + -0x3e]               ; 005c86a3
    PUSH EAX                            ; 005c86a6
    LEA EAX,[EBP + 0xffffff7a]          ; 005c86a7
    PUSH EAX                            ; 005c86ad
    XOR EDI,EDI                         ; 005c86ae
    PUSH EBX                            ; 005c86b0
    MOV dword ptr [EBP + 0x76],EDI      ; 005c86b1
    MOV dword ptr [EBP + 0x7a],EDI      ; 005c86b4
    CALL shape_superopt.cpp_FUN_005c9aa0 ; 005c86b7
        ;   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c9aa0()
    MOV ESI,dword ptr [EBP + 0x76]      ; 005c86bc
    ADD ESP,0x1c                        ; 005c86bf
    TEST ESI,ESI                        ; 005c86c2
    JZ 0x005c8aaf                       ; 005c86c4
        ;   XREF to: 005c8aaf (CONDITIONAL_JUMP)  ; LAB_005c8aaf
    CMP dword ptr [EBP + 0x7a],0x0      ; 005c86ca
    JZ 0x005c8aaf                       ; 005c86ce
        ;   XREF to: 005c8aaf (CONDITIONAL_JUMP)  ; LAB_005c8aaf
    PUSH 0x0                            ; 005c86d4
    LEA EAX,[EBP + 0x76]                ; 005c86d6
    PUSH EAX                            ; 005c86d9
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c86da
    PUSH EAX                            ; 005c86dd
    PUSH EBX                            ; 005c86de
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c86df
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c86e4
    TEST EAX,EAX                        ; 005c86e7
    JZ 0x005c8a4c                       ; 005c86e9
        ;   XREF to: 005c8a4c (CONDITIONAL_JUMP)  ; LAB_005c8a4c
    PUSH 0x0                            ; 005c86ef
    LEA EAX,[EBP + 0x7a]                ; 005c86f1
    PUSH EAX                            ; 005c86f4
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c86f5
    PUSH ESI                            ; 005c86f8
    PUSH EBX                            ; 005c86f9
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c86fa
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c86ff
    TEST EAX,EAX                        ; 005c8702
    JZ 0x005c8a6e                       ; 005c8704
        ;   XREF to: 005c8a6e (CONDITIONAL_JUMP)  ; LAB_005c8a6e
    LEA EAX,[EBP + 0x76]                ; 005c870a
    PUSH EAX                            ; 005c870d
    MOV EDX,dword ptr [EBP + 0x6e]      ; 005c870e
    PUSH EDX                            ; 005c8711
    PUSH EBX                            ; 005c8712
    CALL shape_superopt.cpp_FUN_005c91e0 ; 005c8713
        ;   XREF to: 005c91e0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c91e0()
    ADD ESP,0xc                         ; 005c8718
    TEST EAX,EAX                        ; 005c871b
    JZ 0x005c8ad1                       ; 005c871d
        ;   XREF to: 005c8ad1 (CONDITIONAL_JUMP)  ; LAB_005c8ad1
    LEA EAX,[EBP + 0x7a]                ; 005c8723
    PUSH EAX                            ; 005c8726
    PUSH ESI                            ; 005c8727
    PUSH EBX                            ; 005c8728
    CALL shape_superopt.cpp_FUN_005c91e0 ; 005c8729
        ;   XREF to: 005c91e0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c91e0()
    ADD ESP,0xc                         ; 005c872e
    TEST EAX,EAX                        ; 005c8731
    JZ 0x005c8a6e                       ; 005c8733
        ;   XREF to: 005c8a6e (CONDITIONAL_JUMP)  ; LAB_005c8a6e
    CMP dword ptr [EBP + 0x76],0x0      ; 005c8739
    JZ 0x005c8af0                       ; 005c873d
        ;   XREF to: 005c8af0 (CONDITIONAL_JUMP)  ; LAB_005c8af0
    CMP dword ptr [EBP + 0x76],0x0      ; 005c8743
        ;   Label: LAB_005c8743
    JZ 0x005c8753                       ; 005c8747
        ;   XREF to: 005c8753 (CONDITIONAL_JUMP)  ; LAB_005c8753
    CMP dword ptr [EBP + 0x7a],0x0      ; 005c8749
    JNZ 0x005c8aff                      ; 005c874d
        ;   XREF to: 005c8aff (CONDITIONAL_JUMP)  ; LAB_005c8aff
    MOV EDX,dword ptr [EBP + 0x76]      ; 005c8753
        ;   Label: LAB_005c8753
    TEST EDX,EDX                        ; 005c8756
    JZ 0x005c8b21                       ; 005c8758
        ;   XREF to: 005c8b21 (CONDITIONAL_JUMP)  ; LAB_005c8b21
    IMUL ECX,EDX,0x60                   ; 005c875e
    MOV ESI,dword ptr [EBP + 0x6e]      ; 005c8761
    MOV EDI,dword ptr [EBX + 0x30]      ; 005c8764
    PUSH EDI                            ; 005c8767
    MOV EAX,ECX                         ; 005c8768
    SHR ECX,0x2                         ; 005c876a
    MOVSD.REP ES:EDI,ESI                ; 005c876d
    MOV CL,AL                           ; 005c876f
    AND CL,0x3                          ; 005c8771
    MOVSB.REP ES:EDI,ESI                ; 005c8774
    POP EDI                             ; 005c8776
    MOV EAX,dword ptr [EBP + 0x76]      ; 005c8777
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c877a
    JMP 0x005c854b                      ; 005c877d
        ;   XREF to: 005c854b (UNCONDITIONAL_JUMP)  ; LAB_005c854b
    PUSH EDI                            ; 005c8782
        ;   Label: LAB_005c8782
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8783
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8788
    XOR EAX,EAX                         ; 005c878b
    LEA ESP,[EBP + 0x7e]                ; 005c878d
    POP EBP                             ; 005c8790
    POP EDI                             ; 005c8791
    POP ESI                             ; 005c8792
    POP EBX                             ; 005c8793
    RET                                 ; 005c8794
    PUSH EDI                            ; 005c8795
        ;   Label: LAB_005c8795
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005c8796
    PUSH ECX                            ; 005c8799
    PUSH EBX                            ; 005c879a
    CALL shape_superopt.cpp_FUN_005c8e70 ; 005c879b
        ;   XREF to: 005c8e70 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c8e70()
    ADD ESP,0xc                         ; 005c87a0
    TEST EAX,EAX                        ; 005c87a3
    JZ 0x005c8a0b                       ; 005c87a5
        ;   XREF to: 005c8a0b (CONDITIONAL_JUMP)  ; LAB_005c8a0b
    MOV ECX,0x6                         ; 005c87ab
    LEA EDI,[EBP + 0x22]                ; 005c87b0
    LEA ESI,[EAX + 0x10]                ; 005c87b3
    LEA EDX,[EAX + 0x28]                ; 005c87b6
    MOVSD.REP ES:EDI,ESI                ; 005c87b9
    FLD double ptr [EDX]                ; 005c87bb
    FLD double ptr [EDX + 0x8]          ; 005c87bd
    FLD double ptr [EDX + 0x10]         ; 005c87c0
    MOV ECX,0x6                         ; 005c87c3
    LEA EDI,[EBP + 0x3a]                ; 005c87c8
    LEA ESI,[EBP + -0x56]               ; 005c87cb
    FXCH ST2                            ; 005c87ce
    FSUB double ptr [EAX + 0x10]        ; 005c87d0
    FXCH                                ; 005c87d3
    FSUB double ptr [EAX + 0x18]        ; 005c87d5
    FXCH ST2                            ; 005c87d8
    FSUB double ptr [EAX + 0x20]        ; 005c87da
    FXCH                                ; 005c87dd
    FSTP double ptr [EBP + -0x56]       ; 005c87df
    FXCH                                ; 005c87e2
    FSTP double ptr [EBP + -0x4e]       ; 005c87e4
    FSTP double ptr [EBP + -0x46]       ; 005c87e7
    MOVSD.REP ES:EDI,ESI                ; 005c87ea
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005c87ec
    MOV dword ptr [EBP + -0xe],EAX      ; 005c87ef
    MOV EAX,dword ptr [EBP + 0x3e]      ; 005c87f2
    MOV dword ptr [EBP + -0xa],EAX      ; 005c87f5
    MOV EAX,dword ptr [EBP + 0x42]      ; 005c87f8
    MOV dword ptr [EBP + -0x6],EAX      ; 005c87fb
    MOV EAX,dword ptr [EBP + 0x46]      ; 005c87fe
    MOV dword ptr [EBP + -0x2],EAX      ; 005c8801
    MOV EAX,dword ptr [EBP + 0x4a]      ; 005c8804
    MOV dword ptr [EBP + 0x2],EAX       ; 005c8807
    MOV EAX,dword ptr [EBP + 0x4e]      ; 005c880a
    MOV dword ptr [EBP + 0x6],EAX       ; 005c880d
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c8810
    FLD double ptr [EBP + 0x42]         ; 005c8813
    FMUL double ptr [EAX + 0x10]        ; 005c8816
    FLD double ptr [EBP + 0x4a]         ; 005c8819
    FMUL double ptr [EAX + 0x8]         ; 005c881c
    FSUBP                               ; 005c881f
    FLD double ptr [EBP + 0x4a]         ; 005c8821
    FXCH                                ; 005c8824
    FSTP double ptr [EBP + 0xffffff4a]  ; 005c8826
    FMUL double ptr [EAX]               ; 005c882c
    FLD double ptr [EBP + 0x3a]         ; 005c882e
    FMUL double ptr [EAX + 0x10]        ; 005c8831
    FSUBP                               ; 005c8834
    FLD double ptr [EBP + 0x3a]         ; 005c8836
    FXCH                                ; 005c8839
    FSTP double ptr [EBP + 0xffffff52]  ; 005c883b
    FMUL double ptr [EAX + 0x8]         ; 005c8841
    FLD double ptr [EBP + 0xffffff52]   ; 005c8844
    FMUL ST0                            ; 005c884a
    FLD double ptr [EBP + 0x42]         ; 005c884c
    FMUL double ptr [EAX]               ; 005c884f
    FLD double ptr [EBP + 0xffffff4a]   ; 005c8851
    FMUL ST0                            ; 005c8857
    FXCH                                ; 005c8859
    FSUBP ST3,ST0                       ; 005c885b
    FADDP                               ; 005c885d
    FXCH                                ; 005c885f
    FST double ptr [EBP + 0xffffff5a]   ; 005c8861
    FMUL double ptr [EBP + 0xffffff5a]  ; 005c8867
    FADDP                               ; 005c886d
    FSQRT                               ; 005c886f
    FLD double ptr [EBP + 0xffffff4a]   ; 005c8871
    FLD1                                ; 005c8877
    FDIVRP ST2,ST0                      ; 005c8879
    FMUL ST1                            ; 005c887b
    FLD double ptr [EBP + 0xffffff52]   ; 005c887d
    FMUL ST2                            ; 005c8883
    LEA EAX,[EBP + 0x62]                ; 005c8885
    FLD double ptr [EBP + 0xffffff5a]   ; 005c8888
    PUSH EAX                            ; 005c888e
    LEA EAX,[EBP + 0x66]                ; 005c888f
    FMULP ST3                           ; 005c8892
    PUSH EAX                            ; 005c8894
    FXCH                                ; 005c8895
    FSTP double ptr [EBP + 0xffffff4a]  ; 005c8897
    MOV EAX,dword ptr [EBP + 0xffffff4a] ; 005c889d
    MOV EDX,dword ptr [EBP + 0x6a]      ; 005c88a3
    MOV dword ptr [EBP + 0xffffff62],EAX ; 005c88a6
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 005c88ac
    FSTP double ptr [EBP + 0xffffff52]  ; 005c88b2
    MOV dword ptr [EBP + 0xffffff66],EAX ; 005c88b8
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 005c88be
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005c88c4
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 005c88c7
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 005c88cd
    FSTP double ptr [EBP + 0xffffff5a]  ; 005c88d3
    MOV dword ptr [EBP + 0xffffff6e],EAX ; 005c88d9
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 005c88df
    PUSH EDX                            ; 005c88e5
    MOV dword ptr [EBP + 0xffffff72],EAX ; 005c88e6
    MOV EAX,dword ptr [EBP + 0xffffff5e] ; 005c88ec
    PUSH ECX                            ; 005c88f2
    MOV dword ptr [EBP + 0xffffff76],EAX ; 005c88f3
    LEA EAX,[EBP + 0xffffff62]          ; 005c88f9
    PUSH EAX                            ; 005c88ff
    LEA EAX,[EBP + 0x22]                ; 005c8900
    PUSH EAX                            ; 005c8903
    XOR EDI,EDI                         ; 005c8904
    PUSH EBX                            ; 005c8906
    MOV dword ptr [EBP + 0x66],EDI      ; 005c8907
    MOV dword ptr [EBP + 0x62],EDI      ; 005c890a
    CALL shape_superopt.cpp_FUN_005c9aa0 ; 005c890d
        ;   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c9aa0()
    MOV ESI,dword ptr [EBP + 0x66]      ; 005c8912
    ADD ESP,0x1c                        ; 005c8915
    TEST ESI,ESI                        ; 005c8918
    JZ 0x005c8a2a                       ; 005c891a
        ;   XREF to: 005c8a2a (CONDITIONAL_JUMP)  ; LAB_005c8a2a
    CMP dword ptr [EBP + 0x62],0x0      ; 005c8920
    JZ 0x005c8a2a                       ; 005c8924
        ;   XREF to: 005c8a2a (CONDITIONAL_JUMP)  ; LAB_005c8a2a
    PUSH 0x0                            ; 005c892a
    LEA EAX,[EBP + 0x66]                ; 005c892c
    PUSH EAX                            ; 005c892f
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8930
    PUSH EAX                            ; 005c8933
    PUSH EBX                            ; 005c8934
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c8935
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c893a
    TEST EAX,EAX                        ; 005c893d
    JZ 0x005c8a4c                       ; 005c893f
        ;   XREF to: 005c8a4c (CONDITIONAL_JUMP)  ; LAB_005c8a4c
    PUSH 0x0                            ; 005c8945
    LEA EAX,[EBP + 0x62]                ; 005c8947
    PUSH EAX                            ; 005c894a
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c894b
    PUSH ESI                            ; 005c894e
    PUSH EBX                            ; 005c894f
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c8950
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c8955
    TEST EAX,EAX                        ; 005c8958
    JZ 0x005c8a6e                       ; 005c895a
        ;   XREF to: 005c8a6e (CONDITIONAL_JUMP)  ; LAB_005c8a6e
    MOV EDX,dword ptr [EBP + 0x66]      ; 005c8960
    TEST EDX,EDX                        ; 005c8963
    JZ 0x005c8a2a                       ; 005c8965
        ;   XREF to: 005c8a2a (CONDITIONAL_JUMP)  ; LAB_005c8a2a
    CMP dword ptr [EBP + 0x62],0x0      ; 005c896b
    JZ 0x005c8a2a                       ; 005c896f
        ;   XREF to: 005c8a2a (CONDITIONAL_JUMP)  ; LAB_005c8a2a
    LEA ECX,[EDX*0x4 + 0x0]             ; 005c8975
    MOV ESI,dword ptr [EBP + 0x6e]      ; 005c897c
    SUB ECX,EDX                         ; 005c897f
    MOV EDI,dword ptr [EBX + 0x30]      ; 005c8981
    SHL ECX,0x5                         ; 005c8984
    PUSH EDI                            ; 005c8987
    MOV EAX,ECX                         ; 005c8988
    SHR ECX,0x2                         ; 005c898a
    MOVSD.REP ES:EDI,ESI                ; 005c898d
    MOV CL,AL                           ; 005c898f
    AND CL,0x3                          ; 005c8991
    MOVSB.REP ES:EDI,ESI                ; 005c8994
    POP EDI                             ; 005c8996
    MOV EAX,dword ptr [EBP + 0x66]      ; 005c8997
    PUSH EBX                            ; 005c899a
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c899b
    CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 ; 005c899e
        ;   XREF to: 005c84c0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0()
    ADD ESP,0x4                         ; 005c89a3
    TEST EAX,EAX                        ; 005c89a6
    JZ 0x005c8a8d                       ; 005c89a8
        ;   XREF to: 005c8a8d (CONDITIONAL_JUMP)  ; LAB_005c8a8d
    MOV EDX,dword ptr [EBP + 0x62]      ; 005c89ae
    LEA ECX,[EDX*0x4 + 0x0]             ; 005c89b1
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c89b8
    SUB ECX,EDX                         ; 005c89bb
    MOV EDI,dword ptr [EBX + 0x30]      ; 005c89bd
    SHL ECX,0x5                         ; 005c89c0
    PUSH EDI                            ; 005c89c3
    MOV EAX,ECX                         ; 005c89c4
    SHR ECX,0x2                         ; 005c89c6
    MOVSD.REP ES:EDI,ESI                ; 005c89c9
    MOV CL,AL                           ; 005c89cb
    AND CL,0x3                          ; 005c89cd
    MOVSB.REP ES:EDI,ESI                ; 005c89d0
    POP EDI                             ; 005c89d2
    MOV EAX,dword ptr [EBP + 0x62]      ; 005c89d3
    PUSH EBX                            ; 005c89d6
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c89d7
    CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 ; 005c89da
        ;   XREF to: 005c84c0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0()
    ADD ESP,0x4                         ; 005c89df
    TEST EAX,EAX                        ; 005c89e2
    JZ 0x005c8a4c                       ; 005c89e4
        ;   XREF to: 005c8a4c (CONDITIONAL_JUMP)  ; LAB_005c8a4c
    MOV EBX,dword ptr [EBP + 0x6e]      ; 005c89e6
        ;   Label: LAB_005c89e6
    PUSH EBX                            ; 005c89e9
    CALL crt_memory.c_free_FUN_005fe659 ; 005c89ea
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c89ef
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c89f2
    PUSH ESI                            ; 005c89f5
    CALL crt_memory.c_free_FUN_005fe659 ; 005c89f6
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    MOV EAX,0x1                         ; 005c89fb
    ADD ESP,0x4                         ; 005c8a00
    LEA ESP,[EBP + 0x7e]                ; 005c8a03
    POP EBP                             ; 005c8a06
    POP EDI                             ; 005c8a07
    POP ESI                             ; 005c8a08
    POP EBX                             ; 005c8a09
    RET                                 ; 005c8a0a
    MOV EBX,dword ptr [EBP + 0x6e]      ; 005c8a0b
        ;   Label: LAB_005c8a0b
    PUSH EBX                            ; 005c8a0e
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a0f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a14
    PUSH EDI                            ; 005c8a17
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a18
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a1d
    XOR EAX,EAX                         ; 005c8a20
    LEA ESP,[EBP + 0x7e]                ; 005c8a22
    POP EBP                             ; 005c8a25
    POP EDI                             ; 005c8a26
    POP ESI                             ; 005c8a27
    POP EBX                             ; 005c8a28
    RET                                 ; 005c8a29
    MOV EBX,dword ptr [EBP + 0x6e]      ; 005c8a2a
        ;   Label: LAB_005c8a2a
    PUSH EBX                            ; 005c8a2d
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a2e
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a33
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c8a36
    PUSH ESI                            ; 005c8a39
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a3a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a3f
    XOR EAX,EAX                         ; 005c8a42
    LEA ESP,[EBP + 0x7e]                ; 005c8a44
    POP EBP                             ; 005c8a47
    POP EDI                             ; 005c8a48
    POP ESI                             ; 005c8a49
    POP EBX                             ; 005c8a4a
    RET                                 ; 005c8a4b
    MOV EDX,dword ptr [EBP + 0x6e]      ; 005c8a4c
        ;   Label: LAB_005c8a4c
    PUSH EDX                            ; 005c8a4f
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a50
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a55
    MOV ECX,dword ptr [EBP + 0x6a]      ; 005c8a58
    PUSH ECX                            ; 005c8a5b
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a5c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a61
    XOR EAX,EAX                         ; 005c8a64
    LEA ESP,[EBP + 0x7e]                ; 005c8a66
    POP EBP                             ; 005c8a69
    POP EDI                             ; 005c8a6a
    POP ESI                             ; 005c8a6b
    POP EBX                             ; 005c8a6c
    RET                                 ; 005c8a6d
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005c8a6e
        ;   Label: LAB_005c8a6e
    PUSH EDI                            ; 005c8a71
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a72
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a77
    PUSH ESI                            ; 005c8a7a
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a7b
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a80
    XOR EAX,EAX                         ; 005c8a83
    LEA ESP,[EBP + 0x7e]                ; 005c8a85
    POP EBP                             ; 005c8a88
    POP EDI                             ; 005c8a89
    POP ESI                             ; 005c8a8a
    POP EBX                             ; 005c8a8b
    RET                                 ; 005c8a8c
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005c8a8d
        ;   Label: LAB_005c8a8d
    PUSH EDI                            ; 005c8a90
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a91
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8a96
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005c8a99
    PUSH EAX                            ; 005c8a9c
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8a9d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8aa2
    XOR EAX,EAX                         ; 005c8aa5
    LEA ESP,[EBP + 0x7e]                ; 005c8aa7
    POP EBP                             ; 005c8aaa
    POP EDI                             ; 005c8aab
    POP ESI                             ; 005c8aac
    POP EBX                             ; 005c8aad
    RET                                 ; 005c8aae
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005c8aaf
        ;   Label: LAB_005c8aaf
    PUSH ECX                            ; 005c8ab2
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8ab3
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8ab8
    MOV EBX,dword ptr [EBP + 0x6a]      ; 005c8abb
    PUSH EBX                            ; 005c8abe
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8abf
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8ac4
    XOR EAX,EAX                         ; 005c8ac7
    LEA ESP,[EBP + 0x7e]                ; 005c8ac9
    POP EBP                             ; 005c8acc
    POP EDI                             ; 005c8acd
    POP ESI                             ; 005c8ace
    POP EBX                             ; 005c8acf
    RET                                 ; 005c8ad0
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005c8ad1
        ;   Label: LAB_005c8ad1
    PUSH ECX                            ; 005c8ad4
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8ad5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8ada
    PUSH ESI                            ; 005c8add
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8ade
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8ae3
    XOR EAX,EAX                         ; 005c8ae6
    LEA ESP,[EBP + 0x7e]                ; 005c8ae8
    POP EBP                             ; 005c8aeb
    POP EDI                             ; 005c8aec
    POP ESI                             ; 005c8aed
    POP EBX                             ; 005c8aee
    RET                                 ; 005c8aef
    CMP dword ptr [EBP + 0x7a],0x0      ; 005c8af0
        ;   Label: LAB_005c8af0
    JNZ 0x005c8743                      ; 005c8af4
        ;   XREF to: 005c8743 (CONDITIONAL_JUMP)  ; LAB_005c8743
    JMP 0x005c89e6                      ; 005c8afa
        ;   XREF to: 005c89e6 (UNCONDITIONAL_JUMP)  ; LAB_005c89e6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8aff
        ;   Label: LAB_005c8aff
    PUSH EAX                            ; 005c8b02
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8b03
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8b08
    MOV EDX,dword ptr [EBP + 0x6a]      ; 005c8b0b
    PUSH EDX                            ; 005c8b0e
    CALL crt_memory.c_free_FUN_005fe659 ; 005c8b0f
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005c8b14
    XOR EAX,EAX                         ; 005c8b17
    LEA ESP,[EBP + 0x7e]                ; 005c8b19
    POP EBP                             ; 005c8b1c
    POP EDI                             ; 005c8b1d
    POP ESI                             ; 005c8b1e
    POP EBX                             ; 005c8b1f
    RET                                 ; 005c8b20
    IMUL ECX,dword ptr [EBP + 0x7a],0x60 ; 005c8b21
        ;   Label: LAB_005c8b21
    MOV EDI,dword ptr [EBX + 0x30]      ; 005c8b25
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005c8b28
    PUSH EDI                            ; 005c8b2b
    MOV EAX,ECX                         ; 005c8b2c
    SHR ECX,0x2                         ; 005c8b2e
    MOVSD.REP ES:EDI,ESI                ; 005c8b31
    MOV CL,AL                           ; 005c8b33
    AND CL,0x3                          ; 005c8b35
    MOVSB.REP ES:EDI,ESI                ; 005c8b38
    POP EDI                             ; 005c8b3a
    MOV EAX,dword ptr [EBP + 0x7a]      ; 005c8b3b
    MOV dword ptr [EBX + 0x2c],EAX      ; 005c8b3e
    JMP 0x005c854b                      ; 005c8b41
        ;   XREF to: 005c854b (UNCONDITIONAL_JUMP)  ; LAB_005c854b

