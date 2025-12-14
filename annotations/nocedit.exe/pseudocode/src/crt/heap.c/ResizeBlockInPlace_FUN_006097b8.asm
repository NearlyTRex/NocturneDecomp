; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister int crt_heap.c_ResizeBlockInPlace_FUN_006097b8(ushort segment, void * ptr, ulong new_size, ulong * pExtraNeeded)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_heap.c_TryResizeInPlace_FUN_00609974 at 00609998
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   undefined4 DAT_03f9b851
;
; Called Functions:
;   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006097b8
        ;   Label: crt_heap.c_ResizeBlockInPlace_FUN_006097b8
    PUSH ESI                            ; 006097b9
    PUSH EDI                            ; 006097ba
    PUSH EBP                            ; 006097bb
    SUB ESP,0xc                         ; 006097bc
    MOV ESI,dword ptr [ESP + 0x24]      ; 006097bf
    MOV EDX,dword ptr [ESP + 0x28]      ; 006097c3
    LEA EAX,[EDX + 0xb]                 ; 006097c7
    AND AL,0xf8                         ; 006097ca
    CMP EAX,EDX                         ; 006097cc
    JNC 0x006097d7                      ; 006097ce
        ;   XREF to: 006097d7 (CONDITIONAL_JUMP)  ; LAB_006097d7
    MOV EAX,0xffffffff                  ; 006097d0
    JMP 0x006097e1                      ; 006097d5
        ;   XREF to: 006097e1 (UNCONDITIONAL_JUMP)  ; LAB_006097e1
    CMP EAX,0x10                        ; 006097d7
        ;   Label: LAB_006097d7
    JNC 0x006097e1                      ; 006097da
        ;   XREF to: 006097e1 (CONDITIONAL_JUMP)  ; LAB_006097e1
    MOV EAX,0x10                        ; 006097dc
    LEA EDX,[ESI + -0x4]                ; 006097e1
        ;   Label: LAB_006097e1
    MOV dword ptr [ESP],EDX             ; 006097e4
    MOV EDX,dword ptr [EDX]             ; 006097e7
    AND DL,0xfe                         ; 006097e9
    CMP EAX,EDX                         ; 006097ec
    JBE 0x00609909                      ; 006097ee
        ;   XREF to: 00609909 (CONDITIONAL_JUMP)  ; LAB_00609909
    MOV EBP,dword ptr [ESP]             ; 006097f4
    SUB EAX,EDX                         ; 006097f7
    ADD EBP,EDX                         ; 006097f9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 006097fb
    MOV dword ptr [EDX],EAX             ; 006097ff
    MOV EDI,dword ptr [EBP]             ; 00609801
        ;   Label: LAB_00609801
    CMP EDI,-0x1                        ; 00609804
    JNZ 0x00609813                      ; 00609807
        ;   XREF to: 00609813 (CONDITIONAL_JUMP)  ; LAB_00609813
    MOV EAX,0x2                         ; 00609809
    JMP 0x0060996a                      ; 0060980e
        ;   XREF to: 0060996a (UNCONDITIONAL_JUMP)  ; LAB_0060996a
    TEST DI,0x1                         ; 00609813
        ;   Label: LAB_00609813
    JNZ 0x006098fc                      ; 00609818
        ;   XREF to: 006098fc (CONDITIONAL_JUMP)  ; LAB_006098fc
    MOV EAX,dword ptr [EBP + 0x8]       ; 0060981e
    MOV dword ptr [ESP + 0x4],EAX       ; 00609821
    MOV EAX,dword ptr [EBP + 0x4]       ; 00609825
    MOV DX,DS                           ; 00609828
    MOV dword ptr [ESP + 0x8],EAX       ; 0060982a
    MOV EAX,0x684ed4                    ; 0060982e | g_MainHeap
    CMP DX,word ptr [ESP + 0x20]        ; 00609833
    JNZ 0x0060985b                      ; 00609838
        ;   XREF to: 0060985b (CONDITIONAL_JUMP)  ; LAB_0060985b
    MOV EBX,dword ptr [0x00684ed4]      ; 0060983a | g_MainHeap
    CMP dword ptr [EBX + 0x8],0x0       ; 00609840
    JZ 0x0060985b                       ; 00609844
        ;   XREF to: 0060985b (CONDITIONAL_JUMP)  ; LAB_0060985b
    CMP EBX,ESI                         ; 00609846
        ;   Label: LAB_00609846
    JA 0x00609852                       ; 00609848
        ;   XREF to: 00609852 (CONDITIONAL_JUMP)  ; LAB_00609852
    MOV EAX,dword ptr [EBX]             ; 0060984a
    ADD EAX,EBX                         ; 0060984c
    CMP EAX,ESI                         ; 0060984e
    JA 0x0060985b                       ; 00609850
        ;   XREF to: 0060985b (CONDITIONAL_JUMP)  ; LAB_0060985b
    MOV EBX,dword ptr [EBX + 0x8]       ; 00609852
        ;   Label: LAB_00609852
    CMP dword ptr [EBX + 0x8],0x0       ; 00609855
    JNZ 0x00609846                      ; 00609859
        ;   XREF to: 00609846 (CONDITIONAL_JUMP)  ; LAB_00609846
    MOV EAX,dword ptr [EBX + 0xc]       ; 0060985b
        ;   Label: LAB_0060985b
    CMP EBP,EAX                         ; 0060985e
    JNZ 0x00609868                      ; 00609860
        ;   XREF to: 00609868 (CONDITIONAL_JUMP)  ; LAB_00609868
    MOV EAX,dword ptr [EAX + 0x4]       ; 00609862
    MOV dword ptr [EBX + 0xc],EAX       ; 00609865
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00609868
        ;   Label: LAB_00609868
    CMP EDI,dword ptr [EAX]             ; 0060986c
    JC 0x0060987f                       ; 0060986e
        ;   XREF to: 0060987f (CONDITIONAL_JUMP)  ; LAB_0060987f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00609870
    MOV EAX,EDI                         ; 00609874
    MOV ECX,dword ptr [EDX]             ; 00609876
    SUB EAX,ECX                         ; 00609878
    CMP EAX,0x10                        ; 0060987a
    JNC 0x006098b6                      ; 0060987d
        ;   XREF to: 006098b6 (CONDITIONAL_JUMP)  ; LAB_006098b6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060987f
        ;   Label: LAB_0060987f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00609883
    MOV dword ptr [EAX + 0x8],EDX       ; 00609887
    MOV EAX,EDX                         ; 0060988a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0060988c
    MOV dword ptr [EAX + 0x4],EDX       ; 00609890
    MOV EAX,dword ptr [ESP]             ; 00609893
    ADD dword ptr [EAX],EDI             ; 00609896
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00609898
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0060989b
    DEC ECX                             ; 0060989f
    XOR DL,DL                           ; 006098a0
    MOV dword ptr [EBX + 0x1c],ECX      ; 006098a2
    MOV byte ptr [0x03f9b851],DL        ; 006098a5 | DAT_03f9b851
    MOV EDX,dword ptr [EAX]             ; 006098ab
    CMP EDI,EDX                         ; 006098ad
    JC 0x006098ef                       ; 006098af
        ;   XREF to: 006098ef (CONDITIONAL_JUMP)  ; LAB_006098ef
    JMP 0x00609968                      ; 006098b1
        ;   XREF to: 00609968 (UNCONDITIONAL_JUMP)  ; LAB_00609968
    ADD EBP,ECX                         ; 006098b6
        ;   Label: LAB_006098b6
    MOV dword ptr [EBP],EAX             ; 006098b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 006098bb
    MOV dword ptr [EBP + 0x4],EAX       ; 006098bf
    MOV EAX,dword ptr [ESP + 0x4]       ; 006098c2
    MOV dword ptr [EBP + 0x8],EAX       ; 006098c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 006098c9
    MOV dword ptr [EAX + 0x8],EBP       ; 006098cd
    MOV EAX,dword ptr [ESP + 0x4]       ; 006098d0
    MOV dword ptr [EAX + 0x4],EBP       ; 006098d4
    MOV EAX,dword ptr [EDX]             ; 006098d7
    MOV EDX,dword ptr [ESP]             ; 006098d9
    MOV EDI,dword ptr [EDX]             ; 006098dc
    ADD EDI,EAX                         ; 006098de
    XOR AH,AH                           ; 006098e0
    MOV dword ptr [EDX],EDI             ; 006098e2
    MOV byte ptr [0x03f9b851],AH        ; 006098e4 | DAT_03f9b851
    JMP 0x00609968                      ; 006098ea
        ;   XREF to: 00609968 (UNCONDITIONAL_JUMP)  ; LAB_00609968
    MOV ECX,EDX                         ; 006098ef
        ;   Label: LAB_006098ef
    SUB ECX,EDI                         ; 006098f1
    ADD EBP,EDI                         ; 006098f3
    MOV dword ptr [EAX],ECX             ; 006098f5
    JMP 0x00609801                      ; 006098f7
        ;   XREF to: 00609801 (UNCONDITIONAL_JUMP)  ; LAB_00609801
    MOV EAX,0x1                         ; 006098fc
        ;   Label: LAB_006098fc
    ADD ESP,0xc                         ; 00609901
    POP EBP                             ; 00609904
    POP EDI                             ; 00609905
    POP ESI                             ; 00609906
    POP EBX                             ; 00609907
    RET                                 ; 00609908
    SUB EDX,EAX                         ; 00609909
        ;   Label: LAB_00609909
    CMP EDX,0x10                        ; 0060990b
    JC 0x00609968                       ; 0060990e
        ;   XREF to: 00609968 (CONDITIONAL_JUMP)  ; LAB_00609968
    MOV EBP,dword ptr [ESP]             ; 00609910
    MOV EDI,EAX                         ; 00609913
    OR DL,0x1                           ; 00609915
    OR DI,0x1                           ; 00609918
    LEA ECX,[EAX + EBP*0x1]             ; 0060991c
    MOV dword ptr [EBP],EDI             ; 0060991f
    MOV EAX,0x684ed4                    ; 00609922 | g_MainHeap
    MOV dword ptr [ECX],EDX             ; 00609927
    MOV DX,DS                           ; 00609929
    MOV dword ptr [ESP],ECX             ; 0060992b
    CMP DX,word ptr [ESP + 0x20]        ; 0060992e
    JNZ 0x00609956                      ; 00609933
        ;   XREF to: 00609956 (CONDITIONAL_JUMP)  ; LAB_00609956
    MOV EBX,dword ptr [0x00684ed4]      ; 00609935 | g_MainHeap
    CMP dword ptr [EBX + 0x8],0x0       ; 0060993b
    JZ 0x00609956                       ; 0060993f
        ;   XREF to: 00609956 (CONDITIONAL_JUMP)  ; LAB_00609956
    CMP EBX,ESI                         ; 00609941
        ;   Label: LAB_00609941
    JA 0x0060994d                       ; 00609943
        ;   XREF to: 0060994d (CONDITIONAL_JUMP)  ; LAB_0060994d
    MOV EAX,dword ptr [EBX]             ; 00609945
    ADD EAX,EBX                         ; 00609947
    CMP EAX,ESI                         ; 00609949
    JA 0x00609956                       ; 0060994b
        ;   XREF to: 00609956 (CONDITIONAL_JUMP)  ; LAB_00609956
    MOV EBX,dword ptr [EBX + 0x8]       ; 0060994d
        ;   Label: LAB_0060994d
    CMP dword ptr [EBX + 0x8],0x0       ; 00609950
    JNZ 0x00609941                      ; 00609954
        ;   XREF to: 00609941 (CONDITIONAL_JUMP)  ; LAB_00609941
    INC dword ptr [EBX + 0x18]          ; 00609956
        ;   Label: LAB_00609956
    MOV EAX,dword ptr [ESP]             ; 00609959
    ADD EAX,0x4                         ; 0060995c
    PUSH EAX                            ; 0060995f
    CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 ; 00609960
        ;   XREF to: 00601ce0 (UNCONDITIONAL_CALL)  ; void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
    ADD ESP,0x4                         ; 00609965
    XOR EAX,EAX                         ; 00609968
        ;   Label: LAB_00609968
    ADD ESP,0xc                         ; 0060996a
        ;   Label: LAB_0060996a
    POP EBP                             ; 0060996d
    POP EDI                             ; 0060996e
    POP ESI                             ; 0060996f
    POP EBX                             ; 00609970
    RET                                 ; 00609971

