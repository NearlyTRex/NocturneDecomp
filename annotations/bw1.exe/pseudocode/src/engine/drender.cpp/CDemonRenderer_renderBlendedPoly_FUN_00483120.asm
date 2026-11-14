; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 at 0044c0e2
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b1140
;   core_glass.cpp_CGlass_renderOpaque_FUN_004e1a10 at 004e1baa
;   core_glass.cpp_CGlass_renderTransparent_FUN_004e1be0 at 004e1d79
;   core_water.cpp_CWater_render_FUN_005a9f10 at 005aa453
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483120
        ;   Label: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
    PUSH ESI                            ; 00483121
    PUSH EDI                            ; 00483122
    PUSH EBP                            ; 00483123
    SUB ESP,0x4                         ; 00483124
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483127
    CMP dword ptr [EBX + 0xc],0x0       ; 0048312b
    JNZ 0x004831ce                      ; 0048312f
        ;   XREF to: 004831ce (CONDITIONAL_JUMP)  ; LAB_004831ce
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483135
        ;   Label: LAB_00483135
    MOV ECX,0xffffffff                  ; 00483139
    XOR EDX,EDX                         ; 0048313e
    MOV ESI,dword ptr [EAX + 0x4]       ; 00483140
    MOV dword ptr [ESP],ECX             ; 00483143
    TEST ESI,ESI                        ; 00483146
    JLE 0x00483180                      ; 00483148
        ;   XREF to: 00483180 (CONDITIONAL_JUMP)  ; LAB_00483180
    XOR ECX,ECX                         ; 0048314a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048314c
        ;   Label: LAB_0048314c
    MOV dword ptr [ECX + 0x1bc1240],ESI ; 0048314f | DAT_01bc1240 | DAT_01bc1244
    IMUL ESI,ESI,0x30                   ; 00483155
    MOV EDI,dword ptr [EBX]             ; 00483158
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048315a
    MOV EDI,dword ptr [ESP]             ; 0048315e
    ADD ECX,0x4                         ; 00483161
    AND EDI,ESI                         ; 00483164
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483166
    ADD EAX,0xc                         ; 0048316a
    INC EDX                             ; 0048316d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048316e
    MOV dword ptr [ESP],EDI             ; 00483171
    CMP EDX,EBP                         ; 00483174
    JL 0x0048314c                       ; 00483176
        ;   XREF to: 0048314c (CONDITIONAL_JUMP)  ; LAB_0048314c
    LEA EAX,[EAX]                       ; 00483178
    MOV EDX,EDX                         ; 0048317e
    TEST byte ptr [ESP + 0x3],0x80      ; 00483180
        ;   Label: LAB_00483180
    JZ 0x0048318d                       ; 00483185
        ;   XREF to: 0048318d (CONDITIONAL_JUMP)  ; LAB_0048318d
    TEST byte ptr [ESP],0x1f            ; 00483187
    JNZ 0x004831c6                      ; 0048318b
        ;   XREF to: 004831c6 (CONDITIONAL_JUMP)  ; LAB_004831c6
    CMP dword ptr [EBX + 0x4],0x0       ; 0048318d
        ;   Label: LAB_0048318d
    JZ 0x004831e7                       ; 00483191
        ;   XREF to: 004831e7 (CONDITIONAL_JUMP)  ; LAB_004831e7
    XOR ESI,ESI                         ; 00483193
    MOV ECX,0x486e26                    ; 00483195
    MOV dword ptr [0x01c51d14],ESI      ; 0048319a | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ESI      ; 004831a0 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 004831a6 | DAT_01c4f02c
    LEA EAX,[EAX]                       ; 004831ac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004831b0
        ;   Label: LAB_004831b0
    PUSH 0x1bc1240                      ; 004831b4 | DAT_01bc1240
    MOV EDX,dword ptr [EAX + 0x4]       ; 004831b9
    PUSH EDX                            ; 004831bc
    PUSH EBX                            ; 004831bd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004831be
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004831c3
    ADD ESP,0x4                         ; 004831c6
        ;   Label: LAB_004831c6
    POP EBP                             ; 004831c9
    POP EDI                             ; 004831ca
    POP ESI                             ; 004831cb
    POP EBX                             ; 004831cc
    RET                                 ; 004831cd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004831ce
        ;   Label: LAB_004831ce
    ADD EAX,0x8                         ; 004831d2
    PUSH EAX                            ; 004831d5
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004831d6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004831db
    TEST EAX,EAX                        ; 004831de
    JZ 0x004831c6                       ; 004831e0
        ;   XREF to: 004831c6 (CONDITIONAL_JUMP)  ; LAB_004831c6
    JMP 0x00483135                      ; 004831e2
        ;   XREF to: 00483135 (UNCONDITIONAL_JUMP)  ; LAB_00483135
    CMP dword ptr [0x0061b4a0],0x20     ; 004831e7 | DAT_0061b4a0
        ;   Label: LAB_004831e7
    JNZ 0x00483259                      ; 004831ee
        ;   XREF to: 00483259 (CONDITIONAL_JUMP)  ; LAB_00483259
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004831f0 | DAT_01c4f02c
    MOV EBP,0x6                         ; 004831fa
        ;   Label: LAB_004831fa
    MOV EDI,0x267                       ; 004831ff
    MOV EAX,dword ptr [EBX + 0x20]      ; 00483204
    MOV dword ptr [0x01c51d18],EBP      ; 00483207 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 0048320d | DAT_01c51d14
    TEST EAX,EAX                        ; 00483213
    JNZ 0x004831b0                      ; 00483215
        ;   XREF to: 004831b0 (CONDITIONAL_JUMP)  ; LAB_004831b0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483217
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048321b
    XOR ECX,ECX                         ; 0048321e
    TEST EDX,EDX                        ; 00483220
    JLE 0x004831b0                      ; 00483222
        ;   XREF to: 004831b0 (CONDITIONAL_JUMP)  ; LAB_004831b0
    XOR EDX,EDX                         ; 00483224
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 00483226 | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_00483226
    IMUL ESI,ESI,0x30                   ; 0048322c
    MOV EDI,dword ptr [EBX]             ; 0048322f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00483231
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00483234
    MOV EDI,dword ptr [EBX]             ; 00483238
    ADD EDI,ESI                         ; 0048323a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048323c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048323f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483242
    ADD EAX,0xc                         ; 00483246
    INC ECX                             ; 00483249
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048324a
    ADD EDX,0x4                         ; 0048324d
    CMP ECX,EBP                         ; 00483250
    JL 0x00483226                       ; 00483252
        ;   XREF to: 00483226 (CONDITIONAL_JUMP)  ; LAB_00483226
    JMP 0x004831b0                      ; 00483254
        ;   XREF to: 004831b0 (UNCONDITIONAL_JUMP)  ; LAB_004831b0
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00483259 | DAT_01c4f02c
        ;   Label: LAB_00483259
    JMP 0x004831fa                      ; 00483263
        ;   XREF to: 004831fa (UNCONDITIONAL_JUMP)  ; LAB_004831fa

