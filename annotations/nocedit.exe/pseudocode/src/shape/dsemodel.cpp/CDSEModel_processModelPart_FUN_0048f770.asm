; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel * this_ptr, uint part_index)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   part_index
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_smoothMesh_FUN_0046ed00 at 0046ed14
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053ef12
;
; Referenced Globals:
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e9a88
;   SModelPartName[500] g_ModelPartNames
;   undefined4 DAT_01e50191
;   undefined4 DAT_01e50192
;   undefined4 DAT_01e50193
;   int[5000] g_VertexIdRegistry
;
; Called Functions:
;   shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
;   shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f770
        ;   Label: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
    PUSH ESI                            ; 0048f771
    PUSH EDI                            ; 0048f772
    PUSH EBP                            ; 0048f773
    MOV EBP,ESP                         ; 0048f774
    SUB ESP,0x8                         ; 0048f776
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f77c
    MOV dword ptr [ESI],0x0             ; 0048f77f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f785
    MOV dword ptr [ESI + 0x186a4],0x0   ; 0048f788
    IMUL ESI,dword ptr [EBP + 0x18],0x14 ; 0048f792
    MOV EDI,0x1e50190                   ; 0048f796 | g_ModelPartNames
    ADD ESI,EDI                         ; 0048f79b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048f79d
    ADD EDI,0x1f20c8                    ; 0048f7a0
    PUSH EDI                            ; 0048f7a6
    MOV AL,byte ptr [ESI]               ; 0048f7a7 | g_ModelPartNames | DAT_01e50192
        ;   Label: LAB_0048f7a7
    MOV byte ptr [EDI],AL               ; 0048f7a9
    CMP AL,0x0                          ; 0048f7ab
    JZ 0x0048f7bf                       ; 0048f7ad
        ;   XREF to: 0048f7bf (CONDITIONAL_JUMP)  ; LAB_0048f7bf
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f7af | DAT_01e50191 | DAT_01e50193
    ADD ESI,0x2                         ; 0048f7b2
    MOV byte ptr [EDI + 0x1],AL         ; 0048f7b5
    ADD EDI,0x2                         ; 0048f7b8
    CMP AL,0x0                          ; 0048f7bb
    JNZ 0x0048f7a7                      ; 0048f7bd
        ;   XREF to: 0048f7a7 (CONDITIONAL_JUMP)  ; LAB_0048f7a7
    POP EDI                             ; 0048f7bf
        ;   Label: LAB_0048f7bf
    MOV dword ptr [EBP + -0x8],0x0      ; 0048f7c0
    JMP 0x0048f7cf                      ; 0048f7c7
        ;   XREF to: 0048f7cf (UNCONDITIONAL_JUMP)  ; LAB_0048f7cf
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f7c9
        ;   Label: LAB_0048f7c9
    INC dword ptr [EBP + -0x8]          ; 0048f7cc
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f7cf
        ;   Label: LAB_0048f7cf
    CMP EAX,dword ptr [0x016e990c]      ; 0048f7d2 | g_PolygonCount
    JGE 0x0048f823                      ; 0048f7d8
        ;   XREF to: 0048f823 (CONDITIONAL_JUMP)  ; LAB_0048f823
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0048f7da
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0048f7e1 | DAT_016e9a88
    CMP EAX,dword ptr [EBP + 0x18]      ; 0048f7e7
    JZ 0x0048f7ee                       ; 0048f7ea
        ;   XREF to: 0048f7ee (CONDITIONAL_JUMP)  ; LAB_0048f7ee
    JMP 0x0048f821                      ; 0048f7ec
        ;   XREF to: 0048f821 (UNCONDITIONAL_JUMP)  ; LAB_0048f821
    IMUL ESI,dword ptr [EBP + -0x8],0x184 ; 0048f7ee
        ;   Label: LAB_0048f7ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f7f5
    IMUL EAX,dword ptr [EAX + 0x186a4],0x184 ; 0048f7f8
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048f802
    MOV ECX,0x61                        ; 0048f805
    LEA EDI,[EAX + 0x186a8]             ; 0048f80a
    LEA ESI,[ESI + 0x16e9910]           ; 0048f810 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 0048f816 | g_ModelPolygonData | DAT_016e9914
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f818
    INC dword ptr [EAX + 0x186a4]       ; 0048f81b
    JMP 0x0048f7c9                      ; 0048f821
        ;   XREF to: 0048f7c9 (UNCONDITIONAL_JUMP)  ; LAB_0048f7c9
        ;   Label: LAB_0048f821
    MOV dword ptr [EBP + -0x8],0x0      ; 0048f823
        ;   Label: LAB_0048f823
    JMP 0x0048f832                      ; 0048f82a
        ;   XREF to: 0048f832 (UNCONDITIONAL_JUMP)  ; LAB_0048f832
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f82c
        ;   Label: LAB_0048f82c
    INC dword ptr [EBP + -0x8]          ; 0048f82f
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f832
        ;   Label: LAB_0048f832
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f835
    CMP EAX,dword ptr [EDX + 0x186a4]   ; 0048f838
    JGE 0x0048f890                      ; 0048f83e
        ;   XREF to: 0048f890 (CONDITIONAL_JUMP)  ; LAB_0048f890
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f840
    JMP 0x0048f84f                      ; 0048f847
        ;   XREF to: 0048f84f (UNCONDITIONAL_JUMP)  ; LAB_0048f84f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f849
        ;   Label: LAB_0048f849
    INC dword ptr [EBP + -0x4]          ; 0048f84c
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0048f84f
        ;   Label: LAB_0048f84f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f856
    ADD EDX,EAX                         ; 0048f859
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f85b
    CMP EAX,dword ptr [EDX + 0x1874c]   ; 0048f85e
    JGE 0x0048f88e                      ; 0048f864
        ;   XREF to: 0048f88e (CONDITIONAL_JUMP)  ; LAB_0048f88e
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0048f866
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f86d
    ADD EDX,EAX                         ; 0048f870
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f872
    SHL EAX,0x2                         ; 0048f875
    ADD EAX,EDX                         ; 0048f878
    PUSH dword ptr [EAX + 0x18760]      ; 0048f87a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f880
    PUSH EAX                            ; 0048f883
    CALL shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660 ; 0048f884
        ;   XREF to: 0048f660 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel * this_ptr, int vertex_id)
    ADD ESP,0x8                         ; 0048f889
    JMP 0x0048f849                      ; 0048f88c
        ;   XREF to: 0048f849 (UNCONDITIONAL_JUMP)  ; LAB_0048f849
    JMP 0x0048f82c                      ; 0048f88e
        ;   XREF to: 0048f82c (UNCONDITIONAL_JUMP)  ; LAB_0048f82c
        ;   Label: LAB_0048f88e
    MOV dword ptr [EBP + -0x8],0x0      ; 0048f890
        ;   Label: LAB_0048f890
    JMP 0x0048f89f                      ; 0048f897
        ;   XREF to: 0048f89f (UNCONDITIONAL_JUMP)  ; LAB_0048f89f
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f899
        ;   Label: LAB_0048f899
    INC dword ptr [EBP + -0x8]          ; 0048f89c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f89f
        ;   Label: LAB_0048f89f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f8a2
    CMP EAX,dword ptr [EDX + 0x186a4]   ; 0048f8a5
    JGE 0x0048f915                      ; 0048f8ab
        ;   XREF to: 0048f915 (CONDITIONAL_JUMP)  ; LAB_0048f915
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f8ad
    JMP 0x0048f8bc                      ; 0048f8b4
        ;   XREF to: 0048f8bc (UNCONDITIONAL_JUMP)  ; LAB_0048f8bc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f8b6
        ;   Label: LAB_0048f8b6
    INC dword ptr [EBP + -0x4]          ; 0048f8b9
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0048f8bc
        ;   Label: LAB_0048f8bc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f8c3
    ADD EDX,EAX                         ; 0048f8c6
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f8c8
    CMP EAX,dword ptr [EDX + 0x1874c]   ; 0048f8cb
    JGE 0x0048f913                      ; 0048f8d1
        ;   XREF to: 0048f913 (CONDITIONAL_JUMP)  ; LAB_0048f913
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0048f8d3
    ADD EDX,dword ptr [EBP + 0x14]      ; 0048f8da
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f8dd
    SHL EAX,0x2                         ; 0048f8e0
    ADD EAX,EDX                         ; 0048f8e3
    PUSH dword ptr [EAX + 0x18760]      ; 0048f8e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f8eb
    PUSH EAX                            ; 0048f8ee
    CALL shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0 ; 0048f8ef
        ;   XREF to: 0048f6f0 (UNCONDITIONAL_CALL)  ; int shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel * this_ptr, int vertex_id)
    ADD ESP,0x8                         ; 0048f8f4
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0048f8f7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0048f8fe
    ADD ECX,EDX                         ; 0048f901
    MOV EDX,dword ptr [EBP + -0x4]      ; 0048f903
    SHL EDX,0x2                         ; 0048f906
    ADD EDX,ECX                         ; 0048f909
    MOV dword ptr [EDX + 0x18760],EAX   ; 0048f90b
    JMP 0x0048f8b6                      ; 0048f911
        ;   XREF to: 0048f8b6 (UNCONDITIONAL_JUMP)  ; LAB_0048f8b6
    JMP 0x0048f899                      ; 0048f913
        ;   XREF to: 0048f899 (UNCONDITIONAL_JUMP)  ; LAB_0048f899
        ;   Label: LAB_0048f913
    MOV dword ptr [EBP + -0x8],0x0      ; 0048f915
        ;   Label: LAB_0048f915
    JMP 0x0048f924                      ; 0048f91c
        ;   XREF to: 0048f924 (UNCONDITIONAL_JUMP)  ; LAB_0048f924
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f91e
        ;   Label: LAB_0048f91e
    INC dword ptr [EBP + -0x8]          ; 0048f921
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f924
        ;   Label: LAB_0048f924
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f927
    CMP EAX,dword ptr [EDX]             ; 0048f92a
    JGE 0x0048f952                      ; 0048f92c
        ;   XREF to: 0048f952 (CONDITIONAL_JUMP)  ; LAB_0048f952
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f92e
    SHL EAX,0x2                         ; 0048f931
    IMUL ESI,dword ptr [EAX + 0x2c9b328],0x14 ; 0048f934 | g_VertexIdRegistry
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 0048f93b
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048f93f
    LEA EDI,[EAX + 0x4]                 ; 0048f942
    LEA ESI,[ESI + 0x162640c]           ; 0048f945 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0048f94b | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0048f94c | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0048f94d | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0048f94e | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0048f94f | DAT_0162641c
    JMP 0x0048f91e                      ; 0048f950
        ;   XREF to: 0048f91e (UNCONDITIONAL_JUMP)  ; LAB_0048f91e
    MOV ESP,EBP                         ; 0048f952
        ;   Label: LAB_0048f952
    POP EBP                             ; 0048f954
    POP EDI                             ; 0048f955
    POP ESI                             ; 0048f956
    POP EBX                             ; 0048f957
    RET                                 ; 0048f958

