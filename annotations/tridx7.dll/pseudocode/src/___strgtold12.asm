; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl ___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,int implicit_E)
;
; Parameters:
; _LDBL12 *        Stack[0x4]:4   pld12
; char * *         Stack[0x8]:4   p_end_ptr
; char *           Stack[0xc]:4   str
; int              Stack[0x10]:4   mult12
; int              Stack[0x14]:4   scale
; int              Stack[0x18]:4   decpt
; int              Stack[0x1c]:4   implicit_E
; Local Variables:
; undefined2       Stack[-0x52]:2  local_52
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
; undefined1       Stack[-0x11]:1  local_11
; undefined2       Stack[-0xc]:2  local_c
; undefined4       Stack[-0xa]:4  local_a
; undefined4       Stack[-0x6]:4  local_6
; undefined2       Stack[-0x2]:2  local_2
;
; XREF[2]:
;   FID_conflict:__atodbl at 1000a21a
;   FID_conflict:__atodbl at 1000a29a
;
; Referenced Globals:
;   void* switchdataD_1000cddc = 1000c81c
;   undefined4 PTR_caseD_7_1000cdf8+1
;   void* PTR_caseD_a_1000ce04 = 1000cc65
;   void* switchdataD_1000ce0c = 1000c8d1
;   byte BYTE_1000ce49 = 0x5
;   void* switchdataD_1000ce60 = 1000c9c0
;   byte BYTE_1000ce99 = 0x4
;   void* switchdataD_1000ceb0 = 1000ca67
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_10017690
;   undefined1 DAT_10017694
;
; Called Functions:
;   ___mtold12
;   ___multtenpow12
;   __isctype
;
; *****************************************************************************

