; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690(float *input_samples,float *output_samples,int mpeg_block_type)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; float *          Stack[0x8]:4   output_samples
; int              Stack[0xc]:4   mpeg_block_type
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0 at 00533bdf
;
; Referenced Globals:
;   double DOUBLE_0063b0a2 = 0.0872664630000000
;   double DOUBLE_0063b0aa = 0.261799388000000
;   double DOUBLE_0063b0b2 = 0.130899693899575
;   double DOUBLE_0063b0ba = 0.0436332312998582
;   double DOUBLE_0063b0c2 = 0.5
;   double DOUBLE_0063b0ca = -18
;   double DOUBLE_0063b0d2 = -6
;   double DOUBLE_0063b0da = 0.0000100000000000000
;   int g_Mp3SynthesisTablesInitialized = 0x1
;   double[4][36] g_Mp3WindowTables
;   undefined4 DAT_02f46690
;   undefined4 g_Mp3WindowTables[1][0]
;   undefined4 DAT_02f467b0
;   undefined4 DAT_02f46838
;   undefined4 DAT_02f4683c
;   ... and 40 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533690
        ;   Label: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
    PUSH ESI                            ; 00533691
    PUSH EDI                            ; 00533692
    PUSH EBP                            ; 00533693
    MOV EBP,ESP                         ; 00533694
    SUB ESP,0x8c                        ; 00533696
    CMP dword ptr [0x0067e210],0x1      ; 0053369c | g_Mp3SynthesisTablesInitialized
    JNZ 0x0053395f                      ; 005336a3
        ;   XREF to: 0053395f (CONDITIONAL_JUMP)  ; LAB_0053395f
    XOR EDX,EDX                         ; 005336a9
    XOR ECX,ECX                         ; 005336ab
    FLD double ptr [0x0063b0a2]         ; 005336ad | DOUBLE_0063b0a2
    FLD double ptr [0x0063b0c2]         ; 005336b3 | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 005336b9
        ;   Label: LAB_005336b9
    FILD dword ptr [EBP + -0x4]         ; 005336bc
    FADD ST0,ST1                        ; 005336bf
    FMUL ST2                            ; 005336c1
    FSIN                                ; 005336c3
    ADD ECX,0x8                         ; 005336c5
    INC EDX                             ; 005336c8
    FSTP double ptr [ECX + 0x2f46680]   ; 005336c9 | g_Mp3WindowTables | DAT_02f46690
    CMP EDX,0x24                        ; 005336cf
    JL 0x005336b9                       ; 005336d2
        ;   XREF to: 005336b9 (CONDITIONAL_JUMP)  ; LAB_005336b9
    FSTP ST0                            ; 005336d4
    FSTP ST0                            ; 005336d6
    XOR EDX,EDX                         ; 005336d8
    XOR ECX,ECX                         ; 005336da
    FLD double ptr [0x0063b0a2]         ; 005336dc | DOUBLE_0063b0a2
    FLD double ptr [0x0063b0c2]         ; 005336e2 | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 005336e8
        ;   Label: LAB_005336e8
    FILD dword ptr [EBP + -0x4]         ; 005336eb
    FADD ST0,ST1                        ; 005336ee
    FMUL ST2                            ; 005336f0
    FSIN                                ; 005336f2
    ADD ECX,0x8                         ; 005336f4
    INC EDX                             ; 005336f7
    FSTP double ptr [ECX + 0x2f467a0]   ; 005336f8 | g_Mp3WindowTables[1][0] | DAT_02f467b0
    CMP EDX,0x12                        ; 005336fe
    JL 0x005336e8                       ; 00533701
        ;   XREF to: 005336e8 (CONDITIONAL_JUMP)  ; LAB_005336e8
    FSTP ST0                            ; 00533703
    MOV EAX,0x90                        ; 00533705
    MOV EBX,0x3ff00000                  ; 0053370a
    FSTP ST0                            ; 0053370f
    ADD EAX,0x8                         ; 00533711
        ;   Label: LAB_00533711
    XOR ECX,ECX                         ; 00533714
    MOV dword ptr [EAX + 0x2f467a4],EBX ; 00533716 | DAT_02f4683c | DAT_02f46844
    MOV dword ptr [EAX + 0x2f467a0],ECX ; 0053371c | DAT_02f46838 | DAT_02f46840
    CMP EAX,0xc0                        ; 00533722
    JNZ 0x00533711                      ; 00533727
        ;   XREF to: 00533711 (CONDITIONAL_JUMP)  ; LAB_00533711
    MOV EDX,0x18                        ; 00533729
    MOV ECX,EAX                         ; 0053372e
    FLD double ptr [0x0063b0aa]         ; 00533730 | DOUBLE_0063b0aa
    FLD double ptr [0x0063b0ca]         ; 00533736 | DOUBLE_0063b0ca
    FLD double ptr [0x0063b0c2]         ; 0053373c | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 00533742
        ;   Label: LAB_00533742
    FILD dword ptr [EBP + -0x4]         ; 00533745
    FADD ST0,ST1                        ; 00533748
    FADD ST0,ST2                        ; 0053374a
    FMUL ST3                            ; 0053374c
    FSIN                                ; 0053374e
    ADD ECX,0x8                         ; 00533750
    INC EDX                             ; 00533753
    FSTP double ptr [ECX + 0x2f467a0]   ; 00533754 | DAT_02f46840 | DAT_02f46848 | DAT_02f46850
    CMP EDX,0x1e                        ; 0053375a
    JL 0x00533742                       ; 0053375d
        ;   XREF to: 00533742 (CONDITIONAL_JUMP)  ; LAB_00533742
    FSTP ST0                            ; 0053375f
    MOV EAX,0xf0                        ; 00533761
    FSTP ST0                            ; 00533766
    FSTP ST0                            ; 00533768
    ADD EAX,0x8                         ; 0053376a
        ;   Label: LAB_0053376a
    XOR ESI,ESI                         ; 0053376d
    MOV dword ptr [EAX + 0x2f467a0],ESI ; 0053376f | DAT_02f46898 | DAT_02f468a0
    MOV dword ptr [EAX + 0x2f467a4],ESI ; 00533775 | DAT_02f4689c | DAT_02f468a4
    CMP EAX,0x120                       ; 0053377b
    JNZ 0x0053376a                      ; 00533780
        ;   XREF to: 0053376a (CONDITIONAL_JUMP)  ; LAB_0053376a
    XOR EAX,EAX                         ; 00533782
    ADD EAX,0x8                         ; 00533784
        ;   Label: LAB_00533784
    XOR EDX,EDX                         ; 00533787
    MOV dword ptr [EAX + 0x2f469e0],EDX ; 00533789 | g_Mp3WindowTables[3][0] | DAT_02f469f0
    MOV dword ptr [EAX + 0x2f469e4],EDX ; 0053378f | DAT_02f469ec | DAT_02f469f4
    CMP EAX,0x30                        ; 00533795
    JNZ 0x00533784                      ; 00533798
        ;   XREF to: 00533784 (CONDITIONAL_JUMP)  ; LAB_00533784
    MOV EDX,0x6                         ; 0053379a
    MOV ECX,EAX                         ; 0053379f
    FLD double ptr [0x0063b0aa]         ; 005337a1 | DOUBLE_0063b0aa
    FLD double ptr [0x0063b0d2]         ; 005337a7 | DOUBLE_0063b0d2
    FLD double ptr [0x0063b0c2]         ; 005337ad | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 005337b3
        ;   Label: LAB_005337b3
    FILD dword ptr [EBP + -0x4]         ; 005337b6
    FADD ST0,ST1                        ; 005337b9
    FADD ST0,ST2                        ; 005337bb
    FMUL ST3                            ; 005337bd
    FSIN                                ; 005337bf
    ADD ECX,0x8                         ; 005337c1
    INC EDX                             ; 005337c4
    FSTP double ptr [ECX + 0x2f469e0]   ; 005337c5 | DAT_02f469f8 | DAT_02f46a00
    CMP EDX,0xc                         ; 005337cb
    JL 0x005337b3                       ; 005337ce
        ;   XREF to: 005337b3 (CONDITIONAL_JUMP)  ; LAB_005337b3
    FSTP ST0                            ; 005337d0
    MOV EAX,0x60                        ; 005337d2
    MOV ESI,0x3ff00000                  ; 005337d7
    FSTP ST0                            ; 005337dc
    FSTP ST0                            ; 005337de
    ADD EAX,0x8                         ; 005337e0
        ;   Label: LAB_005337e0
    XOR EBX,EBX                         ; 005337e3
    MOV dword ptr [EAX + 0x2f469e4],ESI ; 005337e5 | DAT_02f46a4c | DAT_02f46a54
    MOV dword ptr [EAX + 0x2f469e0],EBX ; 005337eb | DAT_02f46a48 | DAT_02f46a50
    CMP EAX,0x90                        ; 005337f1
    JNZ 0x005337e0                      ; 005337f6
        ;   XREF to: 005337e0 (CONDITIONAL_JUMP)  ; LAB_005337e0
    MOV EDX,0x12                        ; 005337f8
    MOV ECX,EAX                         ; 005337fd
    FLD double ptr [0x0063b0a2]         ; 005337ff | DOUBLE_0063b0a2
    FLD double ptr [0x0063b0c2]         ; 00533805 | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 0053380b
        ;   Label: LAB_0053380b
    FILD dword ptr [EBP + -0x4]         ; 0053380e
    FADD ST0,ST1                        ; 00533811
    FMUL ST2                            ; 00533813
    FSIN                                ; 00533815
    ADD ECX,0x8                         ; 00533817
    INC EDX                             ; 0053381a
    FSTP double ptr [ECX + 0x2f469e0]   ; 0053381b | DAT_02f46a50 | DAT_02f46a58 | DAT_02f46a60
    CMP EDX,0x24                        ; 00533821
    JL 0x0053380b                       ; 00533824
        ;   XREF to: 0053380b (CONDITIONAL_JUMP)  ; LAB_0053380b
    FSTP ST0                            ; 00533826
    FSTP ST0                            ; 00533828
    XOR EDX,EDX                         ; 0053382a
    XOR ECX,ECX                         ; 0053382c
    FLD double ptr [0x0063b0aa]         ; 0053382e | DOUBLE_0063b0aa
    FLD double ptr [0x0063b0c2]         ; 00533834 | DOUBLE_0063b0c2
    MOV dword ptr [EBP + -0x4],EDX      ; 0053383a
        ;   Label: LAB_0053383a
    FILD dword ptr [EBP + -0x4]         ; 0053383d
    FADD ST0,ST1                        ; 00533840
    FMUL ST2                            ; 00533842
    FSIN                                ; 00533844
    ADD ECX,0x8                         ; 00533846
    INC EDX                             ; 00533849
    FSTP double ptr [ECX + 0x2f468c0]   ; 0053384a | g_Mp3WindowTables[2][0] | DAT_02f468d0
    CMP EDX,0xc                         ; 00533850
    JL 0x0053383a                       ; 00533853
        ;   XREF to: 0053383a (CONDITIONAL_JUMP)  ; LAB_0053383a
    FSTP ST0                            ; 00533855
    MOV EAX,0x60                        ; 00533857
    FSTP ST0                            ; 0053385c
    ADD EAX,0x8                         ; 0053385e
        ;   Label: LAB_0053385e
    XOR EDI,EDI                         ; 00533861
    MOV dword ptr [EAX + 0x2f468c0],EDI ; 00533863 | DAT_02f46928 | DAT_02f46930
    MOV dword ptr [EAX + 0x2f468c4],EDI ; 00533869 | DAT_02f4692c | DAT_02f46934
    CMP EAX,0x120                       ; 0053386f
    JNZ 0x0053385e                      ; 00533874
        ;   XREF to: 0053385e (CONDITIONAL_JUMP)  ; LAB_0053385e
    MOV EBX,0xc                         ; 00533876
    MOV dword ptr [EBP + -0x14],EDI     ; 0053387b
    MOV EDI,0x1                         ; 0053387e
    MOV dword ptr [EBP + -0x20],EBX     ; 00533883
    MOV ECX,0x1                         ; 00533886
        ;   Label: LAB_00533886
    MOV EDX,dword ptr [EBP + -0x20]     ; 0053388b
    ADD EDX,ECX                         ; 0053388e
    MOV EBX,dword ptr [EBP + -0x14]     ; 00533890
    CMP EDX,ECX                         ; 00533893
    JLE 0x005338c4                      ; 00533895
        ;   XREF to: 005338c4 (CONDITIONAL_JUMP)  ; LAB_005338c4
    FLD double ptr [0x0063b0b2]         ; 00533897 | DOUBLE_0063b0b2
    LEA ESI,[EDI + 0x6]                 ; 0053389d
    MOV dword ptr [EBP + -0x4],ESI      ; 005338a0
        ;   Label: LAB_005338a0
    FILD dword ptr [EBP + -0x4]         ; 005338a3
    FMUL ST1                            ; 005338a6
    MOV dword ptr [EBP + -0x4],ECX      ; 005338a8
    FILD dword ptr [EBP + -0x4]         ; 005338ab
    FMULP                               ; 005338ae
    FCOS                                ; 005338b0
    ADD EBX,0x8                         ; 005338b2
    ADD ECX,0x2                         ; 005338b5
    FSTP double ptr [EBX + 0x2f46b00]   ; 005338b8 | g_Mp3DctMatrix | DAT_02f46b10
    CMP ECX,EDX                         ; 005338be
    JL 0x005338a0                       ; 005338c0
        ;   XREF to: 005338a0 (CONDITIONAL_JUMP)  ; LAB_005338a0
    FSTP ST0                            ; 005338c2
    MOV ESI,dword ptr [EBP + -0x14]     ; 005338c4
        ;   Label: LAB_005338c4
    ADD ESI,0x30                        ; 005338c7
    ADD EDI,0x2                         ; 005338ca
    MOV dword ptr [EBP + -0x14],ESI     ; 005338cd
    CMP EDI,0x19                        ; 005338d0
    JNZ 0x00533886                      ; 005338d3
        ;   XREF to: 00533886 (CONDITIONAL_JUMP)  ; LAB_00533886
    MOV EAX,0x90                        ; 005338d5
    MOV EDX,0x26                        ; 005338da
    XOR EDI,EDI                         ; 005338df
    MOV dword ptr [EBP + -0x1c],EAX     ; 005338e1
    MOV dword ptr [EBP + -0x18],EDX     ; 005338e4
    MOV dword ptr [EBP + -0x10],EDI     ; 005338e7
    IMUL EBX,dword ptr [EBP + -0x10],0x90 ; 005338ea
        ;   Label: LAB_005338ea
    MOV EAX,dword ptr [EBP + -0x10]     ; 005338f1
    ADD EAX,EAX                         ; 005338f4
    ADD EAX,0x13                        ; 005338f6
    IMUL ECX,EAX,0x0                    ; 005338f9
    MOV ESI,dword ptr [EBP + -0x18]     ; 005338fc
    MOV EDI,dword ptr [EBP + -0x1c]     ; 005338ff
    ADD ECX,EAX                         ; 00533902
    FLD double ptr [0x0063b0ba]         ; 00533904 | DOUBLE_0063b0ba
    MOV dword ptr [EBP + -0x4],0x90     ; 0053390a
        ;   Label: LAB_0053390a
    MOV EDX,ECX                         ; 00533911
    MOV EAX,ECX                         ; 00533913
    SAR EDX,0x1f                        ; 00533915
    IDIV dword ptr [EBP + -0x4]         ; 00533918
    MOV dword ptr [EBP + -0x4],EDX      ; 0053391b
    FILD dword ptr [EBP + -0x4]         ; 0053391e
    FMUL ST1                            ; 00533921
    FCOS                                ; 00533923
    ADD EBX,0x8                         ; 00533925
    ADD ECX,ESI                         ; 00533928
    FSTP double ptr [EBX + 0x2f46d40]   ; 0053392a | g_Mp3PolyCoefficients | DAT_02f46d50
    CMP EBX,EDI                         ; 00533930
    JNZ 0x0053390a                      ; 00533932
        ;   XREF to: 0053390a (CONDITIONAL_JUMP)  ; LAB_0053390a
    FSTP ST0                            ; 00533934
    MOV ESI,dword ptr [EBP + -0x18]     ; 00533936
    MOV EDI,dword ptr [EBP + -0x10]     ; 00533939
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0053393c
    ADD ESI,0x4                         ; 0053393f
    INC EDI                             ; 00533942
    ADD EBX,0x90                        ; 00533943
    MOV dword ptr [EBP + -0x18],ESI     ; 00533949
    MOV dword ptr [EBP + -0x10],EDI     ; 0053394c
    MOV dword ptr [EBP + -0x1c],EBX     ; 0053394f
    CMP EDI,0x24                        ; 00533952
    JL 0x005338ea                       ; 00533955
        ;   XREF to: 005338ea (CONDITIONAL_JUMP)  ; LAB_005338ea
    XOR EDX,EDX                         ; 00533957
    MOV dword ptr [0x0067e210],EDX      ; 00533959 | g_Mp3SynthesisTablesInitialized
    CMP dword ptr [EBP + 0x1c],0x2      ; 0053395f
        ;   Label: LAB_0053395f
    JZ 0x00533a40                       ; 00533963
        ;   XREF to: 00533a40 (CONDITIONAL_JUMP)  ; LAB_00533a40
    XOR EDX,EDX                         ; 00533969
    MOV dword ptr [EBP + -0x34],EDX     ; 0053396b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053396e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00533971
        ;   Label: LAB_00533971
    ADD EAX,EDI                         ; 00533978
    FLD float ptr [EAX]                 ; 0053397a
    FABS                                ; 0053397c
    FCOMP double ptr [0x0063b0da]       ; 0053397e | DOUBLE_0063b0da
    FNSTSW AX                           ; 00533984
    SAHF                                ; 00533986
    JBE 0x00533996                      ; 00533987
        ;   XREF to: 00533996 (CONDITIONAL_JUMP)  ; LAB_00533996
    MOV EAX,dword ptr [EBP + -0x34]     ; 00533989
    INC dword ptr [EBP + -0x34]         ; 0053398c
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX ; 0053398f
    INC EDX                             ; 00533996
        ;   Label: LAB_00533996
    CMP EDX,0x12                        ; 00533997
    JL 0x00533971                       ; 0053399a
        ;   XREF to: 00533971 (CONDITIONAL_JUMP)  ; LAB_00533971
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0053399c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0053399f
    ADD EAX,EDX                         ; 005339a6
    MOV EDX,0x2f46688                   ; 005339a8 | g_Mp3WindowTables
    SHL EAX,0x5                         ; 005339ad
    XOR EBX,EBX                         ; 005339b0
    ADD EDX,EAX                         ; 005339b2
    MOV dword ptr [EBP + -0xc],EBX      ; 005339b4
    MOV dword ptr [EBP + -0x24],EDX     ; 005339b7
    MOV EAX,dword ptr [EBP + -0xc]      ; 005339ba
        ;   Label: LAB_005339ba
    MOV EDX,dword ptr [EBP + 0x18]      ; 005339bd
    SHL EAX,0x2                         ; 005339c0
    ADD EDX,EAX                         ; 005339c3
    MOV dword ptr [EBP + -0x30],EDX     ; 005339c5
    MOV ESI,dword ptr [EBP + -0xc]      ; 005339c8
    IMUL EAX,ESI,0x90                   ; 005339cb
    MOV EDX,0x2f46d48                   ; 005339d1 | g_Mp3PolyCoefficients
    ADD EDX,EAX                         ; 005339d6
    MOV dword ptr [EBP + -0x2c],EDX     ; 005339d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005339db
    MOV dword ptr [EBP + -0x8],EAX      ; 005339de
    MOV EDX,dword ptr [EBP + -0x24]     ; 005339e1
    LEA EAX,[ESI*0x8 + 0x0]             ; 005339e4
    ADD EDX,EAX                         ; 005339eb
    MOV dword ptr [EBP + -0x28],EDX     ; 005339ed
    FLDZ                                ; 005339f0
    MOV ECX,dword ptr [EBP + 0xffffffcc] ; 005339f2
    SUB ECX,0x1                         ; 005339f8
    JL 0x00533a25                       ; 005339fb
        ;   XREF to: 00533a25 (CONDITIONAL_JUMP)  ; LAB_00533a25
    MOV EBX,dword ptr [EBP + 0xffffffd4] ; 005339fd
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 00533a03
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74] ; 00533a09
        ;   Label: LAB_00533a09
    FLD float ptr [ESI + EAX*0x4]       ; 00533a10
    FMUL double ptr [EBX + EAX*0x8]     ; 00533a13
    FADDP                               ; 00533a16
    SUB ECX,0x1                         ; 00533a18
    JGE 0x00533a09                      ; 00533a1b
        ;   XREF to: 00533a09 (CONDITIONAL_JUMP)  ; LAB_00533a09
    MOV EBX,dword ptr [EBP + 0xffffffd8] ; 00533a1d
    FMUL double ptr [EBX]               ; 00533a23
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 00533a25
        ;   Label: LAB_00533a25
    FSTP float ptr [EBX]                ; 00533a2b
    MOV EDI,dword ptr [EBP + -0xc]      ; 00533a2d
    INC EDI                             ; 00533a30
    MOV dword ptr [EBP + -0xc],EDI      ; 00533a31
    CMP EDI,0x24                        ; 00533a34
    JL 0x005339ba                       ; 00533a37
        ;   XREF to: 005339ba (CONDITIONAL_JUMP)  ; LAB_005339ba
    MOV ESP,EBP                         ; 00533a39
    POP EBP                             ; 00533a3b
    POP EDI                             ; 00533a3c
    POP ESI                             ; 00533a3d
    POP EBX                             ; 00533a3e
    RET                                 ; 00533a3f
    PUSH 0x90                           ; 00533a40
        ;   Label: LAB_00533a40
    PUSH 0x0                            ; 00533a45
    MOV ESI,dword ptr [EBP + 0x18]      ; 00533a47
    PUSH ESI                            ; 00533a4a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00533a4b
    CALL crt_memory.c_memset_FUN_005fde40 ; 00533a4e
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00533a53
    MOV EDX,ESI                         ; 00533a56
    XOR ECX,ECX                         ; 00533a58
    XOR EAX,EAX                         ; 00533a5a
    FLD float ptr [EBX + 0xc]           ; 00533a5c
        ;   Label: LAB_00533a5c
    FMUL double ptr [EAX + 0x2f46b10]   ; 00533a5f | DAT_02f46b10 | DAT_02f46b40
    FLD float ptr [EBX]                 ; 00533a65
    FMUL double ptr [EAX + 0x2f46b08]   ; 00533a67 | g_Mp3DctMatrix | DAT_02f46b38
    FADDP                               ; 00533a6d
    FLD float ptr [EBX + 0x18]          ; 00533a6f
    FMUL double ptr [EAX + 0x2f46b18]   ; 00533a72 | DAT_02f46b18 | DAT_02f46b48
    FADDP                               ; 00533a78
    FLD float ptr [EBX + 0x24]          ; 00533a7a
    FMUL double ptr [EAX + 0x2f46b20]   ; 00533a7d | DAT_02f46b20 | DAT_02f46b50
    FADDP                               ; 00533a83
    FLD float ptr [EBX + 0x30]          ; 00533a85
    FMUL double ptr [EAX + 0x2f46b28]   ; 00533a88 | DAT_02f46b28 | DAT_02f46b58
    FADDP                               ; 00533a8e
    FLD float ptr [EBX + 0x3c]          ; 00533a90
    FMUL double ptr [EAX + 0x2f46b30]   ; 00533a93 | DAT_02f46b30 | DAT_02f46b60
    FADDP                               ; 00533a99
    FMUL double ptr [ECX + 0x2f468c8]   ; 00533a9b | g_Mp3WindowTables[2][0]
    ADD EDX,0x4                         ; 00533aa1
    ADD ECX,0x8                         ; 00533aa4
    FLD float ptr [EDX + 0x14]          ; 00533aa7
    FXCH                                ; 00533aaa
    FADD ST0,ST1                        ; 00533aac
    ADD EAX,0x30                        ; 00533aae
    FSTP ST1                            ; 00533ab1
    FSTP float ptr [EDX + 0x14]         ; 00533ab3
    CMP ECX,0x60                        ; 00533ab6
    JNZ 0x00533a5c                      ; 00533ab9
        ;   XREF to: 00533a5c (CONDITIONAL_JUMP)  ; LAB_00533a5c
    MOV ECX,dword ptr [EBP + 0x18]      ; 00533abb
    MOV EBX,dword ptr [EBP + 0x14]      ; 00533abe
    XOR EAX,EAX                         ; 00533ac1
    XOR EDX,EDX                         ; 00533ac3
    FLD float ptr [EBX + 0x10]          ; 00533ac5
        ;   Label: LAB_00533ac5
    FMUL double ptr [EAX + 0x2f46b10]   ; 00533ac8 | DAT_02f46b10 | DAT_02f46b40
    FLD float ptr [EBX + 0x4]           ; 00533ace
    FMUL double ptr [EAX + 0x2f46b08]   ; 00533ad1 | g_Mp3DctMatrix | DAT_02f46b38
    FADDP                               ; 00533ad7
    FLD float ptr [EBX + 0x1c]          ; 00533ad9
    FMUL double ptr [EAX + 0x2f46b18]   ; 00533adc | DAT_02f46b18 | DAT_02f46b48
    FADDP                               ; 00533ae2
    FLD float ptr [EBX + 0x28]          ; 00533ae4
    FMUL double ptr [EAX + 0x2f46b20]   ; 00533ae7 | DAT_02f46b20 | DAT_02f46b50
    FADDP                               ; 00533aed
    FLD float ptr [EBX + 0x34]          ; 00533aef
    FMUL double ptr [EAX + 0x2f46b28]   ; 00533af2 | DAT_02f46b28 | DAT_02f46b58
    FADDP                               ; 00533af8
    FLD float ptr [EBX + 0x40]          ; 00533afa
    FMUL double ptr [EAX + 0x2f46b30]   ; 00533afd | DAT_02f46b30 | DAT_02f46b60
    FADDP                               ; 00533b03
    FMUL double ptr [EDX + 0x2f468c8]   ; 00533b05 | g_Mp3WindowTables[2][0]
    ADD ECX,0x4                         ; 00533b0b
    ADD EDX,0x8                         ; 00533b0e
    FLD float ptr [ECX + 0x2c]          ; 00533b11
    FXCH                                ; 00533b14
    FADD ST0,ST1                        ; 00533b16
    ADD EAX,0x30                        ; 00533b18
    FSTP ST1                            ; 00533b1b
    FSTP float ptr [ECX + 0x2c]         ; 00533b1d
    CMP EDX,0x60                        ; 00533b20
    JNZ 0x00533ac5                      ; 00533b23
        ;   XREF to: 00533ac5 (CONDITIONAL_JUMP)  ; LAB_00533ac5
    MOV ECX,dword ptr [EBP + 0x18]      ; 00533b25
    MOV EBX,dword ptr [EBP + 0x14]      ; 00533b28
    XOR EAX,EAX                         ; 00533b2b
    XOR EDX,EDX                         ; 00533b2d
    FLD float ptr [EBX + 0x14]          ; 00533b2f
        ;   Label: LAB_00533b2f
    FMUL double ptr [EAX + 0x2f46b10]   ; 00533b32 | DAT_02f46b10 | DAT_02f46b40
    FLD float ptr [EBX + 0x8]           ; 00533b38
    FMUL double ptr [EAX + 0x2f46b08]   ; 00533b3b | g_Mp3DctMatrix | DAT_02f46b38
    FADDP                               ; 00533b41
    FLD float ptr [EBX + 0x20]          ; 00533b43
    FMUL double ptr [EAX + 0x2f46b18]   ; 00533b46 | DAT_02f46b18 | DAT_02f46b48
    FADDP                               ; 00533b4c
    FLD float ptr [EBX + 0x2c]          ; 00533b4e
    FMUL double ptr [EAX + 0x2f46b20]   ; 00533b51 | DAT_02f46b20 | DAT_02f46b50
    FADDP                               ; 00533b57
    FLD float ptr [EBX + 0x38]          ; 00533b59
    FMUL double ptr [EAX + 0x2f46b28]   ; 00533b5c | DAT_02f46b28 | DAT_02f46b58
    FADDP                               ; 00533b62
    FLD float ptr [EBX + 0x44]          ; 00533b64
    FMUL double ptr [EAX + 0x2f46b30]   ; 00533b67 | DAT_02f46b30 | DAT_02f46b60
    FADDP                               ; 00533b6d
    FMUL double ptr [EDX + 0x2f468c8]   ; 00533b6f | g_Mp3WindowTables[2][0]
    ADD ECX,0x4                         ; 00533b75
    ADD EDX,0x8                         ; 00533b78
    FLD float ptr [ECX + 0x44]          ; 00533b7b
    FXCH                                ; 00533b7e
    FADD ST0,ST1                        ; 00533b80
    ADD EAX,0x30                        ; 00533b82
    FSTP ST1                            ; 00533b85
    FSTP float ptr [ECX + 0x44]         ; 00533b87
    CMP EDX,0x60                        ; 00533b8a
    JNZ 0x00533b2f                      ; 00533b8d
        ;   XREF to: 00533b2f (CONDITIONAL_JUMP)  ; LAB_00533b2f
    MOV ESP,EBP                         ; 00533b8f
    POP EBP                             ; 00533b91
    POP EDI                             ; 00533b92
    POP ESI                             ; 00533b93
    POP EBX                             ; 00533b94
    RET                                 ; 00533b95

