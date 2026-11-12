; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_004051a0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e6140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004051a0
        ;   Label: engine_3d.c_renderPolygonTexturedUVLit_FUN_004051a0
    PUSH ESI                            ; 004051a1
    PUSH EDI                            ; 004051a2
    PUSH EBP                            ; 004051a3
    SUB ESP,0x18                        ; 004051a4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004051a7
    MOV EAX,dword ptr [EBX + 0x8]       ; 004051ab
    MOV dword ptr [ESP],EAX             ; 004051ae
    MOV EAX,dword ptr [EBX + 0xc]       ; 004051b1
    MOV dword ptr [ESP + 0x4],EAX       ; 004051b4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004051b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004051bb
    MOV EAX,ESP                         ; 004051bf
    PUSH EAX                            ; 004051c1
    LEA ESI,[ESP + 0x10]                ; 004051c2
    LEA EDI,[ESP + 0x4]                 ; 004051c6
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004e6140 ; 004051ca
        ;   XREF to: 004e6140 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFixed_FUN_004e6140()
    LEA ESI,[ESP + 0x10]                ; 004051cf
    ADD ESP,0x4                         ; 004051d3
    MOVSD ES:EDI,ESI                    ; 004051d6
    MOVSD ES:EDI,ESI                    ; 004051d7
    MOVSD ES:EDI,ESI                    ; 004051d8
    LEA ESI,[EBX + 0x18]                ; 004051d9
    LEA EAX,[EBX + 0x8]                 ; 004051dc
    PUSH EAX                            ; 004051df
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004051e0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004051e5
    TEST EAX,EAX                        ; 004051e8
    JZ 0x00405231                       ; 004051ea
        ;   XREF to: 00405231 (CONDITIONAL_JUMP)  ; LAB_00405231
    CMP dword ptr [0x01c6e2a0],0x0      ; 004051ec | DAT_01c6e2a0
    JNZ 0x00405250                      ; 004051f3
        ;   XREF to: 00405250 (CONDITIONAL_JUMP)  ; LAB_00405250
    CMP dword ptr [0x005fba20],0x20     ; 004051f5 | DAT_005fba20
    JNZ 0x00405244                      ; 004051fc
        ;   XREF to: 00405244 (CONDITIONAL_JUMP)  ; LAB_00405244
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004051fe | DAT_01c6b5cc
    MOV EDI,0x1                         ; 00405208
        ;   Label: LAB_00405208
    PUSH EBX                            ; 0040520d
    XOR EBP,EBP                         ; 0040520e
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405210 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405216 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 0040521c
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_004039d0(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405221
    PUSH ESI                            ; 00405224
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405225
    PUSH EAX                            ; 00405228
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405229
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040522e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405231
        ;   Label: LAB_00405231
    LEA EAX,[EBX + 0x18]                ; 00405234
    SHL ESI,0x2                         ; 00405237
    ADD EAX,ESI                         ; 0040523a
    ADD ESP,0x18                        ; 0040523c
    POP EBP                             ; 0040523f
    POP EDI                             ; 00405240
    POP ESI                             ; 00405241
    POP EBX                             ; 00405242
    RET                                 ; 00405243
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405244 | DAT_01c6b5cc
        ;   Label: LAB_00405244
    JMP 0x00405208                      ; 0040524e
        ;   XREF to: 00405208 (UNCONDITIONAL_JUMP)  ; LAB_00405208
    CMP dword ptr [0x005fba20],0x20     ; 00405250 | DAT_005fba20
        ;   Label: LAB_00405250
    JNZ 0x00405265                      ; 00405257
        ;   XREF to: 00405265 (CONDITIONAL_JUMP)  ; LAB_00405265
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405259 | DAT_01c6b5cc
    JMP 0x00405208                      ; 00405263
        ;   XREF to: 00405208 (UNCONDITIONAL_JUMP)  ; LAB_00405208
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405265 | DAT_01c6b5cc
        ;   Label: LAB_00405265
    JMP 0x00405208                      ; 0040526f
        ;   XREF to: 00405208 (UNCONDITIONAL_JUMP)  ; LAB_00405208

