; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mirror_cpp_CMirror_FUN_004d7720(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_0050e490 at 0050e4ac
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d7720
        ;   Label: core_mirror.cpp_CMirror_FUN_004d7720
    PUSH EDX                            ; 004d7724
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d7725
    PUSH ECX                            ; 004d7729
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0 ; 004d772a
        ;   XREF to: 004d74a0 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004d772f
    TEST EAX,EAX                        ; 004d7732
    JNZ 0x004d7737                      ; 004d7734
        ;   XREF to: 004d7737 (CONDITIONAL_JUMP)  ; LAB_004d7737
    RET                                 ; 004d7736
    PUSH EBX                            ; 004d7737
        ;   Label: LAB_004d7737
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7738
    ADD EAX,0xe8                        ; 004d773c
    PUSH EAX                            ; 004d7741
    MOV EBX,dword ptr [0x005ae704]      ; 004d7742 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004d7748 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 004d7749
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004d774e
    POP EBX                             ; 004d7751
    RET                                 ; 004d7752

