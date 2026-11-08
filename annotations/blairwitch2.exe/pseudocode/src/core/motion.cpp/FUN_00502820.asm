; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00502820(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00540aa0 at 00540db6
;
; Referenced Globals:
;   undefined4 DAT_005df720
;   TerminatedCString s_core_motion_cpp_005df724
;   TerminatedCString s_Error_reading_motion_lis_005df737
;   TerminatedCString s_core_motion_cpp_005df752
;   TerminatedCString s_Can_t_read_motion_list_i_005df765
;   undefined4 DAT_005df7d8
;   undefined4 DAT_005df7dc
;   undefined4 DAT_005df7e0
;   TerminatedCString s_f_d_d_d_005df7e4
;   TerminatedCString s_d_d_f_005df7f9
;   TerminatedCString s_d_f_d_005df803
;   TerminatedCString s_d_f_005df80d
;   undefined4 DAT_005df814
;   TerminatedCString s_core_motion_cpp_005df818
;   TerminatedCString s_Out_of_memory_005df82b
;   ... and 7 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_005027b0
;   FUN_005b8100
;   FUN_005b8180
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502820
        ;   Label: FUN_00502820
    PUSH ESI                            ; 00502821
    PUSH EDI                            ; 00502822
    PUSH EBP                            ; 00502823
    SUB ESP,0x18                        ; 00502824
    MOV EDI,dword ptr [ESP + 0x30]      ; 00502827
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050282b
    PUSH EDX                            ; 0050282f
    CALL FUN_005027b0                   ; 00502830
        ;   XREF to: 005027b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005027b0()
    MOV ECX,0xffffffff                  ; 00502835
    ADD ESP,0x4                         ; 0050283a
    MOV EBX,EDI                         ; 0050283d
    MOV dword ptr [ESP + 0x4],ECX       ; 0050283f
    PUSH EBX                            ; 00502843
        ;   Label: LAB_00502843
    CALL FUN_005b8180                   ; 00502844
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502849
    TEST EAX,EAX                        ; 0050284c
    JL 0x00502855                       ; 0050284e
        ;   XREF to: 00502855 (CONDITIONAL_JUMP)  ; LAB_00502855
    CMP EAX,0xa                         ; 00502850
    JNZ 0x00502843                      ; 00502853
        ;   XREF to: 00502843 (CONDITIONAL_JUMP)  ; LAB_00502843
    LEA EAX,[ESP + 0x4]                 ; 00502855
        ;   Label: LAB_00502855
    PUSH EAX                            ; 00502859
    PUSH 0x5df720                       ; 0050285a | DAT_005df720
    PUSH EDI                            ; 0050285f
    CALL FUN_005b8100                   ; 00502860
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00502865
    CMP dword ptr [ESP + 0x4],0x0       ; 00502868
    JL 0x00502bb3                       ; 0050286d
        ;   XREF to: 00502bb3 (CONDITIONAL_JUMP)  ; LAB_00502bb3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00502873
        ;   Label: LAB_00502873
    CMP EAX,0x2                         ; 00502877
    JG 0x00502bdb                       ; 0050287a
        ;   XREF to: 00502bdb (CONDITIONAL_JUMP)  ; LAB_00502bdb
    MOV EBX,EDI                         ; 00502880
        ;   Label: LAB_00502880
    PUSH EBX                            ; 00502882
        ;   Label: LAB_00502882
    CALL FUN_005b8180                   ; 00502883
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502888
    TEST EAX,EAX                        ; 0050288b
    JL 0x00502894                       ; 0050288d
        ;   XREF to: 00502894 (CONDITIONAL_JUMP)  ; LAB_00502894
    CMP EAX,0xa                         ; 0050288f
    JNZ 0x00502882                      ; 00502892
        ;   XREF to: 00502882 (CONDITIONAL_JUMP)  ; LAB_00502882
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00502894
        ;   Label: LAB_00502894
    PUSH ESI                            ; 00502898
    PUSH 0x5df7d8                       ; 00502899 | DAT_005df7d8
    PUSH EDI                            ; 0050289e
    CALL FUN_005b8100                   ; 0050289f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005028a4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005028a7
    MOV EBP,dword ptr [EAX]             ; 005028ab
    XOR ESI,ESI                         ; 005028ad
    TEST EBP,EBP                        ; 005028af
    JLE 0x005028e0                      ; 005028b1
        ;   XREF to: 005028e0 (CONDITIONAL_JUMP)  ; LAB_005028e0
    LEA EBX,[EAX + 0x4]                 ; 005028b3
    PUSH EBX                            ; 005028b6
        ;   Label: LAB_005028b6
    PUSH 0x5df7dc                       ; 005028b7 | DAT_005df7dc
    PUSH EDI                            ; 005028bc
    CALL FUN_005b8100                   ; 005028bd
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005028c2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005028c5
    INC ESI                             ; 005028c9
    MOV EDX,dword ptr [EAX]             ; 005028ca
    ADD EBX,0x1e                        ; 005028cc
    CMP ESI,EDX                         ; 005028cf
    JL 0x005028b6                       ; 005028d1
        ;   XREF to: 005028b6 (CONDITIONAL_JUMP)  ; LAB_005028b6
    LEA EAX,[EAX]                       ; 005028d3
    LEA EDX,[EDX]                       ; 005028d9
    NOP                                 ; 005028df
    MOV EBX,EDI                         ; 005028e0
        ;   Label: LAB_005028e0
    PUSH EBX                            ; 005028e2
        ;   Label: LAB_005028e2
    CALL FUN_005b8180                   ; 005028e3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 005028e8
    TEST EAX,EAX                        ; 005028eb
    JL 0x005028f4                       ; 005028ed
        ;   XREF to: 005028f4 (CONDITIONAL_JUMP)  ; LAB_005028f4
    CMP EAX,0xa                         ; 005028ef
    JNZ 0x005028e2                      ; 005028f2
        ;   XREF to: 005028e2 (CONDITIONAL_JUMP)  ; LAB_005028e2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005028f4
        ;   Label: LAB_005028f4
    ADD EAX,0x1c24                      ; 005028f8
    PUSH EAX                            ; 005028fd
    PUSH 0x5df7e0                       ; 005028fe | DAT_005df7e0
    PUSH EDI                            ; 00502903
    CALL FUN_005b8100                   ; 00502904
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 00502909
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050290c
    XOR ECX,ECX                         ; 00502910
    MOV EBX,dword ptr [EAX + 0x1c24]    ; 00502912
    MOV dword ptr [ESP + 0xc],ECX       ; 00502918
    TEST EBX,EBX                        ; 0050291c
    JLE 0x00502bab                      ; 0050291e
        ;   XREF to: 00502bab (CONDITIONAL_JUMP)  ; LAB_00502bab
    ADD EAX,0x1c28                      ; 00502924
    MOV dword ptr [ESP + 0x8],EAX       ; 00502929
    MOV ESI,dword ptr [ESP + 0x8]       ; 0050292d
        ;   Label: LAB_0050292d
    MOV EBX,EDI                         ; 00502931
    PUSH EBX                            ; 00502933
        ;   Label: LAB_00502933
    CALL FUN_005b8180                   ; 00502934
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502939
    TEST EAX,EAX                        ; 0050293c
    JL 0x00502945                       ; 0050293e
        ;   XREF to: 00502945 (CONDITIONAL_JUMP)  ; LAB_00502945
    CMP EAX,0xa                         ; 00502940
    JNZ 0x00502933                      ; 00502943
        ;   XREF to: 00502933 (CONDITIONAL_JUMP)  ; LAB_00502933
    LEA EAX,[ESI + 0x64]                ; 00502945
        ;   Label: LAB_00502945
    PUSH EAX                            ; 00502948
    LEA EAX,[ESI + 0x60]                ; 00502949
    PUSH EAX                            ; 0050294c
    LEA EAX,[ESI + 0x24]                ; 0050294d
    PUSH EAX                            ; 00502950
    LEA EAX,[ESI + 0x20]                ; 00502951
    PUSH EAX                            ; 00502954
    PUSH ESI                            ; 00502955
    PUSH 0x5df7e4                       ; 00502956 | = "\"%[^\"]\",%f,%d,%d,%d\n"
    PUSH EDI                            ; 0050295b
    MOV EBX,EDI                         ; 0050295c
    CALL FUN_005b8100                   ; 0050295e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x1c                        ; 00502963
    PUSH EBX                            ; 00502966
        ;   Label: LAB_00502966
    CALL FUN_005b8180                   ; 00502967
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 0050296c
    TEST EAX,EAX                        ; 0050296f
    JL 0x00502978                       ; 00502971
        ;   XREF to: 00502978 (CONDITIONAL_JUMP)  ; LAB_00502978
    CMP EAX,0xa                         ; 00502973
    JNZ 0x00502966                      ; 00502976
        ;   XREF to: 00502966 (CONDITIONAL_JUMP)  ; LAB_00502966
    LEA EAX,[ESI + 0x38]                ; 00502978
        ;   Label: LAB_00502978
    PUSH EAX                            ; 0050297b
    LEA EAX,[ESI + 0x34]                ; 0050297c
    PUSH EAX                            ; 0050297f
    LEA EAX,[ESI + 0x28]                ; 00502980
    PUSH EAX                            ; 00502983
    PUSH 0x5df7f9                       ; 00502984 | = "%d,%d,%f\n"
    PUSH EDI                            ; 00502989
    MOV EBX,EDI                         ; 0050298a
    CALL FUN_005b8100                   ; 0050298c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 00502991
    PUSH EBX                            ; 00502994
        ;   Label: LAB_00502994
    CALL FUN_005b8180                   ; 00502995
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 0050299a
    TEST EAX,EAX                        ; 0050299d
    JL 0x005029a6                       ; 0050299f
        ;   XREF to: 005029a6 (CONDITIONAL_JUMP)  ; LAB_005029a6
    CMP EAX,0xa                         ; 005029a1
    JNZ 0x00502994                      ; 005029a4
        ;   XREF to: 00502994 (CONDITIONAL_JUMP)  ; LAB_00502994
    LEA EAX,[ESI + 0x40]                ; 005029a6
        ;   Label: LAB_005029a6
    PUSH EAX                            ; 005029a9
    LEA EAX,[ESI + 0x3c]                ; 005029aa
    PUSH EAX                            ; 005029ad
    LEA EAX,[ESP + 0x8]                 ; 005029ae
    PUSH EAX                            ; 005029b2
    PUSH 0x5df803                       ; 005029b3 | = "%d,%f,%d\n"
    PUSH EDI                            ; 005029b8
    CALL FUN_005b8100                   ; 005029b9
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005029be
    MOV EAX,dword ptr [ESP]             ; 005029c1
    MOV EBX,EDI                         ; 005029c4
    MOV dword ptr [ESI + 0x30],EAX      ; 005029c6
    PUSH EBX                            ; 005029c9
        ;   Label: LAB_005029c9
    CALL FUN_005b8180                   ; 005029ca
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 005029cf
    TEST EAX,EAX                        ; 005029d2
    JL 0x005029db                       ; 005029d4
        ;   XREF to: 005029db (CONDITIONAL_JUMP)  ; LAB_005029db
    CMP EAX,0xa                         ; 005029d6
    JNZ 0x005029c9                      ; 005029d9
        ;   XREF to: 005029c9 (CONDITIONAL_JUMP)  ; LAB_005029c9
    LEA EAX,[ESI + 0x54]                ; 005029db
        ;   Label: LAB_005029db
    PUSH EAX                            ; 005029de
    LEA EAX,[ESI + 0x50]                ; 005029df
    PUSH EAX                            ; 005029e2
    PUSH 0x5df80d                       ; 005029e3 | = "%d,%f\n"
    PUSH EDI                            ; 005029e8
    MOV EBX,EDI                         ; 005029e9
    CALL FUN_005b8100                   ; 005029eb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 005029f0
    PUSH EBX                            ; 005029f3
        ;   Label: LAB_005029f3
    CALL FUN_005b8180                   ; 005029f4
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 005029f9
    TEST EAX,EAX                        ; 005029fc
    JL 0x00502a05                       ; 005029fe
        ;   XREF to: 00502a05 (CONDITIONAL_JUMP)  ; LAB_00502a05
    CMP EAX,0xa                         ; 00502a00
    JNZ 0x005029f3                      ; 00502a03
        ;   XREF to: 005029f3 (CONDITIONAL_JUMP)  ; LAB_005029f3
    LEA EAX,[ESI + 0x68]                ; 00502a05
        ;   Label: LAB_00502a05
    PUSH EAX                            ; 00502a08
    PUSH 0x5df814                       ; 00502a09 | DAT_005df814
    PUSH EDI                            ; 00502a0e
    CALL FUN_005b8100                   ; 00502a0f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [ESI + 0x68]      ; 00502a14
    ADD ESP,0xc                         ; 00502a17
    TEST ECX,ECX                        ; 00502a1a
    JLE 0x00502aaa                      ; 00502a1c
        ;   XREF to: 00502aaa (CONDITIONAL_JUMP)  ; LAB_00502aaa
    IMUL EAX,ECX,0x18                   ; 00502a22
    PUSH EAX                            ; 00502a25
    CALL FUN_005b8580                   ; 00502a26
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 00502a2b
    MOV dword ptr [ESI + 0x6c],EAX      ; 00502a2e
    TEST EAX,EAX                        ; 00502a31
    JNZ 0x00502a57                      ; 00502a33
        ;   XREF to: 00502a57 (CONDITIONAL_JUMP)  ; LAB_00502a57
    MOV EAX,0x5df818                    ; 00502a35 | = "..\\core\\motion.cpp"
    MOV EDX,0xb1                        ; 00502a3a
    PUSH 0x5df82b                       ; 00502a3f | = "Out of memory"
    MOV [0x01d046a0],EAX                ; 00502a44 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00502a49 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00502a4f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00502a54
    MOV ECX,dword ptr [ESI + 0x68]      ; 00502a57
        ;   Label: LAB_00502a57
    XOR EBP,EBP                         ; 00502a5a
    TEST ECX,ECX                        ; 00502a5c
    JLE 0x00502aaa                      ; 00502a5e
        ;   XREF to: 00502aaa (CONDITIONAL_JUMP)  ; LAB_00502aaa
    MOV dword ptr [ESP + 0x14],EBP      ; 00502a60
    MOV EAX,dword ptr [ESP + 0x14]      ; 00502a64
        ;   Label: LAB_00502a64
    MOV EBX,dword ptr [ESI + 0x6c]      ; 00502a68
    ADD EBX,EAX                         ; 00502a6b
    LEA EAX,[EBX + 0x14]                ; 00502a6d
    PUSH EAX                            ; 00502a70
    LEA EAX,[EBX + 0x10]                ; 00502a71
    PUSH EAX                            ; 00502a74
    LEA EAX,[EBX + 0xc]                 ; 00502a75
    PUSH EAX                            ; 00502a78
    LEA EAX,[EBX + 0x8]                 ; 00502a79
    PUSH EAX                            ; 00502a7c
    LEA EAX,[ESP + 0x10]                ; 00502a7d
    PUSH EAX                            ; 00502a81
    PUSH EBX                            ; 00502a82
    PUSH 0x5df839                       ; 00502a83 | = "%d,%d,%d,%f,%f,%d\n"
    PUSH EDI                            ; 00502a88
    CALL FUN_005b8100                   ; 00502a89
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x20                        ; 00502a8e
    INC EBP                             ; 00502a91
    MOV EAX,dword ptr [ESP]             ; 00502a92
    MOV EDX,dword ptr [ESP + 0x14]      ; 00502a95
    MOV dword ptr [EBX + 0x4],EAX       ; 00502a99
    ADD EDX,0x18                        ; 00502a9c
    MOV ECX,dword ptr [ESI + 0x68]      ; 00502a9f
    MOV dword ptr [ESP + 0x14],EDX      ; 00502aa2
    CMP EBP,ECX                         ; 00502aa6
    JL 0x00502a64                       ; 00502aa8
        ;   XREF to: 00502a64 (CONDITIONAL_JUMP)  ; LAB_00502a64
    MOV EBX,EDI                         ; 00502aaa
        ;   Label: LAB_00502aaa
    PUSH EBX                            ; 00502aac
        ;   Label: LAB_00502aac
    CALL FUN_005b8180                   ; 00502aad
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502ab2
    TEST EAX,EAX                        ; 00502ab5
    JL 0x00502abe                       ; 00502ab7
        ;   XREF to: 00502abe (CONDITIONAL_JUMP)  ; LAB_00502abe
    CMP EAX,0xa                         ; 00502ab9
    JNZ 0x00502aac                      ; 00502abc
        ;   XREF to: 00502aac (CONDITIONAL_JUMP)  ; LAB_00502aac
    LEA EAX,[ESI + 0x70]                ; 00502abe
        ;   Label: LAB_00502abe
    PUSH EAX                            ; 00502ac1
    PUSH 0x5df84c                       ; 00502ac2 | DAT_005df84c
    PUSH EDI                            ; 00502ac7
    XOR EBX,EBX                         ; 00502ac8
    CALL FUN_005b8100                   ; 00502aca
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EBP,dword ptr [ESI + 0x70]      ; 00502acf
    ADD ESP,0xc                         ; 00502ad2
    TEST EBP,EBP                        ; 00502ad5
    JLE 0x00502b0b                      ; 00502ad7
        ;   XREF to: 00502b0b (CONDITIONAL_JUMP)  ; LAB_00502b0b
    LEA EAX,[ESI + 0x74]                ; 00502ad9
    LEA EBP,[ESI + 0x78]                ; 00502adc
    MOV dword ptr [ESP + 0x10],EAX      ; 00502adf
    MOV EDX,dword ptr [ESP + 0x10]      ; 00502ae3
        ;   Label: LAB_00502ae3
    LEA EAX,[EBX*0x8 + 0x0]             ; 00502ae7
    PUSH EBP                            ; 00502aee
    ADD EAX,EDX                         ; 00502aef
    PUSH EAX                            ; 00502af1
    PUSH 0x5df850                       ; 00502af2 | = "%d,%d\n"
    PUSH EDI                            ; 00502af7
    ADD EBP,0x8                         ; 00502af8
    INC EBX                             ; 00502afb
    CALL FUN_005b8100                   ; 00502afc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV ECX,dword ptr [ESI + 0x70]      ; 00502b01
    ADD ESP,0x10                        ; 00502b04
    CMP EBX,ECX                         ; 00502b07
    JL 0x00502ae3                       ; 00502b09
        ;   XREF to: 00502ae3 (CONDITIONAL_JUMP)  ; LAB_00502ae3
    CMP dword ptr [ESP + 0x4],0x2       ; 00502b0b
        ;   Label: LAB_00502b0b
    JL 0x00502c06                       ; 00502b10
        ;   XREF to: 00502c06 (CONDITIONAL_JUMP)  ; LAB_00502c06
    MOV EBP,EDI                         ; 00502b16
    PUSH EBP                            ; 00502b18
        ;   Label: LAB_00502b18
    CALL FUN_005b8180                   ; 00502b19
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502b1e
    TEST EAX,EAX                        ; 00502b21
    JL 0x00502b2a                       ; 00502b23
        ;   XREF to: 00502b2a (CONDITIONAL_JUMP)  ; LAB_00502b2a
    CMP EAX,0xa                         ; 00502b25
    JNZ 0x00502b18                      ; 00502b28
        ;   XREF to: 00502b18 (CONDITIONAL_JUMP)  ; LAB_00502b18
    LEA EAX,[ESI + 0xec]                ; 00502b2a
        ;   Label: LAB_00502b2a
    PUSH EAX                            ; 00502b30
    PUSH 0x5df857                       ; 00502b31 | DAT_005df857
    PUSH EDI                            ; 00502b36
    XOR EBX,EBX                         ; 00502b37
    CALL FUN_005b8100                   ; 00502b39
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EBP,dword ptr [ESI + 0xec]      ; 00502b3e
    ADD ESP,0xc                         ; 00502b44
    TEST EBP,EBP                        ; 00502b47
    JLE 0x00502b6e                      ; 00502b49
        ;   XREF to: 00502b6e (CONDITIONAL_JUMP)  ; LAB_00502b6e
    LEA EBP,[ESI + 0xf0]                ; 00502b4b
    PUSH EBP                            ; 00502b51
        ;   Label: LAB_00502b51
    PUSH 0x5df85a                       ; 00502b52 | DAT_005df85a
    PUSH EDI                            ; 00502b57
    INC EBX                             ; 00502b58
    ADD EBP,0x4                         ; 00502b59
    CALL FUN_005b8100                   ; 00502b5c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [ESI + 0xec]      ; 00502b61
    ADD ESP,0xc                         ; 00502b67
    CMP EBX,EAX                         ; 00502b6a
    JL 0x00502b51                       ; 00502b6c
        ;   XREF to: 00502b51 (CONDITIONAL_JUMP)  ; LAB_00502b51
    MOV EBP,EDI                         ; 00502b6e
        ;   Label: LAB_00502b6e
    PUSH EBP                            ; 00502b70
        ;   Label: LAB_00502b70
    CALL FUN_005b8180                   ; 00502b71
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 00502b76
    TEST EAX,EAX                        ; 00502b79
    JL 0x00502b82                       ; 00502b7b
        ;   XREF to: 00502b82 (CONDITIONAL_JUMP)  ; LAB_00502b82
    CMP EAX,0xa                         ; 00502b7d
    JNZ 0x00502b70                      ; 00502b80
        ;   XREF to: 00502b70 (CONDITIONAL_JUMP)  ; LAB_00502b70
    MOV ESI,dword ptr [ESP + 0x8]       ; 00502b82
        ;   Label: LAB_00502b82
    MOV EBP,dword ptr [ESP + 0xc]       ; 00502b86
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00502b8a
    ADD ESI,0x118                       ; 00502b8e
    INC EBP                             ; 00502b94
    MOV EDX,dword ptr [EBX + 0x1c24]    ; 00502b95
    MOV dword ptr [ESP + 0x8],ESI       ; 00502b9b
    MOV dword ptr [ESP + 0xc],EBP       ; 00502b9f
    CMP EBP,EDX                         ; 00502ba3
    JL 0x0050292d                       ; 00502ba5
        ;   XREF to: 0050292d (CONDITIONAL_JUMP)  ; LAB_0050292d
    ADD ESP,0x18                        ; 00502bab
        ;   Label: LAB_00502bab
    POP EBP                             ; 00502bae
    POP EDI                             ; 00502baf
    POP ESI                             ; 00502bb0
    POP EBX                             ; 00502bb1
    RET                                 ; 00502bb2
    MOV ESI,0x5df724                    ; 00502bb3 | = "..\\core\\motion.cpp"
        ;   Label: LAB_00502bb3
    MOV EBP,0x80                        ; 00502bb8
    PUSH 0x5df737                       ; 00502bbd | = "Error reading motion list."
    MOV dword ptr [0x01d046a0],ESI      ; 00502bc2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00502bc8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00502bce
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00502bd3
    JMP 0x00502873                      ; 00502bd6
        ;   XREF to: 00502873 (UNCONDITIONAL_JUMP)  ; LAB_00502873
    PUSH 0x2                            ; 00502bdb
        ;   Label: LAB_00502bdb
    PUSH EAX                            ; 00502bdd
    MOV EDX,0x5df752                    ; 00502bde | = "..\\core\\motion.cpp"
    MOV ECX,0x82                        ; 00502be3
    PUSH 0x5df765                       ; 00502be8 | = "Can't read motion list - it's version..."
    MOV dword ptr [0x01d046a0],EDX      ; 00502bed | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00502bf3 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00502bf9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00502bfe
    JMP 0x00502880                      ; 00502c01
        ;   XREF to: 00502880 (UNCONDITIONAL_JUMP)  ; LAB_00502880
    MOV dword ptr [ESI + 0xec],0x0      ; 00502c06
        ;   Label: LAB_00502c06
    JMP 0x00502b82                      ; 00502c10
        ;   XREF to: 00502b82 (UNCONDITIONAL_JUMP)  ; LAB_00502b82

