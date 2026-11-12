; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046c16e(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0046c16e
        ;   Label: engine_drender.cpp_FUN_0046c16e
    PUSH EBX                            ; 0046c170
    PUSH ESI                            ; 0046c171
    PUSH EDI                            ; 0046c172
    PUSH EBP                            ; 0046c173
    SUB ESP,0x4                         ; 0046c174
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046c177
    CMP dword ptr [EBX + 0xc],0x0       ; 0046c17b
    JNZ 0x0046c22e                      ; 0046c17f
        ;   XREF to: 0046c22e (CONDITIONAL_JUMP)  ; LAB_0046c22e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c185
        ;   Label: LAB_0046c185
    MOV ECX,0xffffffff                  ; 0046c189
    XOR EDX,EDX                         ; 0046c18e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046c190
    MOV dword ptr [ESP],ECX             ; 0046c193
    TEST ESI,ESI                        ; 0046c196
    JLE 0x0046c1d0                      ; 0046c198
        ;   XREF to: 0046c1d0 (CONDITIONAL_JUMP)  ; LAB_0046c1d0
    XOR ECX,ECX                         ; 0046c19a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046c19c
        ;   Label: LAB_0046c19c
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046c19f
    IMUL ESI,ESI,0x30                   ; 0046c1a5
    MOV EDI,dword ptr [EBX]             ; 0046c1a8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046c1aa
    MOV EDI,dword ptr [ESP]             ; 0046c1ae
    ADD ECX,0x4                         ; 0046c1b1
    AND EDI,ESI                         ; 0046c1b4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c1b6
    ADD EAX,0xc                         ; 0046c1ba
    INC EDX                             ; 0046c1bd
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c1be
    MOV dword ptr [ESP],EDI             ; 0046c1c1
    CMP EDX,EBP                         ; 0046c1c4
    JL 0x0046c19c                       ; 0046c1c6
        ;   XREF to: 0046c19c (CONDITIONAL_JUMP)  ; LAB_0046c19c
    LEA EAX,[EAX]                       ; 0046c1c8
    MOV EDX,EDX                         ; 0046c1ce
    TEST byte ptr [ESP + 0x3],0x80      ; 0046c1d0
        ;   Label: LAB_0046c1d0
    JZ 0x0046c1dd                       ; 0046c1d5
        ;   XREF to: 0046c1dd (CONDITIONAL_JUMP)  ; LAB_0046c1dd
    TEST byte ptr [ESP],0x1f            ; 0046c1d7
    JNZ 0x0046c226                      ; 0046c1db
        ;   XREF to: 0046c226 (CONDITIONAL_JUMP)  ; LAB_0046c226
    CMP dword ptr [EBX + 0x4],0x0       ; 0046c1dd
        ;   Label: LAB_0046c1dd
    JZ 0x0046c247                       ; 0046c1e1
        ;   XREF to: 0046c247 (CONDITIONAL_JUMP)  ; LAB_0046c247
    MOV ESI,0x1                         ; 0046c1e3
    MOV ECX,0x46fa57                    ; 0046c1e8
    XOR EDI,EDI                         ; 0046c1ed
    MOV dword ptr [0x01c6e2b4],ESI      ; 0046c1ef | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c1f5 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046c1fb | DAT_01c6b5cc
    LEA EAX,[EAX]                       ; 0046c201
    LEA EDX,[EDX]                       ; 0046c207
    LEA EAX,[EAX]                       ; 0046c20d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c210
        ;   Label: LAB_0046c210
    PUSH 0x1bdd818                      ; 0046c214
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c219
    PUSH EDX                            ; 0046c21c
    PUSH EBX                            ; 0046c21d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c21e
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c223
    ADD ESP,0x4                         ; 0046c226
        ;   Label: LAB_0046c226
    POP EBP                             ; 0046c229
    POP EDI                             ; 0046c22a
    POP ESI                             ; 0046c22b
    POP EBX                             ; 0046c22c
    RET                                 ; 0046c22d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c22e
        ;   Label: LAB_0046c22e
    ADD EAX,0x8                         ; 0046c232
    PUSH EAX                            ; 0046c235
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c236
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c23b
    TEST EAX,EAX                        ; 0046c23e
    JZ 0x0046c226                       ; 0046c240
        ;   XREF to: 0046c226 (CONDITIONAL_JUMP)  ; LAB_0046c226
    JMP 0x0046c185                      ; 0046c242
        ;   XREF to: 0046c185 (UNCONDITIONAL_JUMP)  ; LAB_0046c185
    CMP dword ptr [0x005fba20],0x20     ; 0046c247 | DAT_005fba20
        ;   Label: LAB_0046c247
    JNZ 0x0046c2b9                      ; 0046c24e
        ;   XREF to: 0046c2b9 (CONDITIONAL_JUMP)  ; LAB_0046c2b9
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c250 | DAT_01c6b5cc
    MOV EBP,0x6                         ; 0046c25a
        ;   Label: LAB_0046c25a
    MOV EDI,0x3e7                       ; 0046c25f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046c264
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046c267 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046c26d | DAT_01c6e2b4
    TEST EAX,EAX                        ; 0046c273
    JNZ 0x0046c210                      ; 0046c275
        ;   XREF to: 0046c210 (CONDITIONAL_JUMP)  ; LAB_0046c210
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046c277
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046c27b
    XOR ECX,ECX                         ; 0046c27e
    TEST EDX,EDX                        ; 0046c280
    JLE 0x0046c210                      ; 0046c282
        ;   XREF to: 0046c210 (CONDITIONAL_JUMP)  ; LAB_0046c210
    XOR EDX,EDX                         ; 0046c284
    MOV ESI,dword ptr [EDX + 0x1bdd818] ; 0046c286
        ;   Label: LAB_0046c286
    IMUL ESI,ESI,0x30                   ; 0046c28c
    MOV EDI,dword ptr [EBX]             ; 0046c28f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046c291
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046c294
    MOV EDI,dword ptr [EBX]             ; 0046c298
    ADD EDI,ESI                         ; 0046c29a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046c29c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046c29f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046c2a2
    ADD EAX,0xc                         ; 0046c2a6
    INC ECX                             ; 0046c2a9
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046c2aa
    ADD EDX,0x4                         ; 0046c2ad
    CMP ECX,EBP                         ; 0046c2b0
    JL 0x0046c286                       ; 0046c2b2
        ;   XREF to: 0046c286 (CONDITIONAL_JUMP)  ; LAB_0046c286
    JMP 0x0046c210                      ; 0046c2b4
        ;   XREF to: 0046c210 (UNCONDITIONAL_JUMP)  ; LAB_0046c210
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c2b9 | DAT_01c6b5cc
        ;   Label: LAB_0046c2b9
    JMP 0x0046c25a                      ; 0046c2c3
        ;   XREF to: 0046c25a (UNCONDITIONAL_JUMP)  ; LAB_0046c25a

