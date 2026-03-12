; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_z_plane
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456d6e
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 004566ae
;
; Referenced Globals:
;   void* PTR_caseD_1_00455058 = 00455124
;   void* PTR_caseD_3_00455060 = 00455109
;   uint g_CubeClipStage5Count
;   CVector3f[16] g_ClipStageMinZBuffer
;   undefined4 DAT_015c4680
;   undefined4 g_ClipStageMinZBuffer[0].z
;   undefined4 DAT_015c4690
;   undefined4 DAT_015c4694
;   undefined4 DAT_015c469c
;   uint g_CubeClippedTriangleCount
;   CVector3f[16] g_CubeClippedTriangleBuffer
;   undefined4 g_CubeClippedTriangleBuffer[0].y
;   undefined4 g_CubeClippedTriangleBuffer[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455070
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
    PUSH ESI                            ; 00455071
    PUSH EDI                            ; 00455072
    PUSH EBP                            ; 00455073
    MOV EBP,ESP                         ; 00455074
    SUB ESP,0x8                         ; 00455076
    AND ESP,0xfffffff8                  ; 00455079
    MOV EBX,dword ptr [0x015c473c]      ; 0045507c | g_CubeClippedTriangleCount
    MOV EDX,dword ptr [EBP + 0x14]      ; 00455082
    MOV dword ptr [ESP],EDX             ; 00455085
    MOV EDX,dword ptr [0x015c4678]      ; 00455088 | g_CubeClipStage5Count
    XOR EDI,EDI                         ; 0045508e
    TEST EDX,EDX                        ; 00455090
    JLE 0x00455117                      ; 00455092
        ;   XREF to: 00455117 (CONDITIONAL_JUMP)  ; LAB_00455117
    MOV ESI,0x15c467c                   ; 00455098 | g_ClipStageMinZBuffer
    MOV EAX,[0x015c4678]                ; 0045509d | g_CubeClipStage5Count
        ;   Label: LAB_0045509d
    LEA ECX,[EDI + 0x1]                 ; 004550a2
    CMP ECX,EAX                         ; 004550a5
    JNZ 0x004550ab                      ; 004550a7
        ;   XREF to: 004550ab (CONDITIONAL_JUMP)  ; LAB_004550ab
    XOR ECX,EAX                         ; 004550a9
    IMUL ECX,ECX,0xc                    ; 004550ab
        ;   Label: LAB_004550ab
    MOV EAX,0x15c467c                   ; 004550ae | g_ClipStageMinZBuffer
    FLD float ptr [ESI + 0x8]           ; 004550b3 | g_ClipStageMinZBuffer[0].z | DAT_015c4690
    ADD EAX,ECX                         ; 004550b6
    MOV EDX,ESI                         ; 004550b8 | g_ClipStageMinZBuffer
    MOV dword ptr [ESP + 0x4],EAX       ; 004550ba | DAT_015c4694
    XOR ECX,ECX                         ; 004550be
    FCOMP float ptr [ESP]               ; 004550c0
    FNSTSW AX                           ; 004550c3
    SAHF                                ; 004550c5
    JBE 0x004550cd                      ; 004550c6
        ;   XREF to: 004550cd (CONDITIONAL_JUMP)  ; LAB_004550cd
    MOV ECX,0x1                         ; 004550c8
    MOV EAX,dword ptr [ESP + 0x4]       ; 004550cd
        ;   Label: LAB_004550cd
    FLD float ptr [EAX + 0x8]           ; 004550d1 | g_ClipStageMinZBuffer[0].z | DAT_015c469c
    FCOMP float ptr [ESP]               ; 004550d4
    FNSTSW AX                           ; 004550d7
    SAHF                                ; 004550d9
    JBE 0x004550df                      ; 004550da
        ;   XREF to: 004550df (CONDITIONAL_JUMP)  ; LAB_004550df
    OR CL,0x2                           ; 004550dc
    CMP ECX,0x3                         ; 004550df
        ;   Label: LAB_004550df
    JA 0x00455109                       ; 004550e2
        ;   XREF to: 00455109 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x455054]  ; 004550e4 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004550eb
        ;   Label: caseD_0
    ADD ECX,0x15c4740                   ; 004550ee | g_CubeClippedTriangleBuffer
    CMP ECX,EDX                         ; 004550f4
    JZ 0x00455108                       ; 004550f6
        ;   XREF to: 00455108 (CONDITIONAL_JUMP)  ; LAB_00455108
    MOV EAX,dword ptr [EDX]             ; 004550f8 | g_ClipStageMinZBuffer
    MOV dword ptr [ECX],EAX             ; 004550fa | g_CubeClippedTriangleBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 004550fc | DAT_015c4680
    MOV dword ptr [ECX + 0x4],EAX       ; 004550ff | g_CubeClippedTriangleBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455102 | g_ClipStageMinZBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00455105 | g_CubeClippedTriangleBuffer[0].z
    INC EBX                             ; 00455108
        ;   Label: LAB_00455108
    MOV ECX,dword ptr [0x015c4678]      ; 00455109 | g_CubeClipStage5Count
        ;   Label: caseD_3
    INC EDI                             ; 0045510f
    ADD ESI,0xc                         ; 00455110
    CMP EDI,ECX                         ; 00455113
    JL 0x0045509d                       ; 00455115
        ;   XREF to: 0045509d (CONDITIONAL_JUMP)  ; LAB_0045509d
    MOV dword ptr [0x015c473c],EBX      ; 00455117 | g_CubeClippedTriangleCount
        ;   Label: LAB_00455117
    MOV ESP,EBP                         ; 0045511d
    POP EBP                             ; 0045511f
    POP EDI                             ; 00455120
    POP ESI                             ; 00455121
    POP EBX                             ; 00455122
    RET                                 ; 00455123
    IMUL ECX,EBX,0xc                    ; 00455124
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00455127
    SUB ESP,0x8                         ; 0045512a
    FSTP double ptr [ESP]               ; 0045512d
    PUSH 0xbff00000                     ; 00455130
    PUSH 0x0                            ; 00455135
    PUSH 0x0                            ; 00455137
    PUSH 0x0                            ; 00455139
    PUSH 0x0                            ; 0045513b
    PUSH 0x0                            ; 0045513d
    ADD ECX,0x15c4740                   ; 0045513f | g_CubeClippedTriangleBuffer
    PUSH ECX                            ; 00455145
    PUSH EDX                            ; 00455146 | g_ClipStageMinZBuffer
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00455147
    PUSH EAX                            ; 0045514b
    MOV dword ptr [0x015c473c],EBX      ; 0045514c | g_CubeClippedTriangleCount
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00455152
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c473c]      ; 00455157 | g_CubeClippedTriangleCount
    ADD ESP,0x2c                        ; 0045515d
    JMP 0x00455108                      ; 00455160
        ;   XREF to: 00455108 (UNCONDITIONAL_JUMP)  ; LAB_00455108
    IMUL ECX,EBX,0xc                    ; 00455162
        ;   Label: caseD_2
    ADD ECX,0x15c4740                   ; 00455165 | g_CubeClippedTriangleBuffer
    CMP ECX,EDX                         ; 0045516b
    JZ 0x0045517f                       ; 0045516d
        ;   XREF to: 0045517f (CONDITIONAL_JUMP)  ; LAB_0045517f
    MOV EAX,dword ptr [EDX]             ; 0045516f | g_ClipStageMinZBuffer
    MOV dword ptr [ECX],EAX             ; 00455171 | g_CubeClippedTriangleBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455173 | DAT_015c4680
    MOV dword ptr [ECX + 0x4],EAX       ; 00455176 | g_CubeClippedTriangleBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455179 | g_ClipStageMinZBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 0045517c | g_CubeClippedTriangleBuffer[0].z
    INC EBX                             ; 0045517f
        ;   Label: LAB_0045517f
    IMUL ECX,EBX,0xc                    ; 00455180
    FLD float ptr [ESP]                 ; 00455183
    SUB ESP,0x8                         ; 00455186
    FSTP double ptr [ESP]               ; 00455189
    PUSH 0xbff00000                     ; 0045518c
    PUSH 0x0                            ; 00455191
    PUSH 0x0                            ; 00455193
    PUSH 0x0                            ; 00455195
    PUSH 0x0                            ; 00455197
    PUSH 0x0                            ; 00455199
    ADD ECX,0x15c4740                   ; 0045519b | g_CubeClippedTriangleBuffer
    PUSH ECX                            ; 004551a1
    MOV ECX,dword ptr [ESP + 0x28]      ; 004551a2
    PUSH ECX                            ; 004551a6
    PUSH EDX                            ; 004551a7 | g_ClipStageMinZBuffer
    MOV dword ptr [0x015c473c],EBX      ; 004551a8 | g_CubeClippedTriangleCount
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 004551ae
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c473c]      ; 004551b3 | g_CubeClippedTriangleCount
    ADD ESP,0x2c                        ; 004551b9
    JMP 0x00455108                      ; 004551bc
        ;   XREF to: 00455108 (UNCONDITIONAL_JUMP)  ; LAB_00455108

