; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0(CLodMesh *this_ptr,uint *out_crc)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; uint *           Stack[0x8]:4   out_crc
; Local Variables:
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
;   shape_meshlod.cpp_CLodMesh_openPrecomputeFile_FUN_0051b770 at 0051b7e8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c6f0
        ;   Label: shape_meshlod.cpp_CLodMesh_computeMeshCRC32_FUN_0051c6f0
    PUSH ESI                            ; 0051c6f1
    PUSH EDI                            ; 0051c6f2
    PUSH EBP                            ; 0051c6f3
    SUB ESP,0x3c                        ; 0051c6f4
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c6f7
    XOR EDX,EDX                         ; 0051c6fb
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051c6fd
    MOV dword ptr [ESP + 0x18],EDX      ; 0051c700
    TEST ECX,ECX                        ; 0051c704
    JLE 0x0051c980                      ; 0051c706
        ;   XREF to: 0051c980 (CONDITIONAL_JUMP)  ; LAB_0051c980
    MOV dword ptr [ESP + 0x14],EDX      ; 0051c70c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c710
        ;   Label: LAB_0051c710
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051c714
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051c718
    ADD EDX,EAX                         ; 0051c71b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c71d
    XOR EDI,EDI                         ; 0051c721
    MOV EBX,dword ptr [EAX + 0x18]      ; 0051c723
    MOV dword ptr [ESP + 0x24],EDX      ; 0051c726
    TEST EBX,EBX                        ; 0051c72a
    JLE 0x0051c75f                      ; 0051c72c
        ;   XREF to: 0051c75f (CONDITIONAL_JUMP)  ; LAB_0051c75f
    MOV dword ptr [ESP + 0x30],EAX      ; 0051c72e
    MOV EDX,dword ptr [ESP + 0x30]      ; 0051c732
        ;   Label: LAB_0051c732
    MOV ECX,dword ptr [EDX + 0x24]      ; 0051c736
    LEA EAX,[EDI*0x4 + 0x0]             ; 0051c739
    TEST ECX,ECX                        ; 0051c740
    JNZ 0x0051cbbd                      ; 0051c742
        ;   XREF to: 0051cbbd (CONDITIONAL_JUMP)  ; LAB_0051cbbd
    MOV ESI,dword ptr [ESP + 0x30]      ; 0051c748
        ;   Label: LAB_0051c748
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c74c
    INC EDI                             ; 0051c750
    ADD ESI,0x4                         ; 0051c751
    MOV EBP,dword ptr [EAX + 0x18]      ; 0051c754
    MOV dword ptr [ESP + 0x30],ESI      ; 0051c757
    CMP EDI,EBP                         ; 0051c75b
    JL 0x0051c732                       ; 0051c75d
        ;   XREF to: 0051c732 (CONDITIONAL_JUMP)  ; LAB_0051c732
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051c75f
        ;   Label: LAB_0051c75f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051c763
    MOV dword ptr [ESP + 0x34],EAX      ; 0051c767
    ADD EAX,0xc                         ; 0051c76b
    MOV dword ptr [ESP + 0x20],EAX      ; 0051c76e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051c772
        ;   Label: LAB_0051c772
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051c776
    MOV ESI,0x4                         ; 0051c77a
    MOV EAX,dword ptr [EAX + 0x10]      ; 0051c77f
    LEA ECX,[ESP + 0x4]                 ; 0051c782
    MOV dword ptr [ESP + 0x4],EAX       ; 0051c786
    MOV EDI,0x4c11db7                   ; 0051c78a
    MOV EBP,0x80000000                  ; 0051c78f
    MOV EAX,EDX                         ; 0051c794
    MOV BL,byte ptr [ECX]               ; 0051c796
        ;   Label: LAB_0051c796
    AND EBX,0xff                        ; 0051c798
    SHL EBX,0x18                        ; 0051c79e
    XOR dword ptr [EDX],EBX             ; 0051c7a1
    MOV EBX,dword ptr [EDX]             ; 0051c7a3
    TEST EBP,EBX                        ; 0051c7a5
    JZ 0x0051ccdf                       ; 0051c7a7
        ;   XREF to: 0051ccdf (CONDITIONAL_JUMP)  ; LAB_0051ccdf
    ADD EBX,EBX                         ; 0051c7ad
    XOR EBX,EDI                         ; 0051c7af
    MOV dword ptr [EAX],EBX             ; 0051c7b1
        ;   Label: LAB_0051c7b1
    TEST EBP,EBX                        ; 0051c7b3
    JZ 0x0051cce6                       ; 0051c7b5
        ;   XREF to: 0051cce6 (CONDITIONAL_JUMP)  ; LAB_0051cce6
    ADD EBX,EBX                         ; 0051c7bb
    XOR EBX,EDI                         ; 0051c7bd
    MOV dword ptr [EAX],EBX             ; 0051c7bf
        ;   Label: LAB_0051c7bf
    TEST EBP,EBX                        ; 0051c7c1
    JZ 0x0051cced                       ; 0051c7c3
        ;   XREF to: 0051cced (CONDITIONAL_JUMP)  ; LAB_0051cced
    ADD EBX,EBX                         ; 0051c7c9
    XOR EBX,EDI                         ; 0051c7cb
    MOV dword ptr [EAX],EBX             ; 0051c7cd
        ;   Label: LAB_0051c7cd
    TEST EBP,EBX                        ; 0051c7cf
    JZ 0x0051ccf4                       ; 0051c7d1
        ;   XREF to: 0051ccf4 (CONDITIONAL_JUMP)  ; LAB_0051ccf4
    ADD EBX,EBX                         ; 0051c7d7
    XOR EBX,EDI                         ; 0051c7d9
    MOV dword ptr [EAX],EBX             ; 0051c7db
        ;   Label: LAB_0051c7db
    TEST EBP,EBX                        ; 0051c7dd
    JZ 0x0051ccfb                       ; 0051c7df
        ;   XREF to: 0051ccfb (CONDITIONAL_JUMP)  ; LAB_0051ccfb
    ADD EBX,EBX                         ; 0051c7e5
    XOR EBX,EDI                         ; 0051c7e7
    MOV dword ptr [EAX],EBX             ; 0051c7e9
        ;   Label: LAB_0051c7e9
    TEST EBP,EBX                        ; 0051c7eb
    JZ 0x0051cd02                       ; 0051c7ed
        ;   XREF to: 0051cd02 (CONDITIONAL_JUMP)  ; LAB_0051cd02
    ADD EBX,EBX                         ; 0051c7f3
    XOR EBX,EDI                         ; 0051c7f5
    MOV dword ptr [EAX],EBX             ; 0051c7f7
        ;   Label: LAB_0051c7f7
    TEST EBP,EBX                        ; 0051c7f9
    JZ 0x0051cd09                       ; 0051c7fb
        ;   XREF to: 0051cd09 (CONDITIONAL_JUMP)  ; LAB_0051cd09
    ADD EBX,EBX                         ; 0051c801
    XOR EBX,EDI                         ; 0051c803
    MOV dword ptr [EAX],EBX             ; 0051c805
        ;   Label: LAB_0051c805
    TEST EBP,EBX                        ; 0051c807
    JZ 0x0051cd10                       ; 0051c809
        ;   XREF to: 0051cd10 (CONDITIONAL_JUMP)  ; LAB_0051cd10
    ADD EBX,EBX                         ; 0051c80f
    XOR EBX,EDI                         ; 0051c811
    INC ECX                             ; 0051c813
        ;   Label: LAB_0051c813
    DEC ESI                             ; 0051c814
    MOV dword ptr [EAX],EBX             ; 0051c815
    TEST ESI,ESI                        ; 0051c817
    JG 0x0051c796                       ; 0051c819
        ;   XREF to: 0051c796 (CONDITIONAL_JUMP)  ; LAB_0051c796
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c81f
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0051c823
    XOR EDI,EDI                         ; 0051c826
    TEST ESI,ESI                        ; 0051c828
    JLE 0x0051c938                      ; 0051c82a
        ;   XREF to: 0051c938 (CONDITIONAL_JUMP)  ; LAB_0051c938
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0051c830
    MOV dword ptr [ESP + 0x38],EAX      ; 0051c834
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051c838
        ;   Label: LAB_0051c838
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051c83c
    MOV ECX,0x4                         ; 0051c840
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0051c845
    LEA ESI,[ESP + 0x8]                 ; 0051c848
    MOV dword ptr [ESP + 0x8],EAX       ; 0051c84c
    MOV EAX,EDX                         ; 0051c850
    MOV BL,byte ptr [ESI]               ; 0051c852
        ;   Label: LAB_0051c852
    AND EBX,0xff                        ; 0051c854
    MOV EBP,dword ptr [EDX]             ; 0051c85a
    SHL EBX,0x18                        ; 0051c85c
    XOR EBP,EBX                         ; 0051c85f
    MOV dword ptr [EDX],EBP             ; 0051c861
    TEST byte ptr [EDX + 0x3],0x80      ; 0051c863
    JZ 0x0051cd17                       ; 0051c867
        ;   XREF to: 0051cd17 (CONDITIONAL_JUMP)  ; LAB_0051cd17
    LEA EBX,[EBP + EBP*0x1]             ; 0051c86d
    XOR EBX,0x4c11db7                   ; 0051c871
    MOV dword ptr [EAX],EBX             ; 0051c877
        ;   Label: LAB_0051c877
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c879
    JZ 0x0051cd20                       ; 0051c87d
        ;   XREF to: 0051cd20 (CONDITIONAL_JUMP)  ; LAB_0051cd20
    MOV EBX,dword ptr [EAX]             ; 0051c883
    ADD EBX,EBX                         ; 0051c885
    XOR EBX,0x4c11db7                   ; 0051c887
    MOV dword ptr [EAX],EBX             ; 0051c88d
        ;   Label: LAB_0051c88d
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c88f
    JZ 0x0051cd29                       ; 0051c893
        ;   XREF to: 0051cd29 (CONDITIONAL_JUMP)  ; LAB_0051cd29
    MOV EBX,dword ptr [EAX]             ; 0051c899
    ADD EBX,EBX                         ; 0051c89b
    XOR EBX,0x4c11db7                   ; 0051c89d
    MOV dword ptr [EAX],EBX             ; 0051c8a3
        ;   Label: LAB_0051c8a3
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c8a5
    JZ 0x0051cd32                       ; 0051c8a9
        ;   XREF to: 0051cd32 (CONDITIONAL_JUMP)  ; LAB_0051cd32
    MOV EBX,dword ptr [EAX]             ; 0051c8af
    ADD EBX,EBX                         ; 0051c8b1
    XOR EBX,0x4c11db7                   ; 0051c8b3
    MOV dword ptr [EAX],EBX             ; 0051c8b9
        ;   Label: LAB_0051c8b9
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c8bb
    JZ 0x0051cd3b                       ; 0051c8bf
        ;   XREF to: 0051cd3b (CONDITIONAL_JUMP)  ; LAB_0051cd3b
    MOV EBX,dword ptr [EAX]             ; 0051c8c5
    ADD EBX,EBX                         ; 0051c8c7
    XOR EBX,0x4c11db7                   ; 0051c8c9
    MOV dword ptr [EAX],EBX             ; 0051c8cf
        ;   Label: LAB_0051c8cf
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c8d1
    JZ 0x0051cd44                       ; 0051c8d5
        ;   XREF to: 0051cd44 (CONDITIONAL_JUMP)  ; LAB_0051cd44
    MOV EBX,dword ptr [EAX]             ; 0051c8db
    ADD EBX,EBX                         ; 0051c8dd
    XOR EBX,0x4c11db7                   ; 0051c8df
    MOV dword ptr [EAX],EBX             ; 0051c8e5
        ;   Label: LAB_0051c8e5
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c8e7
    JZ 0x0051cd4d                       ; 0051c8eb
        ;   XREF to: 0051cd4d (CONDITIONAL_JUMP)  ; LAB_0051cd4d
    MOV EBX,dword ptr [EAX]             ; 0051c8f1
    ADD EBX,EBX                         ; 0051c8f3
    XOR EBX,0x4c11db7                   ; 0051c8f5
    MOV dword ptr [EAX],EBX             ; 0051c8fb
        ;   Label: LAB_0051c8fb
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c8fd
    JZ 0x0051cd56                       ; 0051c901
        ;   XREF to: 0051cd56 (CONDITIONAL_JUMP)  ; LAB_0051cd56
    MOV EBX,dword ptr [EAX]             ; 0051c907
    ADD EBX,EBX                         ; 0051c909
    XOR EBX,0x4c11db7                   ; 0051c90b
    INC ESI                             ; 0051c911
        ;   Label: LAB_0051c911
    DEC ECX                             ; 0051c912
    MOV dword ptr [EAX],EBX             ; 0051c913
    TEST ECX,ECX                        ; 0051c915
    JG 0x0051c852                       ; 0051c917
        ;   XREF to: 0051c852 (CONDITIONAL_JUMP)  ; LAB_0051c852
    MOV EBP,dword ptr [ESP + 0x38]      ; 0051c91d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c921
    INC EDI                             ; 0051c925
    ADD EBP,0x4                         ; 0051c926
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0051c929
    MOV dword ptr [ESP + 0x38],EBP      ; 0051c92c
    CMP EDI,EDX                         ; 0051c930
    JL 0x0051c838                       ; 0051c932
        ;   XREF to: 0051c838 (CONDITIONAL_JUMP)  ; LAB_0051c838
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051c938
        ;   Label: LAB_0051c938
    MOV ECX,dword ptr [ESP + 0x34]      ; 0051c93c
    MOV ESI,dword ptr [ESP + 0x20]      ; 0051c940
    ADD EBX,0x8                         ; 0051c944
    ADD ECX,0x4                         ; 0051c947
    MOV dword ptr [ESP + 0x2c],EBX      ; 0051c94a
    MOV dword ptr [ESP + 0x34],ECX      ; 0051c94e
    CMP ECX,ESI                         ; 0051c952
    JNZ 0x0051c772                      ; 0051c954
        ;   XREF to: 0051c772 (CONDITIONAL_JUMP)  ; LAB_0051c772
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051c95a
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051c95e
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051c962
    ADD EBX,0x8c                        ; 0051c966
    INC ESI                             ; 0051c96c
    MOV EDI,dword ptr [EDX + 0x8]       ; 0051c96d
    MOV dword ptr [ESP + 0x14],EBX      ; 0051c970
    MOV dword ptr [ESP + 0x18],ESI      ; 0051c974
    CMP ESI,EDI                         ; 0051c978
    JL 0x0051c710                       ; 0051c97a
        ;   XREF to: 0051c710 (CONDITIONAL_JUMP)  ; LAB_0051c710
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051c980
        ;   Label: LAB_0051c980
    XOR EBP,EBP                         ; 0051c984
    MOV EDX,dword ptr [EAX]             ; 0051c986
    MOV dword ptr [ESP + 0x1c],EBP      ; 0051c988
    TEST EDX,EDX                        ; 0051c98c
    JLE 0x0051cbb5                      ; 0051c98e
        ;   XREF to: 0051cbb5 (CONDITIONAL_JUMP)  ; LAB_0051cbb5
    MOV dword ptr [ESP + 0x10],EBP      ; 0051c994
    MOV EBP,dword ptr [ESP + 0x50]      ; 0051c998
        ;   Label: LAB_0051c998
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051c99c
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051c9a0
    MOV EBP,dword ptr [EBP + 0x4]       ; 0051c9a4
    MOV EAX,EDX                         ; 0051c9a7
    ADD EBP,ESI                         ; 0051c9a9
    MOV ESI,0xc                         ; 0051c9ab
    MOV ECX,EBP                         ; 0051c9b0
    MOV BL,byte ptr [ECX]               ; 0051c9b2
        ;   Label: LAB_0051c9b2
    AND EBX,0xff                        ; 0051c9b4
    MOV EDI,dword ptr [EDX]             ; 0051c9ba
    SHL EBX,0x18                        ; 0051c9bc
    XOR EDI,EBX                         ; 0051c9bf
    MOV dword ptr [EDX],EDI             ; 0051c9c1
    TEST byte ptr [EDX + 0x3],0x80      ; 0051c9c3
    JZ 0x0051cd5f                       ; 0051c9c7
        ;   XREF to: 0051cd5f (CONDITIONAL_JUMP)  ; LAB_0051cd5f
    LEA EBX,[EDI + EDI*0x1]             ; 0051c9cd
    XOR EBX,0x4c11db7                   ; 0051c9d0
    MOV dword ptr [EAX],EBX             ; 0051c9d6
        ;   Label: LAB_0051c9d6
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c9d8
    JZ 0x0051cd67                       ; 0051c9dc
        ;   XREF to: 0051cd67 (CONDITIONAL_JUMP)  ; LAB_0051cd67
    MOV EBX,dword ptr [EAX]             ; 0051c9e2
    ADD EBX,EBX                         ; 0051c9e4
    XOR EBX,0x4c11db7                   ; 0051c9e6
    MOV dword ptr [EAX],EBX             ; 0051c9ec
        ;   Label: LAB_0051c9ec
    TEST byte ptr [EAX + 0x3],0x80      ; 0051c9ee
    JZ 0x0051cd70                       ; 0051c9f2
        ;   XREF to: 0051cd70 (CONDITIONAL_JUMP)  ; LAB_0051cd70
    MOV EBX,dword ptr [EAX]             ; 0051c9f8
    ADD EBX,EBX                         ; 0051c9fa
    XOR EBX,0x4c11db7                   ; 0051c9fc
    MOV dword ptr [EAX],EBX             ; 0051ca02
        ;   Label: LAB_0051ca02
    TEST byte ptr [EAX + 0x3],0x80      ; 0051ca04
    JZ 0x0051cd79                       ; 0051ca08
        ;   XREF to: 0051cd79 (CONDITIONAL_JUMP)  ; LAB_0051cd79
    MOV EBX,dword ptr [EAX]             ; 0051ca0e
    ADD EBX,EBX                         ; 0051ca10
    XOR EBX,0x4c11db7                   ; 0051ca12
    MOV dword ptr [EAX],EBX             ; 0051ca18
        ;   Label: LAB_0051ca18
    TEST byte ptr [EAX + 0x3],0x80      ; 0051ca1a
    JZ 0x0051cd82                       ; 0051ca1e
        ;   XREF to: 0051cd82 (CONDITIONAL_JUMP)  ; LAB_0051cd82
    MOV EBX,dword ptr [EAX]             ; 0051ca24
    ADD EBX,EBX                         ; 0051ca26
    XOR EBX,0x4c11db7                   ; 0051ca28
    MOV dword ptr [EAX],EBX             ; 0051ca2e
        ;   Label: LAB_0051ca2e
    TEST byte ptr [EAX + 0x3],0x80      ; 0051ca30
    JZ 0x0051cd8b                       ; 0051ca34
        ;   XREF to: 0051cd8b (CONDITIONAL_JUMP)  ; LAB_0051cd8b
    MOV EBX,dword ptr [EAX]             ; 0051ca3a
    ADD EBX,EBX                         ; 0051ca3c
    XOR EBX,0x4c11db7                   ; 0051ca3e
    MOV dword ptr [EAX],EBX             ; 0051ca44
        ;   Label: LAB_0051ca44
    TEST byte ptr [EAX + 0x3],0x80      ; 0051ca46
    JZ 0x0051cd94                       ; 0051ca4a
        ;   XREF to: 0051cd94 (CONDITIONAL_JUMP)  ; LAB_0051cd94
    MOV EBX,dword ptr [EAX]             ; 0051ca50
    ADD EBX,EBX                         ; 0051ca52
    XOR EBX,0x4c11db7                   ; 0051ca54
    MOV dword ptr [EAX],EBX             ; 0051ca5a
        ;   Label: LAB_0051ca5a
    TEST byte ptr [EAX + 0x3],0x80      ; 0051ca5c
    JZ 0x0051cd9d                       ; 0051ca60
        ;   XREF to: 0051cd9d (CONDITIONAL_JUMP)  ; LAB_0051cd9d
    MOV EBX,dword ptr [EAX]             ; 0051ca66
    ADD EBX,EBX                         ; 0051ca68
    XOR EBX,0x4c11db7                   ; 0051ca6a
    INC ECX                             ; 0051ca70
        ;   Label: LAB_0051ca70
    DEC ESI                             ; 0051ca71
    MOV dword ptr [EAX],EBX             ; 0051ca72
    TEST ESI,ESI                        ; 0051ca74
    JG 0x0051c9b2                       ; 0051ca76
        ;   XREF to: 0051c9b2 (CONDITIONAL_JUMP)  ; LAB_0051c9b2
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051ca7c
    MOV EDX,dword ptr [EAX + 0x20]      ; 0051ca80
    XOR EDI,EDI                         ; 0051ca83
    TEST EDX,EDX                        ; 0051ca85
    JLE 0x0051cb91                      ; 0051ca87
        ;   XREF to: 0051cb91 (CONDITIONAL_JUMP)  ; LAB_0051cb91
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051ca8d
    MOV dword ptr [ESP + 0x28],EBP      ; 0051ca91
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051ca95
        ;   Label: LAB_0051ca95
    MOV ESI,0x4                         ; 0051ca99
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051ca9e
    LEA ECX,[ESP + 0xc]                 ; 0051caa1
    MOV dword ptr [ESP + 0xc],EAX       ; 0051caa5
    MOV EAX,EDX                         ; 0051caa9
    MOV BL,byte ptr [ECX]               ; 0051caab
        ;   Label: LAB_0051caab
    AND EBX,0xff                        ; 0051caad
    MOV EBP,dword ptr [EDX]             ; 0051cab3
    SHL EBX,0x18                        ; 0051cab5
    XOR EBP,EBX                         ; 0051cab8
    MOV dword ptr [EDX],EBP             ; 0051caba
    TEST byte ptr [EDX + 0x3],0x80      ; 0051cabc
    JZ 0x0051cda6                       ; 0051cac0
        ;   XREF to: 0051cda6 (CONDITIONAL_JUMP)  ; LAB_0051cda6
    LEA EBX,[EBP + EBP*0x1]             ; 0051cac6
    XOR EBX,0x4c11db7                   ; 0051caca
    MOV dword ptr [EAX],EBX             ; 0051cad0
        ;   Label: LAB_0051cad0
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cad2
    JZ 0x0051cdaf                       ; 0051cad6
        ;   XREF to: 0051cdaf (CONDITIONAL_JUMP)  ; LAB_0051cdaf
    MOV EBX,dword ptr [EAX]             ; 0051cadc
    ADD EBX,EBX                         ; 0051cade
    XOR EBX,0x4c11db7                   ; 0051cae0
    MOV dword ptr [EAX],EBX             ; 0051cae6
        ;   Label: LAB_0051cae6
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cae8
    JZ 0x0051cdb8                       ; 0051caec
        ;   XREF to: 0051cdb8 (CONDITIONAL_JUMP)  ; LAB_0051cdb8
    MOV EBX,dword ptr [EAX]             ; 0051caf2
    ADD EBX,EBX                         ; 0051caf4
    XOR EBX,0x4c11db7                   ; 0051caf6
    MOV dword ptr [EAX],EBX             ; 0051cafc
        ;   Label: LAB_0051cafc
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cafe
    JZ 0x0051cdc1                       ; 0051cb02
        ;   XREF to: 0051cdc1 (CONDITIONAL_JUMP)  ; LAB_0051cdc1
    MOV EBX,dword ptr [EAX]             ; 0051cb08
    ADD EBX,EBX                         ; 0051cb0a
    XOR EBX,0x4c11db7                   ; 0051cb0c
    MOV dword ptr [EAX],EBX             ; 0051cb12
        ;   Label: LAB_0051cb12
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cb14
    JZ 0x0051cdca                       ; 0051cb18
        ;   XREF to: 0051cdca (CONDITIONAL_JUMP)  ; LAB_0051cdca
    MOV EBX,dword ptr [EAX]             ; 0051cb1e
    ADD EBX,EBX                         ; 0051cb20
    XOR EBX,0x4c11db7                   ; 0051cb22
    MOV dword ptr [EAX],EBX             ; 0051cb28
        ;   Label: LAB_0051cb28
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cb2a
    JZ 0x0051cdd3                       ; 0051cb2e
        ;   XREF to: 0051cdd3 (CONDITIONAL_JUMP)  ; LAB_0051cdd3
    MOV EBX,dword ptr [EAX]             ; 0051cb34
    ADD EBX,EBX                         ; 0051cb36
    XOR EBX,0x4c11db7                   ; 0051cb38
    MOV dword ptr [EAX],EBX             ; 0051cb3e
        ;   Label: LAB_0051cb3e
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cb40
    JZ 0x0051cddc                       ; 0051cb44
        ;   XREF to: 0051cddc (CONDITIONAL_JUMP)  ; LAB_0051cddc
    MOV EBX,dword ptr [EAX]             ; 0051cb4a
    ADD EBX,EBX                         ; 0051cb4c
    XOR EBX,0x4c11db7                   ; 0051cb4e
    MOV dword ptr [EAX],EBX             ; 0051cb54
        ;   Label: LAB_0051cb54
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cb56
    JZ 0x0051cde5                       ; 0051cb5a
        ;   XREF to: 0051cde5 (CONDITIONAL_JUMP)  ; LAB_0051cde5
    MOV EBX,dword ptr [EAX]             ; 0051cb60
    ADD EBX,EBX                         ; 0051cb62
    XOR EBX,0x4c11db7                   ; 0051cb64
    INC ECX                             ; 0051cb6a
        ;   Label: LAB_0051cb6a
    DEC ESI                             ; 0051cb6b
    MOV dword ptr [EAX],EBX             ; 0051cb6c
    TEST ESI,ESI                        ; 0051cb6e
    JG 0x0051caab                       ; 0051cb70
        ;   XREF to: 0051caab (CONDITIONAL_JUMP)  ; LAB_0051caab
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051cb76
    MOV EAX,dword ptr [ESP + 0x50]      ; 0051cb7a
    INC EDI                             ; 0051cb7e
    ADD ECX,0x4                         ; 0051cb7f
    MOV EBX,dword ptr [EAX + 0x20]      ; 0051cb82
    MOV dword ptr [ESP + 0x28],ECX      ; 0051cb85
    CMP EDI,EBX                         ; 0051cb89
    JL 0x0051ca95                       ; 0051cb8b
        ;   XREF to: 0051ca95 (CONDITIONAL_JUMP)  ; LAB_0051ca95
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051cb91
        ;   Label: LAB_0051cb91
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051cb95
    ADD EAX,0x4c4                       ; 0051cb99
    INC EDX                             ; 0051cb9e
    MOV dword ptr [ESP + 0x10],EAX      ; 0051cb9f
    MOV dword ptr [ESP + 0x1c],EDX      ; 0051cba3
    MOV EAX,EDX                         ; 0051cba7
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051cba9
    CMP EAX,dword ptr [EDX]             ; 0051cbad
    JL 0x0051c998                       ; 0051cbaf
        ;   XREF to: 0051c998 (CONDITIONAL_JUMP)  ; LAB_0051c998
    ADD ESP,0x3c                        ; 0051cbb5
        ;   Label: LAB_0051cbb5
    POP EBP                             ; 0051cbb8
    POP EDI                             ; 0051cbb9
    POP ESI                             ; 0051cbba
    POP EBX                             ; 0051cbbb
    RET                                 ; 0051cbbc
    ADD EAX,dword ptr [ESP + 0x24]      ; 0051cbbd
        ;   Label: LAB_0051cbbd
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051cbc1
    MOV ECX,0x4                         ; 0051cbc5
    MOV EAX,dword ptr [EAX]             ; 0051cbca
    MOV ESI,ESP                         ; 0051cbcc
    MOV dword ptr [ESP],EAX             ; 0051cbce
    MOV EAX,EDX                         ; 0051cbd1
    MOV BL,byte ptr [ESI]               ; 0051cbd3
        ;   Label: LAB_0051cbd3
    AND EBX,0xff                        ; 0051cbd5
    MOV EBP,dword ptr [EDX]             ; 0051cbdb
    SHL EBX,0x18                        ; 0051cbdd
    XOR EBP,EBX                         ; 0051cbe0
    MOV dword ptr [EDX],EBP             ; 0051cbe2
    TEST byte ptr [EDX + 0x3],0x80      ; 0051cbe4
    JZ 0x0051cc97                       ; 0051cbe8
        ;   XREF to: 0051cc97 (CONDITIONAL_JUMP)  ; LAB_0051cc97
    LEA EBX,[EBP + EBP*0x1]             ; 0051cbee
    XOR EBX,0x4c11db7                   ; 0051cbf2
    MOV dword ptr [EAX],EBX             ; 0051cbf8
        ;   Label: LAB_0051cbf8
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cbfa
    JZ 0x0051cca0                       ; 0051cbfe
        ;   XREF to: 0051cca0 (CONDITIONAL_JUMP)  ; LAB_0051cca0
    MOV EBX,dword ptr [EAX]             ; 0051cc04
    ADD EBX,EBX                         ; 0051cc06
    XOR EBX,0x4c11db7                   ; 0051cc08
    MOV dword ptr [EAX],EBX             ; 0051cc0e
        ;   Label: LAB_0051cc0e
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc10
    JZ 0x0051cca9                       ; 0051cc14
        ;   XREF to: 0051cca9 (CONDITIONAL_JUMP)  ; LAB_0051cca9
    MOV EBX,dword ptr [EAX]             ; 0051cc1a
    ADD EBX,EBX                         ; 0051cc1c
    XOR EBX,0x4c11db7                   ; 0051cc1e
    MOV dword ptr [EAX],EBX             ; 0051cc24
        ;   Label: LAB_0051cc24
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc26
    JZ 0x0051ccb2                       ; 0051cc2a
        ;   XREF to: 0051ccb2 (CONDITIONAL_JUMP)  ; LAB_0051ccb2
    MOV EBX,dword ptr [EAX]             ; 0051cc30
    ADD EBX,EBX                         ; 0051cc32
    XOR EBX,0x4c11db7                   ; 0051cc34
    MOV dword ptr [EAX],EBX             ; 0051cc3a
        ;   Label: LAB_0051cc3a
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc3c
    JZ 0x0051ccb8                       ; 0051cc40
        ;   XREF to: 0051ccb8 (CONDITIONAL_JUMP)  ; LAB_0051ccb8
    MOV EBX,dword ptr [EAX]             ; 0051cc46
    ADD EBX,EBX                         ; 0051cc48
    XOR EBX,0x4c11db7                   ; 0051cc4a
    MOV dword ptr [EAX],EBX             ; 0051cc50
        ;   Label: LAB_0051cc50
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc52
    JZ 0x0051ccbe                       ; 0051cc56
        ;   XREF to: 0051ccbe (CONDITIONAL_JUMP)  ; LAB_0051ccbe
    MOV EBX,dword ptr [EAX]             ; 0051cc58
    ADD EBX,EBX                         ; 0051cc5a
    XOR EBX,0x4c11db7                   ; 0051cc5c
    MOV dword ptr [EAX],EBX             ; 0051cc62
        ;   Label: LAB_0051cc62
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc64
    JZ 0x0051ccc4                       ; 0051cc68
        ;   XREF to: 0051ccc4 (CONDITIONAL_JUMP)  ; LAB_0051ccc4
    MOV EBX,dword ptr [EAX]             ; 0051cc6a
    ADD EBX,EBX                         ; 0051cc6c
    XOR EBX,0x4c11db7                   ; 0051cc6e
    MOV dword ptr [EAX],EBX             ; 0051cc74
        ;   Label: LAB_0051cc74
    TEST byte ptr [EAX + 0x3],0x80      ; 0051cc76
    JZ 0x0051ccca                       ; 0051cc7a
        ;   XREF to: 0051ccca (CONDITIONAL_JUMP)  ; LAB_0051ccca
    MOV EBX,dword ptr [EAX]             ; 0051cc7c
    ADD EBX,EBX                         ; 0051cc7e
    XOR EBX,0x4c11db7                   ; 0051cc80
    INC ESI                             ; 0051cc86
    DEC ECX                             ; 0051cc87
    MOV dword ptr [EAX],EBX             ; 0051cc88
    TEST ECX,ECX                        ; 0051cc8a
    JLE 0x0051c748                      ; 0051cc8c
        ;   XREF to: 0051c748 (CONDITIONAL_JUMP)  ; LAB_0051c748
    JMP 0x0051cbd3                      ; 0051cc92
        ;   XREF to: 0051cbd3 (UNCONDITIONAL_JUMP)  ; LAB_0051cbd3
    LEA EBX,[EBP + EBP*0x1]             ; 0051cc97
        ;   Label: LAB_0051cc97
    JMP 0x0051cbf8                      ; 0051cc9b
        ;   XREF to: 0051cbf8 (UNCONDITIONAL_JUMP)  ; LAB_0051cbf8
    MOV EBX,dword ptr [EAX]             ; 0051cca0
        ;   Label: LAB_0051cca0
    ADD EBX,EBX                         ; 0051cca2
    JMP 0x0051cc0e                      ; 0051cca4
        ;   XREF to: 0051cc0e (UNCONDITIONAL_JUMP)  ; LAB_0051cc0e
    MOV EBX,dword ptr [EAX]             ; 0051cca9
        ;   Label: LAB_0051cca9
    ADD EBX,EBX                         ; 0051ccab
    JMP 0x0051cc24                      ; 0051ccad
        ;   XREF to: 0051cc24 (UNCONDITIONAL_JUMP)  ; LAB_0051cc24
    MOV EBX,dword ptr [EAX]             ; 0051ccb2
        ;   Label: LAB_0051ccb2
    ADD EBX,EBX                         ; 0051ccb4
    JMP 0x0051cc3a                      ; 0051ccb6
        ;   XREF to: 0051cc3a (UNCONDITIONAL_JUMP)  ; LAB_0051cc3a
    MOV EBX,dword ptr [EAX]             ; 0051ccb8
        ;   Label: LAB_0051ccb8
    ADD EBX,EBX                         ; 0051ccba
    JMP 0x0051cc50                      ; 0051ccbc
        ;   XREF to: 0051cc50 (UNCONDITIONAL_JUMP)  ; LAB_0051cc50
    MOV EBX,dword ptr [EAX]             ; 0051ccbe
        ;   Label: LAB_0051ccbe
    ADD EBX,EBX                         ; 0051ccc0
    JMP 0x0051cc62                      ; 0051ccc2
        ;   XREF to: 0051cc62 (UNCONDITIONAL_JUMP)  ; LAB_0051cc62
    MOV EBX,dword ptr [EAX]             ; 0051ccc4
        ;   Label: LAB_0051ccc4
    ADD EBX,EBX                         ; 0051ccc6
    JMP 0x0051cc74                      ; 0051ccc8
        ;   XREF to: 0051cc74 (UNCONDITIONAL_JUMP)  ; LAB_0051cc74
    MOV EBX,dword ptr [EAX]             ; 0051ccca
        ;   Label: LAB_0051ccca
    ADD EBX,EBX                         ; 0051cccc
    INC ESI                             ; 0051ccce
    DEC ECX                             ; 0051cccf
    MOV dword ptr [EAX],EBX             ; 0051ccd0
    TEST ECX,ECX                        ; 0051ccd2
    JLE 0x0051c748                      ; 0051ccd4
        ;   XREF to: 0051c748 (CONDITIONAL_JUMP)  ; LAB_0051c748
    JMP 0x0051cbd3                      ; 0051ccda
        ;   XREF to: 0051cbd3 (UNCONDITIONAL_JUMP)  ; LAB_0051cbd3
    ADD EBX,EBX                         ; 0051ccdf
        ;   Label: LAB_0051ccdf
    JMP 0x0051c7b1                      ; 0051cce1
        ;   XREF to: 0051c7b1 (UNCONDITIONAL_JUMP)  ; LAB_0051c7b1
    ADD EBX,EBX                         ; 0051cce6
        ;   Label: LAB_0051cce6
    JMP 0x0051c7bf                      ; 0051cce8
        ;   XREF to: 0051c7bf (UNCONDITIONAL_JUMP)  ; LAB_0051c7bf
    ADD EBX,EBX                         ; 0051cced
        ;   Label: LAB_0051cced
    JMP 0x0051c7cd                      ; 0051ccef
        ;   XREF to: 0051c7cd (UNCONDITIONAL_JUMP)  ; LAB_0051c7cd
    ADD EBX,EBX                         ; 0051ccf4
        ;   Label: LAB_0051ccf4
    JMP 0x0051c7db                      ; 0051ccf6
        ;   XREF to: 0051c7db (UNCONDITIONAL_JUMP)  ; LAB_0051c7db
    ADD EBX,EBX                         ; 0051ccfb
        ;   Label: LAB_0051ccfb
    JMP 0x0051c7e9                      ; 0051ccfd
        ;   XREF to: 0051c7e9 (UNCONDITIONAL_JUMP)  ; LAB_0051c7e9
    ADD EBX,EBX                         ; 0051cd02
        ;   Label: LAB_0051cd02
    JMP 0x0051c7f7                      ; 0051cd04
        ;   XREF to: 0051c7f7 (UNCONDITIONAL_JUMP)  ; LAB_0051c7f7
    ADD EBX,EBX                         ; 0051cd09
        ;   Label: LAB_0051cd09
    JMP 0x0051c805                      ; 0051cd0b
        ;   XREF to: 0051c805 (UNCONDITIONAL_JUMP)  ; LAB_0051c805
    ADD EBX,EBX                         ; 0051cd10
        ;   Label: LAB_0051cd10
    JMP 0x0051c813                      ; 0051cd12
        ;   XREF to: 0051c813 (UNCONDITIONAL_JUMP)  ; LAB_0051c813
    LEA EBX,[EBP + EBP*0x1]             ; 0051cd17
        ;   Label: LAB_0051cd17
    JMP 0x0051c877                      ; 0051cd1b
        ;   XREF to: 0051c877 (UNCONDITIONAL_JUMP)  ; LAB_0051c877
    MOV EBX,dword ptr [EAX]             ; 0051cd20
        ;   Label: LAB_0051cd20
    ADD EBX,EBX                         ; 0051cd22
    JMP 0x0051c88d                      ; 0051cd24
        ;   XREF to: 0051c88d (UNCONDITIONAL_JUMP)  ; LAB_0051c88d
    MOV EBX,dword ptr [EAX]             ; 0051cd29
        ;   Label: LAB_0051cd29
    ADD EBX,EBX                         ; 0051cd2b
    JMP 0x0051c8a3                      ; 0051cd2d
        ;   XREF to: 0051c8a3 (UNCONDITIONAL_JUMP)  ; LAB_0051c8a3
    MOV EBX,dword ptr [EAX]             ; 0051cd32
        ;   Label: LAB_0051cd32
    ADD EBX,EBX                         ; 0051cd34
    JMP 0x0051c8b9                      ; 0051cd36
        ;   XREF to: 0051c8b9 (UNCONDITIONAL_JUMP)  ; LAB_0051c8b9
    MOV EBX,dword ptr [EAX]             ; 0051cd3b
        ;   Label: LAB_0051cd3b
    ADD EBX,EBX                         ; 0051cd3d
    JMP 0x0051c8cf                      ; 0051cd3f
        ;   XREF to: 0051c8cf (UNCONDITIONAL_JUMP)  ; LAB_0051c8cf
    MOV EBX,dword ptr [EAX]             ; 0051cd44
        ;   Label: LAB_0051cd44
    ADD EBX,EBX                         ; 0051cd46
    JMP 0x0051c8e5                      ; 0051cd48
        ;   XREF to: 0051c8e5 (UNCONDITIONAL_JUMP)  ; LAB_0051c8e5
    MOV EBX,dword ptr [EAX]             ; 0051cd4d
        ;   Label: LAB_0051cd4d
    ADD EBX,EBX                         ; 0051cd4f
    JMP 0x0051c8fb                      ; 0051cd51
        ;   XREF to: 0051c8fb (UNCONDITIONAL_JUMP)  ; LAB_0051c8fb
    MOV EBX,dword ptr [EAX]             ; 0051cd56
        ;   Label: LAB_0051cd56
    ADD EBX,EBX                         ; 0051cd58
    JMP 0x0051c911                      ; 0051cd5a
        ;   XREF to: 0051c911 (UNCONDITIONAL_JUMP)  ; LAB_0051c911
    LEA EBX,[EDI + EDI*0x1]             ; 0051cd5f
        ;   Label: LAB_0051cd5f
    JMP 0x0051c9d6                      ; 0051cd62
        ;   XREF to: 0051c9d6 (UNCONDITIONAL_JUMP)  ; LAB_0051c9d6
    MOV EBX,dword ptr [EAX]             ; 0051cd67
        ;   Label: LAB_0051cd67
    ADD EBX,EBX                         ; 0051cd69
    JMP 0x0051c9ec                      ; 0051cd6b
        ;   XREF to: 0051c9ec (UNCONDITIONAL_JUMP)  ; LAB_0051c9ec
    MOV EBX,dword ptr [EAX]             ; 0051cd70
        ;   Label: LAB_0051cd70
    ADD EBX,EBX                         ; 0051cd72
    JMP 0x0051ca02                      ; 0051cd74
        ;   XREF to: 0051ca02 (UNCONDITIONAL_JUMP)  ; LAB_0051ca02
    MOV EBX,dword ptr [EAX]             ; 0051cd79
        ;   Label: LAB_0051cd79
    ADD EBX,EBX                         ; 0051cd7b
    JMP 0x0051ca18                      ; 0051cd7d
        ;   XREF to: 0051ca18 (UNCONDITIONAL_JUMP)  ; LAB_0051ca18
    MOV EBX,dword ptr [EAX]             ; 0051cd82
        ;   Label: LAB_0051cd82
    ADD EBX,EBX                         ; 0051cd84
    JMP 0x0051ca2e                      ; 0051cd86
        ;   XREF to: 0051ca2e (UNCONDITIONAL_JUMP)  ; LAB_0051ca2e
    MOV EBX,dword ptr [EAX]             ; 0051cd8b
        ;   Label: LAB_0051cd8b
    ADD EBX,EBX                         ; 0051cd8d
    JMP 0x0051ca44                      ; 0051cd8f
        ;   XREF to: 0051ca44 (UNCONDITIONAL_JUMP)  ; LAB_0051ca44
    MOV EBX,dword ptr [EAX]             ; 0051cd94
        ;   Label: LAB_0051cd94
    ADD EBX,EBX                         ; 0051cd96
    JMP 0x0051ca5a                      ; 0051cd98
        ;   XREF to: 0051ca5a (UNCONDITIONAL_JUMP)  ; LAB_0051ca5a
    MOV EBX,dword ptr [EAX]             ; 0051cd9d
        ;   Label: LAB_0051cd9d
    ADD EBX,EBX                         ; 0051cd9f
    JMP 0x0051ca70                      ; 0051cda1
        ;   XREF to: 0051ca70 (UNCONDITIONAL_JUMP)  ; LAB_0051ca70
    LEA EBX,[EBP + EBP*0x1]             ; 0051cda6
        ;   Label: LAB_0051cda6
    JMP 0x0051cad0                      ; 0051cdaa
        ;   XREF to: 0051cad0 (UNCONDITIONAL_JUMP)  ; LAB_0051cad0
    MOV EBX,dword ptr [EAX]             ; 0051cdaf
        ;   Label: LAB_0051cdaf
    ADD EBX,EBX                         ; 0051cdb1
    JMP 0x0051cae6                      ; 0051cdb3
        ;   XREF to: 0051cae6 (UNCONDITIONAL_JUMP)  ; LAB_0051cae6
    MOV EBX,dword ptr [EAX]             ; 0051cdb8
        ;   Label: LAB_0051cdb8
    ADD EBX,EBX                         ; 0051cdba
    JMP 0x0051cafc                      ; 0051cdbc
        ;   XREF to: 0051cafc (UNCONDITIONAL_JUMP)  ; LAB_0051cafc
    MOV EBX,dword ptr [EAX]             ; 0051cdc1
        ;   Label: LAB_0051cdc1
    ADD EBX,EBX                         ; 0051cdc3
    JMP 0x0051cb12                      ; 0051cdc5
        ;   XREF to: 0051cb12 (UNCONDITIONAL_JUMP)  ; LAB_0051cb12
    MOV EBX,dword ptr [EAX]             ; 0051cdca
        ;   Label: LAB_0051cdca
    ADD EBX,EBX                         ; 0051cdcc
    JMP 0x0051cb28                      ; 0051cdce
        ;   XREF to: 0051cb28 (UNCONDITIONAL_JUMP)  ; LAB_0051cb28
    MOV EBX,dword ptr [EAX]             ; 0051cdd3
        ;   Label: LAB_0051cdd3
    ADD EBX,EBX                         ; 0051cdd5
    JMP 0x0051cb3e                      ; 0051cdd7
        ;   XREF to: 0051cb3e (UNCONDITIONAL_JUMP)  ; LAB_0051cb3e
    MOV EBX,dword ptr [EAX]             ; 0051cddc
        ;   Label: LAB_0051cddc
    ADD EBX,EBX                         ; 0051cdde
    JMP 0x0051cb54                      ; 0051cde0
        ;   XREF to: 0051cb54 (UNCONDITIONAL_JUMP)  ; LAB_0051cb54
    MOV EBX,dword ptr [EAX]             ; 0051cde5
        ;   Label: LAB_0051cde5
    ADD EBX,EBX                         ; 0051cde7
    JMP 0x0051cb6a                      ; 0051cde9
        ;   XREF to: 0051cb6a (UNCONDITIONAL_JUMP)  ; LAB_0051cb6a

