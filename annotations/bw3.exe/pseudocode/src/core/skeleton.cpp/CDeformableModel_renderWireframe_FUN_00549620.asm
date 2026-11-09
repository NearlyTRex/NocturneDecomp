; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00549620(CDeformableModel *this_ptr,int lod_level)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_level
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549620
        ;   Label: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00549620
    PUSH ESI                            ; 00549621
    PUSH EDI                            ; 00549622
    PUSH EBP                            ; 00549623
    MOV EBP,dword ptr [ESP + 0x18]      ; 00549624
    XOR EDI,EDI                         ; 00549628
    XOR ESI,ESI                         ; 0054962a
    SHL EBP,0x2                         ; 0054962c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054962f
        ;   Label: LAB_0054962f
    ADD EBX,EBP                         ; 00549633
    CMP ESI,dword ptr [EBX + 0x54]      ; 00549635
    JL 0x00549650                       ; 00549638
        ;   XREF to: 00549650 (CONDITIONAL_JUMP)  ; LAB_00549650
    PUSH 0x1                            ; 0054963a
    MOV ECX,dword ptr [0x005f2afc]      ; 0054963c | DAT_005f2afc
    PUSH ECX                            ; 00549642
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00549643
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00549648
    POP EBP                             ; 0054964b
    POP EDI                             ; 0054964c
    POP ESI                             ; 0054964d
    POP EBX                             ; 0054964e
    RET                                 ; 0054964f
    MOV EBX,dword ptr [EBX + 0x7c]      ; 00549650
        ;   Label: LAB_00549650
    XOR EAX,EAX                         ; 00549653
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 00549655
    PUSH EAX                            ; 0054965a
    XOR EAX,EAX                         ; 0054965b
    MOV AX,word ptr [EDI + EBX*0x1]     ; 0054965d
    PUSH EAX                            ; 00549661
    MOV ECX,dword ptr [0x005f2afc]      ; 00549662 | DAT_005f2afc
    PUSH ECX                            ; 00549668
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 00549669
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 0054966e
    ADD ESP,0xc                         ; 00549670
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00549673
    PUSH EAX                            ; 00549678
    XOR EAX,EAX                         ; 00549679
    MOV AX,word ptr [EDI + EBX*0x1 + 0x2] ; 0054967b
    PUSH EAX                            ; 00549680
    MOV EAX,[0x005f2afc]                ; 00549681 | DAT_005f2afc
    PUSH EAX                            ; 00549686
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 00549687
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    XOR EAX,EAX                         ; 0054968c
    ADD ESP,0xc                         ; 0054968e
    MOV AX,word ptr [EDI + EBX*0x1]     ; 00549691
    PUSH EAX                            ; 00549695
    XOR EAX,EAX                         ; 00549696
    MOV AX,word ptr [EDI + EBX*0x1 + 0x4] ; 00549698
    PUSH EAX                            ; 0054969d
    MOV EDX,dword ptr [0x005f2afc]      ; 0054969e | DAT_005f2afc
    PUSH EDX                            ; 005496a4
    ADD EDI,0x12                        ; 005496a5
    INC ESI                             ; 005496a8
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 ; 005496a9
        ;   XREF to: 0046d550 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005496ae
    JMP 0x0054962f                      ; 005496b1
        ;   XREF to: 0054962f (UNCONDITIONAL_JUMP)  ; LAB_0054962f

