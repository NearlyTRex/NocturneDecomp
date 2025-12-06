; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20(int vertex_index_1, int vertex_index_2, int vertex_index_3, int vertex_index_4)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index_1
; int              Stack[0x8]:4   vertex_index_2
; int              Stack[0xc]:4   vertex_index_3
; int              Stack[0x10]:4   vertex_index_4
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_generateShell_FUN_00468f20 at 00469123
;
; Referenced Globals:
;   TerminatedCString s_rustplat_raw_0061ce7e
;   double g_UVScaleFactor = 256
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   undefined4 DAT_016e9a08
;   undefined4 DAT_016e9a0c
;   undefined4 DAT_016e9a10
;   undefined4 DAT_016e9a14
;   ... and 4 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468d20
        ;   Label: shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
    PUSH ESI                            ; 00468d21
    PUSH EDI                            ; 00468d22
    PUSH EBP                            ; 00468d23
    MOV EBP,ESP                         ; 00468d24
    SUB ESP,0x10                        ; 00468d26
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00468d2c | int g_PolygonCount
    MOV EDX,0x16e9910                   ; 00468d36 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EDX,EAX                         ; 00468d3b
    MOV dword ptr [EBP + -0x4],EDX      ; 00468d3d
    INC dword ptr [0x016e990c]          ; 00468d40 | int g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468d46
    MOV dword ptr [EAX],0x2             ; 00468d49 | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOV EAX,0x61ce7e                    ; 00468d4f | = "rustplat.raw" | s_rustplat_raw_0061ce7e = rustplat.raw
    PUSH EAX                            ; 00468d54 | = "rustplat.raw" | s_rustplat_raw_0061ce7e = rustplat.raw
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468d55
    ADD EAX,0x4                         ; 00468d58
    PUSH EAX                            ; 00468d5b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00468d5c | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00468d61
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468d64
    MOV dword ptr [EAX + 0xa4],0x4      ; 00468d67 | DAT_016e99b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468d71
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468d74
    MOV dword ptr [EDX + 0xb8],EAX      ; 00468d77 | DAT_016e99c8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00468d7d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468d80
    MOV dword ptr [EDX + 0xbc],EAX      ; 00468d83 | DAT_016e99cc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00468d89
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468d8c
    MOV dword ptr [EDX + 0xc0],EAX      ; 00468d8f | DAT_016e99d0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00468d95
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468d98
    MOV dword ptr [EDX + 0xc4],EAX      ; 00468d9b | DAT_016e99d4
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 00468da1
    FLD float ptr [EAX + 0x1626418]     ; 00468da5 | DAT_01626418
    FMUL double ptr [0x0061ce8e]        ; 00468dab | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468db1
    FSTP float ptr [EAX + 0xf8]         ; 00468db4 | DAT_016e9a08
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 00468dba
    FLD float ptr [EAX + 0x162641c]     ; 00468dbe | DAT_0162641c
    FMUL double ptr [0x0061ce8e]        ; 00468dc4 | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468dca
    FSTP float ptr [EAX + 0x138]        ; 00468dcd | DAT_016e9a48
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 00468dd3
    FLD float ptr [EAX + 0x1626418]     ; 00468dd7 | DAT_01626418
    FMUL double ptr [0x0061ce8e]        ; 00468ddd | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468de3
    FSTP float ptr [EAX + 0xfc]         ; 00468de6 | DAT_016e9a0c
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 00468dec
    FLD float ptr [EAX + 0x162641c]     ; 00468df0 | DAT_0162641c
    FMUL double ptr [0x0061ce8e]        ; 00468df6 | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468dfc
    FSTP float ptr [EAX + 0x13c]        ; 00468dff | DAT_016e9a4c
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 00468e05
    FLD float ptr [EAX + 0x1626418]     ; 00468e09 | DAT_01626418
    FMUL double ptr [0x0061ce8e]        ; 00468e0f | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468e15
    FSTP float ptr [EAX + 0x100]        ; 00468e18 | DAT_016e9a10
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 00468e1e
    FLD float ptr [EAX + 0x162641c]     ; 00468e22 | DAT_0162641c
    FMUL double ptr [0x0061ce8e]        ; 00468e28 | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468e2e
    FSTP float ptr [EAX + 0x140]        ; 00468e31 | DAT_016e9a50
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 00468e37
    FLD float ptr [EAX + 0x1626418]     ; 00468e3b | DAT_01626418
    FMUL double ptr [0x0061ce8e]        ; 00468e41 | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468e47
    FSTP float ptr [EAX + 0x104]        ; 00468e4a | DAT_016e9a14
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 00468e50
    FLD float ptr [EAX + 0x162641c]     ; 00468e54 | DAT_0162641c
    FMUL double ptr [0x0061ce8e]        ; 00468e5a | double g_UVScaleFactor
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468e60
    FSTP float ptr [EAX + 0x144]        ; 00468e63 | DAT_016e9a54
    MOV dword ptr [EBP + -0x8],0x0      ; 00468e69
    JMP 0x00468e78                      ; 00468e70 | LAB_00468e78
        ;   XREF to: 00468e78 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468e72
        ;   Label: LAB_00468e72
    INC dword ptr [EBP + -0x8]          ; 00468e75
    CMP dword ptr [EBP + -0x8],0x4      ; 00468e78
        ;   Label: LAB_00468e78
    JGE 0x00468f13                      ; 00468e7c | LAB_00468f13
        ;   XREF to: 00468f13 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468e82
    SHL EAX,0x2                         ; 00468e85
    ADD EAX,dword ptr [EBP + -0x4]      ; 00468e88
    MOV EAX,dword ptr [EAX + 0xf8]      ; 00468e8b
    MOV dword ptr [EBP + -0x10],EAX     ; 00468e91
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468e94
    SHL EAX,0x2                         ; 00468e97
    ADD EAX,dword ptr [EBP + -0x4]      ; 00468e9a
    MOV EAX,dword ptr [EAX + 0x138]     ; 00468e9d
    MOV dword ptr [EBP + -0xc],EAX      ; 00468ea3
    CMP dword ptr [EBP + -0x10],0x40800000 ; 00468ea6
    JGE 0x00468eb6                      ; 00468ead | LAB_00468eb6
        ;   XREF to: 00468eb6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x40800000 ; 00468eaf
    CMP dword ptr [EBP + -0x10],0x437b0000 ; 00468eb6
        ;   Label: LAB_00468eb6
    JLE 0x00468ec6                      ; 00468ebd | LAB_00468ec6
        ;   XREF to: 00468ec6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x437b0000 ; 00468ebf
    CMP dword ptr [EBP + -0xc],0x40800000 ; 00468ec6
        ;   Label: LAB_00468ec6
    JGE 0x00468ed6                      ; 00468ecd | LAB_00468ed6
        ;   XREF to: 00468ed6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x40800000 ; 00468ecf
    CMP dword ptr [EBP + -0xc],0x437b0000 ; 00468ed6
        ;   Label: LAB_00468ed6
    JLE 0x00468ee6                      ; 00468edd | LAB_00468ee6
        ;   XREF to: 00468ee6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x437b0000 ; 00468edf
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468ee6
        ;   Label: LAB_00468ee6
    SHL EAX,0x2                         ; 00468ee9
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468eec
    ADD EDX,EAX                         ; 00468eef
    MOV EAX,dword ptr [EBP + -0x10]     ; 00468ef1
    MOV dword ptr [EDX + 0xf8],EAX      ; 00468ef4
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468efa
    SHL EAX,0x2                         ; 00468efd
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468f00
    ADD EDX,EAX                         ; 00468f03
    MOV EAX,dword ptr [EBP + -0xc]      ; 00468f05
    MOV dword ptr [EDX + 0x138],EAX     ; 00468f08
    JMP 0x00468e72                      ; 00468f0e | LAB_00468e72
        ;   XREF to: 00468e72 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00468f13
        ;   Label: LAB_00468f13
    POP EBP                             ; 00468f15
    POP EDI                             ; 00468f16
    POP ESI                             ; 00468f17
    POP EBX                             ; 00468f18
    RET                                 ; 00468f19

