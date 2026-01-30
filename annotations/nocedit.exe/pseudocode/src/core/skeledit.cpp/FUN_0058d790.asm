; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_0058d790(void)
;
; Local Variables:
; undefined8       Stack[-0x540]:8  local_540
; undefined4       Stack[-0x538]:4  local_538
; undefined4       Stack[-0x534]:4  local_534
; undefined4       Stack[-0x530]:4  local_530
; undefined4       Stack[-0x52c]:4  local_52c
; undefined        Stack[-0x528]:1  local_528
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
;   core_skeledit.cpp_FUN_0058c190 at 0058d419
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064ae12
;   TerminatedCString s_Can_t_find_any_bones_inf_0064ae27
;   TerminatedCString s_core_skeledit_cpp_0064ae50
;   TerminatedCString s_BUG_Count_mismatch_0064ae65
;   TerminatedCString s_core_skeledit_cpp_0064ae7b
;   TerminatedCString s_core_skeledit_cpp_0064ae90
;   TerminatedCString s_Out_of_memory_0064aea5
;   double DOUBLE_0064aeba = 256
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stack.c___STK_FUN_005ff9f3
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;   shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
;
; *****************************************************************************

section .text

    PUSH 0x558                          ; 0058d790
        ;   Label: core_skeledit.cpp_FUN_0058d790
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058d795
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058d79a
    PUSH ESI                            ; 0058d79b
    PUSH EDI                            ; 0058d79c
    PUSH EBP                            ; 0058d79d
    MOV EBP,ESP                         ; 0058d79e
    SUB ESP,0x530                       ; 0058d7a0
    AND ESP,0xfffffff8                  ; 0058d7a6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058d7a9
    PUSH EDX                            ; 0058d7ac
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 ; 0058d7ad
        ;   XREF to: 0059a810 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058d7b2
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0058d7b5
    MOV dword ptr [ESP + 0x528],EAX     ; 0058d7bb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0058d7c2
    PUSH 0x0                            ; 0058d7c5
    MOV ECX,dword ptr [EAX + 0x8]       ; 0058d7c7
    PUSH ECX                            ; 0058d7ca
    MOV EBX,dword ptr [EAX]             ; 0058d7cb
    PUSH EBX                            ; 0058d7cd
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058d7ce
    PUSH ESI                            ; 0058d7d1
    MOV EDI,dword ptr [EBP + 0x14]      ; 0058d7d2
    PUSH EDI                            ; 0058d7d5
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 ; 0058d7d6
        ;   XREF to: 0059a510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, ...)
    ADD ESP,0x14                        ; 0058d7db
    XOR EAX,EAX                         ; 0058d7de
    XOR EDX,EDX                         ; 0058d7e0
    MOV dword ptr [ESP + 0x508],EAX     ; 0058d7e2
    MOV dword ptr [ESP + 0x4f4],EDX     ; 0058d7e9
    LEA EAX,[ESI*0x4 + 0x0]             ; 0058d7f0
    MOV dword ptr [ESP + 0x504],EDX     ; 0058d7f7
    MOV dword ptr [ESP + 0x4e8],EAX     ; 0058d7fe
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058d805
        ;   Label: LAB_0058d805
    ADD EBX,dword ptr [ESP + 0x4e8]     ; 0058d808
    MOV EAX,dword ptr [ESP + 0x508]     ; 0058d80f
    CMP EAX,dword ptr [EBX + 0x2c]      ; 0058d816
    JGE 0x0058d9f4                      ; 0058d819
        ;   XREF to: 0058d9f4 (CONDITIONAL_JUMP)  ; LAB_0058d9f4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0058d81f
    MOV ESI,dword ptr [ESP + 0x504]     ; 0058d822
    MOV EDX,dword ptr [EDX + 0x4]       ; 0058d829
    ADD EDX,ESI                         ; 0058d82c
    MOV EAX,dword ptr [EDX]             ; 0058d82e
    MOV dword ptr [ESP + 0xc],EAX       ; 0058d830
    LEA EAX,[EDX + 0x4]                 ; 0058d834
    MOV EAX,dword ptr [EAX]             ; 0058d837
    MOV dword ptr [ESP + 0x10],EAX      ; 0058d839
    LEA EAX,[EDX + 0x8]                 ; 0058d83d
    MOV EAX,dword ptr [EAX]             ; 0058d840
    MOV ECX,0xfa                        ; 0058d842
    MOV dword ptr [ESP + 0x14],EAX      ; 0058d847
    LEA EDI,[ESP + 0x18]                ; 0058d84b
    LEA ESI,[EDX + 0xc]                 ; 0058d84f
    MOVSD.REP ES:EDI,ESI                ; 0058d852
    MOV EAX,dword ptr [EDX + 0x3f4]     ; 0058d854
    MOV dword ptr [ESP + 0x400],EAX     ; 0058d85a
    MOV EAX,dword ptr [EDX + 0x3f8]     ; 0058d861
    MOV ECX,0x32                        ; 0058d867
    MOV dword ptr [ESP + 0x404],EAX     ; 0058d86c
    LEA EDI,[ESP + 0x408]               ; 0058d873
    LEA ESI,[EDX + 0x3fc]               ; 0058d87a
    MOVSD.REP ES:EDI,ESI                ; 0058d880
    XOR EAX,EAX                         ; 0058d882
    MOV EDI,dword ptr [ESP + 0x4f4]     ; 0058d884
    MOV ESI,dword ptr [EBX + 0x40]      ; 0058d88b
    MOV dword ptr [ESP],EAX             ; 0058d88e
    ADD ESI,EDI                         ; 0058d891
    MOV dword ptr [ESP + 0x4],EAX       ; 0058d893
    LEA EAX,[ESI + 0x10]                ; 0058d897
    MOV byte ptr [ESI],0x0              ; 0058d89a
    MOV dword ptr [ESP + 0x51c],EAX     ; 0058d89d
    XOR EAX,EAX                         ; 0058d8a4
        ;   Label: LAB_0058d8a4
    MOV AL,byte ptr [ESI]               ; 0058d8a6
    CMP EAX,0x3                         ; 0058d8a8
    JGE 0x0058d8fa                      ; 0058d8ab
        ;   XREF to: 0058d8fa (CONDITIONAL_JUMP)  ; LAB_0058d8fa
    MOV EBX,0xffffffff                  ; 0058d8ad
    MOV EAX,dword ptr [ESP + 0x528]     ; 0058d8b2
    XOR EDI,EDI                         ; 0058d8b9
    XOR EDX,EDX                         ; 0058d8bb
    MOV dword ptr [ESP + 0x8],EDI       ; 0058d8bd
    TEST EAX,EAX                        ; 0058d8c1
    JLE 0x0058d8ed                      ; 0058d8c3
        ;   XREF to: 0058d8ed (CONDITIONAL_JUMP)  ; LAB_0058d8ed
    MOV EDI,dword ptr [ESP + 0x528]     ; 0058d8c5
    XOR ECX,ECX                         ; 0058d8cc
    FLD float ptr [ESP + ECX*0x1 + 0x18] ; 0058d8ce
        ;   Label: LAB_0058d8ce
    FCOMP float ptr [ESP + 0x8]         ; 0058d8d2
    FNSTSW AX                           ; 0058d8d6
    SAHF                                ; 0058d8d8
    JBE 0x0058d8e5                      ; 0058d8d9
        ;   XREF to: 0058d8e5 (CONDITIONAL_JUMP)  ; LAB_0058d8e5
    MOV EAX,dword ptr [ESP + ECX*0x1 + 0x18] ; 0058d8db
    MOV EBX,EDX                         ; 0058d8df
    MOV dword ptr [ESP + 0x8],EAX       ; 0058d8e1
    INC EDX                             ; 0058d8e5
        ;   Label: LAB_0058d8e5
    ADD ECX,0x4                         ; 0058d8e6
    CMP EDX,EDI                         ; 0058d8e9
    JL 0x0058d8ce                       ; 0058d8eb
        ;   XREF to: 0058d8ce (CONDITIONAL_JUMP)  ; LAB_0058d8ce
    FLD float ptr [ESP + 0x8]           ; 0058d8ed
        ;   Label: LAB_0058d8ed
    FLDZ                                ; 0058d8f1
    FCOMPP                              ; 0058d8f3
    FNSTSW AX                           ; 0058d8f5
    SAHF                                ; 0058d8f7
    JC 0x0058d95e                       ; 0058d8f8
        ;   XREF to: 0058d95e (CONDITIONAL_JUMP)  ; LAB_0058d95e
    XOR EAX,EAX                         ; 0058d8fa
        ;   Label: LAB_0058d8fa
    MOV AL,byte ptr [ESI]               ; 0058d8fc
    CMP EAX,0x1                         ; 0058d8fe
    JL 0x0058d9cd                       ; 0058d901
        ;   XREF to: 0058d9cd (CONDITIONAL_JUMP)  ; LAB_0058d9cd
    MOV EAX,ESI                         ; 0058d907
        ;   Label: LAB_0058d907
    XOR EDX,EDX                         ; 0058d909
    XOR ECX,ECX                         ; 0058d90b
        ;   Label: LAB_0058d90b
    MOV CL,byte ptr [ESI]               ; 0058d90d
    CMP EDX,ECX                         ; 0058d90f
    JGE 0x0058d925                      ; 0058d911
        ;   XREF to: 0058d925 (CONDITIONAL_JUMP)  ; LAB_0058d925
    FLD float ptr [EAX + 0x4]           ; 0058d913
    FLD ST0                             ; 0058d916
    FDIV double ptr [ESP]               ; 0058d918
    ADD EAX,0x4                         ; 0058d91b
    INC EDX                             ; 0058d91e
    FSTP ST1                            ; 0058d91f
    FSTP float ptr [EAX]                ; 0058d921
    JMP 0x0058d90b                      ; 0058d923
        ;   XREF to: 0058d90b (UNCONDITIONAL_JUMP)  ; LAB_0058d90b
    MOV EBX,dword ptr [ESP + 0x504]     ; 0058d925
        ;   Label: LAB_0058d925
    MOV ESI,dword ptr [ESP + 0x508]     ; 0058d92c
    MOV ECX,dword ptr [ESP + 0x4f4]     ; 0058d933
    ADD EBX,0x4c4                       ; 0058d93a
    INC ESI                             ; 0058d940
    ADD ECX,0x34                        ; 0058d941
    MOV dword ptr [ESP + 0x504],EBX     ; 0058d944
    MOV dword ptr [ESP + 0x508],ESI     ; 0058d94b
    MOV dword ptr [ESP + 0x4f4],ECX     ; 0058d952
    JMP 0x0058d805                      ; 0058d959
        ;   XREF to: 0058d805 (UNCONDITIONAL_JUMP)  ; LAB_0058d805
    XOR EAX,EAX                         ; 0058d95e
        ;   Label: LAB_0058d95e
    MOV AL,byte ptr [ESI]               ; 0058d960
    MOV byte ptr [ESI + EAX*0x1 + 0x1],BL ; 0058d962
    XOR EAX,EAX                         ; 0058d966
    MOV AL,byte ptr [ESI]               ; 0058d968
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058d96a
    MOV dword ptr [ESI + EAX*0x4 + 0x4],EDX ; 0058d96e
    IMUL EAX,EBX,0x30                   ; 0058d972
    ADD EAX,dword ptr [EBP + 0x20]      ; 0058d975
    PUSH EAX                            ; 0058d978
    LEA EAX,[ESP + 0x10]                ; 0058d979
    PUSH EAX                            ; 0058d97d
    LEA EAX,[ESP + 0x4d8]               ; 0058d97e
    PUSH EAX                            ; 0058d985
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0058d986
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    XOR EDX,EDX                         ; 0058d98b
    MOV DL,byte ptr [ESI]               ; 0058d98d
    IMUL EDX,EDX,0xc                    ; 0058d98f
    ADD ESP,0xc                         ; 0058d992
    ADD EDX,dword ptr [ESP + 0x51c]     ; 0058d995
    CMP EDX,EAX                         ; 0058d99c
    JNZ 0x0058d9bb                      ; 0058d99e
        ;   XREF to: 0058d9bb (CONDITIONAL_JUMP)  ; LAB_0058d9bb
    XOR EDI,EDI                         ; 0058d9a0
        ;   Label: LAB_0058d9a0
    MOV dword ptr [ESP + EBX*0x4 + 0x18],EDI ; 0058d9a2
    FLD float ptr [ESP + 0x8]           ; 0058d9a6
    MOV AH,byte ptr [ESI]               ; 0058d9aa
    FADD double ptr [ESP]               ; 0058d9ac
    INC AH                              ; 0058d9af
    FSTP double ptr [ESP]               ; 0058d9b1
    MOV byte ptr [ESI],AH               ; 0058d9b4
    JMP 0x0058d8a4                      ; 0058d9b6
        ;   XREF to: 0058d8a4 (UNCONDITIONAL_JUMP)  ; LAB_0058d8a4
    MOV ECX,dword ptr [EAX]             ; 0058d9bb
        ;   Label: LAB_0058d9bb
    MOV dword ptr [EDX],ECX             ; 0058d9bd
    MOV ECX,dword ptr [EAX + 0x4]       ; 0058d9bf
    MOV dword ptr [EDX + 0x4],ECX       ; 0058d9c2
    MOV ECX,dword ptr [EAX + 0x8]       ; 0058d9c5
    MOV dword ptr [EDX + 0x8],ECX       ; 0058d9c8
    JMP 0x0058d9a0                      ; 0058d9cb
        ;   XREF to: 0058d9a0 (UNCONDITIONAL_JUMP)  ; LAB_0058d9a0
    MOV EAX,0x64ae12                    ; 0058d9cd | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058d9cd
    MOV EDX,0x856                       ; 0058d9d2
    PUSH 0x64ae27                       ; 0058d9d7 | = "Can't find any bones influencing vertex!"
    MOV [0x02f0ca48],EAX                ; 0058d9dc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0058d9e1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058d9e7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058d9ec
    JMP 0x0058d907                      ; 0058d9ef
        ;   XREF to: 0058d907 (UNCONDITIONAL_JUMP)  ; LAB_0058d907
    PUSH 0x0                            ; 0058d9f4
        ;   Label: LAB_0058d9f4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0058d9f6
    PUSH EAX                            ; 0058d9f9
    CALL shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 ; 0058d9fa
        ;   XREF to: 0051bd30 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh * this_ptr, int attribute_index)
    ADD ESP,0x8                         ; 0058d9ff
    PUSH 0x1                            ; 0058da02
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0058da04
    PUSH EDX                            ; 0058da07
    CALL shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 ; 0058da08
        ;   XREF to: 0051bd30 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh * this_ptr, int attribute_index)
    ADD ESP,0x8                         ; 0058da0d
    PUSH 0x2                            ; 0058da10
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0058da12
    PUSH ECX                            ; 0058da15
    CALL shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30 ; 0058da16
        ;   XREF to: 0051bd30 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh * this_ptr, int attribute_index)
    ADD ESP,0x8                         ; 0058da1b
    XOR ECX,ECX                         ; 0058da1e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058da20
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058da23
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058da26
    SHL ESI,0x2                         ; 0058da29
    MOV EBX,dword ptr [EDX + 0x7140]    ; 0058da2c
    ADD EAX,ESI                         ; 0058da32
    TEST EBX,EBX                        ; 0058da34
    JLE 0x0058da60                      ; 0058da36
        ;   XREF to: 0058da60 (CONDITIONAL_JUMP)  ; LAB_0058da60
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058da38
    XOR EBX,EBX                         ; 0058da3b
    MOV dword ptr [EAX + 0x7178],EBX    ; 0058da3d
        ;   Label: LAB_0058da3d
    MOV dword ptr [EAX + 0x7164],EBX    ; 0058da43
    INC ECX                             ; 0058da49
    MOV EDI,dword ptr [EDX + 0x7140]    ; 0058da4a
    ADD EAX,0x60                        ; 0058da50
    CMP ECX,EDI                         ; 0058da53
    JL 0x0058da3d                       ; 0058da55
        ;   XREF to: 0058da3d (CONDITIONAL_JUMP)  ; LAB_0058da3d
    LEA EAX,[EAX]                       ; 0058da57
    LEA EDX,[EDX]                       ; 0058da5d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058da60
        ;   Label: LAB_0058da60
    MOV dword ptr [ESI + EAX*0x1 + 0x54],0x0 ; 0058da63
    MOV dword ptr [ESI + EAX*0x1 + 0x68],0x0 ; 0058da6b
    XOR EAX,EAX                         ; 0058da73
    MOV dword ptr [ESP + 0x510],EAX     ; 0058da75
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0058da7c
    CMP dword ptr [EAX + 0x8],0x0       ; 0058da7f
    JLE 0x0058dbde                      ; 0058da83
        ;   XREF to: 0058dbde (CONDITIONAL_JUMP)  ; LAB_0058dbde
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058da89
    XOR ESI,ESI                         ; 0058da8c
    SHL EAX,0x2                         ; 0058da8e
    MOV dword ptr [ESP + 0x4f8],ESI     ; 0058da91
    MOV dword ptr [ESP + 0x514],EAX     ; 0058da98
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058da9f
    MOV EBX,dword ptr [ESP + 0x514]     ; 0058daa2
    MOV dword ptr [ESP + 0x500],ESI     ; 0058daa9
    ADD EAX,EBX                         ; 0058dab0
    MOV dword ptr [ESP + 0x4f0],ESI     ; 0058dab2
    MOV dword ptr [ESP + 0x4ec],EAX     ; 0058dab9
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0058dac0
        ;   Label: LAB_0058dac0
    MOV EDX,dword ptr [ESP + 0x4f0]     ; 0058dac3
    MOV ESI,dword ptr [ESP + 0x4ec]     ; 0058daca
    MOV ECX,dword ptr [ESP + 0x500]     ; 0058dad1
    MOV EAX,dword ptr [ESP + 0x4ec]     ; 0058dad8
    MOV EDI,dword ptr [EDI + 0xc]       ; 0058dadf
    MOV ESI,dword ptr [ESI + 0x7c]      ; 0058dae2
    MOV EAX,dword ptr [EAX + 0x90]      ; 0058dae5
    ADD EDI,EDX                         ; 0058daeb
    MOV EDX,dword ptr [ESP + 0x4f8]     ; 0058daed
    ADD ESI,ECX                         ; 0058daf4
    ADD EDX,EAX                         ; 0058daf6
    MOV EAX,dword ptr [EDI]             ; 0058daf8
    MOV ECX,EDI                         ; 0058dafa
    MOV dword ptr [EDX],EAX             ; 0058dafc
    MOV EDX,EDI                         ; 0058dafe
    MOV EAX,ESI                         ; 0058db00
    ADD ESI,0x6                         ; 0058db02
    FLD double ptr [0x0064aeba]         ; 0058db05 | DOUBLE_0064aeba
    MOV BX,word ptr [ECX + 0x10]        ; 0058db0b
        ;   Label: LAB_0058db0b
    MOV word ptr [EAX],BX               ; 0058db0f
    FLD float ptr [EDX + 0x1c]          ; 0058db12
    FMUL ST1                            ; 0058db15
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058db17
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x52c]       ; 0058db1c
    MOV EBX,dword ptr [ESP + 0x52c]     ; 0058db23
    MOV word ptr [EAX + 0x6],BX         ; 0058db2a
    FLD float ptr [EDX + 0x20]          ; 0058db2e
    FMUL ST1                            ; 0058db31
    ADD EDX,0x8                         ; 0058db33
    ADD EAX,0x2                         ; 0058db36
    CALL crt_math.c_round_FUN_005fe6b0  ; 0058db39
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x52c]       ; 0058db3e
    MOV EBX,dword ptr [ESP + 0x52c]     ; 0058db45
    ADD ECX,0x4                         ; 0058db4c
    MOV word ptr [EAX + 0xa],BX         ; 0058db4f
    CMP EAX,ESI                         ; 0058db53
    JNZ 0x0058db0b                      ; 0058db55
        ;   XREF to: 0058db0b (CONDITIONAL_JUMP)  ; LAB_0058db0b
    FSTP ST0                            ; 0058db57
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db59
    MOV EDX,dword ptr [ESP + 0x514]     ; 0058db5c
    MOV ECX,dword ptr [EDI + 0x8]       ; 0058db63
    ADD EAX,EDX                         ; 0058db66
    TEST ECX,ECX                        ; 0058db68
    JZ 0x0058dc66                       ; 0058db6a
        ;   XREF to: 0058dc66 (CONDITIONAL_JUMP)  ; LAB_0058dc66
    IMUL EDX,dword ptr [EDI + 0x4],0x60 ; 0058db70
    MOV EDI,dword ptr [EBP + 0x14]      ; 0058db74
    MOV ECX,dword ptr [ESP + 0x514]     ; 0058db77
    ADD EDX,EDI                         ; 0058db7e
    ADD EDX,ECX                         ; 0058db80
    INC dword ptr [EDX + 0x7178]        ; 0058db82
    INC dword ptr [EAX + 0x68]          ; 0058db88
    MOV ECX,dword ptr [ESP + 0x4f8]     ; 0058db8b
        ;   Label: LAB_0058db8b
    MOV EBX,dword ptr [ESP + 0x500]     ; 0058db92
    MOV ESI,dword ptr [ESP + 0x4f0]     ; 0058db99
    MOV EDI,dword ptr [ESP + 0x510]     ; 0058dba0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0058dba7
    ADD ECX,0x4                         ; 0058dbaa
    ADD EBX,0x12                        ; 0058dbad
    ADD ESI,0x8c                        ; 0058dbb0
    INC EDI                             ; 0058dbb6
    MOV dword ptr [ESP + 0x4f8],ECX     ; 0058dbb7
    MOV dword ptr [ESP + 0x500],EBX     ; 0058dbbe
    MOV dword ptr [ESP + 0x4f0],ESI     ; 0058dbc5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058dbcc
    MOV dword ptr [ESP + 0x510],EDI     ; 0058dbcf
    CMP EDI,ECX                         ; 0058dbd6
    JL 0x0058dac0                       ; 0058dbd8
        ;   XREF to: 0058dac0 (CONDITIONAL_JUMP)  ; LAB_0058dac0
    MOV EDI,dword ptr [EBP + 0x18]      ; 0058dbde
        ;   Label: LAB_0058dbde
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dbe1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058dbe4
    XOR ESI,ESI                         ; 0058dbe7
    XOR EDX,EDX                         ; 0058dbe9
    SHL EDI,0x2                         ; 0058dbeb
    XOR ECX,ECX                         ; 0058dbee
    ADD EAX,EDI                         ; 0058dbf0
    CMP dword ptr [EBX + 0x7140],0x0    ; 0058dbf2
    JLE 0x0058dc20                      ; 0058dbf9
        ;   XREF to: 0058dc20 (CONDITIONAL_JUMP)  ; LAB_0058dc20
    ADD ECX,dword ptr [EAX + 0x7164]    ; 0058dbfb
        ;   Label: LAB_0058dbfb
    ADD ESI,dword ptr [EAX + 0x7178]    ; 0058dc01
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058dc07
    INC EDX                             ; 0058dc0a
    ADD EAX,0x60                        ; 0058dc0b
    CMP EDX,dword ptr [EBX + 0x7140]    ; 0058dc0e
    JL 0x0058dbfb                       ; 0058dc14
        ;   XREF to: 0058dbfb (CONDITIONAL_JUMP)  ; LAB_0058dbfb
    LEA EAX,[EAX]                       ; 0058dc16
    LEA EDX,[EDX]                       ; 0058dc1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dc20
        ;   Label: LAB_0058dc20
    ADD EAX,EDI                         ; 0058dc23
    CMP ECX,dword ptr [EAX + 0x54]      ; 0058dc25
    JZ 0x0058dc86                       ; 0058dc28
        ;   XREF to: 0058dc86 (CONDITIONAL_JUMP)  ; LAB_0058dc86
    MOV ECX,0x64ae50                    ; 0058dc2a | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058dc2a
    MOV EBX,0x89c                       ; 0058dc2f
    PUSH 0x64ae65                       ; 0058dc34 | = "BUG! Count mismatch!!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058dc39 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058dc3f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058dc45
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058dc4a
    MOV EBX,dword ptr [EBP + 0x18]      ; 0058dc4d
        ;   Label: LAB_0058dc4d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058dc50
    SHL EBX,0x2                         ; 0058dc53
    ADD EBX,ESI                         ; 0058dc56
    MOV EDI,dword ptr [EBX + 0x68]      ; 0058dc58
    TEST EDI,EDI                        ; 0058dc5b
    JG 0x0058dc8d                       ; 0058dc5d
        ;   XREF to: 0058dc8d (CONDITIONAL_JUMP)  ; LAB_0058dc8d
    MOV ESP,EBP                         ; 0058dc5f
        ;   Label: LAB_0058dc5f
    POP EBP                             ; 0058dc61
    POP EDI                             ; 0058dc62
    POP ESI                             ; 0058dc63
    POP EBX                             ; 0058dc64
    RET                                 ; 0058dc65
    IMUL EDX,dword ptr [EDI + 0x4],0x60 ; 0058dc66
        ;   Label: LAB_0058dc66
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058dc6a
    MOV EDI,dword ptr [ESP + 0x514]     ; 0058dc6d
    ADD EDX,ESI                         ; 0058dc74
    ADD EDX,EDI                         ; 0058dc76
    INC dword ptr [EDX + 0x7164]        ; 0058dc78
    INC dword ptr [EAX + 0x54]          ; 0058dc7e
    JMP 0x0058db8b                      ; 0058dc81
        ;   XREF to: 0058db8b (UNCONDITIONAL_JUMP)  ; LAB_0058db8b
    CMP ESI,dword ptr [EAX + 0x68]      ; 0058dc86
        ;   Label: LAB_0058dc86
    JNZ 0x0058dc2a                      ; 0058dc89
        ;   XREF to: 0058dc2a (CONDITIONAL_JUMP)  ; LAB_0058dc2a
    JMP 0x0058dc4d                      ; 0058dc8b
        ;   XREF to: 0058dc4d (UNCONDITIONAL_JUMP)  ; LAB_0058dc4d
    PUSH 0x8a1                          ; 0058dc8d
        ;   Label: LAB_0058dc8d
    PUSH 0x64ae7b                       ; 0058dc92 | = "..\\core\\skeledit.cpp"
    LEA EAX,[EDI*0x4 + 0x0]             ; 0058dc97
    PUSH EAX                            ; 0058dc9e
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0058dc9f
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0058dca4
    MOV dword ptr [EBX + 0xa4],EAX      ; 0058dca7
    TEST EAX,EAX                        ; 0058dcad
    JNZ 0x0058dcd4                      ; 0058dcaf
        ;   XREF to: 0058dcd4 (CONDITIONAL_JUMP)  ; LAB_0058dcd4
    MOV EDX,0x64ae90                    ; 0058dcb1 | = "..\\core\\skeledit.cpp"
    MOV ECX,0x8a2                       ; 0058dcb6
    PUSH 0x64aea5                       ; 0058dcbb | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0058dcc0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058dcc6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058dccc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058dcd1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058dcd4
        ;   Label: LAB_0058dcd4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058dcd7
    XOR EBX,EBX                         ; 0058dcda
    XOR ESI,ESI                         ; 0058dcdc
    MOV dword ptr [ESP + 0x524],EBX     ; 0058dcde
    SHL EAX,0x2                         ; 0058dce5
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058dce8
    MOV dword ptr [ESP + 0x50c],ESI     ; 0058dceb
    MOV EDI,dword ptr [EDX + 0x7140]    ; 0058dcf2
    MOV EBX,dword ptr [EBX + EAX*0x1 + 0x54] ; 0058dcf8
    TEST EDI,EDI                        ; 0058dcfc
    JLE 0x0058dc5f                      ; 0058dcfe
        ;   XREF to: 0058dc5f (CONDITIONAL_JUMP)  ; LAB_0058dc5f
    MOV dword ptr [ESP + 0x4fc],EDX     ; 0058dd04
    MOV dword ptr [ESP + 0x520],EAX     ; 0058dd0b
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 0058dd12
        ;   Label: LAB_0058dd12
    MOV EDX,dword ptr [ESP + 0x524]     ; 0058dd19
    XOR ECX,ECX                         ; 0058dd20
    MOV dword ptr [ESP + 0x518],EAX     ; 0058dd22
    SHL EDX,0x2                         ; 0058dd29
    IMUL EAX,EBX,0x8c                   ; 0058dd2c
    MOV ESI,dword ptr [ESP + 0x518]     ; 0058dd32
        ;   Label: LAB_0058dd32
    ADD ESI,dword ptr [ESP + 0x520]     ; 0058dd39
    CMP ECX,dword ptr [ESI + 0x7178]    ; 0058dd40
    JL 0x0058dd7b                       ; 0058dd46
        ;   XREF to: 0058dd7b (CONDITIONAL_JUMP)  ; LAB_0058dd7b
    MOV EDI,dword ptr [ESP + 0x4fc]     ; 0058dd48
    MOV EAX,dword ptr [ESP + 0x50c]     ; 0058dd4f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058dd56
    ADD EDI,0x60                        ; 0058dd59
    INC EAX                             ; 0058dd5c
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0058dd5d
    MOV dword ptr [ESP + 0x4fc],EDI     ; 0058dd63
    MOV dword ptr [ESP + 0x50c],EAX     ; 0058dd6a
    CMP EAX,ECX                         ; 0058dd71
    JGE 0x0058dc5f                      ; 0058dd73
        ;   XREF to: 0058dc5f (CONDITIONAL_JUMP)  ; LAB_0058dc5f
    JMP 0x0058dd12                      ; 0058dd79
        ;   XREF to: 0058dd12 (UNCONDITIONAL_JUMP)  ; LAB_0058dd12
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0058dd7b
        ;   Label: LAB_0058dd7b
    MOV ESI,dword ptr [ESI + 0xc]       ; 0058dd7e
    ADD ESI,EAX                         ; 0058dd81
    MOV EDI,dword ptr [ESP + 0x520]     ; 0058dd83
    MOV dword ptr [ESP + 0x4e4],ESI     ; 0058dd8a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058dd91
    ADD ESI,EDI                         ; 0058dd94
    MOV ESI,dword ptr [ESI + 0xa4]      ; 0058dd96
    ADD ESI,EDX                         ; 0058dd9c
    MOV dword ptr [ESP + 0x52c],ESI     ; 0058dd9e
    MOV ESI,dword ptr [ESP + 0x4e4]     ; 0058dda5
    INC EBX                             ; 0058ddac
    MOV EDI,dword ptr [ESP + 0x52c]     ; 0058ddad
    MOV ESI,dword ptr [ESI + 0xc]       ; 0058ddb4
    INC ECX                             ; 0058ddb7
    MOV dword ptr [EDI],ESI             ; 0058ddb8
    MOV ESI,dword ptr [ESP + 0x524]     ; 0058ddba
    ADD EAX,0x8c                        ; 0058ddc1
    INC ESI                             ; 0058ddc6
    ADD EDX,0x4                         ; 0058ddc7
    MOV dword ptr [ESP + 0x524],ESI     ; 0058ddca
    JMP 0x0058dd32                      ; 0058ddd1
        ;   XREF to: 0058dd32 (UNCONDITIONAL_JUMP)  ; LAB_0058dd32

