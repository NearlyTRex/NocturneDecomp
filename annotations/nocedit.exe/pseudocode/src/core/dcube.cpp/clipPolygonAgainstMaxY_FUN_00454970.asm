; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)
;
; Parameters:
; float            Stack[0x4]:4   max_y_plane
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456cf5
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 00456607
;
; Referenced Globals:
;   void* PTR_caseD_1_00454964 = 00454a1c
;   void* PTR_caseD_3_0045496c = 00454a01
;   uint g_CubeInputTriangleCount
;   CVector3f[16] g_CubeInputTriangleBuffer
;   undefined4 g_CubeInputTriangleBuffer[0].y
;   undefined4 g_CubeInputTriangleBuffer[0].z
;   undefined4 g_CubeInputTriangleBuffer[1].x
;   undefined4 g_CubeInputTriangleBuffer[1].y
;   undefined4 g_CubeInputTriangleBuffer[2].x
;   undefined4 g_CubeInputTriangleBuffer[2].y
;   uint g_CubeClipStage1Count
;   CVector3f[16] g_ClipStageMaxYBuffer
;   undefined4 g_ClipStageMaxYBuffer[0].y
;   undefined4 DAT_015c4374
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454970
        ;   Label: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
    PUSH ESI                            ; 00454971
    PUSH EDI                            ; 00454972
    PUSH EBP                            ; 00454973
    MOV EBP,ESP                         ; 00454974
    SUB ESP,0x4                         ; 00454976
    AND ESP,0xfffffff8                  ; 00454979
    MOV EBX,dword ptr [0x015c4368]      ; 0045497c | g_CubeClipStage1Count
    MOV EDX,dword ptr [0x015c42a4]      ; 00454982 | g_CubeInputTriangleCount
    XOR ESI,ESI                         ; 00454988
    TEST EDX,EDX                        ; 0045498a
    JLE 0x00454a0f                      ; 0045498c
        ;   XREF to: 00454a0f (CONDITIONAL_JUMP)  ; LAB_00454a0f
    MOV EDI,0x15c42a8                   ; 00454992 | g_CubeInputTriangleBuffer
    MOV EAX,[0x015c42a4]                ; 00454997 | g_CubeInputTriangleCount
        ;   Label: LAB_00454997
    LEA ECX,[ESI + 0x1]                 ; 0045499c
    CMP ECX,EAX                         ; 0045499f
    JNZ 0x004549a5                      ; 004549a1
        ;   XREF to: 004549a5 (CONDITIONAL_JUMP)  ; LAB_004549a5
    XOR ECX,EAX                         ; 004549a3
    IMUL ECX,ECX,0xc                    ; 004549a5
        ;   Label: LAB_004549a5
    MOV EAX,0x15c42a8                   ; 004549a8 | g_CubeInputTriangleBuffer
    FLD float ptr [EDI + 0x4]           ; 004549ad | g_CubeInputTriangleBuffer[0].y | g_CubeInputTriangleBuffer[1].y
    ADD EAX,ECX                         ; 004549b0
    MOV EDX,EDI                         ; 004549b2 | g_CubeInputTriangleBuffer
    MOV dword ptr [ESP],EAX             ; 004549b4 | g_CubeInputTriangleBuffer[1].x | g_CubeInputTriangleBuffer[2].x
    XOR ECX,ECX                         ; 004549b7
    FCOMP float ptr [EBP + 0x14]        ; 004549b9
    FNSTSW AX                           ; 004549bc
    SAHF                                ; 004549be
    JBE 0x004549c6                      ; 004549bf
        ;   XREF to: 004549c6 (CONDITIONAL_JUMP)  ; LAB_004549c6
    MOV ECX,0x1                         ; 004549c1
    MOV EAX,dword ptr [ESP]             ; 004549c6
        ;   Label: LAB_004549c6
    FLD float ptr [EAX + 0x4]           ; 004549c9 | g_CubeInputTriangleBuffer[0].y | g_CubeInputTriangleBuffer[2].y
    FCOMP float ptr [EBP + 0x14]        ; 004549cc
    FNSTSW AX                           ; 004549cf
    SAHF                                ; 004549d1
    JBE 0x004549d7                      ; 004549d2
        ;   XREF to: 004549d7 (CONDITIONAL_JUMP)  ; LAB_004549d7
    OR CL,0x2                           ; 004549d4
    CMP ECX,0x3                         ; 004549d7
        ;   Label: LAB_004549d7
    JA 0x00454a01                       ; 004549da
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x454960]  ; 004549dc | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 004549e3
        ;   Label: caseD_0
    ADD ECX,0x15c436c                   ; 004549e6 | g_ClipStageMaxYBuffer
    CMP ECX,EDX                         ; 004549ec
    JZ 0x00454a00                       ; 004549ee
        ;   XREF to: 00454a00 (CONDITIONAL_JUMP)  ; LAB_00454a00
    MOV EAX,dword ptr [EDX]             ; 004549f0 | g_CubeInputTriangleBuffer
    MOV dword ptr [ECX],EAX             ; 004549f2 | g_ClipStageMaxYBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 004549f4 | g_CubeInputTriangleBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 004549f7 | g_ClipStageMaxYBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 004549fa | g_CubeInputTriangleBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 004549fd | DAT_015c4374
    INC EBX                             ; 00454a00
        ;   Label: LAB_00454a00
    MOV ECX,dword ptr [0x015c42a4]      ; 00454a01 | g_CubeInputTriangleCount
        ;   Label: caseD_3
    INC ESI                             ; 00454a07
    ADD EDI,0xc                         ; 00454a08
    CMP ESI,ECX                         ; 00454a0b
    JL 0x00454997                       ; 00454a0d
        ;   XREF to: 00454997 (CONDITIONAL_JUMP)  ; LAB_00454997
    MOV dword ptr [0x015c4368],EBX      ; 00454a0f | g_CubeClipStage1Count
        ;   Label: LAB_00454a0f
    MOV ESP,EBP                         ; 00454a15
    POP EBP                             ; 00454a17
    POP EDI                             ; 00454a18
    POP ESI                             ; 00454a19
    POP EBX                             ; 00454a1a
    RET                                 ; 00454a1b
    IMUL ECX,EBX,0xc                    ; 00454a1c
        ;   Label: caseD_1
    FLD float ptr [EBP + 0x14]          ; 00454a1f
    SUB ESP,0x8                         ; 00454a22
    FCHS                                ; 00454a25
    FSTP double ptr [ESP]               ; 00454a27
    PUSH 0x0                            ; 00454a2a
    PUSH 0x0                            ; 00454a2c
    PUSH 0x3ff00000                     ; 00454a2e
    PUSH 0x0                            ; 00454a33
    PUSH 0x0                            ; 00454a35
    PUSH 0x0                            ; 00454a37
    ADD ECX,0x15c436c                   ; 00454a39 | g_ClipStageMaxYBuffer
    PUSH ECX                            ; 00454a3f
    PUSH EDX                            ; 00454a40 | g_CubeInputTriangleBuffer
    MOV EAX,dword ptr [ESP + 0x28]      ; 00454a41
    PUSH EAX                            ; 00454a45
    MOV dword ptr [0x015c4368],EBX      ; 00454a46 | g_CubeClipStage1Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454a4c
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c4368]      ; 00454a51 | g_CubeClipStage1Count
    ADD ESP,0x2c                        ; 00454a57
    JMP 0x00454a00                      ; 00454a5a
        ;   XREF to: 00454a00 (UNCONDITIONAL_JUMP)  ; LAB_00454a00
    IMUL ECX,EBX,0xc                    ; 00454a5c
        ;   Label: caseD_2
    ADD ECX,0x15c436c                   ; 00454a5f | g_ClipStageMaxYBuffer
    CMP ECX,EDX                         ; 00454a65
    JZ 0x00454a79                       ; 00454a67
        ;   XREF to: 00454a79 (CONDITIONAL_JUMP)  ; LAB_00454a79
    MOV EAX,dword ptr [EDX]             ; 00454a69 | g_CubeInputTriangleBuffer
    MOV dword ptr [ECX],EAX             ; 00454a6b | g_ClipStageMaxYBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454a6d | g_CubeInputTriangleBuffer[0].y
    MOV dword ptr [ECX + 0x4],EAX       ; 00454a70 | g_ClipStageMaxYBuffer[0].y
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454a73 | g_CubeInputTriangleBuffer[0].z
    MOV dword ptr [ECX + 0x8],EAX       ; 00454a76 | DAT_015c4374
    INC EBX                             ; 00454a79
        ;   Label: LAB_00454a79
    IMUL ECX,EBX,0xc                    ; 00454a7a
    FLD float ptr [EBP + 0x14]          ; 00454a7d
    SUB ESP,0x8                         ; 00454a80
    FCHS                                ; 00454a83
    FSTP double ptr [ESP]               ; 00454a85
    PUSH 0x0                            ; 00454a88
    PUSH 0x0                            ; 00454a8a
    PUSH 0x3ff00000                     ; 00454a8c
    PUSH 0x0                            ; 00454a91
    PUSH 0x0                            ; 00454a93
    PUSH 0x0                            ; 00454a95
    ADD ECX,0x15c436c                   ; 00454a97 | g_ClipStageMaxYBuffer
    PUSH ECX                            ; 00454a9d
    MOV ECX,dword ptr [ESP + 0x24]      ; 00454a9e
    PUSH ECX                            ; 00454aa2
    PUSH EDX                            ; 00454aa3 | g_CubeInputTriangleBuffer
    MOV dword ptr [0x015c4368],EBX      ; 00454aa4 | g_CubeClipStage1Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454aaa
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c4368]      ; 00454aaf | g_CubeClipStage1Count
    ADD ESP,0x2c                        ; 00454ab5
    JMP 0x00454a00                      ; 00454ab8
        ;   XREF to: 00454a00 (UNCONDITIONAL_JUMP)  ; LAB_00454a00

