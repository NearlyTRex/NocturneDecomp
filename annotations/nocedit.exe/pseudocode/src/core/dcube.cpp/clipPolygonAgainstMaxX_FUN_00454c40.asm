; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_x_plane
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
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
;   undefined4 DAT_015c4434
;   undefined4 DAT_015c4438
;   undefined4 DAT_015c443c
;   undefined4 DAT_015c4448
;   uint g_CubeClipStage3Count
;   CVector3f[16] g_ClipStageMaxXBuffer
;   undefined4 DAT_015c44f8
;   undefined4 DAT_015c44fc
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
    MOV EBX,dword ptr [0x015c44f0]      ; 00454c4c | uint g_CubeClipStage3Count
    MOV EDX,dword ptr [0x015c442c]      ; 00454c52 | uint g_CubeClipStage2Count
    XOR ESI,ESI                         ; 00454c58
    TEST EDX,EDX                        ; 00454c5a
    JLE 0x00454cdd                      ; 00454c5c | LAB_00454cdd
        ;   XREF to: 00454cdd (CONDITIONAL_JUMP)
    MOV EDI,0x15c4430                   ; 00454c62 | CVector3f[16] g_ClipStageMinYBuffer
    MOV EAX,[0x015c442c]                ; 00454c67 | uint g_CubeClipStage2Count
        ;   Label: LAB_00454c67
    LEA ECX,[ESI + 0x1]                 ; 00454c6c
    CMP ECX,EAX                         ; 00454c6f
    JNZ 0x00454c75                      ; 00454c71 | LAB_00454c75
        ;   XREF to: 00454c75 (CONDITIONAL_JUMP)
    XOR ECX,EAX                         ; 00454c73
    IMUL ECX,ECX,0xc                    ; 00454c75
        ;   Label: LAB_00454c75
    MOV EAX,0x15c4430                   ; 00454c78 | CVector3f[16] g_ClipStageMinYBuffer
    FLD float ptr [EDI]                 ; 00454c7d | CVector3f[16] g_ClipStageMinYBuffer
    ADD EAX,ECX                         ; 00454c7f
    MOV EDX,EDI                         ; 00454c81 | CVector3f[16] g_ClipStageMinYBuffer
    MOV dword ptr [ESP],EAX             ; 00454c83 | DAT_015c4448
    XOR ECX,ECX                         ; 00454c86
    FCOMP float ptr [EBP + 0x14]        ; 00454c88
    FNSTSW AX                           ; 00454c8b
    SAHF                                ; 00454c8d
    JBE 0x00454c95                      ; 00454c8e | LAB_00454c95
        ;   XREF to: 00454c95 (CONDITIONAL_JUMP)
    MOV ECX,0x1                         ; 00454c90
    MOV EAX,dword ptr [ESP]             ; 00454c95
        ;   Label: LAB_00454c95
    FLD float ptr [EAX]                 ; 00454c98 | CVector3f[16] g_ClipStageMinYBuffer
    FCOMP float ptr [EBP + 0x14]        ; 00454c9a
    FNSTSW AX                           ; 00454c9d
    SAHF                                ; 00454c9f
    JBE 0x00454ca5                      ; 00454ca0 | LAB_00454ca5
        ;   XREF to: 00454ca5 (CONDITIONAL_JUMP)
    OR CL,0x2                           ; 00454ca2
    CMP ECX,0x3                         ; 00454ca5
        ;   Label: LAB_00454ca5
    JA 0x00454ccf                       ; 00454ca8 | caseD_3
        ;   XREF to: 00454ccf (CONDITIONAL_JUMP)
    JMP dword ptr [ECX*0x4 + 0x454c24]  ; 00454caa | void * PTR_caseD_3_00454c30 | PTR_caseD_1_00454c28 = 00454cea
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00454cb1
        ;   Label: caseD_0
    ADD ECX,0x15c44f4                   ; 00454cb4 | CVector3f[16] g_ClipStageMaxXBuffer
    CMP ECX,EDX                         ; 00454cba
    JZ 0x00454cce                       ; 00454cbc | LAB_00454cce
        ;   XREF to: 00454cce (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 00454cbe | CVector3f[16] g_ClipStageMinYBuffer
    MOV dword ptr [ECX],EAX             ; 00454cc0 | CVector3f[16] g_ClipStageMaxXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454cc2 | DAT_015c4434
    MOV dword ptr [ECX + 0x4],EAX       ; 00454cc5 | DAT_015c44f8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454cc8 | DAT_015c4438
    MOV dword ptr [ECX + 0x8],EAX       ; 00454ccb | DAT_015c44fc
    INC EBX                             ; 00454cce
        ;   Label: LAB_00454cce
    MOV ECX,dword ptr [0x015c442c]      ; 00454ccf | uint g_CubeClipStage2Count
        ;   Label: caseD_3
    INC ESI                             ; 00454cd5
    ADD EDI,0xc                         ; 00454cd6
    CMP ESI,ECX                         ; 00454cd9
    JL 0x00454c67                       ; 00454cdb | LAB_00454c67
        ;   XREF to: 00454c67 (CONDITIONAL_JUMP)
    MOV dword ptr [0x015c44f0],EBX      ; 00454cdd | uint g_CubeClipStage3Count
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
    ADD ECX,0x15c44f4                   ; 00454d07 | CVector3f[16] g_ClipStageMaxXBuffer
    PUSH ECX                            ; 00454d0d
    PUSH EDX                            ; 00454d0e | CVector3f[16] g_ClipStageMinYBuffer
    MOV EAX,dword ptr [ESP + 0x28]      ; 00454d0f
    PUSH EAX                            ; 00454d13
    MOV dword ptr [0x015c44f0],EBX      ; 00454d14 | uint g_CubeClipStage3Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454d1a | void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x015c44f0]      ; 00454d1f | uint g_CubeClipStage3Count
    ADD ESP,0x2c                        ; 00454d25
    JMP 0x00454cce                      ; 00454d28 | LAB_00454cce
        ;   XREF to: 00454cce (UNCONDITIONAL_JUMP)
    IMUL ECX,EBX,0xc                    ; 00454d2a
        ;   Label: caseD_2
    ADD ECX,0x15c44f4                   ; 00454d2d | CVector3f[16] g_ClipStageMaxXBuffer
    CMP ECX,EDX                         ; 00454d33
    JZ 0x00454d47                       ; 00454d35 | LAB_00454d47
        ;   XREF to: 00454d47 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 00454d37 | CVector3f[16] g_ClipStageMinYBuffer
    MOV dword ptr [ECX],EAX             ; 00454d39 | CVector3f[16] g_ClipStageMaxXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454d3b | DAT_015c4434
    MOV dword ptr [ECX + 0x4],EAX       ; 00454d3e | DAT_015c44f8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454d41 | DAT_015c4438
    MOV dword ptr [ECX + 0x8],EAX       ; 00454d44 | DAT_015c44fc
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
    ADD ECX,0x15c44f4                   ; 00454d65 | CVector3f[16] g_ClipStageMaxXBuffer
    PUSH ECX                            ; 00454d6b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00454d6c
    PUSH ECX                            ; 00454d70
    PUSH EDX                            ; 00454d71 | CVector3f[16] g_ClipStageMinYBuffer
    MOV dword ptr [0x015c44f0],EBX      ; 00454d72 | uint g_CubeClipStage3Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454d78 | void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x015c44f0]      ; 00454d7d | uint g_CubeClipStage3Count
    ADD ESP,0x2c                        ; 00454d83
    JMP 0x00454cce                      ; 00454d86 | LAB_00454cce
        ;   XREF to: 00454cce (UNCONDITIONAL_JUMP)

