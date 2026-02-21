; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCube *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,uchar texture_id)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
; uchar            Stack[0x14]:1   texture_id
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004957d1
;
; Referenced Globals:
;   TerminatedCString s_d_0061a7b7
;   uint g_CubeInputTriangleCount
;   CVector3f[16] g_CubeInputTriangleBuffer
;   undefined4 g_CubeInputTriangleBuffer[0].y
;   undefined4 g_CubeInputTriangleBuffer[0].z
;   undefined4 g_CubeInputTriangleBuffer[1].x
;   undefined4 g_CubeInputTriangleBuffer[1].y
;   undefined4 g_CubeInputTriangleBuffer[1].z
;   undefined4 g_CubeInputTriangleBuffer[2].x
;   undefined4 g_CubeInputTriangleBuffer[2].y
;   undefined4 g_CubeInputTriangleBuffer[2].z
;   uint g_CubeClipStage1Count
;   uint g_CubeClipStage2Count
;   uint g_CubeClipStage3Count
;   uint g_CubeClipStage4Count
;   ... and 29 more
;
; Called Functions:
;   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
;   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
;   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
;   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
;   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
;   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456af0
        ;   Label: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
    PUSH ESI                            ; 00456af1
    PUSH EDI                            ; 00456af2
    PUSH EBP                            ; 00456af3
    SUB ESP,0x4                         ; 00456af4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00456af7
    MOV EDX,0x3                         ; 00456afb
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00456b00
    MOV dword ptr [0x015c42a4],EDX      ; 00456b04 | g_CubeInputTriangleCount
    CMP ECX,0x15c42a8                   ; 00456b0a | g_CubeInputTriangleBuffer
    JNZ 0x00456ca9                      ; 00456b10
        ;   XREF to: 00456ca9 (CONDITIONAL_JUMP)  ; LAB_00456ca9
    MOV ESI,dword ptr [ESP + 0x20]      ; 00456b16
        ;   Label: LAB_00456b16
    CMP ESI,0x15c42b4                   ; 00456b1a | g_CubeInputTriangleBuffer[1].x
    JZ 0x00456b3e                       ; 00456b20
        ;   XREF to: 00456b3e (CONDITIONAL_JUMP)  ; LAB_00456b3e
    MOV EAX,ESI                         ; 00456b22
    FLD float ptr [EAX]                 ; 00456b24
    FLD float ptr [EAX + 0x8]           ; 00456b26
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456b29
    MOV dword ptr [0x015c42b8],EDX      ; 00456b2c | g_CubeInputTriangleBuffer[1].y
    FSTP float ptr [0x015c42bc]         ; 00456b32 | g_CubeInputTriangleBuffer[1].z
    FSTP float ptr [0x015c42b4]         ; 00456b38 | g_CubeInputTriangleBuffer[1].x
    MOV EDI,dword ptr [ESP + 0x24]      ; 00456b3e
        ;   Label: LAB_00456b3e
    CMP EDI,0x15c42c0                   ; 00456b42 | g_CubeInputTriangleBuffer[2].x
    JZ 0x00456b66                       ; 00456b48
        ;   XREF to: 00456b66 (CONDITIONAL_JUMP)  ; LAB_00456b66
    MOV EAX,EDI                         ; 00456b4a
    FLD float ptr [EAX]                 ; 00456b4c
    FLD float ptr [EAX + 0x8]           ; 00456b4e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456b51
    MOV dword ptr [0x015c42c4],EDX      ; 00456b54 | g_CubeInputTriangleBuffer[2].y
    FSTP float ptr [0x015c42c8]         ; 00456b5a | g_CubeInputTriangleBuffer[2].z
    FSTP float ptr [0x015c42c0]         ; 00456b60 | g_CubeInputTriangleBuffer[2].x
    MOV EBP,0xffffffff                  ; 00456b66
        ;   Label: LAB_00456b66
    MOV EDX,dword ptr [0x015c42a4]      ; 00456b6b | g_CubeInputTriangleCount
    XOR EAX,EAX                         ; 00456b71
    XOR EDI,EDI                         ; 00456b73
    MOV dword ptr [ESP],EAX             ; 00456b75
    TEST EDX,EDX                        ; 00456b78
    JLE 0x00456bf4                      ; 00456b7a
        ;   XREF to: 00456bf4 (CONDITIONAL_JUMP)  ; LAB_00456bf4
    MOV ESI,0x15c42a8                   ; 00456b80 | g_CubeInputTriangleBuffer
    FLD float ptr [ESI]                 ; 00456b85 | g_CubeInputTriangleBuffer | g_CubeInputTriangleBuffer[1].x
        ;   Label: LAB_00456b85
    MOV ECX,ESI                         ; 00456b87
    XOR EDX,EDX                         ; 00456b89
    FCOMP float ptr [EBX + 0x14]        ; 00456b8b
    FNSTSW AX                           ; 00456b8e
    SAHF                                ; 00456b90
    JBE 0x00456b98                      ; 00456b91
        ;   XREF to: 00456b98 (CONDITIONAL_JUMP)  ; LAB_00456b98
    MOV EDX,0x1                         ; 00456b93
    FLD float ptr [ECX + 0x4]           ; 00456b98 | g_CubeInputTriangleBuffer[0].y | g_CubeInputTriangleBuffer[1].y
        ;   Label: LAB_00456b98
    FCOMP float ptr [EBX + 0x18]        ; 00456b9b
    FNSTSW AX                           ; 00456b9e
    SAHF                                ; 00456ba0
    JBE 0x00456ba6                      ; 00456ba1
        ;   XREF to: 00456ba6 (CONDITIONAL_JUMP)  ; LAB_00456ba6
    OR DL,0x2                           ; 00456ba3
    FLD float ptr [ECX + 0x8]           ; 00456ba6 | g_CubeInputTriangleBuffer[0].z | g_CubeInputTriangleBuffer[1].z
        ;   Label: LAB_00456ba6
    FCOMP float ptr [EBX + 0x1c]        ; 00456ba9
    FNSTSW AX                           ; 00456bac
    SAHF                                ; 00456bae
    JBE 0x00456bb4                      ; 00456baf
        ;   XREF to: 00456bb4 (CONDITIONAL_JUMP)  ; LAB_00456bb4
    OR DL,0x4                           ; 00456bb1
    FLD float ptr [ECX]                 ; 00456bb4 | g_CubeInputTriangleBuffer | g_CubeInputTriangleBuffer[1].x
        ;   Label: LAB_00456bb4
    FCOMP float ptr [EBX + 0x8]         ; 00456bb6
    FNSTSW AX                           ; 00456bb9
    SAHF                                ; 00456bbb
    JNC 0x00456bc1                      ; 00456bbc
        ;   XREF to: 00456bc1 (CONDITIONAL_JUMP)  ; LAB_00456bc1
    OR DL,0x8                           ; 00456bbe
    FLD float ptr [ECX + 0x4]           ; 00456bc1 | g_CubeInputTriangleBuffer[0].y
        ;   Label: LAB_00456bc1
    FCOMP float ptr [EBX + 0xc]         ; 00456bc4
    FNSTSW AX                           ; 00456bc7
    SAHF                                ; 00456bc9
    JNC 0x00456bcf                      ; 00456bca
        ;   XREF to: 00456bcf (CONDITIONAL_JUMP)  ; LAB_00456bcf
    OR DL,0x10                          ; 00456bcc
    FLD float ptr [ECX + 0x8]           ; 00456bcf | g_CubeInputTriangleBuffer[0].z
        ;   Label: LAB_00456bcf
    FCOMP float ptr [EBX + 0x10]        ; 00456bd2
    FNSTSW AX                           ; 00456bd5
    SAHF                                ; 00456bd7
    JNC 0x00456bdd                      ; 00456bd8
        ;   XREF to: 00456bdd (CONDITIONAL_JUMP)  ; LAB_00456bdd
    OR DL,0x20                          ; 00456bda
    MOV ECX,dword ptr [ESP]             ; 00456bdd
        ;   Label: LAB_00456bdd
    MOV EAX,[0x015c42a4]                ; 00456be0 | g_CubeInputTriangleCount
    ADD ESI,0xc                         ; 00456be5
    INC EDI                             ; 00456be8
    OR ECX,EDX                          ; 00456be9
    AND EBP,EDX                         ; 00456beb
    MOV dword ptr [ESP],ECX             ; 00456bed
    CMP EDI,EAX                         ; 00456bf0
    JL 0x00456b85                       ; 00456bf2
        ;   XREF to: 00456b85 (CONDITIONAL_JUMP)  ; LAB_00456b85
    CMP dword ptr [ESP],0x0             ; 00456bf4
        ;   Label: LAB_00456bf4
    JNZ 0x00456cca                      ; 00456bf8
        ;   XREF to: 00456cca (CONDITIONAL_JUMP)  ; LAB_00456cca
    MOV ECX,0x3                         ; 00456bfe
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00456c03
    MOV dword ptr [0x015c473c],ECX      ; 00456c07 | g_CubeClippedTriangleCount
    CMP EBX,0x15c4740                   ; 00456c0d | g_CubeClippedTriangleBuffer
    JZ 0x00456c31                       ; 00456c13
        ;   XREF to: 00456c31 (CONDITIONAL_JUMP)  ; LAB_00456c31
    MOV EAX,EBX                         ; 00456c15
    FLD float ptr [EAX]                 ; 00456c17
    FLD float ptr [EAX + 0x8]           ; 00456c19
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456c1c
    MOV dword ptr [0x015c4744],EDX      ; 00456c1f | g_CubeClippedTriangleBuffer[0].y
    FSTP float ptr [0x015c4748]         ; 00456c25 | g_CubeClippedTriangleBuffer[0].z
    FSTP float ptr [0x015c4740]         ; 00456c2b | g_CubeClippedTriangleBuffer
    MOV ESI,dword ptr [ESP + 0x20]      ; 00456c31
        ;   Label: LAB_00456c31
    CMP ESI,0x15c474c                   ; 00456c35 | g_CubeClippedTriangleBuffer[1].x
    JZ 0x00456c59                       ; 00456c3b
        ;   XREF to: 00456c59 (CONDITIONAL_JUMP)  ; LAB_00456c59
    MOV EAX,ESI                         ; 00456c3d
    FLD float ptr [EAX]                 ; 00456c3f
    FLD float ptr [EAX + 0x8]           ; 00456c41
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456c44
    MOV dword ptr [0x015c4750],EDX      ; 00456c47 | g_CubeClippedTriangleBuffer[1].y
    FSTP float ptr [0x015c4754]         ; 00456c4d | g_CubeClippedTriangleBuffer[1].z
    FSTP float ptr [0x015c474c]         ; 00456c53 | g_CubeClippedTriangleBuffer[1].x
    MOV EDI,dword ptr [ESP + 0x24]      ; 00456c59
        ;   Label: LAB_00456c59
    CMP EDI,0x15c4758                   ; 00456c5d | g_CubeClippedTriangleBuffer[2].x
    JZ 0x00456c81                       ; 00456c63
        ;   XREF to: 00456c81 (CONDITIONAL_JUMP)  ; LAB_00456c81
    MOV EAX,EDI                         ; 00456c65
    FLD float ptr [EAX]                 ; 00456c67
    FLD float ptr [EAX + 0x8]           ; 00456c69
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456c6c
    MOV dword ptr [0x015c475c],EDX      ; 00456c6f | g_CubeClippedTriangleBuffer[2].y
    FSTP float ptr [0x015c4760]         ; 00456c75 | g_CubeClippedTriangleBuffer[2].z
    FSTP float ptr [0x015c4758]         ; 00456c7b | g_CubeClippedTriangleBuffer[2].x
    CMP dword ptr [0x015c473c],0x3      ; 00456c81 | g_CubeClippedTriangleCount
        ;   Label: LAB_00456c81
    JL 0x00456ca1                       ; 00456c88
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    MOV EBX,0xc                         ; 00456c8a
    XOR ESI,ESI                         ; 00456c8f
    MOV EAX,[0x015c473c]                ; 00456c91 | g_CubeClippedTriangleCount
        ;   Label: LAB_00456c91
    SUB EAX,0x2                         ; 00456c96
    CMP ESI,EAX                         ; 00456c99
    JL 0x00456d8a                       ; 00456c9b
        ;   XREF to: 00456d8a (CONDITIONAL_JUMP)  ; LAB_00456d8a
    ADD ESP,0x4                         ; 00456ca1
        ;   Label: LAB_00456ca1
    POP EBP                             ; 00456ca4
    POP EDI                             ; 00456ca5
    POP ESI                             ; 00456ca6
    POP EBX                             ; 00456ca7
    RET                                 ; 00456ca8
    MOV EAX,ECX                         ; 00456ca9
        ;   Label: LAB_00456ca9
    FLD float ptr [EAX]                 ; 00456cab
    FLD float ptr [EAX + 0x8]           ; 00456cad
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456cb0
    MOV dword ptr [0x015c42ac],EDX      ; 00456cb3 | g_CubeInputTriangleBuffer[0].y
    FSTP float ptr [0x015c42b0]         ; 00456cb9 | g_CubeInputTriangleBuffer[0].z
    FSTP float ptr [0x015c42a8]         ; 00456cbf | g_CubeInputTriangleBuffer
    JMP 0x00456b16                      ; 00456cc5
        ;   XREF to: 00456b16 (UNCONDITIONAL_JUMP)  ; LAB_00456b16
    TEST EBP,EBP                        ; 00456cca
        ;   Label: LAB_00456cca
    JNZ 0x00456ca1                      ; 00456ccc
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0x18]         ; 00456cce
    MOV dword ptr [0x015c4368],EBP      ; 00456cd1 | g_CubeClipStage1Count
    MOV dword ptr [0x015c442c],EBP      ; 00456cd7 | g_CubeClipStage2Count
    MOV dword ptr [0x015c44f0],EBP      ; 00456cdd | g_CubeClipStage3Count
    MOV dword ptr [0x015c45b4],EBP      ; 00456ce3 | g_CubeClipStage4Count
    MOV dword ptr [0x015c4678],EBP      ; 00456ce9 | g_CubeClipStage5Count
    MOV dword ptr [0x015c473c],EBP      ; 00456cef | g_CubeClippedTriangleCount
    CALL core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970 ; 00456cf5
        ;   XREF to: 00454970 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)
    MOV ECX,dword ptr [0x015c4368]      ; 00456cfa | g_CubeClipStage1Count
    ADD ESP,0x4                         ; 00456d00
    CMP ECX,0x3                         ; 00456d03
    JL 0x00456ca1                       ; 00456d06
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0xc]          ; 00456d08
    CALL core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0 ; 00456d0b
        ;   XREF to: 00454ad0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)
    MOV ESI,dword ptr [0x015c442c]      ; 00456d10 | g_CubeClipStage2Count
    ADD ESP,0x4                         ; 00456d16
    CMP ESI,0x3                         ; 00456d19
    JL 0x00456ca1                       ; 00456d1c
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0x14]         ; 00456d1e
    CALL core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40 ; 00456d21
        ;   XREF to: 00454c40 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)
    MOV EDI,dword ptr [0x015c44f0]      ; 00456d26 | g_CubeClipStage3Count
    ADD ESP,0x4                         ; 00456d2c
    CMP EDI,0x3                         ; 00456d2f
    JL 0x00456ca1                       ; 00456d32
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0x8]          ; 00456d38
    CALL core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0 ; 00456d3b
        ;   XREF to: 00454da0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)
    MOV EBP,dword ptr [0x015c45b4]      ; 00456d40 | g_CubeClipStage4Count
    ADD ESP,0x4                         ; 00456d46
    CMP EBP,0x3                         ; 00456d49
    JL 0x00456ca1                       ; 00456d4c
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0x10]         ; 00456d52
    CALL core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00 ; 00456d55
        ;   XREF to: 00454f00 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)
    MOV EAX,[0x015c4678]                ; 00456d5a | g_CubeClipStage5Count
    ADD ESP,0x4                         ; 00456d5f
    CMP EAX,0x3                         ; 00456d62
    JL 0x00456ca1                       ; 00456d65
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    PUSH dword ptr [EBX + 0x1c]         ; 00456d6b
    CALL core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070 ; 00456d6e
        ;   XREF to: 00455070 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)
    MOV EDX,dword ptr [0x015c473c]      ; 00456d73 | g_CubeClippedTriangleCount
    ADD ESP,0x4                         ; 00456d79
    CMP EDX,0x3                         ; 00456d7c
    JL 0x00456ca1                       ; 00456d7f
        ;   XREF to: 00456ca1 (CONDITIONAL_JUMP)  ; LAB_00456ca1
    JMP 0x00456c81                      ; 00456d85
        ;   XREF to: 00456c81 (UNCONDITIONAL_JUMP)  ; LAB_00456c81
    MOV EDX,dword ptr [0x01626408]      ; 00456d8a | g_VertexCount
        ;   Label: LAB_00456d8a
    IMUL EAX,EDX,0x14                   ; 00456d90
    FLD float ptr [0x015c4740]          ; 00456d93 | g_CubeClippedTriangleBuffer
    FLD float ptr [0x015c4744]          ; 00456d99 | g_CubeClippedTriangleBuffer[0].y
    FLD float ptr [0x015c4748]          ; 00456d9f | g_CubeClippedTriangleBuffer[0].z
    FXCH ST2                            ; 00456da5
    FSTP float ptr [EAX + 0x162640c]    ; 00456da7 | g_LoadedVertices
    FSTP float ptr [EAX + 0x1626410]    ; 00456dad | DAT_01626410
    LEA ECX,[EDX + 0x1]                 ; 00456db3
    FSTP float ptr [EAX + 0x1626414]    ; 00456db6 | g_LoadedVertices[0].vertex.z
    IMUL EAX,ECX,0x14                   ; 00456dbc
    FLD float ptr [EBX + 0x15c4740]     ; 00456dbf | g_CubeClippedTriangleBuffer[1].x
    FLD float ptr [EBX + 0x15c4744]     ; 00456dc5 | g_CubeClippedTriangleBuffer[1].y
    FLD float ptr [EBX + 0x15c4748]     ; 00456dcb | g_CubeClippedTriangleBuffer[1].z
    LEA EDI,[EDX + 0x2]                 ; 00456dd1
    FXCH ST2                            ; 00456dd4
    FSTP float ptr [EAX + 0x162640c]    ; 00456dd6 | g_LoadedVertices
    FSTP float ptr [EAX + 0x1626410]    ; 00456ddc | DAT_01626410
    FSTP float ptr [EAX + 0x1626414]    ; 00456de2 | g_LoadedVertices[0].vertex.z
    IMUL EAX,EDI,0x14                   ; 00456de8
    FLD float ptr [EBX + 0x15c474c]     ; 00456deb | g_CubeClippedTriangleBuffer[2].x
    FLD float ptr [EBX + 0x15c4750]     ; 00456df1 | g_CubeClippedTriangleBuffer[2].y
    FLD float ptr [EBX + 0x15c4754]     ; 00456df7 | g_CubeClippedTriangleBuffer[2].z
    MOV EBP,dword ptr [0x016e990c]      ; 00456dfd | g_PolygonCount
    FXCH ST2                            ; 00456e03
    FSTP float ptr [EAX + 0x162640c]    ; 00456e05 | g_LoadedVertices
    FSTP float ptr [EAX + 0x1626410]    ; 00456e0b | DAT_01626410
    FSTP float ptr [EAX + 0x1626414]    ; 00456e11 | g_LoadedVertices[0].vertex.z
    IMUL EAX,EBP,0x184                  ; 00456e17
    MOV dword ptr [EAX + 0x16e99c8],EDX ; 00456e1d | DAT_016e99c8
    MOV dword ptr [EAX + 0x16e99cc],ECX ; 00456e23 | DAT_016e99cc
    MOV dword ptr [EAX + 0x16e99d0],EDI ; 00456e29 | DAT_016e99d0
    XOR EDX,EDX                         ; 00456e2f
    MOV dword ptr [EAX + 0x16e9a08],EDX ; 00456e31 | DAT_016e9a08
    MOV dword ptr [EAX + 0x16e9a48],EDX ; 00456e37 | DAT_016e9a48
    MOV dword ptr [EAX + 0x16e9a0c],EDX ; 00456e3d | DAT_016e9a0c
    MOV dword ptr [EAX + 0x16e9a4c],EDX ; 00456e43 | DAT_016e9a4c
    MOV dword ptr [EAX + 0x16e9a10],EDX ; 00456e49 | DAT_016e9a10
    MOV dword ptr [EAX + 0x16e9a50],EDX ; 00456e4f | DAT_016e9a50
    XOR DL,DL                           ; 00456e55
    MOV EBP,0x3                         ; 00456e57
    MOV byte ptr [EAX + 0x16e9964],DL   ; 00456e5c | DAT_016e9964
    XOR EDX,EDX                         ; 00456e62
    MOV dword ptr [EAX + 0x16e99b4],EBP ; 00456e64 | DAT_016e99b4
    MOV DL,byte ptr [ESP + 0x28]        ; 00456e6a
    MOV EBP,0x1                         ; 00456e6e
    PUSH EDX                            ; 00456e73
    MOV dword ptr [EAX + 0x16e9910],EBP ; 00456e74 | g_ModelPolygonData
    ADD EAX,0x16e9910                   ; 00456e7a | g_ModelPolygonData
    PUSH 0x61a7b7                       ; 00456e7f | = "%d"
    ADD EAX,0x4                         ; 00456e84
    PUSH EAX                            ; 00456e87
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00456e88
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDI,dword ptr [0x016e990c]      ; 00456e8d | g_PolygonCount
    IMUL EAX,EDI,0x184                  ; 00456e93
    ADD EBX,0xc                         ; 00456e99
    INC ESI                             ; 00456e9c
    XOR EBP,EBP                         ; 00456e9d
    ADD ESP,0xc                         ; 00456e9f
    MOV dword ptr [EAX + 0x16e9a88],EBP ; 00456ea2 | DAT_016e9a88
    MOV EAX,[0x01626408]                ; 00456ea8 | g_VertexCount
    LEA EDX,[EDI + 0x1]                 ; 00456ead
    ADD EAX,0x3                         ; 00456eb0
    MOV dword ptr [0x016e990c],EDX      ; 00456eb3 | g_PolygonCount
    MOV [0x01626408],EAX                ; 00456eb9 | g_VertexCount
    JMP 0x00456c91                      ; 00456ebe
        ;   XREF to: 00456c91 (UNCONDITIONAL_JUMP)  ; LAB_00456c91

