; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   quad_primitive
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined2       Stack[-0x24]:2  local_24
; undefined2       Stack[-0x22]:2  local_22
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1e]:2  local_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined2       Stack[-0x1a]:2  local_1a
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_0046d8f0 at 0046d922
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 at 0046b9a7
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e200
        ;   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200
    PUSH ESI                            ; 0046e201
    PUSH EDI                            ; 0046e202
    PUSH EBP                            ; 0046e203
    SUB ESP,0x14                        ; 0046e204
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046e207
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046e20b
    CMP dword ptr [ESI + 0xc],0x0       ; 0046e20f
    JZ 0x0046e22d                       ; 0046e213
        ;   XREF to: 0046e22d (CONDITIONAL_JUMP)  ; LAB_0046e22d
    LEA EAX,[EBX + 0x8]                 ; 0046e215
    PUSH EAX                            ; 0046e218
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046e219
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046e21e
    TEST EAX,EAX                        ; 0046e221
    JNZ 0x0046e22d                      ; 0046e223
        ;   XREF to: 0046e22d (CONDITIONAL_JUMP)  ; LAB_0046e22d
    ADD ESP,0x14                        ; 0046e225
        ;   Label: LAB_0046e225
    POP EBP                             ; 0046e228
    POP EDI                             ; 0046e229
    POP ESI                             ; 0046e22a
    POP EBX                             ; 0046e22b
    RET                                 ; 0046e22c
    MOV AX,word ptr [EBX + 0x18]        ; 0046e22d
        ;   Label: LAB_0046e22d
    MOV word ptr [ESP],AX               ; 0046e231
    MOV AX,word ptr [EBX + 0x24]        ; 0046e235
    MOV word ptr [ESP + 0x2],AX         ; 0046e239
    MOV AX,word ptr [EBX + 0x30]        ; 0046e23e
    MOV word ptr [ESP + 0x4],AX         ; 0046e242
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0046e247
    SAR EAX,0x8                         ; 0046e24a
    MOV word ptr [ESP + 0x6],AX         ; 0046e24d
    MOV EAX,dword ptr [EBX + 0x28]      ; 0046e252
    SAR EAX,0x8                         ; 0046e255
    MOV word ptr [ESP + 0x8],AX         ; 0046e258
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046e25d
    SAR EAX,0x8                         ; 0046e260
    MOV word ptr [ESP + 0xa],AX         ; 0046e263
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046e268
    SAR EAX,0x8                         ; 0046e26b
    MOV word ptr [ESP + 0xc],AX         ; 0046e26e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0046e273
    SAR EAX,0x8                         ; 0046e276
    MOV word ptr [ESP + 0xe],AX         ; 0046e279
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046e27e
    MOV ECX,dword ptr [ESP + 0x30]      ; 0046e281
    SAR EAX,0x8                         ; 0046e285
    PUSH ECX                            ; 0046e288
    MOV word ptr [ESP + 0x14],AX        ; 0046e289
    LEA EAX,[ESP + 0x4]                 ; 0046e28e
    PUSH EAX                            ; 0046e292
    PUSH ESI                            ; 0046e293
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300 ; 0046e294
        ;   XREF to: 0046e300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    MOV EDI,dword ptr [EBX + 0x4]       ; 0046e299
    ADD ESP,0xc                         ; 0046e29c
    CMP EDI,0x3                         ; 0046e29f
    JLE 0x0046e225                      ; 0046e2a2
        ;   XREF to: 0046e225 (CONDITIONAL_JUMP)  ; LAB_0046e225
    MOV AX,word ptr [EBX + 0x30]        ; 0046e2a4
    MOV word ptr [ESP + 0x2],AX         ; 0046e2a8
    MOV AX,word ptr [EBX + 0x3c]        ; 0046e2ad
    MOV word ptr [ESP + 0x4],AX         ; 0046e2b1
    MOV EAX,dword ptr [EBX + 0x34]      ; 0046e2b6
    SAR EAX,0x8                         ; 0046e2b9
    MOV word ptr [ESP + 0x8],AX         ; 0046e2bc
    MOV EAX,dword ptr [EBX + 0x40]      ; 0046e2c1
    SAR EAX,0x8                         ; 0046e2c4
    MOV word ptr [ESP + 0xa],AX         ; 0046e2c7
    MOV EAX,dword ptr [EBX + 0x38]      ; 0046e2cc
    SAR EAX,0x8                         ; 0046e2cf
    MOV word ptr [ESP + 0xe],AX         ; 0046e2d2
    MOV EAX,dword ptr [EBX + 0x44]      ; 0046e2d7
    MOV EBP,dword ptr [ESP + 0x30]      ; 0046e2da
    SAR EAX,0x8                         ; 0046e2de
    PUSH EBP                            ; 0046e2e1
    MOV word ptr [ESP + 0x14],AX        ; 0046e2e2
    LEA EAX,[ESP + 0x4]                 ; 0046e2e7
    PUSH EAX                            ; 0046e2eb
    PUSH ESI                            ; 0046e2ec
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300 ; 0046e2ed
        ;   XREF to: 0046e300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0046e2f2
    ADD ESP,0x14                        ; 0046e2f5
    POP EBP                             ; 0046e2f8
    POP EDI                             ; 0046e2f9
    POP ESI                             ; 0046e2fa
    POP EBX                             ; 0046e2fb
    RET                                 ; 0046e2fc

