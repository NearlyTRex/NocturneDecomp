; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,float collapse_weight)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_idx_1
; int              Stack[0xc]:4   vertex_idx_2
; float            Stack[0x10]:4   collapse_weight
; Local Variables:
; undefined4       Stack[-0x4f0]:4  local_4f0
; undefined4       Stack[-0x4ec]:4  local_4ec
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516cda
;   shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920 at 0051b995
;   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 at 00517489
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006377e9
;   TerminatedCString s_Tried_to_collapse_edge_t_006377fe
;   TerminatedCString s_shape_meshlod_cpp_00637829
;   TerminatedCString s_Bug_0063783e
;   TerminatedCString s_Was_going_to_change_edge_00637843
;   TerminatedCString s_Linkage_AFTER_collapsing_00637890
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LodGenerationStamp
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
;   shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90
;   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
;   shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530
;   shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
;   shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
;   shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
;   shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0
;   shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
;   shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90
;   shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517630
        ;   Label: shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
    PUSH ESI                            ; 00517631
    PUSH EDI                            ; 00517632
    PUSH EBP                            ; 00517633
    MOV EBP,ESP                         ; 00517634
    SUB ESP,0x4e0                       ; 00517636
    AND ESP,0xfffffff8                  ; 0051763c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051763f
    XOR EDX,EDX                         ; 00517642
    PUSH EDX                            ; 00517644
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00517645
    PUSH ECX                            ; 00517648
    MOV ESI,dword ptr [EBP + 0x18]      ; 00517649
    PUSH ESI                            ; 0051764c
    PUSH EBX                            ; 0051764d
    MOV dword ptr [ESP + 0x440],EDX     ; 0051764e
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 00517655
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    ADD ESP,0x10                        ; 0051765a
    MOV dword ptr [ESP + 0x434],EAX     ; 0051765d
    TEST EAX,EAX                        ; 00517664
    JL 0x00517a41                       ; 00517666
        ;   XREF to: 00517a41 (CONDITIONAL_JUMP)  ; LAB_00517a41
    MOV EAX,dword ptr [EBP + 0x20]      ; 0051766c
        ;   Label: LAB_0051766c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0051766f
    MOV dword ptr [ESP],EAX             ; 00517672
    IMUL EAX,EDX,0x4c4                  ; 00517675
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051767b
    FLD float ptr [EDX + EAX*0x1]       ; 0051767e
    FMUL float ptr [EBP + 0x20]         ; 00517681
    FSTP float ptr [ESP + 0x3fc]        ; 00517684
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 0051768b
    FMUL float ptr [EBP + 0x20]         ; 0051768f
    MOV ECX,dword ptr [EBP + 0x18]      ; 00517692
    FSTP float ptr [ESP + 0x400]        ; 00517695
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 0051769c
    IMUL EAX,ECX,0x4c4                  ; 005176a0
    FMUL float ptr [EBP + 0x20]         ; 005176a6
    FLD float ptr [EBP + 0x20]          ; 005176a9
    FLD1                                ; 005176ac
    FSUBRP                              ; 005176ae
    FXCH                                ; 005176b0
    FSTP float ptr [ESP + 0x404]        ; 005176b2
    MOV EDX,dword ptr [EBX + 0x4]       ; 005176b9
    FSTP float ptr [ESP + 0x4]          ; 005176bc
    FLD float ptr [EDX + EAX*0x1]       ; 005176c0
    FMUL float ptr [ESP + 0x4]          ; 005176c3
    FSTP float ptr [ESP + 0x408]        ; 005176c7
    FLD float ptr [EDX + EAX*0x1 + 0x4] ; 005176ce
    FMUL float ptr [ESP + 0x4]          ; 005176d2
    FSTP float ptr [ESP + 0x40c]        ; 005176d6
    FLD float ptr [EDX + EAX*0x1 + 0x8] ; 005176dd
    FMUL float ptr [ESP + 0x4]          ; 005176e1
    FLD float ptr [ESP + 0x408]         ; 005176e5
    FADD float ptr [ESP + 0x3fc]        ; 005176ec
    FLD float ptr [ESP + 0x40c]         ; 005176f3
    FXCH                                ; 005176fa
    FSTP float ptr [ESP + 0x420]        ; 005176fc
    MOV EAX,dword ptr [ESP + 0x434]     ; 00517703
    FADD float ptr [ESP + 0x400]        ; 0051770a
    FXCH                                ; 00517711
    FSTP float ptr [ESP + 0x410]        ; 00517713
    FSTP float ptr [ESP + 0x424]        ; 0051771a
    SHL EAX,0x4                         ; 00517721
    FLD float ptr [ESP + 0x410]         ; 00517724
    MOV EDX,EAX                         ; 0051772b
    SHL EAX,0x4                         ; 0051772d
    FADD float ptr [ESP + 0x404]        ; 00517730
    SUB EAX,EDX                         ; 00517737
    FSTP float ptr [ESP + 0x428]        ; 00517739
    MOV EDX,EAX                         ; 00517740
    MOV EAX,dword ptr [EBX + 0x48]      ; 00517742
    ADD EAX,EDX                         ; 00517745
    MOV EDI,dword ptr [EAX]             ; 00517747
    MOV dword ptr [ESP + 0x438],EAX     ; 00517749
    IMUL EAX,EDI,0x4c4                  ; 00517750
    MOV ESI,dword ptr [ESP + 0x434]     ; 00517756
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051775d
    PUSH ESI                            ; 00517760
    ADD EAX,EDX                         ; 00517761
    PUSH EAX                            ; 00517763
    CALL shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 ; 00517764
        ;   XREF to: 00515e00 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 00517769
    MOV EAX,dword ptr [ESP + 0x438]     ; 0051776c
    IMUL EAX,dword ptr [EAX + 0x4],0x4c4 ; 00517773
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051777a
    PUSH ESI                            ; 0051777d
    ADD EAX,EDX                         ; 0051777e
    PUSH EAX                            ; 00517780
    CALL shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00 ; 00517781
        ;   XREF to: 00515e00 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 00517786
    XOR ECX,ECX                         ; 00517789
    MOV EAX,dword ptr [ESP + 0x438]     ; 0051778b
    MOV dword ptr [ESP + 0x43c],ECX     ; 00517792
    MOV dword ptr [ESP + 0x42c],ECX     ; 00517799
    MOV EDI,dword ptr [EAX + 0x24]      ; 005177a0
    MOV dword ptr [EAX + 0x14],0x1      ; 005177a3
    TEST EDI,EDI                        ; 005177aa
    JLE 0x005178da                      ; 005177ac
        ;   XREF to: 005178da (CONDITIONAL_JUMP)  ; LAB_005178da
    MOV dword ptr [ESP + 0x4a8],EAX     ; 005177b2
    MOV EAX,dword ptr [ESP + 0x4a8]     ; 005177b9
        ;   Label: LAB_005177b9
    MOV EAX,dword ptr [EAX + 0x28]      ; 005177c0
    MOV dword ptr [ESP + 0x440],EAX     ; 005177c3
    IMUL EDX,EAX,0x8c                   ; 005177ca
    MOV EAX,dword ptr [EBX + 0xc]       ; 005177d0
    ADD EAX,EDX                         ; 005177d3
    MOV dword ptr [ESP + 0x444],EAX     ; 005177d5
    MOV EAX,dword ptr [ESP + 0x43c]     ; 005177dc
    XOR EDX,EDX                         ; 005177e3
    TEST EAX,EAX                        ; 005177e5
    JLE 0x00517808                      ; 005177e7
        ;   XREF to: 00517808 (CONDITIONAL_JUMP)  ; LAB_00517808
    MOV EDI,dword ptr [ESP + 0x43c]     ; 005177e9
    MOV ECX,dword ptr [ESP + 0x444]     ; 005177f0
    XOR EAX,EAX                         ; 005177f7
    SHL EDI,0x4                         ; 005177f9
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x8] ; 005177fc
        ;   Label: LAB_005177fc
    CMP ESI,dword ptr [ECX]             ; 00517800
    JNZ 0x00517a68                      ; 00517802
        ;   XREF to: 00517a68 (CONDITIONAL_JUMP)  ; LAB_00517a68
    CMP EDX,dword ptr [ESP + 0x43c]     ; 00517808
        ;   Label: LAB_00517808
    JGE 0x00517a79                      ; 0051780f
        ;   XREF to: 00517a79 (CONDITIONAL_JUMP)  ; LAB_00517a79
    MOV ESI,EDX                         ; 00517815
        ;   Label: LAB_00517815
    SHL ESI,0x4                         ; 00517817
    INC dword ptr [ESP + ESI*0x1 + 0xc] ; 0051781a
    MOV EAX,dword ptr [ESP + 0x444]     ; 0051781e
    MOV dword ptr [ESP + 0x4a0],EAX     ; 00517825
    MOV EDI,EAX                         ; 0051782c
    ADD EAX,0xc                         ; 0051782e
    MOV dword ptr [ESP + 0x4a4],EAX     ; 00517831
    MOV EDX,dword ptr [EBP + 0x18]      ; 00517838
        ;   Label: LAB_00517838
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051783b
    CMP EAX,EDX                         ; 0051783e
    JNZ 0x00517aad                      ; 00517840
        ;   XREF to: 00517aad (CONDITIONAL_JUMP)  ; LAB_00517aad
    MOV EAX,dword ptr [ESP + 0x4a0]     ; 00517846
    FLD float ptr [ESP + 0x4]           ; 0051784d
    FLD float ptr [EAX + 0x1c]          ; 00517851
        ;   Label: LAB_00517851
    FMUL ST1                            ; 00517854
    FADD float ptr [ESP + ESI*0x1 + 0x10] ; 00517856
    FSTP float ptr [ESP + ESI*0x1 + 0x10] ; 0051785a
    FMUL float ptr [EAX + 0x20]         ; 0051785e
    FADD float ptr [ESP + ESI*0x1 + 0x14] ; 00517861
    FSTP float ptr [ESP + ESI*0x1 + 0x14] ; 00517865
    MOV EDX,dword ptr [ESP + 0x434]     ; 00517869
        ;   Label: LAB_00517869
    MOV EAX,dword ptr [EDI + 0x34]      ; 00517870
    CMP EAX,EDX                         ; 00517873
    JNZ 0x00517ac5                      ; 00517875
        ;   XREF to: 00517ac5 (CONDITIONAL_JUMP)  ; LAB_00517ac5
    MOV EDX,dword ptr [ESP + 0x4a0]     ; 0051787b
        ;   Label: LAB_0051787b
    MOV ECX,dword ptr [ESP + 0x4a4]     ; 00517882
    ADD EDX,0x8                         ; 00517889
    ADD EDI,0x4                         ; 0051788c
    MOV dword ptr [ESP + 0x4a0],EDX     ; 0051788f
    CMP EDI,ECX                         ; 00517896
    JNZ 0x00517838                      ; 00517898
        ;   XREF to: 00517838 (CONDITIONAL_JUMP)  ; LAB_00517838
    MOV EAX,dword ptr [ESP + 0x444]     ; 0051789a
    MOV EDX,dword ptr [ESP + 0x42c]     ; 005178a1
    MOV dword ptr [EAX + 0x40],0x1      ; 005178a8
    MOV EAX,dword ptr [ESP + 0x4a8]     ; 005178af
    INC EDX                             ; 005178b6
    ADD EAX,0x4                         ; 005178b7
    MOV dword ptr [ESP + 0x42c],EDX     ; 005178ba
    MOV dword ptr [ESP + 0x4a8],EAX     ; 005178c1
    MOV EAX,EDX                         ; 005178c8
    MOV EDX,dword ptr [ESP + 0x438]     ; 005178ca
    CMP EAX,dword ptr [EDX + 0x24]      ; 005178d1
    JL 0x005177b9                       ; 005178d4
        ;   XREF to: 005177b9 (CONDITIONAL_JUMP)  ; LAB_005177b9
    MOV EAX,dword ptr [ESP + 0x438]     ; 005178da
        ;   Label: LAB_005178da
    PUSH EBX                            ; 005178e1
    MOV dword ptr [EAX + 0x24],0x0      ; 005178e2
    ADD ESP,0x4                         ; 005178e9
    MOV ESI,dword ptr [ESP + 0x43c]     ; 005178ec
    TEST ESI,ESI                        ; 005178f3
    JLE 0x00517930                      ; 005178f5
        ;   XREF to: 00517930 (CONDITIONAL_JUMP)  ; LAB_00517930
    MOV ECX,0x1                         ; 005178f7
    MOV EDX,ESI                         ; 005178fc
    XOR EAX,EAX                         ; 005178fe
    SHL EDX,0x4                         ; 00517900
    FILD dword ptr [ESP + EAX*0x1 + 0xc] ; 00517903
        ;   Label: LAB_00517903
    FDIVR float ptr [ESP + EAX*0x1 + 0x10] ; 00517907
    FILD dword ptr [ESP + EAX*0x1 + 0xc] ; 0051790b
    FDIVR float ptr [ESP + EAX*0x1 + 0x14] ; 0051790f
    ADD EAX,0x10                        ; 00517913
    MOV dword ptr [ESP + EAX*0x1 + -0x4],ECX ; 00517916
    FXCH                                ; 0051791a
    FSTP float ptr [ESP + EAX*0x1]      ; 0051791c
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 0051791f
    CMP EAX,EDX                         ; 00517923
    JL 0x00517903                       ; 00517925
        ;   XREF to: 00517903 (CONDITIONAL_JUMP)  ; LAB_00517903
    LEA EAX,[EAX]                       ; 00517927
    LEA EDX,[EDX]                       ; 0051792d
    MOV ESI,dword ptr [0x02f33334]      ; 00517930 | g_LodGenerationStamp
        ;   Label: LAB_00517930
    FLD float ptr [ESP]                 ; 00517936
    INC ESI                             ; 00517939
    FLDZ                                ; 0051793a
    MOV dword ptr [0x02f33334],ESI      ; 0051793c | g_LodGenerationStamp
    FCOMPP                              ; 00517942
    FNSTSW AX                           ; 00517944
    SAHF                                ; 00517946
    JNC 0x00517bec                      ; 00517947
        ;   XREF to: 00517bec (CONDITIONAL_JUMP)  ; LAB_00517bec
    IMUL EAX,dword ptr [EBP + 0x18],0x4c4 ; 0051794d
    XOR EDI,EDI                         ; 00517954
    MOV dword ptr [ESP + 0x4b4],EDI     ; 00517956
    MOV dword ptr [ESP + 0x4dc],EDI     ; 0051795d
    MOV dword ptr [ESP + 0x494],EAX     ; 00517964
    MOV ESI,dword ptr [ESP + 0x494]     ; 0051796b
        ;   Label: LAB_0051796b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00517972
    ADD EAX,ESI                         ; 00517975
    MOV EDX,dword ptr [ESP + 0x4dc]     ; 00517977
    CMP EDX,dword ptr [EAX + 0x3f8]     ; 0051797e
    JGE 0x00517bec                      ; 00517984
        ;   XREF to: 00517bec (CONDITIONAL_JUMP)  ; LAB_00517bec
    ADD EAX,dword ptr [ESP + 0x4b4]     ; 0051798a
    MOV EAX,dword ptr [EAX + 0x3fc]     ; 00517991
    IMUL EAX,EAX,0xf0                   ; 00517997
    MOV EDX,dword ptr [EBX + 0x48]      ; 0051799d
    XOR ECX,ECX                         ; 005179a0
    ADD EDX,EAX                         ; 005179a2
    MOV dword ptr [ESP + 0x44c],ECX     ; 005179a4
    MOV ESI,dword ptr [EDX + 0x24]      ; 005179ab
    MOV dword ptr [ESP + 0x448],EDX     ; 005179ae
    TEST ESI,ESI                        ; 005179b5
    JLE 0x00517a1c                      ; 005179b7
        ;   XREF to: 00517a1c (CONDITIONAL_JUMP)  ; LAB_00517a1c
    MOV dword ptr [ESP + 0x4b0],EDX     ; 005179b9
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 005179c0
        ;   Label: LAB_005179c0
    MOV EAX,dword ptr [EAX + 0x28]      ; 005179c7
    MOV dword ptr [ESP + 0x450],EAX     ; 005179ca
    IMUL EDI,EAX,0x8c                   ; 005179d1
    MOV EAX,dword ptr [EBX + 0xc]       ; 005179d7
    ADD EDI,EAX                         ; 005179da
    MOV EDX,dword ptr [0x02f33334]      ; 005179dc | g_LodGenerationStamp
    CMP EDX,dword ptr [EDI + 0x84]      ; 005179e2
    JNZ 0x00517adc                      ; 005179e8
        ;   XREF to: 00517adc (CONDITIONAL_JUMP)  ; LAB_00517adc
    MOV EDI,dword ptr [ESP + 0x4b0]     ; 005179ee
        ;   Label: LAB_005179ee
    MOV EAX,dword ptr [ESP + 0x44c]     ; 005179f5
    MOV EDX,dword ptr [ESP + 0x448]     ; 005179fc
    ADD EDI,0x4                         ; 00517a03
    INC EAX                             ; 00517a06
    MOV ECX,dword ptr [EDX + 0x24]      ; 00517a07
    MOV dword ptr [ESP + 0x4b0],EDI     ; 00517a0a
    MOV dword ptr [ESP + 0x44c],EAX     ; 00517a11
    CMP EAX,ECX                         ; 00517a18
    JL 0x005179c0                       ; 00517a1a
        ;   XREF to: 005179c0 (CONDITIONAL_JUMP)  ; LAB_005179c0
    MOV EDI,dword ptr [ESP + 0x4dc]     ; 00517a1c
        ;   Label: LAB_00517a1c
    MOV ESI,dword ptr [ESP + 0x4b4]     ; 00517a23
    INC EDI                             ; 00517a2a
    ADD ESI,0x4                         ; 00517a2b
    MOV dword ptr [ESP + 0x4dc],EDI     ; 00517a2e
    MOV dword ptr [ESP + 0x4b4],ESI     ; 00517a35
    JMP 0x0051796b                      ; 00517a3c
        ;   XREF to: 0051796b (UNCONDITIONAL_JUMP)  ; LAB_0051796b
    MOV EDI,0x6377e9                    ; 00517a41 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_00517a41
    MOV EAX,0x824                       ; 00517a46
    PUSH 0x6377fe                       ; 00517a4b | = "Tried to collapse edge that doesn't e..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00517a50 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00517a56 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00517a5b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00517a60
    JMP 0x0051766c                      ; 00517a63
        ;   XREF to: 0051766c (UNCONDITIONAL_JUMP)  ; LAB_0051766c
    ADD EAX,0x10                        ; 00517a68
        ;   Label: LAB_00517a68
    INC EDX                             ; 00517a6b
    CMP EAX,EDI                         ; 00517a6c
    JL 0x005177fc                       ; 00517a6e
        ;   XREF to: 005177fc (CONDITIONAL_JUMP)  ; LAB_005177fc
    JMP 0x00517808                      ; 00517a74
        ;   XREF to: 00517808 (UNCONDITIONAL_JUMP)  ; LAB_00517808
    MOV ESI,dword ptr [ESP + 0x444]     ; 00517a79
        ;   Label: LAB_00517a79
    MOV EAX,EDX                         ; 00517a80
    XOR EDI,EDI                         ; 00517a82
    SHL EAX,0x4                         ; 00517a84
    MOV ESI,dword ptr [ESI]             ; 00517a87
    MOV dword ptr [ESP + EAX*0x1 + 0xc],EDI ; 00517a89
    MOV dword ptr [ESP + EAX*0x1 + 0x10],EDI ; 00517a8d
    MOV dword ptr [ESP + EAX*0x1 + 0x14],EDI ; 00517a91
    MOV EDI,dword ptr [ESP + 0x43c]     ; 00517a95
    INC EDI                             ; 00517a9c
    MOV dword ptr [ESP + EAX*0x1 + 0x8],ESI ; 00517a9d
    MOV dword ptr [ESP + 0x43c],EDI     ; 00517aa1
    JMP 0x00517815                      ; 00517aa8
        ;   XREF to: 00517815 (UNCONDITIONAL_JUMP)  ; LAB_00517815
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00517aad
        ;   Label: LAB_00517aad
    JNZ 0x00517869                      ; 00517ab0
        ;   XREF to: 00517869 (CONDITIONAL_JUMP)  ; LAB_00517869
    MOV EAX,dword ptr [ESP + 0x4a0]     ; 00517ab6
    FLD float ptr [ESP]                 ; 00517abd
    JMP 0x00517851                      ; 00517ac0
        ;   XREF to: 00517851 (UNCONDITIONAL_JUMP)  ; LAB_00517851
    PUSH EAX                            ; 00517ac5
        ;   Label: LAB_00517ac5
    MOV EAX,dword ptr [ESP + 0x444]     ; 00517ac6
    PUSH EAX                            ; 00517acd
    PUSH EBX                            ; 00517ace
    CALL shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 ; 00517acf
        ;   XREF to: 005183e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(CLodMesh * this_ptr, int tri_index, int edge_index)
    ADD ESP,0xc                         ; 00517ad4
    JMP 0x0051787b                      ; 00517ad7
        ;   XREF to: 0051787b (UNCONDITIONAL_JUMP)  ; LAB_0051787b
    MOV ESI,dword ptr [EBP + 0x18]      ; 00517adc
        ;   Label: LAB_00517adc
    MOV EAX,EDI                         ; 00517adf
    MOV ECX,dword ptr [EDI + 0x10]      ; 00517ae1
    MOV dword ptr [EDI + 0x84],EDX      ; 00517ae4
    XOR EDX,EDX                         ; 00517aea
    CMP ECX,ESI                         ; 00517aec
    JZ 0x00517b01                       ; 00517aee
        ;   XREF to: 00517b01 (CONDITIONAL_JUMP)  ; LAB_00517b01
    MOV ESI,dword ptr [EBP + 0x18]      ; 00517af0
    INC EDX                             ; 00517af3
        ;   Label: LAB_00517af3
    ADD EAX,0x4                         ; 00517af4
    CMP EDX,0x3                         ; 00517af7
    JGE 0x00517b01                      ; 00517afa
        ;   XREF to: 00517b01 (CONDITIONAL_JUMP)  ; LAB_00517b01
    CMP ESI,dword ptr [EAX + 0x10]      ; 00517afc
    JNZ 0x00517af3                      ; 00517aff
        ;   XREF to: 00517af3 (CONDITIONAL_JUMP)  ; LAB_00517af3
    MOV EAX,dword ptr [ESP + 0x43c]     ; 00517b01
        ;   Label: LAB_00517b01
    XOR ESI,ESI                         ; 00517b08
    TEST EAX,EAX                        ; 00517b0a
    JLE 0x00517b2d                      ; 00517b0c
        ;   XREF to: 00517b2d (CONDITIONAL_JUMP)  ; LAB_00517b2d
    MOV ECX,dword ptr [ESP + 0x43c]     ; 00517b0e
    SHL ECX,0x4                         ; 00517b15
    XOR EAX,EAX                         ; 00517b18
    MOV dword ptr [ESP + 0x4ac],ECX     ; 00517b1a
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0x8] ; 00517b21
        ;   Label: LAB_00517b21
    CMP ECX,dword ptr [EDI]             ; 00517b25
    JNZ 0x00517bcd                      ; 00517b27
        ;   XREF to: 00517bcd (CONDITIONAL_JUMP)  ; LAB_00517bcd
    CMP ESI,dword ptr [ESP + 0x43c]     ; 00517b2d
        ;   Label: LAB_00517b2d
    JGE 0x00517be5                      ; 00517b34
        ;   XREF to: 00517be5 (CONDITIONAL_JUMP)  ; LAB_00517be5
    SHL ESI,0x4                         ; 00517b3a
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x10] ; 00517b3d
    MOV dword ptr [EDI + EDX*0x8 + 0x1c],EAX ; 00517b41
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x14] ; 00517b45
    MOV dword ptr [EDI + EDX*0x8 + 0x20],EAX ; 00517b49
    MOV ESI,0x2                         ; 00517b4d
    LEA EAX,[EDX*0x8 + 0x0]             ; 00517b52
        ;   Label: LAB_00517b52
    ADD EAX,EDI                         ; 00517b59
    LEA EDI,[ESI*0x4 + 0x0]             ; 00517b5b
    ADD EDI,EAX                         ; 00517b62
    CMP ESI,dword ptr [EBX + 0x1c]      ; 00517b64
        ;   Label: LAB_00517b64
    JGE 0x005179ee                      ; 00517b67
        ;   XREF to: 005179ee (CONDITIONAL_JUMP)  ; LAB_005179ee
    LEA EAX,[ESP + 0x454]               ; 00517b6d
    PUSH EAX                            ; 00517b74
    LEA EAX,[ESP + 0x3f4]               ; 00517b75
    PUSH EAX                            ; 00517b7c
    PUSH ESI                            ; 00517b7d
    MOV ECX,dword ptr [ESP + 0x45c]     ; 00517b7e
    PUSH ECX                            ; 00517b85
    PUSH EBX                            ; 00517b86
    CALL shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 ; 00517b87
        ;   XREF to: 00517530 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, ...)
    ADD ESP,0x14                        ; 00517b8c
    FLD float ptr [ESP + 0x424]         ; 00517b8f
    FMUL float ptr [ESP + 0x3f4]        ; 00517b96
    FLD float ptr [ESP + 0x420]         ; 00517b9d
    FMUL float ptr [ESP + 0x3f0]        ; 00517ba4
    FADDP                               ; 00517bab
    FLD float ptr [ESP + 0x428]         ; 00517bad
    FMUL float ptr [ESP + 0x3f8]        ; 00517bb4
    FADDP                               ; 00517bbb
    ADD EDI,0x4                         ; 00517bbd
    FADD float ptr [ESP + 0x454]        ; 00517bc0
    INC ESI                             ; 00517bc7
    FSTP float ptr [EDI + 0x18]         ; 00517bc8
    JMP 0x00517b64                      ; 00517bcb
        ;   XREF to: 00517b64 (UNCONDITIONAL_JUMP)  ; LAB_00517b64
    MOV ECX,dword ptr [ESP + 0x4ac]     ; 00517bcd
        ;   Label: LAB_00517bcd
    ADD EAX,0x10                        ; 00517bd4
    INC ESI                             ; 00517bd7
    CMP EAX,ECX                         ; 00517bd8
    JL 0x00517b21                       ; 00517bda
        ;   XREF to: 00517b21 (CONDITIONAL_JUMP)  ; LAB_00517b21
    JMP 0x00517b2d                      ; 00517be0
        ;   XREF to: 00517b2d (UNCONDITIONAL_JUMP)  ; LAB_00517b2d
    XOR ESI,ESI                         ; 00517be5
        ;   Label: LAB_00517be5
    JMP 0x00517b52                      ; 00517be7
        ;   XREF to: 00517b52 (UNCONDITIONAL_JUMP)  ; LAB_00517b52
    MOV ESI,dword ptr [0x02f33334]      ; 00517bec | g_LodGenerationStamp
        ;   Label: LAB_00517bec
    FLD float ptr [ESP + 0x4]           ; 00517bf2
    INC ESI                             ; 00517bf6
    FLDZ                                ; 00517bf7
    MOV dword ptr [0x02f33334],ESI      ; 00517bf9 | g_LodGenerationStamp
    FCOMPP                              ; 00517bff
    FNSTSW AX                           ; 00517c01
    SAHF                                ; 00517c03
    JNC 0x00517e0a                      ; 00517c04
        ;   XREF to: 00517e0a (CONDITIONAL_JUMP)  ; LAB_00517e0a
    IMUL EAX,dword ptr [EBP + 0x1c],0x4c4 ; 00517c0a
    XOR EDI,EDI                         ; 00517c11
    MOV dword ptr [ESP + 0x4c0],EDI     ; 00517c13
    MOV dword ptr [ESP + 0x4d8],EDI     ; 00517c1a
    MOV dword ptr [ESP + 0x498],EAX     ; 00517c21
    MOV ESI,dword ptr [ESP + 0x498]     ; 00517c28
        ;   Label: LAB_00517c28
    MOV EAX,dword ptr [EBX + 0x4]       ; 00517c2f
    ADD EAX,ESI                         ; 00517c32
    MOV EDX,dword ptr [ESP + 0x4d8]     ; 00517c34
    CMP EDX,dword ptr [EAX + 0x3f8]     ; 00517c3b
    JGE 0x00517e0a                      ; 00517c41
        ;   XREF to: 00517e0a (CONDITIONAL_JUMP)  ; LAB_00517e0a
    ADD EAX,dword ptr [ESP + 0x4c0]     ; 00517c47
    MOV EAX,dword ptr [EAX + 0x3fc]     ; 00517c4e
    IMUL EDX,EAX,0xf0                   ; 00517c54
    MOV EAX,dword ptr [EBX + 0x48]      ; 00517c5a
    XOR ECX,ECX                         ; 00517c5d
    ADD EAX,EDX                         ; 00517c5f
    MOV dword ptr [ESP + 0x45c],ECX     ; 00517c61
    MOV ESI,dword ptr [EAX + 0x24]      ; 00517c68
    MOV dword ptr [ESP + 0x458],EAX     ; 00517c6b
    TEST ESI,ESI                        ; 00517c72
    JLE 0x00517cd5                      ; 00517c74
        ;   XREF to: 00517cd5 (CONDITIONAL_JUMP)  ; LAB_00517cd5
    MOV dword ptr [ESP + 0x4bc],EAX     ; 00517c76
    MOV EAX,dword ptr [ESP + 0x4bc]     ; 00517c7d
        ;   Label: LAB_00517c7d
    MOV EAX,dword ptr [EAX + 0x28]      ; 00517c84
    MOV dword ptr [ESP + 0x460],EAX     ; 00517c87
    IMUL EDI,EAX,0x8c                   ; 00517c8e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00517c94
    ADD EDI,EAX                         ; 00517c97
    MOV EDX,dword ptr [0x02f33334]      ; 00517c99 | g_LodGenerationStamp
    CMP EDX,dword ptr [EDI + 0x84]      ; 00517c9f
    JNZ 0x00517cfa                      ; 00517ca5
        ;   XREF to: 00517cfa (CONDITIONAL_JUMP)  ; LAB_00517cfa
    MOV EDI,dword ptr [ESP + 0x4bc]     ; 00517ca7
        ;   Label: LAB_00517ca7
    MOV EAX,dword ptr [ESP + 0x45c]     ; 00517cae
    MOV EDX,dword ptr [ESP + 0x458]     ; 00517cb5
    ADD EDI,0x4                         ; 00517cbc
    INC EAX                             ; 00517cbf
    MOV ECX,dword ptr [EDX + 0x24]      ; 00517cc0
    MOV dword ptr [ESP + 0x4bc],EDI     ; 00517cc3
    MOV dword ptr [ESP + 0x45c],EAX     ; 00517cca
    CMP EAX,ECX                         ; 00517cd1
    JL 0x00517c7d                       ; 00517cd3
        ;   XREF to: 00517c7d (CONDITIONAL_JUMP)  ; LAB_00517c7d
    MOV EDI,dword ptr [ESP + 0x4d8]     ; 00517cd5
        ;   Label: LAB_00517cd5
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00517cdc
    INC EDI                             ; 00517ce3
    ADD ESI,0x4                         ; 00517ce4
    MOV dword ptr [ESP + 0x4d8],EDI     ; 00517ce7
    MOV dword ptr [ESP + 0x4c0],ESI     ; 00517cee
    JMP 0x00517c28                      ; 00517cf5
        ;   XREF to: 00517c28 (UNCONDITIONAL_JUMP)  ; LAB_00517c28
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00517cfa
        ;   Label: LAB_00517cfa
    MOV EAX,EDI                         ; 00517cfd
    MOV ECX,dword ptr [EDI + 0x10]      ; 00517cff
    MOV dword ptr [EDI + 0x84],EDX      ; 00517d02
    XOR EDX,EDX                         ; 00517d08
    CMP ECX,ESI                         ; 00517d0a
    JZ 0x00517d1f                       ; 00517d0c
        ;   XREF to: 00517d1f (CONDITIONAL_JUMP)  ; LAB_00517d1f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00517d0e
    INC EDX                             ; 00517d11
        ;   Label: LAB_00517d11
    ADD EAX,0x4                         ; 00517d12
    CMP EDX,0x3                         ; 00517d15
    JGE 0x00517d1f                      ; 00517d18
        ;   XREF to: 00517d1f (CONDITIONAL_JUMP)  ; LAB_00517d1f
    CMP ESI,dword ptr [EAX + 0x10]      ; 00517d1a
    JNZ 0x00517d11                      ; 00517d1d
        ;   XREF to: 00517d11 (CONDITIONAL_JUMP)  ; LAB_00517d11
    MOV EAX,dword ptr [ESP + 0x43c]     ; 00517d1f
        ;   Label: LAB_00517d1f
    XOR ESI,ESI                         ; 00517d26
    TEST EAX,EAX                        ; 00517d28
    JLE 0x00517d4b                      ; 00517d2a
        ;   XREF to: 00517d4b (CONDITIONAL_JUMP)  ; LAB_00517d4b
    MOV ECX,dword ptr [ESP + 0x43c]     ; 00517d2c
    SHL ECX,0x4                         ; 00517d33
    XOR EAX,EAX                         ; 00517d36
    MOV dword ptr [ESP + 0x4b8],ECX     ; 00517d38
    MOV ECX,dword ptr [ESP + EAX*0x1 + 0x8] ; 00517d3f
        ;   Label: LAB_00517d3f
    CMP ECX,dword ptr [EDI]             ; 00517d43
    JNZ 0x00517deb                      ; 00517d45
        ;   XREF to: 00517deb (CONDITIONAL_JUMP)  ; LAB_00517deb
    CMP ESI,dword ptr [ESP + 0x43c]     ; 00517d4b
        ;   Label: LAB_00517d4b
    JGE 0x00517e03                      ; 00517d52
        ;   XREF to: 00517e03 (CONDITIONAL_JUMP)  ; LAB_00517e03
    SHL ESI,0x4                         ; 00517d58
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x10] ; 00517d5b
    MOV dword ptr [EDI + EDX*0x8 + 0x1c],EAX ; 00517d5f
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x14] ; 00517d63
    MOV dword ptr [EDI + EDX*0x8 + 0x20],EAX ; 00517d67
    MOV ESI,0x2                         ; 00517d6b
    LEA EAX,[EDX*0x8 + 0x0]             ; 00517d70
        ;   Label: LAB_00517d70
    ADD EAX,EDI                         ; 00517d77
    LEA EDI,[ESI*0x4 + 0x0]             ; 00517d79
    ADD EDI,EAX                         ; 00517d80
    CMP ESI,dword ptr [EBX + 0x1c]      ; 00517d82
        ;   Label: LAB_00517d82
    JGE 0x00517ca7                      ; 00517d85
        ;   XREF to: 00517ca7 (CONDITIONAL_JUMP)  ; LAB_00517ca7
    LEA EAX,[ESP + 0x464]               ; 00517d8b
    PUSH EAX                            ; 00517d92
    LEA EAX,[ESP + 0x418]               ; 00517d93
    PUSH EAX                            ; 00517d9a
    PUSH ESI                            ; 00517d9b
    MOV ECX,dword ptr [ESP + 0x46c]     ; 00517d9c
    PUSH ECX                            ; 00517da3
    PUSH EBX                            ; 00517da4
    CALL shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 ; 00517da5
        ;   XREF to: 00517530 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530(CLodMesh * this_ptr, int tri_index, int corner_idx, CVector3f * out_gradient, ...)
    ADD ESP,0x14                        ; 00517daa
    FLD float ptr [ESP + 0x424]         ; 00517dad
    FMUL float ptr [ESP + 0x418]        ; 00517db4
    FLD float ptr [ESP + 0x420]         ; 00517dbb
    FMUL float ptr [ESP + 0x414]        ; 00517dc2
    FADDP                               ; 00517dc9
    FLD float ptr [ESP + 0x428]         ; 00517dcb
    FMUL float ptr [ESP + 0x41c]        ; 00517dd2
    FADDP                               ; 00517dd9
    ADD EDI,0x4                         ; 00517ddb
    FADD float ptr [ESP + 0x464]        ; 00517dde
    INC ESI                             ; 00517de5
    FSTP float ptr [EDI + 0x18]         ; 00517de6
    JMP 0x00517d82                      ; 00517de9
        ;   XREF to: 00517d82 (UNCONDITIONAL_JUMP)  ; LAB_00517d82
    MOV ECX,dword ptr [ESP + 0x4b8]     ; 00517deb
        ;   Label: LAB_00517deb
    ADD EAX,0x10                        ; 00517df2
    INC ESI                             ; 00517df5
    CMP EAX,ECX                         ; 00517df6
    JL 0x00517d3f                       ; 00517df8
        ;   XREF to: 00517d3f (CONDITIONAL_JUMP)  ; LAB_00517d3f
    JMP 0x00517d4b                      ; 00517dfe
        ;   XREF to: 00517d4b (UNCONDITIONAL_JUMP)  ; LAB_00517d4b
    XOR ESI,ESI                         ; 00517e03
        ;   Label: LAB_00517e03
    JMP 0x00517d70                      ; 00517e05
        ;   XREF to: 00517d70 (UNCONDITIONAL_JUMP)  ; LAB_00517d70
    IMUL EDI,dword ptr [EBP + 0x1c],0x4c4 ; 00517e0a
        ;   Label: LAB_00517e0a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00517e11
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x3f8] ; 00517e14
    TEST ECX,ECX                        ; 00517e1b
    JLE 0x00517e50                      ; 00517e1d
        ;   XREF to: 00517e50 (CONDITIONAL_JUMP)  ; LAB_00517e50
    LEA ESI,[ECX*0x4 + 0x0]             ; 00517e1f
    XOR EAX,EAX                         ; 00517e26
    MOV EDX,dword ptr [EBX + 0x4]       ; 00517e28
        ;   Label: LAB_00517e28
    ADD EAX,0x4                         ; 00517e2b
    ADD EDX,EDI                         ; 00517e2e
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x3f8] ; 00517e30
    MOV dword ptr [ESP + EAX*0x1 + 0x324],EDX ; 00517e37
    CMP EAX,ESI                         ; 00517e3e
    JL 0x00517e28                       ; 00517e40
        ;   XREF to: 00517e28 (CONDITIONAL_JUMP)  ; LAB_00517e28
    LEA EAX,[EAX]                       ; 00517e42
    LEA EDX,[EDX]                       ; 00517e48
    MOV EAX,EAX                         ; 00517e4e
    TEST ECX,ECX                        ; 00517e50
        ;   Label: LAB_00517e50
    JLE 0x00517fe9                      ; 00517e52
        ;   XREF to: 00517fe9 (CONDITIONAL_JUMP)  ; LAB_00517fe9
    IMUL EAX,dword ptr [EBP + 0x18],0x4c4 ; 00517e58
    XOR EDI,EDI                         ; 00517e5f
    SHL ECX,0x2                         ; 00517e61
    MOV dword ptr [ESP + 0x4c8],EDI     ; 00517e64
    MOV dword ptr [ESP + 0x4cc],ECX     ; 00517e6b
    MOV dword ptr [ESP + 0x478],EAX     ; 00517e72
    MOV EAX,dword ptr [ESP + 0x4c8]     ; 00517e79
        ;   Label: LAB_00517e79
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x328] ; 00517e80
    MOV dword ptr [ESP + 0x468],EAX     ; 00517e87
    IMUL EDI,EAX,0xf0                   ; 00517e8e
    MOV EAX,dword ptr [EBX + 0x48]      ; 00517e94
    ADD EDI,EAX                         ; 00517e97
    MOV EDX,dword ptr [EDI + 0x24]      ; 00517e99
    XOR ESI,ESI                         ; 00517e9c
    TEST EDX,EDX                        ; 00517e9e
    JLE 0x00517eef                      ; 00517ea0
        ;   XREF to: 00517eef (CONDITIONAL_JUMP)  ; LAB_00517eef
    MOV dword ptr [ESP + 0x4c4],EDI     ; 00517ea2
    MOV EAX,dword ptr [ESP + 0x4c4]     ; 00517ea9
        ;   Label: LAB_00517ea9
    IMUL EAX,dword ptr [EAX + 0x28],0x8c ; 00517eb0
    MOV EDX,dword ptr [EBX + 0xc]       ; 00517eb7
    ADD EDX,EAX                         ; 00517eba
    MOV EAX,EDX                         ; 00517ebc
    ADD EDX,0xc                         ; 00517ebe
    MOV ECX,dword ptr [EAX + 0x10]      ; 00517ec1
        ;   Label: LAB_00517ec1
    CMP ECX,dword ptr [EBP + 0x1c]      ; 00517ec4
    JNZ 0x00517ecf                      ; 00517ec7
        ;   XREF to: 00517ecf (CONDITIONAL_JUMP)  ; LAB_00517ecf
    MOV ECX,dword ptr [EBP + 0x18]      ; 00517ec9
    MOV dword ptr [EAX + 0x10],ECX      ; 00517ecc
    ADD EAX,0x4                         ; 00517ecf
        ;   Label: LAB_00517ecf
    CMP EAX,EDX                         ; 00517ed2
    JNZ 0x00517ec1                      ; 00517ed4
        ;   XREF to: 00517ec1 (CONDITIONAL_JUMP)  ; LAB_00517ec1
    MOV EAX,dword ptr [ESP + 0x4c4]     ; 00517ed6
    INC ESI                             ; 00517edd
    ADD EAX,0x4                         ; 00517ede
    MOV EDX,dword ptr [EDI + 0x24]      ; 00517ee1
    MOV dword ptr [ESP + 0x4c4],EAX     ; 00517ee4
    CMP ESI,EDX                         ; 00517eeb
    JL 0x00517ea9                       ; 00517eed
        ;   XREF to: 00517ea9 (CONDITIONAL_JUMP)  ; LAB_00517ea9
    MOV ECX,0xffffffff                  ; 00517eef
        ;   Label: LAB_00517eef
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00517ef4
    MOV EAX,dword ptr [EDI]             ; 00517ef7
    MOV dword ptr [ESP + 0x46c],ECX     ; 00517ef9
    CMP EAX,ESI                         ; 00517f00
    JNZ 0x0051813d                      ; 00517f02
        ;   XREF to: 0051813d (CONDITIONAL_JUMP)  ; LAB_0051813d
    PUSH 0x0                            ; 00517f08
    MOV ECX,dword ptr [EDI + 0x4]       ; 00517f0a
    PUSH ECX                            ; 00517f0d
    MOV ESI,dword ptr [EBP + 0x18]      ; 00517f0e
    PUSH ESI                            ; 00517f11
    PUSH EBX                            ; 00517f12
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 00517f13
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    ADD ESP,0x10                        ; 00517f18
    MOV dword ptr [ESP + 0x46c],EAX     ; 00517f1b
    TEST EAX,EAX                        ; 00517f22
    JL 0x00518136                       ; 00517f24
        ;   XREF to: 00518136 (CONDITIONAL_JUMP)  ; LAB_00518136
    MOV EAX,dword ptr [ESP + 0x46c]     ; 00517f2a
        ;   Label: LAB_00517f2a
    TEST EAX,EAX                        ; 00517f31
    JL 0x00518196                       ; 00517f33
        ;   XREF to: 00518196 (CONDITIONAL_JUMP)  ; LAB_00518196
    IMUL ESI,EAX,0xf0                   ; 00517f39
    MOV EAX,dword ptr [EBX + 0x48]      ; 00517f3f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00517f42
    PUSH EDX                            ; 00517f46
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 00517f47
    PUSH ECX                            ; 00517f4a
    MOV EAX,dword ptr [ESP + 0x474]     ; 00517f4b
    PUSH EAX                            ; 00517f52
    MOV EDX,dword ptr [ESP + 0x474]     ; 00517f53
    PUSH EDX                            ; 00517f5a
    PUSH 0x637843                       ; 00517f5b | = "Was going to change edge %d, but inst..."
    MOV ECX,dword ptr [EDI + 0x24]      ; 00517f60
    ADD ESP,0x14                        ; 00517f63
    TEST ECX,ECX                        ; 00517f66
    JLE 0x00517fc9                      ; 00517f68
        ;   XREF to: 00517fc9 (CONDITIONAL_JUMP)  ; LAB_00517fc9
    MOV dword ptr [ESP + 0x474],ESI     ; 00517f6a
    MOV ESI,dword ptr [EDI + 0x28]      ; 00517f71
        ;   Label: LAB_00517f71
    IMUL EAX,ESI,0x8c                   ; 00517f74
    MOV ECX,dword ptr [ESP + 0x468]     ; 00517f7a
    PUSH ECX                            ; 00517f81
    MOV EDX,dword ptr [EBX + 0xc]       ; 00517f82
    PUSH ESI                            ; 00517f85
    ADD EDX,EAX                         ; 00517f86
    PUSH EBX                            ; 00517f88
    MOV dword ptr [ESP + 0x47c],EDX     ; 00517f89
    CALL shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0 ; 00517f90
        ;   XREF to: 005183e0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_removeEdgeFromFace_FUN_005183e0(CLodMesh * this_ptr, int tri_index, int edge_index)
    ADD ESP,0xc                         ; 00517f95
    SHL EAX,0x2                         ; 00517f98
    ADD EAX,dword ptr [ESP + 0x470]     ; 00517f9b
    MOV EDX,dword ptr [ESP + 0x46c]     ; 00517fa2
    MOV dword ptr [EAX + 0x34],EDX      ; 00517fa9
    MOV ECX,dword ptr [ESP + 0x474]     ; 00517fac
    MOV EAX,dword ptr [EBX + 0x48]      ; 00517fb3
    PUSH ESI                            ; 00517fb6
    ADD EAX,ECX                         ; 00517fb7
    PUSH EAX                            ; 00517fb9
    CALL shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0 ; 00517fba
        ;   XREF to: 00515ca0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge * this_ptr, int tri_index)
    MOV ESI,dword ptr [EDI + 0x24]      ; 00517fbf
    ADD ESP,0x8                         ; 00517fc2
    TEST ESI,ESI                        ; 00517fc5
    JG 0x00517f71                       ; 00517fc7
        ;   XREF to: 00517f71 (CONDITIONAL_JUMP)  ; LAB_00517f71
    MOV EDI,dword ptr [ESP + 0x4c8]     ; 00517fc9
        ;   Label: LAB_00517fc9
    ADD EDI,0x4                         ; 00517fd0
    MOV EDX,dword ptr [ESP + 0x4cc]     ; 00517fd3
    MOV dword ptr [ESP + 0x4c8],EDI     ; 00517fda
    CMP EDI,EDX                         ; 00517fe1
    JL 0x00517e79                       ; 00517fe3
        ;   XREF to: 00517e79 (CONDITIONAL_JUMP)  ; LAB_00517e79
    IMUL EDI,dword ptr [EBP + 0x1c],0x4c4 ; 00517fe9
        ;   Label: LAB_00517fe9
    MOV EAX,dword ptr [EBX + 0x4]       ; 00517ff0
    MOV ESI,dword ptr [EBP + 0x18]      ; 00517ff3
    MOV dword ptr [EDI + EAX*0x1 + 0x3f8],0x0 ; 00517ff6
    IMUL EAX,ESI,0x4c4                  ; 00518001
    MOV EDX,dword ptr [EBX + 0x4]       ; 00518007
    ADD EDX,EAX                         ; 0051800a
    MOV dword ptr [ESP + 0x47c],EAX     ; 0051800c
    MOV EAX,dword ptr [ESP + 0x420]     ; 00518013
    MOV dword ptr [EDX],EAX             ; 0051801a
    MOV EAX,dword ptr [ESP + 0x424]     ; 0051801c
    MOV dword ptr [EDX + 0x4],EAX       ; 00518023
    MOV EAX,dword ptr [ESP + 0x428]     ; 00518026
    MOV dword ptr [EDX + 0x8],EAX       ; 0051802d
    MOV EDX,dword ptr [EBX + 0x20]      ; 00518030
    XOR ESI,ESI                         ; 00518033
    TEST EDX,EDX                        ; 00518035
    JLE 0x0051808d                      ; 00518037
        ;   XREF to: 0051808d (CONDITIONAL_JUMP)  ; LAB_0051808d
    FLD float ptr [ESP]                 ; 00518039
    MOV EAX,dword ptr [ESP + 0x47c]     ; 0051803c
    MOV dword ptr [ESP + 0x484],EDI     ; 00518043
    FLD float ptr [ESP + 0x4]           ; 0051804a
    MOV ECX,dword ptr [ESP + 0x484]     ; 0051804e
    MOV dword ptr [ESP + 0x480],EAX     ; 00518055
    XOR EAX,EAX                         ; 0051805c
    MOV EDX,dword ptr [ESP + 0x480]     ; 0051805e
        ;   Label: LAB_0051805e
    MOV EDI,dword ptr [EBX + 0x4]       ; 00518065
    ADD EDX,EDI                         ; 00518068
    FLD float ptr [EDX + EAX*0x1 + 0xc] ; 0051806a
    FMUL ST1                            ; 0051806e
    ADD EDI,ECX                         ; 00518070
    FLD float ptr [EDI + EAX*0x1 + 0xc] ; 00518072
    FMUL ST3                            ; 00518076
    FADDP                               ; 00518078
    INC ESI                             ; 0051807a
    FSTP float ptr [EDX + EAX*0x1 + 0xc] ; 0051807b
    MOV EDI,dword ptr [EBX + 0x20]      ; 0051807f
    ADD EAX,0x4                         ; 00518082
    CMP ESI,EDI                         ; 00518085
    JL 0x0051805e                       ; 00518087
        ;   XREF to: 0051805e (CONDITIONAL_JUMP)  ; LAB_0051805e
    FSTP ST0                            ; 00518089
    FSTP ST0                            ; 0051808b
    PUSH EBX                            ; 0051808d
        ;   Label: LAB_0051808d
    ADD ESP,0x4                         ; 0051808e
    XOR EAX,EAX                         ; 00518091
    MOV ECX,dword ptr [EBP + 0x18]      ; 00518093
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00518096
    IMUL EAX,ECX,0x4c4                  ; 0051809d
    MOV EDX,dword ptr [0x02f33334]      ; 005180a3 | g_LodGenerationStamp
    XOR ESI,ESI                         ; 005180a9
    INC EDX                             ; 005180ab
    MOV dword ptr [ESP + 0x4d0],ESI     ; 005180ac
    MOV dword ptr [0x02f33334],EDX      ; 005180b3 | g_LodGenerationStamp
    MOV dword ptr [ESP + 0x490],EAX     ; 005180b9
    MOV EDI,dword ptr [ESP + 0x490]     ; 005180c0
        ;   Label: LAB_005180c0
    MOV EAX,dword ptr [EBX + 0x4]       ; 005180c7
    ADD EAX,EDI                         ; 005180ca
    MOV EDX,dword ptr [ESP + 0x4d4]     ; 005180cc
    CMP EDX,dword ptr [EAX + 0x3f8]     ; 005180d3
    JGE 0x00518284                      ; 005180d9
        ;   XREF to: 00518284 (CONDITIONAL_JUMP)  ; LAB_00518284
    PUSH EDX                            ; 005180df
    MOV EDX,dword ptr [EBP + 0x18]      ; 005180e0
    PUSH EDX                            ; 005180e3
    PUSH EBX                            ; 005180e4
    CALL shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980 ; 005180e5
        ;   XREF to: 0051a980 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980(CLodMesh * this_ptr, int vertex_index, int edge_array_index)
    MOV EDX,EAX                         ; 005180ea
    IMUL EDX,EDX,0x4c4                  ; 005180ec
    ADD ESP,0xc                         ; 005180f2
    XOR EAX,EAX                         ; 005180f5
    MOV dword ptr [ESP + 0x49c],EDX     ; 005180f7
    XOR EDX,EDX                         ; 005180fe
    MOV EDI,dword ptr [ESP + 0x49c]     ; 00518100
        ;   Label: LAB_00518100
    MOV ESI,dword ptr [EBX + 0x4]       ; 00518107
    ADD EDI,ESI                         ; 0051810a
    CMP EAX,dword ptr [EDI + 0x3f8]     ; 0051810c
    JGE 0x00518202                      ; 00518112
        ;   XREF to: 00518202 (CONDITIONAL_JUMP)  ; LAB_00518202
    MOV ESI,dword ptr [EDX + EDI*0x1 + 0x3fc] ; 00518118
    IMUL ESI,ESI,0xf0                   ; 0051811f
    MOV EDI,dword ptr [EBX + 0x48]      ; 00518125
    ADD EDX,0x4                         ; 00518128
    INC EAX                             ; 0051812b
    MOV dword ptr [EDI + ESI*0x1 + 0x20],0x1 ; 0051812c
    JMP 0x00518100                      ; 00518134
        ;   XREF to: 00518100 (UNCONDITIONAL_JUMP)  ; LAB_00518100
    MOV dword ptr [EDI],ESI             ; 00518136
        ;   Label: LAB_00518136
    JMP 0x00517f2a                      ; 00518138
        ;   XREF to: 00517f2a (UNCONDITIONAL_JUMP)  ; LAB_00517f2a
    CMP ESI,dword ptr [EDI + 0x4]       ; 0051813d
        ;   Label: LAB_0051813d
    JNZ 0x0051816e                      ; 00518140
        ;   XREF to: 0051816e (CONDITIONAL_JUMP)  ; LAB_0051816e
    PUSH 0x0                            ; 00518142
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518144
    PUSH EAX                            ; 00518147
    MOV EDX,dword ptr [EDI]             ; 00518148
    PUSH EDX                            ; 0051814a
    PUSH EBX                            ; 0051814b
    CALL shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0 ; 0051814c
        ;   XREF to: 00515ec0 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
    ADD ESP,0x10                        ; 00518151
    MOV dword ptr [ESP + 0x46c],EAX     ; 00518154
    TEST EAX,EAX                        ; 0051815b
    JGE 0x00517f2a                      ; 0051815d
        ;   XREF to: 00517f2a (CONDITIONAL_JUMP)  ; LAB_00517f2a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00518163
    MOV dword ptr [EDI + 0x4],EAX       ; 00518166
    JMP 0x00517f2a                      ; 00518169
        ;   XREF to: 00517f2a (UNCONDITIONAL_JUMP)  ; LAB_00517f2a
    MOV ECX,0x637829                    ; 0051816e | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051816e
    MOV ESI,0x992                       ; 00518173
    PUSH 0x63783e                       ; 00518178 | = "Bug!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0051817d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00518183 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00518189
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051818e
    JMP 0x00517f2a                      ; 00518191
        ;   XREF to: 00517f2a (UNCONDITIONAL_JUMP)  ; LAB_00517f2a
    MOV EDX,dword ptr [EDI + 0x4]       ; 00518196
        ;   Label: LAB_00518196
    CMP EDX,dword ptr [EDI]             ; 00518199
    JGE 0x005181a8                      ; 0051819b
        ;   XREF to: 005181a8 (CONDITIONAL_JUMP)  ; LAB_005181a8
    LEA EAX,[EDI + 0x4]                 ; 0051819d
    MOV ESI,dword ptr [EAX]             ; 005181a0
    MOV EDX,dword ptr [EDI]             ; 005181a2
    MOV dword ptr [EDI],ESI             ; 005181a4
    MOV dword ptr [EAX],EDX             ; 005181a6
    MOV ECX,dword ptr [ESP + 0x468]     ; 005181a8
        ;   Label: LAB_005181a8
    MOV ESI,dword ptr [ESP + 0x478]     ; 005181af
    MOV EAX,dword ptr [EBX + 0x4]       ; 005181b6
    PUSH ECX                            ; 005181b9
    ADD EAX,ESI                         ; 005181ba
    PUSH EAX                            ; 005181bc
    CALL shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90 ; 005181bd
        ;   XREF to: 00515d90 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 005181c2
    JMP 0x00517fc9                      ; 005181c5
        ;   XREF to: 00517fc9 (UNCONDITIONAL_JUMP)  ; LAB_00517fc9
    PUSH 0x0                            ; 005181ca
        ;   Label: LAB_005181ca
    MOV ECX,dword ptr [ESP + 0x48c]     ; 005181cc
    PUSH ECX                            ; 005181d3
    PUSH EBX                            ; 005181d4
    CALL shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000 ; 005181d5
        ;   XREF to: 00516000 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)
    ADD ESP,0xc                         ; 005181da
    MOV ESI,dword ptr [ESP + 0x4d0]     ; 005181dd
    MOV EDI,dword ptr [ESP + 0x4d4]     ; 005181e4
    ADD ESI,0x4                         ; 005181eb
    INC EDI                             ; 005181ee
    MOV dword ptr [ESP + 0x4d0],ESI     ; 005181ef
    MOV dword ptr [ESP + 0x4d4],EDI     ; 005181f6
    JMP 0x005180c0                      ; 005181fd
        ;   XREF to: 005180c0 (UNCONDITIONAL_JUMP)  ; LAB_005180c0
    MOV EDI,dword ptr [ESP + 0x490]     ; 00518202
        ;   Label: LAB_00518202
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 00518209
    ADD ESI,EDI                         ; 00518210
    ADD ESI,EAX                         ; 00518212
    MOV EAX,dword ptr [ESI + 0x3fc]     ; 00518214
    MOV dword ptr [ESP + 0x488],EAX     ; 0051821a
    IMUL EDX,EAX,0xf0                   ; 00518221
    MOV EAX,dword ptr [EBX + 0x48]      ; 00518227
    ADD EAX,EDX                         ; 0051822a
    XOR EDI,EDI                         ; 0051822c
    MOV ESI,dword ptr [EAX + 0x24]      ; 0051822e
    MOV dword ptr [ESP + 0x48c],EAX     ; 00518231
    TEST ESI,ESI                        ; 00518238
    JLE 0x005181ca                      ; 0051823a
        ;   XREF to: 005181ca (CONDITIONAL_JUMP)  ; LAB_005181ca
    MOV ESI,EAX                         ; 0051823c
    MOV EAX,dword ptr [ESI + 0x28]      ; 0051823e
        ;   Label: LAB_0051823e
    IMUL EAX,EAX,0x8c                   ; 00518241
    MOV EDX,dword ptr [EBX + 0xc]       ; 00518247
    ADD EAX,EDX                         ; 0051824a
    MOV ECX,dword ptr [0x02f33334]      ; 0051824c | g_LodGenerationStamp
    CMP ECX,dword ptr [EAX + 0x84]      ; 00518252
    JNZ 0x00518272                      ; 00518258
        ;   XREF to: 00518272 (CONDITIONAL_JUMP)  ; LAB_00518272
    MOV EAX,dword ptr [ESP + 0x48c]     ; 0051825a
        ;   Label: LAB_0051825a
    INC EDI                             ; 00518261
    MOV EDX,dword ptr [EAX + 0x24]      ; 00518262
    ADD ESI,0x4                         ; 00518265
    CMP EDI,EDX                         ; 00518268
    JGE 0x005181ca                      ; 0051826a
        ;   XREF to: 005181ca (CONDITIONAL_JUMP)  ; LAB_005181ca
    JMP 0x0051823e                      ; 00518270
        ;   XREF to: 0051823e (UNCONDITIONAL_JUMP)  ; LAB_0051823e
    PUSH EAX                            ; 00518272
        ;   Label: LAB_00518272
    PUSH EBX                            ; 00518273
    MOV dword ptr [EAX + 0x84],ECX      ; 00518274
    CALL shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830 ; 0051827a
        ;   XREF to: 00519830 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh * this_ptr, CLodFace * face)
    ADD ESP,0x8                         ; 0051827f
    JMP 0x0051825a                      ; 00518282
        ;   XREF to: 0051825a (UNCONDITIONAL_JUMP)  ; LAB_0051825a
    MOV EDI,dword ptr [EBX + 0x5c]      ; 00518284
        ;   Label: LAB_00518284
    XOR ESI,ESI                         ; 00518287
    TEST EDI,EDI                        ; 00518289
    JLE 0x005182ba                      ; 0051828b
        ;   XREF to: 005182ba (CONDITIONAL_JUMP)  ; LAB_005182ba
    XOR EDI,EDI                         ; 0051828d
    MOV EAX,dword ptr [EBX + 0x60]      ; 0051828f
        ;   Label: LAB_0051828f
    IMUL EDX,dword ptr [EDI + EAX*0x1 + 0xc],0x8c ; 00518292
    MOV EAX,dword ptr [EBX + 0xc]       ; 0051829a
    ADD EAX,EDX                         ; 0051829d
    CMP dword ptr [EAX + 0x40],0x0      ; 0051829f
    JZ 0x005182cb                       ; 005182a3
        ;   XREF to: 005182cb (CONDITIONAL_JUMP)  ; LAB_005182cb
    PUSH ESI                            ; 005182a5
        ;   Label: LAB_005182a5
    PUSH EBX                            ; 005182a6
    CALL shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 ; 005182a7
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300(CLodMesh * this_ptr, int sample_point_index)
    ADD ESP,0x8                         ; 005182ac
    INC ESI                             ; 005182af
        ;   Label: LAB_005182af
    MOV ECX,dword ptr [EBX + 0x5c]      ; 005182b0
    ADD EDI,0x1c                        ; 005182b3
    CMP ESI,ECX                         ; 005182b6
    JL 0x0051828f                       ; 005182b8
        ;   XREF to: 0051828f (CONDITIONAL_JUMP)  ; LAB_0051828f
    CMP dword ptr [ESP + 0x430],0x0     ; 005182ba
        ;   Label: LAB_005182ba
    JNZ 0x005182de                      ; 005182c2
        ;   XREF to: 005182de (CONDITIONAL_JUMP)  ; LAB_005182de
    MOV ESP,EBP                         ; 005182c4
    POP EBP                             ; 005182c6
    POP EDI                             ; 005182c7
    POP ESI                             ; 005182c8
    POP EBX                             ; 005182c9
    RET                                 ; 005182ca
    MOV ECX,dword ptr [EBP + 0x18]      ; 005182cb
        ;   Label: LAB_005182cb
    PUSH ECX                            ; 005182ce
    PUSH EAX                            ; 005182cf
    CALL shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90 ; 005182d0
        ;   XREF to: 00515e90 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodFace_findVertexIndex_FUN_00515e90(CLodFace * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005182d5
    TEST EAX,EAX                        ; 005182d8
    JGE 0x005182a5                      ; 005182da
        ;   XREF to: 005182a5 (CONDITIONAL_JUMP)  ; LAB_005182a5
    JMP 0x005182af                      ; 005182dc
        ;   XREF to: 005182af (UNCONDITIONAL_JUMP)  ; LAB_005182af
    PUSH 0x637890                       ; 005182de | = "Linkage AFTER collapsing edge:"
        ;   Label: LAB_005182de
    ADD ESP,0x4                         ; 005182e3
    PUSH EBX                            ; 005182e6
    ADD ESP,0x4                         ; 005182e7
    MOV ESP,EBP                         ; 005182ea
    POP EBP                             ; 005182ec
    POP EDI                             ; 005182ed
    POP ESI                             ; 005182ee
    POP EBX                             ; 005182ef
    RET                                 ; 005182f0

