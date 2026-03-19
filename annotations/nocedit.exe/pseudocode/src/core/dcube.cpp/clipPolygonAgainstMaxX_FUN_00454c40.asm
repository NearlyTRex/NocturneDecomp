; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_x_plane
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456d21
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 00456649
;
; Referenced Globals:
;   void* PTR_caseD_1_00454c28 = 00454cea
;   void* PTR_caseD_3_00454c30 = 00454ccf
;   uint g_CubeClipStage2Count
;   CVector3f[16] g_ClipStageMinYBuffer
;   undefined4 g_ClipStageMinYBuffer[0].y
;   undefined4 g_ClipStageMinYBuffer[0].z
;   undefined4 g_ClipStageMinYBuffer[1].x
;   undefined4 g_ClipStageMinYBuffer[2].x
;   uint g_CubeClipStage3Count
;   CVector3f[16] g_ClipStageMaxXBuffer
;   undefined4 g_ClipStageMaxXBuffer[0].y
;   undefined4 g_ClipStageMaxXBuffer[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454c40
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
    PUSH ESI                            ; 00454c41
    PUSH EDI                            ; 00454c42
    PUSH EBP                            ; 00454c43
    MOV EBP,ESP                         ; 00454c44
    SUB ESP,0x4                         ; 00454c46
    AND ESP,0xfffffff8                  ; 00454c49
    MOV EBX,dword ptr [0x015c44f0]      ; 00454c4c | g_CubeClipStage3Count
    MOV EDX,dword ptr [0x015c442c]      ; 00454c52 | g_CubeClipStage2Count
    XOR ESI,ESI                         ; 00454c58
    TEST EDX,EDX                        ; 00454c5a
    JLE 0x00454cdd                      ; 00454c5c
        ;   XREF to: 00454cdd (CONDITIONAL_JUMP)  ; LAB_00454cdd
    MOV EDI,0x15c4430                   ; 00454c62 | g_ClipStageMinYBuffer
    MOV EAX,[0x015c442c]                ; 00454c67 | g_CubeClipStage2Count
        ;   Label: LAB_00454c67
    LEA ECX,[ESI + 0x1]                 ; 00454c6c
    CMP ECX,EAX                         ; 00454c6f
    JNZ 0x00454c75                      ; 00454c71
        ;   XREF to: 00454c75 (CONDITIONAL_JUMP)  ; LAB_00454c75
    XOR ECX,EAX                         ; 00454c73
    IMUL ECX,ECX,0xc                    ; 00454c75
        ;   Label: LAB_00454c75
    MOV EAX,0x15c4430                   ; 00454c78 | g_ClipStageMinYBuffer
    FLD float ptr [EDI]                 ; 00454c7d | g_ClipStageMinYBuffer | g_ClipStageMinYBuffer[1].x
    ADD EAX,ECX                         ; 00454c7f
    MOV EDX,EDI                         ; 00454c81 | g_ClipStageMinYBuffer
    MOV dword ptr [ESP],EAX             ; 00454c83 | g_ClipStageMinYBuffer[2].x
    XOR ECX,ECX                         ; 00454c86
    FCOMP float ptr [EBP + 0x14]        ; 00454c88
    FNSTSW AX                           ; 00454c8b
    SAHF                                ; 00454c8d
    JBE 0x00454c95                      ; 00454c8e
        ;   XREF to: 00454c95 (CONDITIONAL_JUMP)  ; LAB_00454c95
    MOV ECX,0x1                         ; 00454c90
    MOV EAX,dword ptr [ESP]             ; 00454c95
        ;   Label: LAB_00454c95
    FLD float ptr [EAX]                 ; 00454c98 | g_ClipStageMinYBuffer | g_ClipStageMinYBuffer[2].x
    FCOMP float ptr [EBP + 0x14]        ; 00454c9a
    FNSTSW AX                           ; 00454c9d
    SAHF                                ; 00454c9f
    JBE 0x00454ca5                      ; 00454ca0
        ;   XREF to: 00454ca5 (CONDITIONAL_JUMP)  ; LAB_00454ca5
    OR CL,0x2                           ; 00454ca2
    CMP ECX,0x3                         ; 00454ca5
        ;   Label: LAB_00454ca5
    JA 0x00454ccf                       ; 00454ca8
        ;   XREF to: 00454ccf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x454c24]  ; 00454caa | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00454cb1
        ;   Label: caseD_0
    ADD ECX,0x15c44f4                   ; 00454cb4 | g_ClipStageMaxXBuffer
    CMP ECX,EDX                         ; 00454cba
    JZ 0x00454cce                       ; 00454cbc
        ;   XREF to: 00454cce (CONDITIONAL_JUMP)  ; LAB_00454cce
    MOV EAX,dword ptr [EDX]             ; 00454cbe | g_ClipStageMinYBuffer
    MOV dword ptr [ECX],EAX             ; 00454cc0 | g_ClipStageMaxXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454cc2 | g_ClipStageMinYBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00454cc5 | g_ClipStageMaxXBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454cc8 | g_ClipStageMinYBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00454ccb | g_ClipStageMaxXBuffer[0].z
    INC EBX                             ; 00454cce
        ;   Label: LAB_00454cce
    MOV ECX,dword ptr [0x015c442c]      ; 00454ccf | g_CubeClipStage2Count
        ;   Label: caseD_3
    INC ESI                             ; 00454cd5
    ADD EDI,0xc                         ; 00454cd6
    CMP ESI,ECX                         ; 00454cd9
    JL 0x00454c67                       ; 00454cdb
        ;   XREF to: 00454c67 (CONDITIONAL_JUMP)  ; LAB_00454c67
    MOV dword ptr [0x015c44f0],EBX      ; 00454cdd | g_CubeClipStage3Count
        ;   Label: LAB_00454cdd
    MOV ESP,EBP                         ; 00454ce3
    POP EBP                             ; 00454ce5
    POP EDI                             ; 00454ce6
    POP ESI                             ; 00454ce7
    POP EBX                             ; 00454ce8
    RET                                 ; 00454ce9
    IMUL ECX,EBX,0xc                    ; 00454cea
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00454ced
    SUB ESP,0x8                         ; 00454cf0
    FCHS                                ; 00454cf3
    FSTP double ptr [ESP]               ; 00454cf5
    PUSH 0x0                            ; 00454cf8
    PUSH 0x0                            ; 00454cfa
    PUSH 0x0                            ; 00454cfc
    PUSH 0x0                            ; 00454cfe
    PUSH 0x3ff00000                     ; 00454d00
    PUSH 0x0                            ; 00454d05
    ADD ECX,0x15c44f4                   ; 00454d07 | g_ClipStageMaxXBuffer
    PUSH ECX                            ; 00454d0d
    PUSH EDX                            ; 00454d0e | g_ClipStageMinYBuffer
    MOV EAX,dword ptr [ESP + 0x28]      ; 00454d0f
    PUSH EAX                            ; 00454d13
    MOV dword ptr [0x015c44f0],EBX      ; 00454d14 | g_CubeClipStage3Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454d1a
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c44f0]      ; 00454d1f | g_CubeClipStage3Count
    ADD ESP,0x2c                        ; 00454d25
    JMP 0x00454cce                      ; 00454d28
        ;   XREF to: 00454cce (UNCONDITIONAL_JUMP)  ; LAB_00454cce
    IMUL ECX,EBX,0xc                    ; 00454d2a
        ;   Label: caseD_2
    ADD ECX,0x15c44f4                   ; 00454d2d | g_ClipStageMaxXBuffer
    CMP ECX,EDX                         ; 00454d33
    JZ 0x00454d47                       ; 00454d35
        ;   XREF to: 00454d47 (CONDITIONAL_JUMP)  ; LAB_00454d47
    MOV EAX,dword ptr [EDX]             ; 00454d37 | g_ClipStageMinYBuffer
    MOV dword ptr [ECX],EAX             ; 00454d39 | g_ClipStageMaxXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454d3b | g_ClipStageMinYBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00454d3e | g_ClipStageMaxXBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454d41 | g_ClipStageMinYBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00454d44 | g_ClipStageMaxXBuffer[0].z
    INC EBX                             ; 00454d47
        ;   Label: LAB_00454d47
    IMUL ECX,EBX,0xc                    ; 00454d48
    FLD float ptr [EBP + 0x14]          ; 00454d4b
    SUB ESP,0x8                         ; 00454d4e
    FCHS                                ; 00454d51
    FSTP double ptr [ESP]               ; 00454d53
    PUSH 0x0                            ; 00454d56
    PUSH 0x0                            ; 00454d58
    PUSH 0x0                            ; 00454d5a
    PUSH 0x0                            ; 00454d5c
    PUSH 0x3ff00000                     ; 00454d5e
    PUSH 0x0                            ; 00454d63
    ADD ECX,0x15c44f4                   ; 00454d65 | g_ClipStageMaxXBuffer
    PUSH ECX                            ; 00454d6b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00454d6c
    PUSH ECX                            ; 00454d70
    PUSH EDX                            ; 00454d71 | g_ClipStageMinYBuffer
    MOV dword ptr [0x015c44f0],EBX      ; 00454d72 | g_CubeClipStage3Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454d78
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c44f0]      ; 00454d7d | g_CubeClipStage3Count
    ADD ESP,0x2c                        ; 00454d83
    JMP 0x00454cce                      ; 00454d86
        ;   XREF to: 00454cce (UNCONDITIONAL_JUMP)  ; LAB_00454cce

