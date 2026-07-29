; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags)
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
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440 at 00461472
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 at 0045f517
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461ad0
        ;   Label: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0
    PUSH ESI                            ; 00461ad1
    PUSH EDI                            ; 00461ad2
    PUSH EBP                            ; 00461ad3
    SUB ESP,0x14                        ; 00461ad4
    MOV ESI,dword ptr [ESP + 0x28]      ; 00461ad7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00461adb
    CMP dword ptr [ESI + 0xc],0x0       ; 00461adf
    JZ 0x00461afd                       ; 00461ae3
        ;   XREF to: 00461afd (CONDITIONAL_JUMP)  ; LAB_00461afd
    LEA EAX,[EBX + 0x8]                 ; 00461ae5
    PUSH EAX                            ; 00461ae8
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00461ae9
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00461aee
    TEST EAX,EAX                        ; 00461af1
    JNZ 0x00461afd                      ; 00461af3
        ;   XREF to: 00461afd (CONDITIONAL_JUMP)  ; LAB_00461afd
    ADD ESP,0x14                        ; 00461af5
        ;   Label: LAB_00461af5
    POP EBP                             ; 00461af8
    POP EDI                             ; 00461af9
    POP ESI                             ; 00461afa
    POP EBX                             ; 00461afb
    RET                                 ; 00461afc
    MOV AX,word ptr [EBX + 0x18]        ; 00461afd
        ;   Label: LAB_00461afd
    MOV word ptr [ESP],AX               ; 00461b01
    MOV AX,word ptr [EBX + 0x24]        ; 00461b05
    MOV word ptr [ESP + 0x2],AX         ; 00461b09
    MOV AX,word ptr [EBX + 0x30]        ; 00461b0e
    MOV word ptr [ESP + 0x4],AX         ; 00461b12
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00461b17
    SAR EAX,0x8                         ; 00461b1a
    MOV word ptr [ESP + 0x6],AX         ; 00461b1d
    MOV EAX,dword ptr [EBX + 0x28]      ; 00461b22
    SAR EAX,0x8                         ; 00461b25
    MOV word ptr [ESP + 0x8],AX         ; 00461b28
    MOV EAX,dword ptr [EBX + 0x34]      ; 00461b2d
    SAR EAX,0x8                         ; 00461b30
    MOV word ptr [ESP + 0xa],AX         ; 00461b33
    MOV EAX,dword ptr [EBX + 0x20]      ; 00461b38
    SAR EAX,0x8                         ; 00461b3b
    MOV word ptr [ESP + 0xc],AX         ; 00461b3e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00461b43
    SAR EAX,0x8                         ; 00461b46
    MOV word ptr [ESP + 0xe],AX         ; 00461b49
    MOV EAX,dword ptr [EBX + 0x38]      ; 00461b4e
    MOV ECX,dword ptr [ESP + 0x30]      ; 00461b51
    SAR EAX,0x8                         ; 00461b55
    PUSH ECX                            ; 00461b58
    MOV word ptr [ESP + 0x14],AX        ; 00461b59
    LEA EAX,[ESP + 0x4]                 ; 00461b5e
    PUSH EAX                            ; 00461b62
    PUSH ESI                            ; 00461b63
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 ; 00461b64
        ;   XREF to: 00461bd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    MOV EDI,dword ptr [EBX + 0x4]       ; 00461b69
    ADD ESP,0xc                         ; 00461b6c
    CMP EDI,0x3                         ; 00461b6f
    JLE 0x00461af5                      ; 00461b72
        ;   XREF to: 00461af5 (CONDITIONAL_JUMP)  ; LAB_00461af5
    MOV AX,word ptr [EBX + 0x30]        ; 00461b74
    MOV word ptr [ESP + 0x2],AX         ; 00461b78
    MOV AX,word ptr [EBX + 0x3c]        ; 00461b7d
    MOV word ptr [ESP + 0x4],AX         ; 00461b81
    MOV EAX,dword ptr [EBX + 0x34]      ; 00461b86
    SAR EAX,0x8                         ; 00461b89
    MOV word ptr [ESP + 0x8],AX         ; 00461b8c
    MOV EAX,dword ptr [EBX + 0x40]      ; 00461b91
    SAR EAX,0x8                         ; 00461b94
    MOV word ptr [ESP + 0xa],AX         ; 00461b97
    MOV EAX,dword ptr [EBX + 0x38]      ; 00461b9c
    SAR EAX,0x8                         ; 00461b9f
    MOV word ptr [ESP + 0xe],AX         ; 00461ba2
    MOV EAX,dword ptr [EBX + 0x44]      ; 00461ba7
    MOV EBP,dword ptr [ESP + 0x30]      ; 00461baa
    SAR EAX,0x8                         ; 00461bae
    PUSH EBP                            ; 00461bb1
    MOV word ptr [ESP + 0x14],AX        ; 00461bb2
    LEA EAX,[ESP + 0x4]                 ; 00461bb7
    PUSH EAX                            ; 00461bbb
    PUSH ESI                            ; 00461bbc
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0 ; 00461bbd
        ;   XREF to: 00461bd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 00461bc2
    ADD ESP,0x14                        ; 00461bc5
    POP EBP                             ; 00461bc8
    POP EDI                             ; 00461bc9
    POP ESI                             ; 00461bca
    POP EBX                             ; 00461bcb
    RET                                 ; 00461bcc

