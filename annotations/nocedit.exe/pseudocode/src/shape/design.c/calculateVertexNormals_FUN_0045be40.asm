; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_calculateVertexNormals_FUN_0045be40(void)
;
; Local Variables:
; uint             Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[10]:
;   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 at 004572a0
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482e4b
;   shape_design.c_loadModelBinary_FUN_00458170 at 00458878
;   shape_design.c_loadModelFile_FUN_00458ac0 at 00459342
;   shape_design.c_loadS3DModelFile_FUN_004593a0 at 00459a00
;   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 at 0045d670
;   shape_design.c_realignObject_FUN_0045ee70 at 0045f073
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f2ff
;   shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960 at 0048fa3f
;   shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00 at 005d80dc
;
; Referenced Globals:
;   double g_NormalizeThreshold = 0.00100000000000000
;   int g_VertexCount
;   SVertexData[20000] g_VertexNormals
;   undefined4 DAT_01687e90
;   undefined4 DAT_01687e94
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99b8
;   undefined4 DAT_016e99bc
;   undefined4 DAT_016e99c0
;
; Called Functions:
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045be40
        ;   Label: shape_design.c_calculateVertexNormals_FUN_0045be40
    PUSH ESI                            ; 0045be41
    PUSH EDI                            ; 0045be42
    PUSH EBP                            ; 0045be43
    MOV EBP,ESP                         ; 0045be44
    SUB ESP,0x30                        ; 0045be46
    MOV dword ptr [EBP + -0x30],0x0     ; 0045be4c
    JMP 0x0045be5b                      ; 0045be53
        ;   XREF to: 0045be5b (UNCONDITIONAL_JUMP)  ; LAB_0045be5b
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045be55
        ;   Label: LAB_0045be55
    INC dword ptr [EBP + -0x30]         ; 0045be58
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045be5b
        ;   Label: LAB_0045be5b
    CMP EAX,dword ptr [0x016e990c]      ; 0045be5e | g_PolygonCount
    JGE 0x0045be7f                      ; 0045be64
        ;   XREF to: 0045be7f (CONDITIONAL_JUMP)  ; LAB_0045be7f
    IMUL EAX,dword ptr [EBP + -0x30],0x184 ; 0045be66
    MOV EDX,0x16e9910                   ; 0045be6d | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045be72
    PUSH EAX                            ; 0045be74
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045be75
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0045be7a
    JMP 0x0045be55                      ; 0045be7d
        ;   XREF to: 0045be55 (UNCONDITIONAL_JUMP)  ; LAB_0045be55
    MOV dword ptr [EBP + -0x30],0x0     ; 0045be7f
        ;   Label: LAB_0045be7f
    JMP 0x0045be8e                      ; 0045be86
        ;   XREF to: 0045be8e (UNCONDITIONAL_JUMP)  ; LAB_0045be8e
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045be88
        ;   Label: LAB_0045be88
    INC dword ptr [EBP + -0x30]         ; 0045be8b
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045be8e
        ;   Label: LAB_0045be8e
    CMP EAX,dword ptr [0x01626408]      ; 0045be91 | g_VertexCount
    JGE 0x0045bfe2                      ; 0045be97
        ;   XREF to: 0045bfe2 (CONDITIONAL_JUMP)  ; LAB_0045bfe2
    MOV dword ptr [EBP + -0x24],0x0     ; 0045be9d
    MOV dword ptr [EBP + -0x10],0x0     ; 0045bea4
    MOV dword ptr [EBP + -0xc],0x0      ; 0045beab
    MOV dword ptr [EBP + -0x8],0x0      ; 0045beb2
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045beb9
    JMP 0x0045bec8                      ; 0045bec0
        ;   XREF to: 0045bec8 (UNCONDITIONAL_JUMP)  ; LAB_0045bec8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045bec2
        ;   Label: LAB_0045bec2
    INC dword ptr [EBP + -0x2c]         ; 0045bec5
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045bec8
        ;   Label: LAB_0045bec8
    CMP EAX,dword ptr [0x016e990c]      ; 0045becb | g_PolygonCount
    JGE 0x0045bf53                      ; 0045bed1
        ;   XREF to: 0045bf53 (CONDITIONAL_JUMP)  ; LAB_0045bf53
    IMUL EAX,dword ptr [EBP + -0x2c],0x184 ; 0045bed7
    MOV EDX,0x16e9910                   ; 0045bede | g_ModelPolygonData
    ADD EDX,EAX                         ; 0045bee3
    MOV dword ptr [EBP + -0x20],EDX     ; 0045bee5
    MOV dword ptr [EBP + -0x28],0x0     ; 0045bee8
    JMP 0x0045bef7                      ; 0045beef
        ;   XREF to: 0045bef7 (UNCONDITIONAL_JUMP)  ; LAB_0045bef7
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045bef1
        ;   Label: LAB_0045bef1
    INC dword ptr [EBP + -0x28]         ; 0045bef4
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045bef7
        ;   Label: LAB_0045bef7
    MOV EDX,dword ptr [EBP + -0x20]     ; 0045befa
    CMP EAX,dword ptr [EDX + 0xa4]      ; 0045befd | DAT_016e99b4
    JGE 0x0045bf4e                      ; 0045bf03
        ;   XREF to: 0045bf4e (CONDITIONAL_JUMP)  ; LAB_0045bf4e
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045bf05
    SHL EAX,0x2                         ; 0045bf08
    ADD EAX,dword ptr [EBP + -0x20]     ; 0045bf0b
    MOV EAX,dword ptr [EAX + 0xb8]      ; 0045bf0e
    CMP EAX,dword ptr [EBP + -0x30]     ; 0045bf14
    JNZ 0x0045bf4c                      ; 0045bf17
        ;   XREF to: 0045bf4c (CONDITIONAL_JUMP)  ; LAB_0045bf4c
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045bf19
    INC dword ptr [EBP + -0x24]         ; 0045bf1c
    MOV EAX,dword ptr [EBP + -0x20]     ; 0045bf1f
    FLD float ptr [EBP + -0x10]         ; 0045bf22
    FADD float ptr [EAX + 0xa8]         ; 0045bf25 | DAT_016e99b8
    FSTP float ptr [EBP + -0x10]        ; 0045bf2b
    MOV EAX,dword ptr [EBP + -0x20]     ; 0045bf2e
    FLD float ptr [EBP + -0xc]          ; 0045bf31
    FADD float ptr [EAX + 0xac]         ; 0045bf34 | DAT_016e99bc
    FSTP float ptr [EBP + -0xc]         ; 0045bf3a
    MOV EAX,dword ptr [EBP + -0x20]     ; 0045bf3d
    FLD float ptr [EBP + -0x8]          ; 0045bf40
    FADD float ptr [EAX + 0xb0]         ; 0045bf43 | DAT_016e99c0
    FSTP float ptr [EBP + -0x8]         ; 0045bf49
    JMP 0x0045bef1                      ; 0045bf4c
        ;   XREF to: 0045bef1 (UNCONDITIONAL_JUMP)  ; LAB_0045bef1
        ;   Label: LAB_0045bf4c
    JMP 0x0045bec2                      ; 0045bf4e
        ;   XREF to: 0045bec2 (UNCONDITIONAL_JUMP)  ; LAB_0045bec2
        ;   Label: LAB_0045bf4e
    CMP dword ptr [EBP + -0x24],0x0     ; 0045bf53
        ;   Label: LAB_0045bf53
    JZ 0x0045bfdd                       ; 0045bf57
        ;   XREF to: 0045bfdd (CONDITIONAL_JUMP)  ; LAB_0045bfdd
    FLD float ptr [EBP + -0x10]         ; 0045bf5d
    FMUL float ptr [EBP + -0x10]        ; 0045bf60
    FLD float ptr [EBP + -0xc]          ; 0045bf63
    FMUL float ptr [EBP + -0xc]         ; 0045bf66
    FADDP                               ; 0045bf69
    FLD float ptr [EBP + -0x8]          ; 0045bf6b
    FMUL float ptr [EBP + -0x8]         ; 0045bf6e
    FADDP                               ; 0045bf71
    FSQRT                               ; 0045bf73
    FSTP float ptr [EBP + -0x4]         ; 0045bf75
    FLD float ptr [EBP + -0x4]          ; 0045bf78
    FCOMP double ptr [0x0061b30e]       ; 0045bf7b | g_NormalizeThreshold
    FNSTSW AX                           ; 0045bf81
    SAHF                                ; 0045bf83
    JNC 0x0045bf9b                      ; 0045bf84
        ;   XREF to: 0045bf9b (CONDITIONAL_JUMP)  ; LAB_0045bf9b
    MOV dword ptr [EBP + -0x8],0x0      ; 0045bf86
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045bf8d
    MOV dword ptr [EBP + -0xc],EAX      ; 0045bf90
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045bf93
    MOV dword ptr [EBP + -0x10],EAX     ; 0045bf96
    JMP 0x0045bfb6                      ; 0045bf99
        ;   XREF to: 0045bfb6 (UNCONDITIONAL_JUMP)  ; LAB_0045bfb6
    FLD float ptr [EBP + -0x10]         ; 0045bf9b
        ;   Label: LAB_0045bf9b
    FDIV float ptr [EBP + -0x4]         ; 0045bf9e
    FSTP float ptr [EBP + -0x10]        ; 0045bfa1
    FLD float ptr [EBP + -0xc]          ; 0045bfa4
    FDIV float ptr [EBP + -0x4]         ; 0045bfa7
    FSTP float ptr [EBP + -0xc]         ; 0045bfaa
    FLD float ptr [EBP + -0x8]          ; 0045bfad
    FDIV float ptr [EBP + -0x4]         ; 0045bfb0
    FSTP float ptr [EBP + -0x8]         ; 0045bfb3
    IMUL EDX,dword ptr [EBP + -0x30],0x14 ; 0045bfb6
        ;   Label: LAB_0045bfb6
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045bfba
    MOV dword ptr [EDX + 0x1687e8c],EAX ; 0045bfbd | g_VertexNormals
    IMUL EDX,dword ptr [EBP + -0x30],0x14 ; 0045bfc3
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045bfc7
    MOV dword ptr [EDX + 0x1687e90],EAX ; 0045bfca | DAT_01687e90
    IMUL EDX,dword ptr [EBP + -0x30],0x14 ; 0045bfd0
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045bfd4
    MOV dword ptr [EDX + 0x1687e94],EAX ; 0045bfd7 | DAT_01687e94
    JMP 0x0045be88                      ; 0045bfdd
        ;   XREF to: 0045be88 (UNCONDITIONAL_JUMP)  ; LAB_0045be88
        ;   Label: LAB_0045bfdd
    MOV ESP,EBP                         ; 0045bfe2
        ;   Label: LAB_0045bfe2
    POP EBP                             ; 0045bfe4
    POP EDI                             ; 0045bfe5
    POP ESI                             ; 0045bfe6
    POP EBX                             ; 0045bfe7
    RET                                 ; 0045bfe8

