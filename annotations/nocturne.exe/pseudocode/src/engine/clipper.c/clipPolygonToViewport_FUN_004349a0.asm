; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 004085f2
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 004084af
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60 at 00406d34
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80 at 00406e57
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270 at 00408335
;   engine_3d.c_renderPolygonFogColorOp6_FUN_004048b0 at 00404981
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00408d10 at 00408e4d
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10 at 00408cf6
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 at 0045ee14
;
; Referenced Globals:
;   void* switchdataD_00434958 = 00434c2c
;   void* PTR_caseD_3_00434964 = 00434c56
;   void* PTR_caseD_1_0043496c = 00434f3f
;   void* PTR_caseD_3_00434974 = 00434d05
;   void* switchdataD_00434978 = 00434d85
;   void* PTR_caseD_3_00434984 = 00434daf
;   void* PTR_caseD_1_0043498c = 0043503d
;   void* PTR_caseD_3_00434994 = 00434e5f
;   undefined4 DAT_005b7644
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c5024
;   undefined4 DAT_006b0280
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
;   engine_prim.c_renderScanlinePolygon_FUN_004fad00
;   wincore_windll.cpp_drawPolygon2_FUN_00532650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004349a0
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
    PUSH ESI                            ; 004349a1
    PUSH EDI                            ; 004349a2
    PUSH EBP                            ; 004349a3
    SUB ESP,0x20                        ; 004349a4
    MOV EDX,dword ptr [ESP + 0x34]      ; 004349a7
    MOV EBX,dword ptr [ESP + 0x38]      ; 004349ab
    CMP dword ptr [0x005b7644],0x0      ; 004349af | DAT_005b7644
    JZ 0x00434a8c                       ; 004349b6
        ;   XREF to: 00434a8c (CONDITIONAL_JUMP)  ; LAB_00434a8c
    MOV ECX,0xffffffff                  ; 004349bc
    MOV dword ptr [ESP + 0x4],EBX       ; 004349c1
    MOV EBP,EDX                         ; 004349c5
    XOR ESI,ESI                         ; 004349c7
    XOR EAX,EAX                         ; 004349c9
    TEST EDX,EDX                        ; 004349cb
    JLE 0x004349eb                      ; 004349cd
        ;   XREF to: 004349eb (CONDITIONAL_JUMP)  ; LAB_004349eb
    IMUL EDX,dword ptr [EBX],0x30       ; 004349cf
        ;   Label: LAB_004349cf
    MOV EDX,dword ptr [EDX + 0x5c5024]  ; 004349d2 | DAT_005c5024
    TEST EDX,0x80000000                 ; 004349d8
    JZ 0x004349e1                       ; 004349de
        ;   XREF to: 004349e1 (CONDITIONAL_JUMP)  ; LAB_004349e1
    INC ESI                             ; 004349e0
    ADD EBX,0x4                         ; 004349e1
        ;   Label: LAB_004349e1
    INC EAX                             ; 004349e4
    AND ECX,EDX                         ; 004349e5
    CMP EAX,EBP                         ; 004349e7
    JL 0x004349cf                       ; 004349e9
        ;   XREF to: 004349cf (CONDITIONAL_JUMP)  ; LAB_004349cf
    CMP ESI,EBP                         ; 004349eb
        ;   Label: LAB_004349eb
    JNZ 0x004349f8                      ; 004349ed
        ;   XREF to: 004349f8 (CONDITIONAL_JUMP)  ; LAB_004349f8
    TEST CL,0xff                        ; 004349ef
    JNZ 0x00434a98                      ; 004349f2
        ;   XREF to: 00434a98 (CONDITIONAL_JUMP)  ; LAB_00434a98
    TEST ESI,ESI                        ; 004349f8
        ;   Label: LAB_004349f8
    JNZ 0x00434b65                      ; 004349fa
        ;   XREF to: 00434b65 (CONDITIONAL_JUMP)  ; LAB_00434b65
    CMP dword ptr [0x01c02594],0x0      ; 00434a00 | DAT_01c02594
    JZ 0x00434af0                       ; 00434a07
        ;   XREF to: 00434af0 (CONDITIONAL_JUMP)  ; LAB_00434af0
    XOR EAX,EAX                         ; 00434a0d
    TEST EBP,EBP                        ; 00434a0f
    JLE 0x00434a30                      ; 00434a11
        ;   XREF to: 00434a30 (CONDITIONAL_JUMP)  ; LAB_00434a30
    MOV EBX,dword ptr [ESP + 0x4]       ; 00434a13
    IMUL EDX,dword ptr [EBX],0x30       ; 00434a17
        ;   Label: LAB_00434a17
    INC EAX                             ; 00434a1a
    ADD EDX,0x5c5014                    ; 00434a1b | DAT_005c5014
    ADD EBX,0x4                         ; 00434a21
    MOV dword ptr [EAX*0x4 + 0x767270],EDX ; 00434a24 | DAT_00767274 | DAT_00767278
    CMP EAX,EBP                         ; 00434a2b
    JL 0x00434a17                       ; 00434a2d
        ;   XREF to: 00434a17 (CONDITIONAL_JUMP)  ; LAB_00434a17
    NOP                                 ; 00434a2f
    CMP dword ptr [0x006b0280],0x0      ; 00434a30 | DAT_006b0280
        ;   Label: LAB_00434a30
    JZ 0x00434ac6                       ; 00434a37
        ;   XREF to: 00434ac6 (CONDITIONAL_JUMP)  ; LAB_00434ac6
    CMP EBP,0x3                         ; 00434a3d
    JLE 0x00434aa5                      ; 00434a40
        ;   XREF to: 00434aa5 (CONDITIONAL_JUMP)  ; LAB_00434aa5
    LEA EAX,[EBP + -0x2]                ; 00434a42
    XOR EBX,EBX                         ; 00434a45
    MOV dword ptr [ESP],EAX             ; 00434a47
    LEA EDI,[EAX*0x4 + 0x0]             ; 00434a4a
    XOR ESI,ESI                         ; 00434a51
    TEST EDI,EDI                        ; 00434a53
    JLE 0x00434a7f                      ; 00434a55
        ;   XREF to: 00434a7f (CONDITIONAL_JUMP)  ; LAB_00434a7f
    MOV EAX,dword ptr [EBX + 0x76727c]  ; 00434a57 | DAT_0076727c | DAT_00767280
        ;   Label: LAB_00434a57
    PUSH EAX                            ; 00434a5d
    MOV EDX,dword ptr [EBX + 0x767278]  ; 00434a5e | DAT_00767278 | DAT_0076727c
    PUSH EDX                            ; 00434a64
    MOV ECX,dword ptr [0x00767274]      ; 00434a65 | DAT_00767274
    PUSH ECX                            ; 00434a6b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00434a6c
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10()
    ADD ESP,0xc                         ; 00434a71
    TEST EAX,EAX                        ; 00434a74
    JZ 0x00434aa2                       ; 00434a76
        ;   XREF to: 00434aa2 (CONDITIONAL_JUMP)  ; LAB_00434aa2
    ADD EBX,0x4                         ; 00434a78
        ;   Label: LAB_00434a78
    CMP EBX,EDI                         ; 00434a7b
    JL 0x00434a57                       ; 00434a7d
        ;   XREF to: 00434a57 (CONDITIONAL_JUMP)  ; LAB_00434a57
    CMP ESI,dword ptr [ESP]             ; 00434a7f
        ;   Label: LAB_00434a7f
    JNZ 0x00434ac6                      ; 00434a82
        ;   XREF to: 00434ac6 (CONDITIONAL_JUMP)  ; LAB_00434ac6
    ADD ESP,0x20                        ; 00434a84
        ;   Label: LAB_00434a84
    POP EBP                             ; 00434a87
    POP EDI                             ; 00434a88
    POP ESI                             ; 00434a89
    POP EBX                             ; 00434a8a
    RET                                 ; 00434a8b
    PUSH EDX                            ; 00434a8c
        ;   Label: LAB_00434a8c
    PUSH EBX                            ; 00434a8d
    CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 ; 00434a8e
        ;   XREF to: 004fb390 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390()
    ADD ESP,0x8                         ; 00434a93
    JMP 0x00434a84                      ; 00434a96
        ;   XREF to: 00434a84 (UNCONDITIONAL_JUMP)  ; LAB_00434a84
    XOR EBX,EBX                         ; 00434a98
        ;   Label: LAB_00434a98
    MOV dword ptr [0x00766c70],EBX      ; 00434a9a | DAT_00766c70
    JMP 0x00434a84                      ; 00434aa0
        ;   XREF to: 00434a84 (UNCONDITIONAL_JUMP)  ; LAB_00434a84
    INC ESI                             ; 00434aa2
        ;   Label: LAB_00434aa2
    JMP 0x00434a78                      ; 00434aa3
        ;   XREF to: 00434a78 (UNCONDITIONAL_JUMP)  ; LAB_00434a78
    MOV EDX,dword ptr [0x0076727c]      ; 00434aa5 | DAT_0076727c
        ;   Label: LAB_00434aa5
    PUSH EDX                            ; 00434aab
    MOV ECX,dword ptr [0x00767278]      ; 00434aac | DAT_00767278
    PUSH ECX                            ; 00434ab2
    MOV EBX,dword ptr [0x00767274]      ; 00434ab3 | DAT_00767274
    PUSH EBX                            ; 00434ab9
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00434aba
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10()
    ADD ESP,0xc                         ; 00434abf
    TEST EAX,EAX                        ; 00434ac2
    JZ 0x00434a84                       ; 00434ac4
        ;   XREF to: 00434a84 (CONDITIONAL_JUMP)  ; LAB_00434a84
    MOV EBX,dword ptr [0x01c039a0]      ; 00434ac6 | DAT_01c039a0
        ;   Label: LAB_00434ac6
    PUSH EBX                            ; 00434acc
    MOV ESI,dword ptr [0x01e52ef8]      ; 00434acd | DAT_01e52ef8
    PUSH EBP                            ; 00434ad3
    INC ESI                             ; 00434ad4
    PUSH 0x767274                       ; 00434ad5 | DAT_00767274
    MOV dword ptr [0x01e52ef8],ESI      ; 00434ada | DAT_01e52ef8
    CALL wincore_windll.cpp_drawPolygon2_FUN_00532650 ; 00434ae0
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_drawPolygon2_FUN_00532650()
    ADD ESP,0xc                         ; 00434ae5
    ADD ESP,0x20                        ; 00434ae8
    POP EBP                             ; 00434aeb
    POP EDI                             ; 00434aec
    POP ESI                             ; 00434aed
    POP EBX                             ; 00434aee
    RET                                 ; 00434aef
    MOV dword ptr [ESP + 0xc],ESI       ; 00434af0
        ;   Label: LAB_00434af0
    MOV dword ptr [0x00766c70],EBP      ; 00434af4 | DAT_00766c70
    TEST EBP,EBP                        ; 00434afa
    JLE 0x00434b40                      ; 00434afc
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    MOV EBX,dword ptr [ESP + 0x4]       ; 00434afe
    MOV EDX,0x766c74                    ; 00434b02 | DAT_00766c74
    IMUL ESI,dword ptr [EBX],0x30       ; 00434b07
        ;   Label: LAB_00434b07
    MOV ECX,0x30                        ; 00434b0a
    ADD ESI,0x5c5014                    ; 00434b0f | DAT_005c5014
    MOV EDI,EDX                         ; 00434b15
    PUSH EDI                            ; 00434b17 | DAT_00766c74 | DAT_00766ca4
    MOV EAX,ECX                         ; 00434b18
    SHR ECX,0x2                         ; 00434b1a
    MOVSD.REP ES:EDI,ESI                ; 00434b1d | DAT_005c5014 | DAT_00766c74 | DAT_005c5018
    MOV CL,AL                           ; 00434b1f
    AND CL,0x3                          ; 00434b21
    MOVSB.REP ES:EDI,ESI                ; 00434b24 | DAT_005c5018 | DAT_00766c78
    POP EDI                             ; 00434b26
    MOV EAX,dword ptr [ESP + 0xc]       ; 00434b27
    ADD EBX,0x4                         ; 00434b2b
    INC EAX                             ; 00434b2e
    ADD EDX,0x30                        ; 00434b2f
    MOV dword ptr [ESP + 0xc],EAX       ; 00434b32
    CMP EBP,EAX                         ; 00434b36
    JG 0x00434b07                       ; 00434b38
        ;   XREF to: 00434b07 (CONDITIONAL_JUMP)  ; LAB_00434b07
    LEA EAX,[EAX]                       ; 00434b3a
    MOV EBX,dword ptr [0x00766c70]      ; 00434b40 | DAT_00766c70
        ;   Label: LAB_00434b40
    CMP EBX,0x2                         ; 00434b46
    JLE 0x00434a84                      ; 00434b49
        ;   XREF to: 00434a84 (CONDITIONAL_JUMP)  ; LAB_00434a84
    PUSH EBX                            ; 00434b4f
    PUSH 0x766c74                       ; 00434b50 | DAT_00766c74
    CALL engine_prim.c_renderScanlinePolygon_FUN_004fad00 ; 00434b55
        ;   XREF to: 004fad00 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_renderScanlinePolygon_FUN_004fad00()
    ADD ESP,0x8                         ; 00434b5a
    ADD ESP,0x20                        ; 00434b5d
    POP EBP                             ; 00434b60
    POP EDI                             ; 00434b61
    POP ESI                             ; 00434b62
    POP EBX                             ; 00434b63
    RET                                 ; 00434b64
    XOR EBX,EBX                         ; 00434b65
        ;   Label: LAB_00434b65
    MOV dword ptr [0x00767b3c],EBP      ; 00434b67 | DAT_00767b3c
    MOV dword ptr [0x00767b40],EBX      ; 00434b6d | DAT_00767b40
    MOV dword ptr [0x00767b44],EBX      ; 00434b73 | DAT_00767b44
    MOV dword ptr [0x00767b48],EBX      ; 00434b79 | DAT_00767b48
    MOV dword ptr [0x00766c70],EBX      ; 00434b7f | DAT_00766c70
    TEST EBP,EBP                        ; 00434b85
    JLE 0x00434bd0                      ; 00434b87
        ;   XREF to: 00434bd0 (CONDITIONAL_JUMP)  ; LAB_00434bd0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00434b89
    MOV EDX,0x76814c                    ; 00434b8d | DAT_0076814c
    MOV dword ptr [ESP + 0x8],EAX       ; 00434b92
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434b96
        ;   Label: LAB_00434b96
    IMUL ESI,dword ptr [EAX],0x30       ; 00434b9a
    MOV EDI,EDX                         ; 00434b9d
    MOV ECX,0x30                        ; 00434b9f
    ADD ESI,0x5c5014                    ; 00434ba4 | DAT_005c5014
    PUSH EDI                            ; 00434baa | DAT_0076814c | DAT_0076817c
    MOV EAX,ECX                         ; 00434bab
    SHR ECX,0x2                         ; 00434bad
    MOVSD.REP ES:EDI,ESI                ; 00434bb0 | DAT_005c5014 | DAT_0076814c | DAT_005c5018
    MOV CL,AL                           ; 00434bb2
    AND CL,0x3                          ; 00434bb4
    MOVSB.REP ES:EDI,ESI                ; 00434bb7 | DAT_005c5018 | DAT_00768150
    POP EDI                             ; 00434bb9
    MOV ESI,dword ptr [ESP + 0x8]       ; 00434bba
    INC EBX                             ; 00434bbe
    ADD ESI,0x4                         ; 00434bbf
    ADD EDX,0x30                        ; 00434bc2
    MOV dword ptr [ESP + 0x8],ESI       ; 00434bc5
    CMP EBX,EBP                         ; 00434bc9
    JL 0x00434b96                       ; 00434bcb
        ;   XREF to: 00434b96 (CONDITIONAL_JUMP)  ; LAB_00434b96
    LEA EAX,[EAX]                       ; 00434bcd
    XOR EDI,EDI                         ; 00434bd0
        ;   Label: LAB_00434bd0
    MOV EBP,dword ptr [0x00767b3c]      ; 00434bd2 | DAT_00767b3c
    MOV dword ptr [ESP + 0x1c],EDI      ; 00434bd8
    TEST EBP,EBP                        ; 00434bdc
    JLE 0x00434c70                      ; 00434bde
        ;   XREF to: 00434c70 (CONDITIONAL_JUMP)  ; LAB_00434c70
    MOV EBX,0x76814c                    ; 00434be4 | DAT_0076814c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00434be9
        ;   Label: LAB_00434be9
    MOV EDI,dword ptr [0x00767b3c]      ; 00434bed | DAT_00767b3c
    INC EAX                             ; 00434bf3
    CMP EAX,EDI                         ; 00434bf4
    JNZ 0x00434bfa                      ; 00434bf6
        ;   XREF to: 00434bfa (CONDITIONAL_JUMP)  ; LAB_00434bfa
    XOR EAX,EDI                         ; 00434bf8
    IMUL EAX,EAX,0x30                   ; 00434bfa
        ;   Label: LAB_00434bfa
    MOV EBP,0x76814c                    ; 00434bfd | DAT_0076814c
    MOV EDX,EBX                         ; 00434c02
    MOV ECX,dword ptr [EBX]             ; 00434c04 | DAT_0076814c | DAT_0076817c
    MOV ESI,dword ptr [EBX + 0x8]       ; 00434c06 | DAT_00768154 | DAT_00768184
    ADD EBP,EAX                         ; 00434c09
    XOR EAX,EAX                         ; 00434c0b
    CMP ECX,ESI                         ; 00434c0d
    JL 0x00434c16                       ; 00434c0f
        ;   XREF to: 00434c16 (CONDITIONAL_JUMP)  ; LAB_00434c16
    MOV EAX,0x1                         ; 00434c11
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434c16 | DAT_00768154
        ;   Label: LAB_00434c16
    CMP EDI,dword ptr [EBP]             ; 00434c19 | DAT_0076814c
    JG 0x00434c20                       ; 00434c1c
        ;   XREF to: 00434c20 (CONDITIONAL_JUMP)  ; LAB_00434c20
    OR AL,0x2                           ; 00434c1e
    CMP EAX,0x3                         ; 00434c20
        ;   Label: LAB_00434c20
    JA 0x00434c56                       ; 00434c23
        ;   XREF to: 00434c56 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434958]  ; 00434c25 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 00434c2c | DAT_00767b40
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434c33
    MOV ESI,EDX                         ; 00434c38
    ADD EDI,0x767b4c                    ; 00434c3a | DAT_00767b4c
    PUSH EDI                            ; 00434c40 | DAT_00767b4c
    MOV EAX,ECX                         ; 00434c41
    SHR ECX,0x2                         ; 00434c43
    MOVSD.REP ES:EDI,ESI                ; 00434c46 | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 00434c48
    AND CL,0x3                          ; 00434c4a
    MOVSB.REP ES:EDI,ESI                ; 00434c4d | DAT_00768180 | DAT_00767b50
    POP EDI                             ; 00434c4f
    INC dword ptr [0x00767b40]          ; 00434c50 | DAT_00767b40
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00434c56
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x00767b3c]      ; 00434c5a | DAT_00767b3c
    INC EAX                             ; 00434c60
    ADD EBX,0x30                        ; 00434c61
    MOV dword ptr [ESP + 0x1c],EAX      ; 00434c64
    CMP EAX,EDX                         ; 00434c68
    JL 0x00434be9                       ; 00434c6a
        ;   XREF to: 00434be9 (CONDITIONAL_JUMP)  ; LAB_00434be9
    MOV ECX,dword ptr [0x00767b40]      ; 00434c70 | DAT_00767b40
        ;   Label: LAB_00434c70
    CMP ECX,0x3                         ; 00434c76
    JL 0x00434b40                       ; 00434c79
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    XOR EBX,EBX                         ; 00434c7f
    MOV dword ptr [ESP + 0x10],EBX      ; 00434c81
    TEST ECX,ECX                        ; 00434c85
    JLE 0x00434d1f                      ; 00434c87
        ;   XREF to: 00434d1f (CONDITIONAL_JUMP)  ; LAB_00434d1f
    MOV EBX,0x767b4c                    ; 00434c8d | DAT_00767b4c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00434c92
        ;   Label: LAB_00434c92
    MOV EBP,dword ptr [0x00767b40]      ; 00434c96 | DAT_00767b40
    INC EAX                             ; 00434c9c
    CMP EAX,EBP                         ; 00434c9d
    JNZ 0x00434ca3                      ; 00434c9f
        ;   XREF to: 00434ca3 (CONDITIONAL_JUMP)  ; LAB_00434ca3
    XOR EAX,EBP                         ; 00434ca1
    IMUL EAX,EAX,0x30                   ; 00434ca3
        ;   Label: LAB_00434ca3
    MOV EBP,0x767b4c                    ; 00434ca6 | DAT_00767b4c
    MOV EDX,EBX                         ; 00434cab
    MOV ECX,dword ptr [EBX + 0x8]       ; 00434cad | DAT_00767b54 | DAT_00767b84
    MOV ESI,dword ptr [EBX]             ; 00434cb0 | DAT_00767b4c | DAT_00767b7c
    NEG ECX                             ; 00434cb2
    ADD EBP,EAX                         ; 00434cb4
    XOR EAX,EAX                         ; 00434cb6
    CMP ECX,ESI                         ; 00434cb8
    JL 0x00434cc1                       ; 00434cba
        ;   XREF to: 00434cc1 (CONDITIONAL_JUMP)  ; LAB_00434cc1
    MOV EAX,0x1                         ; 00434cbc
    MOV ECX,dword ptr [EBP + 0x8]       ; 00434cc1 | DAT_00767b54
        ;   Label: LAB_00434cc1
    MOV EDI,dword ptr [EBP]             ; 00434cc4 | DAT_00767b4c
    NEG ECX                             ; 00434cc7
    CMP ECX,EDI                         ; 00434cc9
    JL 0x00434ccf                       ; 00434ccb
        ;   XREF to: 00434ccf (CONDITIONAL_JUMP)  ; LAB_00434ccf
    OR AL,0x2                           ; 00434ccd
    CMP EAX,0x3                         ; 00434ccf
        ;   Label: LAB_00434ccf
    JA 0x00434d05                       ; 00434cd2
        ;   XREF to: 00434d05 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434968]  ; 00434cd4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 00434cdb | DAT_00767b44
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434ce2
    MOV ESI,EDX                         ; 00434ce7
    ADD EDI,0x76874c                    ; 00434ce9 | DAT_0076874c
    PUSH EDI                            ; 00434cef | DAT_0076874c
    MOV EAX,ECX                         ; 00434cf0
    SHR ECX,0x2                         ; 00434cf2
    MOVSD.REP ES:EDI,ESI                ; 00434cf5 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 00434cf7
    AND CL,0x3                          ; 00434cf9
    MOVSB.REP ES:EDI,ESI                ; 00434cfc | DAT_00767b50 | DAT_00768750
    POP EDI                             ; 00434cfe
    INC dword ptr [0x00767b44]          ; 00434cff | DAT_00767b44
    MOV EDX,dword ptr [ESP + 0x10]      ; 00434d05
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b40]      ; 00434d09 | DAT_00767b40
    INC EDX                             ; 00434d0f
    ADD EBX,0x30                        ; 00434d10
    MOV dword ptr [ESP + 0x10],EDX      ; 00434d13
    CMP EDX,ECX                         ; 00434d17
    JL 0x00434c92                       ; 00434d19
        ;   XREF to: 00434c92 (CONDITIONAL_JUMP)  ; LAB_00434c92
    MOV EBX,dword ptr [0x00767b44]      ; 00434d1f | DAT_00767b44
        ;   Label: LAB_00434d1f
    CMP EBX,0x3                         ; 00434d25
    JL 0x00434b40                       ; 00434d28
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    XOR ESI,ESI                         ; 00434d2e
    MOV dword ptr [ESP + 0x14],ESI      ; 00434d30
    TEST EBX,EBX                        ; 00434d34
    JLE 0x00434dc9                      ; 00434d36
        ;   XREF to: 00434dc9 (CONDITIONAL_JUMP)  ; LAB_00434dc9
    MOV EBX,0x76874c                    ; 00434d3c | DAT_0076874c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00434d41
        ;   Label: LAB_00434d41
    MOV EBP,dword ptr [0x00767b44]      ; 00434d45 | DAT_00767b44
    INC EAX                             ; 00434d4b
    CMP EAX,EBP                         ; 00434d4c
    JNZ 0x00434d52                      ; 00434d4e
        ;   XREF to: 00434d52 (CONDITIONAL_JUMP)  ; LAB_00434d52
    XOR EAX,EBP                         ; 00434d50
    IMUL EAX,EAX,0x30                   ; 00434d52
        ;   Label: LAB_00434d52
    MOV EBP,0x76874c                    ; 00434d55 | DAT_0076874c
    MOV EDX,EBX                         ; 00434d5a
    MOV ECX,dword ptr [EBX + 0x4]       ; 00434d5c | DAT_00768750 | DAT_00768780
    MOV ESI,dword ptr [EBX + 0x8]       ; 00434d5f | DAT_00768754 | DAT_00768784
    ADD EBP,EAX                         ; 00434d62
    XOR EAX,EAX                         ; 00434d64
    CMP ECX,ESI                         ; 00434d66
    JL 0x00434d6f                       ; 00434d68
        ;   XREF to: 00434d6f (CONDITIONAL_JUMP)  ; LAB_00434d6f
    MOV EAX,0x1                         ; 00434d6a
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434d6f | DAT_00768754
        ;   Label: LAB_00434d6f
    CMP EDI,dword ptr [EBP + 0x4]       ; 00434d72 | DAT_00768750
    JG 0x00434d79                       ; 00434d75
        ;   XREF to: 00434d79 (CONDITIONAL_JUMP)  ; LAB_00434d79
    OR AL,0x2                           ; 00434d77
    CMP EAX,0x3                         ; 00434d79
        ;   Label: LAB_00434d79
    JA 0x00434daf                       ; 00434d7c
        ;   XREF to: 00434daf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434978]  ; 00434d7e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 00434d85 | DAT_00767b48
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434d8c
    MOV ESI,EDX                         ; 00434d91
    ADD EDI,0x768d4c                    ; 00434d93 | DAT_00768d4c
    PUSH EDI                            ; 00434d99 | DAT_00768d4c
    MOV EAX,ECX                         ; 00434d9a
    SHR ECX,0x2                         ; 00434d9c
    MOVSD.REP ES:EDI,ESI                ; 00434d9f | DAT_0076877c | DAT_00768d4c | DAT_00768780
    MOV CL,AL                           ; 00434da1
    AND CL,0x3                          ; 00434da3
    MOVSB.REP ES:EDI,ESI                ; 00434da6 | DAT_00768780 | DAT_00768d50
    POP EDI                             ; 00434da8
    INC dword ptr [0x00767b48]          ; 00434da9 | DAT_00767b48
    MOV EDX,dword ptr [ESP + 0x14]      ; 00434daf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b44]      ; 00434db3 | DAT_00767b44
    INC EDX                             ; 00434db9
    ADD EBX,0x30                        ; 00434dba
    MOV dword ptr [ESP + 0x14],EDX      ; 00434dbd
    CMP EDX,ECX                         ; 00434dc1
    JL 0x00434d41                       ; 00434dc3
        ;   XREF to: 00434d41 (CONDITIONAL_JUMP)  ; LAB_00434d41
    MOV EBX,dword ptr [0x00767b48]      ; 00434dc9 | DAT_00767b48
        ;   Label: LAB_00434dc9
    CMP EBX,0x3                         ; 00434dcf
    JL 0x00434b40                       ; 00434dd2
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    XOR ESI,ESI                         ; 00434dd8
    MOV dword ptr [ESP + 0x18],ESI      ; 00434dda
    TEST EBX,EBX                        ; 00434dde
    JLE 0x00434e79                      ; 00434de0
        ;   XREF to: 00434e79 (CONDITIONAL_JUMP)  ; LAB_00434e79
    MOV EBX,0x768d4c                    ; 00434de6 | DAT_00768d4c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00434deb
        ;   Label: LAB_00434deb
    MOV EDI,dword ptr [0x00767b48]      ; 00434def | DAT_00767b48
    INC EAX                             ; 00434df5
    CMP EAX,EDI                         ; 00434df6
    JNZ 0x00434dfc                      ; 00434df8
        ;   XREF to: 00434dfc (CONDITIONAL_JUMP)  ; LAB_00434dfc
    XOR EAX,EDI                         ; 00434dfa
    IMUL EAX,EAX,0x30                   ; 00434dfc
        ;   Label: LAB_00434dfc
    MOV EBP,0x768d4c                    ; 00434dff | DAT_00768d4c
    MOV EDX,EBX                         ; 00434e04
    MOV ECX,dword ptr [EBX + 0x8]       ; 00434e06 | DAT_00768d54 | DAT_00768d84
    MOV ESI,dword ptr [EBX + 0x4]       ; 00434e09 | DAT_00768d50 | DAT_00768d80
    NEG ECX                             ; 00434e0c
    ADD EBP,EAX                         ; 00434e0e
    XOR EAX,EAX                         ; 00434e10
    CMP ECX,ESI                         ; 00434e12
    JL 0x00434e1b                       ; 00434e14
        ;   XREF to: 00434e1b (CONDITIONAL_JUMP)  ; LAB_00434e1b
    MOV EAX,0x1                         ; 00434e16
    MOV ECX,dword ptr [EBP + 0x8]       ; 00434e1b | DAT_00768d54
        ;   Label: LAB_00434e1b
    MOV EDI,dword ptr [EBP + 0x4]       ; 00434e1e | DAT_00768d50
    NEG ECX                             ; 00434e21
    CMP ECX,EDI                         ; 00434e23
    JL 0x00434e29                       ; 00434e25
        ;   XREF to: 00434e29 (CONDITIONAL_JUMP)  ; LAB_00434e29
    OR AL,0x2                           ; 00434e27
    CMP EAX,0x3                         ; 00434e29
        ;   Label: LAB_00434e29
    JA 0x00434e5f                       ; 00434e2c
        ;   XREF to: 00434e5f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434988]  ; 00434e2e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 00434e35 | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434e3c
    MOV ESI,EDX                         ; 00434e41
    ADD EDI,0x766c74                    ; 00434e43 | DAT_00766c74
    PUSH EDI                            ; 00434e49 | DAT_00766c74
    MOV EAX,ECX                         ; 00434e4a
    SHR ECX,0x2                         ; 00434e4c
    MOVSD.REP ES:EDI,ESI                ; 00434e4f | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 00434e51
    AND CL,0x3                          ; 00434e53
    MOVSB.REP ES:EDI,ESI                ; 00434e56 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 00434e58
    INC dword ptr [0x00766c70]          ; 00434e59 | DAT_00766c70
    MOV EDX,dword ptr [ESP + 0x18]      ; 00434e5f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b48]      ; 00434e63 | DAT_00767b48
    INC EDX                             ; 00434e69
    ADD EBX,0x30                        ; 00434e6a
    MOV dword ptr [ESP + 0x18],EDX      ; 00434e6d
    CMP EDX,ECX                         ; 00434e71
    JL 0x00434deb                       ; 00434e73
        ;   XREF to: 00434deb (CONDITIONAL_JUMP)  ; LAB_00434deb
    MOV EBX,dword ptr [0x00766c70]      ; 00434e79 | DAT_00766c70
        ;   Label: LAB_00434e79
    CMP EBX,0x3                         ; 00434e7f
    JL 0x00434b40                       ; 00434e82
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    MOV EAX,0x766c74                    ; 00434e88 | DAT_00766c74
    XOR EBP,EBP                         ; 00434e8d
    TEST EBX,EBX                        ; 00434e8f
    JLE 0x00434b40                      ; 00434e91
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    MOV ECX,dword ptr [EAX + 0x8]       ; 00434e97 | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_00434e97
    TEST ECX,ECX                        ; 00434e9a
    JZ 0x004350bc                       ; 00434e9c
        ;   XREF to: 004350bc (CONDITIONAL_JUMP)  ; LAB_004350bc
    CMP ECX,dword ptr [EAX]             ; 00434ea2 | DAT_00766c74 | DAT_00766ca4
    JGE 0x004350cd                      ; 00434ea4
        ;   XREF to: 004350cd (CONDITIONAL_JUMP)  ; LAB_004350cd
    MOV dword ptr [EAX],ECX             ; 00434eaa | DAT_00766c74 | DAT_00766ca4
    MOV EDX,dword ptr [0x00766c70]      ; 00434eac | DAT_00766c70
        ;   Label: LAB_00434eac
    INC EBP                             ; 00434eb2
    ADD EAX,0x30                        ; 00434eb3
    CMP EBP,EDX                         ; 00434eb6
    JGE 0x00434b40                      ; 00434eb8
        ;   XREF to: 00434b40 (CONDITIONAL_JUMP)  ; LAB_00434b40
    JMP 0x00434e97                      ; 00434ebe
        ;   XREF to: 00434e97 (UNCONDITIONAL_JUMP)  ; LAB_00434e97
    IMUL EAX,dword ptr [0x00767b40],0x30 ; 00434ec0 | DAT_00767b40
        ;   Label: caseD_1
    ADD EAX,0x767b4c                    ; 00434ec7 | DAT_00767b4c
    PUSH EAX                            ; 00434ecc | DAT_00767b4c
    PUSH EDX                            ; 00434ecd | DAT_0076817c
    PUSH EBP                            ; 00434ece
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00434ecf
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV ESI,dword ptr [0x00767b40]      ; 00434ed4 | DAT_00767b40
    INC ESI                             ; 00434eda
    ADD ESP,0xc                         ; 00434edb
    MOV dword ptr [0x00767b40],ESI      ; 00434ede | DAT_00767b40
    JMP 0x00434c56                      ; 00434ee4
        ;   XREF to: 00434c56 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 00434ee9 | DAT_00767b40
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00434ef0
    MOV ESI,EDX                         ; 00434ef5
    ADD EDI,0x767b4c                    ; 00434ef7 | DAT_00767b4c
    PUSH EDI                            ; 00434efd | DAT_00767b4c
    MOV EAX,ECX                         ; 00434efe
    SHR ECX,0x2                         ; 00434f00
    MOVSD.REP ES:EDI,ESI                ; 00434f03 | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 00434f05
    AND CL,0x3                          ; 00434f07
    MOVSB.REP ES:EDI,ESI                ; 00434f0a | DAT_00768180 | DAT_00767b50
    POP EDI                             ; 00434f0c
    MOV ECX,dword ptr [0x00767b40]      ; 00434f0d | DAT_00767b40
    INC ECX                             ; 00434f13
    MOV dword ptr [0x00767b40],ECX      ; 00434f14 | DAT_00767b40
    IMUL EAX,ECX,0x30                   ; 00434f1a
    ADD EAX,0x767b4c                    ; 00434f1d | DAT_00767b4c
    PUSH EAX                            ; 00434f22 | DAT_00767b7c
    PUSH EBP                            ; 00434f23
    PUSH EDX                            ; 00434f24 | DAT_0076817c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00434f25
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0()
    MOV EDI,dword ptr [0x00767b40]      ; 00434f2a | DAT_00767b40
    INC EDI                             ; 00434f30
    ADD ESP,0xc                         ; 00434f31
    MOV dword ptr [0x00767b40],EDI      ; 00434f34 | DAT_00767b40
    JMP 0x00434c56                      ; 00434f3a
        ;   XREF to: 00434c56 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b44],0x30 ; 00434f3f | DAT_00767b44
        ;   Label: caseD_1
    ADD EAX,0x76874c                    ; 00434f46 | DAT_0076874c
    PUSH EAX                            ; 00434f4b | DAT_0076874c
    PUSH EDX                            ; 00434f4c | DAT_00767b4c
    PUSH EBP                            ; 00434f4d
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00434f4e
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV ESI,dword ptr [0x00767b44]      ; 00434f53 | DAT_00767b44
    INC ESI                             ; 00434f59
    ADD ESP,0xc                         ; 00434f5a
    MOV dword ptr [0x00767b44],ESI      ; 00434f5d | DAT_00767b44
    JMP 0x00434d05                      ; 00434f63
        ;   XREF to: 00434d05 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 00434f68 | DAT_00767b44
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00434f6f
    MOV ESI,EDX                         ; 00434f74
    ADD EDI,0x76874c                    ; 00434f76 | DAT_0076874c
    PUSH EDI                            ; 00434f7c | DAT_0076874c
    MOV EAX,ECX                         ; 00434f7d
    SHR ECX,0x2                         ; 00434f7f
    MOVSD.REP ES:EDI,ESI                ; 00434f82 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 00434f84
    AND CL,0x3                          ; 00434f86
    MOVSB.REP ES:EDI,ESI                ; 00434f89 | DAT_00767b50 | DAT_00768750
    POP EDI                             ; 00434f8b
    MOV ECX,dword ptr [0x00767b44]      ; 00434f8c | DAT_00767b44
    INC ECX                             ; 00434f92
    MOV dword ptr [0x00767b44],ECX      ; 00434f93 | DAT_00767b44
    IMUL EAX,ECX,0x30                   ; 00434f99
    ADD EAX,0x76874c                    ; 00434f9c | DAT_0076874c
    PUSH EAX                            ; 00434fa1 | DAT_0076877c
    PUSH EBP                            ; 00434fa2
    PUSH EDX                            ; 00434fa3 | DAT_00767b4c
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00434fa4
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0()
    MOV EDI,dword ptr [0x00767b44]      ; 00434fa9 | DAT_00767b44
    INC EDI                             ; 00434faf
    ADD ESP,0xc                         ; 00434fb0
    MOV dword ptr [0x00767b44],EDI      ; 00434fb3 | DAT_00767b44
    JMP 0x00434d05                      ; 00434fb9
        ;   XREF to: 00434d05 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b48],0x30 ; 00434fbe | DAT_00767b48
        ;   Label: caseD_1
    ADD EAX,0x768d4c                    ; 00434fc5 | DAT_00768d4c
    PUSH EAX                            ; 00434fca | DAT_00768d4c
    PUSH EDX                            ; 00434fcb | DAT_0076877c
    PUSH EBP                            ; 00434fcc
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00434fcd
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00()
    MOV ESI,dword ptr [0x00767b48]      ; 00434fd2 | DAT_00767b48
    INC ESI                             ; 00434fd8
    ADD ESP,0xc                         ; 00434fd9
    MOV dword ptr [0x00767b48],ESI      ; 00434fdc | DAT_00767b48
    JMP 0x00434daf                      ; 00434fe2
        ;   XREF to: 00434daf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 00434fe7 | DAT_00767b48
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00434fee
    MOV ESI,EDX                         ; 00434ff3
    ADD EDI,0x768d4c                    ; 00434ff5 | DAT_00768d4c
    PUSH EDI                            ; 00434ffb | DAT_00768d4c
    MOV EAX,ECX                         ; 00434ffc
    SHR ECX,0x2                         ; 00434ffe
    MOVSD.REP ES:EDI,ESI                ; 00435001 | DAT_0076877c | DAT_00768d4c | DAT_00768780
    MOV CL,AL                           ; 00435003
    AND CL,0x3                          ; 00435005
    MOVSB.REP ES:EDI,ESI                ; 00435008 | DAT_00768780 | DAT_00768d50
    POP EDI                             ; 0043500a
    MOV ECX,dword ptr [0x00767b48]      ; 0043500b | DAT_00767b48
    INC ECX                             ; 00435011
    MOV dword ptr [0x00767b48],ECX      ; 00435012 | DAT_00767b48
    IMUL EAX,ECX,0x30                   ; 00435018
    ADD EAX,0x768d4c                    ; 0043501b | DAT_00768d4c
    PUSH EAX                            ; 00435020 | DAT_00768d7c
    PUSH EBP                            ; 00435021
    PUSH EDX                            ; 00435022 | DAT_0076877c
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00435023
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00()
    MOV EDI,dword ptr [0x00767b48]      ; 00435028 | DAT_00767b48
    INC EDI                             ; 0043502e
    ADD ESP,0xc                         ; 0043502f
    MOV dword ptr [0x00767b48],EDI      ; 00435032 | DAT_00767b48
    JMP 0x00434daf                      ; 00435038
        ;   XREF to: 00434daf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0043503d | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 00435044 | DAT_00766c74
    PUSH EAX                            ; 00435049 | DAT_00766c74
    PUSH EDX                            ; 0043504a | DAT_00768d4c
    PUSH EBP                            ; 0043504b
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 0043504c
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30()
    MOV ESI,dword ptr [0x00766c70]      ; 00435051 | DAT_00766c70
    INC ESI                             ; 00435057
    ADD ESP,0xc                         ; 00435058
    MOV dword ptr [0x00766c70],ESI      ; 0043505b | DAT_00766c70
    JMP 0x00434e5f                      ; 00435061
        ;   XREF to: 00434e5f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 00435066 | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043506d
    MOV ESI,EDX                         ; 00435072
    ADD EDI,0x766c74                    ; 00435074 | DAT_00766c74
    PUSH EDI                            ; 0043507a | DAT_00766c74
    MOV EAX,ECX                         ; 0043507b
    SHR ECX,0x2                         ; 0043507d
    MOVSD.REP ES:EDI,ESI                ; 00435080 | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 00435082
    AND CL,0x3                          ; 00435084
    MOVSB.REP ES:EDI,ESI                ; 00435087 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 00435089
    MOV ECX,dword ptr [0x00766c70]      ; 0043508a | DAT_00766c70
    INC ECX                             ; 00435090
    MOV dword ptr [0x00766c70],ECX      ; 00435091 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 00435097
    ADD EAX,0x766c74                    ; 0043509a | DAT_00766c74
    PUSH EAX                            ; 0043509f | DAT_00766ca4
    PUSH EBP                            ; 004350a0
    PUSH EDX                            ; 004350a1 | DAT_00768d4c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 004350a2
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30()
    MOV EDI,dword ptr [0x00766c70]      ; 004350a7 | DAT_00766c70
    INC EDI                             ; 004350ad
    ADD ESP,0xc                         ; 004350ae
    MOV dword ptr [0x00766c70],EDI      ; 004350b1 | DAT_00766c70
    JMP 0x00434e5f                      ; 004350b7
        ;   XREF to: 00434e5f (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 004350bc | DAT_00766cac
        ;   Label: LAB_004350bc
    MOV dword ptr [EAX],ECX             ; 004350c3 | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],ECX       ; 004350c5 | DAT_00766ca8
    JMP 0x00434eac                      ; 004350c8
        ;   XREF to: 00434eac (UNCONDITIONAL_JUMP)  ; LAB_00434eac
    MOV EDX,ECX                         ; 004350cd
        ;   Label: LAB_004350cd
    MOV ESI,dword ptr [EAX]             ; 004350cf | DAT_00766ca4
    NEG EDX                             ; 004350d1
    CMP EDX,ESI                         ; 004350d3
    JLE 0x004350de                      ; 004350d5
        ;   XREF to: 004350de (CONDITIONAL_JUMP)  ; LAB_004350de
    MOV dword ptr [EAX],EDX             ; 004350d7 | DAT_00766ca4
    JMP 0x00434eac                      ; 004350d9
        ;   XREF to: 00434eac (UNCONDITIONAL_JUMP)  ; LAB_00434eac
    MOV EDI,dword ptr [EAX + 0x8]       ; 004350de | DAT_00766cac
        ;   Label: LAB_004350de
    MOV ECX,dword ptr [EAX + 0x4]       ; 004350e1 | DAT_00766ca8
    CMP ECX,EDI                         ; 004350e4
    JLE 0x004350f0                      ; 004350e6
        ;   XREF to: 004350f0 (CONDITIONAL_JUMP)  ; LAB_004350f0
    MOV dword ptr [EAX + 0x4],EDI       ; 004350e8 | DAT_00766ca8
    JMP 0x00434eac                      ; 004350eb
        ;   XREF to: 00434eac (UNCONDITIONAL_JUMP)  ; LAB_00434eac
    CMP EDX,ECX                         ; 004350f0
        ;   Label: LAB_004350f0
    JLE 0x00434eac                      ; 004350f2
        ;   XREF to: 00434eac (CONDITIONAL_JUMP)  ; LAB_00434eac
    MOV dword ptr [EAX + 0x4],EDX       ; 004350f8 | DAT_00766ca8
    JMP 0x00434eac                      ; 004350fb
        ;   XREF to: 00434eac (UNCONDITIONAL_JUMP)  ; LAB_00434eac

