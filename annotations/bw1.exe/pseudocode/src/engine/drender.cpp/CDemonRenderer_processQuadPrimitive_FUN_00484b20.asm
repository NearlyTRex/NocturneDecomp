; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00484210 at 00484242
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 at 004822c7
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484b20
        ;   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00484b20
    PUSH ESI                            ; 00484b21
    PUSH EDI                            ; 00484b22
    PUSH EBP                            ; 00484b23
    SUB ESP,0x14                        ; 00484b24
    MOV ESI,dword ptr [ESP + 0x28]      ; 00484b27
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00484b2b
    CMP dword ptr [ESI + 0xc],0x0       ; 00484b2f
    JZ 0x00484b4d                       ; 00484b33
        ;   XREF to: 00484b4d (CONDITIONAL_JUMP)  ; LAB_00484b4d
    LEA EAX,[EBX + 0x8]                 ; 00484b35
    PUSH EAX                            ; 00484b38
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00484b39
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00484b3e
    TEST EAX,EAX                        ; 00484b41
    JNZ 0x00484b4d                      ; 00484b43
        ;   XREF to: 00484b4d (CONDITIONAL_JUMP)  ; LAB_00484b4d
    ADD ESP,0x14                        ; 00484b45
        ;   Label: LAB_00484b45
    POP EBP                             ; 00484b48
    POP EDI                             ; 00484b49
    POP ESI                             ; 00484b4a
    POP EBX                             ; 00484b4b
    RET                                 ; 00484b4c
    MOV AX,word ptr [EBX + 0x18]        ; 00484b4d
        ;   Label: LAB_00484b4d
    MOV word ptr [ESP],AX               ; 00484b51
    MOV AX,word ptr [EBX + 0x24]        ; 00484b55
    MOV word ptr [ESP + 0x2],AX         ; 00484b59
    MOV AX,word ptr [EBX + 0x30]        ; 00484b5e
    MOV word ptr [ESP + 0x4],AX         ; 00484b62
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00484b67
    SAR EAX,0x8                         ; 00484b6a
    MOV word ptr [ESP + 0x6],AX         ; 00484b6d
    MOV EAX,dword ptr [EBX + 0x28]      ; 00484b72
    SAR EAX,0x8                         ; 00484b75
    MOV word ptr [ESP + 0x8],AX         ; 00484b78
    MOV EAX,dword ptr [EBX + 0x34]      ; 00484b7d
    SAR EAX,0x8                         ; 00484b80
    MOV word ptr [ESP + 0xa],AX         ; 00484b83
    MOV EAX,dword ptr [EBX + 0x20]      ; 00484b88
    SAR EAX,0x8                         ; 00484b8b
    MOV word ptr [ESP + 0xc],AX         ; 00484b8e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00484b93
    SAR EAX,0x8                         ; 00484b96
    MOV word ptr [ESP + 0xe],AX         ; 00484b99
    MOV EAX,dword ptr [EBX + 0x38]      ; 00484b9e
    MOV ECX,dword ptr [ESP + 0x30]      ; 00484ba1
    SAR EAX,0x8                         ; 00484ba5
    PUSH ECX                            ; 00484ba8
    MOV word ptr [ESP + 0x14],AX        ; 00484ba9
    LEA EAX,[ESP + 0x4]                 ; 00484bae
    PUSH EAX                            ; 00484bb2
    PUSH ESI                            ; 00484bb3
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20 ; 00484bb4
        ;   XREF to: 00484c20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    MOV EDI,dword ptr [EBX + 0x4]       ; 00484bb9
    ADD ESP,0xc                         ; 00484bbc
    CMP EDI,0x3                         ; 00484bbf
    JLE 0x00484b45                      ; 00484bc2
        ;   XREF to: 00484b45 (CONDITIONAL_JUMP)  ; LAB_00484b45
    MOV AX,word ptr [EBX + 0x30]        ; 00484bc4
    MOV word ptr [ESP + 0x2],AX         ; 00484bc8
    MOV AX,word ptr [EBX + 0x3c]        ; 00484bcd
    MOV word ptr [ESP + 0x4],AX         ; 00484bd1
    MOV EAX,dword ptr [EBX + 0x34]      ; 00484bd6
    SAR EAX,0x8                         ; 00484bd9
    MOV word ptr [ESP + 0x8],AX         ; 00484bdc
    MOV EAX,dword ptr [EBX + 0x40]      ; 00484be1
    SAR EAX,0x8                         ; 00484be4
    MOV word ptr [ESP + 0xa],AX         ; 00484be7
    MOV EAX,dword ptr [EBX + 0x38]      ; 00484bec
    SAR EAX,0x8                         ; 00484bef
    MOV word ptr [ESP + 0xe],AX         ; 00484bf2
    MOV EAX,dword ptr [EBX + 0x44]      ; 00484bf7
    MOV EBP,dword ptr [ESP + 0x30]      ; 00484bfa
    SAR EAX,0x8                         ; 00484bfe
    PUSH EBP                            ; 00484c01
    MOV word ptr [ESP + 0x14],AX        ; 00484c02
    LEA EAX,[ESP + 0x4]                 ; 00484c07
    PUSH EAX                            ; 00484c0b
    PUSH ESI                            ; 00484c0c
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20 ; 00484c0d
        ;   XREF to: 00484c20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 00484c12
    ADD ESP,0x14                        ; 00484c15
    POP EBP                             ; 00484c18
    POP EDI                             ; 00484c19
    POP ESI                             ; 00484c1a
    POP EBX                             ; 00484c1b
    RET                                 ; 00484c1c

