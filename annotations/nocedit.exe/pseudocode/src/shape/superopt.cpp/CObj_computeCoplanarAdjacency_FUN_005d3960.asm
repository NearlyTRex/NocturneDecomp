; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960(CObj *this_ptr,int update_adjacency)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   update_adjacency
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
;
; Called Functions:
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3960
        ;   Label: shape_superopt.cpp_CObj_computeCoplanarAdjacency_FUN_005d3960
    PUSH ESI                            ; 005d3961
    PUSH EDI                            ; 005d3962
    PUSH EBP                            ; 005d3963
    MOV EBP,ESP                         ; 005d3964
    SUB ESP,0x5c                        ; 005d3966
    AND ESP,0xfffffff8                  ; 005d3969
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d396c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d396f
    XOR EDX,EDX                         ; 005d3972
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d3974
    MOV dword ptr [ESP + 0x8],EDX       ; 005d3977
    MOV ECX,dword ptr [EAX + 0x8]       ; 005d397b
    MOV EBX,dword ptr [EBX + 0xc]       ; 005d397e
    CMP ECX,0x7d0                       ; 005d3981
    JA 0x005d3b29                       ; 005d3987
        ;   XREF to: 005d3b29 (CONDITIONAL_JUMP)  ; LAB_005d3b29
    MOV EAX,0x3fefff2e                  ; 005d398d
        ;   Label: LAB_005d398d
    MOV ESI,0x48e8a71e                  ; 005d3992
    MOV dword ptr [ESP + 0x4],EAX       ; 005d3997
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d399b
    MOV dword ptr [ESP],ESI             ; 005d399e
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d39a1
    XOR ESI,ESI                         ; 005d39a4
    TEST EDX,EDX                        ; 005d39a6
    JBE 0x005d39cd                      ; 005d39a8
        ;   XREF to: 005d39cd (CONDITIONAL_JUMP)  ; LAB_005d39cd
    PUSH EBX                            ; 005d39aa
        ;   Label: LAB_005d39aa
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d39ab
    CALL dword ptr [EAX + 0x44]         ; 005d39ae
    ADD ESP,0x4                         ; 005d39b1
    TEST EDI,EDI                        ; 005d39b4
    JZ 0x005d39bf                       ; 005d39b6
        ;   XREF to: 005d39bf (CONDITIONAL_JUMP)  ; LAB_005d39bf
    MOV dword ptr [EBX + 0x58],0x7      ; 005d39b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d39bf
        ;   Label: LAB_005d39bf
    INC ESI                             ; 005d39c2
    MOV ECX,dword ptr [EAX + 0x8]       ; 005d39c3
    ADD EBX,0x68                        ; 005d39c6
    CMP ESI,ECX                         ; 005d39c9
    JC 0x005d39aa                       ; 005d39cb
        ;   XREF to: 005d39aa (CONDITIONAL_JUMP)  ; LAB_005d39aa
    TEST EDI,EDI                        ; 005d39cd
        ;   Label: LAB_005d39cd
    JZ 0x005d3b15                       ; 005d39cf
        ;   XREF to: 005d3b15 (CONDITIONAL_JUMP)  ; LAB_005d3b15
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d39d5
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d39d8
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d39db
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d39df
    XOR EBX,EBX                         ; 005d39e2
    MOV ESI,dword ptr [EAX + 0x8]       ; 005d39e4
    MOV dword ptr [ESP + 0x14],EBX      ; 005d39e7
    TEST ESI,ESI                        ; 005d39eb
    JBE 0x005d3b15                      ; 005d39ed
        ;   XREF to: 005d3b15 (CONDITIONAL_JUMP)  ; LAB_005d3b15
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d39f3
    ADD EAX,0x58                        ; 005d39f7
    MOV dword ptr [ESP + 0x18],EAX      ; 005d39fa
    MOV dword ptr [ESP + 0xc],0x68      ; 005d39fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d3a06
    ADD EAX,0x40                        ; 005d3a0a
    MOV dword ptr [ESP + 0x10],EAX      ; 005d3a0d
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d3a11
        ;   Label: LAB_005d3a11
    MOV EAX,dword ptr [EDX]             ; 005d3a15
    AND EAX,0x38                        ; 005d3a17
    CMP EAX,0x38                        ; 005d3a1a
    JZ 0x005d3ac9                       ; 005d3a1d
        ;   XREF to: 005d3ac9 (CONDITIONAL_JUMP)  ; LAB_005d3ac9
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d3a23
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d3a26
    MOV ECX,dword ptr [ECX + 0xc]       ; 005d3a2a
    ADD EBX,ECX                         ; 005d3a2d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005d3a2f
    MOV ECX,dword ptr [ECX + 0x4]       ; 005d3a33
    MOV dword ptr [ESP + 0x48],ECX      ; 005d3a36
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005d3a3a
    MOV ECX,dword ptr [ECX + 0x8]       ; 005d3a3e
    MOV dword ptr [ESP + 0x4c],ECX      ; 005d3a41
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005d3a45
    MOV ECX,dword ptr [ECX + 0xc]       ; 005d3a49
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d3a4c
    MOV dword ptr [ESP + 0x50],ECX      ; 005d3a50
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d3a54
    INC EAX                             ; 005d3a57
    MOV dword ptr [ESP + 0x3c],EBX      ; 005d3a58
    MOV EBX,dword ptr [ECX + 0x8]       ; 005d3a5c
    MOV dword ptr [ESP + 0x44],EAX      ; 005d3a5f
    CMP EAX,EBX                         ; 005d3a63
    JNC 0x005d3ac9                      ; 005d3a65
        ;   XREF to: 005d3ac9 (CONDITIONAL_JUMP)  ; LAB_005d3ac9
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d3a67
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005d3a6b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005d3a6f
    MOV dword ptr [ESP + 0x40],EAX      ; 005d3a73
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005d3a77
    ADD EBX,0x58                        ; 005d3a7b
    ADD EAX,0x40                        ; 005d3a7e
    ADD ESI,0x4                         ; 005d3a81
    MOV dword ptr [ESP + 0x54],EAX      ; 005d3a84
    MOV EAX,dword ptr [EBX]             ; 005d3a88
        ;   Label: LAB_005d3a88
    AND EAX,0x38                        ; 005d3a8a
    MOV ECX,EBX                         ; 005d3a8d
    CMP EAX,0x38                        ; 005d3a8f
    JNZ 0x005d3b3c                      ; 005d3a92
        ;   XREF to: 005d3b3c (CONDITIONAL_JUMP)  ; LAB_005d3b3c
    MOV EDI,dword ptr [ESP + 0x44]      ; 005d3a98
        ;   Label: LAB_005d3a98
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d3a9c
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005d3aa0
    ADD EBX,0x68                        ; 005d3aa4
    INC EDI                             ; 005d3aa7
    ADD EAX,0x68                        ; 005d3aa8
    ADD ECX,0x68                        ; 005d3aab
    MOV dword ptr [ESP + 0x44],EDI      ; 005d3aae
    MOV dword ptr [ESP + 0x3c],ECX      ; 005d3ab2
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d3ab6
    MOV dword ptr [ESP + 0x54],EAX      ; 005d3ab9
    MOV EAX,EDI                         ; 005d3abd
    MOV EDI,dword ptr [ECX + 0x8]       ; 005d3abf
    ADD ESI,0x68                        ; 005d3ac2
    CMP EAX,EDI                         ; 005d3ac5
    JC 0x005d3a88                       ; 005d3ac7
        ;   XREF to: 005d3a88 (CONDITIONAL_JUMP)  ; LAB_005d3a88
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d3ac9
        ;   Label: LAB_005d3ac9
    MOV ECX,dword ptr [ESP + 0x18]      ; 005d3acd
    MOV EBX,dword ptr [ESP + 0x10]      ; 005d3ad1
    MOV EDI,dword ptr [EDX]             ; 005d3ad5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005d3ad7
    AND EDI,0x7                         ; 005d3adb
    ADD EAX,0x68                        ; 005d3ade
    ADD ECX,0x68                        ; 005d3ae1
    ADD EBX,0x68                        ; 005d3ae4
    MOV dword ptr [EDX],EDI             ; 005d3ae7
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d3ae9
    ADD ESI,0x68                        ; 005d3aed
    INC EDX                             ; 005d3af0
    MOV dword ptr [ESP + 0xc],EAX       ; 005d3af1
    MOV dword ptr [ESP + 0x14],EDX      ; 005d3af5
    MOV EAX,EDX                         ; 005d3af9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d3afb
    MOV dword ptr [ESP + 0x18],ECX      ; 005d3afe
    MOV dword ptr [ESP + 0x10],EBX      ; 005d3b02
    MOV EDI,dword ptr [EDX + 0x8]       ; 005d3b06
    MOV dword ptr [ESP + 0x1c],ESI      ; 005d3b09
    CMP EAX,EDI                         ; 005d3b0d
    JC 0x005d3a11                       ; 005d3b0f
        ;   XREF to: 005d3a11 (CONDITIONAL_JUMP)  ; LAB_005d3a11
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d3b15
        ;   Label: LAB_005d3b15
    PUSH EAX                            ; 005d3b19
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d3b1a
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d3b1f
    MOV ESP,EBP                         ; 005d3b22
    POP EBP                             ; 005d3b24
    POP EDI                             ; 005d3b25
    POP ESI                             ; 005d3b26
    POP EBX                             ; 005d3b27
    RET                                 ; 005d3b28
    PUSH 0x4                            ; 005d3b29
        ;   Label: LAB_005d3b29
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d3b2b
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005d3b30
    MOV dword ptr [ESP + 0x8],EAX       ; 005d3b33
    JMP 0x005d398d                      ; 005d3b37
        ;   XREF to: 005d398d (UNCONDITIONAL_JUMP)  ; LAB_005d398d
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d3b3c
        ;   Label: LAB_005d3b3c
    FLD double ptr [EAX + 0x8]          ; 005d3b40
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d3b43
    FMUL double ptr [EAX + 0x8]         ; 005d3b47
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d3b4a
    FLD double ptr [EAX]                ; 005d3b4e
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d3b50
    FMUL double ptr [EAX]               ; 005d3b54
    FADDP                               ; 005d3b56
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d3b58
    FLD double ptr [EAX + 0x10]         ; 005d3b5c
    MOV EAX,dword ptr [ESP + 0x54]      ; 005d3b5f
    FMUL double ptr [EAX + 0x10]        ; 005d3b63
    FADDP                               ; 005d3b66
    FCOMP double ptr [ESP]              ; 005d3b68
    FNSTSW AX                           ; 005d3b6b
    SAHF                                ; 005d3b6d
    JC 0x005d3a98                       ; 005d3b6e
        ;   XREF to: 005d3a98 (CONDITIONAL_JUMP)  ; LAB_005d3a98
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d3b74
    MOV EDI,dword ptr [ESI]             ; 005d3b78
    CMP EAX,EDI                         ; 005d3b7a
    SETZ AL                             ; 005d3b7c
    AND EAX,0xff                        ; 005d3b7f
    ADD EAX,EAX                         ; 005d3b84
    MOV dword ptr [ESP + 0x38],EAX      ; 005d3b86
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005d3b8a
    CMP EAX,EDI                         ; 005d3b8e
    SETZ AL                             ; 005d3b90
    AND EAX,0xff                        ; 005d3b93
    MOV EDI,dword ptr [ESP + 0x38]      ; 005d3b98
    SHL EAX,0x2                         ; 005d3b9c
    OR EDI,EAX                          ; 005d3b9f
    MOV EAX,dword ptr [ESP + 0x50]      ; 005d3ba1
    MOV dword ptr [ESP + 0x20],EDI      ; 005d3ba5
    CMP EAX,dword ptr [ESI]             ; 005d3ba9
    SETZ AL                             ; 005d3bab
    AND EAX,0xff                        ; 005d3bae
    MOV EDI,dword ptr [ESP + 0x20]      ; 005d3bb3
    SHL EAX,0x3                         ; 005d3bb7
    OR EDI,EAX                          ; 005d3bba
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d3bbc
    MOV dword ptr [ESP + 0x28],EDI      ; 005d3bc0
    CMP EAX,dword ptr [ESI + 0x4]       ; 005d3bc4
    SETZ AL                             ; 005d3bc7
    AND EAX,0xff                        ; 005d3bca
    MOV EDI,dword ptr [ESP + 0x28]      ; 005d3bcf
    SHL EAX,0x4                         ; 005d3bd3
    OR EDI,EAX                          ; 005d3bd6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005d3bd8
    MOV dword ptr [ESP + 0x34],EDI      ; 005d3bdc
    CMP EAX,dword ptr [ESI + 0x4]       ; 005d3be0
    SETZ AL                             ; 005d3be3
    AND EAX,0xff                        ; 005d3be6
    MOV EDI,dword ptr [ESP + 0x34]      ; 005d3beb
    SHL EAX,0x5                         ; 005d3bef
    OR EDI,EAX                          ; 005d3bf2
    MOV EAX,dword ptr [ESP + 0x50]      ; 005d3bf4
    MOV dword ptr [ESP + 0x24],EDI      ; 005d3bf8
    CMP EAX,dword ptr [ESI + 0x4]       ; 005d3bfc
    SETZ AL                             ; 005d3bff
    AND EAX,0xff                        ; 005d3c02
    MOV EDI,dword ptr [ESP + 0x24]      ; 005d3c07
    SHL EAX,0x6                         ; 005d3c0b
    OR EAX,EDI                          ; 005d3c0e
    MOV EDI,dword ptr [ESP + 0x48]      ; 005d3c10
    CMP EDI,dword ptr [ESI + 0x8]       ; 005d3c14
    SETZ byte ptr [ESP + 0x58]          ; 005d3c17
    MOVZX EDI,byte ptr [ESP + 0x58]     ; 005d3c1c
    SHL EDI,0x7                         ; 005d3c21
    OR EDI,EAX                          ; 005d3c24
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005d3c26
    MOV dword ptr [ESP + 0x30],EDI      ; 005d3c2a
    CMP EAX,dword ptr [ESI + 0x8]       ; 005d3c2e
    SETZ AL                             ; 005d3c31
    AND EAX,0xff                        ; 005d3c34
    MOV EDI,dword ptr [ESP + 0x30]      ; 005d3c39
    SHL EAX,0x8                         ; 005d3c3d
    OR EDI,EAX                          ; 005d3c40
    MOV EAX,dword ptr [ESP + 0x50]      ; 005d3c42
    MOV dword ptr [ESP + 0x2c],EDI      ; 005d3c46
    CMP EAX,dword ptr [ESI + 0x8]       ; 005d3c4a
    SETZ AL                             ; 005d3c4d
    AND EAX,0xff                        ; 005d3c50
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005d3c55
    SHL EAX,0x9                         ; 005d3c59
    OR EAX,EDI                          ; 005d3c5c
    MOV EDI,EAX                         ; 005d3c5e
    AND EDI,0x14                        ; 005d3c60
    CMP EDI,0x14                        ; 005d3c63
    JNZ 0x005d3cc7                      ; 005d3c66
        ;   XREF to: 005d3cc7 (CONDITIONAL_JUMP)  ; LAB_005d3cc7
    AND byte ptr [EDX],0xf6             ; 005d3c68
    OR byte ptr [EDX],0x8               ; 005d3c6b
    AND byte ptr [EBX],0xf6             ; 005d3c6e
    OR byte ptr [EBX],0x8               ; 005d3c71
    MOV EDI,EAX                         ; 005d3c74
        ;   Label: LAB_005d3c74
    AND EDI,0x140                       ; 005d3c76
    CMP EDI,0x140                       ; 005d3c7c
    JNZ 0x005d3d0a                      ; 005d3c82
        ;   XREF to: 005d3d0a (CONDITIONAL_JUMP)  ; LAB_005d3d0a
    AND byte ptr [EDX],0xed             ; 005d3c88
    OR byte ptr [EDX],0x10              ; 005d3c8b
    AND byte ptr [ECX],0xed             ; 005d3c8e
    OR byte ptr [ECX],0x10              ; 005d3c91
    MOV EDI,EAX                         ; 005d3c94
        ;   Label: LAB_005d3c94
    AND EDI,0x88                        ; 005d3c96
    CMP EDI,0x88                        ; 005d3c9c
    JNZ 0x005d3d4a                      ; 005d3ca2
        ;   XREF to: 005d3d4a (CONDITIONAL_JUMP)  ; LAB_005d3d4a
    MOV AH,byte ptr [EDX]               ; 005d3ca8
    AND AH,0xdb                         ; 005d3caa
    MOV byte ptr [EDX],AH               ; 005d3cad
    MOV AL,AH                           ; 005d3caf
    OR AL,0x20                          ; 005d3cb1
    MOV byte ptr [EDX],AL               ; 005d3cb3
    MOV AH,byte ptr [ECX]               ; 005d3cb5
    AND AH,0xdb                         ; 005d3cb7
    MOV byte ptr [ECX],AH               ; 005d3cba
    MOV AL,AH                           ; 005d3cbc
    OR AL,0x20                          ; 005d3cbe
    MOV byte ptr [ECX],AL               ; 005d3cc0
    JMP 0x005d3a98                      ; 005d3cc2
        ;   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)  ; LAB_005d3a98
    MOV EDI,EAX                         ; 005d3cc7
        ;   Label: LAB_005d3cc7
    AND EDI,0xa0                        ; 005d3cc9
    CMP EDI,0xa0                        ; 005d3ccf
    JNZ 0x005d3ce5                      ; 005d3cd5
        ;   XREF to: 005d3ce5 (CONDITIONAL_JUMP)  ; LAB_005d3ce5
    AND byte ptr [EDX],0xf6             ; 005d3cd7
    OR byte ptr [EDX],0x8               ; 005d3cda
    AND byte ptr [EBX],0xed             ; 005d3cdd
    OR byte ptr [EBX],0x10              ; 005d3ce0
    JMP 0x005d3c74                      ; 005d3ce3
        ;   XREF to: 005d3c74 (UNCONDITIONAL_JUMP)  ; LAB_005d3c74
    MOV EDI,EAX                         ; 005d3ce5
        ;   Label: LAB_005d3ce5
    AND EDI,0x102                       ; 005d3ce7
    CMP EDI,0x102                       ; 005d3ced
    JNZ 0x005d3c74                      ; 005d3cf3
        ;   XREF to: 005d3c74 (CONDITIONAL_JUMP)  ; LAB_005d3c74
    AND byte ptr [EDX],0xf6             ; 005d3cf9
    OR byte ptr [EDX],0x8               ; 005d3cfc
    AND byte ptr [EBX],0xdb             ; 005d3cff
    OR byte ptr [EBX],0x20              ; 005d3d02
    JMP 0x005d3c74                      ; 005d3d05
        ;   XREF to: 005d3c74 (UNCONDITIONAL_JUMP)  ; LAB_005d3c74
    MOV EDI,EAX                         ; 005d3d0a
        ;   Label: LAB_005d3d0a
    AND EDI,0x204                       ; 005d3d0c
    CMP EDI,0x204                       ; 005d3d12
    JNZ 0x005d3d2b                      ; 005d3d18
        ;   XREF to: 005d3d2b (CONDITIONAL_JUMP)  ; LAB_005d3d2b
    AND byte ptr [EDX],0xed             ; 005d3d1a
    OR byte ptr [EDX],0x10              ; 005d3d1d
    AND byte ptr [ECX],0xdb             ; 005d3d20
    OR byte ptr [ECX],0x20              ; 005d3d23
    JMP 0x005d3c94                      ; 005d3d26
        ;   XREF to: 005d3c94 (UNCONDITIONAL_JUMP)  ; LAB_005d3c94
    MOV EDI,EAX                         ; 005d3d2b
        ;   Label: LAB_005d3d2b
    AND EDI,0x28                        ; 005d3d2d
    CMP EDI,0x28                        ; 005d3d30
    JNZ 0x005d3c94                      ; 005d3d33
        ;   XREF to: 005d3c94 (CONDITIONAL_JUMP)  ; LAB_005d3c94
    AND byte ptr [EDX],0xed             ; 005d3d39
    OR byte ptr [EDX],0x10              ; 005d3d3c
    AND byte ptr [ECX],0xf6             ; 005d3d3f
    OR byte ptr [ECX],0x8               ; 005d3d42
    JMP 0x005d3c94                      ; 005d3d45
        ;   XREF to: 005d3c94 (UNCONDITIONAL_JUMP)  ; LAB_005d3c94
    MOV EDI,EAX                         ; 005d3d4a
        ;   Label: LAB_005d3d4a
    AND EDI,0x42                        ; 005d3d4c
    CMP EDI,0x42                        ; 005d3d4f
    JNZ 0x005d3d73                      ; 005d3d52
        ;   XREF to: 005d3d73 (CONDITIONAL_JUMP)  ; LAB_005d3d73
    MOV AH,byte ptr [EDX]               ; 005d3d54
    AND AH,0xdb                         ; 005d3d56
    MOV byte ptr [EDX],AH               ; 005d3d59
    MOV AL,AH                           ; 005d3d5b
    OR AL,0x20                          ; 005d3d5d
    MOV byte ptr [EDX],AL               ; 005d3d5f
    MOV AH,byte ptr [ECX]               ; 005d3d61
    AND AH,0xf6                         ; 005d3d63
    MOV byte ptr [ECX],AH               ; 005d3d66
    MOV AL,AH                           ; 005d3d68
    OR AL,0x8                           ; 005d3d6a
    MOV byte ptr [ECX],AL               ; 005d3d6c
    JMP 0x005d3a98                      ; 005d3d6e
        ;   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)  ; LAB_005d3a98
    AND EAX,0x210                       ; 005d3d73
        ;   Label: LAB_005d3d73
    CMP EAX,0x210                       ; 005d3d78
    JNZ 0x005d3a98                      ; 005d3d7d
        ;   XREF to: 005d3a98 (CONDITIONAL_JUMP)  ; LAB_005d3a98
    MOV AH,byte ptr [EDX]               ; 005d3d83
    AND AH,0xdb                         ; 005d3d85
    MOV byte ptr [EDX],AH               ; 005d3d88
    MOV AL,AH                           ; 005d3d8a
    OR AL,0x20                          ; 005d3d8c
    MOV byte ptr [EDX],AL               ; 005d3d8e
    MOV AH,byte ptr [ECX]               ; 005d3d90
    AND AH,0xed                         ; 005d3d92
    MOV byte ptr [ECX],AH               ; 005d3d95
    MOV AL,AH                           ; 005d3d97
    OR AL,0x10                          ; 005d3d99
    MOV byte ptr [ECX],AL               ; 005d3d9b
    JMP 0x005d3a98                      ; 005d3d9d
        ;   XREF to: 005d3a98 (UNCONDITIONAL_JUMP)  ; LAB_005d3a98

