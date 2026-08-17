; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipAndRasterize_FUN_00432cd0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[53]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 00406140
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407c8d
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405fe5
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 00408579
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 00408439
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60 at 00406cbd
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80 at 00406ddd
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0 at 00406b3b
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270 at 004082e0
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30 at 00406f82
;   ... and 43 more
;
; Referenced Globals:
;   void* switchdataD_00432c7c = 00432f87
;   void* PTR_caseD_1_00432c80 = 00433259
;   void* PTR_caseD_3_00432c88 = 00432f9a
;   void* switchdataD_00432c8c = 00433024
;   void* PTR_caseD_1_00432c90 = 00433332
;   void* PTR_caseD_3_00432c98 = 00433029
;   void* switchdataD_00432c9c = 004330bd
;   void* PTR_caseD_1_00432ca0 = 004333e1
;   void* PTR_caseD_3_00432ca8 = 004330c2
;   void* switchdataD_00432cac = 00433160
;   void* PTR_caseD_1_00432cb0 = 00433490
;   void* PTR_caseD_3_00432cb8 = 00433165
;   void* switchdataD_00432cbc = 0043362e
;   void* PTR_caseD_3_00432cc8 = 00433673
;   TerminatedCString s_engine_clipper_c_0057ac47
;   ... and 39 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
;   engine_clipper.c_interpolateVertexNearClip_FUN_00431930
;   engine_clipper.c_interpolateVertexRightClip_FUN_00431630
;   engine_clipper.c_interpolateVertexTopClip_FUN_00431830
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0
;   engine_prim.c_renderPolygonSoftware_FUN_004f9dd0
;   engine_special.cpp_drawPolygon2_FUN_00532650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432cd0
        ;   Label: engine_clipper.c_clipAndRasterize_FUN_00432cd0
    PUSH ESI                            ; 00432cd1
    PUSH EDI                            ; 00432cd2
    PUSH EBP                            ; 00432cd3
    SUB ESP,0x140                       ; 00432cd4
    MOV EBX,dword ptr [ESP + 0x154]     ; 00432cda
    MOV EAX,dword ptr [ESP + 0x158]     ; 00432ce1
    CMP dword ptr [0x005b7644],0x0      ; 00432ce8 | INT_005b7644
    JZ 0x00432deb                       ; 00432cef
        ;   XREF to: 00432deb (CONDITIONAL_JUMP)  ; LAB_00432deb
    MOV ECX,0xffffffff                  ; 00432cf5
    MOV dword ptr [ESP + 0x100],EAX     ; 00432cfa
    MOV EBP,EBX                         ; 00432d01
    XOR ESI,ESI                         ; 00432d03
    XOR EDX,EDX                         ; 00432d05
    TEST EBX,EBX                        ; 00432d07
    JLE 0x00432d27                      ; 00432d09
        ;   XREF to: 00432d27 (CONDITIONAL_JUMP)  ; LAB_00432d27
    IMUL EBX,dword ptr [EAX],0x30       ; 00432d0b
        ;   Label: LAB_00432d0b
    MOV EBX,dword ptr [EBX + 0x5c5024]  ; 00432d0e | DAT_005c5024
    TEST EBX,0x80000000                 ; 00432d14
    JZ 0x00432d1d                       ; 00432d1a
        ;   XREF to: 00432d1d (CONDITIONAL_JUMP)  ; LAB_00432d1d
    INC ESI                             ; 00432d1c
    ADD EAX,0x4                         ; 00432d1d
        ;   Label: LAB_00432d1d
    INC EDX                             ; 00432d20
    AND ECX,EBX                         ; 00432d21
    CMP EDX,EBP                         ; 00432d23
    JL 0x00432d0b                       ; 00432d25
        ;   XREF to: 00432d0b (CONDITIONAL_JUMP)  ; LAB_00432d0b
    CMP ESI,EBP                         ; 00432d27
        ;   Label: LAB_00432d27
    JNZ 0x00432d34                      ; 00432d29
        ;   XREF to: 00432d34 (CONDITIONAL_JUMP)  ; LAB_00432d34
    TEST CL,0xff                        ; 00432d2b
    JNZ 0x00432df7                      ; 00432d2e
        ;   XREF to: 00432df7 (CONDITIONAL_JUMP)  ; LAB_00432df7
    TEST ESI,ESI                        ; 00432d34
        ;   Label: LAB_00432d34
    JNZ 0x00432ef8                      ; 00432d36
        ;   XREF to: 00432ef8 (CONDITIONAL_JUMP)  ; LAB_00432ef8
    CMP dword ptr [0x01c02594],0x0      ; 00432d3c | g_UseExternalRenderer
    JZ 0x00432e52                       ; 00432d43
        ;   XREF to: 00432e52 (CONDITIONAL_JUMP)  ; LAB_00432e52
    CMP dword ptr [0x006b0278],0x0      ; 00432d49 | DAT_006b0278
    JNZ 0x00432e52                      ; 00432d50
        ;   XREF to: 00432e52 (CONDITIONAL_JUMP)  ; LAB_00432e52
    XOR EAX,EAX                         ; 00432d56
    TEST EBP,EBP                        ; 00432d58
    JLE 0x00432d80                      ; 00432d5a
        ;   XREF to: 00432d80 (CONDITIONAL_JUMP)  ; LAB_00432d80
    MOV EBX,dword ptr [ESP + 0x100]     ; 00432d5c
    IMUL EDX,dword ptr [EBX],0x30       ; 00432d63
        ;   Label: LAB_00432d63
    INC EAX                             ; 00432d66
    ADD EDX,0x5c5014                    ; 00432d67 | DAT_005c5014
    ADD EBX,0x4                         ; 00432d6d
    MOV dword ptr [EAX*0x4 + 0x767270],EDX ; 00432d70 | DAT_00767274 | DAT_00767278
    CMP EAX,EBP                         ; 00432d77
    JL 0x00432d63                       ; 00432d79
        ;   XREF to: 00432d63 (CONDITIONAL_JUMP)  ; LAB_00432d63
    LEA EAX,[EAX]                       ; 00432d7b
    MOV ECX,ECX                         ; 00432d7e
    CMP dword ptr [0x006b0280],0x0      ; 00432d80 | DAT_006b0280
        ;   Label: LAB_00432d80
    JZ 0x00432e25                       ; 00432d87
        ;   XREF to: 00432e25 (CONDITIONAL_JUMP)  ; LAB_00432e25
    CMP EBP,0x3                         ; 00432d8d
    JLE 0x00432e04                      ; 00432d90
        ;   XREF to: 00432e04 (CONDITIONAL_JUMP)  ; LAB_00432e04
    LEA EAX,[EBP + -0x2]                ; 00432d96
    XOR EBX,EBX                         ; 00432d99
    MOV dword ptr [ESP + 0x128],EAX     ; 00432d9b
    LEA EDI,[EAX*0x4 + 0x0]             ; 00432da2
    XOR ESI,ESI                         ; 00432da9
    TEST EDI,EDI                        ; 00432dab
    JLE 0x00432dd7                      ; 00432dad
        ;   XREF to: 00432dd7 (CONDITIONAL_JUMP)  ; LAB_00432dd7
    MOV EAX,dword ptr [EBX + 0x76727c]  ; 00432daf | DAT_0076727c | DAT_00767280
        ;   Label: LAB_00432daf
    PUSH EAX                            ; 00432db5
    MOV EDX,dword ptr [EBX + 0x767278]  ; 00432db6 | DAT_00767278 | DAT_0076727c
    PUSH EDX                            ; 00432dbc
    MOV ECX,dword ptr [0x00767274]      ; 00432dbd | DAT_00767274
    PUSH ECX                            ; 00432dc3
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00432dc4
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00432dc9
    TEST EAX,EAX                        ; 00432dcc
    JZ 0x00432e01                       ; 00432dce
        ;   XREF to: 00432e01 (CONDITIONAL_JUMP)  ; LAB_00432e01
    ADD EBX,0x4                         ; 00432dd0
        ;   Label: LAB_00432dd0
    CMP EBX,EDI                         ; 00432dd3
    JL 0x00432daf                       ; 00432dd5
        ;   XREF to: 00432daf (CONDITIONAL_JUMP)  ; LAB_00432daf
    CMP ESI,dword ptr [ESP + 0x128]     ; 00432dd7
        ;   Label: LAB_00432dd7
    JNZ 0x00432e25                      ; 00432dde
        ;   XREF to: 00432e25 (CONDITIONAL_JUMP)  ; LAB_00432e25
    ADD ESP,0x140                       ; 00432de0
        ;   Label: LAB_00432de0
    POP EBP                             ; 00432de6
    POP EDI                             ; 00432de7
    POP ESI                             ; 00432de8
    POP EBX                             ; 00432de9
    RET                                 ; 00432dea
    PUSH EBX                            ; 00432deb
        ;   Label: LAB_00432deb
    PUSH EAX                            ; 00432dec
    CALL engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0 ; 00432ded
        ;   XREF to: 004fa2e0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonSoftware_FUN_004fa2e0(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00432df2
    JMP 0x00432de0                      ; 00432df5
        ;   XREF to: 00432de0 (UNCONDITIONAL_JUMP)  ; LAB_00432de0
    XOR EDI,EDI                         ; 00432df7
        ;   Label: LAB_00432df7
    MOV dword ptr [0x00766c70],EDI      ; 00432df9 | DAT_00766c70
    JMP 0x00432de0                      ; 00432dff
        ;   XREF to: 00432de0 (UNCONDITIONAL_JUMP)  ; LAB_00432de0
    INC ESI                             ; 00432e01
        ;   Label: LAB_00432e01
    JMP 0x00432dd0                      ; 00432e02
        ;   XREF to: 00432dd0 (UNCONDITIONAL_JUMP)  ; LAB_00432dd0
    MOV EDX,dword ptr [0x0076727c]      ; 00432e04 | DAT_0076727c
        ;   Label: LAB_00432e04
    PUSH EDX                            ; 00432e0a
    MOV ECX,dword ptr [0x00767278]      ; 00432e0b | DAT_00767278
    PUSH ECX                            ; 00432e11
    MOV EBX,dword ptr [0x00767274]      ; 00432e12 | DAT_00767274
    PUSH EBX                            ; 00432e18
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00432e19
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00432e1e
    TEST EAX,EAX                        ; 00432e21
    JZ 0x00432de0                       ; 00432e23
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    MOV EBX,dword ptr [0x01c039a0]      ; 00432e25 | g_RenderStateFlags
        ;   Label: LAB_00432e25
    PUSH EBX                            ; 00432e2b
    MOV ESI,dword ptr [0x01e52ef8]      ; 00432e2c | g_RenderedTriangleCount
    PUSH EBP                            ; 00432e32
    INC ESI                             ; 00432e33
    PUSH 0x767274                       ; 00432e34 | DAT_00767274
    MOV dword ptr [0x01e52ef8],ESI      ; 00432e39 | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 00432e3f
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00432e44
    ADD ESP,0x140                       ; 00432e47
    POP EBP                             ; 00432e4d
    POP EDI                             ; 00432e4e
    POP ESI                             ; 00432e4f
    POP EBX                             ; 00432e50
    RET                                 ; 00432e51
    XOR ESI,ESI                         ; 00432e52
        ;   Label: LAB_00432e52
    MOV dword ptr [0x00766c70],EBP      ; 00432e54 | DAT_00766c70
    MOV dword ptr [ESP + 0x138],ESI     ; 00432e5a
    TEST EBP,EBP                        ; 00432e61
    JLE 0x00432ed0                      ; 00432e63
        ;   XREF to: 00432ed0 (CONDITIONAL_JUMP)  ; LAB_00432ed0
    MOV EDX,dword ptr [ESP + 0x100]     ; 00432e65
    MOV EBX,0x766c74                    ; 00432e6c | DAT_00766c74
    IMUL ESI,dword ptr [EDX],0x30       ; 00432e71
        ;   Label: LAB_00432e71
    MOV ECX,0x30                        ; 00432e74
    ADD ESI,0x5c5014                    ; 00432e79 | DAT_005c5014
    MOV EDI,EBX                         ; 00432e7f
    TEST EDI,0x7                        ; 00432e81
    JZ 0x00432e8f                       ; 00432e87
        ;   XREF to: 00432e8f (CONDITIONAL_JUMP)  ; LAB_00432e8f
    MOVSD ES:EDI,ESI                    ; 00432e89 | DAT_005c5014 | DAT_00766c74 | DAT_00766ca4
    SUB ECX,0x4                         ; 00432e8a
    JLE 0x00432eac                      ; 00432e8d
        ;   XREF to: 00432eac (CONDITIONAL_JUMP)  ; LAB_00432eac
    SUB ECX,0x8                         ; 00432e8f
        ;   Label: LAB_00432e8f
    JL 0x00432ea0                       ; 00432e92
        ;   XREF to: 00432ea0 (CONDITIONAL_JUMP)  ; LAB_00432ea0
    FILD qword ptr [ESI]                ; 00432e94 | DAT_005c5018 | DAT_005c5020 | DAT_005c5014
    ADD ESI,0x8                         ; 00432e96
    FISTP qword ptr [EDI]               ; 00432e99 | DAT_00766c78 | DAT_00766c80 | DAT_00766ca8
    ADD EDI,0x8                         ; 00432e9b
    JMP 0x00432e8f                      ; 00432e9e
        ;   XREF to: 00432e8f (UNCONDITIONAL_JUMP)  ; LAB_00432e8f
    ADD ECX,0x8                         ; 00432ea0
        ;   Label: LAB_00432ea0
    JLE 0x00432eac                      ; 00432ea3
        ;   XREF to: 00432eac (CONDITIONAL_JUMP)  ; LAB_00432eac
    MOVSD ES:EDI,ESI                    ; 00432ea5 | DAT_005c5020 | DAT_00766c80
    SUB ECX,0x4                         ; 00432ea6
    JLE 0x00432eac                      ; 00432ea9
        ;   XREF to: 00432eac (CONDITIONAL_JUMP)  ; LAB_00432eac
    MOVSD ES:EDI,ESI                    ; 00432eab | DAT_005c5024 | DAT_00766c84
    MOV EAX,dword ptr [ESP + 0x138]     ; 00432eac
        ;   Label: LAB_00432eac
    ADD EDX,0x4                         ; 00432eb3
    INC EAX                             ; 00432eb6
    ADD EBX,0x30                        ; 00432eb7
    MOV dword ptr [ESP + 0x138],EAX     ; 00432eba
    CMP EBP,EAX                         ; 00432ec1
    JG 0x00432e71                       ; 00432ec3
        ;   XREF to: 00432e71 (CONDITIONAL_JUMP)  ; LAB_00432e71
    LEA EAX,[EAX]                       ; 00432ec5
    LEA EDX,[EDX]                       ; 00432ecb
    MOV EBX,EBX                         ; 00432ece
    MOV EBX,dword ptr [0x00766c70]      ; 00432ed0 | DAT_00766c70
        ;   Label: LAB_00432ed0
    CMP EBX,0x2                         ; 00432ed6
    JLE 0x00432de0                      ; 00432ed9
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    PUSH EBX                            ; 00432edf
    PUSH 0x766c74                       ; 00432ee0 | DAT_00766c74
    CALL engine_prim.c_renderPolygonSoftware_FUN_004f9dd0 ; 00432ee5
        ;   XREF to: 004f9dd0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderPolygonSoftware_FUN_004f9dd0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00432eea
    ADD ESP,0x140                       ; 00432eed
    POP EBP                             ; 00432ef3
    POP EDI                             ; 00432ef4
    POP ESI                             ; 00432ef5
    POP EBX                             ; 00432ef6
    RET                                 ; 00432ef7
    XOR EAX,EAX                         ; 00432ef8
        ;   Label: LAB_00432ef8
    TEST EBP,EBP                        ; 00432efa
    JLE 0x00432f20                      ; 00432efc
        ;   XREF to: 00432f20 (CONDITIONAL_JUMP)  ; LAB_00432f20
    MOV EBX,dword ptr [ESP + 0x100]     ; 00432efe
    IMUL EDX,dword ptr [EBX],0x30       ; 00432f05
        ;   Label: LAB_00432f05
    INC EAX                             ; 00432f08
    ADD EDX,0x5c5014                    ; 00432f09 | DAT_005c5014
    ADD EBX,0x4                         ; 00432f0f
    MOV dword ptr [ESP + EAX*0x4 + 0x7c],EDX ; 00432f12
    CMP EAX,EBP                         ; 00432f16
    JL 0x00432f05                       ; 00432f18
        ;   XREF to: 00432f05 (CONDITIONAL_JUMP)  ; LAB_00432f05
    LEA EAX,[EAX]                       ; 00432f1a
    MOV EAX,ESP                         ; 00432f20
        ;   Label: LAB_00432f20
    LEA EDX,[ESP + 0x80]                ; 00432f22
    MOV dword ptr [0x00766c70],EBP      ; 00432f29 | DAT_00766c70
    MOV dword ptr [ESP + 0x108],EBP     ; 00432f2f
    XOR EBX,EBX                         ; 00432f36
    XOR ESI,ESI                         ; 00432f38
    XOR EDI,EDI                         ; 00432f3a
    MOV dword ptr [0x00767b38],EBX      ; 00432f3c | DAT_00767b38
    MOV dword ptr [ESP + 0x104],EAX     ; 00432f42
    MOV dword ptr [ESP + 0x10c],EDI     ; 00432f49
    MOV EBX,dword ptr [EDX + EBP*0x4 + -0x4] ; 00432f50
    TEST EBP,EBP                        ; 00432f54
    JLE 0x00432fb9                      ; 00432f56
        ;   XREF to: 00432fb9 (CONDITIONAL_JUMP)  ; LAB_00432fb9
    LEA EBP,[ESP + 0x80]                ; 00432f58
    MOV EDX,dword ptr [EBX]             ; 00432f5f | DAT_005c5014
        ;   Label: LAB_00432f5f
    MOV ECX,dword ptr [EBX + 0x8]       ; 00432f61 | DAT_005c501c
    MOV EDI,dword ptr [EBP]             ; 00432f64
    XOR EAX,EAX                         ; 00432f67
    CMP EDX,ECX                         ; 00432f69
    JL 0x00432f72                       ; 00432f6b
        ;   XREF to: 00432f72 (CONDITIONAL_JUMP)  ; LAB_00432f72
    MOV EAX,0x1                         ; 00432f6d
    MOV ECX,dword ptr [EDI + 0x8]       ; 00432f72 | DAT_005c501c
        ;   Label: LAB_00432f72
    CMP ECX,dword ptr [EDI]             ; 00432f75 | DAT_005c5014
    JG 0x00432f7b                       ; 00432f77
        ;   XREF to: 00432f7b (CONDITIONAL_JUMP)  ; LAB_00432f7b
    OR AL,0x2                           ; 00432f79
    CMP EAX,0x3                         ; 00432f7b
        ;   Label: LAB_00432f7b
    JA 0x00432f9a                       ; 00432f7e
        ;   XREF to: 00432f9a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432c7c]  ; 00432f80 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x104]     ; 00432f87
        ;   Label: caseD_0
    LEA EAX,[ESI*0x4 + 0x0]             ; 00432f8e
    ADD EAX,ECX                         ; 00432f95
    INC ESI                             ; 00432f97
    MOV dword ptr [EAX],EBX             ; 00432f98
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00432f9a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x108]     ; 00432fa1
    MOV EBX,EDI                         ; 00432fa8
    INC EAX                             ; 00432faa
    ADD EBP,0x4                         ; 00432fab
    MOV dword ptr [ESP + 0x10c],EAX     ; 00432fae
    CMP EAX,EDX                         ; 00432fb5
    JL 0x00432f5f                       ; 00432fb7
        ;   XREF to: 00432f5f (CONDITIONAL_JUMP)  ; LAB_00432f5f
    MOV dword ptr [0x00766c70],ESI      ; 00432fb9 | DAT_00766c70
        ;   Label: LAB_00432fb9
    CMP ESI,0x3                         ; 00432fbf
    JL 0x00432de0                       ; 00432fc2
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    MOV EDX,ESP                         ; 00432fc8
    LEA EBP,[ESP + 0x80]                ; 00432fca
    XOR EBX,EBX                         ; 00432fd1
    MOV dword ptr [ESP + 0x110],ESI     ; 00432fd3
    MOV dword ptr [ESP + 0x114],EBX     ; 00432fda
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 00432fe1
    TEST ESI,ESI                        ; 00432fe5
    JLE 0x00433056                      ; 00432fe7
        ;   XREF to: 00433056 (CONDITIONAL_JUMP)  ; LAB_00433056
    MOV dword ptr [ESP + 0x12c],EDX     ; 00432fe9
    MOV ESI,dword ptr [ESP + 0x12c]     ; 00432ff0
        ;   Label: LAB_00432ff0
    MOV EDX,dword ptr [EDI + 0x8]       ; 00432ff7
    MOV ECX,dword ptr [EDI]             ; 00432ffa
    XOR EAX,EAX                         ; 00432ffc
    NEG EDX                             ; 00432ffe
    MOV ESI,dword ptr [ESI]             ; 00433000
    CMP EDX,ECX                         ; 00433002
    JL 0x0043300b                       ; 00433004
        ;   XREF to: 0043300b (CONDITIONAL_JUMP)  ; LAB_0043300b
    MOV EAX,0x1                         ; 00433006
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043300b
        ;   Label: LAB_0043300b
    MOV ECX,dword ptr [ESI]             ; 0043300e
    NEG EDX                             ; 00433010
    CMP EDX,ECX                         ; 00433012
    JL 0x00433018                       ; 00433014
        ;   XREF to: 00433018 (CONDITIONAL_JUMP)  ; LAB_00433018
    OR AL,0x2                           ; 00433016
    CMP EAX,0x3                         ; 00433018
        ;   Label: LAB_00433018
    JA 0x00433029                       ; 0043301b
        ;   XREF to: 00433029 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432c8c]  ; 0043301d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00433024
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00433025
    MOV EAX,dword ptr [ESP + 0x114]     ; 00433029
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x110]     ; 00433030
    MOV EDI,ESI                         ; 00433037
    MOV ESI,dword ptr [ESP + 0x12c]     ; 00433039
    INC EAX                             ; 00433040
    ADD ESI,0x4                         ; 00433041
    MOV dword ptr [ESP + 0x114],EAX     ; 00433044
    MOV dword ptr [ESP + 0x12c],ESI     ; 0043304b
    CMP EAX,EDX                         ; 00433052
    JL 0x00432ff0                       ; 00433054
        ;   XREF to: 00432ff0 (CONDITIONAL_JUMP)  ; LAB_00432ff0
    MOV dword ptr [0x00766c70],EBX      ; 00433056 | DAT_00766c70
        ;   Label: LAB_00433056
    CMP EBX,0x3                         ; 0043305c
    JL 0x00432de0                       ; 0043305f
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    LEA EAX,[ESP + 0x80]                ; 00433065
    MOV EBP,ESP                         ; 0043306c
    XOR ESI,ESI                         ; 0043306e
    MOV dword ptr [ESP + 0x118],EBX     ; 00433070
    MOV dword ptr [ESP + 0x11c],ESI     ; 00433077
    MOV EDI,dword ptr [EAX + EBX*0x4 + -0x4] ; 0043307e
    TEST EBX,EBX                        ; 00433082
    JLE 0x004330ef                      ; 00433084
        ;   XREF to: 004330ef (CONDITIONAL_JUMP)  ; LAB_004330ef
    MOV dword ptr [ESP + 0x130],EAX     ; 00433086
    MOV EBX,dword ptr [ESP + 0x130]     ; 0043308d
        ;   Label: LAB_0043308d
    MOV EDX,dword ptr [EDI + 0x4]       ; 00433094 | DAT_005c5018
    MOV ECX,dword ptr [EDI + 0x8]       ; 00433097 | DAT_005c501c
    XOR EAX,EAX                         ; 0043309a
    MOV EBX,dword ptr [EBX]             ; 0043309c
    CMP EDX,ECX                         ; 0043309e
    JL 0x004330a7                       ; 004330a0
        ;   XREF to: 004330a7 (CONDITIONAL_JUMP)  ; LAB_004330a7
    MOV EAX,0x1                         ; 004330a2
    MOV ECX,dword ptr [EBX + 0x8]       ; 004330a7 | DAT_005c501c
        ;   Label: LAB_004330a7
    CMP ECX,dword ptr [EBX + 0x4]       ; 004330aa | DAT_005c5018
    JG 0x004330b1                       ; 004330ad
        ;   XREF to: 004330b1 (CONDITIONAL_JUMP)  ; LAB_004330b1
    OR AL,0x2                           ; 004330af
    CMP EAX,0x3                         ; 004330b1
        ;   Label: LAB_004330b1
    JA 0x004330c2                       ; 004330b4
        ;   XREF to: 004330c2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432c9c]  ; 004330b6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC ESI                             ; 004330bd
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 004330be
    MOV ECX,dword ptr [ESP + 0x130]     ; 004330c2
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x118]     ; 004330c9
    MOV EDI,EBX                         ; 004330d0
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004330d2
    ADD ECX,0x4                         ; 004330d9
    INC EBX                             ; 004330dc
    MOV dword ptr [ESP + 0x130],ECX     ; 004330dd
    MOV dword ptr [ESP + 0x11c],EBX     ; 004330e4
    CMP EBX,EDX                         ; 004330eb
    JL 0x0043308d                       ; 004330ed
        ;   XREF to: 0043308d (CONDITIONAL_JUMP)  ; LAB_0043308d
    MOV dword ptr [0x00766c70],ESI      ; 004330ef | DAT_00766c70
        ;   Label: LAB_004330ef
    CMP ESI,0x3                         ; 004330f5
    JL 0x00432de0                       ; 004330f8
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    MOV EDX,ESP                         ; 004330fe
    LEA EBP,[ESP + 0x80]                ; 00433100
    XOR EBX,EBX                         ; 00433107
    MOV dword ptr [ESP + 0x120],ESI     ; 00433109
    MOV dword ptr [ESP + 0x124],EBX     ; 00433110
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 00433117
    TEST ESI,ESI                        ; 0043311b
    JLE 0x00433192                      ; 0043311d
        ;   XREF to: 00433192 (CONDITIONAL_JUMP)  ; LAB_00433192
    MOV dword ptr [ESP + 0x134],EDX     ; 00433123
    MOV ESI,dword ptr [ESP + 0x134]     ; 0043312a
        ;   Label: LAB_0043312a
    MOV EDX,dword ptr [EDI + 0x8]       ; 00433131
    MOV ECX,dword ptr [EDI + 0x4]       ; 00433134
    XOR EAX,EAX                         ; 00433137
    NEG EDX                             ; 00433139
    MOV ESI,dword ptr [ESI]             ; 0043313b
    CMP EDX,ECX                         ; 0043313d
    JL 0x00433146                       ; 0043313f
        ;   XREF to: 00433146 (CONDITIONAL_JUMP)  ; LAB_00433146
    MOV EAX,0x1                         ; 00433141
    MOV EDX,dword ptr [ESI + 0x8]       ; 00433146
        ;   Label: LAB_00433146
    MOV ECX,dword ptr [ESI + 0x4]       ; 00433149
    NEG EDX                             ; 0043314c
    CMP EDX,ECX                         ; 0043314e
    JL 0x00433154                       ; 00433150
        ;   XREF to: 00433154 (CONDITIONAL_JUMP)  ; LAB_00433154
    OR AL,0x2                           ; 00433152
    CMP EAX,0x3                         ; 00433154
        ;   Label: LAB_00433154
    JA 0x00433165                       ; 00433157
        ;   XREF to: 00433165 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432cac]  ; 00433159 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00433160
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00433161
    MOV ECX,dword ptr [ESP + 0x134]     ; 00433165
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x120]     ; 0043316c
    MOV EDI,ESI                         ; 00433173
    MOV ESI,dword ptr [ESP + 0x124]     ; 00433175
    ADD ECX,0x4                         ; 0043317c
    INC ESI                             ; 0043317f
    MOV dword ptr [ESP + 0x134],ECX     ; 00433180
    MOV dword ptr [ESP + 0x124],ESI     ; 00433187
    CMP ESI,EDX                         ; 0043318e
    JL 0x0043312a                       ; 00433190
        ;   XREF to: 0043312a (CONDITIONAL_JUMP)  ; LAB_0043312a
    MOV dword ptr [0x00766c70],EBX      ; 00433192 | DAT_00766c70
        ;   Label: LAB_00433192
    CMP EBX,0x3                         ; 00433198
    JL 0x00432de0                       ; 0043319b
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    XOR EDX,EDX                         ; 004331a1
    TEST EBX,EBX                        ; 004331a3
    JLE 0x00433200                      ; 004331a5
        ;   XREF to: 00433200 (CONDITIONAL_JUMP)  ; LAB_00433200
    MOV EBX,0x766c74                    ; 004331a7 | DAT_00766c74
    XOR EBP,EBP                         ; 004331ac
    MOV ECX,0x30                        ; 004331ae
        ;   Label: LAB_004331ae
    MOV EDI,EBX                         ; 004331b3
    MOV ESI,dword ptr [ESP + EBP*0x1 + 0x80] ; 004331b5
    TEST EDI,0x7                        ; 004331bc
    JZ 0x004331ca                       ; 004331c2
        ;   XREF to: 004331ca (CONDITIONAL_JUMP)  ; LAB_004331ca
    MOVSD ES:EDI,ESI                    ; 004331c4 | DAT_005c5014 | DAT_00766c74 | DAT_00766ca4
    SUB ECX,0x4                         ; 004331c5
    JLE 0x004331e7                      ; 004331c8
        ;   XREF to: 004331e7 (CONDITIONAL_JUMP)  ; LAB_004331e7
    SUB ECX,0x8                         ; 004331ca
        ;   Label: LAB_004331ca
    JL 0x004331db                       ; 004331cd
        ;   XREF to: 004331db (CONDITIONAL_JUMP)  ; LAB_004331db
    FILD qword ptr [ESI]                ; 004331cf | DAT_005c5018 | DAT_005c5020
    ADD ESI,0x8                         ; 004331d1
    FISTP qword ptr [EDI]               ; 004331d4 | DAT_00766c78 | DAT_00766c80 | DAT_00766ca8
    ADD EDI,0x8                         ; 004331d6
    JMP 0x004331ca                      ; 004331d9
        ;   XREF to: 004331ca (UNCONDITIONAL_JUMP)  ; LAB_004331ca
    ADD ECX,0x8                         ; 004331db
        ;   Label: LAB_004331db
    JLE 0x004331e7                      ; 004331de
        ;   XREF to: 004331e7 (CONDITIONAL_JUMP)  ; LAB_004331e7
    MOVSD ES:EDI,ESI                    ; 004331e0 | DAT_005c5020 | DAT_00766c80
    SUB ECX,0x4                         ; 004331e1
    JLE 0x004331e7                      ; 004331e4
        ;   XREF to: 004331e7 (CONDITIONAL_JUMP)  ; LAB_004331e7
    MOVSD ES:EDI,ESI                    ; 004331e6 | DAT_005c5024 | DAT_00766c84
    ADD EBP,0x4                         ; 004331e7
        ;   Label: LAB_004331e7
    INC EDX                             ; 004331ea
    MOV ECX,dword ptr [0x00766c70]      ; 004331eb | DAT_00766c70
    ADD EBX,0x30                        ; 004331f1
    CMP EDX,ECX                         ; 004331f4
    JL 0x004331ae                       ; 004331f6
        ;   XREF to: 004331ae (CONDITIONAL_JUMP)  ; LAB_004331ae
    LEA EAX,[EAX]                       ; 004331f8
    MOV EDX,EDX                         ; 004331fe
    MOV EBX,dword ptr [0x005ad284]      ; 00433200 | DAT_005ad284
        ;   Label: LAB_00433200
    XOR ECX,ECX                         ; 00433206
    TEST EBX,EBX                        ; 00433208
    JNZ 0x0043353f                      ; 0043320a
        ;   XREF to: 0043353f (CONDITIONAL_JUMP)  ; LAB_0043353f
    MOV EBP,dword ptr [0x00766c70]      ; 00433210 | DAT_00766c70
        ;   Label: LAB_00433210
    CMP EBP,0x3                         ; 00433216
    JL 0x00432de0                       ; 00433219
        ;   XREF to: 00432de0 (CONDITIONAL_JUMP)  ; LAB_00432de0
    XOR EDX,EDX                         ; 0043321f
    TEST EBP,EBP                        ; 00433221
    JLE 0x00432ed0                      ; 00433223
        ;   XREF to: 00432ed0 (CONDITIONAL_JUMP)  ; LAB_00432ed0
    MOV EAX,0x766c74                    ; 00433229 | DAT_00766c74
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043322e | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_0043322e
    TEST EBX,EBX                        ; 00433231
    JZ 0x0043372f                       ; 00433233
        ;   XREF to: 0043372f (CONDITIONAL_JUMP)  ; LAB_0043372f
    MOV ECX,dword ptr [EAX]             ; 00433239 | DAT_00766c74 | DAT_00766ca4
    CMP ECX,EBX                         ; 0043323b
    JLE 0x00433740                      ; 0043323d
        ;   XREF to: 00433740 (CONDITIONAL_JUMP)  ; LAB_00433740
    MOV dword ptr [EAX],EBX             ; 00433243 | DAT_00766c74 | DAT_00766ca4
        ;   Label: LAB_00433243
    MOV ECX,dword ptr [0x00766c70]      ; 00433245 | DAT_00766c70
        ;   Label: LAB_00433245
    INC EDX                             ; 0043324b
    ADD EAX,0x30                        ; 0043324c
    CMP EDX,ECX                         ; 0043324f
    JGE 0x00432ed0                      ; 00433251
        ;   XREF to: 00432ed0 (CONDITIONAL_JUMP)  ; LAB_00432ed0
    JMP 0x0043322e                      ; 00433257
        ;   XREF to: 0043322e (UNCONDITIONAL_JUMP)  ; LAB_0043322e
    CMP dword ptr [0x00767b38],0xc      ; 00433259 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00433284                       ; 00433260
        ;   XREF to: 00433284 (CONDITIONAL_JUMP)  ; LAB_00433284
    MOV EAX,0x57ac47                    ; 00433262 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 00433267
    PUSH 0x57ac5b                       ; 0043326c | = "Ran out of clipped verts!"
    MOV [0x01cc4800],EAX                ; 00433271 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 00433276 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0043327c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00433281
    MOV EAX,[0x00767b38]                ; 00433284 | DAT_00767b38
        ;   Label: LAB_00433284
    IMUL EDX,EAX,0x30                   ; 00433289
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043328c
    ADD EDX,0x7678f8                    ; 00433293 | DAT_007678f8
    INC EAX                             ; 00433299
    PUSH EDX                            ; 0043329a | DAT_007678f8
    MOV [0x00767b38],EAX                ; 0043329b | DAT_00767b38
    LEA EAX,[ESI*0x4 + 0x0]             ; 004332a0
    PUSH EBX                            ; 004332a7
    ADD EAX,ECX                         ; 004332a8
    PUSH EDI                            ; 004332aa
    INC ESI                             ; 004332ab
    MOV dword ptr [EAX],EDX             ; 004332ac | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 004332ae
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00431530(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004332b3
    JMP 0x00432f9a                      ; 004332b6
        ;   XREF to: 00432f9a (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x104]     ; 004332bb
        ;   Label: caseD_2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004332c2
    ADD EAX,EDX                         ; 004332c9
    MOV ECX,dword ptr [0x00767b38]      ; 004332cb | DAT_00767b38
    INC ESI                             ; 004332d1
    MOV dword ptr [EAX],EBX             ; 004332d2
    CMP ECX,0xc                         ; 004332d4
    JL 0x004332fb                       ; 004332d7
        ;   XREF to: 004332fb (CONDITIONAL_JUMP)  ; LAB_004332fb
    MOV EAX,0x57ac47                    ; 004332d9 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 004332de
    PUSH 0x57ac5b                       ; 004332e3 | = "Ran out of clipped verts!"
    MOV [0x01cc4800],EAX                ; 004332e8 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 004332ed | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004332f3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004332f8
    MOV EAX,[0x00767b38]                ; 004332fb | DAT_00767b38
        ;   Label: LAB_004332fb
    IMUL EDX,EAX,0x30                   ; 00433300
    MOV ECX,dword ptr [ESP + 0x104]     ; 00433303
    ADD EDX,0x7678f8                    ; 0043330a | DAT_007678f8
    INC EAX                             ; 00433310
    PUSH EDX                            ; 00433311 | DAT_007678f8
    MOV [0x00767b38],EAX                ; 00433312 | DAT_00767b38
    LEA EAX,[ESI*0x4 + 0x0]             ; 00433317
    PUSH EDI                            ; 0043331e
    ADD EAX,ECX                         ; 0043331f
    PUSH EBX                            ; 00433321
    INC ESI                             ; 00433322
    MOV dword ptr [EAX],EDX             ; 00433323 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 00433325
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00431530(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043332a
    JMP 0x00432f9a                      ; 0043332d
        ;   XREF to: 00432f9a (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 00433332 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x0043335d                       ; 00433339
        ;   XREF to: 0043335d (CONDITIONAL_JUMP)  ; LAB_0043335d
    MOV ECX,0x57ac47                    ; 0043333b | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00433340
    PUSH 0x57ac5b                       ; 00433345 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 0043334a | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 00433350 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00433355
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0043335a
    MOV EAX,[0x00767b38]                ; 0043335d | DAT_00767b38
        ;   Label: LAB_0043335d
    IMUL EDX,EAX,0x30                   ; 00433362
    ADD EDX,0x7678f8                    ; 00433365 | DAT_007678f8
    PUSH EDX                            ; 0043336b | DAT_007678f8
    PUSH EDI                            ; 0043336c
    INC EBX                             ; 0043336d
    INC EAX                             ; 0043336e
    PUSH ESI                            ; 0043336f
    MOV [0x00767b38],EAX                ; 00433370 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00433375 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 00433379
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00431630(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043337e
    JMP 0x00433029                      ; 00433381
        ;   XREF to: 00433029 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00433386
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00433387 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043338c
    CMP EAX,0xc                         ; 00433390
    JL 0x004333b8                       ; 00433393
        ;   XREF to: 004333b8 (CONDITIONAL_JUMP)  ; LAB_004333b8
    MOV EDX,0x57ac47                    ; 00433395 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043339a
    PUSH 0x57ac5b                       ; 0043339f | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 004333a4 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004333aa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004333b0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004333b5
    MOV EAX,[0x00767b38]                ; 004333b8 | DAT_00767b38
        ;   Label: LAB_004333b8
    IMUL EDX,EAX,0x30                   ; 004333bd
    ADD EDX,0x7678f8                    ; 004333c0 | DAT_007678f8
    PUSH EDX                            ; 004333c6 | DAT_007678f8
    PUSH ESI                            ; 004333c7
    INC EBX                             ; 004333c8
    INC EAX                             ; 004333c9
    PUSH EDI                            ; 004333ca
    MOV [0x00767b38],EAX                ; 004333cb | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004333d0 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 004333d4
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00431630(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004333d9
    JMP 0x00433029                      ; 004333dc
        ;   XREF to: 00433029 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 004333e1 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x0043340c                       ; 004333e8
        ;   XREF to: 0043340c (CONDITIONAL_JUMP)  ; LAB_0043340c
    MOV ECX,0x57ac47                    ; 004333ea | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 004333ef
    PUSH 0x57ac5b                       ; 004333f4 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004333f9 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004333ff | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00433404
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00433409
    MOV EAX,[0x00767b38]                ; 0043340c | DAT_00767b38
        ;   Label: LAB_0043340c
    IMUL EDX,EAX,0x30                   ; 00433411
    ADD EDX,0x7678f8                    ; 00433414 | DAT_007678f8
    PUSH EDX                            ; 0043341a | DAT_007678f8
    PUSH EDI                            ; 0043341b
    INC ESI                             ; 0043341c
    INC EAX                             ; 0043341d
    PUSH EBX                            ; 0043341e
    MOV [0x00767b38],EAX                ; 0043341f | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00433424 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00433428
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043342d
    JMP 0x004330c2                      ; 00433430
        ;   XREF to: 004330c2 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 00433435
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00433436 | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043343b
    CMP EAX,0xc                         ; 0043343f
    JL 0x00433467                       ; 00433442
        ;   XREF to: 00433467 (CONDITIONAL_JUMP)  ; LAB_00433467
    MOV EDX,0x57ac47                    ; 00433444 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00433449
    PUSH 0x57ac5b                       ; 0043344e | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00433453 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00433459 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0043345f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00433464
    MOV EAX,[0x00767b38]                ; 00433467 | DAT_00767b38
        ;   Label: LAB_00433467
    IMUL EDX,EAX,0x30                   ; 0043346c
    ADD EDX,0x7678f8                    ; 0043346f | DAT_007678f8
    PUSH EDX                            ; 00433475 | DAT_007678f8
    PUSH EBX                            ; 00433476
    INC ESI                             ; 00433477
    INC EAX                             ; 00433478
    PUSH EDI                            ; 00433479
    MOV [0x00767b38],EAX                ; 0043347a | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 0043347f | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00433483
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00433488
    JMP 0x004330c2                      ; 0043348b
        ;   XREF to: 004330c2 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 00433490 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x004334bb                       ; 00433497
        ;   XREF to: 004334bb (CONDITIONAL_JUMP)  ; LAB_004334bb
    MOV ECX,0x57ac47                    ; 00433499 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043349e
    PUSH 0x57ac5b                       ; 004334a3 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004334a8 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004334ae | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004334b3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004334b8
    MOV EAX,[0x00767b38]                ; 004334bb | DAT_00767b38
        ;   Label: LAB_004334bb
    IMUL EDX,EAX,0x30                   ; 004334c0
    ADD EDX,0x7678f8                    ; 004334c3 | DAT_007678f8
    PUSH EDX                            ; 004334c9 | DAT_007678f8
    PUSH EDI                            ; 004334ca
    INC EBX                             ; 004334cb
    INC EAX                             ; 004334cc
    PUSH ESI                            ; 004334cd
    MOV [0x00767b38],EAX                ; 004334ce | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004334d3 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 004334d7
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004334dc
    JMP 0x00433165                      ; 004334df
        ;   XREF to: 00433165 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004334e4
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 004334e5 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 004334ea
    CMP EAX,0xc                         ; 004334ee
    JL 0x00433516                       ; 004334f1
        ;   XREF to: 00433516 (CONDITIONAL_JUMP)  ; LAB_00433516
    MOV EDX,0x57ac47                    ; 004334f3 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 004334f8
    PUSH 0x57ac5b                       ; 004334fd | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00433502 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00433508 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0043350e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00433513
    MOV EAX,[0x00767b38]                ; 00433516 | DAT_00767b38
        ;   Label: LAB_00433516
    IMUL EDX,EAX,0x30                   ; 0043351b
    ADD EDX,0x7678f8                    ; 0043351e | DAT_007678f8
    PUSH EDX                            ; 00433524 | DAT_007678f8
    PUSH ESI                            ; 00433525
    INC EBX                             ; 00433526
    INC EAX                             ; 00433527
    PUSH EDI                            ; 00433528
    MOV [0x00767b38],EAX                ; 00433529 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043352e | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 00433532
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00433537
    JMP 0x00433165                      ; 0043353a
        ;   XREF to: 00433165 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,dword ptr [0x00766c70]      ; 0043353f | DAT_00766c70
        ;   Label: LAB_0043353f
    TEST ESI,ESI                        ; 00433545
    JLE 0x00433568                      ; 00433547
        ;   XREF to: 00433568 (CONDITIONAL_JUMP)  ; LAB_00433568
    MOV EDX,ESI                         ; 00433549
    SHL ESI,0x2                         ; 0043354b
    SUB ESI,EDX                         ; 0043354e
    XOR EAX,EAX                         ; 00433550
    SHL ESI,0x4                         ; 00433552
    MOV EBX,dword ptr [EAX + 0x766c7c]  ; 00433555 | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_00433555
    CMP ECX,EBX                         ; 0043355b
    JGE 0x00433561                      ; 0043355d
        ;   XREF to: 00433561 (CONDITIONAL_JUMP)  ; LAB_00433561
    MOV ECX,EBX                         ; 0043355f
    ADD EAX,0x30                        ; 00433561
        ;   Label: LAB_00433561
    CMP EAX,ESI                         ; 00433564
    JL 0x00433555                       ; 00433566
        ;   XREF to: 00433555 (CONDITIONAL_JUMP)  ; LAB_00433555
    CMP ECX,dword ptr [0x005ad284]      ; 00433568 | DAT_005ad284
        ;   Label: LAB_00433568
    JL 0x00433210                       ; 0043356e
        ;   XREF to: 00433210 (CONDITIONAL_JUMP)  ; LAB_00433210
    MOV EAX,[0x00766c70]                ; 00433574 | DAT_00766c70
    MOV ESI,0x766c74                    ; 00433579 | DAT_00766c74
    MOV [0x007672f4],EAX                ; 0043357e | DAT_007672f4
    LEA ECX,[EAX*0x4 + 0x0]             ; 00433583
    MOV EDI,0x7672f8                    ; 0043358a | DAT_007672f8
    SUB ECX,EAX                         ; 0043358f
    XOR EBP,EBP                         ; 00433591
    SHL ECX,0x4                         ; 00433593
    MOV dword ptr [ESP + 0x13c],EBP     ; 00433596
    TEST EDI,0x7                        ; 0043359d
    JZ 0x004335ab                       ; 004335a3
        ;   XREF to: 004335ab (CONDITIONAL_JUMP)  ; LAB_004335ab
    MOVSD ES:EDI,ESI                    ; 004335a5 | DAT_00766c74 | DAT_007672f8
    SUB ECX,0x4                         ; 004335a6
    JLE 0x004335c8                      ; 004335a9
        ;   XREF to: 004335c8 (CONDITIONAL_JUMP)  ; LAB_004335c8
    SUB ECX,0x8                         ; 004335ab
        ;   Label: LAB_004335ab
    JL 0x004335bc                       ; 004335ae
        ;   XREF to: 004335bc (CONDITIONAL_JUMP)  ; LAB_004335bc
    FILD qword ptr [ESI]                ; 004335b0 | DAT_00766c74
    ADD ESI,0x8                         ; 004335b2
    FISTP qword ptr [EDI]               ; 004335b5 | DAT_007672f8
    ADD EDI,0x8                         ; 004335b7
    JMP 0x004335ab                      ; 004335ba
        ;   XREF to: 004335ab (UNCONDITIONAL_JUMP)  ; LAB_004335ab
    ADD ECX,0x8                         ; 004335bc
        ;   Label: LAB_004335bc
    JLE 0x004335c8                      ; 004335bf
        ;   XREF to: 004335c8 (CONDITIONAL_JUMP)  ; LAB_004335c8
    MOVSD ES:EDI,ESI                    ; 004335c1 | DAT_00766c74 | DAT_007672f8
    SUB ECX,0x4                         ; 004335c2
    JLE 0x004335c8                      ; 004335c5
        ;   XREF to: 004335c8 (CONDITIONAL_JUMP)  ; LAB_004335c8
    MOVSD ES:EDI,ESI                    ; 004335c7 | DAT_00766c78 | DAT_007672fc
    MOV EDX,dword ptr [0x007672f4]      ; 004335c8 | DAT_007672f4
        ;   Label: LAB_004335c8
    MOV dword ptr [0x00766c70],EBP      ; 004335ce | DAT_00766c70
    TEST EDX,EDX                        ; 004335d4
    JLE 0x00433210                      ; 004335d6
        ;   XREF to: 00433210 (CONDITIONAL_JUMP)  ; LAB_00433210
    MOV EBP,0x7672f8                    ; 004335dc | DAT_007672f8
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004335e1
        ;   Label: LAB_004335e1
    MOV EDX,dword ptr [0x007672f4]      ; 004335e8 | DAT_007672f4
    INC EAX                             ; 004335ee
    CMP EAX,EDX                         ; 004335ef
    JNZ 0x004335f5                      ; 004335f1
        ;   XREF to: 004335f5 (CONDITIONAL_JUMP)  ; LAB_004335f5
    XOR EAX,EDX                         ; 004335f3
    IMUL EAX,EAX,0x30                   ; 004335f5
        ;   Label: LAB_004335f5
    MOV EDX,0x7672f8                    ; 004335f8 | DAT_007672f8
    MOV ESI,dword ptr [0x005ad284]      ; 004335fd | DAT_005ad284
    MOV EBX,EBP                         ; 00433603
    MOV ECX,dword ptr [EBP + 0x8]       ; 00433605 | DAT_00767300 | DAT_00767330
    ADD EDX,EAX                         ; 00433608
    XOR EAX,EAX                         ; 0043360a
    CMP ECX,ESI                         ; 0043360c
    JL 0x00433615                       ; 0043360e
        ;   XREF to: 00433615 (CONDITIONAL_JUMP)  ; LAB_00433615
    MOV EAX,0x1                         ; 00433610
    MOV EDI,dword ptr [0x005ad284]      ; 00433615 | DAT_005ad284
        ;   Label: LAB_00433615
    CMP EDI,dword ptr [EDX + 0x8]       ; 0043361b | DAT_00767300
    JG 0x00433622                       ; 0043361e
        ;   XREF to: 00433622 (CONDITIONAL_JUMP)  ; LAB_00433622
    OR AL,0x2                           ; 00433620
    CMP EAX,0x3                         ; 00433622
        ;   Label: LAB_00433622
    JA 0x00433673                       ; 00433625
        ;   XREF to: 00433673 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432cbc]  ; 00433627 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 0043362e | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00433635
    ADD EDI,0x766c74                    ; 0043363a | DAT_00766c74
    MOV ESI,EBX                         ; 00433640
    TEST EDI,0x7                        ; 00433642
    JZ 0x00433650                       ; 00433648
        ;   XREF to: 00433650 (CONDITIONAL_JUMP)  ; LAB_00433650
    MOVSD ES:EDI,ESI                    ; 0043364a | DAT_00767328 | DAT_00766c74
    SUB ECX,0x4                         ; 0043364b
    JLE 0x0043366d                      ; 0043364e
        ;   XREF to: 0043366d (CONDITIONAL_JUMP)  ; LAB_0043366d
    SUB ECX,0x8                         ; 00433650
        ;   Label: LAB_00433650
    JL 0x00433661                       ; 00433653
        ;   XREF to: 00433661 (CONDITIONAL_JUMP)  ; LAB_00433661
    FILD qword ptr [ESI]                ; 00433655 | DAT_00767328+4 | DAT_00767334
    ADD ESI,0x8                         ; 00433657
    FISTP qword ptr [EDI]               ; 0043365a | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0043365c
    JMP 0x00433650                      ; 0043365f
        ;   XREF to: 00433650 (UNCONDITIONAL_JUMP)  ; LAB_00433650
    ADD ECX,0x8                         ; 00433661
        ;   Label: LAB_00433661
    JLE 0x0043366d                      ; 00433664
        ;   XREF to: 0043366d (CONDITIONAL_JUMP)  ; LAB_0043366d
    MOVSD ES:EDI,ESI                    ; 00433666 | DAT_00767334 | DAT_00766c80
    SUB ECX,0x4                         ; 00433667
    JLE 0x0043366d                      ; 0043366a
        ;   XREF to: 0043366d (CONDITIONAL_JUMP)  ; LAB_0043366d
    MOVSD ES:EDI,ESI                    ; 0043366c | DAT_00767338 | DAT_00766c84
    INC dword ptr [0x00766c70]          ; 0043366d | DAT_00766c70
        ;   Label: LAB_0043366d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00433673
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007672f4]      ; 0043367a | DAT_007672f4
    INC ESI                             ; 00433680
    ADD EBP,0x30                        ; 00433681
    MOV dword ptr [ESP + 0x13c],ESI     ; 00433684
    CMP ESI,EDI                         ; 0043368b
    JGE 0x00433210                      ; 0043368d
        ;   XREF to: 00433210 (CONDITIONAL_JUMP)  ; LAB_00433210
    JMP 0x004335e1                      ; 00433693
        ;   XREF to: 004335e1 (UNCONDITIONAL_JUMP)  ; LAB_004335e1
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 00433698 | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 0043369f | DAT_00766c74
    PUSH EAX                            ; 004336a4 | DAT_00766c74
    PUSH EBX                            ; 004336a5 | DAT_00767328
    PUSH EDX                            ; 004336a6
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 004336a7
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00431930(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EBX,dword ptr [0x00766c70]      ; 004336ac | DAT_00766c70
    INC EBX                             ; 004336b2
    ADD ESP,0xc                         ; 004336b3
    MOV dword ptr [0x00766c70],EBX      ; 004336b6 | DAT_00766c70
    JMP 0x00433673                      ; 004336bc
        ;   XREF to: 00433673 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 004336be | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004336c5
    MOV ESI,EBX                         ; 004336ca
    ADD EDI,0x766c74                    ; 004336cc | DAT_00766c74
    TEST EDI,0x7                        ; 004336d2
    JZ 0x004336e0                       ; 004336d8
        ;   XREF to: 004336e0 (CONDITIONAL_JUMP)  ; LAB_004336e0
    MOVSD ES:EDI,ESI                    ; 004336da | DAT_00767328 | DAT_00766c74
    SUB ECX,0x4                         ; 004336db
    JLE 0x004336fd                      ; 004336de
        ;   XREF to: 004336fd (CONDITIONAL_JUMP)  ; LAB_004336fd
    SUB ECX,0x8                         ; 004336e0
        ;   Label: LAB_004336e0
    JL 0x004336f1                       ; 004336e3
        ;   XREF to: 004336f1 (CONDITIONAL_JUMP)  ; LAB_004336f1
    FILD qword ptr [ESI]                ; 004336e5 | DAT_00767328+4 | DAT_00767334
    ADD ESI,0x8                         ; 004336e7
    FISTP qword ptr [EDI]               ; 004336ea | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 004336ec
    JMP 0x004336e0                      ; 004336ef
        ;   XREF to: 004336e0 (UNCONDITIONAL_JUMP)  ; LAB_004336e0
    ADD ECX,0x8                         ; 004336f1
        ;   Label: LAB_004336f1
    JLE 0x004336fd                      ; 004336f4
        ;   XREF to: 004336fd (CONDITIONAL_JUMP)  ; LAB_004336fd
    MOVSD ES:EDI,ESI                    ; 004336f6 | DAT_00767334 | DAT_00766c80
    SUB ECX,0x4                         ; 004336f7
    JLE 0x004336fd                      ; 004336fa
        ;   XREF to: 004336fd (CONDITIONAL_JUMP)  ; LAB_004336fd
    MOVSD ES:EDI,ESI                    ; 004336fc | DAT_00767338 | DAT_00766c84
    MOV ECX,dword ptr [0x00766c70]      ; 004336fd | DAT_00766c70
        ;   Label: LAB_004336fd
    INC ECX                             ; 00433703
    MOV dword ptr [0x00766c70],ECX      ; 00433704 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 0043370a
    ADD EAX,0x766c74                    ; 0043370d | DAT_00766c74
    PUSH EAX                            ; 00433712 | DAT_00766ca4
    PUSH EDX                            ; 00433713
    PUSH EBX                            ; 00433714 | DAT_00767328
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 00433715
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexNearClip_FUN_00431930(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00766c70]      ; 0043371a | DAT_00766c70
    INC EDI                             ; 00433720
    ADD ESP,0xc                         ; 00433721
    MOV dword ptr [0x00766c70],EDI      ; 00433724 | DAT_00766c70
    JMP 0x00433673                      ; 0043372a
        ;   XREF to: 00433673 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043372f | DAT_00766cac
        ;   Label: LAB_0043372f
    MOV dword ptr [EAX],EBX             ; 00433736 | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],EBX       ; 00433738 | DAT_00766ca8
    JMP 0x00433245                      ; 0043373b
        ;   XREF to: 00433245 (UNCONDITIONAL_JUMP)  ; LAB_00433245
    NEG EBX                             ; 00433740
        ;   Label: LAB_00433740
    CMP EBX,ECX                         ; 00433742
    JG 0x00433243                       ; 00433744
        ;   XREF to: 00433243 (CONDITIONAL_JUMP)  ; LAB_00433243
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043374a | DAT_00766cac
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043374d | DAT_00766ca8
    CMP ECX,EBP                         ; 00433750
    JLE 0x0043375c                      ; 00433752
        ;   XREF to: 0043375c (CONDITIONAL_JUMP)  ; LAB_0043375c
    MOV dword ptr [EAX + 0x4],EBP       ; 00433754 | DAT_00766ca8
    JMP 0x00433245                      ; 00433757
        ;   XREF to: 00433245 (UNCONDITIONAL_JUMP)  ; LAB_00433245
    CMP EBX,ECX                         ; 0043375c
        ;   Label: LAB_0043375c
    JLE 0x00433245                      ; 0043375e
        ;   XREF to: 00433245 (CONDITIONAL_JUMP)  ; LAB_00433245
    MOV dword ptr [EAX + 0x4],EBX       ; 00433764 | DAT_00766ca8
    JMP 0x00433245                      ; 00433767
        ;   XREF to: 00433245 (UNCONDITIONAL_JUMP)  ; LAB_00433245

