; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba28
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004060e0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0
    PUSH EBP                            ; 004060e1
    SUB ESP,0x8                         ; 004060e2
    MOV EBP,dword ptr [ESP + 0x14]      ; 004060e5
    LEA EBX,[EBP + 0x18]                ; 004060e9
    LEA EAX,[EBP + 0x8]                 ; 004060ec
    PUSH EAX                            ; 004060ef
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004060f0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004060f5
    TEST EAX,EAX                        ; 004060f8
    JZ 0x00406278                       ; 004060fa
        ;   XREF to: 00406278 (CONDITIONAL_JUMP)  ; LAB_00406278
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406100 | DAT_01c6e2a0
    JNZ 0x004061fb                      ; 00406107
        ;   XREF to: 004061fb (CONDITIONAL_JUMP)  ; LAB_004061fb
    CMP dword ptr [0x005fba20],0x20     ; 0040610d | DAT_005fba20
    JNZ 0x004061ec                      ; 00406114
        ;   XREF to: 004061ec (CONDITIONAL_JUMP)  ; LAB_004061ec
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040611a | DAT_01c6b5cc
    PUSH EDI                            ; 00406124
        ;   Label: LAB_00406124
    PUSH ESI                            ; 00406125
    MOV ESI,0xc3                        ; 00406126
    PUSH 0xffff                         ; 0040612b
    MOV EDI,0x1                         ; 00406130
    MOV dword ptr [0x01c6e2b4],ESI      ; 00406135 | DAT_01c6e2b4
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0040613b
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 00406140
    MOV dword ptr [0x01c6e2b8],EDI      ; 00406143 | DAT_01c6e2b8
    XOR EAX,EAX                         ; 00406149
    XOR ESI,ESI                         ; 0040614b
    MOV dword ptr [ESP + 0xc],EAX       ; 0040614d
    XOR EDI,EDI                         ; 00406151
    MOV EAX,dword ptr [EBP + 0x4]       ; 00406153
        ;   Label: LAB_00406153
    LEA EAX,[EAX + EAX*0x2]             ; 00406156
    CMP EDI,EAX                         ; 00406159
    JGE 0x00406264                      ; 0040615b
        ;   XREF to: 00406264 (CONDITIONAL_JUMP)  ; LAB_00406264
    MOV EAX,dword ptr [EBX]             ; 00406161
    MOV dword ptr [ESI + 0x730418],EAX  ; 00406163 | DAT_00730418 | DAT_0073041c
    MOV ECX,dword ptr [0x005fba28]      ; 00406169 | DAT_005fba28
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040616f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00406172
    CMP ECX,0x40                        ; 00406175
    JG 0x00406229                       ; 00406178
        ;   XREF to: 00406229 (CONDITIONAL_JUMP)  ; LAB_00406229
    CMP EDX,0x40000                     ; 0040617e
    JGE 0x0040618b                      ; 00406184
        ;   XREF to: 0040618b (CONDITIONAL_JUMP)  ; LAB_0040618b
    MOV EDX,0x40000                     ; 00406186
    CMP EAX,0x40000                     ; 0040618b
        ;   Label: LAB_0040618b
    JGE 0x00406197                      ; 00406190
        ;   XREF to: 00406197 (CONDITIONAL_JUMP)  ; LAB_00406197
    MOV EAX,0x40000                     ; 00406192
    CMP EDX,0xfbffff                    ; 00406197
        ;   Label: LAB_00406197
    JLE 0x004061a4                      ; 0040619d
        ;   XREF to: 004061a4 (CONDITIONAL_JUMP)  ; LAB_004061a4
    MOV EDX,0xfbffff                    ; 0040619f
    CMP EAX,0xfbffff                    ; 004061a4
        ;   Label: LAB_004061a4
    JG 0x00406222                       ; 004061a9
        ;   XREF to: 00406222 (CONDITIONAL_JUMP)  ; LAB_00406222
    MOV ECX,dword ptr [EBX]             ; 004061ab
        ;   Label: LAB_004061ab
    MOV dword ptr [ESP + 0x8],ECX       ; 004061ad
    SHL ECX,0x2                         ; 004061b1
    SUB ECX,dword ptr [ESP + 0x8]       ; 004061b4
    SHL ECX,0x4                         ; 004061b8
    MOV dword ptr [ECX + 0x60b02c],EDX  ; 004061bb | DAT_0060b02c
    MOV ECX,dword ptr [EBX]             ; 004061c1
    LEA EDX,[ECX*0x4 + 0x0]             ; 004061c3
    SUB EDX,ECX                         ; 004061ca
    SHL EDX,0x4                         ; 004061cc
    ADD ESI,0x4                         ; 004061cf
    MOV dword ptr [EDX + 0x60b030],EAX  ; 004061d2 | DAT_0060b030
    MOV EAX,dword ptr [ESP + 0xc]       ; 004061d8
    ADD EBX,0xc                         ; 004061dc
    INC EAX                             ; 004061df
    ADD EDI,0x3                         ; 004061e0
    MOV dword ptr [ESP + 0xc],EAX       ; 004061e3
    JMP 0x00406153                      ; 004061e7
        ;   XREF to: 00406153 (UNCONDITIONAL_JUMP)  ; LAB_00406153
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004061ec | DAT_01c6b5cc
        ;   Label: LAB_004061ec
    JMP 0x00406124                      ; 004061f6
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    CMP dword ptr [0x005fba20],0x20     ; 004061fb | DAT_005fba20
        ;   Label: LAB_004061fb
    JNZ 0x00406213                      ; 00406202
        ;   XREF to: 00406213 (CONDITIONAL_JUMP)  ; LAB_00406213
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406204 | DAT_01c6b5cc
    JMP 0x00406124                      ; 0040620e
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406213 | DAT_01c6b5cc
        ;   Label: LAB_00406213
    JMP 0x00406124                      ; 0040621d
        ;   XREF to: 00406124 (UNCONDITIONAL_JUMP)  ; LAB_00406124
    MOV EAX,0xfbffff                    ; 00406222
        ;   Label: LAB_00406222
    JMP 0x004061ab                      ; 00406227
        ;   XREF to: 004061ab (UNCONDITIONAL_JUMP)  ; LAB_004061ab
    CMP EDX,0x10000                     ; 00406229
        ;   Label: LAB_00406229
    JGE 0x00406236                      ; 0040622f
        ;   XREF to: 00406236 (CONDITIONAL_JUMP)  ; LAB_00406236
    MOV EDX,0x10000                     ; 00406231
    CMP EAX,0x10000                     ; 00406236
        ;   Label: LAB_00406236
    JGE 0x00406242                      ; 0040623b
        ;   XREF to: 00406242 (CONDITIONAL_JUMP)  ; LAB_00406242
    MOV EAX,0x10000                     ; 0040623d
    CMP EDX,0xfeffff                    ; 00406242
        ;   Label: LAB_00406242
    JLE 0x0040624f                      ; 00406248
        ;   XREF to: 0040624f (CONDITIONAL_JUMP)  ; LAB_0040624f
    MOV EDX,0xfeffff                    ; 0040624a
    CMP EAX,0xfeffff                    ; 0040624f
        ;   Label: LAB_0040624f
    JLE 0x004061ab                      ; 00406254
        ;   XREF to: 004061ab (CONDITIONAL_JUMP)  ; LAB_004061ab
    MOV EAX,0xfeffff                    ; 0040625a
    JMP 0x004061ab                      ; 0040625f
        ;   XREF to: 004061ab (UNCONDITIONAL_JUMP)  ; LAB_004061ab
    PUSH 0x730418                       ; 00406264 | DAT_00730418
        ;   Label: LAB_00406264
    MOV EDX,dword ptr [ESP + 0x10]      ; 00406269
    PUSH EDX                            ; 0040626d
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040626e
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406273
    POP ESI                             ; 00406276
    POP EDI                             ; 00406277
    MOV EDX,dword ptr [EBP + 0x4]       ; 00406278
        ;   Label: LAB_00406278
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040627b
    SUB EAX,EDX                         ; 00406282
    SHL EAX,0x2                         ; 00406284
    LEA EDX,[EBP + 0x18]                ; 00406287
    ADD EAX,EDX                         ; 0040628a
    ADD ESP,0x8                         ; 0040628c
    POP EBP                             ; 0040628f
    POP EBX                             ; 00406290
    RET                                 ; 00406291

