; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00515e80(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_0043a840 at 0043a87f
;
; Referenced Globals:
;   void* switchdataD_00515e58 = 00515f90
;   undefined4 DAT_005fba40
;   undefined4 DAT_00603974
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01ed2c88
;   undefined4 DAT_01ed2c8c
;   undefined4 DAT_01ed318c
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_prim.c_findEdgeInBuffer_FUN_005158e0
;   engine_prim.c_normalizeTextureCoords_FUN_00515990
;   engine_prim.c_prepareDepthBuffer_FUN_00515920
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;   engine_special.cpp_drawPolygon_FUN_00565c10
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515e80
        ;   Label: engine_prim.c_renderPolygonSoftware_FUN_00515e80
    PUSH ESI                            ; 00515e81
    PUSH EDI                            ; 00515e82
    PUSH EBP                            ; 00515e83
    SUB ESP,0x14                        ; 00515e84
    CMP dword ptr [0x005fba40],0x0      ; 00515e87 | DAT_005fba40
    JZ 0x00515ef7                       ; 00515e8e
        ;   XREF to: 00515ef7 (CONDITIONAL_JUMP)  ; LAB_00515ef7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00515e90
    MOV ECX,dword ptr [ESP + 0x28]      ; 00515e94
    XOR ESI,ESI                         ; 00515e98
    TEST EBX,EBX                        ; 00515e9a
    JLE 0x00515ef7                      ; 00515e9c
        ;   XREF to: 00515ef7 (CONDITIONAL_JUMP)  ; LAB_00515ef7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00515e9e
    TEST byte ptr [ECX + 0x13],0x80     ; 00515ea2
        ;   Label: LAB_00515ea2
    JZ 0x00515eef                       ; 00515ea6
        ;   XREF to: 00515eef (CONDITIONAL_JUMP)  ; LAB_00515eef
    MOV EAX,0x7fffffff                  ; 00515ea8
    MOV EDX,EAX                         ; 00515ead
    MOV EBX,dword ptr [ECX + 0x8]       ; 00515eaf
    SAR EDX,0x1f                        ; 00515eb2
    IDIV EBX                            ; 00515eb5
    MOV dword ptr [ECX + 0xc],EAX       ; 00515eb7
    MOV EDX,dword ptr [0x01c6b598]      ; 00515eba | DAT_01c6b598
    MOV EBX,dword ptr [ECX + 0x8]       ; 00515ec0
    MOV EAX,dword ptr [ECX]             ; 00515ec3
    IMUL EDX                            ; 00515ec5
    IDIV EBX                            ; 00515ec7
    MOV EDX,dword ptr [0x01c6b5a0]      ; 00515ec9 | DAT_01c6b5a0
    ADD EAX,EDX                         ; 00515ecf
    MOV EBX,dword ptr [ECX + 0x8]       ; 00515ed1
    MOV dword ptr [ECX + 0x10],EAX      ; 00515ed4
    MOV EDX,dword ptr [0x01c6b59c]      ; 00515ed7 | DAT_01c6b59c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00515edd
    IMUL EDX                            ; 00515ee0
    IDIV EBX                            ; 00515ee2
    MOV EDX,dword ptr [0x01c6b5a4]      ; 00515ee4 | DAT_01c6b5a4
    ADD EAX,EDX                         ; 00515eea
    MOV dword ptr [ECX + 0x14],EAX      ; 00515eec
    INC ESI                             ; 00515eef
        ;   Label: LAB_00515eef
    ADD ECX,0x30                        ; 00515ef0
    CMP ESI,EDI                         ; 00515ef3
    JL 0x00515ea2                       ; 00515ef5
        ;   XREF to: 00515ea2 (CONDITIONAL_JUMP)  ; LAB_00515ea2
    CMP dword ptr [0x007303fc],0x0      ; 00515ef7 | DAT_007303fc
        ;   Label: LAB_00515ef7
    JZ 0x00515f5c                       ; 00515efe
        ;   XREF to: 00515f5c (CONDITIONAL_JUMP)  ; LAB_00515f5c
    MOV EDI,dword ptr [ESP + 0x28]      ; 00515f00
    MOV EAX,dword ptr [ESP + 0x28]      ; 00515f04
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00515f08
    ADD EDI,0x30                        ; 00515f0c
    ADD EAX,0x60                        ; 00515f0f
    CMP EDX,0x3                         ; 00515f12
    JLE 0x00516029                      ; 00515f15
        ;   XREF to: 00516029 (CONDITIONAL_JUMP)  ; LAB_00516029
    SUB EDX,0x2                         ; 00515f1b
    MOV ESI,EAX                         ; 00515f1e
    XOR EBX,EBX                         ; 00515f20
    XOR EBP,EBP                         ; 00515f22
    MOV dword ptr [ESP + 0x4],EDX       ; 00515f24
    TEST EDX,EDX                        ; 00515f28
    JLE 0x00515f52                      ; 00515f2a
        ;   XREF to: 00515f52 (CONDITIONAL_JUMP)  ; LAB_00515f52
    PUSH ESI                            ; 00515f2c
        ;   Label: LAB_00515f2c
    PUSH EDI                            ; 00515f2d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00515f2e
    PUSH EAX                            ; 00515f32
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 00515f33
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00515f38
    TEST EAX,EAX                        ; 00515f3b
    JZ 0x00516023                       ; 00515f3d
        ;   XREF to: 00516023 (CONDITIONAL_JUMP)  ; LAB_00516023
    MOV EDX,dword ptr [ESP + 0x4]       ; 00515f43
        ;   Label: LAB_00515f43
    ADD EDI,0x30                        ; 00515f47
    INC EBX                             ; 00515f4a
    ADD ESI,0x30                        ; 00515f4b
    CMP EBX,EDX                         ; 00515f4e
    JL 0x00515f2c                       ; 00515f50
        ;   XREF to: 00515f2c (CONDITIONAL_JUMP)  ; LAB_00515f2c
    CMP EBP,dword ptr [ESP + 0x4]       ; 00515f52
        ;   Label: LAB_00515f52
    JZ 0x0051601b                       ; 00515f56
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
    CMP dword ptr [0x01c6cee8],0x0      ; 00515f5c | DAT_01c6cee8
        ;   Label: LAB_00515f5c
    JZ 0x00515f72                       ; 00515f63
        ;   XREF to: 00515f72 (CONDITIONAL_JUMP)  ; LAB_00515f72
    CMP dword ptr [0x007303f4],0x0      ; 00515f65 | DAT_007303f4
    JZ 0x00516048                       ; 00515f6c
        ;   XREF to: 00516048 (CONDITIONAL_JUMP)  ; LAB_00516048
    MOV EBX,dword ptr [0x01ed3198]      ; 00515f72 | DAT_01ed3198
        ;   Label: LAB_00515f72
    INC EBX                             ; 00515f78
    MOV EAX,[0x01c6e2b8]                ; 00515f79 | DAT_01c6e2b8
    MOV dword ptr [0x01ed3198],EBX      ; 00515f7e | DAT_01ed3198
    CMP EAX,0x6                         ; 00515f84
    JA 0x00515f90                       ; 00515f87
        ;   XREF to: 00515f90 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x515e58]  ; 00515f89 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 00515f90
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 00515f95
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00515f97
    MOV dword ptr [0x01ed3190],EDX      ; 00515f9b | DAT_01ed3190
    MOV dword ptr [0x01ed2c88],EDX      ; 00515fa1 | DAT_01ed2c88
    MOV dword ptr [ESP + 0x8],EDX       ; 00515fa7
    MOV [0x01ed318c],EAX                ; 00515fab | DAT_01ed318c
    TEST ESI,ESI                        ; 00515fb0
    JLE 0x00516000                      ; 00515fb2
        ;   XREF to: 00516000 (CONDITIONAL_JUMP)  ; LAB_00516000
    MOV EAX,dword ptr [ESP + 0x8]       ; 00515fb4
        ;   Label: LAB_00515fb4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00515fb8
    INC EAX                             ; 00515fbc
    CMP EAX,ECX                         ; 00515fbd
    JL 0x00515fc3                       ; 00515fbf
        ;   XREF to: 00515fc3 (CONDITIONAL_JUMP)  ; LAB_00515fc3
    XOR EAX,EAX                         ; 00515fc1
    IMUL EAX,EAX,0x30                   ; 00515fc3
        ;   Label: LAB_00515fc3
    MOV EBP,dword ptr [ESP + 0x28]      ; 00515fc6
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515fca
    ADD EBP,EAX                         ; 00515fce
    IMUL EAX,EBX,0x30                   ; 00515fd0
    ADD EAX,dword ptr [ESP + 0x28]      ; 00515fd3
    MOV EDI,EBP                         ; 00515fd7
    MOV ECX,dword ptr [EAX + 0x14]      ; 00515fd9
    MOV ESI,dword ptr [EBP + 0x14]      ; 00515fdc
    SAR ECX,0x10                        ; 00515fdf
    SAR ESI,0x10                        ; 00515fe2
    MOV EBX,EAX                         ; 00515fe5
    CMP ECX,ESI                         ; 00515fe7
    JNZ 0x005160f1                      ; 00515fe9
        ;   XREF to: 005160f1 (CONDITIONAL_JUMP)  ; LAB_005160f1
    MOV ECX,dword ptr [ESP + 0x8]       ; 00515fef
        ;   Label: LAB_00515fef
    INC ECX                             ; 00515ff3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00515ff4
    MOV dword ptr [ESP + 0x8],ECX       ; 00515ff8
    CMP ECX,EBX                         ; 00515ffc
    JL 0x00515fb4                       ; 00515ffe
        ;   XREF to: 00515fb4 (CONDITIONAL_JUMP)  ; LAB_00515fb4
    PUSH 0x0                            ; 00516000
        ;   Label: LAB_00516000
    MOV ESI,dword ptr [0x01ed318c]      ; 00516002 | DAT_01ed318c
    PUSH ESI                            ; 00516008
    CALL engine_prim.c_findEdgeInBuffer_FUN_005158e0 ; 00516009
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_005158e0(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0051600e
    MOV EBP,EAX                         ; 00516011
    TEST EAX,EAX                        ; 00516013
    JNZ 0x00516268                      ; 00516015
        ;   XREF to: 00516268 (CONDITIONAL_JUMP)  ; LAB_00516268
    ADD ESP,0x14                        ; 0051601b
        ;   Label: LAB_0051601b
    POP EBP                             ; 0051601e
    POP EDI                             ; 0051601f
    POP ESI                             ; 00516020
    POP EBX                             ; 00516021
    RET                                 ; 00516022
    INC EBP                             ; 00516023
        ;   Label: LAB_00516023
    JMP 0x00515f43                      ; 00516024
        ;   XREF to: 00515f43 (UNCONDITIONAL_JUMP)  ; LAB_00515f43
    PUSH EAX                            ; 00516029
        ;   Label: LAB_00516029
    PUSH EDI                            ; 0051602a
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051602b
    PUSH ECX                            ; 0051602f
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 00516030
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00516035
    TEST EAX,EAX                        ; 00516038
    JNZ 0x00515f5c                      ; 0051603a
        ;   XREF to: 00515f5c (CONDITIONAL_JUMP)  ; LAB_00515f5c
    ADD ESP,0x14                        ; 00516040
    POP EBP                             ; 00516043
    POP EDI                             ; 00516044
    POP ESI                             ; 00516045
    POP EBX                             ; 00516046
    RET                                 ; 00516047
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00516048
        ;   Label: LAB_00516048
    MOV EDI,dword ptr [0x01ed3198]      ; 0051604c | DAT_01ed3198
    MOV EBP,dword ptr [0x01c6e2b4]      ; 00516052 | DAT_01c6e2b4
    SUB EAX,0x2                         ; 00516058
    PUSH EBP                            ; 0051605b
    ADD EDI,EAX                         ; 0051605c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051605e
    PUSH EAX                            ; 00516062
    MOV EDX,dword ptr [ESP + 0x30]      ; 00516063
    PUSH EDX                            ; 00516067
    MOV dword ptr [0x01ed3198],EDI      ; 00516068 | DAT_01ed3198
    CALL engine_special.cpp_drawPolygon_FUN_00565c10 ; 0051606e
        ;   XREF to: 00565c10 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00565c10(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00516073
    ADD ESP,0x14                        ; 00516076
    POP EBP                             ; 00516079
    POP EDI                             ; 0051607a
    POP ESI                             ; 0051607b
    POP EBX                             ; 0051607c
    RET                                 ; 0051607d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051607e
        ;   Label: caseD_1
    PUSH EDI                            ; 00516082
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00516083
    PUSH EBP                            ; 00516087
    CALL engine_prim.c_prepareDepthBuffer_FUN_00515920 ; 00516088
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00515920(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0051608d
    JMP 0x00515f90                      ; 00516090
        ;   XREF to: 00515f90 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00516095
        ;   Label: caseD_2
    PUSH EBX                            ; 00516099
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0051609a
    PUSH ESI                            ; 0051609e
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 0051609f
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00515990(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005160a4
    JMP 0x00515f90                      ; 005160a7
        ;   XREF to: 00515f90 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005160ac
        ;   Label: caseD_3
    PUSH EDX                            ; 005160b0
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005160b1
    PUSH ECX                            ; 005160b5
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10 ; 005160b6
        ;   XREF to: 00515a10 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005160bb
    JMP 0x00515f90                      ; 005160be
        ;   XREF to: 00515f90 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005160c3
        ;   Label: caseD_5
    PUSH EBP                            ; 005160c7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005160c8
    PUSH EAX                            ; 005160cc
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 005160cd
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00515990(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005160d2
    JMP 0x00515f90                      ; 005160d5
        ;   XREF to: 00515f90 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005160da
        ;   Label: caseD_6
    PUSH ESI                            ; 005160de
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005160df
    PUSH EDI                            ; 005160e3
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 005160e4
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00515a80(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005160e9
    JMP 0x00515f90                      ; 005160ec
        ;   XREF to: 00515f90 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [EAX + 0x14]      ; 005160f1
        ;   Label: LAB_005160f1
    CMP EDX,dword ptr [EBP + 0x14]      ; 005160f4
    JLE 0x00516103                      ; 005160f7
        ;   XREF to: 00516103 (CONDITIONAL_JUMP)  ; LAB_00516103
    MOV EDI,EAX                         ; 005160f9
    MOV EBX,EBP                         ; 005160fb
    MOV EAX,ECX                         ; 005160fd
    MOV ECX,ESI                         ; 005160ff
    MOV ESI,EAX                         ; 00516101
    IMUL EBP,dword ptr [0x01ed2c88],0x50 ; 00516103 | DAT_01ed2c88
        ;   Label: LAB_00516103
    ADD EBP,0x1ed2c8c                   ; 0051610a
    MOV dword ptr [EBP],ECX             ; 00516110 | DAT_01ed2c8c
    MOV EDX,dword ptr [0x01ed318c]      ; 00516113 | DAT_01ed318c
    MOV dword ptr [EBP + 0x4],ESI       ; 00516119
    CMP ECX,EDX                         ; 0051611c
    JGE 0x00516126                      ; 0051611e
        ;   XREF to: 00516126 (CONDITIONAL_JUMP)  ; LAB_00516126
    MOV dword ptr [0x01ed318c],ECX      ; 00516120 | DAT_01ed318c
    CMP ESI,dword ptr [0x01ed3190]      ; 00516126 | DAT_01ed3190
        ;   Label: LAB_00516126
    JLE 0x00516134                      ; 0051612c
        ;   XREF to: 00516134 (CONDITIONAL_JUMP)  ; LAB_00516134
    MOV dword ptr [0x01ed3190],ESI      ; 0051612e | DAT_01ed3190
    MOV ESI,dword ptr [EBX + 0x14]      ; 00516134
        ;   Label: LAB_00516134
    MOV ECX,dword ptr [EDI + 0x14]      ; 00516137
    SUB ECX,ESI                         ; 0051613a
    CMP ECX,0x10000                     ; 0051613c
    JNC 0x00516258                      ; 00516142
        ;   XREF to: 00516258 (CONDITIONAL_JUMP)  ; LAB_00516258
    XOR ECX,ECX                         ; 00516148
    MOV EAX,dword ptr [EDI + 0x10]      ; 0051614a
        ;   Label: LAB_0051614a
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051614d
    MOV ESI,dword ptr [EBX + 0x14]      ; 00516150
    SUB EAX,EDX                         ; 00516153
    AND ESI,0xffff                      ; 00516155
    MOV EDX,EAX                         ; 0051615b
    MOV EAX,ECX                         ; 0051615d
    XOR SI,0xffff                       ; 0051615f
    IMUL EDX                            ; 00516163
    SHRD EAX,EDX,0x10                   ; 00516165
    MOV EDX,EAX                         ; 00516169
    MOV dword ptr [EBP + 0xc],EAX       ; 0051616b
    MOV EAX,ESI                         ; 0051616e
    IMUL EDX                            ; 00516170
    SHRD EAX,EDX,0x10                   ; 00516172
    MOV dword ptr [ESP],EAX             ; 00516176
    MOV EDX,dword ptr [ESP]             ; 00516179
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051617c
    ADD EAX,EDX                         ; 0051617f
    MOV dword ptr [EBP + 0x8],EAX       ; 00516181
    MOV EAX,dword ptr [EDI + 0x18]      ; 00516184
    MOV EDX,dword ptr [EBX + 0x18]      ; 00516187
    SUB EAX,EDX                         ; 0051618a
    MOV EDX,EAX                         ; 0051618c
    MOV EAX,ECX                         ; 0051618e
    IMUL EDX                            ; 00516190
    SHRD EAX,EDX,0x10                   ; 00516192
    MOV EDX,EAX                         ; 00516196
    MOV dword ptr [EBP + 0x1c],EAX      ; 00516198
    MOV EAX,ESI                         ; 0051619b
    IMUL EDX                            ; 0051619d
    SHRD EAX,EDX,0x10                   ; 0051619f
    MOV dword ptr [ESP],EAX             ; 005161a3
    MOV EDX,dword ptr [ESP]             ; 005161a6
    MOV EAX,dword ptr [EBX + 0x18]      ; 005161a9
    ADD EAX,EDX                         ; 005161ac
    MOV dword ptr [EBP + 0x18],EAX      ; 005161ae
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005161b1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005161b4
    SUB EAX,EDX                         ; 005161b7
    MOV EDX,EAX                         ; 005161b9
    MOV EAX,ECX                         ; 005161bb
    IMUL EDX                            ; 005161bd
    SHRD EAX,EDX,0x10                   ; 005161bf
    MOV EDX,EAX                         ; 005161c3
    MOV dword ptr [EBP + 0x24],EAX      ; 005161c5
    MOV EAX,ESI                         ; 005161c8
    IMUL EDX                            ; 005161ca
    SHRD EAX,EDX,0x10                   ; 005161cc
    MOV dword ptr [ESP],EAX             ; 005161d0
    MOV EDX,dword ptr [ESP]             ; 005161d3
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005161d6
    ADD EAX,EDX                         ; 005161d9
    MOV dword ptr [EBP + 0x20],EAX      ; 005161db
    MOV EAX,dword ptr [EDI + 0x20]      ; 005161de
    MOV EDX,dword ptr [EBX + 0x20]      ; 005161e1
    SUB EAX,EDX                         ; 005161e4
    MOV EDX,EAX                         ; 005161e6
    MOV EAX,ECX                         ; 005161e8
    IMUL EDX                            ; 005161ea
    SHRD EAX,EDX,0x10                   ; 005161ec
    MOV EDX,EAX                         ; 005161f0
    MOV dword ptr [EBP + 0x14],EAX      ; 005161f2
    MOV EAX,ESI                         ; 005161f5
    IMUL EDX                            ; 005161f7
    SHRD EAX,EDX,0x10                   ; 005161f9
    MOV EDX,dword ptr [EBX + 0x20]      ; 005161fd
    ADD EDX,EAX                         ; 00516200
    MOV dword ptr [EBP + 0x10],EDX      ; 00516202
    MOV EDX,dword ptr [EDI + 0x2c]      ; 00516205
    SUB EDX,dword ptr [EBX + 0x2c]      ; 00516208
    MOV EAX,ECX                         ; 0051620b
    IMUL EDX                            ; 0051620d
    SHRD EAX,EDX,0x10                   ; 0051620f
    MOV EDX,EAX                         ; 00516213
    MOV dword ptr [EBP + 0x34],EAX      ; 00516215
    MOV EAX,ESI                         ; 00516218
    IMUL EDX                            ; 0051621a
    SHRD EAX,EDX,0x10                   ; 0051621c
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00516220
    ADD EDX,EAX                         ; 00516223
    MOV dword ptr [EBP + 0x30],EDX      ; 00516225
    MOV EDX,dword ptr [EDI + 0x8]       ; 00516228
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051622b
    MOV EAX,ECX                         ; 0051622e
    SUB EDX,EDI                         ; 00516230
    IMUL EDX                            ; 00516232
    SHRD EAX,EDX,0x10                   ; 00516234
    MOV EDX,EAX                         ; 00516238
    MOV dword ptr [EBP + 0x2c],EAX      ; 0051623a
    MOV EAX,ESI                         ; 0051623d
    IMUL EDX                            ; 0051623f
    SHRD EAX,EDX,0x10                   ; 00516241
    MOV EDX,dword ptr [EBX + 0x8]       ; 00516245
    ADD EDX,EAX                         ; 00516248
    MOV dword ptr [EBP + 0x28],EDX      ; 0051624a
    INC dword ptr [0x01ed2c88]          ; 0051624d | DAT_01ed2c88
    JMP 0x00515fef                      ; 00516253
        ;   XREF to: 00515fef (UNCONDITIONAL_JUMP)  ; LAB_00515fef
    MOV EAX,0xffffffff                  ; 00516258
        ;   Label: LAB_00516258
    XOR EDX,EDX                         ; 0051625d
    DIV ECX                             ; 0051625f
    MOV ECX,EAX                         ; 00516261
    JMP 0x0051614a                      ; 00516263
        ;   XREF to: 0051614a (UNCONDITIONAL_JUMP)  ; LAB_0051614a
    PUSH EAX                            ; 00516268
        ;   Label: LAB_00516268
    MOV EDI,dword ptr [0x01ed318c]      ; 00516269 | DAT_01ed318c
    PUSH EDI                            ; 0051626f
    CALL engine_prim.c_findEdgeInBuffer_FUN_005158e0 ; 00516270
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_005158e0(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00516275
    MOV dword ptr [ESP + 0x10],EAX      ; 00516278
    TEST EAX,EAX                        ; 0051627c
    JZ 0x0051601b                       ; 0051627e
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
    MOV EAX,[0x01ed318c]                ; 00516284 | DAT_01ed318c
    MOV EDX,dword ptr [0x00603974]      ; 00516289 | DAT_00603974
    MOV dword ptr [ESP + 0xc],EAX       ; 0051628f
    CMP EAX,EDX                         ; 00516293
    JGE 0x0051601b                      ; 00516295
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
        ;   Label: LAB_00516295
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051629b
    CMP EAX,dword ptr [EBP + 0x4]       ; 0051629f
    JGE 0x0051637d                      ; 005162a2
        ;   XREF to: 0051637d (CONDITIONAL_JUMP)  ; LAB_0051637d
    MOV EDX,dword ptr [ESP + 0x10]      ; 005162a8
        ;   Label: LAB_005162a8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005162ac
    CMP EAX,dword ptr [EDX + 0x4]       ; 005162b0
    JL 0x005162d1                       ; 005162b3
        ;   XREF to: 005162d1 (CONDITIONAL_JUMP)  ; LAB_005162d1
    PUSH EBP                            ; 005162b5
    PUSH EAX                            ; 005162b6
    MOV dword ptr [EDX],0xffffffff      ; 005162b7
    CALL engine_prim.c_findEdgeInBuffer_FUN_005158e0 ; 005162bd
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_005158e0(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 005162c2
    MOV dword ptr [ESP + 0x10],EAX      ; 005162c5
    TEST EAX,EAX                        ; 005162c9
    JZ 0x0051601b                       ; 005162cb
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
    MOV EDI,dword ptr [ESP + 0x10]      ; 005162d1
        ;   Label: LAB_005162d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005162d5
    MOV ESI,EBP                         ; 005162d9
    CALL engine_special.cpp_FUN_00563257 ; 005162db
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    MOV EAX,dword ptr [EBP + 0xc]       ; 005162e0
    ADD dword ptr [EBP + 0x8],EAX       ; 005162e3
    MOV ECX,dword ptr [EBP + 0x18]      ; 005162e6
    MOV EBX,dword ptr [EBP + 0x20]      ; 005162e9
    MOV ESI,dword ptr [EBP + 0x10]      ; 005162ec
    MOV EDI,dword ptr [EBP + 0x28]      ; 005162ef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005162f2
    MOV EDX,dword ptr [EBP + 0x30]      ; 005162f5
    ADD ECX,EAX                         ; 005162f8
    MOV EAX,dword ptr [EBP + 0x24]      ; 005162fa
    MOV dword ptr [EBP + 0x18],ECX      ; 005162fd
    ADD EBX,EAX                         ; 00516300
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516302
    MOV dword ptr [EBP + 0x20],EBX      ; 00516305
    ADD ESI,EAX                         ; 00516308
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0051630a
    MOV dword ptr [EBP + 0x10],ESI      ; 0051630d
    ADD EDI,EAX                         ; 00516310
    MOV EAX,dword ptr [EBP + 0x34]      ; 00516312
    MOV dword ptr [EBP + 0x28],EDI      ; 00516315
    ADD EDX,EAX                         ; 00516318
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051631a
    MOV dword ptr [EBP + 0x30],EDX      ; 0051631e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00516321
    MOV EAX,dword ptr [EAX + 0xc]       ; 00516325
    MOV ECX,dword ptr [EDX + 0x8]       ; 00516328
    MOV EBX,dword ptr [EDX + 0x18]      ; 0051632b
    ADD ECX,EAX                         ; 0051632e
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00516330
    MOV dword ptr [EDX + 0x8],ECX       ; 00516333
    ADD EBX,EAX                         ; 00516336
    MOV dword ptr [EDX + 0x18],EBX      ; 00516338
    MOV ESI,dword ptr [EDX + 0x20]      ; 0051633b
    MOV EDI,dword ptr [EDX + 0x10]      ; 0051633e
    MOV ECX,dword ptr [EDX + 0x28]      ; 00516341
    MOV EAX,dword ptr [EDX + 0x24]      ; 00516344
    MOV EBX,dword ptr [EDX + 0x30]      ; 00516347
    ADD ESI,EAX                         ; 0051634a
    MOV EAX,dword ptr [EDX + 0x14]      ; 0051634c
    MOV dword ptr [EDX + 0x20],ESI      ; 0051634f
    MOV ESI,dword ptr [ESP + 0xc]       ; 00516352
    ADD EDI,EAX                         ; 00516356
    INC ESI                             ; 00516358
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00516359
    MOV dword ptr [EDX + 0x10],EDI      ; 0051635c
    MOV EDI,dword ptr [0x00603974]      ; 0051635f | DAT_00603974
    ADD ECX,EAX                         ; 00516365
    MOV EAX,dword ptr [EDX + 0x34]      ; 00516367
    MOV dword ptr [EDX + 0x28],ECX      ; 0051636a
    ADD EBX,EAX                         ; 0051636d
    MOV dword ptr [ESP + 0xc],ESI       ; 0051636f
    MOV dword ptr [EDX + 0x30],EBX      ; 00516373
    CMP ESI,EDI                         ; 00516376
    JMP 0x00516295                      ; 00516378
        ;   XREF to: 00516295 (UNCONDITIONAL_JUMP)  ; LAB_00516295
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051637d
        ;   Label: LAB_0051637d
    PUSH ECX                            ; 00516381
    PUSH EAX                            ; 00516382
    MOV dword ptr [EBP],0xffffffff      ; 00516383
    CALL engine_prim.c_findEdgeInBuffer_FUN_005158e0 ; 0051638a
        ;   XREF to: 005158e0 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_005158e0(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0051638f
    MOV EBP,EAX                         ; 00516392
    TEST EAX,EAX                        ; 00516394
    JZ 0x0051601b                       ; 00516396
        ;   XREF to: 0051601b (CONDITIONAL_JUMP)  ; LAB_0051601b
    JMP 0x005162a8                      ; 0051639c
        ;   XREF to: 005162a8 (UNCONDITIONAL_JUMP)  ; LAB_005162a8

