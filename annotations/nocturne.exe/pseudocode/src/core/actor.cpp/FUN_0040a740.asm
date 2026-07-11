; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0040a740(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,int param_7)
;
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0050ffe0 at 0051025e
;   FUN_00533750 at 00533b29
;
; Referenced Globals:
;   string s_..\\core\\actor.cpp_00577701
;   string s_CDemonActor::rayIntersect_-_Inva_00577713
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fb6578
;   undefined4 DAT_0268ced8
;   undefined4 DAT_0268cedc
;   undefined4 DAT_0268cee0
;   undefined4 DAT_0268cee4
;   undefined4 DAT_0268cee8
;   undefined4 DAT_0268ceec
;
; Called Functions:
;   FUN_00409860
;   FUN_0040a200
;   FUN_0040a220
;   FUN_0040a290
;   FUN_0040a540
;   FUN_0041cc00
;   FUN_0041d550
;   FUN_0041dc20
;   FUN_00453990
;   FUN_00454530
;   FUN_004c8440
;   FUN_0051b540
;   FUN_0051e020
;   FUN_0051e960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a740
        ;   Label: FUN_0040a740
    PUSH ESI                            ; 0040a741
    PUSH EDI                            ; 0040a742
    PUSH EBP                            ; 0040a743
    MOV EBP,ESP                         ; 0040a744
    SUB ESP,0xa8                        ; 0040a746
    AND ESP,0xfffffff8                  ; 0040a74c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0040a74f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040a752
    MOV EBX,dword ptr [EBP + 0x20]      ; 0040a755
    MOV EDX,dword ptr [EBP + 0x28]      ; 0040a758
    TEST EDX,EDX                        ; 0040a75b
    JNZ 0x0040a778                      ; 0040a75d
        ;   XREF to: 0040a778 (CONDITIONAL_JUMP)  ; LAB_0040a778
    MOV dword ptr [ESP + 0xa0],0x40000000 ; 0040a75f
        ;   Label: LAB_0040a75f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040a76a
    MOV ESP,EBP                         ; 0040a771
    POP EBP                             ; 0040a773
    POP EDI                             ; 0040a774
    POP ESI                             ; 0040a775
    POP EBX                             ; 0040a776
    RET                                 ; 0040a777
    PUSH EDX                            ; 0040a778
        ;   Label: LAB_0040a778
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040a779
    PUSH EAX                            ; 0040a77c
    LEA EAX,[ESP + 0x24]                ; 0040a77d
    PUSH EAX                            ; 0040a781
    PUSH EDI                            ; 0040a782
    CALL FUN_0040a540                   ; 0040a783
        ;   XREF to: 0040a540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a540()
    ADD ESP,0x10                        ; 0040a788
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0040a78b
    TEST EDX,EDX                        ; 0040a78e
    JNZ 0x0040a936                      ; 0040a790
        ;   XREF to: 0040a936 (CONDITIONAL_JUMP)  ; LAB_0040a936
    LEA EAX,[ESP + 0x4c]                ; 0040a796
    MOV EDX,ESI                         ; 0040a79a
    CMP EAX,ESI                         ; 0040a79c
    JZ 0x0040a7b4                       ; 0040a79e
        ;   XREF to: 0040a7b4 (CONDITIONAL_JUMP)  ; LAB_0040a7b4
    MOV EAX,dword ptr [ESI]             ; 0040a7a0
    MOV dword ptr [ESP + 0x4c],EAX      ; 0040a7a2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0040a7a6
    MOV dword ptr [ESP + 0x50],EAX      ; 0040a7a9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0040a7ad
    MOV dword ptr [ESP + 0x54],EAX      ; 0040a7b0
    LEA EAX,[ESP + 0x58]                ; 0040a7b4
        ;   Label: LAB_0040a7b4
    CMP EAX,EDX                         ; 0040a7b8
    JZ 0x0040a7d0                       ; 0040a7ba
        ;   XREF to: 0040a7d0 (CONDITIONAL_JUMP)  ; LAB_0040a7d0
    MOV EAX,dword ptr [EDX]             ; 0040a7bc
    MOV dword ptr [ESP + 0x58],EAX      ; 0040a7be
    MOV EAX,dword ptr [EDX + 0x4]       ; 0040a7c2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0040a7c5
    MOV EAX,dword ptr [EDX + 0x8]       ; 0040a7c9
    MOV dword ptr [ESP + 0x60],EAX      ; 0040a7cc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040a7d0
        ;   Label: LAB_0040a7d0
    FLD float ptr [ESI]                 ; 0040a7d3
    FADD float ptr [EAX]                ; 0040a7d5
    FSTP float ptr [ESP + 0x70]         ; 0040a7d7
    FLD float ptr [ESI + 0x4]           ; 0040a7db
    FADD float ptr [EAX + 0x4]          ; 0040a7de
    FSTP float ptr [ESP + 0x74]         ; 0040a7e1
    FLD float ptr [ESI + 0x8]           ; 0040a7e5
    FADD float ptr [EAX + 0x8]          ; 0040a7e8
    LEA EAX,[ESP + 0x70]                ; 0040a7eb
    PUSH EAX                            ; 0040a7ef
    LEA EAX,[ESP + 0x50]                ; 0040a7f0
    PUSH EAX                            ; 0040a7f4
    FSTP float ptr [ESP + 0x80]         ; 0040a7f5
    CALL FUN_0041cc00                   ; 0040a7fc
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cc00()
    ADD ESP,0x8                         ; 0040a801
    LEA EAX,[ESP + 0x1c]                ; 0040a804
    PUSH EAX                            ; 0040a808
    LEA EAX,[ESP + 0x50]                ; 0040a809
    PUSH EAX                            ; 0040a80d
    CALL FUN_0041dc20                   ; 0040a80e
        ;   XREF to: 0041dc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dc20()
    ADD ESP,0x8                         ; 0040a813
    TEST EAX,EAX                        ; 0040a816
    JZ 0x0040a75f                       ; 0040a818
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    PUSH ESI                            ; 0040a81e
        ;   Label: LAB_0040a81e
    LEA EAX,[ESP + 0x80]                ; 0040a81f
    PUSH EAX                            ; 0040a826
    PUSH EDI                            ; 0040a827
    CALL FUN_0040a290                   ; 0040a828
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 0040a82d
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040a830
    PUSH ECX                            ; 0040a833
    LEA EAX,[ESP + 0x68]                ; 0040a834
    PUSH EAX                            ; 0040a838
    PUSH EDI                            ; 0040a839
    CALL FUN_0040a220                   ; 0040a83a
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a220()
    ADD ESP,0xc                         ; 0040a83f
    MOV ESI,dword ptr [EBP + 0x28]      ; 0040a842
    CMP ESI,0x2                         ; 0040a845
    JNC 0x0040a99b                      ; 0040a848
        ;   XREF to: 0040a99b (CONDITIONAL_JUMP)  ; LAB_0040a99b
    CMP ESI,0x1                         ; 0040a84e
    JNZ 0x0040a9a2                      ; 0040a851
        ;   XREF to: 0040a9a2 (CONDITIONAL_JUMP)  ; LAB_0040a9a2
    LEA EAX,[ESP + 0x88]                ; 0040a857
    PUSH EAX                            ; 0040a85e
    LEA EAX,[ESP + 0x68]                ; 0040a85f
    PUSH EAX                            ; 0040a863
    LEA EAX,[ESP + 0x84]                ; 0040a864
    PUSH EAX                            ; 0040a86b
    LEA EDX,[ESP + 0x40]                ; 0040a86c
    PUSH EDX                            ; 0040a870
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0040a871
    PUSH EDI                            ; 0040a877
    CALL dword ptr [EAX + 0x14]         ; 0040a878
    ADD ESP,0x8                         ; 0040a87b
    PUSH EAX                            ; 0040a87e
    CALL FUN_0041d550                   ; 0040a87f
        ;   XREF to: 0041d550 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d550()
    MOV dword ptr [ESP + 0xb4],EAX      ; 0040a884
        ;   Label: LAB_0040a884
    FLD float ptr [ESP + 0xb4]          ; 0040a88b
    ADD ESP,0x10                        ; 0040a892
    FSTP float ptr [ESP + 0x18]         ; 0040a895
    FLD float ptr [ESP + 0x18]          ; 0040a899
        ;   Label: LAB_0040a899
    FLDZ                                ; 0040a89d
    FXCH                                ; 0040a89f
    FSTP double ptr [ESP + 0x8]         ; 0040a8a1
    FCOMP double ptr [ESP + 0x8]        ; 0040a8a5
    FNSTSW AX                           ; 0040a8a9
    SAHF                                ; 0040a8ab
    JA 0x0040a75f                       ; 0040a8ac
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    FLD1                                ; 0040a8b2
    FCOMP double ptr [ESP + 0x8]        ; 0040a8b4
    FNSTSW AX                           ; 0040a8b8
    SAHF                                ; 0040a8ba
    JC 0x0040a75f                       ; 0040a8bb
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    MOV dword ptr [EBX + 0x10],0xffffffff ; 0040a8c1
    MOV dword ptr [EBX + 0x14],0xffffffff ; 0040a8c8
    MOV dword ptr [EBX + 0x18],0xffffffff ; 0040a8cf
    MOV EAX,[0x005be368]                ; 0040a8d6 | DAT_005be368
    MOV dword ptr [EBX + 0xc],0xffffffff ; 0040a8db
    MOV EAX,dword ptr [EAX + 0x15f2f4]  ; 0040a8e2 | DAT_01fb6578
    TEST EAX,EAX                        ; 0040a8e8
    JZ 0x0040a9c9                       ; 0040a8ea
        ;   XREF to: 0040a9c9 (CONDITIONAL_JUMP)  ; LAB_0040a9c9
    LEA EAX,[ESP + 0x88]                ; 0040a8f0
        ;   Label: LAB_0040a8f0
    PUSH EAX                            ; 0040a8f7
    LEA EAX,[ESP + 0x98]                ; 0040a8f8
    PUSH EAX                            ; 0040a8ff
    PUSH EDI                            ; 0040a900
    CALL FUN_0040a200                   ; 0040a901
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 0040a906
    CMP EBX,EAX                         ; 0040a909
    JZ 0x0040a91d                       ; 0040a90b
        ;   XREF to: 0040a91d (CONDITIONAL_JUMP)  ; LAB_0040a91d
    MOV EDX,dword ptr [EAX]             ; 0040a90d
    MOV dword ptr [EBX],EDX             ; 0040a90f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040a911
    MOV dword ptr [EBX + 0x4],EDX       ; 0040a914
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040a917
    MOV dword ptr [EBX + 0x8],EDX       ; 0040a91a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040a91d
        ;   Label: LAB_0040a91d
    MOV dword ptr [ESP + 0xa0],EAX      ; 0040a921
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040a928
    MOV ESP,EBP                         ; 0040a92f
    POP EBP                             ; 0040a931
    POP EDI                             ; 0040a932
    POP ESI                             ; 0040a933
    POP EBX                             ; 0040a934
    RET                                 ; 0040a935
    LEA EAX,[ESP + 0x1c]                ; 0040a936
        ;   Label: LAB_0040a936
    PUSH EAX                            ; 0040a93a
    PUSH EDX                            ; 0040a93b
    CALL FUN_0041dc20                   ; 0040a93c
        ;   XREF to: 0041dc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dc20()
    ADD ESP,0x8                         ; 0040a941
    TEST EAX,EAX                        ; 0040a944
    JNZ 0x0040a81e                      ; 0040a946
        ;   XREF to: 0040a81e (CONDITIONAL_JUMP)  ; LAB_0040a81e
    JMP 0x0040a75f                      ; 0040a94c
        ;   XREF to: 0040a75f (UNCONDITIONAL_JUMP)  ; LAB_0040a75f
    LEA EAX,[ESP + 0x88]                ; 0040a951
        ;   Label: LAB_0040a951
    PUSH EAX                            ; 0040a958
    LEA EAX,[ESP + 0x68]                ; 0040a959
    PUSH EAX                            ; 0040a95d
    LEA EAX,[ESP + 0x84]                ; 0040a95e
    PUSH EAX                            ; 0040a965
    MOV ECX,dword ptr [EBP + 0x24]      ; 0040a966
    PUSH ECX                            ; 0040a969
    CALL FUN_00409860                   ; 0040a96a
        ;   XREF to: 00409860 (UNCONDITIONAL_CALL)  ; undefined FUN_00409860()
    JMP 0x0040a884                      ; 0040a96f
        ;   XREF to: 0040a884 (UNCONDITIONAL_JUMP)  ; LAB_0040a884
    LEA EAX,[ESP + 0x88]                ; 0040a974
        ;   Label: LAB_0040a974
    PUSH EAX                            ; 0040a97b
    LEA EAX,[ESP + 0x68]                ; 0040a97c
    PUSH EAX                            ; 0040a980
    LEA EAX,[ESP + 0x84]                ; 0040a981
    PUSH EAX                            ; 0040a988
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0040a989
    PUSH EDI                            ; 0040a98f
    CALL dword ptr [EDX + 0xb0]         ; 0040a990
    JMP 0x0040a884                      ; 0040a996
        ;   XREF to: 0040a884 (UNCONDITIONAL_JUMP)  ; LAB_0040a884
    JBE 0x0040a951                      ; 0040a99b
        ;   XREF to: 0040a951 (CONDITIONAL_JUMP)  ; LAB_0040a951
        ;   Label: LAB_0040a99b
    CMP ESI,0x3                         ; 0040a99d
    JZ 0x0040a974                       ; 0040a9a0
        ;   XREF to: 0040a974 (CONDITIONAL_JUMP)  ; LAB_0040a974
    MOV EAX,0x577701                    ; 0040a9a2 | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040a9a2
    MOV EDX,0x45d                       ; 0040a9a7
    PUSH 0x577713                       ; 0040a9ac | = "CDemonActor::rayIntersect - Invalid c..."
    MOV [0x01cc4800],EAX                ; 0040a9b1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0040a9b6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040a9bc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0040a9c1
    JMP 0x0040a899                      ; 0040a9c4
        ;   XREF to: 0040a899 (UNCONDITIONAL_JUMP)  ; LAB_0040a899
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040a9c9
        ;   Label: LAB_0040a9c9
    MOV ECX,dword ptr [EAX + 0x20]      ; 0040a9cc
    TEST ECX,ECX                        ; 0040a9cf
    JNZ 0x0040aa43                      ; 0040a9d1
        ;   XREF to: 0040aa43 (CONDITIONAL_JUMP)  ; LAB_0040aa43
    CMP dword ptr [EAX + 0x24],0x0      ; 0040a9d3
    JZ 0x0040a8f0                       ; 0040a9d7
        ;   XREF to: 0040a8f0 (CONDITIONAL_JUMP)  ; LAB_0040a8f0
    LEA EAX,[ESP + 0x88]                ; 0040a9dd
    PUSH EAX                            ; 0040a9e4
    LEA EAX,[ESP + 0x68]                ; 0040a9e5
    PUSH EAX                            ; 0040a9e9
    LEA EAX,[ESP + 0x84]                ; 0040a9ea
    PUSH EAX                            ; 0040a9f1
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040a9f2
    PUSH ECX                            ; 0040a9f5
    MOV EDX,dword ptr [EAX + 0x24]      ; 0040a9f6
    PUSH EDX                            ; 0040a9f9
    CALL FUN_00454530                   ; 0040a9fa
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 0040a9ff
    PUSH EAX                            ; 0040aa02
    CALL FUN_00453990                   ; 0040aa03
        ;   XREF to: 00453990 (UNCONDITIONAL_CALL)  ; undefined FUN_00453990()
    MOV dword ptr [ESP + 0xb8],EAX      ; 0040aa08
    FLD float ptr [ESP + 0xb8]          ; 0040aa0f
    ADD ESP,0x14                        ; 0040aa16
    FLDZ                                ; 0040aa19
    FXCH                                ; 0040aa1b
    FST float ptr [ESP + 0x18]          ; 0040aa1d
    FSTP double ptr [ESP]               ; 0040aa21
    FCOMP double ptr [ESP]              ; 0040aa24
    FNSTSW AX                           ; 0040aa27
    SAHF                                ; 0040aa29
    JA 0x0040a75f                       ; 0040aa2a
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    FLD1                                ; 0040aa30
    FCOMP double ptr [ESP]              ; 0040aa32
    FNSTSW AX                           ; 0040aa35
    SAHF                                ; 0040aa37
    JNC 0x0040a8f0                      ; 0040aa38
        ;   XREF to: 0040a8f0 (CONDITIONAL_JUMP)  ; LAB_0040a8f0
    JMP 0x0040a75f                      ; 0040aa3e
        ;   XREF to: 0040a75f (UNCONDITIONAL_JUMP)  ; LAB_0040a75f
    LEA EAX,[ESP + 0x64]                ; 0040aa43
        ;   Label: LAB_0040aa43
    PUSH EAX                            ; 0040aa47
    LEA EAX,[ESP + 0x80]                ; 0040aa48
    PUSH EAX                            ; 0040aa4f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040aa50
    MOV ESI,dword ptr [EAX + 0x20]      ; 0040aa53
    PUSH ESI                            ; 0040aa56
    CALL FUN_0051e960                   ; 0040aa57
        ;   XREF to: 0051e960 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e960()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0040aa5c
    FLD float ptr [ESP + 0xb0]          ; 0040aa63
    ADD ESP,0xc                         ; 0040aa6a
    FLDZ                                ; 0040aa6d
    FXCH                                ; 0040aa6f
    FST float ptr [ESP + 0x18]          ; 0040aa71
    FSTP double ptr [ESP + 0x10]        ; 0040aa75
    FCOMP double ptr [ESP + 0x10]       ; 0040aa79
    FNSTSW AX                           ; 0040aa7d
    SAHF                                ; 0040aa7f
    JA 0x0040a75f                       ; 0040aa80
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    FLD1                                ; 0040aa86
    FCOMP double ptr [ESP + 0x10]       ; 0040aa88
    FNSTSW AX                           ; 0040aa8c
    SAHF                                ; 0040aa8e
    JC 0x0040a75f                       ; 0040aa8f
        ;   XREF to: 0040a75f (CONDITIONAL_JUMP)  ; LAB_0040a75f
    MOV EAX,[0x0268ced8]                ; 0040aa95 | DAT_0268ced8
    MOV dword ptr [EBX + 0xc],EAX       ; 0040aa9a
    MOV EAX,[0x0268cee8]                ; 0040aa9d | DAT_0268cee8
    MOV dword ptr [EBX + 0x10],EAX      ; 0040aaa2
    MOV EAX,[0x0268ceec]                ; 0040aaa5 | DAT_0268ceec
    MOV EDX,dword ptr [0x0268cee8]      ; 0040aaaa | DAT_0268cee8
    PUSH EAX                            ; 0040aab0
    MOV dword ptr [EBX + 0x14],EAX      ; 0040aab1
    MOV EAX,dword ptr [EBP + 0x24]      ; 0040aab4
    PUSH EDX                            ; 0040aab7
    MOV ECX,dword ptr [EAX + 0x20]      ; 0040aab8
    PUSH ECX                            ; 0040aabb
    CALL FUN_0051e020                   ; 0040aabc
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 0040aac1
    PUSH EAX                            ; 0040aac4
    CALL FUN_0051b540                   ; 0040aac5
        ;   XREF to: 0051b540 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b540()
    MOV dword ptr [EBX + 0x18],EAX      ; 0040aaca
    LEA EAX,[ESP + 0x94]                ; 0040aacd
    ADD ESP,0xc                         ; 0040aad4
    CMP EAX,0x268cedc                   ; 0040aad7
    JZ 0x0040a8f0                       ; 0040aadc
        ;   XREF to: 0040a8f0 (CONDITIONAL_JUMP)  ; LAB_0040a8f0
    MOV EAX,[0x0268cedc]                ; 0040aae2 | DAT_0268cedc
    MOV dword ptr [ESP + 0x88],EAX      ; 0040aae7
    MOV EAX,[0x0268cee0]                ; 0040aaee | DAT_0268cee0
    MOV dword ptr [ESP + 0x8c],EAX      ; 0040aaf3
    MOV EAX,[0x0268cee4]                ; 0040aafa | DAT_0268cee4
    MOV dword ptr [ESP + 0x90],EAX      ; 0040aaff
    JMP 0x0040a8f0                      ; 0040ab06
        ;   XREF to: 0040a8f0 (UNCONDITIONAL_JUMP)  ; LAB_0040a8f0