section .text

    SUB ESP,0x54                        ; 1000c7b0
        ;   Label: ___strgtold12
    PUSH EBX                            ; 1000c7b3
    PUSH ESI                            ; 1000c7b4
    MOV dword ptr [ESP + 0x20],0x1      ; 1000c7b5
    PUSH EDI                            ; 1000c7bd
    PUSH EBP                            ; 1000c7be
    LEA EBP,[ESP + 0x3c]                ; 1000c7bf
    XOR EDI,EDI                         ; 1000c7c3
    MOV word ptr [ESP + 0x12],DI        ; 1000c7c5
    MOV dword ptr [ESP + 0x14],EDI      ; 1000c7ca
    MOV dword ptr [ESP + 0x20],EDI      ; 1000c7ce
    MOV dword ptr [ESP + 0x30],EDI      ; 1000c7d2
    MOV dword ptr [ESP + 0x2c],EDI      ; 1000c7d6
    MOV dword ptr [ESP + 0x34],EDI      ; 1000c7da
    XOR ECX,ECX                         ; 1000c7de
    MOV ESI,dword ptr [ESP + 0x70]      ; 1000c7e0
    MOV dword ptr [ESP + 0x38],EDI      ; 1000c7e4
    MOV dword ptr [ESP + 0x1c],EDI      ; 1000c7e8
    MOV dword ptr [ESP + 0x24],EDI      ; 1000c7ec
    MOV dword ptr [ESP + 0x18],ESI      ; 1000c7f0
    MOV AL,byte ptr [ESI]               ; 1000c7f4
        ;   Label: LAB_1000c7f4
    CMP AL,0x20                         ; 1000c7f6
    JZ 0x1000c806                       ; 1000c7f8
        ;   XREF to: 1000c806 (CONDITIONAL_JUMP)  ; LAB_1000c806
    CMP AL,0x9                          ; 1000c7fa
    JZ 0x1000c806                       ; 1000c7fc
        ;   XREF to: 1000c806 (CONDITIONAL_JUMP)  ; LAB_1000c806
    CMP AL,0xa                          ; 1000c7fe
    JZ 0x1000c806                       ; 1000c800
        ;   XREF to: 1000c806 (CONDITIONAL_JUMP)  ; LAB_1000c806
    CMP AL,0xd                          ; 1000c802
    JNZ 0x1000c809                      ; 1000c804
        ;   XREF to: 1000c809 (CONDITIONAL_JUMP)  ; LAB_1000c809
    INC ESI                             ; 1000c806
        ;   Label: LAB_1000c806
    JMP 0x1000c7f4                      ; 1000c807
        ;   XREF to: 1000c7f4 (UNCONDITIONAL_JUMP)  ; LAB_1000c7f4
    MOV BL,byte ptr [ESI]               ; 1000c809
        ;   Label: LAB_1000c809
    INC ESI                             ; 1000c80b
    CMP ECX,0xb                         ; 1000c80c
    JA 0x1000cc65                       ; 1000c80f
        ;   XREF to: 1000cc65 (CONDITIONAL_JUMP)  ; caseD_a
    JMP dword ptr [ECX*0x4 + 0x1000cddc] ; 1000c815 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP BL,0x31                         ; 1000c81c
        ;   Label: caseD_0
    JL 0x1000c830                       ; 1000c81f
        ;   XREF to: 1000c830 (CONDITIONAL_JUMP)  ; LAB_1000c830
    CMP BL,0x39                         ; 1000c821
    JG 0x1000c830                       ; 1000c824
        ;   XREF to: 1000c830 (CONDITIONAL_JUMP)  ; LAB_1000c830
    MOV ECX,0x3                         ; 1000c826
    JMP 0x1000cc64                      ; 1000c82b
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    CMP byte ptr [0x10017694],BL        ; 1000c830 | DAT_10017694
        ;   Label: LAB_1000c830
    JNZ 0x1000c842                      ; 1000c836
        ;   XREF to: 1000c842 (CONDITIONAL_JUMP)  ; LAB_1000c842
    MOV ECX,0x5                         ; 1000c838
    JMP 0x1000cc65                      ; 1000c83d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOVSX EAX,BL                        ; 1000c842
        ;   Label: LAB_1000c842
    CMP EAX,0x2b                        ; 1000c845
    JZ 0x1000c859                       ; 1000c848
        ;   XREF to: 1000c859 (CONDITIONAL_JUMP)  ; LAB_1000c859
    CMP EAX,0x2d                        ; 1000c84a
    JZ 0x1000c86a                       ; 1000c84d
        ;   XREF to: 1000c86a (CONDITIONAL_JUMP)  ; LAB_1000c86a
    CMP EAX,0x30                        ; 1000c84f
    JZ 0x1000c87b                       ; 1000c852
        ;   XREF to: 1000c87b (CONDITIONAL_JUMP)  ; LAB_1000c87b
    JMP 0x1000cc5f                      ; 1000c854
        ;   XREF to: 1000cc5f (UNCONDITIONAL_JUMP)  ; caseD_63
    MOV word ptr [ESP + 0x12],0x0       ; 1000c859
        ;   Label: LAB_1000c859
    MOV ECX,0x2                         ; 1000c860
    JMP 0x1000cc65                      ; 1000c865
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV word ptr [ESP + 0x12],0x8000    ; 1000c86a
        ;   Label: LAB_1000c86a
    MOV ECX,0x2                         ; 1000c871
    JMP 0x1000cc65                      ; 1000c876
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x1                         ; 1000c87b
        ;   Label: LAB_1000c87b
    JMP 0x1000cc65                      ; 1000c880
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x20],0x1      ; 1000c885
        ;   Label: caseD_1
    CMP BL,0x31                         ; 1000c88d
    JL 0x1000c8a1                       ; 1000c890
        ;   XREF to: 1000c8a1 (CONDITIONAL_JUMP)  ; LAB_1000c8a1
    CMP BL,0x39                         ; 1000c892
    JG 0x1000c8a1                       ; 1000c895
        ;   XREF to: 1000c8a1 (CONDITIONAL_JUMP)  ; LAB_1000c8a1
    MOV ECX,0x3                         ; 1000c897
    JMP 0x1000cc64                      ; 1000c89c
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    CMP byte ptr [0x10017694],BL        ; 1000c8a1 | DAT_10017694
        ;   Label: LAB_1000c8a1
    JNZ 0x1000c8b3                      ; 1000c8a7
        ;   XREF to: 1000c8b3 (CONDITIONAL_JUMP)  ; LAB_1000c8b3
    MOV ECX,0x4                         ; 1000c8a9
    JMP 0x1000cc65                      ; 1000c8ae
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOVSX ECX,BL                        ; 1000c8b3
        ;   Label: LAB_1000c8b3
    SUB ECX,0x2b                        ; 1000c8b6
    CMP ECX,0x3a                        ; 1000c8b9
    JA 0x1000cc5f                       ; 1000c8bc
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    XOR EAX,EAX                         ; 1000c8c2
    MOV AL,byte ptr [ECX + 0x1000ce24]  ; 1000c8c4 | PTR_caseD_7_1000cdf8+1
    JMP dword ptr [EAX*0x4 + 0x1000ce0c] ; 1000c8ca | caseD_2d | caseD_63 | caseD_30
        ;   Label: switchD
    DEC ESI                             ; 1000c8d1
        ;   Label: caseD_2b
    MOV ECX,0xb                         ; 1000c8d2
    JMP 0x1000cc65                      ; 1000c8d7
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x1                         ; 1000c8dc
        ;   Label: caseD_30
    JMP 0x1000cc65                      ; 1000c8e1
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x6                         ; 1000c8e6
        ;   Label: caseD_44
    JMP 0x1000cc65                      ; 1000c8eb
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP BL,0x31                         ; 1000c8f0
        ;   Label: caseD_2
    JL 0x1000c904                       ; 1000c8f3
        ;   XREF to: 1000c904 (CONDITIONAL_JUMP)  ; LAB_1000c904
    CMP BL,0x39                         ; 1000c8f5
    JG 0x1000c904                       ; 1000c8f8
        ;   XREF to: 1000c904 (CONDITIONAL_JUMP)  ; LAB_1000c904
    MOV ECX,0x3                         ; 1000c8fa
    JMP 0x1000cc64                      ; 1000c8ff
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    CMP byte ptr [0x10017694],BL        ; 1000c904 | DAT_10017694
        ;   Label: LAB_1000c904
    JNZ 0x1000c916                      ; 1000c90a
        ;   XREF to: 1000c916 (CONDITIONAL_JUMP)  ; LAB_1000c916
    MOV ECX,0x5                         ; 1000c90c
    JMP 0x1000cc65                      ; 1000c911
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOVSX EAX,BL                        ; 1000c916
        ;   Label: LAB_1000c916
    CMP EAX,0x30                        ; 1000c919
    JZ 0x1000c92c                       ; 1000c91c
        ;   XREF to: 1000c92c (CONDITIONAL_JUMP)  ; LAB_1000c92c
    MOV ECX,0xa                         ; 1000c91e
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000c923
    JMP 0x1000cc65                      ; 1000c927
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x1                         ; 1000c92c
        ;   Label: LAB_1000c92c
    JMP 0x1000cc65                      ; 1000c931
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x20],0x1      ; 1000c936
        ;   Label: caseD_3
    CMP dword ptr [0x10017690],0x1      ; 1000c93e | DAT_10017690
        ;   Label: LAB_1000c93e
    JLE 0x1000c958                      ; 1000c945
        ;   XREF to: 1000c958 (CONDITIONAL_JUMP)  ; LAB_1000c958
    PUSH 0x4                            ; 1000c947
    XOR EAX,EAX                         ; 1000c949
    MOV AL,BL                           ; 1000c94b
    PUSH EAX                            ; 1000c94d
    CALL __isctype                      ; 1000c94e
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000c953
    JMP 0x1000c96b                      ; 1000c956
        ;   XREF to: 1000c96b (UNCONDITIONAL_JUMP)  ; LAB_1000c96b
    XOR ECX,ECX                         ; 1000c958
        ;   Label: LAB_1000c958
    MOV EDX,dword ptr [0x10017480]      ; 1000c95a | PTR_DAT_10017480
    MOV CL,BL                           ; 1000c960
    XOR EAX,EAX                         ; 1000c962
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000c964 | DAT_1001748a
    AND EAX,0x4                         ; 1000c968
    TEST EAX,EAX                        ; 1000c96b
        ;   Label: LAB_1000c96b
    JZ 0x1000c990                       ; 1000c96d
        ;   XREF to: 1000c990 (CONDITIONAL_JUMP)  ; LAB_1000c990
    CMP dword ptr [ESP + 0x14],0x19     ; 1000c96f
    JNC 0x1000c987                      ; 1000c974
        ;   XREF to: 1000c987 (CONDITIONAL_JUMP)  ; LAB_1000c987
    SUB BL,0x30                         ; 1000c976
    INC EBP                             ; 1000c979
    INC ESI                             ; 1000c97a
    INC dword ptr [ESP + 0x14]          ; 1000c97b
    MOV byte ptr [EBP + -0x1],BL        ; 1000c97f
    MOV BL,byte ptr [ESI + -0x1]        ; 1000c982
    JMP 0x1000c93e                      ; 1000c985
        ;   XREF to: 1000c93e (UNCONDITIONAL_JUMP)  ; LAB_1000c93e
    MOV BL,byte ptr [ESI]               ; 1000c987
        ;   Label: LAB_1000c987
    INC ESI                             ; 1000c989
    INC dword ptr [ESP + 0x1c]          ; 1000c98a
    JMP 0x1000c93e                      ; 1000c98e
        ;   XREF to: 1000c93e (UNCONDITIONAL_JUMP)  ; LAB_1000c93e
    CMP byte ptr [0x10017694],BL        ; 1000c990 | DAT_10017694
        ;   Label: LAB_1000c990
    JNZ 0x1000c9a2                      ; 1000c996
        ;   XREF to: 1000c9a2 (CONDITIONAL_JUMP)  ; LAB_1000c9a2
    MOV ECX,0x4                         ; 1000c998
    JMP 0x1000cc65                      ; 1000c99d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOVSX ECX,BL                        ; 1000c9a2
        ;   Label: LAB_1000c9a2
    SUB ECX,0x2b                        ; 1000c9a5
    CMP ECX,0x3a                        ; 1000c9a8
    JA 0x1000cc5f                       ; 1000c9ab
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    XOR EAX,EAX                         ; 1000c9b1
    MOV AL,byte ptr [ECX + 0x1000ce74]  ; 1000c9b3 | BYTE_1000ce49
    JMP dword ptr [EAX*0x4 + 0x1000ce60] ; 1000c9b9 | caseD_2d | caseD_63 | caseD_65
        ;   Label: switchD
    DEC ESI                             ; 1000c9c0
        ;   Label: caseD_2b
    MOV ECX,0xb                         ; 1000c9c1
    JMP 0x1000cc65                      ; 1000c9c6
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x6                         ; 1000c9cb
        ;   Label: caseD_44
    JMP 0x1000cc65                      ; 1000c9d0
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x20],0x1      ; 1000c9d5
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x30],0x1      ; 1000c9dd
    CMP dword ptr [ESP + 0x14],0x0      ; 1000c9e5
    JNZ 0x1000c9fd                      ; 1000c9ea
        ;   XREF to: 1000c9fd (CONDITIONAL_JUMP)  ; LAB_1000c9fd
    CMP BL,0x30                         ; 1000c9ec
    JNZ 0x1000c9fd                      ; 1000c9ef
        ;   XREF to: 1000c9fd (CONDITIONAL_JUMP)  ; LAB_1000c9fd
    MOV BL,byte ptr [ESI]               ; 1000c9f1
        ;   Label: LAB_1000c9f1
    INC ESI                             ; 1000c9f3
    DEC dword ptr [ESP + 0x1c]          ; 1000c9f4
    CMP BL,0x30                         ; 1000c9f8
    JZ 0x1000c9f1                       ; 1000c9fb
        ;   XREF to: 1000c9f1 (CONDITIONAL_JUMP)  ; LAB_1000c9f1
    CMP dword ptr [0x10017690],0x1      ; 1000c9fd | DAT_10017690
        ;   Label: LAB_1000c9fd
    JLE 0x1000ca17                      ; 1000ca04
        ;   XREF to: 1000ca17 (CONDITIONAL_JUMP)  ; LAB_1000ca17
    PUSH 0x4                            ; 1000ca06
    XOR EAX,EAX                         ; 1000ca08
    MOV AL,BL                           ; 1000ca0a
    PUSH EAX                            ; 1000ca0c
    CALL __isctype                      ; 1000ca0d
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000ca12
    JMP 0x1000ca2a                      ; 1000ca15
        ;   XREF to: 1000ca2a (UNCONDITIONAL_JUMP)  ; LAB_1000ca2a
    XOR ECX,ECX                         ; 1000ca17
        ;   Label: LAB_1000ca17
    MOV EDX,dword ptr [0x10017480]      ; 1000ca19 | PTR_DAT_10017480
    MOV CL,BL                           ; 1000ca1f
    XOR EAX,EAX                         ; 1000ca21
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000ca23 | DAT_1001748a
    AND EAX,0x4                         ; 1000ca27
    TEST EAX,EAX                        ; 1000ca2a
        ;   Label: LAB_1000ca2a
    JZ 0x1000ca49                       ; 1000ca2c
        ;   XREF to: 1000ca49 (CONDITIONAL_JUMP)  ; LAB_1000ca49
    CMP dword ptr [ESP + 0x14],0x19     ; 1000ca2e
    JNC 0x1000ca44                      ; 1000ca33
        ;   XREF to: 1000ca44 (CONDITIONAL_JUMP)  ; LAB_1000ca44
    SUB BL,0x30                         ; 1000ca35
    INC EBP                             ; 1000ca38
    INC dword ptr [ESP + 0x14]          ; 1000ca39
    DEC dword ptr [ESP + 0x1c]          ; 1000ca3d
    MOV byte ptr [EBP + -0x1],BL        ; 1000ca41
    MOV BL,byte ptr [ESI]               ; 1000ca44
        ;   Label: LAB_1000ca44
    INC ESI                             ; 1000ca46
    JMP 0x1000c9fd                      ; 1000ca47
        ;   XREF to: 1000c9fd (UNCONDITIONAL_JUMP)  ; LAB_1000c9fd
    MOVSX ECX,BL                        ; 1000ca49
        ;   Label: LAB_1000ca49
    SUB ECX,0x2b                        ; 1000ca4c
    CMP ECX,0x3a                        ; 1000ca4f
    JA 0x1000cc5f                       ; 1000ca52
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    XOR EAX,EAX                         ; 1000ca58
    MOV AL,byte ptr [ECX + 0x1000cec4]  ; 1000ca5a | BYTE_1000ce99
    JMP dword ptr [EAX*0x4 + 0x1000ceb0] ; 1000ca60 | caseD_2d | caseD_63 | caseD_65
        ;   Label: switchD
    DEC ESI                             ; 1000ca67
        ;   Label: caseD_2b
    MOV ECX,0xb                         ; 1000ca68
    JMP 0x1000cc65                      ; 1000ca6d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x6                         ; 1000ca72
        ;   Label: caseD_44
    JMP 0x1000cc65                      ; 1000ca77
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x30],0x1      ; 1000ca7c
        ;   Label: caseD_5
    CMP dword ptr [0x10017690],0x1      ; 1000ca84 | DAT_10017690
    JLE 0x1000ca9e                      ; 1000ca8b
        ;   XREF to: 1000ca9e (CONDITIONAL_JUMP)  ; LAB_1000ca9e
    PUSH 0x4                            ; 1000ca8d
    XOR EAX,EAX                         ; 1000ca8f
    MOV AL,BL                           ; 1000ca91
    PUSH EAX                            ; 1000ca93
    CALL __isctype                      ; 1000ca94
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000ca99
    JMP 0x1000cab1                      ; 1000ca9c
        ;   XREF to: 1000cab1 (UNCONDITIONAL_JUMP)  ; LAB_1000cab1
    XOR ECX,ECX                         ; 1000ca9e
        ;   Label: LAB_1000ca9e
    MOV EDX,dword ptr [0x10017480]      ; 1000caa0 | PTR_DAT_10017480
    MOV CL,BL                           ; 1000caa6
    XOR EAX,EAX                         ; 1000caa8
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000caaa | DAT_1001748a
    AND EAX,0x4                         ; 1000caae
    TEST EAX,EAX                        ; 1000cab1
        ;   Label: LAB_1000cab1
    JZ 0x1000cabf                       ; 1000cab3
        ;   XREF to: 1000cabf (CONDITIONAL_JUMP)  ; LAB_1000cabf
    MOV ECX,0x4                         ; 1000cab5
    JMP 0x1000cc64                      ; 1000caba
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    MOV ECX,0xa                         ; 1000cabf
        ;   Label: LAB_1000cabf
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000cac4
    JMP 0x1000cc65                      ; 1000cac8
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    LEA EAX,[ESI + -0x2]                ; 1000cacd
        ;   Label: caseD_6
    CMP BL,0x31                         ; 1000cad0
    MOV dword ptr [ESP + 0x18],EAX      ; 1000cad3
    JL 0x1000cae8                       ; 1000cad7
        ;   XREF to: 1000cae8 (CONDITIONAL_JUMP)  ; LAB_1000cae8
    CMP BL,0x39                         ; 1000cad9
    JG 0x1000cae8                       ; 1000cadc
        ;   XREF to: 1000cae8 (CONDITIONAL_JUMP)  ; LAB_1000cae8
    MOV ECX,0x9                         ; 1000cade
    JMP 0x1000cc64                      ; 1000cae3
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    MOVSX EAX,BL                        ; 1000cae8
        ;   Label: LAB_1000cae8
    CMP EAX,0x2b                        ; 1000caeb
    JZ 0x1000cb08                       ; 1000caee
        ;   XREF to: 1000cb08 (CONDITIONAL_JUMP)  ; LAB_1000cb08
    CMP EAX,0x2d                        ; 1000caf0
    JZ 0x1000cb12                       ; 1000caf3
        ;   XREF to: 1000cb12 (CONDITIONAL_JUMP)  ; LAB_1000cb12
    CMP EAX,0x30                        ; 1000caf5
    JZ 0x1000cb24                       ; 1000caf8
        ;   XREF to: 1000cb24 (CONDITIONAL_JUMP)  ; LAB_1000cb24
    MOV ECX,0xa                         ; 1000cafa
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000caff
    JMP 0x1000cc65                      ; 1000cb03
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x7                         ; 1000cb08
        ;   Label: LAB_1000cb08
    JMP 0x1000cc65                      ; 1000cb0d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x28],0xffffffff ; 1000cb12
        ;   Label: LAB_1000cb12
    MOV ECX,0x7                         ; 1000cb1a
    JMP 0x1000cc65                      ; 1000cb1f
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x8                         ; 1000cb24
        ;   Label: LAB_1000cb24
    JMP 0x1000cc65                      ; 1000cb29
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    CMP BL,0x31                         ; 1000cb2e
        ;   Label: caseD_7
    JL 0x1000cb42                       ; 1000cb31
        ;   XREF to: 1000cb42 (CONDITIONAL_JUMP)  ; LAB_1000cb42
    CMP BL,0x39                         ; 1000cb33
    JG 0x1000cb42                       ; 1000cb36
        ;   XREF to: 1000cb42 (CONDITIONAL_JUMP)  ; LAB_1000cb42
    MOV ECX,0x9                         ; 1000cb38
    JMP 0x1000cc64                      ; 1000cb3d
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    MOVSX EAX,BL                        ; 1000cb42
        ;   Label: LAB_1000cb42
    CMP EAX,0x30                        ; 1000cb45
    JZ 0x1000cb58                       ; 1000cb48
        ;   XREF to: 1000cb58 (CONDITIONAL_JUMP)  ; LAB_1000cb58
    MOV ECX,0xa                         ; 1000cb4a
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000cb4f
    JMP 0x1000cc65                      ; 1000cb53
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x8                         ; 1000cb58
        ;   Label: LAB_1000cb58
    JMP 0x1000cc65                      ; 1000cb5d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x2c],0x1      ; 1000cb62
        ;   Label: caseD_8
    CMP BL,0x30                         ; 1000cb6a
    JNZ 0x1000cb77                      ; 1000cb6d
        ;   XREF to: 1000cb77 (CONDITIONAL_JUMP)  ; LAB_1000cb77
    MOV BL,byte ptr [ESI]               ; 1000cb6f
        ;   Label: LAB_1000cb6f
    INC ESI                             ; 1000cb71
    CMP BL,0x30                         ; 1000cb72
    JZ 0x1000cb6f                       ; 1000cb75
        ;   XREF to: 1000cb6f (CONDITIONAL_JUMP)  ; LAB_1000cb6f
    CMP BL,0x31                         ; 1000cb77
        ;   Label: LAB_1000cb77
    JL 0x1000cc5f                       ; 1000cb7a
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    CMP BL,0x39                         ; 1000cb80
    JG 0x1000cc5f                       ; 1000cb83
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    MOV ECX,0x9                         ; 1000cb89
    JMP 0x1000cc64                      ; 1000cb8e
        ;   XREF to: 1000cc64 (UNCONDITIONAL_JUMP)  ; LAB_1000cc64
    MOV dword ptr [ESP + 0x2c],0x1      ; 1000cb93
        ;   Label: caseD_9
    XOR EDI,EDI                         ; 1000cb9b
    CMP dword ptr [0x10017690],0x1      ; 1000cb9d | DAT_10017690
        ;   Label: LAB_1000cb9d
    JLE 0x1000cbb7                      ; 1000cba4
        ;   XREF to: 1000cbb7 (CONDITIONAL_JUMP)  ; LAB_1000cbb7
    PUSH 0x4                            ; 1000cba6
    XOR EAX,EAX                         ; 1000cba8
    MOV AL,BL                           ; 1000cbaa
    PUSH EAX                            ; 1000cbac
    CALL __isctype                      ; 1000cbad
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000cbb2
    JMP 0x1000cbca                      ; 1000cbb5
        ;   XREF to: 1000cbca (UNCONDITIONAL_JUMP)  ; LAB_1000cbca
    XOR ECX,ECX                         ; 1000cbb7
        ;   Label: LAB_1000cbb7
    MOV EDX,dword ptr [0x10017480]      ; 1000cbb9 | PTR_DAT_10017480
    MOV CL,BL                           ; 1000cbbf
    XOR EAX,EAX                         ; 1000cbc1
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000cbc3 | DAT_1001748a
    AND EAX,0x4                         ; 1000cbc7
    TEST EAX,EAX                        ; 1000cbca
        ;   Label: LAB_1000cbca
    JZ 0x1000cbea                       ; 1000cbcc
        ;   XREF to: 1000cbea (CONDITIONAL_JUMP)  ; LAB_1000cbea
    LEA EAX,[EDI + EDI*0x4]             ; 1000cbce
    MOVSX ECX,BL                        ; 1000cbd1
    LEA EDI,[ECX + EAX*0x2 + -0x30]     ; 1000cbd4
    CMP EDI,0x1450                      ; 1000cbd8
    JG 0x1000cbe5                       ; 1000cbde
        ;   XREF to: 1000cbe5 (CONDITIONAL_JUMP)  ; LAB_1000cbe5
    MOV BL,byte ptr [ESI]               ; 1000cbe0
    INC ESI                             ; 1000cbe2
    JMP 0x1000cb9d                      ; 1000cbe3
        ;   XREF to: 1000cb9d (UNCONDITIONAL_JUMP)  ; LAB_1000cb9d
    MOV EDI,0x1451                      ; 1000cbe5
        ;   Label: LAB_1000cbe5
    CMP dword ptr [0x10017690],0x1      ; 1000cbea | DAT_10017690
        ;   Label: LAB_1000cbea
    JLE 0x1000cc04                      ; 1000cbf1
        ;   XREF to: 1000cc04 (CONDITIONAL_JUMP)  ; LAB_1000cc04
    PUSH 0x4                            ; 1000cbf3
    XOR EAX,EAX                         ; 1000cbf5
    MOV AL,BL                           ; 1000cbf7
    PUSH EAX                            ; 1000cbf9
    CALL __isctype                      ; 1000cbfa
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int __isctype(int _C, int _Type)
    ADD ESP,0x8                         ; 1000cbff
    JMP 0x1000cc17                      ; 1000cc02
        ;   XREF to: 1000cc17 (UNCONDITIONAL_JUMP)  ; LAB_1000cc17
    XOR ECX,ECX                         ; 1000cc04
        ;   Label: LAB_1000cc04
    MOV EDX,dword ptr [0x10017480]      ; 1000cc06 | PTR_DAT_10017480
    MOV CL,BL                           ; 1000cc0c
    XOR EAX,EAX                         ; 1000cc0e
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000cc10 | DAT_1001748a
    AND EAX,0x4                         ; 1000cc14
    TEST EAX,EAX                        ; 1000cc17
        ;   Label: LAB_1000cc17
    JZ 0x1000cc5f                       ; 1000cc19
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    MOV BL,byte ptr [ESI]               ; 1000cc1b
    INC ESI                             ; 1000cc1d
    JMP 0x1000cbea                      ; 1000cc1e
        ;   XREF to: 1000cbea (UNCONDITIONAL_JUMP)  ; LAB_1000cbea
    CMP dword ptr [ESP + 0x80],0x0      ; 1000cc20
        ;   Label: caseD_b
    JZ 0x1000cc5f                       ; 1000cc28
        ;   XREF to: 1000cc5f (CONDITIONAL_JUMP)  ; caseD_63
    LEA EAX,[ESI + -0x1]                ; 1000cc2a
    MOV dword ptr [ESP + 0x18],EAX      ; 1000cc2d
    MOVSX EAX,BL                        ; 1000cc31
    CMP EAX,0x2b                        ; 1000cc34
    JZ 0x1000cc49                       ; 1000cc37
        ;   XREF to: 1000cc49 (CONDITIONAL_JUMP)  ; LAB_1000cc49
    CMP EAX,0x2d                        ; 1000cc39
    JZ 0x1000cc50                       ; 1000cc3c
        ;   XREF to: 1000cc50 (CONDITIONAL_JUMP)  ; LAB_1000cc50
    MOV ECX,0xa                         ; 1000cc3e
    MOV ESI,dword ptr [ESP + 0x18]      ; 1000cc43
    JMP 0x1000cc65                      ; 1000cc47
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0x7                         ; 1000cc49
        ;   Label: LAB_1000cc49
    JMP 0x1000cc65                      ; 1000cc4e
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV dword ptr [ESP + 0x28],0xffffffff ; 1000cc50
        ;   Label: LAB_1000cc50
    MOV ECX,0x7                         ; 1000cc58
    JMP 0x1000cc65                      ; 1000cc5d
        ;   XREF to: 1000cc65 (UNCONDITIONAL_JUMP)  ; caseD_a
    MOV ECX,0xa                         ; 1000cc5f
        ;   Label: caseD_2c
    DEC ESI                             ; 1000cc64
        ;   Label: LAB_1000cc64
    CMP ECX,0xa                         ; 1000cc65
        ;   Label: caseD_a
    JNZ 0x1000c809                      ; 1000cc68
        ;   XREF to: 1000c809 (CONDITIONAL_JUMP)  ; LAB_1000c809
    MOV EAX,dword ptr [ESP + 0x6c]      ; 1000cc6e
    CMP dword ptr [ESP + 0x20],0x0      ; 1000cc72
    MOV dword ptr [EAX],ESI             ; 1000cc77
    JZ 0x1000cd50                       ; 1000cc79
        ;   XREF to: 1000cd50 (CONDITIONAL_JUMP)  ; LAB_1000cd50
    CMP dword ptr [ESP + 0x14],0x18     ; 1000cc7f
    JBE 0x1000cc9e                      ; 1000cc84
        ;   XREF to: 1000cc9e (CONDITIONAL_JUMP)  ; LAB_1000cc9e
    CMP byte ptr [ESP + 0x53],0x5       ; 1000cc86
    JL 0x1000cc91                       ; 1000cc8b
        ;   XREF to: 1000cc91 (CONDITIONAL_JUMP)  ; LAB_1000cc91
    INC byte ptr [ESP + 0x53]           ; 1000cc8d
    DEC EBP                             ; 1000cc91
        ;   Label: LAB_1000cc91
    INC dword ptr [ESP + 0x1c]          ; 1000cc92
    MOV dword ptr [ESP + 0x14],0x18     ; 1000cc96
    CMP dword ptr [ESP + 0x14],0x0      ; 1000cc9e
        ;   Label: LAB_1000cc9e
    JZ 0x1000cd44                       ; 1000cca3
        ;   XREF to: 1000cd44 (CONDITIONAL_JUMP)  ; LAB_1000cd44
    DEC EBP                             ; 1000cca9
    CMP byte ptr [EBP],0x0              ; 1000ccaa
    JNZ 0x1000ccbf                      ; 1000ccae
        ;   XREF to: 1000ccbf (CONDITIONAL_JUMP)  ; LAB_1000ccbf
    DEC EBP                             ; 1000ccb0
        ;   Label: LAB_1000ccb0
    DEC dword ptr [ESP + 0x14]          ; 1000ccb1
    INC dword ptr [ESP + 0x1c]          ; 1000ccb5
    CMP byte ptr [EBP],0x0              ; 1000ccb9
    JZ 0x1000ccb0                       ; 1000ccbd
        ;   XREF to: 1000ccb0 (CONDITIONAL_JUMP)  ; LAB_1000ccb0
    LEA EAX,[ESP + 0x58]                ; 1000ccbf
        ;   Label: LAB_1000ccbf
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000ccc3
    LEA EDX,[ESP + 0x3c]                ; 1000ccc7
    PUSH EAX                            ; 1000cccb
    PUSH ECX                            ; 1000cccc
    PUSH EDX                            ; 1000cccd
    CALL ___mtold12                     ; 1000ccce
        ;   XREF to: 1000c6c0 (UNCONDITIONAL_CALL)  ; undefined ___mtold12()
    ADD ESP,0xc                         ; 1000ccd3
    CMP dword ptr [ESP + 0x28],0x0      ; 1000ccd6
    JGE 0x1000ccdf                      ; 1000ccdb
        ;   XREF to: 1000ccdf (CONDITIONAL_JUMP)  ; LAB_1000ccdf
    NEG EDI                             ; 1000ccdd
    ADD EDI,dword ptr [ESP + 0x1c]      ; 1000ccdf
        ;   Label: LAB_1000ccdf
    CMP dword ptr [ESP + 0x2c],0x0      ; 1000cce3
    JNZ 0x1000ccee                      ; 1000cce8
        ;   XREF to: 1000ccee (CONDITIONAL_JUMP)  ; LAB_1000ccee
    ADD EDI,dword ptr [ESP + 0x78]      ; 1000ccea
    CMP dword ptr [ESP + 0x30],0x0      ; 1000ccee
        ;   Label: LAB_1000ccee
    JNZ 0x1000ccf9                      ; 1000ccf3
        ;   XREF to: 1000ccf9 (CONDITIONAL_JUMP)  ; LAB_1000ccf9
    SUB EDI,dword ptr [ESP + 0x7c]      ; 1000ccf5
    CMP EDI,0x1450                      ; 1000ccf9
        ;   Label: LAB_1000ccf9
    JLE 0x1000cd0b                      ; 1000ccff
        ;   XREF to: 1000cd0b (CONDITIONAL_JUMP)  ; LAB_1000cd0b
    MOV dword ptr [ESP + 0x34],0x1      ; 1000cd01
    JMP 0x1000cd50                      ; 1000cd09
        ;   XREF to: 1000cd50 (UNCONDITIONAL_JUMP)  ; LAB_1000cd50
    CMP EDI,0xffffebb0                  ; 1000cd0b
        ;   Label: LAB_1000cd0b
    JGE 0x1000cd1d                      ; 1000cd11
        ;   XREF to: 1000cd1d (CONDITIONAL_JUMP)  ; LAB_1000cd1d
    MOV dword ptr [ESP + 0x38],0x1      ; 1000cd13
    JMP 0x1000cd50                      ; 1000cd1b
        ;   XREF to: 1000cd50 (UNCONDITIONAL_JUMP)  ; LAB_1000cd50
    MOV EAX,dword ptr [ESP + 0x74]      ; 1000cd1d
        ;   Label: LAB_1000cd1d
    LEA ECX,[ESP + 0x58]                ; 1000cd21
    PUSH EAX                            ; 1000cd25
    PUSH EDI                            ; 1000cd26
    PUSH ECX                            ; 1000cd27
    CALL ___multtenpow12                ; 1000cd28
        ;   XREF to: 1000eba0 (UNCONDITIONAL_CALL)  ; undefined ___multtenpow12()
    MOV CX,word ptr [ESP + 0x64]        ; 1000cd2d
    MOV EDX,dword ptr [ESP + 0x66]      ; 1000cd32
    MOV SI,word ptr [ESP + 0x6e]        ; 1000cd36
    MOV EDI,dword ptr [ESP + 0x6a]      ; 1000cd3b
    ADD ESP,0xc                         ; 1000cd3f
    JMP 0x1000cd62                      ; 1000cd42
        ;   XREF to: 1000cd62 (UNCONDITIONAL_JUMP)  ; LAB_1000cd62
    XOR CX,CX                           ; 1000cd44
        ;   Label: LAB_1000cd44
    XOR EDI,EDI                         ; 1000cd47
    XOR SI,SI                           ; 1000cd49
    XOR EDX,EDX                         ; 1000cd4c
    JMP 0x1000cd62                      ; 1000cd4e
        ;   XREF to: 1000cd62 (UNCONDITIONAL_JUMP)  ; LAB_1000cd62
    MOV CX,word ptr [ESP + 0x3c]        ; 1000cd50
        ;   Label: LAB_1000cd50
    MOV EDX,dword ptr [ESP + 0x3c]      ; 1000cd55
    MOV SI,word ptr [ESP + 0x3c]        ; 1000cd59
    MOV EDI,dword ptr [ESP + 0x3c]      ; 1000cd5e
    CMP dword ptr [ESP + 0x20],0x0      ; 1000cd62
        ;   Label: LAB_1000cd62
    JNZ 0x1000cd7d                      ; 1000cd67
        ;   XREF to: 1000cd7d (CONDITIONAL_JUMP)  ; LAB_1000cd7d
    XOR CX,CX                           ; 1000cd69
    XOR EDI,EDI                         ; 1000cd6c
    XOR SI,SI                           ; 1000cd6e
    XOR EDX,EDX                         ; 1000cd71
    MOV dword ptr [ESP + 0x24],0x4      ; 1000cd73
    JMP 0x1000cdb5                      ; 1000cd7b
        ;   XREF to: 1000cdb5 (UNCONDITIONAL_JUMP)  ; LAB_1000cdb5
    CMP dword ptr [ESP + 0x34],0x0      ; 1000cd7d
        ;   Label: LAB_1000cd7d
    JZ 0x1000cd9c                       ; 1000cd82
        ;   XREF to: 1000cd9c (CONDITIONAL_JUMP)  ; LAB_1000cd9c
    MOV SI,0x7fff                       ; 1000cd84
    MOV EDI,0x80000000                  ; 1000cd88
    XOR CX,CX                           ; 1000cd8d
    XOR EDX,EDX                         ; 1000cd90
    MOV dword ptr [ESP + 0x24],0x2      ; 1000cd92
    JMP 0x1000cdb5                      ; 1000cd9a
        ;   XREF to: 1000cdb5 (UNCONDITIONAL_JUMP)  ; LAB_1000cdb5
    CMP dword ptr [ESP + 0x38],0x0      ; 1000cd9c
        ;   Label: LAB_1000cd9c
    JZ 0x1000cdb5                       ; 1000cda1
        ;   XREF to: 1000cdb5 (CONDITIONAL_JUMP)  ; LAB_1000cdb5
    XOR CX,CX                           ; 1000cda3
    XOR EDI,EDI                         ; 1000cda6
    XOR SI,SI                           ; 1000cda8
    XOR EDX,EDX                         ; 1000cdab
    MOV dword ptr [ESP + 0x24],0x1      ; 1000cdad
    MOV AX,word ptr [ESP + 0x12]        ; 1000cdb5
        ;   Label: LAB_1000cdb5
    MOV EBX,dword ptr [ESP + 0x68]      ; 1000cdba
    OR AX,SI                            ; 1000cdbe
    MOV dword ptr [EBX + 0x2],EDX       ; 1000cdc1
    MOV word ptr [EBX],CX               ; 1000cdc4
    MOV dword ptr [EBX + 0x6],EDI       ; 1000cdc7
    MOV word ptr [EBX + 0xa],AX         ; 1000cdca
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000cdce
    POP EBP                             ; 1000cdd2
    POP EDI                             ; 1000cdd3
    POP ESI                             ; 1000cdd4
    POP EBX                             ; 1000cdd5
    ADD ESP,0x54                        ; 1000cdd6
    RET                                 ; 1000cdd9

