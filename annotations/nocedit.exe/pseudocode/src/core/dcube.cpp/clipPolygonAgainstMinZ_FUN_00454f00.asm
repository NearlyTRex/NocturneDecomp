; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)
;
; Parameters:
; float            Stack[0x4]:4   min_z_plane
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 at 00456d55
;   core_dcube.cpp_clipTriangleToAABB_FUN_00456400 at 0045668c
;
; Referenced Globals:
;   void* PTR_caseD_1_00454ef4 = 00454fb4
;   void* PTR_caseD_3_00454efc = 00454f99
;   uint g_CubeClipStage4Count
;   CVector3f[16] g_ClipStageMinXBuffer
;   undefined4 DAT_015c45bc
;   undefined4 DAT_015c45c0
;   undefined4 DAT_015c45cc
;   undefined4 DAT_015c45d0
;   undefined4 DAT_015c45d8
;   uint g_CubeClipStage5Count
;   CVector3f[16] g_ClipStageMinZBuffer
;   undefined4 DAT_015c4680
;   undefined4 g_ClipStageMinZBuffer[0].z
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454f00
        ;   Label: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
    PUSH ESI                            ; 00454f01
    PUSH EDI                            ; 00454f02
    PUSH EBP                            ; 00454f03
    MOV EBP,ESP                         ; 00454f04
    SUB ESP,0x8                         ; 00454f06
    AND ESP,0xfffffff8                  ; 00454f09
    MOV EBX,dword ptr [0x015c4678]      ; 00454f0c | g_CubeClipStage5Count
    MOV EDX,dword ptr [EBP + 0x14]      ; 00454f12
    MOV dword ptr [ESP],EDX             ; 00454f15
    MOV EDX,dword ptr [0x015c45b4]      ; 00454f18 | g_CubeClipStage4Count
    XOR EDI,EDI                         ; 00454f1e
    TEST EDX,EDX                        ; 00454f20
    JLE 0x00454fa7                      ; 00454f22
        ;   XREF to: 00454fa7 (CONDITIONAL_JUMP)  ; LAB_00454fa7
    MOV ESI,0x15c45b8                   ; 00454f28 | g_ClipStageMinXBuffer
    MOV EAX,[0x015c45b4]                ; 00454f2d | g_CubeClipStage4Count
        ;   Label: LAB_00454f2d
    LEA ECX,[EDI + 0x1]                 ; 00454f32
    CMP ECX,EAX                         ; 00454f35
    JNZ 0x00454f3b                      ; 00454f37
        ;   XREF to: 00454f3b (CONDITIONAL_JUMP)  ; LAB_00454f3b
    XOR ECX,EAX                         ; 00454f39
    IMUL ECX,ECX,0xc                    ; 00454f3b
        ;   Label: LAB_00454f3b
    MOV EAX,0x15c45b8                   ; 00454f3e | g_ClipStageMinXBuffer
    FLD float ptr [ESI + 0x8]           ; 00454f43 | DAT_015c45c0 | DAT_015c45cc
    ADD EAX,ECX                         ; 00454f46
    MOV EDX,ESI                         ; 00454f48 | g_ClipStageMinXBuffer
    MOV dword ptr [ESP + 0x4],EAX       ; 00454f4a | DAT_015c45d0
    XOR ECX,ECX                         ; 00454f4e
    FCOMP float ptr [ESP]               ; 00454f50
    FNSTSW AX                           ; 00454f53
    SAHF                                ; 00454f55
    JNC 0x00454f5d                      ; 00454f56
        ;   XREF to: 00454f5d (CONDITIONAL_JUMP)  ; LAB_00454f5d
    MOV ECX,0x1                         ; 00454f58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00454f5d
        ;   Label: LAB_00454f5d
    FLD float ptr [EAX + 0x8]           ; 00454f61 | DAT_015c45c0 | DAT_015c45d8
    FCOMP float ptr [ESP]               ; 00454f64
    FNSTSW AX                           ; 00454f67
    SAHF                                ; 00454f69
    JNC 0x00454f6f                      ; 00454f6a
        ;   XREF to: 00454f6f (CONDITIONAL_JUMP)  ; LAB_00454f6f
    OR CL,0x2                           ; 00454f6c
    CMP ECX,0x3                         ; 00454f6f
        ;   Label: LAB_00454f6f
    JA 0x00454f99                       ; 00454f72
        ;   XREF to: 00454f99 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x454ef0]  ; 00454f74 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 00454f7b
        ;   Label: caseD_0
    ADD ECX,0x15c467c                   ; 00454f7e | g_ClipStageMinZBuffer
    CMP ECX,EDX                         ; 00454f84
    JZ 0x00454f98                       ; 00454f86
        ;   XREF to: 00454f98 (CONDITIONAL_JUMP)  ; LAB_00454f98
    MOV EAX,dword ptr [EDX]             ; 00454f88 | g_ClipStageMinXBuffer
    MOV dword ptr [ECX],EAX             ; 00454f8a | g_ClipStageMinZBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00454f8c | DAT_015c45bc
    MOV dword ptr [ECX + 0x4],EAX       ; 00454f8f | DAT_015c4680
    MOV EAX,dword ptr [EDX + 0x8]       ; 00454f92 | DAT_015c45c0
    MOV dword ptr [ECX + 0x8],EAX       ; 00454f95 | g_ClipStageMinZBuffer[0].z
    INC EBX                             ; 00454f98
        ;   Label: LAB_00454f98
    MOV ECX,dword ptr [0x015c45b4]      ; 00454f99 | g_CubeClipStage4Count
        ;   Label: caseD_3
    INC EDI                             ; 00454f9f
    ADD ESI,0xc                         ; 00454fa0
    CMP EDI,ECX                         ; 00454fa3
    JL 0x00454f2d                       ; 00454fa5
        ;   XREF to: 00454f2d (CONDITIONAL_JUMP)  ; LAB_00454f2d
    MOV dword ptr [0x015c4678],EBX      ; 00454fa7 | g_CubeClipStage5Count
        ;   Label: LAB_00454fa7
    MOV ESP,EBP                         ; 00454fad
    POP EBP                             ; 00454faf
    POP EDI                             ; 00454fb0
    POP ESI                             ; 00454fb1
    POP EBX                             ; 00454fb2
    RET                                 ; 00454fb3
    IMUL ECX,EBX,0xc                    ; 00454fb4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 00454fb7
    SUB ESP,0x8                         ; 00454fba
    FSTP double ptr [ESP]               ; 00454fbd
    PUSH 0xbff00000                     ; 00454fc0
    PUSH 0x0                            ; 00454fc5
    PUSH 0x0                            ; 00454fc7
    PUSH 0x0                            ; 00454fc9
    PUSH 0x0                            ; 00454fcb
    PUSH 0x0                            ; 00454fcd
    ADD ECX,0x15c467c                   ; 00454fcf | g_ClipStageMinZBuffer
    PUSH ECX                            ; 00454fd5
    PUSH EDX                            ; 00454fd6 | g_ClipStageMinXBuffer
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00454fd7
    PUSH EAX                            ; 00454fdb
    MOV dword ptr [0x015c4678],EBX      ; 00454fdc | g_CubeClipStage5Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 00454fe2
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c4678]      ; 00454fe7 | g_CubeClipStage5Count
    ADD ESP,0x2c                        ; 00454fed
    JMP 0x00454f98                      ; 00454ff0
        ;   XREF to: 00454f98 (UNCONDITIONAL_JUMP)  ; LAB_00454f98
    IMUL ECX,EBX,0xc                    ; 00454ff2
        ;   Label: caseD_2
    ADD ECX,0x15c467c                   ; 00454ff5 | g_ClipStageMinZBuffer
    CMP ECX,EDX                         ; 00454ffb
    JZ 0x0045500f                       ; 00454ffd
        ;   XREF to: 0045500f (CONDITIONAL_JUMP)  ; LAB_0045500f
    MOV EAX,dword ptr [EDX]             ; 00454fff | g_ClipStageMinXBuffer
    MOV dword ptr [ECX],EAX             ; 00455001 | g_ClipStageMinZBuffer
    MOV EAX,dword ptr [EDX + 0x4]       ; 00455003 | DAT_015c45bc
    MOV dword ptr [ECX + 0x4],EAX       ; 00455006 | DAT_015c4680
    MOV EAX,dword ptr [EDX + 0x8]       ; 00455009 | DAT_015c45c0
    MOV dword ptr [ECX + 0x8],EAX       ; 0045500c | g_ClipStageMinZBuffer[0].z
    INC EBX                             ; 0045500f
        ;   Label: LAB_0045500f
    IMUL ECX,EBX,0xc                    ; 00455010
    FLD float ptr [ESP]                 ; 00455013
    SUB ESP,0x8                         ; 00455016
    FSTP double ptr [ESP]               ; 00455019
    PUSH 0xbff00000                     ; 0045501c
    PUSH 0x0                            ; 00455021
    PUSH 0x0                            ; 00455023
    PUSH 0x0                            ; 00455025
    PUSH 0x0                            ; 00455027
    PUSH 0x0                            ; 00455029
    ADD ECX,0x15c467c                   ; 0045502b | g_ClipStageMinZBuffer
    PUSH ECX                            ; 00455031
    MOV ECX,dword ptr [ESP + 0x28]      ; 00455032
    PUSH ECX                            ; 00455036
    PUSH EDX                            ; 00455037 | g_ClipStageMinXBuffer
    MOV dword ptr [0x015c4678],EBX      ; 00455038 | g_CubeClipStage5Count
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 ; 0045503e
        ;   XREF to: 004547d0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, ...)
    MOV EBX,dword ptr [0x015c4678]      ; 00455043 | g_CubeClipStage5Count
    ADD ESP,0x2c                        ; 00455049
    JMP 0x00454f98                      ; 0045504c
        ;   XREF to: 00454f98 (UNCONDITIONAL_JUMP)  ; LAB_00454f98

