; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_dismember_FUN_0059c5e0(CDeformableModel *this_ptr,int lod_index,CBodyPart *body_part_ptr,int part_index,CVector3i *skinned_vertices,int texture_set_index)
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
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040 at 005a10c8
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064eb04
;   TerminatedCString s_CDeformableModel_dismemb_0064eb19
;   TerminatedCString s_core_skeleton_cpp_0064eb53
;   TerminatedCString s_CDeformableModel_dismemb_0064eb68
;   TerminatedCString s_core_skeleton_cpp_0064eb99
;   TerminatedCString s_CDeformableModel_dismemb_0064ebae
;   TerminatedCString s_core_skeleton_cpp_0064ebda
;   TerminatedCString s_CDeformableModel_dismemb_0064ebef
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int[4000] g_VertexRemapTable
;   undefined4 DAT_03671300
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c5e0
        ;   Label: core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0
    PUSH ESI                            ; 0059c5e1
    PUSH EDI                            ; 0059c5e2
    PUSH EBP                            ; 0059c5e3
    SUB ESP,0x44                        ; 0059c5e4
    MOV EBP,dword ptr [ESP + 0x60]      ; 0059c5e7
    TEST EBP,EBP                        ; 0059c5eb
    JZ 0x0059cb59                       ; 0059c5ed
        ;   XREF to: 0059cb59 (CONDITIONAL_JUMP)  ; LAB_0059cb59
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059c5f3
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059c5f7
    SHL EAX,0x3                         ; 0059c5fb
    ADD EAX,EDX                         ; 0059c5fe
    CMP dword ptr [EAX + 0x8],0x0       ; 0059c600
    JNZ 0x0059c7e6                      ; 0059c604
        ;   XREF to: 0059c7e6 (CONDITIONAL_JUMP)  ; LAB_0059c7e6
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0059c60a
        ;   Label: LAB_0059c60a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059c60e
    SHL ECX,0x2                         ; 0059c612
    ADD EAX,ECX                         ; 0059c615
    MOV EBX,dword ptr [ESP + 0x64]      ; 0059c617
    XOR EDI,EDI                         ; 0059c61b
    MOV EDX,dword ptr [EAX + 0x54]      ; 0059c61d
    MOV dword ptr [ESP + 0x28],EDI      ; 0059c620
    MOV dword ptr [ESP + 0x24],EDX      ; 0059c624
    XOR EDX,EDX                         ; 0059c628
    TEST EBX,EBX                        ; 0059c62a
    JLE 0x0059c660                      ; 0059c62c
        ;   XREF to: 0059c660 (CONDITIONAL_JUMP)  ; LAB_0059c660
    MOV ESI,dword ptr [ESP + 0x28]      ; 0059c62e
        ;   Label: LAB_0059c62e
    MOV EDI,dword ptr [ESP + 0x24]      ; 0059c632
    MOV EBX,dword ptr [EAX + 0x7164]    ; 0059c636
    ADD EAX,0x60                        ; 0059c63c
    INC EDX                             ; 0059c63f
    ADD ESI,EBX                         ; 0059c640
    MOV EBX,dword ptr [EAX + 0x7118]    ; 0059c642
    MOV dword ptr [ESP + 0x28],ESI      ; 0059c648
    ADD EDI,EBX                         ; 0059c64c
    MOV EBX,dword ptr [ESP + 0x64]      ; 0059c64e
    MOV dword ptr [ESP + 0x24],EDI      ; 0059c652
    CMP EDX,EBX                         ; 0059c656
    JL 0x0059c62e                       ; 0059c658
        ;   XREF to: 0059c62e (CONDITIONAL_JUMP)  ; LAB_0059c62e
    LEA EAX,[EAX]                       ; 0059c65a
    MOV EDX,dword ptr [ESP + 0x64]      ; 0059c660
        ;   Label: LAB_0059c660
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059c664
    SUB EAX,EDX                         ; 0059c66b
    MOV ESI,dword ptr [ESP + 0x58]      ; 0059c66d
    SHL EAX,0x5                         ; 0059c671
    ADD EAX,ESI                         ; 0059c674
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059c676
    ADD EDX,dword ptr [ECX + EAX*0x1 + 0x7164] ; 0059c67a
    MOV EBX,dword ptr [ECX + EAX*0x1 + 0x7178] ; 0059c681
    MOV dword ptr [ESP],EDX             ; 0059c688
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059c68b
    ADD ECX,ESI                         ; 0059c68f
    ADD EDX,EBX                         ; 0059c691
    MOV EDI,dword ptr [ECX + 0x2c]      ; 0059c693
    MOV dword ptr [ESP + 0x4],EDX       ; 0059c696
    CMP EDI,0xfa0                       ; 0059c69a
    JLE 0x0059c6c4                      ; 0059c6a0
        ;   XREF to: 0059c6c4 (CONDITIONAL_JUMP)  ; LAB_0059c6c4
    MOV EAX,0x64eb53                    ; 0059c6a2 | = "..\\core\\skeleton.cpp"
    MOV EDX,0x652                       ; 0059c6a7
    PUSH 0x64eb68                       ; 0059c6ac | = "CDeformableModel::dismember - too man..."
    MOV [0x02f0ca48],EAX                ; 0059c6b1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0059c6b6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c6bc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059c6c1
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0059c6c4
        ;   Label: LAB_0059c6c4
    MOV ECX,dword ptr [ESP + 0x58]      ; 0059c6c8
    SHL ESI,0x2                         ; 0059c6cc
    ADD ESI,ECX                         ; 0059c6cf
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0059c6d1
    SHL EAX,0x2                         ; 0059c6d4
    PUSH EAX                            ; 0059c6d7
    PUSH 0x0                            ; 0059c6d8
    PUSH 0x36712fc                      ; 0059c6da | g_VertexRemapTable
    CALL crt_memory.c_memset_FUN_005fde40 ; 0059c6df
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0059c6e4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059c6e7
    MOV EBX,dword ptr [ESP]             ; 0059c6eb
    CMP EAX,EBX                         ; 0059c6ee
    JGE 0x0059c740                      ; 0059c6f0
        ;   XREF to: 0059c740 (CONDITIONAL_JUMP)  ; LAB_0059c740
    MOV EDX,EAX                         ; 0059c6f2
    SHL EAX,0x3                         ; 0059c6f4
    ADD EAX,EDX                         ; 0059c6f7
    MOV EDX,EBX                         ; 0059c6f9
    SHL EBX,0x3                         ; 0059c6fb
    MOV EDI,0x1                         ; 0059c6fe
    ADD EBX,EDX                         ; 0059c703
    ADD EAX,EAX                         ; 0059c705
    ADD EBX,EBX                         ; 0059c707
    MOV EDX,dword ptr [ESI + 0x7c]      ; 0059c709
        ;   Label: LAB_0059c709
    XOR ECX,ECX                         ; 0059c70c
    MOV CX,word ptr [EDX + EAX*0x1]     ; 0059c70e
    MOV dword ptr [ECX*0x4 + 0x36712fc],EDI ; 0059c712 | g_VertexRemapTable
    XOR ECX,ECX                         ; 0059c719
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 0059c71b
    MOV dword ptr [ECX*0x4 + 0x36712fc],EDI ; 0059c720 | g_VertexRemapTable
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0059c727
    AND EDX,0xffff                      ; 0059c72c
    ADD EAX,0x12                        ; 0059c732
    MOV dword ptr [EDX*0x4 + 0x36712fc],EDI ; 0059c735 | g_VertexRemapTable
    CMP EAX,EBX                         ; 0059c73c
    JL 0x0059c709                       ; 0059c73e
        ;   XREF to: 0059c709 (CONDITIONAL_JUMP)  ; LAB_0059c709
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059c740
        ;   Label: LAB_0059c740
    CMP EAX,dword ptr [ESP + 0x4]       ; 0059c744
    JGE 0x0059c7b0                      ; 0059c748
        ;   XREF to: 0059c7b0 (CONDITIONAL_JUMP)  ; LAB_0059c7b0
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0059c74a
    MOV EBX,dword ptr [ESP + 0x58]      ; 0059c74e
    MOV EDX,EAX                         ; 0059c752
    SHL EAX,0x3                         ; 0059c754
    SHL EDI,0x2                         ; 0059c757
    ADD EAX,EDX                         ; 0059c75a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c75c
    ADD EDI,EBX                         ; 0059c760
    LEA EBX,[EDX*0x8 + 0x0]             ; 0059c762
    MOV ESI,0x1                         ; 0059c769
    ADD EBX,EDX                         ; 0059c76e
    ADD EAX,EAX                         ; 0059c770
    ADD EBX,EBX                         ; 0059c772
    MOV EDX,dword ptr [EDI + 0x7c]      ; 0059c774
        ;   Label: LAB_0059c774
    XOR ECX,ECX                         ; 0059c777
    MOV CX,word ptr [EDX + EAX*0x1]     ; 0059c779
    MOV dword ptr [ECX*0x4 + 0x36712fc],ESI ; 0059c77d | g_VertexRemapTable
    XOR ECX,ECX                         ; 0059c784
    MOV CX,word ptr [EDX + EAX*0x1 + 0x2] ; 0059c786
    MOV dword ptr [ECX*0x4 + 0x36712fc],ESI ; 0059c78b | g_VertexRemapTable
    MOV DX,word ptr [EDX + EAX*0x1 + 0x4] ; 0059c792
    AND EDX,0xffff                      ; 0059c797
    ADD EAX,0x12                        ; 0059c79d
    MOV dword ptr [EDX*0x4 + 0x36712fc],ESI ; 0059c7a0 | g_VertexRemapTable
    CMP EAX,EBX                         ; 0059c7a7
    JL 0x0059c774                       ; 0059c7a9
        ;   XREF to: 0059c774 (CONDITIONAL_JUMP)  ; LAB_0059c774
    LEA EAX,[EAX]                       ; 0059c7ab
    MOV ECX,ECX                         ; 0059c7ae
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0059c7b0
        ;   Label: LAB_0059c7b0
    MOV EAX,dword ptr [EBP + 0x180]     ; 0059c7b4
    MOV EBX,dword ptr [EBP + 0x174]     ; 0059c7ba
    XOR EDX,EDX                         ; 0059c7c0
    MOV dword ptr [ESP + 0x40],EAX      ; 0059c7c2
    MOV ECX,EBX                         ; 0059c7c6
    SHL EDI,0x2                         ; 0059c7c8
    XOR EAX,EAX                         ; 0059c7cb
    MOV ESI,dword ptr [ESP + 0x58]      ; 0059c7cd
        ;   Label: LAB_0059c7cd
    CMP EAX,dword ptr [EDI + ESI*0x1 + 0x2c] ; 0059c7d1
    JGE 0x0059c811                      ; 0059c7d5
        ;   XREF to: 0059c811 (CONDITIONAL_JUMP)  ; LAB_0059c811
    CMP dword ptr [EDX + 0x36712fc],0x0 ; 0059c7d7 | g_VertexRemapTable | DAT_03671300
    JNZ 0x0059c80e                      ; 0059c7de
        ;   XREF to: 0059c80e (CONDITIONAL_JUMP)  ; LAB_0059c80e
    INC EAX                             ; 0059c7e0
        ;   Label: LAB_0059c7e0
    ADD EDX,0x4                         ; 0059c7e1
    JMP 0x0059c7cd                      ; 0059c7e4
        ;   XREF to: 0059c7cd (UNCONDITIONAL_JUMP)  ; LAB_0059c7cd
    MOV EBX,0x64eb04                    ; 0059c7e6 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059c7e6
    MOV ESI,0x63d                       ; 0059c7eb
    PUSH 0x64eb19                       ; 0059c7f0 | = "CDeformableModel::dismember - can't d..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0059c7f5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0059c7fb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c801
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059c806
    JMP 0x0059c60a                      ; 0059c809
        ;   XREF to: 0059c60a (UNCONDITIONAL_JUMP)  ; LAB_0059c60a
    INC ECX                             ; 0059c80e
        ;   Label: LAB_0059c80e
    JMP 0x0059c7e0                      ; 0059c80f
        ;   XREF to: 0059c7e0 (UNCONDITIONAL_JUMP)  ; LAB_0059c7e0
    MOV EDX,dword ptr [ESP + 0x64]      ; 0059c811
        ;   Label: LAB_0059c811
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059c815
    SUB EAX,EDX                         ; 0059c81c
    SHL EAX,0x5                         ; 0059c81e
    ADD EAX,ESI                         ; 0059c821
    ADD EDI,EAX                         ; 0059c823
    MOV EAX,dword ptr [EBP + 0x180]     ; 0059c825
    MOV EDX,dword ptr [EDI + 0x7164]    ; 0059c82b
    MOV ESI,dword ptr [EDI + 0x7178]    ; 0059c831
    ADD EAX,EDX                         ; 0059c837
    ADD EAX,ESI                         ; 0059c839
    PUSH EAX                            ; 0059c83b
    PUSH ECX                            ; 0059c83c
    PUSH EBP                            ; 0059c83d
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 0059c83e
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    ADD ESP,0xc                         ; 0059c843
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059c846
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059c84a
    SHL EAX,0x2                         ; 0059c84e
    XOR EDI,EDI                         ; 0059c851
    ADD EDX,EAX                         ; 0059c853
    MOV dword ptr [ESP + 0x3c],EDI      ; 0059c855
    MOV dword ptr [ESP + 0x10],EDX      ; 0059c859
    LEA EDX,[EBX*0x4 + 0x0]             ; 0059c85d
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059c864
    SUB EDX,EBX                         ; 0059c868
    XOR EAX,EAX                         ; 0059c86a
    LEA ECX,[EDX*0x4 + 0x0]             ; 0059c86c
    MOV EDI,dword ptr [ESI + 0x2c]      ; 0059c873
    MOV EDX,dword ptr [ESP + 0x68]      ; 0059c876
    TEST EDI,EDI                        ; 0059c87a
    JLE 0x0059c8bc                      ; 0059c87c
        ;   XREF to: 0059c8bc (CONDITIONAL_JUMP)  ; LAB_0059c8bc
    CMP dword ptr [EAX + 0x36712fc],0x0 ; 0059c87e | g_VertexRemapTable | DAT_03671300
        ;   Label: LAB_0059c87e
    JZ 0x0059cb61                       ; 0059c885
        ;   XREF to: 0059cb61 (CONDITIONAL_JUMP)  ; LAB_0059cb61
    MOV dword ptr [EAX + 0x36712fc],EBX ; 0059c88b | g_VertexRemapTable | DAT_03671300
    MOV EDI,dword ptr [EBP + 0x178]     ; 0059c891
    MOV ESI,EDX                         ; 0059c897
    ADD EDI,ECX                         ; 0059c899
    INC EBX                             ; 0059c89b
    ADD ECX,0xc                         ; 0059c89c
    MOVSD ES:EDI,ESI                    ; 0059c89f
    MOVSD ES:EDI,ESI                    ; 0059c8a0
    MOVSD ES:EDI,ESI                    ; 0059c8a1
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0059c8a2
        ;   Label: LAB_0059c8a2
    INC EDI                             ; 0059c8a6
    MOV dword ptr [ESP + 0x3c],EDI      ; 0059c8a7
    MOV ESI,EDI                         ; 0059c8ab
    MOV EDI,dword ptr [ESP + 0x10]      ; 0059c8ad
    ADD EAX,0x4                         ; 0059c8b1
    ADD EDX,0xc                         ; 0059c8b4
    CMP ESI,dword ptr [EDI + 0x2c]      ; 0059c8b7
    JL 0x0059c87e                       ; 0059c8ba
        ;   XREF to: 0059c87e (CONDITIONAL_JUMP)  ; LAB_0059c87e
    CMP EBX,dword ptr [EBP + 0x174]     ; 0059c8bc
        ;   Label: LAB_0059c8bc
    JZ 0x0059c8e7                       ; 0059c8c2
        ;   XREF to: 0059c8e7 (CONDITIONAL_JUMP)  ; LAB_0059c8e7
    MOV EDX,0x64eb99                    ; 0059c8c4 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x688                       ; 0059c8c9
    PUSH 0x64ebae                       ; 0059c8ce | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0059c8d3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0059c8d9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059c8df
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059c8e4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059c8e7
        ;   Label: LAB_0059c8e7
    MOV EBX,dword ptr [ESP]             ; 0059c8eb
    CMP EAX,EBX                         ; 0059c8ee
    JGE 0x0059ca19                      ; 0059c8f0
        ;   XREF to: 0059ca19 (CONDITIONAL_JUMP)  ; LAB_0059ca19
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059c8f6
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059c8fa
    SHL EAX,0x2                         ; 0059c8fe
    ADD EDX,EAX                         ; 0059c901
    MOV dword ptr [ESP + 0x20],EDX      ; 0059c903
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0059c907
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059c90b
    SUB EAX,EDX                         ; 0059c912
    SHL EAX,0x7                         ; 0059c914
    MOV EDX,EAX                         ; 0059c917
    SHL EAX,0x4                         ; 0059c919
    SUB EAX,EDX                         ; 0059c91c
    MOV EDX,EAX                         ; 0059c91e
    MOV EAX,dword ptr [ESP + 0x58]      ; 0059c920
    ADD EAX,0xc0                        ; 0059c924
    ADD EAX,EDX                         ; 0059c929
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059c92b
    MOV dword ptr [ESP + 0x8],EAX       ; 0059c92f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059c933
    ADD EAX,EDX                         ; 0059c93a
    ADD EAX,EAX                         ; 0059c93c
    MOV dword ptr [ESP + 0x34],EAX      ; 0059c93e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059c942
    SHL EAX,0x2                         ; 0059c946
    MOV EDI,EAX                         ; 0059c949
    SHL EDI,0x4                         ; 0059c94b
    SUB EDI,EAX                         ; 0059c94e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059c950
    SHL EAX,0x2                         ; 0059c954
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059c957
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059c95b
    LEA ESI,[EDX*0x4 + 0x0]             ; 0059c962
    MOV dword ptr [ESP + 0x18],EAX      ; 0059c969
    MOV EBX,dword ptr [ESP + 0x20]      ; 0059c96d
        ;   Label: LAB_0059c96d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059c971
    MOV EDX,dword ptr [EBP + 0x184]     ; 0059c975
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0059c97b
    ADD EDX,EDI                         ; 0059c97e
    ADD EBX,EAX                         ; 0059c980
    MOV dword ptr [EDX + 0x4],0x3       ; 0059c982
    MOV EAX,EBX                         ; 0059c989
    ADD EBX,0x6                         ; 0059c98b
    XOR ECX,ECX                         ; 0059c98e
        ;   Label: LAB_0059c98e
    MOV CX,word ptr [EAX]               ; 0059c990
    MOV ECX,dword ptr [ECX*0x4 + 0x36712fc] ; 0059c993 | g_VertexRemapTable
    MOV dword ptr [EDX + 0x18],ECX      ; 0059c99a
    XOR ECX,ECX                         ; 0059c99d
    MOV CX,word ptr [EAX + 0x6]         ; 0059c99f
    SHL ECX,0x8                         ; 0059c9a3
    MOV dword ptr [EDX + 0x1c],ECX      ; 0059c9a6
    XOR ECX,ECX                         ; 0059c9a9
    MOV CX,word ptr [EAX + 0xc]         ; 0059c9ab
    ADD EDX,0xc                         ; 0059c9af
    SHL ECX,0x8                         ; 0059c9b2
    ADD EAX,0x2                         ; 0059c9b5
    MOV dword ptr [EDX + 0x14],ECX      ; 0059c9b8
    CMP EAX,EBX                         ; 0059c9bb
    JNZ 0x0059c98e                      ; 0059c9bd
        ;   XREF to: 0059c98e (CONDITIONAL_JUMP)  ; LAB_0059c98e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059c9bf
    MOV EAX,dword ptr [EAX + 0x90]      ; 0059c9c3
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0059c9c9
    ADD EAX,dword ptr [ESP + 0x8]       ; 0059c9cd
    ADD EAX,0x8                         ; 0059c9d1
    PUSH EAX                            ; 0059c9d4
    PUSH EBP                            ; 0059c9d5
    ADD EDI,0x3c                        ; 0059c9d6
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90 ; 0059c9d9
        ;   XREF to: 0041af90 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 0059c9de
    MOV EDX,dword ptr [EBP + 0x188]     ; 0059c9e1
    MOV ECX,dword ptr [ESP + 0x34]      ; 0059c9e7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0059c9eb
    ADD ECX,0x12                        ; 0059c9ef
    ADD EDX,EBX                         ; 0059c9f2
    ADD ESI,0x4                         ; 0059c9f4
    MOV dword ptr [ESP + 0x34],ECX      ; 0059c9f7
    MOV dword ptr [EDX],EAX             ; 0059c9fb
    LEA EAX,[EBX + 0x4]                 ; 0059c9fd
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059ca00
    MOV EBX,dword ptr [ESP + 0x18]      ; 0059ca04
    INC EDX                             ; 0059ca08
    MOV dword ptr [ESP + 0x2c],EAX      ; 0059ca09
    MOV dword ptr [ESP + 0x40],EDX      ; 0059ca0d
    CMP ESI,EBX                         ; 0059ca11
    JL 0x0059c96d                       ; 0059ca13
        ;   XREF to: 0059c96d (CONDITIONAL_JUMP)  ; LAB_0059c96d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059ca19
        ;   Label: LAB_0059ca19
    CMP EAX,dword ptr [ESP + 0x4]       ; 0059ca1d
    JGE 0x0059cb4d                      ; 0059ca21
        ;   XREF to: 0059cb4d (CONDITIONAL_JUMP)  ; LAB_0059cb4d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059ca27
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059ca2b
    SHL EAX,0x2                         ; 0059ca2f
    ADD EDX,EAX                         ; 0059ca32
    MOV dword ptr [ESP + 0x1c],EDX      ; 0059ca34
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0059ca38
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059ca3c
    SUB EAX,EDX                         ; 0059ca43
    SHL EAX,0x7                         ; 0059ca45
    MOV EDX,EAX                         ; 0059ca48
    SHL EAX,0x4                         ; 0059ca4a
    SUB EAX,EDX                         ; 0059ca4d
    MOV EDX,dword ptr [ESP + 0x58]      ; 0059ca4f
    ADD EDX,0xc0                        ; 0059ca53
    ADD EDX,EAX                         ; 0059ca59
    MOV dword ptr [ESP + 0xc],EDX       ; 0059ca5b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059ca5f
    LEA EAX,[EDX*0x8 + 0x0]             ; 0059ca63
    ADD EAX,EDX                         ; 0059ca6a
    ADD EAX,EAX                         ; 0059ca6c
    MOV dword ptr [ESP + 0x30],EAX      ; 0059ca6e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059ca72
    SHL EAX,0x2                         ; 0059ca76
    MOV EDX,EAX                         ; 0059ca79
    SHL EAX,0x4                         ; 0059ca7b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0059ca7e
    SUB EAX,EDX                         ; 0059ca82
    MOV ESI,dword ptr [ESP + 0x24]      ; 0059ca84
    MOV dword ptr [ESP + 0x38],EAX      ; 0059ca88
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ca8c
    SHL EDI,0x2                         ; 0059ca90
    SHL EAX,0x2                         ; 0059ca93
    SHL ESI,0x2                         ; 0059ca96
    MOV dword ptr [ESP + 0x14],EAX      ; 0059ca99
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059ca9d
        ;   Label: LAB_0059ca9d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059caa1
    MOV ECX,dword ptr [ESP + 0x30]      ; 0059caa5
    MOV EDX,dword ptr [EBP + 0x184]     ; 0059caa9
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0059caaf
    ADD EDX,EAX                         ; 0059cab2
    ADD EBX,ECX                         ; 0059cab4
    MOV dword ptr [EDX + 0x4],0x3       ; 0059cab6
    MOV EAX,EBX                         ; 0059cabd
    ADD EBX,0x6                         ; 0059cabf
    XOR ECX,ECX                         ; 0059cac2
        ;   Label: LAB_0059cac2
    MOV CX,word ptr [EAX]               ; 0059cac4
    MOV ECX,dword ptr [ECX*0x4 + 0x36712fc] ; 0059cac7 | g_VertexRemapTable
    MOV dword ptr [EDX + 0x18],ECX      ; 0059cace
    XOR ECX,ECX                         ; 0059cad1
    MOV CX,word ptr [EAX + 0x6]         ; 0059cad3
    SHL ECX,0x8                         ; 0059cad7
    MOV dword ptr [EDX + 0x1c],ECX      ; 0059cada
    XOR ECX,ECX                         ; 0059cadd
    MOV CX,word ptr [EAX + 0xc]         ; 0059cadf
    ADD EDX,0xc                         ; 0059cae3
    SHL ECX,0x8                         ; 0059cae6
    ADD EAX,0x2                         ; 0059cae9
    MOV dword ptr [EDX + 0x14],ECX      ; 0059caec
    CMP EAX,EBX                         ; 0059caef
    JNZ 0x0059cac2                      ; 0059caf1
        ;   XREF to: 0059cac2 (CONDITIONAL_JUMP)  ; LAB_0059cac2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059caf3
    MOV EAX,dword ptr [EAX + 0x90]      ; 0059caf7
    IMUL EAX,dword ptr [ESI + EAX*0x1],0x48 ; 0059cafd
    ADD EAX,dword ptr [ESP + 0xc]       ; 0059cb01
    ADD EAX,0x8                         ; 0059cb05
    PUSH EAX                            ; 0059cb08
    PUSH EBP                            ; 0059cb09
    ADD EDI,0x4                         ; 0059cb0a
    ADD ESI,0x4                         ; 0059cb0d
    CALL core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90 ; 0059cb10
        ;   XREF to: 0041af90 (UNCONDITIONAL_CALL)  ; int core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90(CBodyPart * this_ptr, char * texture_name)
    ADD ESP,0x8                         ; 0059cb15
    MOV EDX,dword ptr [EBP + 0x188]     ; 0059cb18
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059cb1e
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059cb22
    MOV dword ptr [EDX + EDI*0x1 + -0x4],EAX ; 0059cb26
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059cb2a
    ADD EBX,0x3c                        ; 0059cb2e
    MOV EDX,dword ptr [ESP + 0x30]      ; 0059cb31
    MOV dword ptr [ESP + 0x38],EBX      ; 0059cb35
    INC EAX                             ; 0059cb39
    ADD EDX,0x12                        ; 0059cb3a
    MOV dword ptr [ESP + 0x40],EAX      ; 0059cb3d
    MOV dword ptr [ESP + 0x30],EDX      ; 0059cb41
    CMP ESI,ECX                         ; 0059cb45
    JL 0x0059ca9d                       ; 0059cb47
        ;   XREF to: 0059ca9d (CONDITIONAL_JUMP)  ; LAB_0059ca9d
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059cb4d
        ;   Label: LAB_0059cb4d
    CMP EAX,dword ptr [EBP + 0x180]     ; 0059cb51
    JNZ 0x0059cb70                      ; 0059cb57
        ;   XREF to: 0059cb70 (CONDITIONAL_JUMP)  ; LAB_0059cb70
    ADD ESP,0x44                        ; 0059cb59
        ;   Label: LAB_0059cb59
    POP EBP                             ; 0059cb5c
    POP EDI                             ; 0059cb5d
    POP ESI                             ; 0059cb5e
    POP EBX                             ; 0059cb5f
    RET                                 ; 0059cb60
    MOV dword ptr [EAX + 0x36712fc],0xffffffff ; 0059cb61 | DAT_03671300
        ;   Label: LAB_0059cb61
    JMP 0x0059c8a2                      ; 0059cb6b
        ;   XREF to: 0059c8a2 (UNCONDITIONAL_JUMP)  ; LAB_0059c8a2
    MOV ESI,0x64ebda                    ; 0059cb70 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_0059cb70
    MOV EDI,0x6bf                       ; 0059cb75
    PUSH 0x64ebef                       ; 0059cb7a | = "CDeformableModel::dismember - Hell fr..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0059cb7f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0059cb85 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059cb8b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0059cb90
    ADD ESP,0x44                        ; 0059cb93
    POP EBP                             ; 0059cb96
    POP EDI                             ; 0059cb97
    POP ESI                             ; 0059cb98
    POP EBX                             ; 0059cb99
    RET                                 ; 0059cb9a

