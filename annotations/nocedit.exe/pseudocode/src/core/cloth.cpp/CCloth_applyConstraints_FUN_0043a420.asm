; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420(CCloth *this_ptr,SClothVertex *vertex)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; SClothVertex *   Stack[0x8]:4   vertex
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
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
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   core_cloth.cpp_CCloth_step_FUN_0043abb0 at 0043b76e
;
; Referenced Globals:
;   double DOUBLE_0061849a = 1.05000000000000
;   int INT_02d7a7b8
;   int g_LightAttenuationMax
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a420
        ;   Label: core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420
    PUSH ESI                            ; 0043a421
    PUSH EDI                            ; 0043a422
    PUSH EBP                            ; 0043a423
    MOV EBP,ESP                         ; 0043a424
    SUB ESP,0x120                       ; 0043a426
    AND ESP,0xfffffff8                  ; 0043a42c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043a42f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a432
    FLD float ptr [EBX + 0x4]           ; 0043a435
    FCOMP float ptr [EAX + 0x3fe44]     ; 0043a438
    FNSTSW AX                           ; 0043a43e
    SAHF                                ; 0043a440
    JC 0x0043ab29                       ; 0043a441
        ;   XREF to: 0043ab29 (CONDITIONAL_JUMP)  ; LAB_0043ab29
    MOV EDX,dword ptr [EBX + 0x30]      ; 0043a447
        ;   Label: LAB_0043a447
    XOR ECX,ECX                         ; 0043a44a
    TEST EDX,EDX                        ; 0043a44c
    JLE 0x0043a757                      ; 0043a44e
        ;   XREF to: 0043a757 (CONDITIONAL_JUMP)  ; LAB_0043a757
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a454
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043a457
    ADD EAX,0x3ce64                     ; 0043a45a
    LEA ESI,[EBX + 0x24]                ; 0043a45f
    MOV dword ptr [ESP + 0xfc],EAX      ; 0043a462
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a469
    ADD EDX,0x3fe40                     ; 0043a46c
    ADD EAX,0x56d8                      ; 0043a472
    MOV EDI,EBX                         ; 0043a477
    MOV dword ptr [ESP + 0xf4],EAX      ; 0043a479
    IMUL EAX,dword ptr [EDI + 0x34],0x11c ; 0043a480
        ;   Label: LAB_0043a480
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043a487
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0043a48e
    ADD EAX,dword ptr [ESP + 0xf0]      ; 0043a495
    FLD float ptr [EBX]                 ; 0043a49c
    FSUB float ptr [EAX]                ; 0043a49e
    FSTP float ptr [ESP]                ; 0043a4a0
    FLD float ptr [EBX + 0x4]           ; 0043a4a3
    FSUB float ptr [EAX + 0x4]          ; 0043a4a6
    FSTP float ptr [ESP + 0x4]          ; 0043a4a9
    FLD float ptr [EBX + 0x8]           ; 0043a4ad
    FSUB float ptr [EAX + 0x8]          ; 0043a4b0
    MOV EAX,ESP                         ; 0043a4b3
    MOV dword ptr [ESP + 0xf0],EAX      ; 0043a4b5
    LEA EAX,[ESP + 0xb4]                ; 0043a4bc
    FSTP float ptr [ESP + 0x8]          ; 0043a4c3
    CMP EAX,dword ptr [ESP + 0xf0]      ; 0043a4c7
    JZ 0x0043a4f0                       ; 0043a4ce
        ;   XREF to: 0043a4f0 (CONDITIONAL_JUMP)  ; LAB_0043a4f0
    MOV EAX,dword ptr [ESP]             ; 0043a4d0
    MOV dword ptr [ESP + 0xb4],EAX      ; 0043a4d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043a4da
    MOV dword ptr [ESP + 0xb8],EAX      ; 0043a4de
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043a4e5
    MOV dword ptr [ESP + 0xbc],EAX      ; 0043a4e9
    FLD float ptr [ESP + 0xb8]          ; 0043a4f0
        ;   Label: LAB_0043a4f0
    FMUL ST0                            ; 0043a4f7
    FLD float ptr [ESP + 0xb4]          ; 0043a4f9
    FMUL ST0                            ; 0043a500
    FADDP                               ; 0043a502
    FLD float ptr [ESP + 0xbc]          ; 0043a504
    FMUL ST0                            ; 0043a50b
    FADDP                               ; 0043a50d
    FSTP float ptr [ESP + 0xd4]         ; 0043a50f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0043a516
    SAR EAX,0x1                         ; 0043a51d
    ADD EAX,dword ptr [0x02d7a7b8]      ; 0043a51f | INT_02d7a7b8
    MOV dword ptr [ESP + 0x118],EAX     ; 0043a525
    MOV dword ptr [ESP + 0x10c],EAX     ; 0043a52c
    MOV EAX,dword ptr [EDI + 0x78]      ; 0043a533
    MOV dword ptr [ESP + 0x114],EAX     ; 0043a536
    FLD float ptr [ESP + 0x118]         ; 0043a53d
    FCOMP float ptr [ESP + 0x114]       ; 0043a544
    FNSTSW AX                           ; 0043a54b
    SAHF                                ; 0043a54d
    JBE 0x0043a625                      ; 0043a54e
        ;   XREF to: 0043a625 (CONDITIONAL_JUMP)  ; LAB_0043a625
    FLD float ptr [ESP + 0x118]         ; 0043a554
    FLD ST0                             ; 0043a55b
    FSUB float ptr [ESP + 0x114]        ; 0043a55d
    FLD float ptr [ESP + 0xb4]          ; 0043a564
    FXCH                                ; 0043a56b
    FSTP float ptr [ESP + 0x104]        ; 0043a56d
    FMUL float ptr [ESP + 0x104]        ; 0043a574
    FLD float ptr [ESP + 0xb8]          ; 0043a57b
    FMUL float ptr [ESP + 0x104]        ; 0043a582
    FLD float ptr [ESP + 0xbc]          ; 0043a589
    FMUL float ptr [ESP + 0x104]        ; 0043a590
    FLD1                                ; 0043a597
    FXCH ST3                            ; 0043a599
    FST float ptr [ESP + 0x48]          ; 0043a59b
    FXCH ST3                            ; 0043a59f
    FDIVRP ST4,ST0                      ; 0043a5a1
    FXCH ST2                            ; 0043a5a3
    FMUL ST3                            ; 0043a5a5
    FXCH                                ; 0043a5a7
    FST float ptr [ESP + 0x4c]          ; 0043a5a9
    FMUL ST3                            ; 0043a5ad
    FXCH ST2                            ; 0043a5af
    FST float ptr [ESP + 0x50]          ; 0043a5b1
    FMULP ST3                           ; 0043a5b5
    FSTP float ptr [ESP + 0x54]         ; 0043a5b7
    FSTP float ptr [ESP + 0x58]         ; 0043a5bb
    FSTP float ptr [ESP + 0x5c]         ; 0043a5bf
    FLD float ptr [EBX]                 ; 0043a5c3
    FSUB float ptr [ESP + 0x54]         ; 0043a5c5
    FLD float ptr [EBX + 0x4]           ; 0043a5c9
    FXCH                                ; 0043a5cc
    FSTP float ptr [EBX]                ; 0043a5ce
    FSUB float ptr [ESP + 0x58]         ; 0043a5d0
    FLD float ptr [EBX + 0x8]           ; 0043a5d4
    FXCH                                ; 0043a5d7
    FSTP float ptr [EBX + 0x4]          ; 0043a5d9
    FSUB float ptr [ESP + 0x5c]         ; 0043a5dc
    FSTP float ptr [EBX + 0x8]          ; 0043a5e0
    FLD float ptr [ESP + 0x54]          ; 0043a5e3
    FMUL float ptr [EDX]                ; 0043a5e7
    FLD float ptr [ESP + 0x58]          ; 0043a5e9
    FXCH                                ; 0043a5ed
    FSTP float ptr [ESP + 0x30]         ; 0043a5ef
    FMUL float ptr [EDX]                ; 0043a5f3
    FLD float ptr [ESP + 0x5c]          ; 0043a5f5
    FXCH                                ; 0043a5f9
    FSTP float ptr [ESP + 0x34]         ; 0043a5fb
    FMUL float ptr [EDX]                ; 0043a5ff
    FSTP float ptr [ESP + 0x38]         ; 0043a601
    FLD float ptr [ESI]                 ; 0043a605
    FSUB float ptr [ESP + 0x30]         ; 0043a607
    FLD float ptr [ESI + 0x4]           ; 0043a60b
    FXCH                                ; 0043a60e
    FSTP float ptr [ESI]                ; 0043a610
    FSUB float ptr [ESP + 0x34]         ; 0043a612
    FLD float ptr [ESI + 0x8]           ; 0043a616
    FXCH                                ; 0043a619
    FSTP float ptr [ESI + 0x4]          ; 0043a61b
    FSUB float ptr [ESP + 0x38]         ; 0043a61e
    FSTP float ptr [ESI + 0x8]          ; 0043a622
    FLD float ptr [ESP + 0x10c]         ; 0043a625
        ;   Label: LAB_0043a625
    FCOMP float ptr [ESP + 0x114]       ; 0043a62c
    FNSTSW AX                           ; 0043a633
    SAHF                                ; 0043a635
    JNC 0x0043a748                      ; 0043a636
        ;   XREF to: 0043a748 (CONDITIONAL_JUMP)  ; LAB_0043a748
    FLD float ptr [ESP + 0x10c]         ; 0043a63c
    FLD float ptr [ESP + 0x114]         ; 0043a643
    FSUB ST0,ST1                        ; 0043a64a
    FLD float ptr [ESP + 0xb4]          ; 0043a64c
    FXCH                                ; 0043a653
    FSTP float ptr [ESP + 0x108]        ; 0043a655
    FMUL float ptr [ESP + 0x108]        ; 0043a65c
    FLD float ptr [ESP + 0xb8]          ; 0043a663
    FMUL float ptr [ESP + 0x108]        ; 0043a66a
    FLD float ptr [ESP + 0xbc]          ; 0043a671
    FMUL float ptr [ESP + 0x108]        ; 0043a678
    FLD1                                ; 0043a67f
    FXCH ST3                            ; 0043a681
    FST float ptr [ESP + 0x18]          ; 0043a683
    FXCH ST3                            ; 0043a687
    FDIVRP ST4,ST0                      ; 0043a689
    FXCH ST2                            ; 0043a68b
    FMUL ST3                            ; 0043a68d
    FXCH                                ; 0043a68f
    FST float ptr [ESP + 0x1c]          ; 0043a691
    FMUL ST3                            ; 0043a695
    FXCH ST2                            ; 0043a697
    FST float ptr [ESP + 0x20]          ; 0043a699
    FMULP ST3                           ; 0043a69d
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0043a69f
    FSTP float ptr [ESP + 0x9c]         ; 0043a6a6
    FSTP float ptr [ESP + 0xa0]         ; 0043a6ad
    FSTP float ptr [ESP + 0xa4]         ; 0043a6b4
    FLD float ptr [ESP + 0x9c]          ; 0043a6bb
    FMUL float ptr [EAX]                ; 0043a6c2
    FLD float ptr [ESP + 0xa0]          ; 0043a6c4
    FXCH                                ; 0043a6cb
    FSTP float ptr [ESP + 0x3c]         ; 0043a6cd
    FMUL float ptr [EAX]                ; 0043a6d1
    FLD float ptr [ESP + 0xa4]          ; 0043a6d3
    FXCH                                ; 0043a6da
    FSTP float ptr [ESP + 0x40]         ; 0043a6dc
    FMUL float ptr [EAX]                ; 0043a6e0
    FSTP float ptr [ESP + 0x44]         ; 0043a6e2
    FLD float ptr [EBX]                 ; 0043a6e6
    FADD float ptr [ESP + 0x3c]         ; 0043a6e8
    FLD float ptr [EBX + 0x4]           ; 0043a6ec
    FXCH                                ; 0043a6ef
    FSTP float ptr [EBX]                ; 0043a6f1
    FADD float ptr [ESP + 0x40]         ; 0043a6f3
    FLD float ptr [EBX + 0x8]           ; 0043a6f7
    FXCH                                ; 0043a6fa
    FSTP float ptr [EBX + 0x4]          ; 0043a6fc
    FADD float ptr [ESP + 0x44]         ; 0043a6ff
    FSTP float ptr [EBX + 0x8]          ; 0043a703
    FLD float ptr [ESP + 0x3c]          ; 0043a706
    FMUL float ptr [EDX]                ; 0043a70a
    FLD float ptr [ESP + 0x40]          ; 0043a70c
    FXCH                                ; 0043a710
    FSTP float ptr [ESP + 0x6c]         ; 0043a712
    FMUL float ptr [EDX]                ; 0043a716
    FLD float ptr [ESP + 0x44]          ; 0043a718
    FXCH                                ; 0043a71c
    FSTP float ptr [ESP + 0x70]         ; 0043a71e
    FMUL float ptr [EDX]                ; 0043a722
    FSTP float ptr [ESP + 0x74]         ; 0043a724
    FLD float ptr [ESI]                 ; 0043a728
    FADD float ptr [ESP + 0x6c]         ; 0043a72a
    FLD float ptr [ESI + 0x4]           ; 0043a72e
    FXCH                                ; 0043a731
    FSTP float ptr [ESI]                ; 0043a733
    FADD float ptr [ESP + 0x70]         ; 0043a735
    FLD float ptr [ESI + 0x8]           ; 0043a739
    FXCH                                ; 0043a73c
    FSTP float ptr [ESI + 0x4]          ; 0043a73e
    FADD float ptr [ESP + 0x74]         ; 0043a741
    FSTP float ptr [ESI + 0x8]          ; 0043a745
    INC ECX                             ; 0043a748
        ;   Label: LAB_0043a748
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043a749
    ADD EDI,0x4                         ; 0043a74c
    CMP ECX,EAX                         ; 0043a74f
    JL 0x0043a480                       ; 0043a751
        ;   XREF to: 0043a480 (CONDITIONAL_JUMP)  ; LAB_0043a480
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a757
        ;   Label: LAB_0043a757
    XOR EDX,EDX                         ; 0043a75a
    MOV ECX,dword ptr [EAX + 0x3ce8c]   ; 0043a75c
    MOV dword ptr [ESP + 0x110],EDX     ; 0043a762
    TEST ECX,ECX                        ; 0043a769
    JLE 0x0043ab22                      ; 0043a76b
        ;   XREF to: 0043ab22 (CONDITIONAL_JUMP)  ; LAB_0043ab22
    ADD EAX,0x3fe40                     ; 0043a771
    MOV dword ptr [ESP + 0x100],EAX     ; 0043a776
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a77d
    ADD EAX,0x3ce90                     ; 0043a780
    MOV dword ptr [ESP + 0xf8],EAX      ; 0043a785
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043a78c
    ADD EAX,0x3cf30                     ; 0043a78f
    LEA EDI,[EBX + 0x24]                ; 0043a794
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043a797
    IMUL ESI,dword ptr [ESP + 0x110],0xac ; 0043a79e
        ;   Label: LAB_0043a79e
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043a7a9
    FLD float ptr [EBX]                 ; 0043a7b0
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0043a7b2
    FSUB float ptr [EAX]                ; 0043a7b9
    ADD ESI,EDX                         ; 0043a7bb
    FSTP float ptr [ESP + 0xc0]         ; 0043a7bd
    FLD float ptr [EBX + 0x4]           ; 0043a7c4
    FSUB float ptr [EAX + 0x4]          ; 0043a7c7
    LEA EDX,[ESP + 0x78]                ; 0043a7ca
    FSTP float ptr [ESP + 0xc4]         ; 0043a7ce
    FLD float ptr [EBX + 0x8]           ; 0043a7d5
    FSUB float ptr [EAX + 0x8]          ; 0043a7d8
    LEA EAX,[ESP + 0xc0]                ; 0043a7db
    FSTP float ptr [ESP + 0xc8]         ; 0043a7e2
    CMP EDX,EAX                         ; 0043a7e9
    JNZ 0x0043ab4b                      ; 0043a7eb
        ;   XREF to: 0043ab4b (CONDITIONAL_JUMP)  ; LAB_0043ab4b
    FLD float ptr [ESP + 0x7c]          ; 0043a7f1
        ;   Label: LAB_0043a7f1
    FMUL float ptr [ESI + 0x8c]         ; 0043a7f5
    FLD float ptr [ESP + 0x78]          ; 0043a7fb
    FMUL float ptr [ESI + 0x80]         ; 0043a7ff
    FADDP                               ; 0043a805
    FLD float ptr [ESP + 0x80]          ; 0043a807
    FMUL float ptr [ESI + 0x98]         ; 0043a80e
    FADDP                               ; 0043a814
    FST float ptr [ESP + 0x8c]          ; 0043a816
    FLDZ                                ; 0043a81d
    FCOMPP                              ; 0043a81f
    FNSTSW AX                           ; 0043a821
    SAHF                                ; 0043a823
    JA 0x0043aaee                       ; 0043a824
        ;   XREF to: 0043aaee (CONDITIONAL_JUMP)  ; LAB_0043aaee
    FLD float ptr [ESP + 0x8c]          ; 0043a82a
    FCOMP float ptr [ESI + 0x44]        ; 0043a831
    FNSTSW AX                           ; 0043a834
    SAHF                                ; 0043a836
    JA 0x0043aaee                       ; 0043a837
        ;   XREF to: 0043aaee (CONDITIONAL_JUMP)  ; LAB_0043aaee
    FLD float ptr [ESP + 0x7c]          ; 0043a83d
    FMUL float ptr [ESI + 0x84]         ; 0043a841
    FLD float ptr [ESP + 0x78]          ; 0043a847
    FMUL float ptr [ESI + 0x78]         ; 0043a84b
    FADDP                               ; 0043a84e
    FLD float ptr [ESP + 0x80]          ; 0043a850
    FMUL float ptr [ESI + 0x90]         ; 0043a857
    FADDP                               ; 0043a85d
    FLD float ptr [ESP + 0x7c]          ; 0043a85f
    FXCH                                ; 0043a863
    FSTP float ptr [ESP + 0x84]         ; 0043a865
    FMUL float ptr [ESI + 0x88]         ; 0043a86c
    FLD float ptr [ESP + 0x78]          ; 0043a872
    FMUL float ptr [ESI + 0x7c]         ; 0043a876
    FADDP                               ; 0043a879
    FLD float ptr [ESP + 0x80]          ; 0043a87b
    FMUL float ptr [ESI + 0x94]         ; 0043a882
    FADDP                               ; 0043a888
    FLD float ptr [ESP + 0x84]          ; 0043a88a
    FXCH                                ; 0043a891
    FSTP float ptr [ESP + 0x88]         ; 0043a893
    FMUL float ptr [ESI + 0x38]         ; 0043a89a
    FMUL ST0                            ; 0043a89d
    FLD float ptr [ESP + 0x88]          ; 0043a89f
    FMUL float ptr [ESI + 0x3c]         ; 0043a8a6
    FMUL ST0                            ; 0043a8a9
    FADDP                               ; 0043a8ab
    FSTP float ptr [ESP + 0xd8]         ; 0043a8ad
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0043a8b4
    MOV ECX,dword ptr [0x02d7a7b8]      ; 0043a8bb | INT_02d7a7b8
    SAR EAX,0x1                         ; 0043a8c1
    ADD EAX,ECX                         ; 0043a8c3
    MOV dword ptr [ESP + 0xdc],EAX      ; 0043a8c5
    FLD float ptr [ESP + 0xdc]          ; 0043a8cc
    FLD1                                ; 0043a8d3
    FCOMPP                              ; 0043a8d5
    FNSTSW AX                           ; 0043a8d7
    SAHF                                ; 0043a8d9
    JBE 0x0043aaee                      ; 0043a8da
        ;   XREF to: 0043aaee (CONDITIONAL_JUMP)  ; LAB_0043aaee
    FLD float ptr [ESP + 0x88]          ; 0043a8e0
    MOV EAX,dword ptr [ESP + 0x84]      ; 0043a8e7
    FMUL float ptr [ESP + 0x88]         ; 0043a8ee
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043a8f5
    FLD float ptr [ESP + 0x84]          ; 0043a8fc
    MOV EAX,dword ptr [ESP + 0x88]      ; 0043a903
    FMUL float ptr [ESP + 0x84]         ; 0043a90a
    MOV dword ptr [ESP + 0xac],EAX      ; 0043a911
    XOR EAX,EAX                         ; 0043a918
    FADDP                               ; 0043a91a
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043a91c
    FSTP float ptr [ESP + 0xe8]         ; 0043a923
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0043a92a
    MOV EDX,dword ptr [0x02d7a7bc]      ; 0043a931 | g_LightAttenuationMax
    SAR EAX,0x1                         ; 0043a937
    SUB EDX,EAX                         ; 0043a939
    MOV dword ptr [ESP + 0xec],EDX      ; 0043a93b
    FLD float ptr [ESP + 0x84]          ; 0043a942
    FMUL float ptr [ESP + 0xec]         ; 0043a949
    FLD float ptr [ESP + 0x88]          ; 0043a950
    FMUL float ptr [ESP + 0xec]         ; 0043a957
    FLDZ                                ; 0043a95e
    FMUL float ptr [ESP + 0xec]         ; 0043a960
    FXCH ST2                            ; 0043a967
    FSTP float ptr [ESP + 0xa8]         ; 0043a969
    FSTP float ptr [ESP + 0xac]         ; 0043a970
    FSTP float ptr [ESP + 0xb0]         ; 0043a977
    FLD double ptr [0x0061849a]         ; 0043a97e | DOUBLE_0061849a
    FLD float ptr [ESI + 0x14]          ; 0043a984
    FMUL ST1                            ; 0043a987
    FLD float ptr [ESP + 0xa8]          ; 0043a989
    FXCH                                ; 0043a990
    FMUL ST1                            ; 0043a992
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0043a994
    FSTP ST1                            ; 0043a99b
    FSTP float ptr [ESP + 0xa8]         ; 0043a99d
    FMUL float ptr [ESI + 0x18]         ; 0043a9a4
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043a9a7
    LEA EAX,[ESP + 0xa8]                ; 0043a9ae
    FLD float ptr [ESP + 0xac]          ; 0043a9b5
    PUSH EAX                            ; 0043a9bc
    LEA EAX,[ESP + 0x28]                ; 0043a9bd
    FXCH                                ; 0043a9c1
    FMUL ST1                            ; 0043a9c3
    PUSH EAX                            ; 0043a9c5
    LEA EAX,[ESI + 0x78]                ; 0043a9c6
    FSTP ST1                            ; 0043a9c9
    PUSH EAX                            ; 0043a9cb
    FSTP float ptr [ESP + 0xb8]         ; 0043a9cc
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0043a9d3
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI + 0xa0]          ; 0043a9d8
    FADD float ptr [EAX]                ; 0043a9de
    ADD ESP,0xc                         ; 0043a9e0
    FSTP float ptr [ESP + 0x90]         ; 0043a9e3
    FLD float ptr [ESI + 0xa4]          ; 0043a9ea
    FADD float ptr [EAX + 0x4]          ; 0043a9f0
    LEA EDX,[ESP + 0xa8]                ; 0043a9f3
    FSTP float ptr [ESP + 0x94]         ; 0043a9fa
    FLD float ptr [ESI + 0xa8]          ; 0043aa01
    FADD float ptr [EAX + 0x8]          ; 0043aa07
    LEA EAX,[ESP + 0x90]                ; 0043aa0a
    FSTP float ptr [ESP + 0x98]         ; 0043aa11
    CMP EDX,EAX                         ; 0043aa18
    JZ 0x0043aa46                       ; 0043aa1a
        ;   XREF to: 0043aa46 (CONDITIONAL_JUMP)  ; LAB_0043aa46
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043aa1c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0043aa23
    MOV EAX,dword ptr [ESP + 0x94]      ; 0043aa2a
    MOV dword ptr [ESP + 0xac],EAX      ; 0043aa31
    MOV EAX,dword ptr [ESP + 0x98]      ; 0043aa38
    MOV dword ptr [ESP + 0xb0],EAX      ; 0043aa3f
    FLD float ptr [ESP + 0xa8]          ; 0043aa46
        ;   Label: LAB_0043aa46
    FSUB float ptr [EBX]                ; 0043aa4d
    FLD float ptr [ESP + 0xac]          ; 0043aa4f
    FXCH                                ; 0043aa56
    FSTP float ptr [ESP + 0x60]         ; 0043aa58
    FSUB float ptr [EBX + 0x4]          ; 0043aa5c
    FLD float ptr [ESP + 0xb0]          ; 0043aa5f
    FXCH                                ; 0043aa66
    FSTP float ptr [ESP + 0x64]         ; 0043aa68
    FSUB float ptr [EBX + 0x8]          ; 0043aa6c
    LEA EAX,[ESP + 0xa8]                ; 0043aa6f
    FSTP float ptr [ESP + 0x68]         ; 0043aa76
    CMP EBX,EAX                         ; 0043aa7a
    JZ 0x0043aa9b                       ; 0043aa7c
        ;   XREF to: 0043aa9b (CONDITIONAL_JUMP)  ; LAB_0043aa9b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0043aa7e
    MOV dword ptr [EBX],EAX             ; 0043aa85
    MOV EAX,dword ptr [ESP + 0xac]      ; 0043aa87
    MOV dword ptr [EBX + 0x4],EAX       ; 0043aa8e
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0043aa91
    MOV dword ptr [EBX + 0x8],EAX       ; 0043aa98
    MOV EAX,dword ptr [ESP + 0x100]     ; 0043aa9b
        ;   Label: LAB_0043aa9b
    FLD float ptr [ESP + 0x60]          ; 0043aaa2
    FMUL float ptr [EAX]                ; 0043aaa6
    FLD float ptr [ESP + 0x64]          ; 0043aaa8
    FXCH                                ; 0043aaac
    FSTP float ptr [ESP + 0xc]          ; 0043aaae
    FMUL float ptr [EAX]                ; 0043aab2
    FLD float ptr [ESP + 0x68]          ; 0043aab4
    FXCH                                ; 0043aab8
    FSTP float ptr [ESP + 0x10]         ; 0043aaba
    FMUL float ptr [EAX]                ; 0043aabe
    FSTP float ptr [ESP + 0x14]         ; 0043aac0
    FLD float ptr [EDI]                 ; 0043aac4
    FADD float ptr [ESP + 0xc]          ; 0043aac6
    FLD float ptr [EDI + 0x4]           ; 0043aaca
    FXCH                                ; 0043aacd
    FSTP float ptr [EDI]                ; 0043aacf
    FADD float ptr [ESP + 0x10]         ; 0043aad1
    FLD float ptr [EDI + 0x8]           ; 0043aad5
    FXCH                                ; 0043aad8
    FSTP float ptr [EDI + 0x4]          ; 0043aada
    FADD float ptr [ESP + 0x14]         ; 0043aadd
    FSTP float ptr [EDI + 0x8]          ; 0043aae1
    MOV dword ptr [EBX + 0xb8],0x1      ; 0043aae4
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0043aaee
        ;   Label: LAB_0043aaee
    MOV EAX,dword ptr [ESP + 0x110]     ; 0043aaf5
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043aafc
    ADD ESI,0xac                        ; 0043aaff
    INC EAX                             ; 0043ab05
    MOV ECX,dword ptr [EDX + 0x3ce8c]   ; 0043ab06
    MOV dword ptr [ESP + 0x11c],ESI     ; 0043ab0c
    MOV dword ptr [ESP + 0x110],EAX     ; 0043ab13
    CMP EAX,ECX                         ; 0043ab1a
    JL 0x0043a79e                       ; 0043ab1c
        ;   XREF to: 0043a79e (CONDITIONAL_JUMP)  ; LAB_0043a79e
    MOV ESP,EBP                         ; 0043ab22
        ;   Label: LAB_0043ab22
    POP EBP                             ; 0043ab24
    POP EDI                             ; 0043ab25
    POP ESI                             ; 0043ab26
    POP EBX                             ; 0043ab27
    RET                                 ; 0043ab28
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043ab29
        ;   Label: LAB_0043ab29
    MOV dword ptr [EBX + 0x28],0x0      ; 0043ab2c
    MOV EDX,dword ptr [EAX + 0x3fe44]   ; 0043ab33
    MOV dword ptr [EBX + 0x4],EDX       ; 0043ab39
    MOV dword ptr [EBX + 0xbc],0x1      ; 0043ab3c
    JMP 0x0043a447                      ; 0043ab46
        ;   XREF to: 0043a447 (UNCONDITIONAL_JUMP)  ; LAB_0043a447
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0043ab4b
        ;   Label: LAB_0043ab4b
    MOV dword ptr [ESP + 0x78],EAX      ; 0043ab52
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0043ab56
    MOV dword ptr [ESP + 0x7c],EAX      ; 0043ab5d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043ab61
    MOV dword ptr [ESP + 0x80],EAX      ; 0043ab68
    JMP 0x0043a7f1                      ; 0043ab6f
        ;   XREF to: 0043a7f1 (UNCONDITIONAL_JUMP)  ; LAB_0043a7f1

