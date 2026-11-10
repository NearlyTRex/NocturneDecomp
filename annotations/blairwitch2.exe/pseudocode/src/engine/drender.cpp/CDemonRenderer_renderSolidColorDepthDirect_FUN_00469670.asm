; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[3]:
;   core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50 at 004fac79
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0 at 004fad4c
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0 at 00534116
;
; Referenced Globals:
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469670
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
    PUSH ESI                            ; 00469671
    PUSH EBP                            ; 00469672
    MOV EBX,dword ptr [ESP + 0x10]      ; 00469673
    MOV ESI,dword ptr [ESP + 0x14]      ; 00469677
    CMP dword ptr [EBX + 0xc],0x0       ; 0046967b
    JNZ 0x004696b5                      ; 0046967f
        ;   XREF to: 004696b5 (CONDITIONAL_JUMP)  ; LAB_004696b5
    CMP dword ptr [EBX + 0x4],0x0       ; 00469681
        ;   Label: LAB_00469681
    JZ 0x004696c7                       ; 00469685
        ;   XREF to: 004696c7 (CONDITIONAL_JUMP)  ; LAB_004696c7
    XOR ECX,ECX                         ; 00469687
    MOV EDX,0x46e936                    ; 00469689
    MOV dword ptr [0x01c38b54],ECX      ; 0046968e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469694 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDX      ; 0046969a | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 004696a0
        ;   Label: LAB_004696a0
    PUSH EAX                            ; 004696a3
    MOV EBP,dword ptr [ESI + 0x4]       ; 004696a4
    PUSH EBP                            ; 004696a7
    PUSH EBX                            ; 004696a8
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 004696a9
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004696ae
    POP EBP                             ; 004696b1
        ;   Label: LAB_004696b1
    POP ESI                             ; 004696b2
    POP EBX                             ; 004696b3
    RET                                 ; 004696b4
    LEA EAX,[ESI + 0x8]                 ; 004696b5
        ;   Label: LAB_004696b5
    PUSH EAX                            ; 004696b8
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004696b9
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004696be
    TEST EAX,EAX                        ; 004696c1
    JZ 0x004696b1                       ; 004696c3
        ;   XREF to: 004696b1 (CONDITIONAL_JUMP)  ; LAB_004696b1
    JMP 0x00469681                      ; 004696c5
        ;   XREF to: 00469681 (UNCONDITIONAL_JUMP)  ; LAB_00469681
    PUSH EDI                            ; 004696c7
        ;   Label: LAB_004696c7
    MOV EBP,0xc0                        ; 004696c8
    MOV EAX,0x6                         ; 004696cd
    MOV EDI,0x46ec58                    ; 004696d2
    MOV dword ptr [0x01c38b54],EBP      ; 004696d7 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 004696dd | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDI      ; 004696e2 | DAT_01c35e6c
    POP EDI                             ; 004696e8
    JMP 0x004696a0                      ; 004696e9
        ;   XREF to: 004696a0 (UNCONDITIONAL_JUMP)  ; LAB_004696a0

