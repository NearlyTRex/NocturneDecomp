; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[4]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004f5370 at 004f5399
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0 at 004f546c
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0053acf0 at 0053ad56
;   core_setdir.cpp_FUN_0053f940 at 005409d3
;
; Referenced Globals:
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

    PUSH EBX                            ; 0046b240
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
    PUSH ESI                            ; 0046b241
    PUSH EBP                            ; 0046b242
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046b243
    MOV ESI,dword ptr [ESP + 0x14]      ; 0046b247
    CMP dword ptr [EBX + 0xc],0x0       ; 0046b24b
    JNZ 0x0046b285                      ; 0046b24f
        ;   XREF to: 0046b285 (CONDITIONAL_JUMP)  ; LAB_0046b285
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b251
        ;   Label: LAB_0046b251
    JZ 0x0046b297                       ; 0046b255
        ;   XREF to: 0046b297 (CONDITIONAL_JUMP)  ; LAB_0046b297
    XOR ECX,ECX                         ; 0046b257
    MOV EDX,0x46f9a6                    ; 0046b259
    MOV dword ptr [0x01c6e2b4],ECX      ; 0046b25e | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b264 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDX      ; 0046b26a | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046b270
        ;   Label: LAB_0046b270
    PUSH EAX                            ; 0046b273
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046b274
    PUSH EBP                            ; 0046b277
    PUSH EBX                            ; 0046b278
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b279
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046b27e
    POP EBP                             ; 0046b281
        ;   Label: LAB_0046b281
    POP ESI                             ; 0046b282
    POP EBX                             ; 0046b283
    RET                                 ; 0046b284
    LEA EAX,[ESI + 0x8]                 ; 0046b285
        ;   Label: LAB_0046b285
    PUSH EAX                            ; 0046b288
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b289
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046b28e
    TEST EAX,EAX                        ; 0046b291
    JZ 0x0046b281                       ; 0046b293
        ;   XREF to: 0046b281 (CONDITIONAL_JUMP)  ; LAB_0046b281
    JMP 0x0046b251                      ; 0046b295
        ;   XREF to: 0046b251 (UNCONDITIONAL_JUMP)  ; LAB_0046b251
    PUSH EDI                            ; 0046b297
        ;   Label: LAB_0046b297
    MOV EBP,0xc0                        ; 0046b298
    MOV EAX,0x6                         ; 0046b29d
    MOV EDI,0x46fcc8                    ; 0046b2a2
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046b2a7 | DAT_01c6e2b4
    MOV [0x01c6e2b8],EAX                ; 0046b2ad | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDI      ; 0046b2b2 | DAT_01c6b5cc
    POP EDI                             ; 0046b2b8
    JMP 0x0046b270                      ; 0046b2b9
        ;   XREF to: 0046b270 (UNCONDITIONAL_JUMP)  ; LAB_0046b270

