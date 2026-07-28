; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(CDeformableModel *this_ptr,int lod_level)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_level
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30 at 0051dc50
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518ec0
        ;   Label: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0
    PUSH ESI                            ; 00518ec1
    PUSH EDI                            ; 00518ec2
    PUSH EBP                            ; 00518ec3
    MOV EBP,dword ptr [ESP + 0x18]      ; 00518ec4
    XOR EDI,EDI                         ; 00518ec8
    XOR ESI,ESI                         ; 00518eca
    SHL EBP,0x2                         ; 00518ecc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00518ecf
        ;   Label: LAB_00518ecf
    ADD EBX,EBP                         ; 00518ed3
    CMP ESI,dword ptr [EBX + 0x54]      ; 00518ed5
    JL 0x00518ef0                       ; 00518ed8
        ;   XREF to: 00518ef0 (CONDITIONAL_JUMP)  ; LAB_00518ef0
    PUSH 0x1                            ; 00518eda
    MOV ECX,dword ptr [0x005ae704]      ; 00518edc | DAT_005ae704
    PUSH ECX                            ; 00518ee2
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00518ee3
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00518ee8
    POP EBP                             ; 00518eeb
    POP EDI                             ; 00518eec
    POP ESI                             ; 00518eed
    POP EBX                             ; 00518eee
    RET                                 ; 00518eef
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00518ef0
        ;   Label: LAB_00518ef0
    XOR EAX,EAX                         ; 00518ef3
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00518ef5
    PUSH EAX                            ; 00518efa
    XOR EAX,EAX                         ; 00518efb
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00518efd
    PUSH EAX                            ; 00518f01
    MOV ECX,dword ptr [0x005ae704]      ; 00518f02 | DAT_005ae704
    PUSH ECX                            ; 00518f08
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00518f09
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 00518f0e
    ADD ESP,0xc                         ; 00518f10
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00518f13
    PUSH EAX                            ; 00518f18
    XOR EAX,EAX                         ; 00518f19
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00518f1b
    PUSH EAX                            ; 00518f20
    MOV EAX,[0x005ae704]                ; 00518f21 | DAT_005ae704
    PUSH EAX                            ; 00518f26
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00518f27
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 00518f2c
    ADD ESP,0xc                         ; 00518f2e
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00518f31
    PUSH EAX                            ; 00518f35
    XOR EAX,EAX                         ; 00518f36
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00518f38
    PUSH EAX                            ; 00518f3d
    MOV EDX,dword ptr [0x005ae704]      ; 00518f3e | DAT_005ae704
    PUSH EDX                            ; 00518f44
    ADD EDI,0x12                        ; 00518f45
    INC ESI                             ; 00518f48
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 ; 00518f49
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 00518f4e
    JMP 0x00518ecf                      ; 00518f51
        ;   XREF to: 00518ecf (UNCONDITIONAL_JUMP)  ; LAB_00518ecf

