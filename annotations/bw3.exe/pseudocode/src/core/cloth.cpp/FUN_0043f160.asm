; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043f160(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043f10c at 0043f13b
;
; Referenced Globals:
;   undefined4 DAT_005b9144
;   undefined4 DAT_005b9148
;   undefined4 DAT_005dd3b0
;   undefined4 DAT_005f2afc
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b9b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004803d0
;   shape_edittool.cpp_FUN_00480f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f160
        ;   Label: core_cloth.cpp_FUN_0043f160
    PUSH ESI                            ; 0043f161
    PUSH EDI                            ; 0043f162
    PUSH EBP                            ; 0043f163
    SUB ESP,0x60                        ; 0043f164
    IMUL EAX,dword ptr [ESP + 0x78],0xac ; 0043f167
    MOV EBP,dword ptr [ESP + 0x74]      ; 0043f16f
    ADD EBP,0x37b50                     ; 0043f173
    ADD EBP,EAX                         ; 0043f179
    LEA EAX,[EBP + 0x78]                ; 0043f17b
    LEA ESI,[ESP + 0x24]                ; 0043f17e
    PUSH EAX                            ; 0043f182
    LEA EDI,[ESP + 0x34]                ; 0043f183
    MOV EBX,0x270                       ; 0043f187
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0043f18c
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    ADD ESP,0x4                         ; 0043f191
    LEA EAX,[EBP + 0xa0]                ; 0043f194
    LEA ESI,[ESP + 0x24]                ; 0043f19a
    PUSH EAX                            ; 0043f19e
    LEA EAX,[ESP + 0x34]                ; 0043f19f
    MOV ECX,dword ptr [0x005f2afc]      ; 0043f1a3 | DAT_005f2afc
    PUSH EAX                            ; 0043f1a9
    MOVSD ES:EDI,ESI                    ; 0043f1aa
    MOVSD ES:EDI,ESI                    ; 0043f1ab
    MOVSD ES:EDI,ESI                    ; 0043f1ac
    PUSH ECX                            ; 0043f1ad
    XOR ESI,ESI                         ; 0043f1ae
    XOR EDI,EDI                         ; 0043f1b0
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0043f1b2
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EDX,0xc                         ; 0043f1b7
    ADD ESP,0xc                         ; 0043f1bc
    MOV ECX,0xffffffff                  ; 0043f1bf
    MOV dword ptr [ESP + 0x54],EBX      ; 0043f1c4
    MOV dword ptr [ESP + 0x50],ESI      ; 0043f1c8
    MOV dword ptr [ESP + 0x4c],EDX      ; 0043f1cc
    MOV dword ptr [ESP + 0x58],ECX      ; 0043f1d0
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043f1d4
        ;   Label: LAB_0043f1d4
    MOV dword ptr [ESP + 0x5c],EAX      ; 0043f1d8
    FILD dword ptr [ESP + 0x5c]         ; 0043f1dc
    FMUL float ptr [0x005b9144]         ; 0043f1e0 | DAT_005b9144
    FMUL float ptr [0x005b9148]         ; 0043f1e6 | DAT_005b9148
    FLD float ptr [EBP + 0x14]          ; 0043f1ec
    FLD ST1                             ; 0043f1ef
    FSIN                                ; 0043f1f1
    FXCH ST2                            ; 0043f1f3
    FCOS                                ; 0043f1f5
    FXCH ST2                            ; 0043f1f7
    FMULP                               ; 0043f1f9
    FSTP float ptr [ESP + 0xc]          ; 0043f1fb
    FMUL float ptr [EBP + 0x18]         ; 0043f1ff
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f202 | DAT_005f2afc
    XOR EBX,EBX                         ; 0043f208
    LEA EAX,[ESP + 0xc]                 ; 0043f20a
    MOV dword ptr [ESP + 0x14],EBX      ; 0043f20e
    LEA EBX,[ESP + 0x18]                ; 0043f212
    FSTP float ptr [ESP + 0x10]         ; 0043f216
    FLD float ptr [EAX]                 ; 0043f21a
    FMUL float ptr [0x005dd3b0]         ; 0043f21c | DAT_005dd3b0
    FISTP dword ptr [EBX]               ; 0043f222
    FLD float ptr [EAX + 0x4]           ; 0043f224
    FMUL float ptr [0x005dd3b0]         ; 0043f227 | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x4]         ; 0043f22d
    FLD float ptr [EAX + 0x8]           ; 0043f230
    FMUL float ptr [0x005dd3b0]         ; 0043f233 | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x8]         ; 0043f239
    LEA EAX,[ESP + 0x18]                ; 0043f23c
    PUSH EAX                            ; 0043f240
    MOV EAX,dword ptr [EDX]             ; 0043f241
    ADD EAX,EDI                         ; 0043f243
    PUSH EAX                            ; 0043f245
    CALL engine_special.cpp_FUN_005632a3 ; 0043f246
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043f24b
    MOV EAX,dword ptr [EBP + 0x44]      ; 0043f24e
    MOV dword ptr [ESP + 0x14],EAX      ; 0043f251
    LEA EAX,[ESI + 0xd]                 ; 0043f255
    MOV EBX,ESP                         ; 0043f258
    MOV dword ptr [ESP + 0x48],EAX      ; 0043f25a
    LEA EAX,[ESP + 0xc]                 ; 0043f25e
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f262 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0043f268
    FMUL float ptr [0x005dd3b0]         ; 0043f26a | DAT_005dd3b0
    FISTP dword ptr [EBX]               ; 0043f270
    FLD float ptr [EAX + 0x4]           ; 0043f272
    FMUL float ptr [0x005dd3b0]         ; 0043f275 | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x4]         ; 0043f27b
    FLD float ptr [EAX + 0x8]           ; 0043f27e
    FMUL float ptr [0x005dd3b0]         ; 0043f281 | DAT_005dd3b0
    FISTP dword ptr [EBX + 0x8]         ; 0043f287
    MOV EAX,ESP                         ; 0043f28a
    PUSH EAX                            ; 0043f28c
    MOV EAX,dword ptr [EDX]             ; 0043f28d
    ADD EAX,dword ptr [ESP + 0x58]      ; 0043f28f
    PUSH EAX                            ; 0043f293
    CALL engine_special.cpp_FUN_005632a3 ; 0043f294
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043f299
    TEST ESI,ESI                        ; 0043f29c
    JG 0x0043f2f3                       ; 0043f29e
        ;   XREF to: 0043f2f3 (CONDITIONAL_JUMP)  ; LAB_0043f2f3
    MOV ECX,dword ptr [ESP + 0x50]      ; 0043f2a0
        ;   Label: LAB_0043f2a0
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0043f2a4
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043f2a8
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043f2ac
    ADD EDI,0x30                        ; 0043f2b0
    INC ESI                             ; 0043f2b3
    ADD ECX,0x2                         ; 0043f2b4
    INC EBX                             ; 0043f2b7
    INC EAX                             ; 0043f2b8
    ADD EDX,0x30                        ; 0043f2b9
    MOV dword ptr [ESP + 0x50],ECX      ; 0043f2bc
    MOV dword ptr [ESP + 0x4c],EBX      ; 0043f2c0
    MOV dword ptr [ESP + 0x58],EAX      ; 0043f2c4
    MOV dword ptr [ESP + 0x54],EDX      ; 0043f2c8
    CMP ESI,0xc                         ; 0043f2cc
    JLE 0x0043f1d4                      ; 0043f2cf
        ;   XREF to: 0043f1d4 (CONDITIONAL_JUMP)  ; LAB_0043f1d4
    CMP dword ptr [ESP + 0x7c],0x0      ; 0043f2d5
    JNZ 0x0043f33a                      ; 0043f2da
        ;   XREF to: 0043f33a (CONDITIONAL_JUMP)  ; LAB_0043f33a
    MOV ESI,dword ptr [0x005f2afc]      ; 0043f2dc | DAT_005f2afc
        ;   Label: LAB_0043f2dc
    PUSH ESI                            ; 0043f2e2
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0043f2e3
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0043f2e8
    ADD ESP,0x60                        ; 0043f2eb
    POP EBP                             ; 0043f2ee
    POP EDI                             ; 0043f2ef
    POP ESI                             ; 0043f2f0
    POP EBX                             ; 0043f2f1
    RET                                 ; 0043f2f2
    MOV ECX,dword ptr [ESP + 0x48]      ; 0043f2f3
        ;   Label: LAB_0043f2f3
    PUSH ECX                            ; 0043f2f7
    PUSH ESI                            ; 0043f2f8
    MOV EBX,dword ptr [0x005f2afc]      ; 0043f2f9 | DAT_005f2afc
    PUSH EBX                            ; 0043f2ff
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 0043f300
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043f305
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043f308
    PUSH EAX                            ; 0043f30c
    PUSH ESI                            ; 0043f30d
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f30e | DAT_005f2afc
    PUSH EDX                            ; 0043f314
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 0043f315
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043f31a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0043f31d
    PUSH ECX                            ; 0043f321
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0043f322
    PUSH EBX                            ; 0043f326
    MOV EAX,[0x005f2afc]                ; 0043f327 | DAT_005f2afc
    PUSH EAX                            ; 0043f32c
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 0043f32d
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043f332
    JMP 0x0043f2a0                      ; 0043f335
        ;   XREF to: 0043f2a0 (UNCONDITIONAL_JUMP)  ; LAB_0043f2a0
    MOV ECX,dword ptr [0x005fb140]      ; 0043f33a | g_CEditorToolsPtr
        ;   Label: LAB_0043f33a
    PUSH ECX                            ; 0043f340
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004803d0 ; 0043f341
        ;   XREF to: 004803d0 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004803d0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0043f346
    FLD float ptr [EBP + 0x14]          ; 0043f349
    PUSH EAX                            ; 0043f34c
    FADD float ptr [EBP + 0x18]         ; 0043f34d
    SUB ESP,0x4                         ; 0043f350
    MOV EBX,dword ptr [0x005fb140]      ; 0043f353 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0043f359
    PUSH EBX                            ; 0043f35c
    CALL shape_edittool.cpp_FUN_00480f00 ; 0043f35d
        ;   XREF to: 00480f00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00480f00(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 0043f362
    JMP 0x0043f2dc                      ; 0043f365
        ;   XREF to: 0043f2dc (UNCONDITIONAL_JUMP)  ; LAB_0043f2dc

