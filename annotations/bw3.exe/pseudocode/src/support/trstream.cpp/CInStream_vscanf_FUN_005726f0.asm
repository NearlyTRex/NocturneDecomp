; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStream_vscanf_FUN_005726f0(CInStream *this_ptr,char *format,va_list_t args)
;
; Parameters:
; CInStream *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[1]:
;   support_trstream.cpp_CInStream_scanf_FUN_00572590 at 005725aa
;
; Referenced Globals:
;   undefined1* switchdataD_005725bc = 00572960
;   undefined1* switchdataD_00572618 = 005728b3
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c__strtod_FUN_005a6098
;   support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005726f0
        ;   Label: support_trstream.cpp_CInStream_vscanf_FUN_005726f0
    PUSH ESI                            ; 005726f1
    PUSH EDI                            ; 005726f2
    PUSH EBP                            ; 005726f3
    MOV EBP,ESP                         ; 005726f4
    SUB ESP,0xd8                        ; 005726f6
    AND ESP,0xfffffff8                  ; 005726fc
    MOV EBX,dword ptr [EBP + 0x18]      ; 005726ff
    XOR EDX,EDX                         ; 00572702
    MOV AH,byte ptr [EBX]               ; 00572704
    MOV dword ptr [ESP + 0xbc],EDX      ; 00572706
    MOV dword ptr [ESP + 0xd0],EDX      ; 0057270d
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572714
    MOV dword ptr [ESP + 0xc0],EDX      ; 0057271b
    TEST AH,AH                          ; 00572722
    JZ 0x00572764                       ; 00572724
        ;   XREF to: 00572764 (CONDITIONAL_JUMP)  ; LAB_00572764
    CMP dword ptr [ESP + 0xd0],0x0      ; 00572726
        ;   Label: LAB_00572726
    JNZ 0x00572764                      ; 0057272e
        ;   XREF to: 00572764 (CONDITIONAL_JUMP)  ; LAB_00572764
    MOV AL,byte ptr [EBX]               ; 00572730
    XOR ECX,ECX                         ; 00572732
    INC AL                              ; 00572734
    MOV CL,AL                           ; 00572736
    MOV DH,byte ptr [ECX + 0x6074b8]    ; 00572738 | DAT_006074b8
    LEA EAX,[EBX + 0x1]                 ; 0057273e
    TEST DH,0x2                         ; 00572741
    JZ 0x005727ab                       ; 00572744
        ;   XREF to: 005727ab (CONDITIONAL_JUMP)  ; LAB_005727ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572746
    PUSH EDX                            ; 00572749
    MOV EBX,EAX                         ; 0057274a
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 0057274c
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00572751
    TEST EAX,EAX                        ; 00572754
    JL 0x005727a2                       ; 00572756
        ;   XREF to: 005727a2 (CONDITIONAL_JUMP)  ; LAB_005727a2
    ADD dword ptr [ESP + 0xd4],EAX      ; 00572758
    CMP byte ptr [EBX],0x0              ; 0057275f
        ;   Label: LAB_0057275f
    JNZ 0x00572726                      ; 00572762
        ;   XREF to: 00572726 (CONDITIONAL_JUMP)  ; LAB_00572726
    MOV EBX,dword ptr [ESP + 0xd0]      ; 00572764
        ;   Label: LAB_00572764
    CMP EBX,-0x1                        ; 0057276b
    JL 0x00572794                       ; 0057276e
        ;   XREF to: 00572794 (CONDITIONAL_JUMP)  ; LAB_00572794
    TEST EBX,EBX                        ; 00572770
    JZ 0x00573774                       ; 00572772
        ;   XREF to: 00573774 (CONDITIONAL_JUMP)  ; LAB_00573774
    CMP dword ptr [ESP + 0xc0],0x0      ; 00572778
    JNZ 0x00573774                      ; 00572780
        ;   XREF to: 00573774 (CONDITIONAL_JUMP)  ; LAB_00573774
    CMP dword ptr [ESP + 0xbc],0x0      ; 00572786
    JNZ 0x00573774                      ; 0057278e
        ;   XREF to: 00573774 (CONDITIONAL_JUMP)  ; LAB_00573774
    MOV EDI,0xffffffff                  ; 00572794
        ;   Label: LAB_00572794
    MOV EAX,EDI                         ; 00572799
    MOV ESP,EBP                         ; 0057279b
    POP EBP                             ; 0057279d
    POP EDI                             ; 0057279e
    POP ESI                             ; 0057279f
    POP EBX                             ; 005727a0
    RET                                 ; 005727a1
    MOV dword ptr [ESP + 0xd0],EAX      ; 005727a2
        ;   Label: LAB_005727a2
    JMP 0x00572764                      ; 005727a9
        ;   XREF to: 00572764 (UNCONDITIONAL_JUMP)  ; LAB_00572764
    MOV CL,byte ptr [EBX]               ; 005727ab
        ;   Label: LAB_005727ab
    CMP CL,0x25                         ; 005727ad
    JNZ 0x005727ba                      ; 005727b0
        ;   XREF to: 005727ba (CONDITIONAL_JUMP)  ; LAB_005727ba
    MOV CH,byte ptr [EAX]               ; 005727b2
    MOV EBX,EAX                         ; 005727b4
    CMP CH,CL                           ; 005727b6
    JNZ 0x0057281b                      ; 005727b8
        ;   XREF to: 0057281b (CONDITIONAL_JUMP)  ; LAB_0057281b
    MOV ESI,dword ptr [EBP + 0x14]      ; 005727ba
        ;   Label: LAB_005727ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 005727bd
    PUSH ESI                            ; 005727c0
    MOV EAX,dword ptr [EAX]             ; 005727c1
    CALL dword ptr [EAX + 0x4]          ; 005727c3
    MOVZX ESI,byte ptr [EBX]            ; 005727c6
    ADD ESP,0x4                         ; 005727c9
    CMP EAX,ESI                         ; 005727cc
    JNZ 0x005727e5                      ; 005727ce
        ;   XREF to: 005727e5 (CONDITIONAL_JUMP)  ; LAB_005727e5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005727d0
    INC EAX                             ; 005727d7
    INC EBX                             ; 005727d8
    MOV dword ptr [ESP + 0xd4],EAX      ; 005727d9
    JMP 0x0057275f                      ; 005727e0
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    TEST EAX,EAX                        ; 005727e5
        ;   Label: LAB_005727e5
    JGE 0x005727f5                      ; 005727e7
        ;   XREF to: 005727f5 (CONDITIONAL_JUMP)  ; LAB_005727f5
    MOV dword ptr [ESP + 0xd0],EAX      ; 005727e9
    JMP 0x00572764                      ; 005727f0
        ;   XREF to: 00572764 (UNCONDITIONAL_JUMP)  ; LAB_00572764
    PUSH EAX                            ; 005727f5
        ;   Label: LAB_005727f5
    MOV EDI,dword ptr [EBP + 0x14]      ; 005727f6
    MOV EDX,dword ptr [EBP + 0x14]      ; 005727f9
    PUSH EDI                            ; 005727fc
    MOV EDX,dword ptr [EDX]             ; 005727fd
    CALL dword ptr [EDX + 0x8]          ; 005727ff
    ADD ESP,0x8                         ; 00572802
    TEST EAX,EAX                        ; 00572805
    JNZ 0x00572764                      ; 00572807
        ;   XREF to: 00572764 (CONDITIONAL_JUMP)  ; LAB_00572764
    MOV EDI,0xffffffff                  ; 0057280d
    MOV EAX,EDI                         ; 00572812
    MOV ESP,EBP                         ; 00572814
    POP EBP                             ; 00572816
    POP EDI                             ; 00572817
    POP ESI                             ; 00572818
    POP EBX                             ; 00572819
    RET                                 ; 0057281a
    MOV ECX,0x1                         ; 0057281b
        ;   Label: LAB_0057281b
    XOR EDX,EDX                         ; 00572820
    MOV EDI,0x7fffffff                  ; 00572822
    MOV dword ptr [ESP + 0x9c],EDX      ; 00572827
    MOV dword ptr [ESP + 0xc4],EDX      ; 0057282e
    MOV dword ptr [ESP + 0xa0],EDX      ; 00572835
    MOV dword ptr [ESP + 0x98],EDX      ; 0057283c
    MOV DL,byte ptr [EAX]               ; 00572843
    MOV dword ptr [ESP + 0xc8],ECX      ; 00572845
    TEST DL,DL                          ; 0057284c
    JZ 0x00572894                       ; 0057284e
        ;   XREF to: 00572894 (CONDITIONAL_JUMP)  ; LAB_00572894
    XOR EAX,EAX                         ; 00572850
        ;   Label: LAB_00572850
    MOV AL,byte ptr [EBX]               ; 00572852
    XOR ESI,ESI                         ; 00572854
    CMP EAX,0x4c                        ; 00572856
    JNC 0x005729c9                      ; 00572859
        ;   XREF to: 005729c9 (CONDITIONAL_JUMP)  ; LAB_005729c9
    CMP EAX,0x2a                        ; 0057285f
    JNC 0x005729e6                      ; 00572862
        ;   XREF to: 005729e6 (CONDITIONAL_JUMP)  ; LAB_005729e6
    MOV CL,AL                           ; 00572868
        ;   Label: LAB_00572868
    INC CL                              ; 0057286a
    AND ECX,0xff                        ; 0057286c
    TEST byte ptr [ECX + 0x6074b8],0x20 ; 00572872 | DAT_006074b8
    JZ 0x00572894                       ; 00572879
        ;   XREF to: 00572894 (CONDITIONAL_JUMP)  ; LAB_00572894
    SUB EAX,0x30                        ; 0057287b
    CMP EDI,0x7fffffff                  ; 0057287e
    JNZ 0x005729bf                      ; 00572884
        ;   XREF to: 005729bf (CONDITIONAL_JUMP)  ; LAB_005729bf
    MOV EDI,EAX                         ; 0057288a
    TEST ESI,ESI                        ; 0057288c
        ;   Label: LAB_0057288c
    JZ 0x005729f2                       ; 0057288e
        ;   XREF to: 005729f2 (CONDITIONAL_JUMP)  ; LAB_005729f2
    XOR EAX,EAX                         ; 00572894
        ;   Label: LAB_00572894
    MOV AL,byte ptr [EBX]               ; 00572896
    MOV dword ptr [ESP + 0xb0],EAX      ; 00572898
    SUB EAX,0x44                        ; 0057289f
    INC EBX                             ; 005728a2
    CMP EAX,0x34                        ; 005728a3
    JA 0x0057376e                       ; 005728a6
        ;   XREF to: 0057376e (CONDITIONAL_JUMP)  ; caseD_77
    JMP dword ptr [EAX*0x4 + 0x572618]  ; 005728ac | caseD_64 | caseD_67 | caseD_77
        ;   Label: switchD
    MOV dword ptr [ESP + 0xcc],0xa      ; 005728b3
        ;   Label: caseD_44
    MOV EDX,dword ptr [EBP + 0x14]      ; 005728be
        ;   Label: LAB_005728be
    PUSH EDX                            ; 005728c1
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 005728c2
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 005728c7
    TEST EAX,EAX                        ; 005728ca
    JL 0x00572f24                       ; 005728cc
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    ADD dword ptr [ESP + 0xd4],EAX      ; 005728d2
    TEST EDI,EDI                        ; 005728d9
    JLE 0x0057291d                      ; 005728db
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV ESI,dword ptr [EBP + 0x14]      ; 005728dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005728e0
    PUSH ESI                            ; 005728e3
    MOV EAX,dword ptr [EAX]             ; 005728e4
    CALL dword ptr [EAX + 0x4]          ; 005728e6
    ADD ESP,0x4                         ; 005728e9
    TEST EAX,EAX                        ; 005728ec
    JL 0x00572f24                       ; 005728ee
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005728f4
    LEA EDX,[EDI + -0x1]                ; 005728fb
    INC ECX                             ; 005728fe
    CMP EAX,0x2d                        ; 005728ff
    JNZ 0x0057305a                      ; 00572902
        ;   XREF to: 0057305a (CONDITIONAL_JUMP)  ; LAB_0057305a
    MOV ESI,0x1                         ; 00572908
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057290d
    MOV EDI,EDX                         ; 00572914
    MOV dword ptr [ESP + 0xc4],ESI      ; 00572916
    TEST EDI,EDI                        ; 0057291d
        ;   Label: LAB_0057291d
    JLE 0x00573096                      ; 0057291f
        ;   XREF to: 00573096 (CONDITIONAL_JUMP)  ; LAB_00573096
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572925
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572928
    PUSH EDX                            ; 0057292b
    MOV EAX,dword ptr [EAX]             ; 0057292c
    CALL dword ptr [EAX + 0x4]          ; 0057292e
    ADD ESP,0x4                         ; 00572931
    MOV dword ptr [ESP + 0xa4],EAX      ; 00572934
    TEST EAX,EAX                        ; 0057293b
    JL 0x0057308f                       ; 0057293d
        ;   XREF to: 0057308f (CONDITIONAL_JUMP)  ; LAB_0057308f
    PUSH EAX                            ; 00572943
    MOV ESI,0x63                        ; 00572944
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00572949
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    SUB EAX,0x30                        ; 0057294e
    ADD ESP,0x4                         ; 00572951
    CMP EAX,0x16                        ; 00572954
    JA 0x00572962                       ; 00572957
        ;   XREF to: 00572962 (CONDITIONAL_JUMP)  ; caseD_40
    JMP dword ptr [EAX*0x4 + 0x5725bc]  ; 00572959 | caseD_30 | caseD_31 | caseD_32
        ;   Label: switchD
    XOR ESI,ESI                         ; 00572960
        ;   Label: caseD_30
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00572962
        ;   Label: caseD_3a
    CMP ESI,ECX                         ; 00572969
    JG 0x005731a9                       ; 0057296b
        ;   XREF to: 005731a9 (CONDITIONAL_JUMP)  ; LAB_005731a9
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00572971
    IMUL EAX,ECX                        ; 00572978
    MOV ECX,0x1                         ; 0057297b
    ADD EAX,ESI                         ; 00572980
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00572982
    MOV dword ptr [ESP + 0x9c],EAX      ; 00572989
    MOV dword ptr [ESP + 0xa0],ECX      ; 00572990
    ADD ESI,ECX                         ; 00572997
    SUB EDI,ECX                         ; 00572999
    MOV dword ptr [ESP + 0xd4],ESI      ; 0057299b
    JMP 0x0057291d                      ; 005729a2
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    MOV dword ptr [ESP + 0x98],EAX      ; 005729a7
        ;   Label: LAB_005729a7
    JMP 0x0057288c                      ; 005729ae
        ;   XREF to: 0057288c (UNCONDITIONAL_JUMP)  ; LAB_0057288c
    MOV dword ptr [ESP + 0xc8],ESI      ; 005729b3
        ;   Label: LAB_005729b3
    JMP 0x0057288c                      ; 005729ba
        ;   XREF to: 0057288c (UNCONDITIONAL_JUMP)  ; LAB_0057288c
    IMUL EDI,EDI,0xa                    ; 005729bf
        ;   Label: LAB_005729bf
    ADD EDI,EAX                         ; 005729c2
    JMP 0x0057288c                      ; 005729c4
        ;   XREF to: 0057288c (UNCONDITIONAL_JUMP)  ; LAB_0057288c
    JBE 0x005729a7                      ; 005729c9
        ;   XREF to: 005729a7 (CONDITIONAL_JUMP)  ; LAB_005729a7
        ;   Label: LAB_005729c9
    CMP EAX,0x68                        ; 005729cb
    JNC 0x005729da                      ; 005729ce
        ;   XREF to: 005729da (CONDITIONAL_JUMP)  ; LAB_005729da
    CMP EAX,0x4e                        ; 005729d0
    JZ 0x005729a7                       ; 005729d3
        ;   XREF to: 005729a7 (CONDITIONAL_JUMP)  ; LAB_005729a7
    JMP 0x00572868                      ; 005729d5
        ;   XREF to: 00572868 (UNCONDITIONAL_JUMP)  ; LAB_00572868
    JBE 0x005729a7                      ; 005729da
        ;   XREF to: 005729a7 (CONDITIONAL_JUMP)  ; LAB_005729a7
        ;   Label: LAB_005729da
    CMP EAX,0x6c                        ; 005729dc
    JZ 0x005729a7                       ; 005729df
        ;   XREF to: 005729a7 (CONDITIONAL_JUMP)  ; LAB_005729a7
    JMP 0x00572868                      ; 005729e1
        ;   XREF to: 00572868 (UNCONDITIONAL_JUMP)  ; LAB_00572868
    JBE 0x005729b3                      ; 005729e6
        ;   XREF to: 005729b3 (CONDITIONAL_JUMP)  ; LAB_005729b3
        ;   Label: LAB_005729e6
    CMP EAX,0x46                        ; 005729e8
    JZ 0x005729a7                       ; 005729eb
        ;   XREF to: 005729a7 (CONDITIONAL_JUMP)  ; LAB_005729a7
    JMP 0x00572868                      ; 005729ed
        ;   XREF to: 00572868 (UNCONDITIONAL_JUMP)  ; LAB_00572868
    MOV DH,byte ptr [EBX + 0x1]         ; 005729f2
        ;   Label: LAB_005729f2
    INC EBX                             ; 005729f5
    TEST DH,DH                          ; 005729f6
    JNZ 0x00572850                      ; 005729f8
        ;   XREF to: 00572850 (CONDITIONAL_JUMP)  ; LAB_00572850
    JMP 0x00572894                      ; 005729fe
        ;   XREF to: 00572894 (UNCONDITIONAL_JUMP)  ; LAB_00572894
    CMP EDI,0x7fffffff                  ; 00572a03
        ;   Label: caseD_63
    JNZ 0x00572a10                      ; 00572a09
        ;   XREF to: 00572a10 (CONDITIONAL_JUMP)  ; LAB_00572a10
    MOV EDI,0x1                         ; 00572a0b
    PUSH 0x20                           ; 00572a10
        ;   Label: LAB_00572a10
    PUSH 0xff                           ; 00572a12
    LEA EAX,[ESP + 0x74]                ; 00572a17
    PUSH EAX                            ; 00572a1b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00572a1c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00572a21
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00572a24
        ;   Label: LAB_00572a24
    XOR ESI,ESI                         ; 00572a2b
    TEST EAX,EAX                        ; 00572a2d
    JNZ 0x00572c5c                      ; 00572a2f
        ;   XREF to: 00572c5c (CONDITIONAL_JUMP)  ; LAB_00572c5c
    TEST EDI,EDI                        ; 00572a35
        ;   Label: LAB_00572a35
    JLE 0x00572c75                      ; 00572a37
        ;   XREF to: 00572c75 (CONDITIONAL_JUMP)  ; LAB_00572c75
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572a3d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572a40
    PUSH ECX                            ; 00572a43
    MOV EAX,dword ptr [EAX]             ; 00572a44
    CALL dword ptr [EAX + 0x4]          ; 00572a46
    ADD ESP,0x4                         ; 00572a49
    DEC EDI                             ; 00572a4c
    MOV dword ptr [ESP + 0xac],EAX      ; 00572a4d
    TEST EAX,EAX                        ; 00572a54
    JL 0x00572c6e                       ; 00572a56
        ;   XREF to: 00572c6e (CONDITIONAL_JUMP)  ; LAB_00572c6e
    MOV EDX,EAX                         ; 00572a5c
    SHR EDX,0x3                         ; 00572a5e
    MOV DL,byte ptr [ESP + EDX*0x1 + 0x6c] ; 00572a61
    AND EDX,0xff                        ; 00572a65
    MOV ECX,EAX                         ; 00572a6b
    MOV dword ptr [ESP + 0xa8],EDX      ; 00572a6d
    AND ECX,0x7                         ; 00572a74
    MOV EDX,0x1                         ; 00572a77
    SHL EDX,CL                          ; 00572a7c
    MOV ECX,EDX                         ; 00572a7e
    TEST dword ptr [ESP + 0xa8],ECX     ; 00572a80
    JZ 0x00572cab                       ; 00572a87
        ;   XREF to: 00572cab (CONDITIONAL_JUMP)  ; LAB_00572cab
    INC dword ptr [ESP + 0xd4]          ; 00572a8d
    TEST ESI,ESI                        ; 00572a94
    JNZ 0x00572ccc                      ; 00572a96
        ;   XREF to: 00572ccc (CONDITIONAL_JUMP)  ; LAB_00572ccc
    MOV dword ptr [ESP + 0xa0],0x1      ; 00572a9c
    JMP 0x00572a35                      ; 00572aa7
        ;   XREF to: 00572a35 (UNCONDITIONAL_JUMP)  ; LAB_00572a35
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572aa9
        ;   Label: caseD_73
    PUSH ECX                            ; 00572aac
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00572aad
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00572ab2
    TEST EAX,EAX                        ; 00572ab5
    JL 0x00572b2b                       ; 00572ab7
        ;   XREF to: 00572b2b (CONDITIONAL_JUMP)  ; LAB_00572b2b
    PUSH 0x20                           ; 00572ab9
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00572abb
    PUSH 0xff                           ; 00572ac2
    ADD ESI,EAX                         ; 00572ac7
    LEA EAX,[ESP + 0x74]                ; 00572ac9
    PUSH EAX                            ; 00572acd
    MOV dword ptr [ESP + 0xe0],ESI      ; 00572ace
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00572ad5
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00572ada
    MOV DH,byte ptr [ESP + 0x70]        ; 00572add
    MOV EAX,0x9                         ; 00572ae1
    AND DH,0xfe                         ; 00572ae6
    MOV dword ptr [ESP + 0xa4],EAX      ; 00572ae9
    MOV byte ptr [ESP + 0x70],DH        ; 00572af0
    MOV CL,byte ptr [ESP + 0xa4]        ; 00572af4
        ;   Label: LAB_00572af4
    MOV DL,0x1                          ; 00572afb
    AND CL,0x7                          ; 00572afd
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572b00
    SHL DL,CL                           ; 00572b07
    SAR EAX,0x3                         ; 00572b09
    NOT DL                              ; 00572b0c
    AND byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 00572b0e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572b12
    INC EAX                             ; 00572b19
    MOV dword ptr [ESP + 0xa4],EAX      ; 00572b1a
    CMP EAX,0xd                         ; 00572b21
    JLE 0x00572af4                      ; 00572b24
        ;   XREF to: 00572af4 (CONDITIONAL_JUMP)  ; LAB_00572af4
    JMP 0x00572a24                      ; 00572b26
        ;   XREF to: 00572a24 (UNCONDITIONAL_JUMP)  ; LAB_00572a24
    MOV dword ptr [ESP + 0xd0],EAX      ; 00572b2b
        ;   Label: LAB_00572b2b
    JMP 0x0057275f                      ; 00572b32
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    CMP byte ptr [EBX],0x5e             ; 00572b37
        ;   Label: caseD_5b
    JNZ 0x00572b71                      ; 00572b3a
        ;   XREF to: 00572b71 (CONDITIONAL_JUMP)  ; LAB_00572b71
    PUSH 0x20                           ; 00572b3c
    PUSH 0xff                           ; 00572b3e
    LEA EAX,[ESP + 0x74]                ; 00572b43
    PUSH EAX                            ; 00572b47
    INC EBX                             ; 00572b48
    XOR ESI,ESI                         ; 00572b49
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00572b4b
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
        ;   Label: LAB_00572b4b
    ADD ESP,0xc                         ; 00572b50
    CMP byte ptr [EBX],0x5d             ; 00572b53
    JZ 0x00572b81                       ; 00572b56
        ;   XREF to: 00572b81 (CONDITIONAL_JUMP)  ; LAB_00572b81
    MOV DH,byte ptr [EBX]               ; 00572b58
        ;   Label: LAB_00572b58
    TEST DH,DH                          ; 00572b5a
    JZ 0x00572a24                       ; 00572b5c
        ;   XREF to: 00572a24 (CONDITIONAL_JUMP)  ; LAB_00572a24
    LEA EAX,[EBX + 0x1]                 ; 00572b62
    CMP DH,0x5d                         ; 00572b65
    JNZ 0x00572b94                      ; 00572b68
        ;   XREF to: 00572b94 (CONDITIONAL_JUMP)  ; LAB_00572b94
    MOV EBX,EAX                         ; 00572b6a
    JMP 0x00572a24                      ; 00572b6c
        ;   XREF to: 00572a24 (UNCONDITIONAL_JUMP)  ; LAB_00572a24
    PUSH 0x20                           ; 00572b71
        ;   Label: LAB_00572b71
    PUSH 0x0                            ; 00572b73
    LEA EAX,[ESP + 0x74]                ; 00572b75
    PUSH EAX                            ; 00572b79
    MOV ESI,0x1                         ; 00572b7a
    JMP 0x00572b4b                      ; 00572b7f
        ;   XREF to: 00572b4b (UNCONDITIONAL_JUMP)  ; LAB_00572b4b
    TEST ESI,ESI                        ; 00572b81
        ;   Label: LAB_00572b81
    JZ 0x00572b8d                       ; 00572b83
        ;   XREF to: 00572b8d (CONDITIONAL_JUMP)  ; LAB_00572b8d
    OR byte ptr [ESP + 0x77],0x20       ; 00572b85
    INC EBX                             ; 00572b8a
        ;   Label: LAB_00572b8a
    JMP 0x00572b58                      ; 00572b8b
        ;   XREF to: 00572b58 (UNCONDITIONAL_JUMP)  ; LAB_00572b58
    AND byte ptr [ESP + 0x77],0xdf      ; 00572b8d
        ;   Label: LAB_00572b8d
    JMP 0x00572b8a                      ; 00572b92
        ;   XREF to: 00572b8a (UNCONDITIONAL_JUMP)  ; LAB_00572b8a
    CMP DH,0x2d                         ; 00572b94
        ;   Label: LAB_00572b94
    JNZ 0x00572c20                      ; 00572b97
        ;   XREF to: 00572c20 (CONDITIONAL_JUMP)  ; LAB_00572c20
    XOR EDX,EDX                         ; 00572b9d
    MOV DL,byte ptr [EBX + 0x1]         ; 00572b9f
    MOV EBX,EAX                         ; 00572ba2
    TEST EDX,EDX                        ; 00572ba4
    JZ 0x00572a24                       ; 00572ba6
        ;   XREF to: 00572a24 (CONDITIONAL_JUMP)  ; LAB_00572a24
    MOV AL,byte ptr [EAX + -0x2]        ; 00572bac
    AND EAX,0xff                        ; 00572baf
    CMP EDX,EAX                         ; 00572bb4
    JGE 0x00572bc8                      ; 00572bb6
        ;   XREF to: 00572bc8 (CONDITIONAL_JUMP)  ; LAB_00572bc8
    MOV dword ptr [ESP + 0xa4],EDX      ; 00572bb8
    MOV EDX,EAX                         ; 00572bbf
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572bc1
    MOV dword ptr [ESP + 0xa4],EAX      ; 00572bc8
        ;   Label: LAB_00572bc8
    CMP EAX,EDX                         ; 00572bcf
    JG 0x00572b58                       ; 00572bd1
        ;   XREF to: 00572b58 (CONDITIONAL_JUMP)  ; LAB_00572b58
    MOV CL,byte ptr [ESP + 0xa4]        ; 00572bd3
        ;   Label: LAB_00572bd3
    MOV AL,0x1                          ; 00572bda
    AND CL,0x7                          ; 00572bdc
    SHL AL,CL                           ; 00572bdf
    MOV CL,AL                           ; 00572be1
    TEST ESI,ESI                        ; 00572be3
    JZ 0x00572c0e                       ; 00572be5
        ;   XREF to: 00572c0e (CONDITIONAL_JUMP)  ; LAB_00572c0e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572be7
    SHR EAX,0x3                         ; 00572bee
    OR byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 00572bf1
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572bf5
        ;   Label: LAB_00572bf5
    INC EAX                             ; 00572bfc
    MOV dword ptr [ESP + 0xa4],EAX      ; 00572bfd
    CMP EDX,EAX                         ; 00572c04
    JL 0x00572b58                       ; 00572c06
        ;   XREF to: 00572b58 (CONDITIONAL_JUMP)  ; LAB_00572b58
    JMP 0x00572bd3                      ; 00572c0c
        ;   XREF to: 00572bd3 (UNCONDITIONAL_JUMP)  ; LAB_00572bd3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00572c0e
        ;   Label: LAB_00572c0e
    SAR EAX,0x3                         ; 00572c15
    NOT CL                              ; 00572c18
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 00572c1a
    JMP 0x00572bf5                      ; 00572c1e
        ;   XREF to: 00572bf5 (UNCONDITIONAL_JUMP)  ; LAB_00572bf5
    TEST ESI,ESI                        ; 00572c20
        ;   Label: LAB_00572c20
    JZ 0x00572c3e                       ; 00572c22
        ;   XREF to: 00572c3e (CONDITIONAL_JUMP)  ; LAB_00572c3e
    XOR EAX,EAX                         ; 00572c24
    MOV CL,DH                           ; 00572c26
    MOV AL,DH                           ; 00572c28
    AND CL,0x7                          ; 00572c2a
    MOV DL,0x1                          ; 00572c2d
    SHR EAX,0x3                         ; 00572c2f
    SHL DL,CL                           ; 00572c32
    OR byte ptr [ESP + EAX*0x1 + 0x6c],DL ; 00572c34
    INC EBX                             ; 00572c38
    JMP 0x00572b58                      ; 00572c39
        ;   XREF to: 00572b58 (UNCONDITIONAL_JUMP)  ; LAB_00572b58
    XOR EAX,EAX                         ; 00572c3e
        ;   Label: LAB_00572c3e
    MOV CL,DH                           ; 00572c40
    MOV AL,DH                           ; 00572c42
    AND CL,0x7                          ; 00572c44
    MOV DL,0x1                          ; 00572c47
    SHL DL,CL                           ; 00572c49
    MOV CL,DL                           ; 00572c4b
    SAR EAX,0x3                         ; 00572c4d
    NOT CL                              ; 00572c50
    AND byte ptr [ESP + EAX*0x1 + 0x6c],CL ; 00572c52
    INC EBX                             ; 00572c56
    JMP 0x00572b58                      ; 00572c57
        ;   XREF to: 00572b58 (UNCONDITIONAL_JUMP)  ; LAB_00572b58
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00572c5c
        ;   Label: LAB_00572c5c
    MOV EDX,dword ptr [EAX]             ; 00572c5f
    ADD EDX,0x4                         ; 00572c61
    MOV dword ptr [EAX],EDX             ; 00572c64
    MOV ESI,dword ptr [EDX + -0x4]      ; 00572c66
    JMP 0x00572a35                      ; 00572c69
        ;   XREF to: 00572a35 (UNCONDITIONAL_JUMP)  ; LAB_00572a35
    MOV dword ptr [ESP + 0xd0],EAX      ; 00572c6e
        ;   Label: LAB_00572c6e
    CMP dword ptr [ESP + 0xb0],0x63     ; 00572c75
        ;   Label: LAB_00572c75
    JZ 0x00572c86                       ; 00572c7d
        ;   XREF to: 00572c86 (CONDITIONAL_JUMP)  ; LAB_00572c86
    TEST ESI,ESI                        ; 00572c7f
    JZ 0x00572c86                       ; 00572c81
        ;   XREF to: 00572c86 (CONDITIONAL_JUMP)  ; LAB_00572c86
    MOV byte ptr [ESI],0x0              ; 00572c83
    CMP dword ptr [ESP + 0xa0],0x0      ; 00572c86
        ;   Label: LAB_00572c86
    JZ 0x0057275f                       ; 00572c8e
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    TEST ESI,ESI                        ; 00572c94
    JZ 0x00572c9f                       ; 00572c96
        ;   XREF to: 00572c9f (CONDITIONAL_JUMP)  ; LAB_00572c9f
    INC dword ptr [ESP + 0xc0]          ; 00572c98
    INC dword ptr [ESP + 0xbc]          ; 00572c9f
        ;   Label: LAB_00572c9f
    JMP 0x0057275f                      ; 00572ca6
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    PUSH EAX                            ; 00572cab
        ;   Label: LAB_00572cab
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572cac
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572caf
    PUSH ECX                            ; 00572cb2
    MOV EDX,dword ptr [EDX]             ; 00572cb3
    CALL dword ptr [EDX + 0x8]          ; 00572cb5
    ADD ESP,0x8                         ; 00572cb8
    TEST EAX,EAX                        ; 00572cbb
    JNZ 0x00572c75                      ; 00572cbd
        ;   XREF to: 00572c75 (CONDITIONAL_JUMP)  ; LAB_00572c75
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572cbf
    JMP 0x00572c75                      ; 00572cca
        ;   XREF to: 00572c75 (UNCONDITIONAL_JUMP)  ; LAB_00572c75
    INC ESI                             ; 00572ccc
        ;   Label: LAB_00572ccc
    MOV AL,byte ptr [ESP + 0xac]        ; 00572ccd
    MOV byte ptr [ESI + -0x1],AL        ; 00572cd4
    MOV dword ptr [ESP + 0xa0],0x1      ; 00572cd7
    JMP 0x00572a35                      ; 00572ce2
        ;   XREF to: 00572a35 (UNCONDITIONAL_JUMP)  ; LAB_00572a35
    MOV ESI,dword ptr [EBP + 0x14]      ; 00572ce7
        ;   Label: caseD_69
    PUSH ESI                            ; 00572cea
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00572ceb
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00572cf0
    TEST EAX,EAX                        ; 00572cf3
    JL 0x00572d9e                       ; 00572cf5
        ;   XREF to: 00572d9e (CONDITIONAL_JUMP)  ; LAB_00572d9e
    ADD dword ptr [ESP + 0xd4],EAX      ; 00572cfb
    TEST EDI,EDI                        ; 00572d02
    JLE 0x00572d40                      ; 00572d04
        ;   XREF to: 00572d40 (CONDITIONAL_JUMP)  ; LAB_00572d40
    PUSH ESI                            ; 00572d06
    MOV EAX,dword ptr [ESI]             ; 00572d07
    CALL dword ptr [EAX + 0x4]          ; 00572d09
    ADD ESP,0x4                         ; 00572d0c
    TEST EAX,EAX                        ; 00572d0f
    JL 0x00572d9e                       ; 00572d11
        ;   XREF to: 00572d9e (CONDITIONAL_JUMP)  ; LAB_00572d9e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00572d17
    LEA ECX,[EDI + -0x1]                ; 00572d1e
    INC EDX                             ; 00572d21
    CMP EAX,0x2d                        ; 00572d22
    JNZ 0x00572daa                      ; 00572d25
        ;   XREF to: 00572daa (CONDITIONAL_JUMP)  ; LAB_00572daa
    MOV EAX,0x1                         ; 00572d2b
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572d30
    MOV EDI,ECX                         ; 00572d37
    MOV dword ptr [ESP + 0xc4],EAX      ; 00572d39
    TEST EDI,EDI                        ; 00572d40
        ;   Label: LAB_00572d40
    JLE 0x0057291d                      ; 00572d42
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572d48
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572d4b
    PUSH EDX                            ; 00572d4e
    MOV EAX,dword ptr [EAX]             ; 00572d4f
    CALL dword ptr [EAX + 0x4]          ; 00572d51
    ADD ESP,0x4                         ; 00572d54
    TEST EAX,EAX                        ; 00572d57
    JL 0x00572d9e                       ; 00572d59
        ;   XREF to: 00572d9e (CONDITIONAL_JUMP)  ; LAB_00572d9e
    CMP EAX,0x30                        ; 00572d5b
    JNZ 0x00572e39                      ; 00572d5e
        ;   XREF to: 00572e39 (CONDITIONAL_JUMP)  ; LAB_00572e39
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00572d64
    MOV EAX,0x8                         ; 00572d6b
    DEC EDI                             ; 00572d70
    INC EDX                             ; 00572d71
    MOV dword ptr [ESP + 0xcc],EAX      ; 00572d72
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572d79
    TEST EDI,EDI                        ; 00572d80
    JLE 0x0057291d                      ; 00572d82
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572d88
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572d8b
    PUSH ECX                            ; 00572d8e
    MOV EAX,dword ptr [EAX]             ; 00572d8f
    CALL dword ptr [EAX + 0x4]          ; 00572d91
    MOV ESI,EAX                         ; 00572d94
    ADD ESP,0x4                         ; 00572d96
    CMP EAX,-0x1                        ; 00572d99
    JGE 0x00572ddc                      ; 00572d9c
        ;   XREF to: 00572ddc (CONDITIONAL_JUMP)  ; LAB_00572ddc
    MOV dword ptr [ESP + 0xd0],EAX      ; 00572d9e
        ;   Label: LAB_00572d9e
    JMP 0x0057275f                      ; 00572da5
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    CMP EAX,0x2b                        ; 00572daa
        ;   Label: LAB_00572daa
    JNZ 0x00572dba                      ; 00572dad
        ;   XREF to: 00572dba (CONDITIONAL_JUMP)  ; LAB_00572dba
    MOV EDI,ECX                         ; 00572daf
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572db1
    JMP 0x00572d40                      ; 00572db8
        ;   XREF to: 00572d40 (UNCONDITIONAL_JUMP)  ; LAB_00572d40
    PUSH EAX                            ; 00572dba
        ;   Label: LAB_00572dba
    MOV EDX,dword ptr [ESI]             ; 00572dbb
    PUSH ESI                            ; 00572dbd
    CALL dword ptr [EDX + 0x8]          ; 00572dbe
    ADD ESP,0x8                         ; 00572dc1
    TEST EAX,EAX                        ; 00572dc4
    JNZ 0x00572d40                      ; 00572dc6
        ;   XREF to: 00572d40 (CONDITIONAL_JUMP)  ; LAB_00572d40
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572dcc
    JMP 0x0057275f                      ; 00572dd7
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    JLE 0x0057291d                      ; 00572ddc
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
        ;   Label: LAB_00572ddc
    PUSH EAX                            ; 00572de2
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00572de3
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 00572de8
    CMP EAX,0x58                        ; 00572deb
    JNZ 0x00572e11                      ; 00572dee
        ;   XREF to: 00572e11 (CONDITIONAL_JUMP)  ; LAB_00572e11
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00572df0
    MOV EAX,0x10                        ; 00572df7
    DEC EDI                             ; 00572dfc
    INC EDX                             ; 00572dfd
    MOV dword ptr [ESP + 0xcc],EAX      ; 00572dfe
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572e05
    JMP 0x0057291d                      ; 00572e0c
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572e11
        ;   Label: LAB_00572e11
    PUSH ESI                            ; 00572e14
    MOV ESI,dword ptr [EBP + 0x14]      ; 00572e15
    MOV EAX,dword ptr [EAX]             ; 00572e18
    PUSH ESI                            ; 00572e1a
    CALL dword ptr [EAX + 0x8]          ; 00572e1b
    ADD ESP,0x8                         ; 00572e1e
    TEST EAX,EAX                        ; 00572e21
    JNZ 0x0057291d                      ; 00572e23
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572e29
    JMP 0x0057275f                      ; 00572e34
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    PUSH EAX                            ; 00572e39
        ;   Label: LAB_00572e39
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572e3a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572e3d
    PUSH ECX                            ; 00572e40
    MOV EDX,dword ptr [EDX]             ; 00572e41
    CALL dword ptr [EDX + 0x8]          ; 00572e43
    ADD ESP,0x8                         ; 00572e46
    TEST EAX,EAX                        ; 00572e49
    JNZ 0x0057291d                      ; 00572e4b
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572e51
    JMP 0x0057275f                      ; 00572e5c
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572e61
        ;   Label: caseD_58
    PUSH ECX                            ; 00572e64
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00572e65
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00572e6a
    TEST EAX,EAX                        ; 00572e6d
    JL 0x00572f24                       ; 00572e6f
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00572e75
    ADD ESI,EAX                         ; 00572e7c
    MOV dword ptr [ESP + 0xd4],ESI      ; 00572e7e
    TEST EDI,EDI                        ; 00572e85
    JLE 0x00572ec4                      ; 00572e87
        ;   XREF to: 00572ec4 (CONDITIONAL_JUMP)  ; LAB_00572ec4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572e89
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572e8c
    PUSH EDX                            ; 00572e8f
    MOV EAX,dword ptr [EAX]             ; 00572e90
    CALL dword ptr [EAX + 0x4]          ; 00572e92
    ADD ESP,0x4                         ; 00572e95
    TEST EAX,EAX                        ; 00572e98
    JL 0x00572f24                       ; 00572e9a
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    LEA ECX,[ESI + 0x1]                 ; 00572ea0
    LEA EDX,[EDI + -0x1]                ; 00572ea3
    CMP EAX,0x2d                        ; 00572ea6
    JNZ 0x00572f30                      ; 00572ea9
        ;   XREF to: 00572f30 (CONDITIONAL_JUMP)  ; LAB_00572f30
    MOV EDI,0x1                         ; 00572eaf
    MOV dword ptr [ESP + 0xd4],ECX      ; 00572eb4
    MOV dword ptr [ESP + 0xc4],EDI      ; 00572ebb
    MOV EDI,EDX                         ; 00572ec2
    TEST EDI,EDI                        ; 00572ec4
        ;   Label: LAB_00572ec4
    JLE 0x00572f88                      ; 00572ec6
        ;   XREF to: 00572f88 (CONDITIONAL_JUMP)  ; LAB_00572f88
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572ecc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572ecf
    PUSH EDX                            ; 00572ed2
    MOV EAX,dword ptr [EAX]             ; 00572ed3
    CALL dword ptr [EAX + 0x4]          ; 00572ed5
    ADD ESP,0x4                         ; 00572ed8
    TEST EAX,EAX                        ; 00572edb
    JL 0x00572f24                       ; 00572edd
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    CMP EAX,0x30                        ; 00572edf
    JNZ 0x00572fbc                      ; 00572ee2
        ;   XREF to: 00572fbc (CONDITIONAL_JUMP)  ; LAB_00572fbc
    MOV EAX,0x1                         ; 00572ee8
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00572eed
    MOV dword ptr [ESP + 0xa0],EAX      ; 00572ef4
    ADD EDX,EAX                         ; 00572efb
    SUB EDI,EAX                         ; 00572efd
    MOV dword ptr [ESP + 0xd4],EDX      ; 00572eff
    TEST EDI,EDI                        ; 00572f06
    JLE 0x00572f88                      ; 00572f08
        ;   XREF to: 00572f88 (CONDITIONAL_JUMP)  ; LAB_00572f88
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572f0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572f11
    PUSH ECX                            ; 00572f14
    MOV EAX,dword ptr [EAX]             ; 00572f15
    CALL dword ptr [EAX + 0x4]          ; 00572f17
    MOV ESI,EAX                         ; 00572f1a
    ADD ESP,0x4                         ; 00572f1c
    CMP EAX,-0x1                        ; 00572f1f
    JGE 0x00572f68                      ; 00572f22
        ;   XREF to: 00572f68 (CONDITIONAL_JUMP)  ; LAB_00572f68
    MOV dword ptr [ESP + 0xd0],EAX      ; 00572f24
        ;   Label: LAB_00572f24
    JMP 0x0057275f                      ; 00572f2b
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    CMP EAX,0x2b                        ; 00572f30
        ;   Label: LAB_00572f30
    JNZ 0x00572f40                      ; 00572f33
        ;   XREF to: 00572f40 (CONDITIONAL_JUMP)  ; LAB_00572f40
    MOV EDI,EDX                         ; 00572f35
    MOV dword ptr [ESP + 0xd4],ECX      ; 00572f37
    JMP 0x00572ec4                      ; 00572f3e
        ;   XREF to: 00572ec4 (UNCONDITIONAL_JUMP)  ; LAB_00572ec4
    PUSH EAX                            ; 00572f40
        ;   Label: LAB_00572f40
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572f41
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572f44
    PUSH ECX                            ; 00572f47
    MOV EDX,dword ptr [EDX]             ; 00572f48
    CALL dword ptr [EDX + 0x8]          ; 00572f4a
    ADD ESP,0x8                         ; 00572f4d
    TEST EAX,EAX                        ; 00572f50
    JNZ 0x00572ec4                      ; 00572f52
        ;   XREF to: 00572ec4 (CONDITIONAL_JUMP)  ; LAB_00572ec4
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572f58
    JMP 0x0057275f                      ; 00572f63
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    JLE 0x00572f88                      ; 00572f68
        ;   XREF to: 00572f88 (CONDITIONAL_JUMP)  ; LAB_00572f88
        ;   Label: LAB_00572f68
    PUSH EAX                            ; 00572f6a
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 00572f6b
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 00572f70
    CMP EAX,0x58                        ; 00572f73
    JNZ 0x00572f98                      ; 00572f76
        ;   XREF to: 00572f98 (CONDITIONAL_JUMP)  ; LAB_00572f98
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00572f78
    INC EAX                             ; 00572f7f
    DEC EDI                             ; 00572f80
    MOV dword ptr [ESP + 0xd4],EAX      ; 00572f81
    MOV dword ptr [ESP + 0xcc],0x10     ; 00572f88
        ;   Label: LAB_00572f88
    JMP 0x0057291d                      ; 00572f93
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00572f98
        ;   Label: LAB_00572f98
    PUSH ESI                            ; 00572f9b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00572f9c
    MOV EAX,dword ptr [EAX]             ; 00572f9f
    PUSH ESI                            ; 00572fa1
    CALL dword ptr [EAX + 0x8]          ; 00572fa2
    ADD ESP,0x8                         ; 00572fa5
    TEST EAX,EAX                        ; 00572fa8
    JNZ 0x00572f88                      ; 00572faa
        ;   XREF to: 00572f88 (CONDITIONAL_JUMP)  ; LAB_00572f88
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572fac
    JMP 0x0057275f                      ; 00572fb7
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    PUSH EAX                            ; 00572fbc
        ;   Label: LAB_00572fbc
    MOV ECX,dword ptr [EBP + 0x14]      ; 00572fbd
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572fc0
    PUSH ECX                            ; 00572fc3
    MOV EDX,dword ptr [EDX]             ; 00572fc4
    CALL dword ptr [EDX + 0x8]          ; 00572fc6
    ADD ESP,0x8                         ; 00572fc9
    TEST EAX,EAX                        ; 00572fcc
    JNZ 0x00572f88                      ; 00572fce
        ;   XREF to: 00572f88 (CONDITIONAL_JUMP)  ; LAB_00572f88
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00572fd0
    JMP 0x0057275f                      ; 00572fdb
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00572fe0
        ;   Label: caseD_50
    PUSH EDX                            ; 00572fe3
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00572fe4
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00572fe9
    TEST EAX,EAX                        ; 00572fec
    JL 0x00572f24                       ; 00572fee
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00572ff4
    MOV ESI,0x10                        ; 00572ffb
    ADD ECX,EAX                         ; 00573000
    MOV dword ptr [ESP + 0xcc],ESI      ; 00573002
    MOV dword ptr [ESP + 0xd4],ECX      ; 00573009
    JMP 0x0057291d                      ; 00573010
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    MOV ECX,dword ptr [EBP + 0x14]      ; 00573015
        ;   Label: caseD_55
    PUSH ECX                            ; 00573018
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00573019
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 0057301e
    TEST EAX,EAX                        ; 00573021
    JL 0x00572f24                       ; 00573023
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00573029
    ADD ESI,EAX                         ; 00573030
    MOV EAX,0xa                         ; 00573032
    MOV dword ptr [ESP + 0xd4],ESI      ; 00573037
    MOV dword ptr [ESP + 0xcc],EAX      ; 0057303e
    JMP 0x0057291d                      ; 00573045
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    MOV dword ptr [ESP + 0xcc],0x8      ; 0057304a
        ;   Label: caseD_4f
    JMP 0x005728be                      ; 00573055
        ;   XREF to: 005728be (UNCONDITIONAL_JUMP)  ; LAB_005728be
    CMP EAX,0x2b                        ; 0057305a
        ;   Label: LAB_0057305a
    JNZ 0x0057306d                      ; 0057305d
        ;   XREF to: 0057306d (CONDITIONAL_JUMP)  ; LAB_0057306d
    MOV EDI,EDX                         ; 0057305f
    MOV dword ptr [ESP + 0xd4],ECX      ; 00573061
    JMP 0x0057291d                      ; 00573068
        ;   XREF to: 0057291d (UNCONDITIONAL_JUMP)  ; LAB_0057291d
    PUSH EAX                            ; 0057306d
        ;   Label: LAB_0057306d
    MOV EDX,dword ptr [ESI]             ; 0057306e
    PUSH ESI                            ; 00573070
    CALL dword ptr [EDX + 0x8]          ; 00573071
    ADD ESP,0x8                         ; 00573074
    TEST EAX,EAX                        ; 00573077
    JNZ 0x0057291d                      ; 00573079
        ;   XREF to: 0057291d (CONDITIONAL_JUMP)  ; LAB_0057291d
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057307f
    JMP 0x0057275f                      ; 0057308a
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057308f
        ;   Label: LAB_0057308f
    CMP dword ptr [ESP + 0xd0],-0x1     ; 00573096
        ;   Label: LAB_00573096
    JL 0x0057275f                       ; 0057309e
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    CMP dword ptr [ESP + 0xa0],0x0      ; 005730a4
    JZ 0x0057275f                       ; 005730ac
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005730b2
    INC EAX                             ; 005730b9
    MOV EDX,dword ptr [ESP + 0xc8]      ; 005730ba
    MOV dword ptr [ESP + 0xbc],EAX      ; 005730c1
    TEST EDX,EDX                        ; 005730c8
    JZ 0x0057275f                       ; 005730ca
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    CMP dword ptr [ESP + 0xc4],0x0      ; 005730d0
    JZ 0x005730e1                       ; 005730d8
        ;   XREF to: 005730e1 (CONDITIONAL_JUMP)  ; LAB_005730e1
    NEG dword ptr [ESP + 0x9c]          ; 005730da
    MOV EDI,dword ptr [ESP + 0x98]      ; 005730e1
        ;   Label: LAB_005730e1
    CMP EDI,0x48                        ; 005730e8
    JNC 0x0057320d                      ; 005730eb
        ;   XREF to: 0057320d (CONDITIONAL_JUMP)  ; LAB_0057320d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005730f1
        ;   Label: LAB_005730f1
    MOV ECX,dword ptr [EAX]             ; 005730f4
    ADD ECX,0x4                         ; 005730f6
    MOV dword ptr [EAX],ECX             ; 005730f9
    MOV EAX,dword ptr [ECX + -0x4]      ; 005730fb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005730fe
        ;   Label: LAB_005730fe
    MOV dword ptr [EAX],EDX             ; 00573105
    INC dword ptr [ESP + 0xc0]          ; 00573107
    JMP 0x0057275f                      ; 0057310e
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV ESI,0x1                         ; 00573113
        ;   Label: caseD_31
    JMP 0x00572962                      ; 00573118
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x2                         ; 0057311d
        ;   Label: caseD_32
    JMP 0x00572962                      ; 00573122
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x3                         ; 00573127
        ;   Label: caseD_33
    JMP 0x00572962                      ; 0057312c
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x4                         ; 00573131
        ;   Label: caseD_34
    JMP 0x00572962                      ; 00573136
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x5                         ; 0057313b
        ;   Label: caseD_35
    JMP 0x00572962                      ; 00573140
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x6                         ; 00573145
        ;   Label: caseD_36
    JMP 0x00572962                      ; 0057314a
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x7                         ; 0057314f
        ;   Label: caseD_37
    JMP 0x00572962                      ; 00573154
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x8                         ; 00573159
        ;   Label: caseD_38
    JMP 0x00572962                      ; 0057315e
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0x9                         ; 00573163
        ;   Label: caseD_39
    JMP 0x00572962                      ; 00573168
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xa                         ; 0057316d
        ;   Label: caseD_41
    JMP 0x00572962                      ; 00573172
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xb                         ; 00573177
        ;   Label: caseD_42
    JMP 0x00572962                      ; 0057317c
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xc                         ; 00573181
        ;   Label: caseD_43
    JMP 0x00572962                      ; 00573186
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xd                         ; 0057318b
        ;   Label: caseD_44
    JMP 0x00572962                      ; 00573190
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xe                         ; 00573195
        ;   Label: caseD_45
    JMP 0x00572962                      ; 0057319a
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV ESI,0xf                         ; 0057319f
        ;   Label: caseD_46
    JMP 0x00572962                      ; 005731a4
        ;   XREF to: 00572962 (UNCONDITIONAL_JUMP)  ; caseD_40
    MOV EDI,dword ptr [ESP + 0xa4]      ; 005731a9
        ;   Label: LAB_005731a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005731b0
    PUSH EDI                            ; 005731b3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005731b4
    MOV EAX,dword ptr [EAX]             ; 005731b7
    PUSH EDX                            ; 005731b9
    CALL dword ptr [EAX + 0x8]          ; 005731ba
    ADD ESP,0x8                         ; 005731bd
    TEST EAX,EAX                        ; 005731c0
    JNZ 0x00573096                      ; 005731c2
        ;   XREF to: 00573096 (CONDITIONAL_JUMP)  ; LAB_00573096
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005731c8
    JMP 0x0057275f                      ; 005731d3
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005731d8
        ;   Label: LAB_005731d8
    MOV EDX,dword ptr [EAX]             ; 005731db
    ADD EDX,0x4                         ; 005731dd
    MOV dword ptr [EAX],EDX             ; 005731e0
    MOV EAX,dword ptr [EDX + -0x4]      ; 005731e2
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005731e5
    MOV word ptr [EAX],DX               ; 005731ec
    INC dword ptr [ESP + 0xc0]          ; 005731ef
    JMP 0x0057275f                      ; 005731f6
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005731fb
        ;   Label: LAB_005731fb
    MOV EDI,dword ptr [EAX]             ; 005731fe
    ADD EDI,0x4                         ; 00573200
    MOV dword ptr [EAX],EDI             ; 00573203
    MOV EAX,dword ptr [EDI + -0x4]      ; 00573205
    JMP 0x005730fe                      ; 00573208
        ;   XREF to: 005730fe (UNCONDITIONAL_JUMP)  ; LAB_005730fe
    JBE 0x005731d8                      ; 0057320d
        ;   XREF to: 005731d8 (CONDITIONAL_JUMP)  ; LAB_005731d8
        ;   Label: LAB_0057320d
    CMP EDI,0x68                        ; 0057320f
    JC 0x005730f1                       ; 00573212
        ;   XREF to: 005730f1 (CONDITIONAL_JUMP)  ; LAB_005730f1
    JBE 0x005731d8                      ; 00573218
        ;   XREF to: 005731d8 (CONDITIONAL_JUMP)  ; LAB_005731d8
    CMP EDI,0x6c                        ; 0057321a
    JZ 0x005731fb                       ; 0057321d
        ;   XREF to: 005731fb (CONDITIONAL_JUMP)  ; LAB_005731fb
    JMP 0x005730f1                      ; 0057321f
        ;   XREF to: 005730f1 (UNCONDITIONAL_JUMP)  ; LAB_005730f1
    CMP dword ptr [ESP + 0xc8],0x0      ; 00573224
        ;   Label: caseD_6e
    JZ 0x0057275f                       ; 0057322c
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00573232
    MOV ECX,dword ptr [EAX]             ; 00573235
    ADD ECX,0x4                         ; 00573237
    MOV dword ptr [EAX],ECX             ; 0057323a
    MOV EAX,dword ptr [ECX + -0x4]      ; 0057323c
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0057323f
    MOV dword ptr [EAX],EDX             ; 00573246
    JMP 0x0057275f                      ; 00573248
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057324d
        ;   Label: caseD_45
    PUSH EDX                            ; 00573250
    CALL support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830 ; 00573251
        ;   XREF to: 00573830 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_skipWhitespace_FUN_00573830(CInStream * this_ptr)
    ADD ESP,0x4                         ; 00573256
    TEST EAX,EAX                        ; 00573259
    JL 0x00572f24                       ; 0057325b
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00573261
    ADD ECX,EAX                         ; 00573268
    LEA ESI,[ESP + 0x8]                 ; 0057326a
    MOV dword ptr [ESP + 0xd4],ECX      ; 0057326e
    CMP EDI,0x63                        ; 00573275
    JBE 0x0057333d                      ; 00573278
        ;   XREF to: 0057333d (CONDITIONAL_JUMP)  ; LAB_0057333d
    MOV EDI,0x63                        ; 0057327e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00573283
        ;   Label: LAB_00573283
    MOV EAX,dword ptr [EBP + 0x14]      ; 00573286
    PUSH EDX                            ; 00573289
    MOV EAX,dword ptr [EAX]             ; 0057328a
    CALL dword ptr [EAX + 0x4]          ; 0057328c
    ADD ESP,0x4                         ; 0057328f
    MOV dword ptr [ESP + 0xa4],EAX      ; 00573292
    TEST EAX,EAX                        ; 00573299
    JL 0x00572f24                       ; 0057329b
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005732a1
    INC EDX                             ; 005732a8
    MOV dword ptr [ESP + 0xb4],EDX      ; 005732a9
    LEA EDX,[EDI + -0x1]                ; 005732b0
    CMP EAX,0x2d                        ; 005732b3
    JNZ 0x00573347                      ; 005732b6
        ;   XREF to: 00573347 (CONDITIONAL_JUMP)  ; LAB_00573347
    INC ESI                             ; 005732bc
    MOV AL,byte ptr [ESP + 0xa4]        ; 005732bd
    MOV byte ptr [ESI + -0x1],AL        ; 005732c4
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005732c7
        ;   Label: LAB_005732c7
    MOV EDI,EDX                         ; 005732ce
    MOV dword ptr [ESP + 0xd4],EAX      ; 005732d0
        ;   Label: LAB_005732d0
    TEST EDI,EDI                        ; 005732d7
        ;   Label: LAB_005732d7
    JLE 0x0057337f                      ; 005732d9
        ;   XREF to: 0057337f (CONDITIONAL_JUMP)  ; LAB_0057337f
    MOV ECX,dword ptr [EBP + 0x14]      ; 005732df
    MOV EAX,dword ptr [EBP + 0x14]      ; 005732e2
    PUSH ECX                            ; 005732e5
    MOV EAX,dword ptr [EAX]             ; 005732e6
    CALL dword ptr [EAX + 0x4]          ; 005732e8
    ADD ESP,0x4                         ; 005732eb
    MOV dword ptr [ESP + 0xa4],EAX      ; 005732ee
    TEST EAX,EAX                        ; 005732f5
    JL 0x00573378                       ; 005732f7
        ;   XREF to: 00573378 (CONDITIONAL_JUMP)  ; LAB_00573378
    MOV CL,byte ptr [ESP + 0xa4]        ; 005732fd
    INC CL                              ; 00573304
    AND ECX,0xff                        ; 00573306
    TEST byte ptr [ECX + 0x6074b8],0x20 ; 0057330c | DAT_006074b8
    JZ 0x00573566                       ; 00573313
        ;   XREF to: 00573566 (CONDITIONAL_JUMP)  ; LAB_00573566
    MOV ECX,0x1                         ; 00573319
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057331e
    MOV dword ptr [ESP + 0xa0],ECX      ; 00573325
    MOV byte ptr [ESI],AL               ; 0057332c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057332e
    SUB EDI,ECX                         ; 00573335
    ADD EAX,ECX                         ; 00573337
    ADD ESI,ECX                         ; 00573339
    JMP 0x005732d0                      ; 0057333b
        ;   XREF to: 005732d0 (UNCONDITIONAL_JUMP)  ; LAB_005732d0
    TEST EDI,EDI                        ; 0057333d
        ;   Label: LAB_0057333d
    JG 0x00573283                       ; 0057333f
        ;   XREF to: 00573283 (CONDITIONAL_JUMP)  ; LAB_00573283
    JMP 0x005732d7                      ; 00573345
        ;   XREF to: 005732d7 (UNCONDITIONAL_JUMP)  ; LAB_005732d7
    CMP EAX,0x2b                        ; 00573347
        ;   Label: LAB_00573347
    JZ 0x005732c7                       ; 0057334a
        ;   XREF to: 005732c7 (CONDITIONAL_JUMP)  ; LAB_005732c7
    PUSH EAX                            ; 00573350
    MOV ECX,dword ptr [EBP + 0x14]      ; 00573351
    MOV EDX,dword ptr [EBP + 0x14]      ; 00573354
    PUSH ECX                            ; 00573357
    MOV EDX,dword ptr [EDX]             ; 00573358
    CALL dword ptr [EDX + 0x8]          ; 0057335a
    ADD ESP,0x8                         ; 0057335d
    TEST EAX,EAX                        ; 00573360
    JNZ 0x005732d7                      ; 00573362
        ;   XREF to: 005732d7 (CONDITIONAL_JUMP)  ; LAB_005732d7
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 00573368
    JMP 0x0057275f                      ; 00573373
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV dword ptr [ESP + 0xd0],EAX      ; 00573378
        ;   Label: LAB_00573378
    CMP dword ptr [ESP + 0xd0],-0x1     ; 0057337f
        ;   Label: LAB_0057337f
    JL 0x0057275f                       ; 00573387
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    TEST EDI,EDI                        ; 0057338d
    JLE 0x00573442                      ; 0057338f
        ;   XREF to: 00573442 (CONDITIONAL_JUMP)  ; LAB_00573442
    MOV ECX,dword ptr [EBP + 0x14]      ; 00573395
    MOV EAX,dword ptr [EBP + 0x14]      ; 00573398
    PUSH ECX                            ; 0057339b
    MOV EAX,dword ptr [EAX]             ; 0057339c
    CALL dword ptr [EAX + 0x4]          ; 0057339e
    ADD ESP,0x4                         ; 005733a1
    MOV dword ptr [ESP + 0xa4],EAX      ; 005733a4
    TEST EAX,EAX                        ; 005733ab
    JL 0x0057358e                       ; 005733ad
        ;   XREF to: 0057358e (CONDITIONAL_JUMP)  ; LAB_0057358e
    CMP EAX,0x2e                        ; 005733b3
    JNZ 0x005735c2                      ; 005733b6
        ;   XREF to: 005735c2 (CONDITIONAL_JUMP)  ; LAB_005735c2
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005733bc
    MOV AL,byte ptr [ESP + 0xa4]        ; 005733c3
    INC ESI                             ; 005733ca
    DEC EDI                             ; 005733cb
    INC ECX                             ; 005733cc
    MOV byte ptr [ESI + -0x1],AL        ; 005733cd
    MOV dword ptr [ESP + 0xd4],ECX      ; 005733d0
    TEST EDI,EDI                        ; 005733d7
    JLE 0x00573442                      ; 005733d9
        ;   XREF to: 00573442 (CONDITIONAL_JUMP)  ; LAB_00573442
    MOV ECX,dword ptr [EBP + 0x14]      ; 005733db
        ;   Label: LAB_005733db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005733de
    PUSH ECX                            ; 005733e1
    MOV EAX,dword ptr [EAX]             ; 005733e2
    CALL dword ptr [EAX + 0x4]          ; 005733e4
    ADD ESP,0x4                         ; 005733e7
    MOV dword ptr [ESP + 0xa4],EAX      ; 005733ea
    TEST EAX,EAX                        ; 005733f1
    JL 0x0057358e                       ; 005733f3
        ;   XREF to: 0057358e (CONDITIONAL_JUMP)  ; LAB_0057358e
    MOV CL,byte ptr [ESP + 0xa4]        ; 005733f9
    INC CL                              ; 00573400
    AND ECX,0xff                        ; 00573402
    TEST byte ptr [ECX + 0x6074b8],0x20 ; 00573408 | DAT_006074b8
    JZ 0x0057359a                       ; 0057340f
        ;   XREF to: 0057359a (CONDITIONAL_JUMP)  ; LAB_0057359a
    MOV AL,byte ptr [ESP + 0xa4]        ; 00573415
    MOV byte ptr [ESI],AL               ; 0057341c
    MOV EAX,0x1                         ; 0057341e
    MOV EDX,dword ptr [ESP + 0xd4]      ; 00573423
    MOV dword ptr [ESP + 0xa0],EAX      ; 0057342a
    SUB EDI,EAX                         ; 00573431
    ADD EDX,EAX                         ; 00573433
    ADD ESI,EAX                         ; 00573435
    MOV dword ptr [ESP + 0xd4],EDX      ; 00573437
    TEST EDI,EDI                        ; 0057343e
    JG 0x005733db                       ; 00573440
        ;   XREF to: 005733db (CONDITIONAL_JUMP)  ; LAB_005733db
    CMP dword ptr [ESP + 0xd0],-0x1     ; 00573442
        ;   Label: LAB_00573442
    JL 0x0057275f                       ; 0057344a
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    CMP dword ptr [ESP + 0xa0],0x0      ; 00573450
    JZ 0x005735f1                       ; 00573458
        ;   XREF to: 005735f1 (CONDITIONAL_JUMP)  ; LAB_005735f1
    TEST EDI,EDI                        ; 0057345e
    JLE 0x005735f1                      ; 00573460
        ;   XREF to: 005735f1 (CONDITIONAL_JUMP)  ; LAB_005735f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00573466
    MOV EAX,dword ptr [EBP + 0x14]      ; 00573469
    PUSH EDX                            ; 0057346c
    MOV EAX,dword ptr [EAX]             ; 0057346d
    CALL dword ptr [EAX + 0x4]          ; 0057346f
    MOV dword ptr [ESP + 0x98],EAX      ; 00573472
    ADD ESP,0x4                         ; 00573479
    MOV dword ptr [ESP + 0xa4],EAX      ; 0057347c
    TEST EAX,EAX                        ; 00573483
    JL 0x005735ea                       ; 00573485
        ;   XREF to: 005735ea (CONDITIONAL_JUMP)  ; LAB_005735ea
    PUSH EAX                            ; 0057348b
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 0057348c
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 00573491
    CMP EAX,0x45                        ; 00573494
    JNZ 0x005736da                      ; 00573497
        ;   XREF to: 005736da (CONDITIONAL_JUMP)  ; LAB_005736da
    MOV AL,byte ptr [ESP + 0xa4]        ; 0057349d
    MOV byte ptr [ESI],AL               ; 005734a4
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005734a6
    DEC EDI                             ; 005734ad
    INC EAX                             ; 005734ae
    INC ESI                             ; 005734af
    MOV dword ptr [ESP + 0xd4],EAX      ; 005734b0
    TEST EDI,EDI                        ; 005734b7
    JLE 0x0057350f                      ; 005734b9
        ;   XREF to: 0057350f (CONDITIONAL_JUMP)  ; LAB_0057350f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005734bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005734be
    PUSH EDX                            ; 005734c1
    MOV EAX,dword ptr [EAX]             ; 005734c2
    CALL dword ptr [EAX + 0x4]          ; 005734c4
    ADD ESP,0x4                         ; 005734c7
    MOV dword ptr [ESP + 0xa4],EAX      ; 005734ca
    TEST EAX,EAX                        ; 005734d1
    JL 0x00572f24                       ; 005734d3
        ;   XREF to: 00572f24 (CONDITIONAL_JUMP)  ; LAB_00572f24
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005734d9
    INC EDX                             ; 005734e0
    MOV dword ptr [ESP + 0xb8],EDX      ; 005734e1
    LEA EDX,[EDI + -0x1]                ; 005734e8
    CMP EAX,0x2d                        ; 005734eb
    JNZ 0x00573681                      ; 005734ee
        ;   XREF to: 00573681 (CONDITIONAL_JUMP)  ; LAB_00573681
    INC ESI                             ; 005734f4
    MOV AL,byte ptr [ESP + 0xa4]        ; 005734f5
    MOV byte ptr [ESI + -0x1],AL        ; 005734fc
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005734ff
        ;   Label: LAB_005734ff
    MOV EDI,EDX                         ; 00573506
    MOV dword ptr [ESP + 0xd4],EAX      ; 00573508
        ;   Label: LAB_00573508
    TEST EDI,EDI                        ; 0057350f
        ;   Label: LAB_0057350f
    JLE 0x005735f1                      ; 00573511
        ;   XREF to: 005735f1 (CONDITIONAL_JUMP)  ; LAB_005735f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00573517
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057351a
    PUSH EDX                            ; 0057351d
    MOV EAX,dword ptr [EAX]             ; 0057351e
    CALL dword ptr [EAX + 0x4]          ; 00573520
    ADD ESP,0x4                         ; 00573523
    MOV dword ptr [ESP + 0xa4],EAX      ; 00573526
    TEST EAX,EAX                        ; 0057352d
    JL 0x005735ea                       ; 0057352f
        ;   XREF to: 005735ea (CONDITIONAL_JUMP)  ; LAB_005735ea
    MOV CL,byte ptr [ESP + 0xa4]        ; 00573535
    INC CL                              ; 0057353c
    AND ECX,0xff                        ; 0057353e
    TEST byte ptr [ECX + 0x6074b8],0x20 ; 00573544 | DAT_006074b8
    JZ 0x005736b2                       ; 0057354b
        ;   XREF to: 005736b2 (CONDITIONAL_JUMP)  ; LAB_005736b2
    MOV AL,byte ptr [ESP + 0xa4]        ; 00573551
    MOV byte ptr [ESI],AL               ; 00573558
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057355a
    DEC EDI                             ; 00573561
    INC EAX                             ; 00573562
    INC ESI                             ; 00573563
    JMP 0x00573508                      ; 00573564
        ;   XREF to: 00573508 (UNCONDITIONAL_JUMP)  ; LAB_00573508
    MOV EDX,dword ptr [EBP + 0x14]      ; 00573566
        ;   Label: LAB_00573566
    PUSH EAX                            ; 00573569
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057356a
    MOV EDX,dword ptr [EDX]             ; 0057356d
    PUSH EAX                            ; 0057356f
    CALL dword ptr [EDX + 0x8]          ; 00573570
    ADD ESP,0x8                         ; 00573573
    TEST EAX,EAX                        ; 00573576
    JNZ 0x0057337f                      ; 00573578
        ;   XREF to: 0057337f (CONDITIONAL_JUMP)  ; LAB_0057337f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 0057357e
    JMP 0x0057275f                      ; 00573589
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057358e
        ;   Label: LAB_0057358e
    JMP 0x00573442                      ; 00573595
        ;   XREF to: 00573442 (UNCONDITIONAL_JUMP)  ; LAB_00573442
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057359a
        ;   Label: LAB_0057359a
    PUSH EAX                            ; 0057359d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057359e
    MOV EDX,dword ptr [EDX]             ; 005735a1
    PUSH EAX                            ; 005735a3
    CALL dword ptr [EDX + 0x8]          ; 005735a4
    ADD ESP,0x8                         ; 005735a7
    TEST EAX,EAX                        ; 005735aa
    JNZ 0x00573442                      ; 005735ac
        ;   XREF to: 00573442 (CONDITIONAL_JUMP)  ; LAB_00573442
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005735b2
    JMP 0x0057275f                      ; 005735bd
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005735c2
        ;   Label: LAB_005735c2
    PUSH EAX                            ; 005735c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005735c6
    MOV EDX,dword ptr [EDX]             ; 005735c9
    PUSH EAX                            ; 005735cb
    CALL dword ptr [EDX + 0x8]          ; 005735cc
    ADD ESP,0x8                         ; 005735cf
    TEST EAX,EAX                        ; 005735d2
    JNZ 0x00573442                      ; 005735d4
        ;   XREF to: 00573442 (CONDITIONAL_JUMP)  ; LAB_00573442
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005735da
    JMP 0x0057275f                      ; 005735e5
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV dword ptr [ESP + 0xd0],EAX      ; 005735ea
        ;   Label: LAB_005735ea
    CMP dword ptr [ESP + 0xd0],-0x1     ; 005735f1
        ;   Label: LAB_005735f1
    JL 0x0057275f                       ; 005735f9
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    CMP dword ptr [ESP + 0xa0],0x0      ; 005735ff
    JZ 0x0057275f                       ; 00573607
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDI,dword ptr [ESP + 0xbc]      ; 0057360d
    INC EDI                             ; 00573614
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00573615
    MOV dword ptr [ESP + 0xbc],EDI      ; 0057361c
    TEST EAX,EAX                        ; 00573623
    JZ 0x0057275f                       ; 00573625
        ;   XREF to: 0057275f (CONDITIONAL_JUMP)  ; LAB_0057275f
    LEA EAX,[ESP + 0x8]                 ; 0057362b
    PUSH EAX                            ; 0057362f
    MOV byte ptr [ESI],0x0              ; 00573630
    CALL crt_unknown.c__strtod_FUN_005a6098 ; 00573633
        ;   XREF to: 005a6098 (UNCONDITIONAL_CALL)  ; double crt_unknown.c__strtod_FUN_005a6098(char * str)
    MOV dword ptr [ESP + 0x90],EAX      ; 00573638
    MOV dword ptr [ESP + 0x94],EDX      ; 0057363f
    FLD double ptr [ESP + 0x90]         ; 00573646
    ADD ESP,0x4                         ; 0057364d
    MOV EDX,dword ptr [ESP + 0x98]      ; 00573650
    FSTP double ptr [ESP]               ; 00573657
    CMP EDX,0x4c                        ; 0057365a
    JNC 0x00573753                      ; 0057365d
        ;   XREF to: 00573753 (CONDITIONAL_JUMP)  ; LAB_00573753
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00573663
        ;   Label: LAB_00573663
    MOV ESI,dword ptr [EAX]             ; 00573666
    ADD ESI,0x4                         ; 00573668
    MOV dword ptr [EAX],ESI             ; 0057366b
    MOV EAX,dword ptr [ESI + -0x4]      ; 0057366d
    FLD double ptr [ESP]                ; 00573670
    FSTP float ptr [EAX]                ; 00573673
    INC dword ptr [ESP + 0xc0]          ; 00573675
    JMP 0x0057275f                      ; 0057367c
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    CMP EAX,0x2b                        ; 00573681
        ;   Label: LAB_00573681
    JZ 0x005734ff                       ; 00573684
        ;   XREF to: 005734ff (CONDITIONAL_JUMP)  ; LAB_005734ff
    PUSH EAX                            ; 0057368a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057368b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057368e
    PUSH ECX                            ; 00573691
    MOV EDX,dword ptr [EDX]             ; 00573692
    CALL dword ptr [EDX + 0x8]          ; 00573694
    ADD ESP,0x8                         ; 00573697
    TEST EAX,EAX                        ; 0057369a
    JNZ 0x0057350f                      ; 0057369c
        ;   XREF to: 0057350f (CONDITIONAL_JUMP)  ; LAB_0057350f
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005736a2
    JMP 0x0057275f                      ; 005736ad
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    PUSH EAX                            ; 005736b2
        ;   Label: LAB_005736b2
    MOV ECX,dword ptr [EBP + 0x14]      ; 005736b3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005736b6
    PUSH ECX                            ; 005736b9
    MOV EDX,dword ptr [EDX]             ; 005736ba
    CALL dword ptr [EDX + 0x8]          ; 005736bc
    ADD ESP,0x8                         ; 005736bf
    TEST EAX,EAX                        ; 005736c2
    JNZ 0x005735f1                      ; 005736c4
        ;   XREF to: 005735f1 (CONDITIONAL_JUMP)  ; LAB_005735f1
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005736ca
    JMP 0x0057275f                      ; 005736d5
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDX,dword ptr [ESP + 0x94]      ; 005736da
        ;   Label: LAB_005736da
    MOV EAX,dword ptr [EBP + 0x14]      ; 005736e1
    PUSH EDX                            ; 005736e4
    MOV ECX,dword ptr [EBP + 0x14]      ; 005736e5
    MOV EAX,dword ptr [EAX]             ; 005736e8
    PUSH ECX                            ; 005736ea
    CALL dword ptr [EAX + 0x8]          ; 005736eb
    ADD ESP,0x8                         ; 005736ee
    TEST EAX,EAX                        ; 005736f1
    JNZ 0x005735f1                      ; 005736f3
        ;   XREF to: 005735f1 (CONDITIONAL_JUMP)  ; LAB_005735f1
    MOV dword ptr [ESP + 0xd0],0xfffffffe ; 005736f9
    JMP 0x0057275f                      ; 00573704
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00573709
        ;   Label: LAB_00573709
    MOV EDX,dword ptr [EAX]             ; 0057370c
    ADD EDX,0x4                         ; 0057370e
    MOV dword ptr [EAX],EDX             ; 00573711
    MOV EAX,dword ptr [EDX + -0x4]      ; 00573713
    MOV EDX,dword ptr [ESP]             ; 00573716
    MOV dword ptr [EAX],EDX             ; 00573719
    MOV EDX,dword ptr [ESP + 0x4]       ; 0057371b
    MOV dword ptr [EAX + 0x4],EDX       ; 0057371f
    INC dword ptr [ESP + 0xc0]          ; 00573722
    JMP 0x0057275f                      ; 00573729
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0057372e
        ;   Label: LAB_0057372e
    MOV ECX,dword ptr [EAX]             ; 00573731
    ADD ECX,0x4                         ; 00573733
    MOV dword ptr [EAX],ECX             ; 00573736
    MOV EAX,dword ptr [ECX + -0x4]      ; 00573738
    MOV EDX,dword ptr [ESP]             ; 0057373b
    MOV dword ptr [EAX],EDX             ; 0057373e
    MOV EDX,dword ptr [ESP + 0x4]       ; 00573740
    MOV dword ptr [EAX + 0x4],EDX       ; 00573744
    INC dword ptr [ESP + 0xc0]          ; 00573747
    JMP 0x0057275f                      ; 0057374e
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    JBE 0x0057372e                      ; 00573753
        ;   XREF to: 0057372e (CONDITIONAL_JUMP)  ; LAB_0057372e
        ;   Label: LAB_00573753
    CMP EDX,0x68                        ; 00573755
    JC 0x00573663                       ; 00573758
        ;   XREF to: 00573663 (CONDITIONAL_JUMP)  ; LAB_00573663
    JBE 0x00573663                      ; 0057375e
        ;   XREF to: 00573663 (CONDITIONAL_JUMP)  ; LAB_00573663
    CMP EDX,0x6c                        ; 00573764
    JZ 0x00573709                       ; 00573767
        ;   XREF to: 00573709 (CONDITIONAL_JUMP)  ; LAB_00573709
    JMP 0x00573663                      ; 00573769
        ;   XREF to: 00573663 (UNCONDITIONAL_JUMP)  ; LAB_00573663
    DEC EBX                             ; 0057376e
        ;   Label: caseD_48
    JMP 0x0057275f                      ; 0057376f
        ;   XREF to: 0057275f (UNCONDITIONAL_JUMP)  ; LAB_0057275f
    MOV EDI,dword ptr [ESP + 0xc0]      ; 00573774
        ;   Label: LAB_00573774
    MOV EAX,EDI                         ; 0057377b
    MOV ESP,EBP                         ; 0057377d
    POP EBP                             ; 0057377f
    POP EDI                             ; 00573780
    POP ESI                             ; 00573781
    POP EBX                             ; 00573782
    RET                                 ; 00573783

