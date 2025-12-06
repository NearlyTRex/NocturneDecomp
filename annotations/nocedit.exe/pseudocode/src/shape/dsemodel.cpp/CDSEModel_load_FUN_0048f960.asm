; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960(CDSEModel * this_ptr)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053f20f
;
; Referenced Globals:
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
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
;   int g_PartsCount
;
; Called Functions:
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f960
        ;   Label: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
    PUSH ESI                            ; 0048f961
    PUSH EDI                            ; 0048f962
    PUSH EBP                            ; 0048f963
    MOV EBP,ESP                         ; 0048f964
    SUB ESP,0x4                         ; 0048f966
    MOV dword ptr [0x01e528a0],0x1      ; 0048f96c | int g_PartsCount
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f976
    ADD ESI,0x1f20c8                    ; 0048f979
    MOV EDI,0x1e50190                   ; 0048f97f | SModelPartName[500] g_ModelPartNames
    PUSH EDI                            ; 0048f984 | SModelPartName[500] g_ModelPartNames
    MOV AL,byte ptr [ESI]               ; 0048f985
        ;   Label: LAB_0048f985
    MOV byte ptr [EDI],AL               ; 0048f987 | SModelPartName[500] g_ModelPartNames
    CMP AL,0x0                          ; 0048f989
    JZ 0x0048f99d                       ; 0048f98b | LAB_0048f99d
        ;   XREF to: 0048f99d (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f98d
    ADD ESI,0x2                         ; 0048f990
    MOV byte ptr [EDI + 0x1],AL         ; 0048f993 | DAT_01e50191
    ADD EDI,0x2                         ; 0048f996
    CMP AL,0x0                          ; 0048f999
    JNZ 0x0048f985                      ; 0048f99b | LAB_0048f985
        ;   XREF to: 0048f985 (CONDITIONAL_JUMP)
    POP EDI                             ; 0048f99d
        ;   Label: LAB_0048f99d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f99e
    MOV ESI,dword ptr [ESI]             ; 0048f9a1
    MOV dword ptr [0x01626408],ESI      ; 0048f9a3 | int g_VertexCount
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f9a9
    JMP 0x0048f9b8                      ; 0048f9b0 | LAB_0048f9b8
        ;   XREF to: 0048f9b8 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9b2
        ;   Label: LAB_0048f9b2
    INC dword ptr [EBP + -0x4]          ; 0048f9b5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9b8
        ;   Label: LAB_0048f9b8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f9bb
    CMP EAX,dword ptr [EDX]             ; 0048f9be
    JGE 0x0048f9dd                      ; 0048f9c0 | LAB_0048f9dd
        ;   XREF to: 0048f9dd (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048f9c2
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048f9c6
    IMUL ESI,dword ptr [EBP + -0x4],0x14 ; 0048f9c9
    LEA EDI,[ESI + 0x162640c]           ; 0048f9cd | SVertexData[20000] g_LoadedVertices
    LEA ESI,[EAX + 0x4]                 ; 0048f9d3
    MOVSD ES:EDI,ESI                    ; 0048f9d6 | SVertexData[20000] g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0048f9d7 | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0048f9d8 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0048f9d9 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0048f9da | DAT_0162641c
    JMP 0x0048f9b2                      ; 0048f9db | LAB_0048f9b2
        ;   XREF to: 0048f9b2 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f9dd
        ;   Label: LAB_0048f9dd
    MOV EAX,dword ptr [EAX + 0x186a4]   ; 0048f9e0
    MOV [0x016e990c],EAX                ; 0048f9e6 | int g_PolygonCount
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f9eb
    JMP 0x0048f9fa                      ; 0048f9f2 | LAB_0048f9fa
        ;   XREF to: 0048f9fa (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9f4
        ;   Label: LAB_0048f9f4
    INC dword ptr [EBP + -0x4]          ; 0048f9f7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9fa
        ;   Label: LAB_0048f9fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f9fd
    CMP EAX,dword ptr [EDX + 0x186a4]   ; 0048fa00
    JGE 0x0048fa3f                      ; 0048fa06 | LAB_0048fa3f
        ;   XREF to: 0048fa3f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0048fa08
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fa0f
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0048fa12
    MOV ECX,0x61                        ; 0048fa19
    LEA EDI,[ESI + 0x16e9910]           ; 0048fa1e | SShapeEditorPolygon[20000] g_ModelPolygonData
    LEA ESI,[EAX + 0x186a8]             ; 0048fa24
    MOVSD.REP ES:EDI,ESI                ; 0048fa2a | SShapeEditorPolygon[20000] g_ModelPolygonData
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0048fa2c
    MOV dword ptr [EAX + 0x16e9a88],0x0 ; 0048fa33 | DAT_016e9a88
    JMP 0x0048f9f4                      ; 0048fa3d | LAB_0048f9f4
        ;   XREF to: 0048f9f4 (UNCONDITIONAL_JUMP)
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0048fa3f | void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   Label: LAB_0048fa3f
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0048fa44
    POP EBP                             ; 0048fa46
    POP EDI                             ; 0048fa47
    POP ESI                             ; 0048fa48
    POP EBX                             ; 0048fa49
    RET                                 ; 0048fa4a

