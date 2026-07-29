; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0(CCloth *this_ptr,SClothVertex *vertex)
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
; undefined        Stack[-0x10c]:1  local_10c
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
;   core_cloth.cpp_CCloth_step_FUN_00436e80 at 00437a3e
;
; Referenced Globals:
;   double DOUBLE_0057ae1d = 1.05000000000000
;   undefined4 CVector3f_01c70708.y
;   undefined4 CVector3f_01c70708.z
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004366f0
        ;   Label: core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0
    PUSH ESI                            ; 004366f1
    PUSH EDI                            ; 004366f2
    PUSH EBP                            ; 004366f3
    MOV EBP,ESP                         ; 004366f4
    SUB ESP,0x120                       ; 004366f6
    AND ESP,0xfffffff8                  ; 004366fc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004366ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436702
    FLD float ptr [EBX + 0x4]           ; 00436705
    FCOMP float ptr [EAX + 0x3ab04]     ; 00436708
    FNSTSW AX                           ; 0043670e
    SAHF                                ; 00436710
    JC 0x00436df9                       ; 00436711
        ;   XREF to: 00436df9 (CONDITIONAL_JUMP)  ; LAB_00436df9
    MOV EDX,dword ptr [EBX + 0x30]      ; 00436717
        ;   Label: LAB_00436717
    XOR ECX,ECX                         ; 0043671a
    TEST EDX,EDX                        ; 0043671c
    JLE 0x00436a27                      ; 0043671e
        ;   XREF to: 00436a27 (CONDITIONAL_JUMP)  ; LAB_00436a27
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436724
    MOV EDX,dword ptr [EBP + 0x14]      ; 00436727
    ADD EAX,0x37b24                     ; 0043672a
    LEA ESI,[EBX + 0x24]                ; 0043672f
    MOV dword ptr [ESP + 0xfc],EAX      ; 00436732
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436739
    ADD EDX,0x3ab00                     ; 0043673c
    ADD EAX,0x398                       ; 00436742
    MOV EDI,EBX                         ; 00436747
    MOV dword ptr [ESP + 0xf4],EAX      ; 00436749
    IMUL EAX,dword ptr [EDI + 0x34],0x11c ; 00436750
        ;   Label: LAB_00436750
    MOV dword ptr [ESP + 0xf0],EAX      ; 00436757
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0043675e
    ADD EAX,dword ptr [ESP + 0xf0]      ; 00436765
    FLD float ptr [EBX]                 ; 0043676c
    FSUB float ptr [EAX]                ; 0043676e
    FSTP float ptr [ESP]                ; 00436770
    FLD float ptr [EBX + 0x4]           ; 00436773
    FSUB float ptr [EAX + 0x4]          ; 00436776
    FSTP float ptr [ESP + 0x4]          ; 00436779
    FLD float ptr [EBX + 0x8]           ; 0043677d
    FSUB float ptr [EAX + 0x8]          ; 00436780
    MOV EAX,ESP                         ; 00436783
    MOV dword ptr [ESP + 0xf0],EAX      ; 00436785
    LEA EAX,[ESP + 0xb4]                ; 0043678c
    FSTP float ptr [ESP + 0x8]          ; 00436793
    CMP EAX,dword ptr [ESP + 0xf0]      ; 00436797
    JZ 0x004367c0                       ; 0043679e
        ;   XREF to: 004367c0 (CONDITIONAL_JUMP)  ; LAB_004367c0
    MOV EAX,dword ptr [ESP]             ; 004367a0
    MOV dword ptr [ESP + 0xb4],EAX      ; 004367a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004367aa
    MOV dword ptr [ESP + 0xb8],EAX      ; 004367ae
    MOV EAX,dword ptr [ESP + 0x8]       ; 004367b5
    MOV dword ptr [ESP + 0xbc],EAX      ; 004367b9
    FLD float ptr [ESP + 0xb8]          ; 004367c0
        ;   Label: LAB_004367c0
    FMUL ST0                            ; 004367c7
    FLD float ptr [ESP + 0xb4]          ; 004367c9
    FMUL ST0                            ; 004367d0
    FADDP                               ; 004367d2
    FLD float ptr [ESP + 0xbc]          ; 004367d4
    FMUL ST0                            ; 004367db
    FADDP                               ; 004367dd
    FSTP float ptr [ESP + 0xd4]         ; 004367df
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004367e6
    SAR EAX,0x1                         ; 004367ed
    ADD EAX,dword ptr [0x01c7070c]      ; 004367ef | CVector3f_01c70708.y
    MOV dword ptr [ESP + 0x118],EAX     ; 004367f5
    MOV dword ptr [ESP + 0x10c],EAX     ; 004367fc
    MOV EAX,dword ptr [EDI + 0x78]      ; 00436803
    MOV dword ptr [ESP + 0x114],EAX     ; 00436806
    FLD float ptr [ESP + 0x118]         ; 0043680d
    FCOMP float ptr [ESP + 0x114]       ; 00436814
    FNSTSW AX                           ; 0043681b
    SAHF                                ; 0043681d
    JBE 0x004368f5                      ; 0043681e
        ;   XREF to: 004368f5 (CONDITIONAL_JUMP)  ; LAB_004368f5
    FLD float ptr [ESP + 0x118]         ; 00436824
    FLD ST0                             ; 0043682b
    FSUB float ptr [ESP + 0x114]        ; 0043682d
    FLD float ptr [ESP + 0xb4]          ; 00436834
    FXCH                                ; 0043683b
    FSTP float ptr [ESP + 0x104]        ; 0043683d
    FMUL float ptr [ESP + 0x104]        ; 00436844
    FLD float ptr [ESP + 0xb8]          ; 0043684b
    FMUL float ptr [ESP + 0x104]        ; 00436852
    FLD float ptr [ESP + 0xbc]          ; 00436859
    FMUL float ptr [ESP + 0x104]        ; 00436860
    FLD1                                ; 00436867
    FXCH ST3                            ; 00436869
    FST float ptr [ESP + 0x48]          ; 0043686b
    FXCH ST3                            ; 0043686f
    FDIVRP ST4,ST0                      ; 00436871
    FXCH ST2                            ; 00436873
    FMUL ST3                            ; 00436875
    FXCH                                ; 00436877
    FST float ptr [ESP + 0x4c]          ; 00436879
    FMUL ST3                            ; 0043687d
    FXCH ST2                            ; 0043687f
    FST float ptr [ESP + 0x50]          ; 00436881
    FMULP ST3                           ; 00436885
    FSTP float ptr [ESP + 0x54]         ; 00436887
    FSTP float ptr [ESP + 0x58]         ; 0043688b
    FSTP float ptr [ESP + 0x5c]         ; 0043688f
    FLD float ptr [EBX]                 ; 00436893
    FSUB float ptr [ESP + 0x54]         ; 00436895
    FLD float ptr [EBX + 0x4]           ; 00436899
    FXCH                                ; 0043689c
    FSTP float ptr [EBX]                ; 0043689e
    FSUB float ptr [ESP + 0x58]         ; 004368a0
    FLD float ptr [EBX + 0x8]           ; 004368a4
    FXCH                                ; 004368a7
    FSTP float ptr [EBX + 0x4]          ; 004368a9
    FSUB float ptr [ESP + 0x5c]         ; 004368ac
    FSTP float ptr [EBX + 0x8]          ; 004368b0
    FLD float ptr [ESP + 0x54]          ; 004368b3
    FMUL float ptr [EDX]                ; 004368b7
    FLD float ptr [ESP + 0x58]          ; 004368b9
    FXCH                                ; 004368bd
    FSTP float ptr [ESP + 0x30]         ; 004368bf
    FMUL float ptr [EDX]                ; 004368c3
    FLD float ptr [ESP + 0x5c]          ; 004368c5
    FXCH                                ; 004368c9
    FSTP float ptr [ESP + 0x34]         ; 004368cb
    FMUL float ptr [EDX]                ; 004368cf
    FSTP float ptr [ESP + 0x38]         ; 004368d1
    FLD float ptr [ESI]                 ; 004368d5
    FSUB float ptr [ESP + 0x30]         ; 004368d7
    FLD float ptr [ESI + 0x4]           ; 004368db
    FXCH                                ; 004368de
    FSTP float ptr [ESI]                ; 004368e0
    FSUB float ptr [ESP + 0x34]         ; 004368e2
    FLD float ptr [ESI + 0x8]           ; 004368e6
    FXCH                                ; 004368e9
    FSTP float ptr [ESI + 0x4]          ; 004368eb
    FSUB float ptr [ESP + 0x38]         ; 004368ee
    FSTP float ptr [ESI + 0x8]          ; 004368f2
    FLD float ptr [ESP + 0x10c]         ; 004368f5
        ;   Label: LAB_004368f5
    FCOMP float ptr [ESP + 0x114]       ; 004368fc
    FNSTSW AX                           ; 00436903
    SAHF                                ; 00436905
    JNC 0x00436a18                      ; 00436906
        ;   XREF to: 00436a18 (CONDITIONAL_JUMP)  ; LAB_00436a18
    FLD float ptr [ESP + 0x10c]         ; 0043690c
    FLD float ptr [ESP + 0x114]         ; 00436913
    FSUB ST0,ST1                        ; 0043691a
    FLD float ptr [ESP + 0xb4]          ; 0043691c
    FXCH                                ; 00436923
    FSTP float ptr [ESP + 0x108]        ; 00436925
    FMUL float ptr [ESP + 0x108]        ; 0043692c
    FLD float ptr [ESP + 0xb8]          ; 00436933
    FMUL float ptr [ESP + 0x108]        ; 0043693a
    FLD float ptr [ESP + 0xbc]          ; 00436941
    FMUL float ptr [ESP + 0x108]        ; 00436948
    FLD1                                ; 0043694f
    FXCH ST3                            ; 00436951
    FST float ptr [ESP + 0x18]          ; 00436953
    FXCH ST3                            ; 00436957
    FDIVRP ST4,ST0                      ; 00436959
    FXCH ST2                            ; 0043695b
    FMUL ST3                            ; 0043695d
    FXCH                                ; 0043695f
    FST float ptr [ESP + 0x1c]          ; 00436961
    FMUL ST3                            ; 00436965
    FXCH ST2                            ; 00436967
    FST float ptr [ESP + 0x20]          ; 00436969
    FMULP ST3                           ; 0043696d
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0043696f
    FSTP float ptr [ESP + 0x9c]         ; 00436976
    FSTP float ptr [ESP + 0xa0]         ; 0043697d
    FSTP float ptr [ESP + 0xa4]         ; 00436984
    FLD float ptr [ESP + 0x9c]          ; 0043698b
    FMUL float ptr [EAX]                ; 00436992
    FLD float ptr [ESP + 0xa0]          ; 00436994
    FXCH                                ; 0043699b
    FSTP float ptr [ESP + 0x3c]         ; 0043699d
    FMUL float ptr [EAX]                ; 004369a1
    FLD float ptr [ESP + 0xa4]          ; 004369a3
    FXCH                                ; 004369aa
    FSTP float ptr [ESP + 0x40]         ; 004369ac
    FMUL float ptr [EAX]                ; 004369b0
    FSTP float ptr [ESP + 0x44]         ; 004369b2
    FLD float ptr [EBX]                 ; 004369b6
    FADD float ptr [ESP + 0x3c]         ; 004369b8
    FLD float ptr [EBX + 0x4]           ; 004369bc
    FXCH                                ; 004369bf
    FSTP float ptr [EBX]                ; 004369c1
    FADD float ptr [ESP + 0x40]         ; 004369c3
    FLD float ptr [EBX + 0x8]           ; 004369c7
    FXCH                                ; 004369ca
    FSTP float ptr [EBX + 0x4]          ; 004369cc
    FADD float ptr [ESP + 0x44]         ; 004369cf
    FSTP float ptr [EBX + 0x8]          ; 004369d3
    FLD float ptr [ESP + 0x3c]          ; 004369d6
    FMUL float ptr [EDX]                ; 004369da
    FLD float ptr [ESP + 0x40]          ; 004369dc
    FXCH                                ; 004369e0
    FSTP float ptr [ESP + 0x6c]         ; 004369e2
    FMUL float ptr [EDX]                ; 004369e6
    FLD float ptr [ESP + 0x44]          ; 004369e8
    FXCH                                ; 004369ec
    FSTP float ptr [ESP + 0x70]         ; 004369ee
    FMUL float ptr [EDX]                ; 004369f2
    FSTP float ptr [ESP + 0x74]         ; 004369f4
    FLD float ptr [ESI]                 ; 004369f8
    FADD float ptr [ESP + 0x6c]         ; 004369fa
    FLD float ptr [ESI + 0x4]           ; 004369fe
    FXCH                                ; 00436a01
    FSTP float ptr [ESI]                ; 00436a03
    FADD float ptr [ESP + 0x70]         ; 00436a05
    FLD float ptr [ESI + 0x8]           ; 00436a09
    FXCH                                ; 00436a0c
    FSTP float ptr [ESI + 0x4]          ; 00436a0e
    FADD float ptr [ESP + 0x74]         ; 00436a11
    FSTP float ptr [ESI + 0x8]          ; 00436a15
    INC ECX                             ; 00436a18
        ;   Label: LAB_00436a18
    MOV EAX,dword ptr [EBX + 0x30]      ; 00436a19
    ADD EDI,0x4                         ; 00436a1c
    CMP ECX,EAX                         ; 00436a1f
    JL 0x00436750                       ; 00436a21
        ;   XREF to: 00436750 (CONDITIONAL_JUMP)  ; LAB_00436750
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436a27
        ;   Label: LAB_00436a27
    XOR EDX,EDX                         ; 00436a2a
    MOV ECX,dword ptr [EAX + 0x37b4c]   ; 00436a2c
    MOV dword ptr [ESP + 0x110],EDX     ; 00436a32
    TEST ECX,ECX                        ; 00436a39
    JLE 0x00436df2                      ; 00436a3b
        ;   XREF to: 00436df2 (CONDITIONAL_JUMP)  ; LAB_00436df2
    ADD EAX,0x3ab00                     ; 00436a41
    MOV dword ptr [ESP + 0x100],EAX     ; 00436a46
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436a4d
    ADD EAX,0x37b50                     ; 00436a50
    MOV dword ptr [ESP + 0xf8],EAX      ; 00436a55
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436a5c
    ADD EAX,0x37bf0                     ; 00436a5f
    LEA EDI,[EBX + 0x24]                ; 00436a64
    MOV dword ptr [ESP + 0x11c],EAX     ; 00436a67
    IMUL ESI,dword ptr [ESP + 0x110],0xac ; 00436a6e
        ;   Label: LAB_00436a6e
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00436a79
    FLD float ptr [EBX]                 ; 00436a80
    MOV EDX,dword ptr [ESP + 0xf8]      ; 00436a82
    FSUB float ptr [EAX]                ; 00436a89
    ADD ESI,EDX                         ; 00436a8b
    FSTP float ptr [ESP + 0xc0]         ; 00436a8d
    FLD float ptr [EBX + 0x4]           ; 00436a94
    FSUB float ptr [EAX + 0x4]          ; 00436a97
    LEA EDX,[ESP + 0x78]                ; 00436a9a
    FSTP float ptr [ESP + 0xc4]         ; 00436a9e
    FLD float ptr [EBX + 0x8]           ; 00436aa5
    FSUB float ptr [EAX + 0x8]          ; 00436aa8
    LEA EAX,[ESP + 0xc0]                ; 00436aab
    FSTP float ptr [ESP + 0xc8]         ; 00436ab2
    CMP EDX,EAX                         ; 00436ab9
    JNZ 0x00436e1b                      ; 00436abb
        ;   XREF to: 00436e1b (CONDITIONAL_JUMP)  ; LAB_00436e1b
    FLD float ptr [ESP + 0x7c]          ; 00436ac1
        ;   Label: LAB_00436ac1
    FMUL float ptr [ESI + 0x8c]         ; 00436ac5
    FLD float ptr [ESP + 0x78]          ; 00436acb
    FMUL float ptr [ESI + 0x80]         ; 00436acf
    FADDP                               ; 00436ad5
    FLD float ptr [ESP + 0x80]          ; 00436ad7
    FMUL float ptr [ESI + 0x98]         ; 00436ade
    FADDP                               ; 00436ae4
    FST float ptr [ESP + 0x8c]          ; 00436ae6
    FLDZ                                ; 00436aed
    FCOMPP                              ; 00436aef
    FNSTSW AX                           ; 00436af1
    SAHF                                ; 00436af3
    JA 0x00436dbe                       ; 00436af4
        ;   XREF to: 00436dbe (CONDITIONAL_JUMP)  ; LAB_00436dbe
    FLD float ptr [ESP + 0x8c]          ; 00436afa
    FCOMP float ptr [ESI + 0x44]        ; 00436b01
    FNSTSW AX                           ; 00436b04
    SAHF                                ; 00436b06
    JA 0x00436dbe                       ; 00436b07
        ;   XREF to: 00436dbe (CONDITIONAL_JUMP)  ; LAB_00436dbe
    FLD float ptr [ESP + 0x7c]          ; 00436b0d
    FMUL float ptr [ESI + 0x84]         ; 00436b11
    FLD float ptr [ESP + 0x78]          ; 00436b17
    FMUL float ptr [ESI + 0x78]         ; 00436b1b
    FADDP                               ; 00436b1e
    FLD float ptr [ESP + 0x80]          ; 00436b20
    FMUL float ptr [ESI + 0x90]         ; 00436b27
    FADDP                               ; 00436b2d
    FLD float ptr [ESP + 0x7c]          ; 00436b2f
    FXCH                                ; 00436b33
    FSTP float ptr [ESP + 0x84]         ; 00436b35
    FMUL float ptr [ESI + 0x88]         ; 00436b3c
    FLD float ptr [ESP + 0x78]          ; 00436b42
    FMUL float ptr [ESI + 0x7c]         ; 00436b46
    FADDP                               ; 00436b49
    FLD float ptr [ESP + 0x80]          ; 00436b4b
    FMUL float ptr [ESI + 0x94]         ; 00436b52
    FADDP                               ; 00436b58
    FLD float ptr [ESP + 0x84]          ; 00436b5a
    FXCH                                ; 00436b61
    FSTP float ptr [ESP + 0x88]         ; 00436b63
    FMUL float ptr [ESI + 0x38]         ; 00436b6a
    FMUL ST0                            ; 00436b6d
    FLD float ptr [ESP + 0x88]          ; 00436b6f
    FMUL float ptr [ESI + 0x3c]         ; 00436b76
    FMUL ST0                            ; 00436b79
    FADDP                               ; 00436b7b
    FSTP float ptr [ESP + 0xd8]         ; 00436b7d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00436b84
    MOV ECX,dword ptr [0x01c7070c]      ; 00436b8b | CVector3f_01c70708.y
    SAR EAX,0x1                         ; 00436b91
    ADD EAX,ECX                         ; 00436b93
    MOV dword ptr [ESP + 0xdc],EAX      ; 00436b95
    FLD float ptr [ESP + 0xdc]          ; 00436b9c
    FLD1                                ; 00436ba3
    FCOMPP                              ; 00436ba5
    FNSTSW AX                           ; 00436ba7
    SAHF                                ; 00436ba9
    JBE 0x00436dbe                      ; 00436baa
        ;   XREF to: 00436dbe (CONDITIONAL_JUMP)  ; LAB_00436dbe
    FLD float ptr [ESP + 0x88]          ; 00436bb0
    MOV EAX,dword ptr [ESP + 0x84]      ; 00436bb7
    FMUL float ptr [ESP + 0x88]         ; 00436bbe
    MOV dword ptr [ESP + 0xa8],EAX      ; 00436bc5
    FLD float ptr [ESP + 0x84]          ; 00436bcc
    MOV EAX,dword ptr [ESP + 0x88]      ; 00436bd3
    FMUL float ptr [ESP + 0x84]         ; 00436bda
    MOV dword ptr [ESP + 0xac],EAX      ; 00436be1
    XOR EAX,EAX                         ; 00436be8
    FADDP                               ; 00436bea
    MOV dword ptr [ESP + 0xb0],EAX      ; 00436bec
    FSTP float ptr [ESP + 0xe8]         ; 00436bf3
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00436bfa
    MOV EDX,dword ptr [0x01c70710]      ; 00436c01 | CVector3f_01c70708.z
    SAR EAX,0x1                         ; 00436c07
    SUB EDX,EAX                         ; 00436c09
    MOV dword ptr [ESP + 0xec],EDX      ; 00436c0b
    FLD float ptr [ESP + 0x84]          ; 00436c12
    FMUL float ptr [ESP + 0xec]         ; 00436c19
    FLD float ptr [ESP + 0x88]          ; 00436c20
    FMUL float ptr [ESP + 0xec]         ; 00436c27
    FLDZ                                ; 00436c2e
    FMUL float ptr [ESP + 0xec]         ; 00436c30
    FXCH ST2                            ; 00436c37
    FSTP float ptr [ESP + 0xa8]         ; 00436c39
    FSTP float ptr [ESP + 0xac]         ; 00436c40
    FSTP float ptr [ESP + 0xb0]         ; 00436c47
    FLD double ptr [0x0057ae1d]         ; 00436c4e | DOUBLE_0057ae1d
    FLD float ptr [ESI + 0x14]          ; 00436c54
    FMUL ST1                            ; 00436c57
    FLD float ptr [ESP + 0xa8]          ; 00436c59
    FXCH                                ; 00436c60
    FMUL ST1                            ; 00436c62
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00436c64
    FSTP ST1                            ; 00436c6b
    FSTP float ptr [ESP + 0xa8]         ; 00436c6d
    FMUL float ptr [ESI + 0x18]         ; 00436c74
    MOV dword ptr [ESP + 0xb0],EAX      ; 00436c77
    LEA EAX,[ESP + 0xa8]                ; 00436c7e
    FLD float ptr [ESP + 0xac]          ; 00436c85
    PUSH EAX                            ; 00436c8c
    LEA EAX,[ESP + 0x28]                ; 00436c8d
    FXCH                                ; 00436c91
    FMUL ST1                            ; 00436c93
    PUSH EAX                            ; 00436c95
    LEA EAX,[ESI + 0x78]                ; 00436c96
    FSTP ST1                            ; 00436c99
    PUSH EAX                            ; 00436c9b
    FSTP float ptr [ESP + 0xb8]         ; 00436c9c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00436ca3
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI + 0xa0]          ; 00436ca8
    FADD float ptr [EAX]                ; 00436cae
    ADD ESP,0xc                         ; 00436cb0
    FSTP float ptr [ESP + 0x90]         ; 00436cb3
    FLD float ptr [ESI + 0xa4]          ; 00436cba
    FADD float ptr [EAX + 0x4]          ; 00436cc0
    LEA EDX,[ESP + 0xa8]                ; 00436cc3
    FSTP float ptr [ESP + 0x94]         ; 00436cca
    FLD float ptr [ESI + 0xa8]          ; 00436cd1
    FADD float ptr [EAX + 0x8]          ; 00436cd7
    LEA EAX,[ESP + 0x90]                ; 00436cda
    FSTP float ptr [ESP + 0x98]         ; 00436ce1
    CMP EDX,EAX                         ; 00436ce8
    JZ 0x00436d16                       ; 00436cea
        ;   XREF to: 00436d16 (CONDITIONAL_JUMP)  ; LAB_00436d16
    MOV EAX,dword ptr [ESP + 0x90]      ; 00436cec
    MOV dword ptr [ESP + 0xa8],EAX      ; 00436cf3
    MOV EAX,dword ptr [ESP + 0x94]      ; 00436cfa
    MOV dword ptr [ESP + 0xac],EAX      ; 00436d01
    MOV EAX,dword ptr [ESP + 0x98]      ; 00436d08
    MOV dword ptr [ESP + 0xb0],EAX      ; 00436d0f
    FLD float ptr [ESP + 0xa8]          ; 00436d16
        ;   Label: LAB_00436d16
    FSUB float ptr [EBX]                ; 00436d1d
    FLD float ptr [ESP + 0xac]          ; 00436d1f
    FXCH                                ; 00436d26
    FSTP float ptr [ESP + 0x60]         ; 00436d28
    FSUB float ptr [EBX + 0x4]          ; 00436d2c
    FLD float ptr [ESP + 0xb0]          ; 00436d2f
    FXCH                                ; 00436d36
    FSTP float ptr [ESP + 0x64]         ; 00436d38
    FSUB float ptr [EBX + 0x8]          ; 00436d3c
    LEA EAX,[ESP + 0xa8]                ; 00436d3f
    FSTP float ptr [ESP + 0x68]         ; 00436d46
    CMP EBX,EAX                         ; 00436d4a
    JZ 0x00436d6b                       ; 00436d4c
        ;   XREF to: 00436d6b (CONDITIONAL_JUMP)  ; LAB_00436d6b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00436d4e
    MOV dword ptr [EBX],EAX             ; 00436d55
    MOV EAX,dword ptr [ESP + 0xac]      ; 00436d57
    MOV dword ptr [EBX + 0x4],EAX       ; 00436d5e
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00436d61
    MOV dword ptr [EBX + 0x8],EAX       ; 00436d68
    MOV EAX,dword ptr [ESP + 0x100]     ; 00436d6b
        ;   Label: LAB_00436d6b
    FLD float ptr [ESP + 0x60]          ; 00436d72
    FMUL float ptr [EAX]                ; 00436d76
    FLD float ptr [ESP + 0x64]          ; 00436d78
    FXCH                                ; 00436d7c
    FSTP float ptr [ESP + 0xc]          ; 00436d7e
    FMUL float ptr [EAX]                ; 00436d82
    FLD float ptr [ESP + 0x68]          ; 00436d84
    FXCH                                ; 00436d88
    FSTP float ptr [ESP + 0x10]         ; 00436d8a
    FMUL float ptr [EAX]                ; 00436d8e
    FSTP float ptr [ESP + 0x14]         ; 00436d90
    FLD float ptr [EDI]                 ; 00436d94
    FADD float ptr [ESP + 0xc]          ; 00436d96
    FLD float ptr [EDI + 0x4]           ; 00436d9a
    FXCH                                ; 00436d9d
    FSTP float ptr [EDI]                ; 00436d9f
    FADD float ptr [ESP + 0x10]         ; 00436da1
    FLD float ptr [EDI + 0x8]           ; 00436da5
    FXCH                                ; 00436da8
    FSTP float ptr [EDI + 0x4]          ; 00436daa
    FADD float ptr [ESP + 0x14]         ; 00436dad
    FSTP float ptr [EDI + 0x8]          ; 00436db1
    MOV dword ptr [EBX + 0xb8],0x1      ; 00436db4
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00436dbe
        ;   Label: LAB_00436dbe
    MOV EAX,dword ptr [ESP + 0x110]     ; 00436dc5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00436dcc
    ADD ESI,0xac                        ; 00436dcf
    INC EAX                             ; 00436dd5
    MOV ECX,dword ptr [EDX + 0x37b4c]   ; 00436dd6
    MOV dword ptr [ESP + 0x11c],ESI     ; 00436ddc
    MOV dword ptr [ESP + 0x110],EAX     ; 00436de3
    CMP EAX,ECX                         ; 00436dea
    JL 0x00436a6e                       ; 00436dec
        ;   XREF to: 00436a6e (CONDITIONAL_JUMP)  ; LAB_00436a6e
    MOV ESP,EBP                         ; 00436df2
        ;   Label: LAB_00436df2
    POP EBP                             ; 00436df4
    POP EDI                             ; 00436df5
    POP ESI                             ; 00436df6
    POP EBX                             ; 00436df7
    RET                                 ; 00436df8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00436df9
        ;   Label: LAB_00436df9
    MOV dword ptr [EBX + 0x28],0x0      ; 00436dfc
    MOV EDX,dword ptr [EAX + 0x3ab04]   ; 00436e03
    MOV dword ptr [EBX + 0x4],EDX       ; 00436e09
    MOV dword ptr [EBX + 0xbc],0x1      ; 00436e0c
    JMP 0x00436717                      ; 00436e16
        ;   XREF to: 00436717 (UNCONDITIONAL_JUMP)  ; LAB_00436717
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00436e1b
        ;   Label: LAB_00436e1b
    MOV dword ptr [ESP + 0x78],EAX      ; 00436e22
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00436e26
    MOV dword ptr [ESP + 0x7c],EAX      ; 00436e2d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00436e31
    MOV dword ptr [ESP + 0x80],EAX      ; 00436e38
    JMP 0x00436ac1                      ; 00436e3f
        ;   XREF to: 00436ac1 (UNCONDITIONAL_JUMP)  ; LAB_00436ac1

