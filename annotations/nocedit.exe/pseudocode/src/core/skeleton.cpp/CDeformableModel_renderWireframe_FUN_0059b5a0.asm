; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(CDeformableModel * this_ptr, int lod_level)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_level
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 at 005a03d0
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b5a0
        ;   Label: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
    PUSH ESI                            ; 0059b5a1
    PUSH EDI                            ; 0059b5a2
    PUSH EBP                            ; 0059b5a3
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059b5a4
    XOR EDI,EDI                         ; 0059b5a8
    XOR ESI,ESI                         ; 0059b5aa
    SHL EBP,0x2                         ; 0059b5ac
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059b5af
        ;   Label: LAB_0059b5af
    ADD EBX,EBP                         ; 0059b5b3
    CMP ESI,dword ptr [EBX + 0x54]      ; 0059b5b5
    JL 0x0059b5d0                       ; 0059b5b8
        ;   XREF to: 0059b5d0 (CONDITIONAL_JUMP)  ; LAB_0059b5d0
    PUSH 0x1                            ; 0059b5ba
    MOV ECX,dword ptr [0x006703ec]      ; 0059b5bc | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0059b5c2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0059b5c3
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0059b5c8
    POP EBP                             ; 0059b5cb
    POP EDI                             ; 0059b5cc
    POP ESI                             ; 0059b5cd
    POP EBX                             ; 0059b5ce
    RET                                 ; 0059b5cf
    MOV EBX,dword ptr [EBX + 0x7c]      ; 0059b5d0
        ;   Label: LAB_0059b5d0
    XOR EAX,EAX                         ; 0059b5d3
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 0059b5d5
    PUSH EAX                            ; 0059b5da
    XOR EAX,EAX                         ; 0059b5db
    MOV AX,word ptr [EDI + EBX*0x1]     ; 0059b5dd
    PUSH EAX                            ; 0059b5e1
    MOV ECX,dword ptr [0x006703ec]      ; 0059b5e2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0059b5e8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0059b5e9
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 0059b5ee
    ADD ESP,0xc                         ; 0059b5f0
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 0059b5f3
    PUSH EAX                            ; 0059b5f8
    XOR EAX,EAX                         ; 0059b5f9
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 0059b5fb
    PUSH EAX                            ; 0059b600
    MOV EAX,[0x006703ec]                ; 0059b601 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0059b606 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0059b607
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 0059b60c
    ADD ESP,0xc                         ; 0059b60e
    MOV AX,word ptr [EDI + EBX*0x1]     ; 0059b611
    PUSH EAX                            ; 0059b615
    XOR EAX,EAX                         ; 0059b616
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 0059b618
    PUSH EAX                            ; 0059b61d
    MOV EDX,dword ptr [0x006703ec]      ; 0059b61e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0059b624 | g_CDemonRendererInstance
    ADD EDI,0x12                        ; 0059b625
    INC ESI                             ; 0059b628
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0059b629
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0059b62e
    JMP 0x0059b5af                      ; 0059b631
        ;   XREF to: 0059b5af (UNCONDITIONAL_JUMP)  ; LAB_0059b5af

