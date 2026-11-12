; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
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
; XREF[10]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406e52
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406d0f
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 004055b4
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 004056d7
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b95
;   engine_3d.c_renderPolygonFogColorOp6_FUN_00403b70 at 00403c41
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407570 at 004076ad
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470 at 00407556
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481b34
;   engine_drender.cpp_FUN_0048478e at 0048494e
;
; Referenced Globals:
;   void* switchdataD_0043de18 = 0043e0ec
;   void* PTR_caseD_3_0043de24 = 0043e116
;   void* PTR_caseD_1_0043de2c = 0043e3ff
;   void* PTR_caseD_3_0043de34 = 0043e1c5
;   void* switchdataD_0043de38 = 0043e245
;   void* PTR_caseD_3_0043de44 = 0043e26f
;   void* PTR_caseD_1_0043de4c = 0043e4fd
;   void* PTR_caseD_3_0043de54 = 0043e31f
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_00629024
;   undefined4 DAT_00713a7c
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080
;   engine_special.cpp_drawPolygon2_FUN_00582370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043de60
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_0043de60
    PUSH ESI                            ; 0043de61
    PUSH EDI                            ; 0043de62
    PUSH EBP                            ; 0043de63
    SUB ESP,0x20                        ; 0043de64
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043de67
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043de6b
    CMP dword ptr [0x0061b4c0],0x0      ; 0043de6f | DAT_0061b4c0
    JZ 0x0043df4c                       ; 0043de76
        ;   XREF to: 0043df4c (CONDITIONAL_JUMP)  ; LAB_0043df4c
    MOV ECX,0xffffffff                  ; 0043de7c
    MOV dword ptr [ESP + 0x4],EDX       ; 0043de81
    MOV EBP,EBX                         ; 0043de85
    XOR ESI,ESI                         ; 0043de87
    XOR EAX,EAX                         ; 0043de89
    TEST EBX,EBX                        ; 0043de8b
    JLE 0x0043deab                      ; 0043de8d
        ;   XREF to: 0043deab (CONDITIONAL_JUMP)  ; LAB_0043deab
    IMUL EBX,dword ptr [EDX],0x30       ; 0043de8f
        ;   Label: LAB_0043de8f
    MOV EBX,dword ptr [EBX + 0x629024]  ; 0043de92 | DAT_00629024
    TEST EBX,0x80000000                 ; 0043de98
    JZ 0x0043dea1                       ; 0043de9e
        ;   XREF to: 0043dea1 (CONDITIONAL_JUMP)  ; LAB_0043dea1
    INC ESI                             ; 0043dea0
    ADD EDX,0x4                         ; 0043dea1
        ;   Label: LAB_0043dea1
    INC EAX                             ; 0043dea4
    AND ECX,EBX                         ; 0043dea5
    CMP EAX,EBP                         ; 0043dea7
    JL 0x0043de8f                       ; 0043dea9
        ;   XREF to: 0043de8f (CONDITIONAL_JUMP)  ; LAB_0043de8f
    CMP ESI,EBP                         ; 0043deab
        ;   Label: LAB_0043deab
    JNZ 0x0043deb8                      ; 0043dead
        ;   XREF to: 0043deb8 (CONDITIONAL_JUMP)  ; LAB_0043deb8
    TEST CL,0xff                        ; 0043deaf
    JNZ 0x0043df58                      ; 0043deb2
        ;   XREF to: 0043df58 (CONDITIONAL_JUMP)  ; LAB_0043df58
    TEST ESI,ESI                        ; 0043deb8
        ;   Label: LAB_0043deb8
    JNZ 0x0043e025                      ; 0043deba
        ;   XREF to: 0043e025 (CONDITIONAL_JUMP)  ; LAB_0043e025
    CMP dword ptr [0x01c50948],0x0      ; 0043dec0 | DAT_01c50948
    JZ 0x0043dfb4                       ; 0043dec7
        ;   XREF to: 0043dfb4 (CONDITIONAL_JUMP)  ; LAB_0043dfb4
    XOR EAX,EAX                         ; 0043decd
    TEST EBP,EBP                        ; 0043decf
    JLE 0x0043def0                      ; 0043ded1
        ;   XREF to: 0043def0 (CONDITIONAL_JUMP)  ; LAB_0043def0
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043ded3
    IMUL ECX,dword ptr [EBX],0x30       ; 0043ded7
        ;   Label: LAB_0043ded7
    INC EAX                             ; 0043deda
    ADD ECX,0x629014                    ; 0043dedb | DAT_00629014
    ADD EBX,0x4                         ; 0043dee1
    MOV dword ptr [EAX*0x4 + 0x7c7b54],ECX ; 0043dee4 | DAT_007c7b58 | DAT_007c7b5c
    CMP EAX,EBP                         ; 0043deeb
    JL 0x0043ded7                       ; 0043deed
        ;   XREF to: 0043ded7 (CONDITIONAL_JUMP)  ; LAB_0043ded7
    NOP                                 ; 0043deef
    CMP dword ptr [0x00713a7c],0x0      ; 0043def0 | DAT_00713a7c
        ;   Label: LAB_0043def0
    JZ 0x0043df86                       ; 0043def7
        ;   XREF to: 0043df86 (CONDITIONAL_JUMP)  ; LAB_0043df86
    CMP EBP,0x3                         ; 0043defd
    JLE 0x0043df65                      ; 0043df00
        ;   XREF to: 0043df65 (CONDITIONAL_JUMP)  ; LAB_0043df65
    LEA EAX,[EBP + -0x2]                ; 0043df02
    XOR EBX,EBX                         ; 0043df05
    MOV dword ptr [ESP],EAX             ; 0043df07
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043df0a
    XOR ESI,ESI                         ; 0043df11
    TEST EDI,EDI                        ; 0043df13
    JLE 0x0043df3f                      ; 0043df15
        ;   XREF to: 0043df3f (CONDITIONAL_JUMP)  ; LAB_0043df3f
    MOV EAX,dword ptr [EBX + 0x7c7b60]  ; 0043df17 | DAT_007c7b60 | DAT_007c7b64
        ;   Label: LAB_0043df17
    PUSH EAX                            ; 0043df1d
    MOV EDX,dword ptr [EBX + 0x7c7b5c]  ; 0043df1e | DAT_007c7b5c | DAT_007c7b60
    PUSH EDX                            ; 0043df24
    MOV ECX,dword ptr [0x007c7b58]      ; 0043df25 | DAT_007c7b58
    PUSH ECX                            ; 0043df2b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043df2c
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043df31
    TEST EAX,EAX                        ; 0043df34
    JZ 0x0043df62                       ; 0043df36
        ;   XREF to: 0043df62 (CONDITIONAL_JUMP)  ; LAB_0043df62
    ADD EBX,0x4                         ; 0043df38
        ;   Label: LAB_0043df38
    CMP EBX,EDI                         ; 0043df3b
    JL 0x0043df17                       ; 0043df3d
        ;   XREF to: 0043df17 (CONDITIONAL_JUMP)  ; LAB_0043df17
    CMP ESI,dword ptr [ESP]             ; 0043df3f
        ;   Label: LAB_0043df3f
    JNZ 0x0043df86                      ; 0043df42
        ;   XREF to: 0043df86 (CONDITIONAL_JUMP)  ; LAB_0043df86
    ADD ESP,0x20                        ; 0043df44
        ;   Label: LAB_0043df44
    POP EBP                             ; 0043df47
    POP EDI                             ; 0043df48
    POP ESI                             ; 0043df49
    POP EBX                             ; 0043df4a
    RET                                 ; 0043df4b
    PUSH EBX                            ; 0043df4c
        ;   Label: LAB_0043df4c
    PUSH EDX                            ; 0043df4d
    CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 ; 0043df4e
        ;   XREF to: 0053f720 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0043df53
    JMP 0x0043df44                      ; 0043df56
        ;   XREF to: 0043df44 (UNCONDITIONAL_JUMP)  ; LAB_0043df44
    XOR ESI,EBP                         ; 0043df58
        ;   Label: LAB_0043df58
    MOV dword ptr [0x007c7554],ESI      ; 0043df5a | DAT_007c7554
    JMP 0x0043df44                      ; 0043df60
        ;   XREF to: 0043df44 (UNCONDITIONAL_JUMP)  ; LAB_0043df44
    INC ESI                             ; 0043df62
        ;   Label: LAB_0043df62
    JMP 0x0043df38                      ; 0043df63
        ;   XREF to: 0043df38 (UNCONDITIONAL_JUMP)  ; LAB_0043df38
    MOV EDX,dword ptr [0x007c7b60]      ; 0043df65 | DAT_007c7b60
        ;   Label: LAB_0043df65
    PUSH EDX                            ; 0043df6b
    MOV ECX,dword ptr [0x007c7b5c]      ; 0043df6c | DAT_007c7b5c
    PUSH ECX                            ; 0043df72
    MOV EBX,dword ptr [0x007c7b58]      ; 0043df73 | DAT_007c7b58
    PUSH EBX                            ; 0043df79
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043df7a
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043df7f
    TEST EAX,EAX                        ; 0043df82
    JZ 0x0043df44                       ; 0043df84
        ;   XREF to: 0043df44 (CONDITIONAL_JUMP)  ; LAB_0043df44
    MOV ESI,dword ptr [0x01c51d14]      ; 0043df86 | DAT_01c51d14
        ;   Label: LAB_0043df86
    PUSH ESI                            ; 0043df8c
    LEA EAX,[EBP + -0x2]                ; 0043df8d
    MOV EBX,dword ptr [0x01e7dac8]      ; 0043df90 | DAT_01e7dac8
    PUSH EBP                            ; 0043df96
    ADD EBX,EAX                         ; 0043df97
    PUSH 0x7c7b58                       ; 0043df99 | DAT_007c7b58
    MOV dword ptr [0x01e7dac8],EBX      ; 0043df9e | DAT_01e7dac8
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0043dfa4
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00582370(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 0043dfa9
    ADD ESP,0x20                        ; 0043dfac
    POP EBP                             ; 0043dfaf
    POP EDI                             ; 0043dfb0
    POP ESI                             ; 0043dfb1
    POP EBX                             ; 0043dfb2
    RET                                 ; 0043dfb3
    MOV dword ptr [ESP + 0x8],ESI       ; 0043dfb4
        ;   Label: LAB_0043dfb4
    MOV dword ptr [0x007c7554],EBP      ; 0043dfb8 | DAT_007c7554
    TEST EBP,EBP                        ; 0043dfbe
    JLE 0x0043e000                      ; 0043dfc0
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043dfc2
    MOV EDX,0x7c7558                    ; 0043dfc6 | DAT_007c7558
    IMUL ESI,dword ptr [EBX],0x30       ; 0043dfcb
        ;   Label: LAB_0043dfcb
    MOV ECX,0x30                        ; 0043dfce
    ADD ESI,0x629014                    ; 0043dfd3 | DAT_00629014
    MOV EDI,EDX                         ; 0043dfd9
    PUSH EDI                            ; 0043dfdb | DAT_007c7558 | DAT_007c7588
    MOV EAX,ECX                         ; 0043dfdc
    SHR ECX,0x2                         ; 0043dfde
    MOVSD.REP ES:EDI,ESI                ; 0043dfe1 | DAT_00629014 | DAT_007c7558 | DAT_00629018
    MOV CL,AL                           ; 0043dfe3
    AND CL,0x3                          ; 0043dfe5
    MOVSB.REP ES:EDI,ESI                ; 0043dfe8 | DAT_00629018 | DAT_007c755c
    POP EDI                             ; 0043dfea
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043dfeb
    ADD EBX,0x4                         ; 0043dfef
    INC EAX                             ; 0043dff2
    ADD EDX,0x30                        ; 0043dff3
    MOV dword ptr [ESP + 0x8],EAX       ; 0043dff6
    CMP EBP,EAX                         ; 0043dffa
    JG 0x0043dfcb                       ; 0043dffc
        ;   XREF to: 0043dfcb (CONDITIONAL_JUMP)  ; LAB_0043dfcb
    MOV EAX,EAX                         ; 0043dffe
    MOV EBX,dword ptr [0x007c7554]      ; 0043e000 | DAT_007c7554
        ;   Label: LAB_0043e000
    CMP EBX,0x2                         ; 0043e006
    JLE 0x0043df44                      ; 0043e009
        ;   XREF to: 0043df44 (CONDITIONAL_JUMP)  ; LAB_0043df44
    PUSH EBX                            ; 0043e00f
    PUSH 0x7c7558                       ; 0043e010 | DAT_007c7558
    CALL engine_prim.c_renderScanlinePolygon_FUN_0053f080 ; 0043e015
        ;   XREF to: 0053f080 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderScanlinePolygon_FUN_0053f080(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0043e01a
    ADD ESP,0x20                        ; 0043e01d
    POP EBP                             ; 0043e020
    POP EDI                             ; 0043e021
    POP ESI                             ; 0043e022
    POP EBX                             ; 0043e023
    RET                                 ; 0043e024
    XOR EBX,EBX                         ; 0043e025
        ;   Label: LAB_0043e025
    MOV dword ptr [0x007c8420],EBP      ; 0043e027 | DAT_007c8420
    MOV dword ptr [0x007c8424],EBX      ; 0043e02d | DAT_007c8424
    MOV dword ptr [0x007c8428],EBX      ; 0043e033 | DAT_007c8428
    MOV dword ptr [0x007c842c],EBX      ; 0043e039 | DAT_007c842c
    MOV dword ptr [0x007c7554],EBX      ; 0043e03f | DAT_007c7554
    MOV dword ptr [ESP + 0xc],EBX       ; 0043e045
    TEST EBP,EBP                        ; 0043e049
    JLE 0x0043e090                      ; 0043e04b
        ;   XREF to: 0043e090 (CONDITIONAL_JUMP)  ; LAB_0043e090
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043e04d
    MOV EDX,0x7c8a30                    ; 0043e051 | DAT_007c8a30
    IMUL ESI,dword ptr [EBX],0x30       ; 0043e056
        ;   Label: LAB_0043e056
    MOV ECX,0x30                        ; 0043e059
    MOV EDI,EDX                         ; 0043e05e
    ADD ESI,0x629014                    ; 0043e060 | DAT_00629014
    PUSH EDI                            ; 0043e066 | DAT_007c8a30 | DAT_007c8a60
    MOV EAX,ECX                         ; 0043e067
    SHR ECX,0x2                         ; 0043e069
    MOVSD.REP ES:EDI,ESI                ; 0043e06c | DAT_00629014 | DAT_007c8a30 | DAT_00629018
    MOV CL,AL                           ; 0043e06e
    AND CL,0x3                          ; 0043e070
    MOVSB.REP ES:EDI,ESI                ; 0043e073 | DAT_00629018 | DAT_007c8a34
    POP EDI                             ; 0043e075
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043e076
    ADD EBX,0x4                         ; 0043e07a
    INC ECX                             ; 0043e07d
    ADD EDX,0x30                        ; 0043e07e
    MOV dword ptr [ESP + 0xc],ECX       ; 0043e081
    CMP EBP,ECX                         ; 0043e085
    JG 0x0043e056                       ; 0043e087
        ;   XREF to: 0043e056 (CONDITIONAL_JUMP)  ; LAB_0043e056
    LEA EAX,[EAX]                       ; 0043e089
    NOP                                 ; 0043e08f
    XOR EDI,EDI                         ; 0043e090
        ;   Label: LAB_0043e090
    MOV EBP,dword ptr [0x007c8420]      ; 0043e092 | DAT_007c8420
    MOV dword ptr [ESP + 0x10],EDI      ; 0043e098
    TEST EBP,EBP                        ; 0043e09c
    JLE 0x0043e130                      ; 0043e09e
        ;   XREF to: 0043e130 (CONDITIONAL_JUMP)  ; LAB_0043e130
    MOV EBX,0x7c8a30                    ; 0043e0a4 | DAT_007c8a30
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043e0a9
        ;   Label: LAB_0043e0a9
    MOV EDI,dword ptr [0x007c8420]      ; 0043e0ad | DAT_007c8420
    INC EAX                             ; 0043e0b3
    CMP EAX,EDI                         ; 0043e0b4
    JNZ 0x0043e0ba                      ; 0043e0b6
        ;   XREF to: 0043e0ba (CONDITIONAL_JUMP)  ; LAB_0043e0ba
    XOR EAX,EDI                         ; 0043e0b8
    IMUL EAX,EAX,0x30                   ; 0043e0ba
        ;   Label: LAB_0043e0ba
    MOV EBP,0x7c8a30                    ; 0043e0bd | DAT_007c8a30
    MOV EDX,EBX                         ; 0043e0c2
    MOV ECX,dword ptr [EBX]             ; 0043e0c4 | DAT_007c8a30 | DAT_007c8a60
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043e0c6 | DAT_007c8a38 | DAT_007c8a68
    ADD EBP,EAX                         ; 0043e0c9
    XOR EAX,EAX                         ; 0043e0cb
    CMP ECX,ESI                         ; 0043e0cd
    JL 0x0043e0d6                       ; 0043e0cf
        ;   XREF to: 0043e0d6 (CONDITIONAL_JUMP)  ; LAB_0043e0d6
    MOV EAX,0x1                         ; 0043e0d1
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043e0d6 | DAT_007c8a38
        ;   Label: LAB_0043e0d6
    CMP EDI,dword ptr [EBP]             ; 0043e0d9 | DAT_007c8a30
    JG 0x0043e0e0                       ; 0043e0dc
        ;   XREF to: 0043e0e0 (CONDITIONAL_JUMP)  ; LAB_0043e0e0
    OR AL,0x2                           ; 0043e0de
    CMP EAX,0x3                         ; 0043e0e0
        ;   Label: LAB_0043e0e0
    JA 0x0043e116                       ; 0043e0e3
        ;   XREF to: 0043e116 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de18]  ; 0043e0e5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043e0ec | DAT_007c8424
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e0f3
    MOV ESI,EDX                         ; 0043e0f8
    ADD EDI,0x7c8430                    ; 0043e0fa | DAT_007c8430
    PUSH EDI                            ; 0043e100 | DAT_007c8430
    MOV EAX,ECX                         ; 0043e101
    SHR ECX,0x2                         ; 0043e103
    MOVSD.REP ES:EDI,ESI                ; 0043e106 | DAT_007c8a60 | DAT_007c8430 | DAT_007c8a64
    MOV CL,AL                           ; 0043e108
    AND CL,0x3                          ; 0043e10a
    MOVSB.REP ES:EDI,ESI                ; 0043e10d | DAT_007c8a64 | DAT_007c8434
    POP EDI                             ; 0043e10f
    INC dword ptr [0x007c8424]          ; 0043e110 | DAT_007c8424
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043e116
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007c8420]      ; 0043e11a | DAT_007c8420
    INC EAX                             ; 0043e120
    ADD EBX,0x30                        ; 0043e121
    MOV dword ptr [ESP + 0x10],EAX      ; 0043e124
    CMP EAX,EDX                         ; 0043e128
    JL 0x0043e0a9                       ; 0043e12a
        ;   XREF to: 0043e0a9 (CONDITIONAL_JUMP)  ; LAB_0043e0a9
    MOV ECX,dword ptr [0x007c8424]      ; 0043e130 | DAT_007c8424
        ;   Label: LAB_0043e130
    CMP ECX,0x3                         ; 0043e136
    JL 0x0043e000                       ; 0043e139
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR EBX,EBX                         ; 0043e13f
    MOV dword ptr [ESP + 0x18],EBX      ; 0043e141
    TEST ECX,ECX                        ; 0043e145
    JLE 0x0043e1df                      ; 0043e147
        ;   XREF to: 0043e1df (CONDITIONAL_JUMP)  ; LAB_0043e1df
    MOV EBX,0x7c8430                    ; 0043e14d | DAT_007c8430
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e152
        ;   Label: LAB_0043e152
    MOV EBP,dword ptr [0x007c8424]      ; 0043e156 | DAT_007c8424
    INC EAX                             ; 0043e15c
    CMP EAX,EBP                         ; 0043e15d
    JNZ 0x0043e163                      ; 0043e15f
        ;   XREF to: 0043e163 (CONDITIONAL_JUMP)  ; LAB_0043e163
    XOR EAX,EBP                         ; 0043e161
    IMUL EAX,EAX,0x30                   ; 0043e163
        ;   Label: LAB_0043e163
    MOV EBP,0x7c8430                    ; 0043e166 | DAT_007c8430
    MOV EDX,EBX                         ; 0043e16b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043e16d | DAT_007c8438 | DAT_007c8468
    MOV ESI,dword ptr [EBX]             ; 0043e170 | DAT_007c8430 | DAT_007c8460
    NEG ECX                             ; 0043e172
    ADD EBP,EAX                         ; 0043e174
    XOR EAX,EAX                         ; 0043e176
    CMP ECX,ESI                         ; 0043e178
    JL 0x0043e181                       ; 0043e17a
        ;   XREF to: 0043e181 (CONDITIONAL_JUMP)  ; LAB_0043e181
    MOV EAX,0x1                         ; 0043e17c
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043e181 | DAT_007c8438
        ;   Label: LAB_0043e181
    MOV EDI,dword ptr [EBP]             ; 0043e184 | DAT_007c8430
    NEG ECX                             ; 0043e187
    CMP ECX,EDI                         ; 0043e189
    JL 0x0043e18f                       ; 0043e18b
        ;   XREF to: 0043e18f (CONDITIONAL_JUMP)  ; LAB_0043e18f
    OR AL,0x2                           ; 0043e18d
    CMP EAX,0x3                         ; 0043e18f
        ;   Label: LAB_0043e18f
    JA 0x0043e1c5                       ; 0043e192
        ;   XREF to: 0043e1c5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de28]  ; 0043e194 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043e19b | DAT_007c8428
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e1a2
    MOV ESI,EDX                         ; 0043e1a7
    ADD EDI,0x7c9030                    ; 0043e1a9 | DAT_007c9030
    PUSH EDI                            ; 0043e1af | DAT_007c9030
    MOV EAX,ECX                         ; 0043e1b0
    SHR ECX,0x2                         ; 0043e1b2
    MOVSD.REP ES:EDI,ESI                ; 0043e1b5 | DAT_007c8430 | DAT_007c9030 | DAT_007c8434
    MOV CL,AL                           ; 0043e1b7
    AND CL,0x3                          ; 0043e1b9
    MOVSB.REP ES:EDI,ESI                ; 0043e1bc | DAT_007c8434 | DAT_007c9034
    POP EDI                             ; 0043e1be
    INC dword ptr [0x007c8428]          ; 0043e1bf | DAT_007c8428
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043e1c5
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8424]      ; 0043e1c9 | DAT_007c8424
    INC EDX                             ; 0043e1cf
    ADD EBX,0x30                        ; 0043e1d0
    MOV dword ptr [ESP + 0x18],EDX      ; 0043e1d3
    CMP EDX,ECX                         ; 0043e1d7
    JL 0x0043e152                       ; 0043e1d9
        ;   XREF to: 0043e152 (CONDITIONAL_JUMP)  ; LAB_0043e152
    MOV EBX,dword ptr [0x007c8428]      ; 0043e1df | DAT_007c8428
        ;   Label: LAB_0043e1df
    CMP EBX,0x3                         ; 0043e1e5
    JL 0x0043e000                       ; 0043e1e8
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR ESI,ESI                         ; 0043e1ee
    MOV dword ptr [ESP + 0x1c],ESI      ; 0043e1f0
    TEST EBX,EBX                        ; 0043e1f4
    JLE 0x0043e289                      ; 0043e1f6
        ;   XREF to: 0043e289 (CONDITIONAL_JUMP)  ; LAB_0043e289
    MOV EBX,0x7c9030                    ; 0043e1fc | DAT_007c9030
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e201
        ;   Label: LAB_0043e201
    MOV EBP,dword ptr [0x007c8428]      ; 0043e205 | DAT_007c8428
    INC EAX                             ; 0043e20b
    CMP EAX,EBP                         ; 0043e20c
    JNZ 0x0043e212                      ; 0043e20e
        ;   XREF to: 0043e212 (CONDITIONAL_JUMP)  ; LAB_0043e212
    XOR EAX,EBP                         ; 0043e210
    IMUL EAX,EAX,0x30                   ; 0043e212
        ;   Label: LAB_0043e212
    MOV EBP,0x7c9030                    ; 0043e215 | DAT_007c9030
    MOV EDX,EBX                         ; 0043e21a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043e21c | DAT_007c9034 | DAT_007c9064
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043e21f | DAT_007c9038 | DAT_007c9068
    ADD EBP,EAX                         ; 0043e222
    XOR EAX,EAX                         ; 0043e224
    CMP ECX,ESI                         ; 0043e226
    JL 0x0043e22f                       ; 0043e228
        ;   XREF to: 0043e22f (CONDITIONAL_JUMP)  ; LAB_0043e22f
    MOV EAX,0x1                         ; 0043e22a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043e22f | DAT_007c9038
        ;   Label: LAB_0043e22f
    CMP EDI,dword ptr [EBP + 0x4]       ; 0043e232 | DAT_007c9034
    JG 0x0043e239                       ; 0043e235
        ;   XREF to: 0043e239 (CONDITIONAL_JUMP)  ; LAB_0043e239
    OR AL,0x2                           ; 0043e237
    CMP EAX,0x3                         ; 0043e239
        ;   Label: LAB_0043e239
    JA 0x0043e26f                       ; 0043e23c
        ;   XREF to: 0043e26f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de38]  ; 0043e23e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043e245 | DAT_007c842c
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e24c
    MOV ESI,EDX                         ; 0043e251
    ADD EDI,0x7c9630                    ; 0043e253 | DAT_007c9630
    PUSH EDI                            ; 0043e259 | DAT_007c9630
    MOV EAX,ECX                         ; 0043e25a
    SHR ECX,0x2                         ; 0043e25c
    MOVSD.REP ES:EDI,ESI                ; 0043e25f | DAT_007c9060 | DAT_007c9630 | DAT_007c9064
    MOV CL,AL                           ; 0043e261
    AND CL,0x3                          ; 0043e263
    MOVSB.REP ES:EDI,ESI                ; 0043e266 | DAT_007c9064 | DAT_007c9634
    POP EDI                             ; 0043e268
    INC dword ptr [0x007c842c]          ; 0043e269 | DAT_007c842c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043e26f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8428]      ; 0043e273 | DAT_007c8428
    INC EDX                             ; 0043e279
    ADD EBX,0x30                        ; 0043e27a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043e27d
    CMP EDX,ECX                         ; 0043e281
    JL 0x0043e201                       ; 0043e283
        ;   XREF to: 0043e201 (CONDITIONAL_JUMP)  ; LAB_0043e201
    MOV EBX,dword ptr [0x007c842c]      ; 0043e289 | DAT_007c842c
        ;   Label: LAB_0043e289
    CMP EBX,0x3                         ; 0043e28f
    JL 0x0043e000                       ; 0043e292
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR ESI,ESI                         ; 0043e298
    MOV dword ptr [ESP + 0x14],ESI      ; 0043e29a
    TEST EBX,EBX                        ; 0043e29e
    JLE 0x0043e339                      ; 0043e2a0
        ;   XREF to: 0043e339 (CONDITIONAL_JUMP)  ; LAB_0043e339
    MOV EBX,0x7c9630                    ; 0043e2a6 | DAT_007c9630
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043e2ab
        ;   Label: LAB_0043e2ab
    MOV EDI,dword ptr [0x007c842c]      ; 0043e2af | DAT_007c842c
    INC EAX                             ; 0043e2b5
    CMP EAX,EDI                         ; 0043e2b6
    JNZ 0x0043e2bc                      ; 0043e2b8
        ;   XREF to: 0043e2bc (CONDITIONAL_JUMP)  ; LAB_0043e2bc
    XOR EAX,EDI                         ; 0043e2ba
    IMUL EAX,EAX,0x30                   ; 0043e2bc
        ;   Label: LAB_0043e2bc
    MOV EBP,0x7c9630                    ; 0043e2bf | DAT_007c9630
    MOV EDX,EBX                         ; 0043e2c4
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043e2c6 | DAT_007c9638 | DAT_007c9668
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043e2c9 | DAT_007c9634 | DAT_007c9664
    NEG ECX                             ; 0043e2cc
    ADD EBP,EAX                         ; 0043e2ce
    XOR EAX,EAX                         ; 0043e2d0
    CMP ECX,ESI                         ; 0043e2d2
    JL 0x0043e2db                       ; 0043e2d4
        ;   XREF to: 0043e2db (CONDITIONAL_JUMP)  ; LAB_0043e2db
    MOV EAX,0x1                         ; 0043e2d6
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043e2db | DAT_007c9638
        ;   Label: LAB_0043e2db
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043e2de | DAT_007c9634
    NEG ECX                             ; 0043e2e1
    CMP ECX,EDI                         ; 0043e2e3
    JL 0x0043e2e9                       ; 0043e2e5
        ;   XREF to: 0043e2e9 (CONDITIONAL_JUMP)  ; LAB_0043e2e9
    OR AL,0x2                           ; 0043e2e7
    CMP EAX,0x3                         ; 0043e2e9
        ;   Label: LAB_0043e2e9
    JA 0x0043e31f                       ; 0043e2ec
        ;   XREF to: 0043e31f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de48]  ; 0043e2ee | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043e2f5 | DAT_007c7554
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e2fc
    MOV ESI,EDX                         ; 0043e301
    ADD EDI,0x7c7558                    ; 0043e303 | DAT_007c7558
    PUSH EDI                            ; 0043e309 | DAT_007c7558
    MOV EAX,ECX                         ; 0043e30a
    SHR ECX,0x2                         ; 0043e30c
    MOVSD.REP ES:EDI,ESI                ; 0043e30f | DAT_007c9630 | DAT_007c7558 | DAT_007c9634
    MOV CL,AL                           ; 0043e311
    AND CL,0x3                          ; 0043e313
    MOVSB.REP ES:EDI,ESI                ; 0043e316 | DAT_007c9634 | DAT_007c755c
    POP EDI                             ; 0043e318
    INC dword ptr [0x007c7554]          ; 0043e319 | DAT_007c7554
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043e31f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c842c]      ; 0043e323 | DAT_007c842c
    INC EDX                             ; 0043e329
    ADD EBX,0x30                        ; 0043e32a
    MOV dword ptr [ESP + 0x14],EDX      ; 0043e32d
    CMP EDX,ECX                         ; 0043e331
    JL 0x0043e2ab                       ; 0043e333
        ;   XREF to: 0043e2ab (CONDITIONAL_JUMP)  ; LAB_0043e2ab
    MOV EBX,dword ptr [0x007c7554]      ; 0043e339 | DAT_007c7554
        ;   Label: LAB_0043e339
    CMP EBX,0x3                         ; 0043e33f
    JL 0x0043e000                       ; 0043e342
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV EAX,0x7c7558                    ; 0043e348 | DAT_007c7558
    XOR EBP,EBP                         ; 0043e34d
    TEST EBX,EBX                        ; 0043e34f
    JLE 0x0043e000                      ; 0043e351
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043e357 | DAT_007c7560 | DAT_007c7590
        ;   Label: LAB_0043e357
    TEST ECX,ECX                        ; 0043e35a
    JZ 0x0043e57c                       ; 0043e35c
        ;   XREF to: 0043e57c (CONDITIONAL_JUMP)  ; LAB_0043e57c
    CMP ECX,dword ptr [EAX]             ; 0043e362 | DAT_007c7558 | DAT_007c7588
    JGE 0x0043e58d                      ; 0043e364
        ;   XREF to: 0043e58d (CONDITIONAL_JUMP)  ; LAB_0043e58d
    MOV dword ptr [EAX],ECX             ; 0043e36a | DAT_007c7558 | DAT_007c7588
    MOV EDX,dword ptr [0x007c7554]      ; 0043e36c | DAT_007c7554
        ;   Label: LAB_0043e36c
    INC EBP                             ; 0043e372
    ADD EAX,0x30                        ; 0043e373
    CMP EBP,EDX                         ; 0043e376
    JGE 0x0043e000                      ; 0043e378
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    JMP 0x0043e357                      ; 0043e37e
        ;   XREF to: 0043e357 (UNCONDITIONAL_JUMP)  ; LAB_0043e357
    IMUL EAX,dword ptr [0x007c8424],0x30 ; 0043e380 | DAT_007c8424
        ;   Label: caseD_1
    ADD EAX,0x7c8430                    ; 0043e387 | DAT_007c8430
    PUSH EAX                            ; 0043e38c | DAT_007c8430
    PUSH EDX                            ; 0043e38d | DAT_007c8a60
    PUSH EBP                            ; 0043e38e
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043e38f
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8424]      ; 0043e394 | DAT_007c8424
    INC ESI                             ; 0043e39a
    ADD ESP,0xc                         ; 0043e39b
    MOV dword ptr [0x007c8424],ESI      ; 0043e39e | DAT_007c8424
    JMP 0x0043e116                      ; 0043e3a4
        ;   XREF to: 0043e116 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043e3a9 | DAT_007c8424
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e3b0
    MOV ESI,EDX                         ; 0043e3b5
    ADD EDI,0x7c8430                    ; 0043e3b7 | DAT_007c8430
    PUSH EDI                            ; 0043e3bd | DAT_007c8430
    MOV EAX,ECX                         ; 0043e3be
    SHR ECX,0x2                         ; 0043e3c0
    MOVSD.REP ES:EDI,ESI                ; 0043e3c3 | DAT_007c8a60 | DAT_007c8430 | DAT_007c8a64
    MOV CL,AL                           ; 0043e3c5
    AND CL,0x3                          ; 0043e3c7
    MOVSB.REP ES:EDI,ESI                ; 0043e3ca | DAT_007c8a64 | DAT_007c8434
    POP EDI                             ; 0043e3cc
    MOV ECX,dword ptr [0x007c8424]      ; 0043e3cd | DAT_007c8424
    INC ECX                             ; 0043e3d3
    MOV dword ptr [0x007c8424],ECX      ; 0043e3d4 | DAT_007c8424
    IMUL EAX,ECX,0x30                   ; 0043e3da
    ADD EAX,0x7c8430                    ; 0043e3dd | DAT_007c8430
    PUSH EAX                            ; 0043e3e2 | DAT_007c8460
    PUSH EBP                            ; 0043e3e3
    PUSH EDX                            ; 0043e3e4 | DAT_007c8a60
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043e3e5
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8424]      ; 0043e3ea | DAT_007c8424
    INC EDI                             ; 0043e3f0
    ADD ESP,0xc                         ; 0043e3f1
    MOV dword ptr [0x007c8424],EDI      ; 0043e3f4 | DAT_007c8424
    JMP 0x0043e116                      ; 0043e3fa
        ;   XREF to: 0043e116 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c8428],0x30 ; 0043e3ff | DAT_007c8428
        ;   Label: caseD_1
    ADD EAX,0x7c9030                    ; 0043e406 | DAT_007c9030
    PUSH EAX                            ; 0043e40b | DAT_007c9030
    PUSH EDX                            ; 0043e40c | DAT_007c8430
    PUSH EBP                            ; 0043e40d
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043e40e
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8428]      ; 0043e413 | DAT_007c8428
    INC ESI                             ; 0043e419
    ADD ESP,0xc                         ; 0043e41a
    MOV dword ptr [0x007c8428],ESI      ; 0043e41d | DAT_007c8428
    JMP 0x0043e1c5                      ; 0043e423
        ;   XREF to: 0043e1c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043e428 | DAT_007c8428
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e42f
    MOV ESI,EDX                         ; 0043e434
    ADD EDI,0x7c9030                    ; 0043e436 | DAT_007c9030
    PUSH EDI                            ; 0043e43c | DAT_007c9030
    MOV EAX,ECX                         ; 0043e43d
    SHR ECX,0x2                         ; 0043e43f
    MOVSD.REP ES:EDI,ESI                ; 0043e442 | DAT_007c8430 | DAT_007c9030 | DAT_007c8434
    MOV CL,AL                           ; 0043e444
    AND CL,0x3                          ; 0043e446
    MOVSB.REP ES:EDI,ESI                ; 0043e449 | DAT_007c8434 | DAT_007c9034
    POP EDI                             ; 0043e44b
    MOV ECX,dword ptr [0x007c8428]      ; 0043e44c | DAT_007c8428
    INC ECX                             ; 0043e452
    MOV dword ptr [0x007c8428],ECX      ; 0043e453 | DAT_007c8428
    IMUL EAX,ECX,0x30                   ; 0043e459
    ADD EAX,0x7c9030                    ; 0043e45c | DAT_007c9030
    PUSH EAX                            ; 0043e461 | DAT_007c9060
    PUSH EBP                            ; 0043e462
    PUSH EDX                            ; 0043e463 | DAT_007c8430
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043e464
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8428]      ; 0043e469 | DAT_007c8428
    INC EDI                             ; 0043e46f
    ADD ESP,0xc                         ; 0043e470
    MOV dword ptr [0x007c8428],EDI      ; 0043e473 | DAT_007c8428
    JMP 0x0043e1c5                      ; 0043e479
        ;   XREF to: 0043e1c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c842c],0x30 ; 0043e47e | DAT_007c842c
        ;   Label: caseD_1
    ADD EAX,0x7c9630                    ; 0043e485 | DAT_007c9630
    PUSH EAX                            ; 0043e48a | DAT_007c9630
    PUSH EDX                            ; 0043e48b | DAT_007c9060
    PUSH EBP                            ; 0043e48c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043e48d
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c842c]      ; 0043e492 | DAT_007c842c
    INC ESI                             ; 0043e498
    ADD ESP,0xc                         ; 0043e499
    MOV dword ptr [0x007c842c],ESI      ; 0043e49c | DAT_007c842c
    JMP 0x0043e26f                      ; 0043e4a2
        ;   XREF to: 0043e26f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043e4a7 | DAT_007c842c
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e4ae
    MOV ESI,EDX                         ; 0043e4b3
    ADD EDI,0x7c9630                    ; 0043e4b5 | DAT_007c9630
    PUSH EDI                            ; 0043e4bb | DAT_007c9630
    MOV EAX,ECX                         ; 0043e4bc
    SHR ECX,0x2                         ; 0043e4be
    MOVSD.REP ES:EDI,ESI                ; 0043e4c1 | DAT_007c9060 | DAT_007c9630 | DAT_007c9064
    MOV CL,AL                           ; 0043e4c3
    AND CL,0x3                          ; 0043e4c5
    MOVSB.REP ES:EDI,ESI                ; 0043e4c8 | DAT_007c9064 | DAT_007c9634
    POP EDI                             ; 0043e4ca
    MOV ECX,dword ptr [0x007c842c]      ; 0043e4cb | DAT_007c842c
    INC ECX                             ; 0043e4d1
    MOV dword ptr [0x007c842c],ECX      ; 0043e4d2 | DAT_007c842c
    IMUL EAX,ECX,0x30                   ; 0043e4d8
    ADD EAX,0x7c9630                    ; 0043e4db | DAT_007c9630
    PUSH EAX                            ; 0043e4e0 | DAT_007c9660
    PUSH EBP                            ; 0043e4e1
    PUSH EDX                            ; 0043e4e2 | DAT_007c9060
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043e4e3
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c842c]      ; 0043e4e8 | DAT_007c842c
    INC EDI                             ; 0043e4ee
    ADD ESP,0xc                         ; 0043e4ef
    MOV dword ptr [0x007c842c],EDI      ; 0043e4f2 | DAT_007c842c
    JMP 0x0043e26f                      ; 0043e4f8
        ;   XREF to: 0043e26f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043e4fd | DAT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043e504 | DAT_007c7558
    PUSH EAX                            ; 0043e509 | DAT_007c7558
    PUSH EDX                            ; 0043e50a | DAT_007c9630
    PUSH EBP                            ; 0043e50b
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043e50c
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c7554]      ; 0043e511 | DAT_007c7554
    INC ESI                             ; 0043e517
    ADD ESP,0xc                         ; 0043e518
    MOV dword ptr [0x007c7554],ESI      ; 0043e51b | DAT_007c7554
    JMP 0x0043e31f                      ; 0043e521
        ;   XREF to: 0043e31f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043e526 | DAT_007c7554
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e52d
    MOV ESI,EDX                         ; 0043e532
    ADD EDI,0x7c7558                    ; 0043e534 | DAT_007c7558
    PUSH EDI                            ; 0043e53a | DAT_007c7558
    MOV EAX,ECX                         ; 0043e53b
    SHR ECX,0x2                         ; 0043e53d
    MOVSD.REP ES:EDI,ESI                ; 0043e540 | DAT_007c9630 | DAT_007c7558 | DAT_007c9634
    MOV CL,AL                           ; 0043e542
    AND CL,0x3                          ; 0043e544
    MOVSB.REP ES:EDI,ESI                ; 0043e547 | DAT_007c9634 | DAT_007c755c
    POP EDI                             ; 0043e549
    MOV ECX,dword ptr [0x007c7554]      ; 0043e54a | DAT_007c7554
    INC ECX                             ; 0043e550
    MOV dword ptr [0x007c7554],ECX      ; 0043e551 | DAT_007c7554
    IMUL EAX,ECX,0x30                   ; 0043e557
    ADD EAX,0x7c7558                    ; 0043e55a | DAT_007c7558
    PUSH EAX                            ; 0043e55f | DAT_007c7588
    PUSH EBP                            ; 0043e560
    PUSH EDX                            ; 0043e561 | DAT_007c9630
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043e562
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c7554]      ; 0043e567 | DAT_007c7554
    INC EDI                             ; 0043e56d
    ADD ESP,0xc                         ; 0043e56e
    MOV dword ptr [0x007c7554],EDI      ; 0043e571 | DAT_007c7554
    JMP 0x0043e31f                      ; 0043e577
        ;   XREF to: 0043e31f (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043e57c | DAT_007c7590
        ;   Label: LAB_0043e57c
    MOV dword ptr [EAX],ECX             ; 0043e583 | DAT_007c7588
    MOV dword ptr [EAX + 0x4],ECX       ; 0043e585 | DAT_007c758c
    JMP 0x0043e36c                      ; 0043e588
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV EDX,ECX                         ; 0043e58d
        ;   Label: LAB_0043e58d
    MOV ESI,dword ptr [EAX]             ; 0043e58f | DAT_007c7588
    NEG EDX                             ; 0043e591
    CMP EDX,ESI                         ; 0043e593
    JLE 0x0043e59e                      ; 0043e595
        ;   XREF to: 0043e59e (CONDITIONAL_JUMP)  ; LAB_0043e59e
    MOV dword ptr [EAX],EDX             ; 0043e597 | DAT_007c7588
    JMP 0x0043e36c                      ; 0043e599
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043e59e | DAT_007c7590
        ;   Label: LAB_0043e59e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043e5a1 | DAT_007c758c
    CMP ECX,EDI                         ; 0043e5a4
    JLE 0x0043e5b0                      ; 0043e5a6
        ;   XREF to: 0043e5b0 (CONDITIONAL_JUMP)  ; LAB_0043e5b0
    MOV dword ptr [EAX + 0x4],EDI       ; 0043e5a8 | DAT_007c758c
    JMP 0x0043e36c                      ; 0043e5ab
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    CMP EDX,ECX                         ; 0043e5b0
        ;   Label: LAB_0043e5b0
    JLE 0x0043e36c                      ; 0043e5b2
        ;   XREF to: 0043e36c (CONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV dword ptr [EAX + 0x4],EDX       ; 0043e5b8 | DAT_007c758c
    JMP 0x0043e36c                      ; 0043e5bb
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c

