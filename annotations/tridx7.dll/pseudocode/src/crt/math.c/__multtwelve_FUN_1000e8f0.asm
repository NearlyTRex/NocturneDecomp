; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_math_c___multtwelve_FUN_1000e8f0(_LDBL12 *a,_LDBL12 *b)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   a
; _LDBL12 *        Stack[0x8]:4   b
; Local Variables:
; undefined2       Stack[-0x1c]:2  local_1c
; undefined2       Stack[-0x1a]:2  local_1a
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   crt_math.c__multtenpow12_FUN_1000eba0 at 1000ec08
;   crt_stdio.c__i10_output_FUN_1000cf50 at 1000d174
;
; Called Functions:
;   crt_math.c__addl_FUN_1000c5a0
;   crt_math.c__shl_12_FUN_1000c640
;   crt_math.c__shr_12_FUN_1000c680
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 1000e8f0
        ;   Label: crt_math.c___multtwelve_FUN_1000e8f0
    PUSH EBX                            ; 1000e8f3
    PUSH ESI                            ; 1000e8f4
    MOV ESI,dword ptr [ESP + 0x28]      ; 1000e8f5
    PUSH EDI                            ; 1000e8f9
    MOV CX,word ptr [ESI + 0xa]         ; 1000e8fa
    PUSH EBP                            ; 1000e8fe
    XOR EDI,EDI                         ; 1000e8ff
    MOV EDX,dword ptr [ESP + 0x34]      ; 1000e901
    MOV DX,word ptr [EDX + 0xa]         ; 1000e905
    MOV dword ptr [ESP + 0x14],EDI      ; 1000e909
    MOV AX,DX                           ; 1000e90d
    MOV dword ptr [ESP + 0x18],EDI      ; 1000e910
    XOR AX,CX                           ; 1000e914
    MOV dword ptr [ESP + 0x1c],EDI      ; 1000e917
    AND AX,0x8000                       ; 1000e91b
    AND CX,0x7fff                       ; 1000e91f
    AND DX,0x7fff                       ; 1000e924
    MOV word ptr [ESP + 0x10],AX        ; 1000e929
    LEA EAX,[ECX + EDX*0x1]             ; 1000e92e
    MOV word ptr [ESP + 0x12],AX        ; 1000e931
    CMP CX,0x7fff                       ; 1000e936
    JNC 0x1000eb6c                      ; 1000e93b
        ;   XREF to: 1000eb6c (CONDITIONAL_JUMP)  ; LAB_1000eb6c
    CMP DX,0x7fff                       ; 1000e941
    JNC 0x1000eb6c                      ; 1000e946
        ;   XREF to: 1000eb6c (CONDITIONAL_JUMP)  ; LAB_1000eb6c
    CMP AX,0xbffd                       ; 1000e94c
    JA 0x1000eb6c                       ; 1000e950
        ;   XREF to: 1000eb6c (CONDITIONAL_JUMP)  ; LAB_1000eb6c
    CMP AX,0x3fbf                       ; 1000e956
    JA 0x1000e96c                       ; 1000e95a
        ;   XREF to: 1000e96c (CONDITIONAL_JUMP)  ; LAB_1000e96c
    POP EBP                             ; 1000e95c
    MOV dword ptr [ESI + 0x8],EDI       ; 1000e95d
    MOV dword ptr [ESI + 0x4],EDI       ; 1000e960
    MOV dword ptr [ESI],EDI             ; 1000e963
    POP EDI                             ; 1000e965
    POP ESI                             ; 1000e966
    POP EBX                             ; 1000e967
    ADD ESP,0x1c                        ; 1000e968
    RET                                 ; 1000e96b
    TEST CX,CX                          ; 1000e96c
        ;   Label: LAB_1000e96c
    JNZ 0x1000e998                      ; 1000e96f
        ;   XREF to: 1000e998 (CONDITIONAL_JUMP)  ; LAB_1000e998
    INC word ptr [ESP + 0x12]           ; 1000e971
    TEST dword ptr [ESI + 0x8],0x7fffffff ; 1000e976
    JNZ 0x1000e998                      ; 1000e97d
        ;   XREF to: 1000e998 (CONDITIONAL_JUMP)  ; LAB_1000e998
    CMP dword ptr [ESI + 0x4],0x0       ; 1000e97f
    JNZ 0x1000e998                      ; 1000e983
        ;   XREF to: 1000e998 (CONDITIONAL_JUMP)  ; LAB_1000e998
    CMP dword ptr [ESI],0x0             ; 1000e985
    JNZ 0x1000e998                      ; 1000e988
        ;   XREF to: 1000e998 (CONDITIONAL_JUMP)  ; LAB_1000e998
    MOV word ptr [ESI + 0xa],0x0        ; 1000e98a
    POP EBP                             ; 1000e990
    POP EDI                             ; 1000e991
    POP ESI                             ; 1000e992
    POP EBX                             ; 1000e993
    ADD ESP,0x1c                        ; 1000e994
    RET                                 ; 1000e997
    XOR EAX,EAX                         ; 1000e998
        ;   Label: LAB_1000e998
    TEST DX,DX                          ; 1000e99a
    JNZ 0x1000e9ca                      ; 1000e99d
        ;   XREF to: 1000e9ca (CONDITIONAL_JUMP)  ; LAB_1000e9ca
    INC word ptr [ESP + 0x12]           ; 1000e99f
    MOV EDX,dword ptr [ESP + 0x34]      ; 1000e9a4
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 1000e9a8
    JNZ 0x1000e9ca                      ; 1000e9af
        ;   XREF to: 1000e9ca (CONDITIONAL_JUMP)  ; LAB_1000e9ca
    CMP dword ptr [EDX + 0x4],EAX       ; 1000e9b1
    JNZ 0x1000e9ca                      ; 1000e9b4
        ;   XREF to: 1000e9ca (CONDITIONAL_JUMP)  ; LAB_1000e9ca
    CMP dword ptr [EDX],EAX             ; 1000e9b6
    JNZ 0x1000e9ca                      ; 1000e9b8
        ;   XREF to: 1000e9ca (CONDITIONAL_JUMP)  ; LAB_1000e9ca
    POP EBP                             ; 1000e9ba
    MOV dword ptr [ESI + 0x8],EAX       ; 1000e9bb
    POP EDI                             ; 1000e9be
    MOV dword ptr [ESI + 0x4],EAX       ; 1000e9bf
    MOV dword ptr [ESI],EAX             ; 1000e9c2
    POP ESI                             ; 1000e9c4
    POP EBX                             ; 1000e9c5
    ADD ESP,0x1c                        ; 1000e9c6
    RET                                 ; 1000e9c9
    XOR EAX,EAX                         ; 1000e9ca
        ;   Label: LAB_1000e9ca
    MOV dword ptr [ESP + 0x24],EAX      ; 1000e9cc
    MOV dword ptr [ESP + 0x20],EAX      ; 1000e9d0
    MOV EDI,dword ptr [ESP + 0x20]      ; 1000e9d4
        ;   Label: LAB_1000e9d4
    MOV EBX,0x8                         ; 1000e9d8
    ADD EDI,EDI                         ; 1000e9dd
    MOV EAX,0x5                         ; 1000e9df
    SUB EAX,dword ptr [ESP + 0x20]      ; 1000e9e4
    MOV dword ptr [ESP + 0x28],EAX      ; 1000e9e8
    TEST EAX,EAX                        ; 1000e9ec
    JLE 0x1000ea32                      ; 1000e9ee
        ;   XREF to: 1000ea32 (CONDITIONAL_JUMP)  ; LAB_1000ea32
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000e9f0
    LEA EBP,[ESP + EAX*0x1 + 0x14]      ; 1000e9f4
    XOR ECX,ECX                         ; 1000e9f8
        ;   Label: LAB_1000e9f8
    MOV EDX,dword ptr [ESP + 0x34]      ; 1000e9fa
    MOV CX,word ptr [EBX + EDX*0x1]     ; 1000e9fe
    XOR EAX,EAX                         ; 1000ea02
    MOV AX,word ptr [EDI + ESI*0x1]     ; 1000ea04
    PUSH EBP                            ; 1000ea08
    IMUL ECX,EAX                        ; 1000ea09
    PUSH ECX                            ; 1000ea0c
    MOV EDX,dword ptr [EBP]             ; 1000ea0d
    PUSH EDX                            ; 1000ea10
    CALL crt_math.c__addl_FUN_1000c5a0  ; 1000ea11
        ;   XREF to: 1000c5a0 (UNCONDITIONAL_CALL)  ; uint crt_math.c__addl_FUN_1000c5a0(uint a, uint b, uint * result)
    ADD ESP,0xc                         ; 1000ea16
    TEST EAX,EAX                        ; 1000ea19
    JZ 0x1000ea26                       ; 1000ea1b
        ;   XREF to: 1000ea26 (CONDITIONAL_JUMP)  ; LAB_1000ea26
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000ea1d
    INC word ptr [ESP + EAX*0x1 + 0x18] ; 1000ea21
    ADD EDI,0x2                         ; 1000ea26
        ;   Label: LAB_1000ea26
    SUB EBX,0x2                         ; 1000ea29
    DEC dword ptr [ESP + 0x28]          ; 1000ea2c
    JNZ 0x1000e9f8                      ; 1000ea30
        ;   XREF to: 1000e9f8 (CONDITIONAL_JUMP)  ; LAB_1000e9f8
    ADD dword ptr [ESP + 0x24],0x2      ; 1000ea32
        ;   Label: LAB_1000ea32
    INC dword ptr [ESP + 0x20]          ; 1000ea37
    CMP dword ptr [ESP + 0x20],0x5      ; 1000ea3b
    JL 0x1000e9d4                       ; 1000ea40
        ;   XREF to: 1000e9d4 (CONDITIONAL_JUMP)  ; LAB_1000e9d4
    SUB word ptr [ESP + 0x12],0x3ffe    ; 1000ea42
    CMP word ptr [ESP + 0x12],0x0       ; 1000ea49
    JLE 0x1000ea7e                      ; 1000ea4f
        ;   XREF to: 1000ea7e (CONDITIONAL_JUMP)  ; LAB_1000ea7e
    MOV EDI,0x80000000                  ; 1000ea51
    TEST dword ptr [ESP + 0x1c],EDI     ; 1000ea56
        ;   Label: LAB_1000ea56
    JNZ 0x1000ea76                      ; 1000ea5a
        ;   XREF to: 1000ea76 (CONDITIONAL_JUMP)  ; LAB_1000ea76
    LEA EAX,[ESP + 0x14]                ; 1000ea5c
    PUSH EAX                            ; 1000ea60
    CALL crt_math.c__shl_12_FUN_1000c640 ; 1000ea61
        ;   XREF to: 1000c640 (UNCONDITIONAL_CALL)  ; void crt_math.c__shl_12_FUN_1000c640(uint * p)
    DEC word ptr [ESP + 0x16]           ; 1000ea66
    ADD ESP,0x4                         ; 1000ea6b
    CMP word ptr [ESP + 0x12],0x0       ; 1000ea6e
    JG 0x1000ea56                       ; 1000ea74
        ;   XREF to: 1000ea56 (CONDITIONAL_JUMP)  ; LAB_1000ea56
    CMP word ptr [ESP + 0x12],0x0       ; 1000ea76
        ;   Label: LAB_1000ea76
    JG 0x1000eac3                       ; 1000ea7c
        ;   XREF to: 1000eac3 (CONDITIONAL_JUMP)  ; LAB_1000eac3
    DEC word ptr [ESP + 0x12]           ; 1000ea7e
        ;   Label: LAB_1000ea7e
    JNS 0x1000eab6                      ; 1000ea83
        ;   XREF to: 1000eab6 (CONDITIONAL_JUMP)  ; LAB_1000eab6
    MOV DI,word ptr [ESP + 0x12]        ; 1000ea85
    MOV EBX,dword ptr [ESP + 0x14]      ; 1000ea8a
    NEG DI                              ; 1000ea8e
    ADD word ptr [ESP + 0x12],DI        ; 1000ea91
    MOV EBP,0x1                         ; 1000ea96
    TEST word ptr [ESP + 0x14],BP       ; 1000ea9b
        ;   Label: LAB_1000ea9b
    JZ 0x1000eaa3                       ; 1000eaa0
        ;   XREF to: 1000eaa3 (CONDITIONAL_JUMP)  ; LAB_1000eaa3
    INC EBX                             ; 1000eaa2
    LEA EAX,[ESP + 0x14]                ; 1000eaa3
        ;   Label: LAB_1000eaa3
    PUSH EAX                            ; 1000eaa7
    CALL crt_math.c__shr_12_FUN_1000c680 ; 1000eaa8
        ;   XREF to: 1000c680 (UNCONDITIONAL_CALL)  ; void crt_math.c__shr_12_FUN_1000c680(uint * p)
    ADD ESP,0x4                         ; 1000eaad
    DEC DI                              ; 1000eab0
    JNZ 0x1000ea9b                      ; 1000eab2
        ;   XREF to: 1000ea9b (CONDITIONAL_JUMP)  ; LAB_1000ea9b
    JMP 0x1000eaba                      ; 1000eab4
        ;   XREF to: 1000eaba (UNCONDITIONAL_JUMP)  ; LAB_1000eaba
    MOV EBX,dword ptr [ESP + 0x14]      ; 1000eab6
        ;   Label: LAB_1000eab6
    TEST EBX,EBX                        ; 1000eaba
        ;   Label: LAB_1000eaba
    JZ 0x1000eac3                       ; 1000eabc
        ;   XREF to: 1000eac3 (CONDITIONAL_JUMP)  ; LAB_1000eac3
    OR byte ptr [ESP + 0x14],0x1        ; 1000eabe
    MOV EAX,0x8000                      ; 1000eac3
        ;   Label: LAB_1000eac3
    CMP word ptr [ESP + 0x14],AX        ; 1000eac8
    JBE 0x1000eb0d                      ; 1000eacd
        ;   XREF to: 1000eb0d (CONDITIONAL_JUMP)  ; LAB_1000eb0d
    CMP dword ptr [ESP + 0x16],-0x1     ; 1000eacf
    JNZ 0x1000eb09                      ; 1000ead4
        ;   XREF to: 1000eb09 (CONDITIONAL_JUMP)  ; LAB_1000eb09
    XOR ECX,ECX                         ; 1000ead6
    MOV dword ptr [ESP + 0x16],ECX      ; 1000ead8
    CMP dword ptr [ESP + 0x1a],-0x1     ; 1000eadc
    JNZ 0x1000eb03                      ; 1000eae1
        ;   XREF to: 1000eb03 (CONDITIONAL_JUMP)  ; LAB_1000eb03
    MOV dword ptr [ESP + 0x1a],ECX      ; 1000eae3
    CMP word ptr [ESP + 0x1e],0xffff    ; 1000eae7
    JNZ 0x1000eafc                      ; 1000eaee
        ;   XREF to: 1000eafc (CONDITIONAL_JUMP)  ; LAB_1000eafc
    MOV word ptr [ESP + 0x1e],AX        ; 1000eaf0
    INC word ptr [ESP + 0x12]           ; 1000eaf5
    JMP 0x1000eb0d                      ; 1000eafa
        ;   XREF to: 1000eb0d (UNCONDITIONAL_JUMP)  ; LAB_1000eb0d
    INC word ptr [ESP + 0x1e]           ; 1000eafc
        ;   Label: LAB_1000eafc
    JMP 0x1000eb0d                      ; 1000eb01
        ;   XREF to: 1000eb0d (UNCONDITIONAL_JUMP)  ; LAB_1000eb0d
    INC dword ptr [ESP + 0x1a]          ; 1000eb03
        ;   Label: LAB_1000eb03
    JMP 0x1000eb0d                      ; 1000eb07
        ;   XREF to: 1000eb0d (UNCONDITIONAL_JUMP)  ; LAB_1000eb0d
    INC dword ptr [ESP + 0x16]          ; 1000eb09
        ;   Label: LAB_1000eb09
    CMP word ptr [ESP + 0x12],0x7fff    ; 1000eb0d
        ;   Label: LAB_1000eb0d
    JC 0x1000eb40                       ; 1000eb14
        ;   XREF to: 1000eb40 (CONDITIONAL_JUMP)  ; LAB_1000eb40
    MOV dword ptr [ESI + 0x4],0x0       ; 1000eb16
    CMP word ptr [ESP + 0x10],0x1       ; 1000eb1d
    SBB EAX,EAX                         ; 1000eb23
    POP EBP                             ; 1000eb25
    AND EAX,0x80000000                  ; 1000eb26
    POP EDI                             ; 1000eb2b
    SUB EAX,0x8000                      ; 1000eb2c
    MOV dword ptr [ESI],0x0             ; 1000eb31
    MOV dword ptr [ESI + 0x8],EAX       ; 1000eb37
    POP ESI                             ; 1000eb3a
    POP EBX                             ; 1000eb3b
    ADD ESP,0x1c                        ; 1000eb3c
    RET                                 ; 1000eb3f
    MOV AX,word ptr [ESP + 0x16]        ; 1000eb40
        ;   Label: LAB_1000eb40
    MOV ECX,dword ptr [ESP + 0x18]      ; 1000eb45
    MOV word ptr [ESI],AX               ; 1000eb49
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000eb4c
    MOV AX,word ptr [ESP + 0x12]        ; 1000eb50
    MOV dword ptr [ESI + 0x2],ECX       ; 1000eb55
    OR AX,word ptr [ESP + 0x10]         ; 1000eb58
    MOV dword ptr [ESI + 0x6],EDX       ; 1000eb5d
    MOV word ptr [ESI + 0xa],AX         ; 1000eb60
    POP EBP                             ; 1000eb64
    POP EDI                             ; 1000eb65
    POP ESI                             ; 1000eb66
    POP EBX                             ; 1000eb67
    ADD ESP,0x1c                        ; 1000eb68
    RET                                 ; 1000eb6b
    MOV dword ptr [ESI + 0x4],0x0       ; 1000eb6c
        ;   Label: LAB_1000eb6c
    CMP word ptr [ESP + 0x10],0x1       ; 1000eb73
    SBB EAX,EAX                         ; 1000eb79
    POP EBP                             ; 1000eb7b
    AND EAX,0x80000000                  ; 1000eb7c
    POP EDI                             ; 1000eb81
    SUB EAX,0x8000                      ; 1000eb82
    MOV dword ptr [ESI],0x0             ; 1000eb87
    MOV dword ptr [ESI + 0x8],EAX       ; 1000eb8d
    POP ESI                             ; 1000eb90
    POP EBX                             ; 1000eb91
    ADD ESP,0x1c                        ; 1000eb92
    RET                                 ; 1000eb95

