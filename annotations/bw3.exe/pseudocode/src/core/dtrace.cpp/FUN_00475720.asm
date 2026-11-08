; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00475720(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
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
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;   FUN_00476070 at 004766e7
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bca29
;   TerminatedCString s_Too_many_drawn_cubes_Nee_005bca3c
;   undefined4 DAT_005bca69
;   undefined4 DAT_005bca71
;   undefined4 DAT_005dee30
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;   undefined4 DAT_0060b024
;   undefined4 DAT_0060b054
;   undefined4 DAT_0060b084
;   undefined4 DAT_0060b0b4
;   undefined4 DAT_0060b0e4
;   undefined4 DAT_0060b114
;   undefined4 DAT_0060b144
;   undefined4 DAT_0060b174
;   ... and 12 more
;
; Called Functions:
;   FUN_004540c0
;   FUN_0046b580
;   FUN_0046ce90
;   FUN_00473b60
;   FUN_004e4330
;   FUN_005632a3
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475720
        ;   Label: FUN_00475720
    PUSH ESI                            ; 00475721
    PUSH EDI                            ; 00475722
    PUSH EBP                            ; 00475723
    SUB ESP,0xc4                        ; 00475724
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0047572a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00475731
    MOV EBP,dword ptr [ESP + 0xe4]      ; 00475738
    MOV EDX,dword ptr [0x01c0b7a4]      ; 0047573f | DAT_01c0b7a4
    INC EDX                             ; 00475745
    MOV ECX,dword ptr [ESI + 0x54]      ; 00475746
    MOV dword ptr [0x01c0b7a4],EDX      ; 00475749 | DAT_01c0b7a4
    CMP EDI,ECX                         ; 0047574f
    JL 0x0047577a                       ; 00475751
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475753
    CMP EAX,dword ptr [ESI + 0x58]      ; 0047575a
    JL 0x0047577a                       ; 0047575d
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    CMP EBP,dword ptr [ESI + 0x5c]      ; 0047575f
    JL 0x0047577a                       ; 00475762
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    CMP EDI,dword ptr [ESI + 0x60]      ; 00475764
    JG 0x0047577a                       ; 00475767
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475769
    CMP EAX,dword ptr [ESI + 0x64]      ; 00475770
    JG 0x0047577a                       ; 00475773
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    CMP EBP,dword ptr [ESI + 0x68]      ; 00475775
    JLE 0x00475785                      ; 00475778
        ;   XREF to: 00475785 (CONDITIONAL_JUMP)  ; LAB_00475785
    ADD ESP,0xc4                        ; 0047577a
        ;   Label: LAB_0047577a
    POP EBP                             ; 00475780
    POP EDI                             ; 00475781
    POP ESI                             ; 00475782
    POP EBX                             ; 00475783
    RET                                 ; 00475784
    PUSH EBP                            ; 00475785
        ;   Label: LAB_00475785
    PUSH EAX                            ; 00475786
    PUSH EDI                            ; 00475787
    PUSH ESI                            ; 00475788
    CALL FUN_00473b60                   ; 00475789
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 0047578e
    MOV dword ptr [ESP + 0xa0],EAX      ; 00475791
    TEST EAX,EAX                        ; 00475798
    JZ 0x0047577a                       ; 0047579a
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    CMP dword ptr [EAX],0x0             ; 0047579c
    JZ 0x0047577a                       ; 0047579f
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    MOV dword ptr [ESP + 0xbc],EDI      ; 004757a1
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004757a8
    FILD dword ptr [ESP + 0xbc]         ; 004757af
    FST float ptr [ESP + 0xac]          ; 004757b6
    FMUL float ptr [ESI + 0x28]         ; 004757bd
    MOV dword ptr [ESP + 0xbc],EAX      ; 004757c0
    MOV dword ptr [ESP + 0xc0],EBP      ; 004757c7
    FILD dword ptr [ESP + 0xbc]         ; 004757ce
    FSTP float ptr [ESP + 0xb4]         ; 004757d5
    FADD float ptr [ESI + 0x10]         ; 004757dc
    FLD float ptr [ESP + 0xb4]          ; 004757df
    FXCH                                ; 004757e6
    FSTP float ptr [ESP + 0x28]         ; 004757e8
    FMUL float ptr [ESI + 0x2c]         ; 004757ec
    FILD dword ptr [ESP + 0xc0]         ; 004757ef
    FSTP float ptr [ESP + 0xa4]         ; 004757f6
    FADD float ptr [ESI + 0x14]         ; 004757fd
    FLD float ptr [ESP + 0xa4]          ; 00475800
    FXCH                                ; 00475807
    FSTP float ptr [ESP + 0x2c]         ; 00475809
    FMUL float ptr [ESI + 0x30]         ; 0047580d
    LEA EBX,[ESP + 0x70]                ; 00475810
    MOV ECX,dword ptr [0x01c0b7a8]      ; 00475814 | DAT_01c0b7a8
    MOV EDX,dword ptr [0x005f2af8]      ; 0047581a | DAT_005f2af8
    INC ECX                             ; 00475820
    LEA EAX,[ESP + 0x28]                ; 00475821
    FADD float ptr [ESI + 0x18]         ; 00475825
    MOV dword ptr [0x01c0b7a8],ECX      ; 00475828 | DAT_01c0b7a8
    FSTP float ptr [ESP + 0x30]         ; 0047582e
    FLD float ptr [EAX]                 ; 00475832
    FMUL float ptr [0x005dee30]         ; 00475834 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 0047583a
    FLD float ptr [EAX + 0x4]           ; 0047583c
    FMUL float ptr [0x005dee30]         ; 0047583f | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475845
    FLD float ptr [EAX + 0x8]           ; 00475848
    FMUL float ptr [0x005dee30]         ; 0047584b | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475851
    LEA EAX,[ESP + 0x70]                ; 00475854
    PUSH EAX                            ; 00475858
    MOV EAX,dword ptr [EDX]             ; 00475859 | DAT_01bdd7e4
    PUSH EAX                            ; 0047585b
    CALL FUN_005632a3                   ; 0047585c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475861
    LEA EAX,[EDI + 0x1]                 ; 00475864
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475867
    FILD dword ptr [ESP + 0xc0]         ; 0047586e
    FST float ptr [ESP + 0xa8]          ; 00475875
    FMUL float ptr [ESI + 0x28]         ; 0047587c
    FADD float ptr [ESI + 0x10]         ; 0047587f
    FLD float ptr [ESP + 0xb4]          ; 00475882
    FXCH                                ; 00475889
    FSTP float ptr [ESP + 0x28]         ; 0047588b
    FMUL float ptr [ESI + 0x2c]         ; 0047588f
    FADD float ptr [ESI + 0x14]         ; 00475892
    FLD float ptr [ESP + 0xa4]          ; 00475895
    FXCH                                ; 0047589c
    FSTP float ptr [ESP + 0x2c]         ; 0047589e
    FMUL float ptr [ESI + 0x30]         ; 004758a2
    LEA EBX,[ESP + 0x58]                ; 004758a5
    MOV EDX,dword ptr [0x005f2af8]      ; 004758a9 | DAT_005f2af8
    FADD float ptr [ESI + 0x18]         ; 004758af
    LEA EAX,[ESP + 0x28]                ; 004758b2
    FSTP float ptr [ESP + 0x30]         ; 004758b6
    FLD float ptr [EAX]                 ; 004758ba
    FMUL float ptr [0x005dee30]         ; 004758bc | DAT_005dee30
    FISTP dword ptr [EBX]               ; 004758c2
    FLD float ptr [EAX + 0x4]           ; 004758c4
    FMUL float ptr [0x005dee30]         ; 004758c7 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 004758cd
    FLD float ptr [EAX + 0x8]           ; 004758d0
    FMUL float ptr [0x005dee30]         ; 004758d3 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 004758d9
    LEA EAX,[ESP + 0x58]                ; 004758dc
    PUSH EAX                            ; 004758e0
    MOV EAX,dword ptr [EDX]             ; 004758e1 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004758e3
    PUSH EAX                            ; 004758e6
    CALL FUN_005632a3                   ; 004758e7
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 004758ec
    FLD float ptr [ESP + 0xa8]          ; 004758ef
    FMUL float ptr [ESI + 0x28]         ; 004758f6
    LEA EAX,[EBP + 0x1]                 ; 004758f9
    FLD float ptr [ESP + 0xb4]          ; 004758fc
    FXCH                                ; 00475903
    FADD float ptr [ESI + 0x10]         ; 00475905
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475908
    FSTP float ptr [ESP + 0x28]         ; 0047590f
    FMUL float ptr [ESI + 0x2c]         ; 00475913
    FILD dword ptr [ESP + 0xc0]         ; 00475916
    FSTP float ptr [ESP + 0xb0]         ; 0047591d
    FADD float ptr [ESI + 0x14]         ; 00475924
    FLD float ptr [ESP + 0xb0]          ; 00475927
    FXCH                                ; 0047592e
    FSTP float ptr [ESP + 0x2c]         ; 00475930
    FMUL float ptr [ESI + 0x30]         ; 00475934
    FADD float ptr [ESI + 0x18]         ; 00475937
    FSTP float ptr [ESP + 0x30]         ; 0047593a
    LEA EBX,[ESP + 0x94]                ; 0047593e
    LEA EAX,[ESP + 0x28]                ; 00475945
    MOV EDX,dword ptr [0x005f2af8]      ; 00475949 | DAT_005f2af8
    FLD float ptr [EAX]                 ; 0047594f
    FMUL float ptr [0x005dee30]         ; 00475951 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475957
    FLD float ptr [EAX + 0x4]           ; 00475959
    FMUL float ptr [0x005dee30]         ; 0047595c | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475962
    FLD float ptr [EAX + 0x8]           ; 00475965
    FMUL float ptr [0x005dee30]         ; 00475968 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 0047596e
    LEA EAX,[ESP + 0x94]                ; 00475971
    PUSH EAX                            ; 00475978
    MOV EAX,dword ptr [EDX]             ; 00475979 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0047597b
    PUSH EAX                            ; 0047597e
    CALL FUN_005632a3                   ; 0047597f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475984
    FLD float ptr [ESP + 0xac]          ; 00475987
    FMUL float ptr [ESI + 0x28]         ; 0047598e
    FADD float ptr [ESI + 0x10]         ; 00475991
    FLD float ptr [ESP + 0xb4]          ; 00475994
    FXCH                                ; 0047599b
    FSTP float ptr [ESP + 0x28]         ; 0047599d
    FMUL float ptr [ESI + 0x2c]         ; 004759a1
    FADD float ptr [ESI + 0x14]         ; 004759a4
    FLD float ptr [ESP + 0xb0]          ; 004759a7
    FXCH                                ; 004759ae
    FSTP float ptr [ESP + 0x2c]         ; 004759b0
    FMUL float ptr [ESI + 0x30]         ; 004759b4
    LEA EBX,[ESP + 0x7c]                ; 004759b7
    LEA EAX,[ESP + 0x28]                ; 004759bb
    FADD float ptr [ESI + 0x18]         ; 004759bf
    MOV EDX,dword ptr [0x005f2af8]      ; 004759c2 | DAT_005f2af8
    FSTP float ptr [ESP + 0x30]         ; 004759c8
    FLD float ptr [EAX]                 ; 004759cc
    FMUL float ptr [0x005dee30]         ; 004759ce | DAT_005dee30
    FISTP dword ptr [EBX]               ; 004759d4
    FLD float ptr [EAX + 0x4]           ; 004759d6
    FMUL float ptr [0x005dee30]         ; 004759d9 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 004759df
    FLD float ptr [EAX + 0x8]           ; 004759e2
    FMUL float ptr [0x005dee30]         ; 004759e5 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 004759eb
    LEA EAX,[ESP + 0x7c]                ; 004759ee
    PUSH EAX                            ; 004759f2
    MOV EAX,dword ptr [EDX]             ; 004759f3 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004759f5
    PUSH EAX                            ; 004759fa
    CALL FUN_005632a3                   ; 004759fb
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475a00
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475a03
    FLD float ptr [ESP + 0xac]          ; 00475a0a
    INC EAX                             ; 00475a11
    FMUL float ptr [ESI + 0x28]         ; 00475a12
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475a15
    FADD float ptr [ESI + 0x10]         ; 00475a1c
    FILD dword ptr [ESP + 0xc0]         ; 00475a1f
    FXCH                                ; 00475a26
    FSTP float ptr [ESP + 0x28]         ; 00475a28
    FST float ptr [ESP + 0xb8]          ; 00475a2c
    FMUL float ptr [ESI + 0x2c]         ; 00475a33
    FADD float ptr [ESI + 0x14]         ; 00475a36
    FLD float ptr [ESP + 0xa4]          ; 00475a39
    FXCH                                ; 00475a40
    FSTP float ptr [ESP + 0x2c]         ; 00475a42
    FMUL float ptr [ESI + 0x30]         ; 00475a46
    LEA EBX,[ESP + 0x34]                ; 00475a49
    MOV EDX,dword ptr [0x005f2af8]      ; 00475a4d | DAT_005f2af8
    FADD float ptr [ESI + 0x18]         ; 00475a53
    LEA EAX,[ESP + 0x28]                ; 00475a56
    FSTP float ptr [ESP + 0x30]         ; 00475a5a
    FLD float ptr [EAX]                 ; 00475a5e
    FMUL float ptr [0x005dee30]         ; 00475a60 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475a66
    FLD float ptr [EAX + 0x4]           ; 00475a68
    FMUL float ptr [0x005dee30]         ; 00475a6b | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475a71
    FLD float ptr [EAX + 0x8]           ; 00475a74
    FMUL float ptr [0x005dee30]         ; 00475a77 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475a7d
    LEA EAX,[ESP + 0x34]                ; 00475a80
    PUSH EAX                            ; 00475a84
    MOV EAX,dword ptr [EDX]             ; 00475a85 | DAT_01bdd7e4
    ADD EAX,0xc0                        ; 00475a87
    PUSH EAX                            ; 00475a8c
    CALL FUN_005632a3                   ; 00475a8d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475a92
    FLD float ptr [ESP + 0xa8]          ; 00475a95
    FMUL float ptr [ESI + 0x28]         ; 00475a9c
    FADD float ptr [ESI + 0x10]         ; 00475a9f
    FLD float ptr [ESP + 0xb8]          ; 00475aa2
    FXCH                                ; 00475aa9
    FSTP float ptr [ESP + 0x28]         ; 00475aab
    FMUL float ptr [ESI + 0x2c]         ; 00475aaf
    FADD float ptr [ESI + 0x14]         ; 00475ab2
    FLD float ptr [ESP + 0xa4]          ; 00475ab5
    FXCH                                ; 00475abc
    FSTP float ptr [ESP + 0x2c]         ; 00475abe
    FMUL float ptr [ESI + 0x30]         ; 00475ac2
    LEA EBX,[ESP + 0x40]                ; 00475ac5
    LEA EAX,[ESP + 0x28]                ; 00475ac9
    FADD float ptr [ESI + 0x18]         ; 00475acd
    MOV EDX,dword ptr [0x005f2af8]      ; 00475ad0 | DAT_005f2af8
    FSTP float ptr [ESP + 0x30]         ; 00475ad6
    FLD float ptr [EAX]                 ; 00475ada
    FMUL float ptr [0x005dee30]         ; 00475adc | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475ae2
    FLD float ptr [EAX + 0x4]           ; 00475ae4
    FMUL float ptr [0x005dee30]         ; 00475ae7 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475aed
    FLD float ptr [EAX + 0x8]           ; 00475af0
    FMUL float ptr [0x005dee30]         ; 00475af3 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475af9
    LEA EAX,[ESP + 0x40]                ; 00475afc
    PUSH EAX                            ; 00475b00
    MOV EAX,dword ptr [EDX]             ; 00475b01 | DAT_01bdd7e4
    ADD EAX,0xf0                        ; 00475b03
    PUSH EAX                            ; 00475b08
    CALL FUN_005632a3                   ; 00475b09
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475b0e
    FLD float ptr [ESP + 0xa8]          ; 00475b11
    FMUL float ptr [ESI + 0x28]         ; 00475b18
    FADD float ptr [ESI + 0x10]         ; 00475b1b
    FLD float ptr [ESP + 0xb8]          ; 00475b1e
    FXCH                                ; 00475b25
    FSTP float ptr [ESP + 0x28]         ; 00475b27
    FMUL float ptr [ESI + 0x2c]         ; 00475b2b
    FADD float ptr [ESI + 0x14]         ; 00475b2e
    FLD float ptr [ESP + 0xb0]          ; 00475b31
    FXCH                                ; 00475b38
    FSTP float ptr [ESP + 0x2c]         ; 00475b3a
    FMUL float ptr [ESI + 0x30]         ; 00475b3e
    LEA EBX,[ESP + 0x64]                ; 00475b41
    LEA EAX,[ESP + 0x28]                ; 00475b45
    FADD float ptr [ESI + 0x18]         ; 00475b49
    MOV EDX,dword ptr [0x005f2af8]      ; 00475b4c | DAT_005f2af8
    FSTP float ptr [ESP + 0x30]         ; 00475b52
    FLD float ptr [EAX]                 ; 00475b56
    FMUL float ptr [0x005dee30]         ; 00475b58 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475b5e
    FLD float ptr [EAX + 0x4]           ; 00475b60
    FMUL float ptr [0x005dee30]         ; 00475b63 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475b69
    FLD float ptr [EAX + 0x8]           ; 00475b6c
    FMUL float ptr [0x005dee30]         ; 00475b6f | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475b75
    LEA EAX,[ESP + 0x64]                ; 00475b78
    PUSH EAX                            ; 00475b7c
    MOV EAX,dword ptr [EDX]             ; 00475b7d | DAT_01bdd7e4
    ADD EAX,0x120                       ; 00475b7f
    PUSH EAX                            ; 00475b84
    CALL FUN_005632a3                   ; 00475b85
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 00475b8a
    FLD float ptr [ESP + 0xac]          ; 00475b8d
    FMUL float ptr [ESI + 0x28]         ; 00475b94
    FADD float ptr [ESI + 0x10]         ; 00475b97
    FLD float ptr [ESP + 0xb8]          ; 00475b9a
    FXCH                                ; 00475ba1
    FSTP float ptr [ESP + 0x28]         ; 00475ba3
    FMUL float ptr [ESI + 0x2c]         ; 00475ba7
    FADD float ptr [ESI + 0x14]         ; 00475baa
    FLD float ptr [ESP + 0xb0]          ; 00475bad
    FXCH                                ; 00475bb4
    FSTP float ptr [ESP + 0x2c]         ; 00475bb6
    FMUL float ptr [ESI + 0x30]         ; 00475bba
    LEA EBX,[ESP + 0x4c]                ; 00475bbd
    LEA EAX,[ESP + 0x28]                ; 00475bc1
    FADD float ptr [ESI + 0x18]         ; 00475bc5
    MOV EDX,dword ptr [0x005f2af8]      ; 00475bc8 | DAT_005f2af8
    FSTP float ptr [ESP + 0x30]         ; 00475bce
    FLD float ptr [EAX]                 ; 00475bd2
    FMUL float ptr [0x005dee30]         ; 00475bd4 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475bda
    FLD float ptr [EAX + 0x4]           ; 00475bdc
    FMUL float ptr [0x005dee30]         ; 00475bdf | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475be5
    FLD float ptr [EAX + 0x8]           ; 00475be8
    FMUL float ptr [0x005dee30]         ; 00475beb | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475bf1
    LEA EAX,[ESP + 0x4c]                ; 00475bf4
    PUSH EAX                            ; 00475bf8
    MOV EAX,dword ptr [EDX]             ; 00475bf9 | DAT_01bdd7e4
    ADD EAX,0x150                       ; 00475bfb
    PUSH EAX                            ; 00475c00
    CALL FUN_005632a3                   ; 00475c01
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    MOV EAX,[0x0060b024]                ; 00475c06 | DAT_0060b024
    MOV EBX,dword ptr [0x0060b054]      ; 00475c0b | DAT_0060b054
    MOV EDX,dword ptr [0x0060b084]      ; 00475c11 | DAT_0060b084
    AND EAX,EBX                         ; 00475c17
    MOV ECX,dword ptr [0x0060b0b4]      ; 00475c19 | DAT_0060b0b4
    AND EAX,EDX                         ; 00475c1f
    MOV EBX,dword ptr [0x0060b0e4]      ; 00475c21 | DAT_0060b0e4
    AND EAX,ECX                         ; 00475c27
    MOV EDX,dword ptr [0x0060b114]      ; 00475c29 | DAT_0060b114
    AND EAX,EBX                         ; 00475c2f
    MOV ECX,dword ptr [0x0060b144]      ; 00475c31 | DAT_0060b144
    AND EAX,EDX                         ; 00475c37
    MOV EBX,dword ptr [0x0060b174]      ; 00475c39 | DAT_0060b174
    AND EAX,ECX                         ; 00475c3f
    AND EAX,EBX                         ; 00475c41
    ADD ESP,0x8                         ; 00475c43
    TEST EAX,0x80000000                 ; 00475c46
    JZ 0x00475c55                       ; 00475c4b
        ;   XREF to: 00475c55 (CONDITIONAL_JUMP)  ; LAB_00475c55
    TEST AL,0xff                        ; 00475c4d
    JNZ 0x0047577a                      ; 00475c4f
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    MOV EAX,[0x01c0b7ac]                ; 00475c55 | DAT_01c0b7ac
        ;   Label: LAB_00475c55
    INC EAX                             ; 00475c5a
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00475c5b
    MOV [0x01c0b7ac],EAX                ; 00475c62 | DAT_01c0b7ac
    CMP EDX,0x1                         ; 00475c67
    JG 0x00475daa                       ; 00475c6a
        ;   XREF to: 00475daa (CONDITIONAL_JUMP)  ; LAB_00475daa
    MOV dword ptr [ESP + 0xc0],EDI      ; 00475c70
        ;   Label: LAB_00475c70
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475c77
    FILD dword ptr [ESP + 0xc0]         ; 00475c7e
    FMUL float ptr [ESI + 0x28]         ; 00475c85
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475c88
    FADD float ptr [ESI + 0x10]         ; 00475c8f
    FILD dword ptr [ESP + 0xc0]         ; 00475c92
    FXCH                                ; 00475c99
    FSTP float ptr [ESP + 0x88]         ; 00475c9b
    FMUL float ptr [ESI + 0x2c]         ; 00475ca2
    MOV dword ptr [ESP + 0xc0],EBP      ; 00475ca5
    FADD float ptr [ESI + 0x14]         ; 00475cac
    FILD dword ptr [ESP + 0xc0]         ; 00475caf
    FXCH                                ; 00475cb6
    FSTP float ptr [ESP + 0x8c]         ; 00475cb8
    FMUL float ptr [ESI + 0x30]         ; 00475cbf
    MOV EBX,dword ptr [0x01c0b7b0]      ; 00475cc2 | DAT_01c0b7b0
    MOV EDI,dword ptr [0x005f2afc]      ; 00475cc8 | DAT_005f2afc
    INC EBX                             ; 00475cce
    LEA EAX,[ESP + 0x88]                ; 00475ccf
    MOV dword ptr [0x01c0b7b0],EBX      ; 00475cd6 | DAT_01c0b7b0
    PUSH EAX                            ; 00475cdc
    FADD float ptr [ESI + 0x18]         ; 00475cdd
    PUSH EDI                            ; 00475ce0 | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x98]         ; 00475ce1
    CALL FUN_0046ce90                   ; 00475ce8
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 00475ced
    MOV EBP,dword ptr [ESI]             ; 00475cf0
    PUSH EBP                            ; 00475cf2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00475cf3
    PUSH EAX                            ; 00475cfa
    CALL FUN_004540c0                   ; 00475cfb
        ;   XREF to: 004540c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004540c0()
    ADD ESP,0x8                         ; 00475d00
    PUSH 0x2cfd900                      ; 00475d03 | DAT_02cfd900
    MOV EDX,dword ptr [0x005f2afc]      ; 00475d08 | DAT_005f2afc
    PUSH EDX                            ; 00475d0e | DAT_01bdd7e4
    CALL FUN_0046ce90                   ; 00475d0f
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 00475d14
    MOV EAX,[0x01c0b7b4]                ; 00475d17 | DAT_01c0b7b4
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00475d1c
    MOV EBX,EAX                         ; 00475d23
    MOV dword ptr [EAX*0x4 + 0x1c0b7bc],EDX ; 00475d25
    SHL EAX,0x2                         ; 00475d2c
    SUB EAX,EBX                         ; 00475d2f
    MOV ESI,0x1c1f03c                   ; 00475d31
    SHL EAX,0x2                         ; 00475d36
    ADD ESI,EAX                         ; 00475d39
    LEA EAX,[ESP + 0x88]                ; 00475d3b
    CMP ESI,EAX                         ; 00475d42
    JZ 0x00475d63                       ; 00475d44
        ;   XREF to: 00475d63 (CONDITIONAL_JUMP)  ; LAB_00475d63
    MOV EAX,dword ptr [ESP + 0x88]      ; 00475d46
    MOV dword ptr [ESI],EAX             ; 00475d4d | DAT_01c1f03c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00475d4f
    MOV dword ptr [ESI + 0x4],EAX       ; 00475d56 | DAT_01c1f040
    MOV EAX,dword ptr [ESP + 0x90]      ; 00475d59
    MOV dword ptr [ESI + 0x8],EAX       ; 00475d60 | DAT_01c1f044
    MOV ECX,dword ptr [0x01c0b7b4]      ; 00475d63 | DAT_01c0b7b4
        ;   Label: LAB_00475d63
    INC ECX                             ; 00475d69
    MOV dword ptr [0x01c0b7b4],ECX      ; 00475d6a | DAT_01c0b7b4
    CMP ECX,0x4e20                      ; 00475d70
    JL 0x0047577a                       ; 00475d76
        ;   XREF to: 0047577a (CONDITIONAL_JUMP)  ; LAB_0047577a
    MOV ESI,0x5bca29                    ; 00475d7c | = "..\\core\\dtrace.cpp"
    MOV EDI,0x792                       ; 00475d81
    PUSH 0x5bca3c                       ; 00475d86 | = "Too many drawn cubes.  Need to recomp..."
    MOV dword ptr [0x01d71de0],ESI      ; 00475d8b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00475d91 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00475d97
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00475d9c
    ADD ESP,0xc4                        ; 00475d9f
    POP EBP                             ; 00475da5
    POP EDI                             ; 00475da6
    POP ESI                             ; 00475da7
    POP EBX                             ; 00475da8
    RET                                 ; 00475da9
    MOV ECX,0x4                         ; 00475daa
        ;   Label: LAB_00475daa
    MOV EDX,0xffffffff                  ; 00475daf
    MOV dword ptr [ESP + 0xc0],EBP      ; 00475db4
    XOR EBX,EBX                         ; 00475dbb
    MOV dword ptr [ESP + 0x4],ECX       ; 00475dbd
    MOV dword ptr [ESP + 0x8],EBX       ; 00475dc1
    MOV dword ptr [ESP + 0xc],EBX       ; 00475dc5
    MOV dword ptr [ESP + 0x10],EDX      ; 00475dc9
    FILD dword ptr [ESP + 0xc0]         ; 00475dcd
    FMUL float ptr [ESI + 0x30]         ; 00475dd4
    FADD float ptr [ESI + 0x18]         ; 00475dd7
    FMUL double ptr [0x005bca69]        ; 00475dda | DAT_005bca69
    MOV EAX,0x5                         ; 00475de0
    MOV dword ptr [ESP + 0x18],EBX      ; 00475de5
    MOV dword ptr [ESP + 0x20],EAX      ; 00475de9
    MOV dword ptr [ESP + 0x24],ECX      ; 00475ded
    MOV EBX,0x1                         ; 00475df1
    MOV EAX,ESP                         ; 00475df6
    MOV ECX,dword ptr [0x005f2af8]      ; 00475df8 | DAT_005f2af8
    PUSH EAX                            ; 00475dfe
    CALL FUN_005a3120                   ; 00475dff
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00475e04
    FISTP dword ptr [ESP + 0x1c]        ; 00475e05
    MOV dword ptr [ESP + 0x24],EBX      ; 00475e09
    CALL FUN_0046b580                   ; 00475e0d
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00475e12
    TEST EAX,EAX                        ; 00475e15
    JNZ 0x00475c70                      ; 00475e17
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    MOV dword ptr [ESP + 0x8],EAX       ; 00475e1d
    MOV dword ptr [ESP + 0xc],EAX       ; 00475e21
    LEA EAX,[EBX + EBP*0x1]             ; 00475e25
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475e28
    MOV dword ptr [ESP + 0x10],EBX      ; 00475e2f
    FILD dword ptr [ESP + 0xc0]         ; 00475e33
    FMUL float ptr [ESI + 0x30]         ; 00475e3a
    FADD float ptr [ESI + 0x18]         ; 00475e3d
    FMUL double ptr [0x005bca71]        ; 00475e40 | DAT_005bca71
    MOV ECX,0x2                         ; 00475e46
    MOV EDX,0x6                         ; 00475e4b
    MOV EBX,0x3                         ; 00475e50
    MOV EAX,0x7                         ; 00475e55
    MOV dword ptr [ESP + 0x18],ECX      ; 00475e5a
    MOV dword ptr [ESP + 0x1c],EBX      ; 00475e5e
    MOV dword ptr [ESP + 0x20],EAX      ; 00475e62
    MOV dword ptr [ESP + 0x24],EDX      ; 00475e66
    MOV EAX,ESP                         ; 00475e6a
    MOV ECX,dword ptr [0x005f2af8]      ; 00475e6c | DAT_005f2af8
    PUSH EAX                            ; 00475e72
    CALL FUN_005a3120                   ; 00475e73
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00475e78
    FISTP dword ptr [ESP + 0x1c]        ; 00475e79
    CALL FUN_0046b580                   ; 00475e7d
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00475e82
    TEST EAX,EAX                        ; 00475e85
    JNZ 0x00475c70                      ; 00475e87
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    MOV EBX,0xffffffff                  ; 00475e8d
    MOV dword ptr [ESP + 0xc],EAX       ; 00475e92
    MOV dword ptr [ESP + 0x10],EAX      ; 00475e96
    MOV dword ptr [ESP + 0xc0],EDI      ; 00475e9a
    MOV dword ptr [ESP + 0x8],EBX       ; 00475ea1
    FILD dword ptr [ESP + 0xc0]         ; 00475ea5
    FMUL float ptr [ESI + 0x28]         ; 00475eac
    FADD float ptr [ESI + 0x10]         ; 00475eaf
    FMUL double ptr [0x005bca69]        ; 00475eb2 | DAT_005bca69
    MOV EDX,0x3                         ; 00475eb8
    MOV ECX,dword ptr [0x005f2af8]      ; 00475ebd | DAT_005f2af8
    MOV EBX,0x4                         ; 00475ec3
    MOV dword ptr [ESP + 0x18],EAX      ; 00475ec8
    MOV EAX,0x7                         ; 00475ecc
    MOV dword ptr [ESP + 0x1c],EBX      ; 00475ed1
    MOV dword ptr [ESP + 0x20],EAX      ; 00475ed5
    MOV EAX,ESP                         ; 00475ed9
    MOV dword ptr [ESP + 0x24],EDX      ; 00475edb
    PUSH EAX                            ; 00475edf
    CALL FUN_005a3120                   ; 00475ee0
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00475ee5
    FISTP dword ptr [ESP + 0x1c]        ; 00475ee6
    CALL FUN_0046b580                   ; 00475eea
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00475eef
    TEST EAX,EAX                        ; 00475ef2
    JNZ 0x00475c70                      ; 00475ef4
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    MOV EBX,0x1                         ; 00475efa
    MOV dword ptr [ESP + 0xc],EAX       ; 00475eff
    MOV dword ptr [ESP + 0x10],EAX      ; 00475f03
    LEA EAX,[EDI + EBX*0x1]             ; 00475f07
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475f0a
    MOV dword ptr [ESP + 0x8],EBX       ; 00475f11
    FILD dword ptr [ESP + 0xc0]         ; 00475f15
    FMUL float ptr [ESI + 0x28]         ; 00475f1c
    FADD float ptr [ESI + 0x10]         ; 00475f1f
    FMUL double ptr [0x005bca71]        ; 00475f22 | DAT_005bca71
    MOV EDX,0x5                         ; 00475f28
    MOV ECX,dword ptr [0x005f2af8]      ; 00475f2d | DAT_005f2af8
    MOV EAX,0x6                         ; 00475f33
    MOV dword ptr [ESP + 0x18],EBX      ; 00475f38
    MOV dword ptr [ESP + 0x20],EAX      ; 00475f3c
    MOV dword ptr [ESP + 0x24],EDX      ; 00475f40
    MOV EAX,ESP                         ; 00475f44
    MOV EBX,0x2                         ; 00475f46
    PUSH EAX                            ; 00475f4b
    CALL FUN_005a3120                   ; 00475f4c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00475f51
    FISTP dword ptr [ESP + 0x1c]        ; 00475f52
    MOV dword ptr [ESP + 0x24],EBX      ; 00475f56
    CALL FUN_0046b580                   ; 00475f5a
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00475f5f
    TEST EAX,EAX                        ; 00475f62
    JNZ 0x00475c70                      ; 00475f64
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    MOV dword ptr [ESP + 0x8],EAX       ; 00475f6a
    MOV dword ptr [ESP + 0xc],0x1       ; 00475f6e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475f76
    INC EAX                             ; 00475f7d
    XOR EDX,EDX                         ; 00475f7e
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475f80
    MOV dword ptr [ESP + 0x10],EDX      ; 00475f87
    FILD dword ptr [ESP + 0xc0]         ; 00475f8b
    FMUL float ptr [ESI + 0x2c]         ; 00475f92
    FADD float ptr [ESI + 0x14]         ; 00475f95
    FMUL double ptr [0x005bca71]        ; 00475f98 | DAT_005bca71
    MOV ECX,0x4                         ; 00475f9e
    MOV EBX,0x5                         ; 00475fa3
    MOV EDX,0x7                         ; 00475fa8
    MOV EAX,0x6                         ; 00475fad
    MOV dword ptr [ESP + 0x18],ECX      ; 00475fb2
    MOV dword ptr [ESP + 0x1c],EBX      ; 00475fb6
    MOV dword ptr [ESP + 0x20],EAX      ; 00475fba
    MOV dword ptr [ESP + 0x24],EDX      ; 00475fbe
    MOV EAX,ESP                         ; 00475fc2
    MOV ECX,dword ptr [0x005f2af8]      ; 00475fc4 | DAT_005f2af8
    PUSH EAX                            ; 00475fca
    CALL FUN_005a3120                   ; 00475fcb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00475fd0
    FISTP dword ptr [ESP + 0x1c]        ; 00475fd1
    CALL FUN_0046b580                   ; 00475fd5
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00475fda
    TEST EAX,EAX                        ; 00475fdd
    JNZ 0x00475c70                      ; 00475fdf
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    MOV dword ptr [ESP + 0x8],EAX       ; 00475fe5
    MOV dword ptr [ESP + 0xc],0xffffffff ; 00475fe9
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475ff1
    XOR EDX,EDX                         ; 00475ff8
    MOV dword ptr [ESP + 0xc0],EAX      ; 00475ffa
    MOV dword ptr [ESP + 0x10],EDX      ; 00476001
    FILD dword ptr [ESP + 0xc0]         ; 00476005
    FMUL float ptr [ESI + 0x2c]         ; 0047600c
    FADD float ptr [ESI + 0x14]         ; 0047600f
    FMUL double ptr [0x005bca69]        ; 00476012 | DAT_005bca69
    MOV ECX,dword ptr [0x005f2af8]      ; 00476018 | DAT_005f2af8
    XOR EBX,EBX                         ; 0047601e
    MOV EDX,0x3                         ; 00476020
    MOV EAX,0x2                         ; 00476025
    MOV dword ptr [ESP + 0x18],EBX      ; 0047602a
    MOV dword ptr [ESP + 0x20],EAX      ; 0047602e
    MOV dword ptr [ESP + 0x24],EDX      ; 00476032
    MOV EAX,ESP                         ; 00476036
    MOV EBX,0x1                         ; 00476038
    PUSH EAX                            ; 0047603d
    CALL FUN_005a3120                   ; 0047603e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH ECX                            ; 00476043
    FISTP dword ptr [ESP + 0x1c]        ; 00476044
    MOV dword ptr [ESP + 0x24],EBX      ; 00476048
    CALL FUN_0046b580                   ; 0047604c
        ;   XREF to: 0046b580 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b580()
    ADD ESP,0x8                         ; 00476051
    TEST EAX,EAX                        ; 00476054
    JNZ 0x00475c70                      ; 00476056
        ;   XREF to: 00475c70 (CONDITIONAL_JUMP)  ; LAB_00475c70
    ADD ESP,0xc4                        ; 0047605c
    POP EBP                             ; 00476062
    POP EDI                             ; 00476063
    POP ESI                             ; 00476064
    POP EBX                             ; 00476065
    RET                                 ; 00476066

