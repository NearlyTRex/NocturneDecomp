; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0054a6a0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CBodyPart *      Stack[0xc]:4   body_part_ptr
; int              Stack[0x10]:4   part_index
; CVector3i *      Stack[0x14]:4   skinned_vertices
; int              Stack[0x18]:4   texture_set_index
; Local Variables:
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
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0054f360 at 0054f3e8
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1d79
;   TerminatedCString s_CDeformableModel_dismemb_005d1d8e
;   TerminatedCString s_core_skeleton_cpp_005d1dc8
;   TerminatedCString s_CDeformableModel_dismemb_005d1ddd
;   TerminatedCString s_core_skeleton_cpp_005d1e0e
;   TerminatedCString s_CDeformableModel_dismemb_005d1e23
;   TerminatedCString s_core_skeleton_cpp_005d1e4f
;   TerminatedCString s_CDeformableModel_dismemb_005d1e64
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890
;   core_bodypart.cpp_FUN_00414910
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a6a0
        ;   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0
    PUSH ESI                            ; 0054a6a1
    PUSH EDI                            ; 0054a6a2
    PUSH EBP                            ; 0054a6a3
    SUB ESP,0x44                        ; 0054a6a4
    MOV EBP,dword ptr [ESP + 0x60]      ; 0054a6a7
    TEST EBP,EBP                        ; 0054a6ab
    JZ 0x0054ac09                       ; 0054a6ad
        ;   XREF to: 0054ac09 (CONDITIONAL_JUMP)  ; LAB_0054ac09
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054a6b3
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054a6b7
    SHL EAX,0x3                         ; 0054a6bb
    ADD EAX,EDX                         ; 0054a6be
    CMP dword ptr [EAX + 0x8],0x0       ; 0054a6c0
    JNZ 0x0054a8a6                      ; 0054a6c4
        ;   XREF to: 0054a8a6 (CONDITIONAL_JUMP)  ; LAB_0054a8a6
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0054a6ca
        ;   Label: LAB_0054a6ca
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054a6ce
    SHL ECX,0x2                         ; 0054a6d2
    ADD EAX,ECX                         ; 0054a6d5
    MOV EBX,dword ptr [ESP + 0x64]      ; 0054a6d7
    XOR EDI,EDI                         ; 0054a6db
    MOV EDX,dword ptr [EAX + 0x54]      ; 0054a6dd
    MOV dword ptr [ESP + 0x28],EDI      ; 0054a6e0
    MOV dword ptr [ESP + 0x24],EDX      ; 0054a6e4
    XOR EDX,EDX                         ; 0054a6e8
    TEST EBX,EBX                        ; 0054a6ea
    JLE 0x0054a720                      ; 0054a6ec
        ;   XREF to: 0054a720 (CONDITIONAL_JUMP)  ; LAB_0054a720
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054a6ee
        ;   Label: LAB_0054a6ee
    MOV EDI,dword ptr [ESP + 0x24]      ; 0054a6f2
    MOV EBX,dword ptr [EAX + 0xc24]     ; 0054a6f6
    ADD EAX,0x60                        ; 0054a6fc
    INC EDX                             ; 0054a6ff
    ADD ESI,EBX                         ; 0054a700
    MOV EBX,dword ptr [EAX + 0xbd8]     ; 0054a702
    MOV dword ptr [ESP + 0x28],ESI      ; 0054a708
    ADD EDI,EBX                         ; 0054a70c
    MOV EBX,dword ptr [ESP + 0x64]      ; 0054a70e
    MOV dword ptr [ESP + 0x24],EDI      ; 0054a712
    CMP EDX,EBX                         ; 0054a716
    JL 0x0054a6ee                       ; 0054a718
        ;   XREF to: 0054a6ee (CONDITIONAL_JUMP)  ; LAB_0054a6ee
    LEA EAX,[EAX]                       ; 0054a71a
    MOV EDX,dword ptr [ESP + 0x64]      ; 0054a720
        ;   Label: LAB_0054a720
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054a724
    SUB EAX,EDX                         ; 0054a72b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054a72d
    SHL EAX,0x5                         ; 0054a731
    ADD EAX,ESI                         ; 0054a734
    MOV EDX,dword ptr [ESP + 0x28]      ; 0054a736
    ADD EDX,dword ptr [ECX + EAX*0x1 + 0xc24] ; 0054a73a
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0xc38] ; 0054a741
    MOV dword ptr [ESP],EDX             ; 0054a748
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054a74b
    ADD ECX,ESI                         ; 0054a74f
    ADD EDX,EBX                         ; 0054a751
    MOV EDI,dword ptr [ECX + 0x2c]      ; 0054a753
    MOV dword ptr [ESP + 0x4],EDX       ; 0054a756
    CMP EDI,0xfa0                       ; 0054a75a
    JLE 0x0054a784                      ; 0054a760
        ;   XREF to: 0054a784 (CONDITIONAL_JUMP)  ; LAB_0054a784
    MOV EAX,0x5d1dc8                    ; 0054a762 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x662                       ; 0054a767
    PUSH 0x5d1ddd                       ; 0054a76c | = "CDeformableModel::dismember - too man..."
    MOV [0x01d71de0],EAX                ; 0054a771 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0054a776 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054a77c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054a781
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0054a784
        ;   Label: LAB_0054a784
    MOV ECX,dword ptr [ESP + 0x58]      ; 0054a788
    SHL ESI,0x2                         ; 0054a78c
    ADD ESI,ECX                         ; 0054a78f
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0054a791
    SHL EAX,0x2                         ; 0054a794
    PUSH EAX                            ; 0054a797
    PUSH 0x0                            ; 0054a798
    PUSH 0x270f9bc                      ; 0054a79a
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0054a79f
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054a7a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054a7a7
    MOV EBX,dword ptr [ESP]             ; 0054a7ab
    CMP EAX,EBX                         ; 0054a7ae
    JGE 0x0054a800                      ; 0054a7b0
        ;   XREF to: 0054a800 (CONDITIONAL_JUMP)  ; LAB_0054a800
    MOV EDX,EAX                         ; 0054a7b2
    SHL EAX,0x3                         ; 0054a7b4
    ADD EAX,EDX                         ; 0054a7b7
    MOV EDX,EBX                         ; 0054a7b9
    SHL EBX,0x3                         ; 0054a7bb
    MOV EDI,0x1                         ; 0054a7be
    ADD EBX,EDX                         ; 0054a7c3
    ADD EAX,EAX                         ; 0054a7c5
    ADD EBX,EBX                         ; 0054a7c7
    MOV EDX,dword ptr [ESI + 0x7c]      ; 0054a7c9
        ;   Label: LAB_0054a7c9
    XOR ECX,ECX                         ; 0054a7cc
    MOV CX,word ptr [EDX + EAX*0x1]     ; 0054a7ce
    MOV dword ptr [ECX*0x4 + 0x270f9bc],EDI ; 0054a7d2
    XOR ECX,ECX                         ; 0054a7d9
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 0054a7db
    MOV dword ptr [ECX*0x4 + 0x270f9bc],EDI ; 0054a7e0
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0054a7e7
    AND EDX,0xffff                      ; 0054a7ec
    ADD EAX,0x12                        ; 0054a7f2
    MOV dword ptr [EDX*0x4 + 0x270f9bc],EDI ; 0054a7f5
    CMP EAX,EBX                         ; 0054a7fc
    JL 0x0054a7c9                       ; 0054a7fe
        ;   XREF to: 0054a7c9 (CONDITIONAL_JUMP)  ; LAB_0054a7c9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054a800
        ;   Label: LAB_0054a800
    CMP EAX,dword ptr [ESP + 0x4]       ; 0054a804
    JGE 0x0054a870                      ; 0054a808
        ;   XREF to: 0054a870 (CONDITIONAL_JUMP)  ; LAB_0054a870
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054a80a
    MOV EBX,dword ptr [ESP + 0x58]      ; 0054a80e
    MOV EDX,EAX                         ; 0054a812
    SHL EAX,0x3                         ; 0054a814
    SHL EDI,0x2                         ; 0054a817
    ADD EAX,EDX                         ; 0054a81a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054a81c
    ADD EDI,EBX                         ; 0054a820
    LEA EBX,[EDX*0x8 + 0x0]             ; 0054a822
    MOV ESI,0x1                         ; 0054a829
    ADD EBX,EDX                         ; 0054a82e
    ADD EAX,EAX                         ; 0054a830
    ADD EBX,EBX                         ; 0054a832
    MOV EDX,dword ptr [EDI + 0x7c]      ; 0054a834
        ;   Label: LAB_0054a834
    XOR ECX,ECX                         ; 0054a837
    MOV CX,word ptr [EDX + EAX*0x1]     ; 0054a839
    MOV dword ptr [ECX*0x4 + 0x270f9bc],ESI ; 0054a83d
    XOR ECX,ECX                         ; 0054a844
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 0054a846
    MOV dword ptr [ECX*0x4 + 0x270f9bc],ESI ; 0054a84b
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0054a852
    AND EDX,0xffff                      ; 0054a857
    ADD EAX,0x12                        ; 0054a85d
    MOV dword ptr [EDX*0x4 + 0x270f9bc],ESI ; 0054a860
    CMP EAX,EBX                         ; 0054a867
    JL 0x0054a834                       ; 0054a869
        ;   XREF to: 0054a834 (CONDITIONAL_JUMP)  ; LAB_0054a834
    LEA EAX,[EAX]                       ; 0054a86b
    MOV ECX,ECX                         ; 0054a86e
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054a870
        ;   Label: LAB_0054a870
    MOV EAX,dword ptr [EBP + 0x180]     ; 0054a874
    MOV EBX,dword ptr [EBP + 0x174]     ; 0054a87a
    XOR EDX,EDX                         ; 0054a880
    MOV dword ptr [ESP + 0x40],EAX      ; 0054a882
    MOV ECX,EBX                         ; 0054a886
    SHL EDI,0x2                         ; 0054a888
    XOR EAX,EAX                         ; 0054a88b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054a88d
        ;   Label: LAB_0054a88d
    CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c] ; 0054a891
    JGE 0x0054a8d1                      ; 0054a895
        ;   XREF to: 0054a8d1 (CONDITIONAL_JUMP)  ; LAB_0054a8d1
    CMP dword ptr [EDX + 0x270f9bc],0x0 ; 0054a897
    JNZ 0x0054a8ce                      ; 0054a89e
        ;   XREF to: 0054a8ce (CONDITIONAL_JUMP)  ; LAB_0054a8ce
    INC EAX                             ; 0054a8a0
        ;   Label: LAB_0054a8a0
    ADD EDX,0x4                         ; 0054a8a1
    JMP 0x0054a88d                      ; 0054a8a4
        ;   XREF to: 0054a88d (UNCONDITIONAL_JUMP)  ; LAB_0054a88d
    MOV EBX,0x5d1d79                    ; 0054a8a6 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054a8a6
    MOV ESI,0x64d                       ; 0054a8ab
    PUSH 0x5d1d8e                       ; 0054a8b0 | = "CDeformableModel::dismember - can't d..."
    MOV dword ptr [0x01d71de0],EBX      ; 0054a8b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054a8bb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054a8c1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054a8c6
    JMP 0x0054a6ca                      ; 0054a8c9
        ;   XREF to: 0054a6ca (UNCONDITIONAL_JUMP)  ; LAB_0054a6ca
    INC ECX                             ; 0054a8ce
        ;   Label: LAB_0054a8ce
    JMP 0x0054a8a0                      ; 0054a8cf
        ;   XREF to: 0054a8a0 (UNCONDITIONAL_JUMP)  ; LAB_0054a8a0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0054a8d1
        ;   Label: LAB_0054a8d1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054a8d5
    SUB EAX,EDX                         ; 0054a8dc
    SHL EAX,0x5                         ; 0054a8de
    ADD EAX,ESI                         ; 0054a8e1
    ADD EDI,EAX                         ; 0054a8e3
    MOV EAX,dword ptr [EBP + 0x180]     ; 0054a8e5
    MOV EDX,dword ptr [EDI + 0xc24]     ; 0054a8eb
    MOV ESI,dword ptr [EDI + 0xc38]     ; 0054a8f1
    ADD EAX,EDX                         ; 0054a8f7
    ADD EAX,ESI                         ; 0054a8f9
    PUSH EAX                            ; 0054a8fb
    PUSH ECX                            ; 0054a8fc
    PUSH EBP                            ; 0054a8fd
    CALL core_bodypart.cpp_FUN_00414910 ; 0054a8fe
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00414910()
    ADD ESP,0xc                         ; 0054a903
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054a906
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054a90a
    SHL EAX,0x2                         ; 0054a90e
    XOR EDI,EDI                         ; 0054a911
    ADD EDX,EAX                         ; 0054a913
    MOV dword ptr [ESP + 0x3c],EDI      ; 0054a915
    MOV dword ptr [ESP + 0x10],EDX      ; 0054a919
    LEA EDX,[EBX*0x4 + 0x0]             ; 0054a91d
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054a924
    SUB EDX,EBX                         ; 0054a928
    XOR EAX,EAX                         ; 0054a92a
    LEA ECX,[EDX*0x4 + 0x0]             ; 0054a92c
    MOV EDI,dword ptr [ESI + 0x2c]      ; 0054a933
    MOV EDX,dword ptr [ESP + 0x68]      ; 0054a936
    TEST EDI,EDI                        ; 0054a93a
    JLE 0x0054a97c                      ; 0054a93c
        ;   XREF to: 0054a97c (CONDITIONAL_JUMP)  ; LAB_0054a97c
    CMP dword ptr [EAX + 0x270f9bc],0x0 ; 0054a93e
        ;   Label: LAB_0054a93e
    JZ 0x0054ac11                       ; 0054a945
        ;   XREF to: 0054ac11 (CONDITIONAL_JUMP)  ; LAB_0054ac11
    MOV dword ptr [EAX + 0x270f9bc],EBX ; 0054a94b
    MOV EDI,dword ptr [EBP + 0x178]     ; 0054a951
    MOV ESI,EDX                         ; 0054a957
    ADD EDI,ECX                         ; 0054a959
    INC EBX                             ; 0054a95b
    ADD ECX,0xc                         ; 0054a95c
    MOVSD ES:EDI,ESI                    ; 0054a95f
    MOVSD ES:EDI,ESI                    ; 0054a960
    MOVSD ES:EDI,ESI                    ; 0054a961
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0054a962
        ;   Label: LAB_0054a962
    INC EDI                             ; 0054a966
    MOV dword ptr [ESP + 0x3c],EDI      ; 0054a967
    MOV ESI,EDI                         ; 0054a96b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054a96d
    ADD EAX,0x4                         ; 0054a971
    ADD EDX,0xc                         ; 0054a974
    CMP ESI,dword ptr [EDI + 0x2c]      ; 0054a977
    JL 0x0054a93e                       ; 0054a97a
        ;   XREF to: 0054a93e (CONDITIONAL_JUMP)  ; LAB_0054a93e
    CMP EBX,dword ptr [EBP + 0x174]     ; 0054a97c
        ;   Label: LAB_0054a97c
    JZ 0x0054a9a7                       ; 0054a982
        ;   XREF to: 0054a9a7 (CONDITIONAL_JUMP)  ; LAB_0054a9a7
    MOV EDX,0x5d1e0e                    ; 0054a984 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x698                       ; 0054a989
    PUSH 0x5d1e23                       ; 0054a98e | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d71de0],EDX      ; 0054a993 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0054a999 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054a99f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054a9a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054a9a7
        ;   Label: LAB_0054a9a7
    MOV EBX,dword ptr [ESP]             ; 0054a9ab
    CMP EAX,EBX                         ; 0054a9ae
    JGE 0x0054aad0                      ; 0054a9b0
        ;   XREF to: 0054aad0 (CONDITIONAL_JUMP)  ; LAB_0054aad0
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054a9b6
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054a9ba
    SHL EAX,0x2                         ; 0054a9be
    ADD EDX,EAX                         ; 0054a9c1
    MOV dword ptr [ESP + 0x20],EDX      ; 0054a9c3
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0054a9c7
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054a9cb
    ADD EDX,EAX                         ; 0054a9d2
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054a9d4
    SHL EDX,0x6                         ; 0054a9d8
    ADD EAX,0xc0                        ; 0054a9db
    ADD EAX,EDX                         ; 0054a9e0
    MOV EDX,dword ptr [ESP + 0x28]      ; 0054a9e2
    MOV dword ptr [ESP + 0x8],EAX       ; 0054a9e6
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054a9ea
    ADD EAX,EDX                         ; 0054a9f1
    ADD EAX,EAX                         ; 0054a9f3
    MOV dword ptr [ESP + 0x34],EAX      ; 0054a9f5
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054a9f9
    SHL EAX,0x2                         ; 0054a9fd
    MOV EDI,EAX                         ; 0054aa00
    SHL EDI,0x4                         ; 0054aa02
    SUB EDI,EAX                         ; 0054aa05
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054aa07
    SHL EAX,0x2                         ; 0054aa0b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054aa0e
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054aa12
    LEA ESI,[EDX*0x4 + 0x0]             ; 0054aa19
    MOV dword ptr [ESP + 0x18],EAX      ; 0054aa20
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054aa24
        ;   Label: LAB_0054aa24
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054aa28
    MOV EDX,dword ptr [EBP + 0x184]     ; 0054aa2c
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0054aa32
    ADD EDX,EDI                         ; 0054aa35
    ADD EBX,EAX                         ; 0054aa37
    MOV dword ptr [EDX + 0x4],0x3       ; 0054aa39
    MOV EAX,EBX                         ; 0054aa40
    ADD EBX,0x6                         ; 0054aa42
    XOR ECX,ECX                         ; 0054aa45
        ;   Label: LAB_0054aa45
    MOV CX,word ptr [EAX]               ; 0054aa47
    MOV ECX,dword ptr [ECX*0x4 + 0x270f9bc] ; 0054aa4a
    MOV dword ptr [EDX + 0x18],ECX      ; 0054aa51
    XOR ECX,ECX                         ; 0054aa54
    MOV CX,word ptr [EAX + 0x6]         ; 0054aa56
    SHL ECX,0x8                         ; 0054aa5a
    MOV dword ptr [EDX + 0x1c],ECX      ; 0054aa5d
    XOR ECX,ECX                         ; 0054aa60
    MOV CX,word ptr [EAX + 0xc]         ; 0054aa62
    ADD EDX,0xc                         ; 0054aa66
    SHL ECX,0x8                         ; 0054aa69
    ADD EAX,0x2                         ; 0054aa6c
    MOV dword ptr [EDX + 0x14],ECX      ; 0054aa6f
    CMP EAX,EBX                         ; 0054aa72
    JNZ 0x0054aa45                      ; 0054aa74
        ;   XREF to: 0054aa45 (CONDITIONAL_JUMP)  ; LAB_0054aa45
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054aa76
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054aa7a
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0054aa80
    ADD EAX,dword ptr [ESP + 0x8]       ; 0054aa84
    ADD EAX,0x8                         ; 0054aa88
    PUSH EAX                            ; 0054aa8b
    PUSH EBP                            ; 0054aa8c
    ADD EDI,0x3c                        ; 0054aa8d
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890 ; 0054aa90
        ;   XREF to: 00416890 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 0054aa95
    MOV EDX,dword ptr [EBP + 0x188]     ; 0054aa98
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054aa9e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0054aaa2
    ADD ECX,0x12                        ; 0054aaa6
    ADD EDX,EBX                         ; 0054aaa9
    ADD ESI,0x4                         ; 0054aaab
    MOV dword ptr [ESP + 0x34],ECX      ; 0054aaae
    MOV dword ptr [EDX],EAX             ; 0054aab2
    LEA EAX,[EBX + 0x4]                 ; 0054aab4
    MOV EDX,dword ptr [ESP + 0x40]      ; 0054aab7
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054aabb
    INC EDX                             ; 0054aabf
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054aac0
    MOV dword ptr [ESP + 0x40],EDX      ; 0054aac4
    CMP ESI,EBX                         ; 0054aac8
    JL 0x0054aa24                       ; 0054aaca
        ;   XREF to: 0054aa24 (CONDITIONAL_JUMP)  ; LAB_0054aa24
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054aad0
        ;   Label: LAB_0054aad0
    CMP EAX,dword ptr [ESP + 0x4]       ; 0054aad4
    JGE 0x0054abfd                      ; 0054aad8
        ;   XREF to: 0054abfd (CONDITIONAL_JUMP)  ; LAB_0054abfd
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0054aade
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054aae2
    SHL EAX,0x2                         ; 0054aae6
    ADD EDX,EAX                         ; 0054aae9
    MOV dword ptr [ESP + 0x1c],EDX      ; 0054aaeb
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0054aaef
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054aaf3
    ADD EAX,EDX                         ; 0054aafa
    MOV EDX,dword ptr [ESP + 0x58]      ; 0054aafc
    SHL EAX,0x6                         ; 0054ab00
    ADD EDX,0xc0                        ; 0054ab03
    ADD EDX,EAX                         ; 0054ab09
    MOV dword ptr [ESP + 0xc],EDX       ; 0054ab0b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0054ab0f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054ab13
    ADD EAX,EDX                         ; 0054ab1a
    ADD EAX,EAX                         ; 0054ab1c
    MOV dword ptr [ESP + 0x30],EAX      ; 0054ab1e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054ab22
    SHL EAX,0x2                         ; 0054ab26
    MOV EDX,EAX                         ; 0054ab29
    SHL EAX,0x4                         ; 0054ab2b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0054ab2e
    SUB EAX,EDX                         ; 0054ab32
    MOV ESI,dword ptr [ESP + 0x24]      ; 0054ab34
    MOV dword ptr [ESP + 0x38],EAX      ; 0054ab38
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054ab3c
    SHL EDI,0x2                         ; 0054ab40
    SHL EAX,0x2                         ; 0054ab43
    SHL ESI,0x2                         ; 0054ab46
    MOV dword ptr [ESP + 0x14],EAX      ; 0054ab49
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054ab4d
        ;   Label: LAB_0054ab4d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054ab51
    MOV ECX,dword ptr [ESP + 0x30]      ; 0054ab55
    MOV EDX,dword ptr [EBP + 0x184]     ; 0054ab59
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0054ab5f
    ADD EDX,EAX                         ; 0054ab62
    ADD EBX,ECX                         ; 0054ab64
    MOV dword ptr [EDX + 0x4],0x3       ; 0054ab66
    MOV EAX,EBX                         ; 0054ab6d
    ADD EBX,0x6                         ; 0054ab6f
    XOR ECX,ECX                         ; 0054ab72
        ;   Label: LAB_0054ab72
    MOV CX,word ptr [EAX]               ; 0054ab74
    MOV ECX,dword ptr [ECX*0x4 + 0x270f9bc] ; 0054ab77
    MOV dword ptr [EDX + 0x18],ECX      ; 0054ab7e
    XOR ECX,ECX                         ; 0054ab81
    MOV CX,word ptr [EAX + 0x6]         ; 0054ab83
    SHL ECX,0x8                         ; 0054ab87
    MOV dword ptr [EDX + 0x1c],ECX      ; 0054ab8a
    XOR ECX,ECX                         ; 0054ab8d
    MOV CX,word ptr [EAX + 0xc]         ; 0054ab8f
    ADD EDX,0xc                         ; 0054ab93
    SHL ECX,0x8                         ; 0054ab96
    ADD EAX,0x2                         ; 0054ab99
    MOV dword ptr [EDX + 0x14],ECX      ; 0054ab9c
    CMP EAX,EBX                         ; 0054ab9f
    JNZ 0x0054ab72                      ; 0054aba1
        ;   XREF to: 0054ab72 (CONDITIONAL_JUMP)  ; LAB_0054ab72
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054aba3
    MOV EAX,dword ptr [EAX + 0x90]      ; 0054aba7
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0054abad
    ADD EAX,dword ptr [ESP + 0xc]       ; 0054abb1
    ADD EAX,0x8                         ; 0054abb5
    PUSH EAX                            ; 0054abb8
    PUSH EBP                            ; 0054abb9
    ADD EDI,0x4                         ; 0054abba
    ADD ESI,0x4                         ; 0054abbd
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890 ; 0054abc0
        ;   XREF to: 00416890 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 0054abc5
    MOV EDX,dword ptr [EBP + 0x188]     ; 0054abc8
    MOV EBX,dword ptr [ESP + 0x38]      ; 0054abce
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054abd2
    MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX ; 0054abd6
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054abda
    ADD EBX,0x3c                        ; 0054abde
    MOV EDX,dword ptr [ESP + 0x30]      ; 0054abe1
    MOV dword ptr [ESP + 0x38],EBX      ; 0054abe5
    INC EAX                             ; 0054abe9
    ADD EDX,0x12                        ; 0054abea
    MOV dword ptr [ESP + 0x40],EAX      ; 0054abed
    MOV dword ptr [ESP + 0x30],EDX      ; 0054abf1
    CMP ESI,ECX                         ; 0054abf5
    JL 0x0054ab4d                       ; 0054abf7
        ;   XREF to: 0054ab4d (CONDITIONAL_JUMP)  ; LAB_0054ab4d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054abfd
        ;   Label: LAB_0054abfd
    CMP EAX,dword ptr [EBP + 0x180]     ; 0054ac01
    JNZ 0x0054ac20                      ; 0054ac07
        ;   XREF to: 0054ac20 (CONDITIONAL_JUMP)  ; LAB_0054ac20
    ADD ESP,0x44                        ; 0054ac09
        ;   Label: LAB_0054ac09
    POP EBP                             ; 0054ac0c
    POP EDI                             ; 0054ac0d
    POP ESI                             ; 0054ac0e
    POP EBX                             ; 0054ac0f
    RET                                 ; 0054ac10
    MOV dword ptr [EAX + 0x270f9bc],0xffffffff ; 0054ac11
        ;   Label: LAB_0054ac11
    JMP 0x0054a962                      ; 0054ac1b
        ;   XREF to: 0054a962 (UNCONDITIONAL_JUMP)  ; LAB_0054a962
    MOV ESI,0x5d1e4f                    ; 0054ac20 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0054ac20
    MOV EDI,0x6cf                       ; 0054ac25
    PUSH 0x5d1e64                       ; 0054ac2a | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x01d71de0],ESI      ; 0054ac2f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0054ac35 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054ac3b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054ac40
    ADD ESP,0x44                        ; 0054ac43
    POP EBP                             ; 0054ac46
    POP EDI                             ; 0054ac47
    POP ESI                             ; 0054ac48
    POP EBX                             ; 0054ac49
    RET                                 ; 0054ac4a

