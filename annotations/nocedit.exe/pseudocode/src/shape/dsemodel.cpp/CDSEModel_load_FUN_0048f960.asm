; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053f20f
;
; Referenced Globals:
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].v
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;   undefined4 g_ModelPolygonData[0].part_assignment
;   SModelPartName[500] g_ModelPartNames
;   undefined4 g_ModelPartNames[0].name[1]
;   undefined4 g_ModelPartNames[0].name[2]
;   undefined4 g_ModelPartNames[0].name[3]
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
    MOV dword ptr [0x01e528a0],0x1      ; 0048f96c | g_PartsCount
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f976
    ADD ESI,0x1f20c8                    ; 0048f979
    MOV EDI,0x1e50190                   ; 0048f97f | g_ModelPartNames
    PUSH EDI                            ; 0048f984 | g_ModelPartNames
    MOV AL,byte ptr [ESI]               ; 0048f985
        ;   Label: LAB_0048f985
    MOV byte ptr [EDI],AL               ; 0048f987 | g_ModelPartNames | g_ModelPartNames[0].name[2]
    CMP AL,0x0                          ; 0048f989
    JZ 0x0048f99d                       ; 0048f98b
        ;   XREF to: 0048f99d (CONDITIONAL_JUMP)  ; LAB_0048f99d
    MOV AL,byte ptr [ESI + 0x1]         ; 0048f98d
    ADD ESI,0x2                         ; 0048f990
    MOV byte ptr [EDI + 0x1],AL         ; 0048f993 | g_ModelPartNames[0].name[1] | g_ModelPartNames[0].name[3]
    ADD EDI,0x2                         ; 0048f996
    CMP AL,0x0                          ; 0048f999
    JNZ 0x0048f985                      ; 0048f99b
        ;   XREF to: 0048f985 (CONDITIONAL_JUMP)  ; LAB_0048f985
    POP EDI                             ; 0048f99d
        ;   Label: LAB_0048f99d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f99e
    MOV ESI,dword ptr [ESI]             ; 0048f9a1
    MOV dword ptr [0x01626408],ESI      ; 0048f9a3 | g_VertexCount
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f9a9
    JMP 0x0048f9b8                      ; 0048f9b0
        ;   XREF to: 0048f9b8 (UNCONDITIONAL_JUMP)  ; LAB_0048f9b8
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9b2
        ;   Label: LAB_0048f9b2
    INC dword ptr [EBP + -0x4]          ; 0048f9b5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9b8
        ;   Label: LAB_0048f9b8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f9bb
    CMP EAX,dword ptr [EDX]             ; 0048f9be
    JGE 0x0048f9dd                      ; 0048f9c0
        ;   XREF to: 0048f9dd (CONDITIONAL_JUMP)  ; LAB_0048f9dd
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0048f9c2
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048f9c6
    IMUL ESI,dword ptr [EBP + -0x4],0x14 ; 0048f9c9
    LEA EDI,[ESI + 0x162640c]           ; 0048f9cd | g_LoadedVertices
    JMP 0x00604dcb                      ; 0048f9d3
        ;   XREF to: 00604dcb (UNCONDITIONAL_JUMP)  ; LAB_00604dcb
    MOVSD ES:EDI,ESI                    ; 0048f9da | g_LoadedVertices[0].v
        ;   Label: LAB_0048f9da
    JMP 0x0048f9b2                      ; 0048f9db
        ;   XREF to: 0048f9b2 (UNCONDITIONAL_JUMP)  ; LAB_0048f9b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f9dd
        ;   Label: LAB_0048f9dd
    MOV EAX,dword ptr [EAX + 0x186a4]   ; 0048f9e0
    MOV [0x016e990c],EAX                ; 0048f9e6 | g_PolygonCount
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f9eb
    JMP 0x0048f9fa                      ; 0048f9f2
        ;   XREF to: 0048f9fa (UNCONDITIONAL_JUMP)  ; LAB_0048f9fa
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9f4
        ;   Label: LAB_0048f9f4
    INC dword ptr [EBP + -0x4]          ; 0048f9f7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f9fa
        ;   Label: LAB_0048f9fa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f9fd
    CMP EAX,dword ptr [EDX + 0x186a4]   ; 0048fa00
    JGE 0x0048fa3f                      ; 0048fa06
        ;   XREF to: 0048fa3f (CONDITIONAL_JUMP)  ; LAB_0048fa3f
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0048fa08
    ADD EAX,dword ptr [EBP + 0x14]      ; 0048fa0f
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0048fa12
    MOV ECX,0x61                        ; 0048fa19
    LEA EDI,[ESI + 0x16e9910]           ; 0048fa1e | g_ModelPolygonData
    LEA ESI,[EAX + 0x186a8]             ; 0048fa24
    MOVSD.REP ES:EDI,ESI                ; 0048fa2a | g_ModelPolygonData | g_ModelPolygonData[0].texture_name[0]
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0048fa2c
    MOV dword ptr [EAX + 0x16e9a88],0x0 ; 0048fa33 | g_ModelPolygonData[0].part_assignment
    JMP 0x0048f9f4                      ; 0048fa3d
        ;   XREF to: 0048f9f4 (UNCONDITIONAL_JUMP)  ; LAB_0048f9f4
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0048fa3f
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   Label: LAB_0048fa3f
    MOV ESP,EBP                         ; 0048fa44
    POP EBP                             ; 0048fa46
    POP EDI                             ; 0048fa47
    POP ESI                             ; 0048fa48
    POP EBX                             ; 0048fa49
    RET                                 ; 0048fa4a
    LEA ESI,[EAX + 0x4]                 ; 00604dcb
        ;   Label: LAB_00604dcb
    MOV ECX,dword ptr [ESI]             ; 00604dce
    MOV dword ptr [EDI],ECX             ; 00604dd0
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604dd2
    MOV dword ptr [EDI + 0x4],ECX       ; 00604dd5
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604dd8
    MOV dword ptr [EDI + 0x8],ECX       ; 00604ddb
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604dde
    MOV dword ptr [EDI + 0xc],ECX       ; 00604de1
    ADD ESI,0x10                        ; 00604de4
    ADD EDI,0x10                        ; 00604de7
    JMP 0x0048f9da                      ; 00604dea
        ;   XREF to: 0048f9da (UNCONDITIONAL_JUMP)  ; LAB_0048f9da

