; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_y_plane
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456d0b
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 00456628
;
; Referenced Globals:
;   void* PTR_caseD_1_00454ac4 = 00454b84
;   void* PTR_caseD_3_00454acc = 00454b69
;   uint g_CubeClipStage1Count
;   CVector3f[16] g_ClipStageMaxYBuffer
;   undefined4 g_ClipStageMaxYBuffer[0].y
;   undefined4 g_ClipStageMaxYBuffer[0].z
;   undefined4 g_ClipStageMaxYBuffer[1].y
;   undefined4 g_ClipStageMaxYBuffer[2].x
;   undefined4 g_ClipStageMaxYBuffer[2].y
;   uint g_CubeClipStage2Count
;   CVector3f[16] g_ClipStageMinYBuffer
;   undefined4 g_ClipStageMinYBuffer[0].y
;   undefined4 g_ClipStageMinYBuffer[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454ad0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
    PUSH ESI                            ; 00454ad1
    PUSH EDI                            ; 00454ad2
    PUSH EBP                            ; 00454ad3
    MOV EBP,ESP                         ; 00454ad4
    SUB ESP,0x8                         ; 00454ad6
    AND ESP,0xfffffff8                  ; 00454ad9
    MOV EBX,dword ptr [0x015c442c]      ; 00454adc | g_CubeClipStage2Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 00454ae2
    MOV dword ptr [ESP],EDX             ; 00454ae5
    MOV EDX,dword ptr [0x015c4368]      ; 00454ae8 | g_CubeClipStage1Count
    XOR EDI,EDI                         ; 00454aee
    TEST EDX,EDX                        ; 00454af0
    JLE 0x00454b77                      ; 00454af2
        ;   XREF to: 00454b77 (CONDITIONAL_JUMP)  ; LAB_00454b77
    MOV ESI,0x15c436c                   ; 00454af8 | g_ClipStageMaxYBuffer
    MOV EAX,[0x015c4368]                ; 00454afd | g_CubeClipStage1Count
        ;   Label: LAB_00454afd
    LEA ECX,[EDI + 0x1]                 ; 00454b02
    CMP ECX,EAX                         ; 00454b05
    JNZ 0x00454b0b                      ; 00454b07
        ;   XREF to: 00454b0b (CONDITIONAL_JUMP)  ; LAB_00454b0b
    XOR ECX,EAX                         ; 00454b09
    IMUL ECX,ECX,0xc                    ; 00454b0b
        ;   Label: LAB_00454b0b
    MOV EAX,0x15c436c                   ; 00454b0e | g_ClipStageMaxYBuffer
    FLD float ptr [ESI + 0x4]           ; 00454b13 | g_ClipStageMaxYBuffer[0].y | g_ClipStageMaxYBuffer[1].y
    ADD EAX,ECX                         ; 00454b16
    MOV EDX,ESI                         ; 00454b18 | g_ClipStageMaxYBuffer
    MOV dword ptr [ESP + 0x4],EAX       ; 00454b1a | g_ClipStageMaxYBuffer[2].x
    XOR ECX,ECX                         ; 00454b1e
    FCOMP float ptr [ESP]               ; 00454b20
    FNSTSW AX                           ; 00454b23
    SAHF                                ; 00454b25
    JNC 0x00454b2d                      ; 00454b26
        ;   XREF to: 00454b2d (CONDITIONAL_JUMP)  ; LAB_00454b2d
    MOV ECX,0x1                         ; 00454b28
    MOV EAX,dword ptr [ESP + 0x4]       ; 00454b2d
        ;   Label: LAB_00454b2d
    FLD float ptr [EAX + 0x4]           ; 00454b31 | g_ClipStageMaxYBuffer[0].y | g_ClipStageMaxYBuffer[2].y
    FCOMP float ptr [ESP]               ; 00454b34
    FNSTSW AX                           ; 00454b37
    SAHF                                ; 00454b39
    JNC 0x00454b3f                      ; 00454b3a
        ;   XREF to: 00454b3f (CONDITIONAL_JUMP)  ; LAB_00454b3f
    OR CL,0x2                           ; 00454b3c
    CMP ECX,0x3                         ; 00454b3f
        ;   Label: LAB_00454b3f
    JA 0x00454b69                       ; 00454b42
        ;   XREF to: 00454b69 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x454ac0]  ; 00454b44 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00454b4b
        ;   Label: caseD_0
    ADD ECX,0x15c4430                   ; 00454b4e | g_ClipStageMinYBuffer
    CMP ECX,EDX                         ; 00454b54
    JZ 0x00454b68                       ; 00454b56
        ;   XREF to: 00454b68 (CONDITIONAL_JUMP)  ; LAB_00454b68
    MOV EAX,dword ptr [EDX]             ; 00454b58 | g_ClipStageMaxYBuffer
    MOV dword ptr [ECX],EAX             ; 00454b5a | g_ClipStageMinYBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454b5c | g_ClipStageMaxYBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00454b5f | g_ClipStageMinYBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454b62 | g_ClipStageMaxYBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00454b65 | g_ClipStageMinYBuffer[0].z
    INC EBX                             ; 00454b68
        ;   Label: LAB_00454b68
    MOV ECX,dword ptr [0x015c4368]      ; 00454b69 | g_CubeClipStage1Count
        ;   Label: caseD_3
    INC EDI                             ; 00454b6f
    ADD ESI,0xc                         ; 00454b70
    CMP EDI,ECX                         ; 00454b73
    JL 0x00454afd                       ; 00454b75
        ;   XREF to: 00454afd (CONDITIONAL_JUMP)  ; LAB_00454afd
    MOV dword ptr [0x015c442c],EBX      ; 00454b77 | g_CubeClipStage2Count
        ;   Label: LAB_00454b77
    MOV ESP,EBP                         ; 00454b7d
    POP EBP                             ; 00454b7f
    POP EDI                             ; 00454b80
    POP ESI                             ; 00454b81
    POP EBX                             ; 00454b82
    RET                                 ; 00454b83
    IMUL ECX,EBX,0xc                    ; 00454b84
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00454b87
    SUB ESP,0x8                         ; 00454b8a
    FSTP double ptr [ESP]               ; 00454b8d
    PUSH 0x0                            ; 00454b90
    PUSH 0x0                            ; 00454b92
    PUSH 0xbff00000                     ; 00454b94
    PUSH 0x0                            ; 00454b99
    PUSH 0x0                            ; 00454b9b
    PUSH 0x0                            ; 00454b9d
    ADD ECX,0x15c4430                   ; 00454b9f | g_ClipStageMinYBuffer
    PUSH ECX                            ; 00454ba5
    PUSH EDX                            ; 00454ba6 | g_ClipStageMaxYBuffer
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00454ba7
    PUSH EAX                            ; 00454bab
    MOV dword ptr [0x015c442c],EBX      ; 00454bac | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454bb2
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c442c]      ; 00454bb7 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 00454bbd
    JMP 0x00454b68                      ; 00454bc0
        ;   XREF to: 00454b68 (UNCONDITIONAL_JUMP)  ; LAB_00454b68
    IMUL ECX,EBX,0xc                    ; 00454bc2
        ;   Label: caseD_2
    ADD ECX,0x15c4430                   ; 00454bc5 | g_ClipStageMinYBuffer
    CMP ECX,EDX                         ; 00454bcb
    JZ 0x00454bdf                       ; 00454bcd
        ;   XREF to: 00454bdf (CONDITIONAL_JUMP)  ; LAB_00454bdf
    MOV EAX,dword ptr [EDX]             ; 00454bcf | g_ClipStageMaxYBuffer
    MOV dword ptr [ECX],EAX             ; 00454bd1 | g_ClipStageMinYBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454bd3 | g_ClipStageMaxYBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00454bd6 | g_ClipStageMinYBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454bd9 | g_ClipStageMaxYBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00454bdc | g_ClipStageMinYBuffer[0].z
    INC EBX                             ; 00454bdf
        ;   Label: LAB_00454bdf
    IMUL ECX,EBX,0xc                    ; 00454be0
    FLD float ptr [ESP]                 ; 00454be3
    SUB ESP,0x8                         ; 00454be6
    FSTP double ptr [ESP]               ; 00454be9
    PUSH 0x0                            ; 00454bec
    PUSH 0x0                            ; 00454bee
    PUSH 0xbff00000                     ; 00454bf0
    PUSH 0x0                            ; 00454bf5
    PUSH 0x0                            ; 00454bf7
    PUSH 0x0                            ; 00454bf9
    ADD ECX,0x15c4430                   ; 00454bfb | g_ClipStageMinYBuffer
    PUSH ECX                            ; 00454c01
    MOV ECX,dword ptr [ESP + 0x28]      ; 00454c02
    PUSH ECX                            ; 00454c06
    PUSH EDX                            ; 00454c07 | g_ClipStageMaxYBuffer
    MOV dword ptr [0x015c442c],EBX      ; 00454c08 | g_CubeClipStage2Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454c0e
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c442c]      ; 00454c13 | g_CubeClipStage2Count
    ADD ESP,0x2c                        ; 00454c19
    JMP 0x00454b68                      ; 00454c1c
        ;   XREF to: 00454b68 (UNCONDITIONAL_JUMP)  ; LAB_00454b68

