; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0 at 0050e01d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc942c
;   undefined4 DAT_01cc9430
;   undefined4 DAT_01cc9434
;   undefined4 DAT_01cc9438
;   undefined4 DAT_01cc943c
;   undefined4 DAT_01cc9440
;   undefined4 DAT_01cc9444
;   undefined4 DAT_01cc9448
;   undefined4 DAT_01cc944c
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7760
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d7764
    MOV dword ptr [0x01cc942c],EDX      ; 004d7767 | DAT_01cc942c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d776d
    MOV dword ptr [0x01cc9430],EDX      ; 004d7770 | DAT_01cc9430
    MOV EDX,dword ptr [EAX + 0xc]       ; 004d7776
    MOV dword ptr [0x01cc9434],EDX      ; 004d7779 | DAT_01cc9434
    MOV EDX,dword ptr [EAX + 0x10]      ; 004d777f
    MOV dword ptr [0x01cc9438],EDX      ; 004d7782 | DAT_01cc9438
    MOV EDX,dword ptr [EAX + 0x14]      ; 004d7788
    MOV dword ptr [0x01cc943c],EDX      ; 004d778b | DAT_01cc943c
    MOV EDX,dword ptr [EAX + 0x18]      ; 004d7791
    MOV dword ptr [0x01cc9440],EDX      ; 004d7794 | DAT_01cc9440
    MOV EDX,dword ptr [EAX + 0x24]      ; 004d779a
    MOV dword ptr [0x01cc9444],EDX      ; 004d779d | DAT_01cc9444
    MOV EDX,dword ptr [EAX + 0x30]      ; 004d77a3
    PUSH 0x1cc9428                      ; 004d77a6
    MOV dword ptr [0x01cc9448],EDX      ; 004d77ab | DAT_01cc9448
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d77b1
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004d77b5
    PUSH EDX                            ; 004d77b8
    MOV [0x01cc944c],EAX                ; 004d77b9 | DAT_01cc944c
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0 ; 004d77be
        ;   XREF to: 004d74a0 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004d77c3
    TEST EAX,EAX                        ; 004d77c6
    JNZ 0x004d77cb                      ; 004d77c8
        ;   XREF to: 004d77cb (CONDITIONAL_JUMP)  ; LAB_004d77cb
    RET                                 ; 004d77ca
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d77cb
        ;   Label: LAB_004d77cb
    ADD EAX,0xe8                        ; 004d77cf
    PUSH EAX                            ; 004d77d4
    MOV ECX,dword ptr [0x005ae704]      ; 004d77d5 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004d77db | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 004d77dc
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004d77e1
    RET                                 ; 004d77e4

