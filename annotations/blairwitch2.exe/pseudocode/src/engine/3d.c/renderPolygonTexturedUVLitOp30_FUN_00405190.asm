; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00405190(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405190
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00405190
    PUSH EBP                            ; 00405191
    MOV EBP,dword ptr [ESP + 0xc]       ; 00405192
    LEA ESI,[EBP + 0x18]                ; 00405196
    LEA EAX,[EBP + 0x8]                 ; 00405199
    PUSH EAX                            ; 0040519c
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040519d
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 004051a2
    TEST EAX,EAX                        ; 004051a5
    JZ 0x00405269                       ; 004051a7
        ;   XREF to: 00405269 (CONDITIONAL_JUMP)  ; LAB_00405269
    CMP dword ptr [0x01c38b40],0x0      ; 004051ad | DAT_01c38b40
    JNZ 0x00405235                      ; 004051b4
        ;   XREF to: 00405235 (CONDITIONAL_JUMP)  ; LAB_00405235
    CMP dword ptr [0x006141c0],0x20     ; 004051ba | DAT_006141c0
    JNZ 0x00405229                      ; 004051c1
        ;   XREF to: 00405229 (CONDITIONAL_JUMP)  ; LAB_00405229
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004051c3 | DAT_01c35e6c
    PUSH EDI                            ; 004051cd
        ;   Label: LAB_004051cd
    PUSH EBX                            ; 004051ce
    MOV EBX,0x1                         ; 004051cf
    PUSH EBP                            ; 004051d4
    XOR EDI,EDI                         ; 004051d5
    MOV dword ptr [0x01c38b54],EBX      ; 004051d7 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 004051dd | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 004051e3
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004051e8
    MOV EAX,ESI                         ; 004051eb
    XOR EBX,EBX                         ; 004051ed
    XOR EDX,EDX                         ; 004051ef
    XOR ECX,ECX                         ; 004051f1
    MOV ESI,dword ptr [EBP + 0x4]       ; 004051f3
        ;   Label: LAB_004051f3
    LEA ESI,[ESI + ESI*0x2]             ; 004051f6
    CMP EDX,ESI                         ; 004051f9
    JGE 0x00405259                      ; 004051fb
        ;   XREF to: 00405259 (CONDITIONAL_JUMP)  ; LAB_00405259
    MOV ESI,dword ptr [EAX]             ; 004051fd
    MOV dword ptr [ECX + 0x70ca98],ESI  ; 004051ff | DAT_0070ca98 | DAT_0070ca9c
    IMUL EDI,ESI,0x30                   ; 00405205
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405208
    MOV dword ptr [EDI + 0x62202c],ESI  ; 0040520b | DAT_0062202c
    IMUL EDI,dword ptr [EAX],0x30       ; 00405211
    ADD EAX,0xc                         ; 00405214
    ADD ECX,0x4                         ; 00405217
    INC EBX                             ; 0040521a
    MOV ESI,dword ptr [EAX + -0x4]      ; 0040521b
    ADD EDX,0x3                         ; 0040521e
    MOV dword ptr [EDI + 0x622030],ESI  ; 00405221 | DAT_00622030
    JMP 0x004051f3                      ; 00405227
        ;   XREF to: 004051f3 (UNCONDITIONAL_JUMP)  ; LAB_004051f3
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405229 | DAT_01c35e6c
        ;   Label: LAB_00405229
    JMP 0x004051cd                      ; 00405233
        ;   XREF to: 004051cd (UNCONDITIONAL_JUMP)  ; LAB_004051cd
    CMP dword ptr [0x006141c0],0x20     ; 00405235 | DAT_006141c0
        ;   Label: LAB_00405235
    JNZ 0x0040524a                      ; 0040523c
        ;   XREF to: 0040524a (CONDITIONAL_JUMP)  ; LAB_0040524a
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040523e | DAT_01c35e6c
    JMP 0x004051cd                      ; 00405248
        ;   XREF to: 004051cd (UNCONDITIONAL_JUMP)  ; LAB_004051cd
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0040524a | DAT_01c35e6c
        ;   Label: LAB_0040524a
    JMP 0x004051cd                      ; 00405254
        ;   XREF to: 004051cd (UNCONDITIONAL_JUMP)  ; LAB_004051cd
    PUSH 0x70ca98                       ; 00405259 | DAT_0070ca98
        ;   Label: LAB_00405259
    PUSH EBX                            ; 0040525e
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040525f
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405264
    POP EBX                             ; 00405267
    POP EDI                             ; 00405268
    MOV EDX,dword ptr [EBP + 0x4]       ; 00405269
        ;   Label: LAB_00405269
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040526c
    SUB EAX,EDX                         ; 00405273
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405275
    LEA EAX,[EBP + 0x18]                ; 0040527c
    ADD EAX,EDX                         ; 0040527f
    POP EBP                             ; 00405281
    POP ESI                             ; 00405282
    RET                                 ; 00405283

