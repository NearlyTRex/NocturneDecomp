; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
; int              Stack[0xc]:4   render_flags
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 at 0046c9c4
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046bff0 at 0046c057
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01ba5c8c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00469e80
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00469e80
    MOV ECX,dword ptr [ESP + 0x8]       ; 00469e81
    MOV EBP,dword ptr [ESP + 0xc]       ; 00469e85
    CMP dword ptr [ESP + 0x10],-0x1     ; 00469e89
    JZ 0x00469ef5                       ; 00469e8e
        ;   XREF to: 00469ef5 (CONDITIONAL_JUMP)  ; LAB_00469ef5
    CMP dword ptr [ECX + 0x1c],0x0      ; 00469e90
        ;   Label: LAB_00469e90
    JNZ 0x00469eff                      ; 00469e94
        ;   XREF to: 00469eff (CONDITIONAL_JUMP)  ; LAB_00469eff
    PUSH EBX                            ; 00469e96
    CMP dword ptr [ECX + 0x4],0x0       ; 00469e97
    JZ 0x00469f10                       ; 00469e9b
        ;   XREF to: 00469f10 (CONDITIONAL_JUMP)  ; LAB_00469f10
    XOR EAX,EAX                         ; 00469e9d
        ;   Label: LAB_00469e9d
    MOV AX,word ptr [EBP]               ; 00469e9f
    MOV [0x01ba5c84],EAX                ; 00469ea3 | DAT_01ba5c84
    XOR EAX,EAX                         ; 00469ea8
    MOV AX,word ptr [EBP + 0x2]         ; 00469eaa
    MOV [0x01ba5c88],EAX                ; 00469eae | DAT_01ba5c88
    XOR EAX,EAX                         ; 00469eb3
    MOV AX,word ptr [EBP + 0x4]         ; 00469eb5
    MOV EBX,dword ptr [ECX + 0x4]       ; 00469eb9
    MOV [0x01ba5c8c],EAX                ; 00469ebc | DAT_01ba5c8c
    TEST EBX,EBX                        ; 00469ec1
    JZ 0x00469f51                       ; 00469ec3
        ;   XREF to: 00469f51 (CONDITIONAL_JUMP)  ; LAB_00469f51
    XOR EBX,EBX                         ; 00469ec9
    MOV EDX,0x46e936                    ; 00469ecb
    MOV dword ptr [0x01c38b54],EBX      ; 00469ed0 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBX      ; 00469ed6 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDX      ; 00469edc | DAT_01c35e6c
    PUSH 0x1ba5c84                      ; 00469ee2 | DAT_01ba5c84
    PUSH 0x3                            ; 00469ee7
    PUSH ECX                            ; 00469ee9
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469eea
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469eef
    POP EBX                             ; 00469ef2
    POP EBP                             ; 00469ef3
    RET                                 ; 00469ef4
    MOV dword ptr [ESP + 0x10],0x2cd    ; 00469ef5
        ;   Label: LAB_00469ef5
    JMP 0x00469e90                      ; 00469efd
        ;   XREF to: 00469e90 (UNCONDITIONAL_JUMP)  ; LAB_00469e90
    MOV EDX,dword ptr [ESP + 0x10]      ; 00469eff
        ;   Label: LAB_00469eff
    PUSH EDX                            ; 00469f03
    PUSH EBP                            ; 00469f04
    PUSH ECX                            ; 00469f05
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720 ; 00469f06
        ;   XREF to: 0046c720 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 00469f0b
    POP EBP                             ; 00469f0e
    RET                                 ; 00469f0f
    CMP dword ptr [ECX + 0x20],0x0      ; 00469f10
        ;   Label: LAB_00469f10
    JNZ 0x00469e9d                      ; 00469f14
        ;   XREF to: 00469e9d (CONDITIONAL_JUMP)  ; LAB_00469e9d
    PUSH EDI                            ; 00469f16
    PUSH ESI                            ; 00469f17
    MOV EAX,EBP                         ; 00469f18
    LEA EDI,[EBP + 0x6]                 ; 00469f1a
    XOR EDX,EDX                         ; 00469f1d
        ;   Label: LAB_00469f1d
    MOV DX,word ptr [EAX]               ; 00469f1f
    IMUL EDX,EDX,0x30                   ; 00469f22
    XOR ESI,ESI                         ; 00469f25
    MOV SI,word ptr [EAX + 0x6]         ; 00469f27
    MOV EBX,dword ptr [ECX]             ; 00469f2b
    SHL ESI,0x8                         ; 00469f2d
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 00469f30
    XOR EBX,EBX                         ; 00469f34
    MOV BX,word ptr [EAX + 0xc]         ; 00469f36
    MOV ESI,dword ptr [ECX]             ; 00469f3a
    SHL EBX,0x8                         ; 00469f3c
    ADD EAX,0x2                         ; 00469f3f
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 00469f42
    CMP EAX,EDI                         ; 00469f46
    JNZ 0x00469f1d                      ; 00469f48
        ;   XREF to: 00469f1d (CONDITIONAL_JUMP)  ; LAB_00469f1d
    POP ESI                             ; 00469f4a
    POP EDI                             ; 00469f4b
    JMP 0x00469e9d                      ; 00469f4c
        ;   XREF to: 00469e9d (UNCONDITIONAL_JUMP)  ; LAB_00469e9d
    CMP dword ptr [0x006141c0],0x20     ; 00469f51 | DAT_006141c0
        ;   Label: LAB_00469f51
    JNZ 0x00469f8a                      ; 00469f58
        ;   XREF to: 00469f8a (CONDITIONAL_JUMP)  ; LAB_00469f8a
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00469f5a | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00469f64
        ;   Label: LAB_00469f64
    MOV [0x01c38b54],EAX                ; 00469f68 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],0x6      ; 00469f6d | DAT_01c38b58
    PUSH 0x1ba5c84                      ; 00469f77 | DAT_01ba5c84
    PUSH 0x3                            ; 00469f7c
    PUSH ECX                            ; 00469f7e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469f7f
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469f84
    POP EBX                             ; 00469f87
    POP EBP                             ; 00469f88
    RET                                 ; 00469f89
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00469f8a | DAT_01c35e6c
        ;   Label: LAB_00469f8a
    JMP 0x00469f64                      ; 00469f94
        ;   XREF to: 00469f64 (UNCONDITIONAL_JUMP)  ; LAB_00469f64

