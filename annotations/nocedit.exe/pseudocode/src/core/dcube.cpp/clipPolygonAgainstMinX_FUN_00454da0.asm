; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_x_plane
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456d3b
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 0045666a
;
; Referenced Globals:
;   void* PTR_caseD_1_00454d90 = 00454e52
;   void* PTR_caseD_3_00454d98 = 00454e37
;   uint g_CubeClipStage3Count
;   CVector3f[16] g_ClipStageMaxXBuffer
;   undefined4 DAT_015c44f8
;   undefined4 DAT_015c44fc
;   undefined4 DAT_015c4500
;   undefined4 DAT_015c450c
;   uint g_CubeClipStage4Count
;   CVector3f[16] g_ClipStageMinXBuffer
;   undefined4 DAT_015c45bc
;   undefined4 DAT_015c45c0
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454da0
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
    PUSH ESI                            ; 00454da1
    PUSH EDI                            ; 00454da2
    PUSH EBP                            ; 00454da3
    MOV EBP,ESP                         ; 00454da4
    SUB ESP,0x8                         ; 00454da6
    AND ESP,0xfffffff8                  ; 00454da9
    MOV EBX,dword ptr [0x015c45b4]      ; 00454dac | g_CubeClipStage4Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 00454db2
    MOV dword ptr [ESP],EDX             ; 00454db5
    MOV EDX,dword ptr [0x015c44f0]      ; 00454db8 | g_CubeClipStage3Count
    XOR EDI,EDI                         ; 00454dbe
    TEST EDX,EDX                        ; 00454dc0
    JLE 0x00454e45                      ; 00454dc2
        ;   XREF to: 00454e45 (CONDITIONAL_JUMP)  ; LAB_00454e45
    MOV ESI,0x15c44f4                   ; 00454dc8 | g_ClipStageMaxXBuffer
    MOV EAX,[0x015c44f0]                ; 00454dcd | g_CubeClipStage3Count
        ;   Label: LAB_00454dcd
    LEA ECX,[EDI + 0x1]                 ; 00454dd2
    CMP ECX,EAX                         ; 00454dd5
    JNZ 0x00454ddb                      ; 00454dd7
        ;   XREF to: 00454ddb (CONDITIONAL_JUMP)  ; LAB_00454ddb
    XOR ECX,EAX                         ; 00454dd9
    IMUL ECX,ECX,0xc                    ; 00454ddb
        ;   Label: LAB_00454ddb
    MOV EAX,0x15c44f4                   ; 00454dde | g_ClipStageMaxXBuffer
    FLD float ptr [ESI]                 ; 00454de3 | g_ClipStageMaxXBuffer | DAT_015c4500
    ADD EAX,ECX                         ; 00454de5
    MOV EDX,ESI                         ; 00454de7 | g_ClipStageMaxXBuffer
    MOV dword ptr [ESP + 0x4],EAX       ; 00454de9 | DAT_015c450c
    XOR ECX,ECX                         ; 00454ded
    FCOMP float ptr [ESP]               ; 00454def
    FNSTSW AX                           ; 00454df2
    SAHF                                ; 00454df4
    JNC 0x00454dfc                      ; 00454df5
        ;   XREF to: 00454dfc (CONDITIONAL_JUMP)  ; LAB_00454dfc
    MOV ECX,0x1                         ; 00454df7
    MOV EAX,dword ptr [ESP + 0x4]       ; 00454dfc
        ;   Label: LAB_00454dfc
    FLD float ptr [EAX]                 ; 00454e00 | g_ClipStageMaxXBuffer | DAT_015c450c
    FCOMP float ptr [ESP]               ; 00454e02
    FNSTSW AX                           ; 00454e05
    SAHF                                ; 00454e07
    JNC 0x00454e0d                      ; 00454e08
        ;   XREF to: 00454e0d (CONDITIONAL_JUMP)  ; LAB_00454e0d
    OR CL,0x2                           ; 00454e0a
    CMP ECX,0x3                         ; 00454e0d
        ;   Label: LAB_00454e0d
    JA 0x00454e37                       ; 00454e10
        ;   XREF to: 00454e37 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x454d8c]  ; 00454e12 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00454e19
        ;   Label: caseD_0
    ADD ECX,0x15c45b8                   ; 00454e1c | g_ClipStageMinXBuffer
    CMP ECX,EDX                         ; 00454e22
    JZ 0x00454e36                       ; 00454e24
        ;   XREF to: 00454e36 (CONDITIONAL_JUMP)  ; LAB_00454e36
    MOV EAX,dword ptr [EDX]             ; 00454e26 | g_ClipStageMaxXBuffer
    MOV dword ptr [ECX],EAX             ; 00454e28 | g_ClipStageMinXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454e2a | DAT_015c44f8
    MOV dword ptr [ECX + 0x4],EAX       ; 00454e2d | DAT_015c45bc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454e30 | DAT_015c44fc
    MOV dword ptr [ECX + 0x8],EAX       ; 00454e33 | DAT_015c45c0
    INC EBX                             ; 00454e36
        ;   Label: LAB_00454e36
    MOV ECX,dword ptr [0x015c44f0]      ; 00454e37 | g_CubeClipStage3Count
        ;   Label: caseD_3
    INC EDI                             ; 00454e3d
    ADD ESI,0xc                         ; 00454e3e
    CMP EDI,ECX                         ; 00454e41
    JL 0x00454dcd                       ; 00454e43
        ;   XREF to: 00454dcd (CONDITIONAL_JUMP)  ; LAB_00454dcd
    MOV dword ptr [0x015c45b4],EBX      ; 00454e45 | g_CubeClipStage4Count
        ;   Label: LAB_00454e45
    MOV ESP,EBP                         ; 00454e4b
    POP EBP                             ; 00454e4d
    POP EDI                             ; 00454e4e
    POP ESI                             ; 00454e4f
    POP EBX                             ; 00454e50
    RET                                 ; 00454e51
    IMUL ECX,EBX,0xc                    ; 00454e52
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00454e55
    SUB ESP,0x8                         ; 00454e58
    FSTP double ptr [ESP]               ; 00454e5b
    PUSH 0x0                            ; 00454e5e
    PUSH 0x0                            ; 00454e60
    PUSH 0x0                            ; 00454e62
    PUSH 0x0                            ; 00454e64
    PUSH 0xbff00000                     ; 00454e66
    PUSH 0x0                            ; 00454e6b
    ADD ECX,0x15c45b8                   ; 00454e6d | g_ClipStageMinXBuffer
    PUSH ECX                            ; 00454e73
    PUSH EDX                            ; 00454e74 | g_ClipStageMaxXBuffer
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00454e75
    PUSH EAX                            ; 00454e79
    MOV dword ptr [0x015c45b4],EBX      ; 00454e7a | g_CubeClipStage4Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454e80
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c45b4]      ; 00454e85 | g_CubeClipStage4Count
    ADD ESP,0x2c                        ; 00454e8b
    JMP 0x00454e36                      ; 00454e8e
        ;   XREF to: 00454e36 (UNCONDITIONAL_JUMP)  ; LAB_00454e36
    IMUL ECX,EBX,0xc                    ; 00454e90
        ;   Label: caseD_2
    ADD ECX,0x15c45b8                   ; 00454e93 | g_ClipStageMinXBuffer
    CMP ECX,EDX                         ; 00454e99
    JZ 0x00454ead                       ; 00454e9b
        ;   XREF to: 00454ead (CONDITIONAL_JUMP)  ; LAB_00454ead
    MOV EAX,dword ptr [EDX]             ; 00454e9d | g_ClipStageMaxXBuffer
    MOV dword ptr [ECX],EAX             ; 00454e9f | g_ClipStageMinXBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454ea1 | DAT_015c44f8
    MOV dword ptr [ECX + 0x4],EAX       ; 00454ea4 | DAT_015c45bc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454ea7 | DAT_015c44fc
    MOV dword ptr [ECX + 0x8],EAX       ; 00454eaa | DAT_015c45c0
    INC EBX                             ; 00454ead
        ;   Label: LAB_00454ead
    IMUL ECX,EBX,0xc                    ; 00454eae
    FLD float ptr [ESP]                 ; 00454eb1
    SUB ESP,0x8                         ; 00454eb4
    FSTP double ptr [ESP]               ; 00454eb7
    PUSH 0x0                            ; 00454eba
    PUSH 0x0                            ; 00454ebc
    PUSH 0x0                            ; 00454ebe
    PUSH 0x0                            ; 00454ec0
    PUSH 0xbff00000                     ; 00454ec2
    PUSH 0x0                            ; 00454ec7
    ADD ECX,0x15c45b8                   ; 00454ec9 | g_ClipStageMinXBuffer
    PUSH ECX                            ; 00454ecf
    MOV ECX,dword ptr [ESP + 0x28]      ; 00454ed0
    PUSH ECX                            ; 00454ed4
    PUSH EDX                            ; 00454ed5 | g_ClipStageMaxXBuffer
    MOV dword ptr [0x015c45b4],EBX      ; 00454ed6 | g_CubeClipStage4Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454edc
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c45b4]      ; 00454ee1 | g_CubeClipStage4Count
    ADD ESP,0x2c                        ; 00454ee7
    JMP 0x00454e36                      ; 00454eea
        ;   XREF to: 00454e36 (UNCONDITIONAL_JUMP)  ; LAB_00454e36

