; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40 at 0050df7d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d76e0
        ;   Label: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004d76e0
    PUSH EDX                            ; 004d76e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d76e5
    PUSH ECX                            ; 004d76e9
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0 ; 004d76ea
        ;   XREF to: 004d74a0 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004d76ef
    TEST EAX,EAX                        ; 004d76f2
    JNZ 0x004d76f7                      ; 004d76f4
        ;   XREF to: 004d76f7 (CONDITIONAL_JUMP)  ; LAB_004d76f7
    RET                                 ; 004d76f6
    PUSH EBX                            ; 004d76f7
        ;   Label: LAB_004d76f7
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d76f8
    ADD EAX,0xe8                        ; 004d76fc
    PUSH EAX                            ; 004d7701
    MOV EBX,dword ptr [0x005ae704]      ; 004d7702 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004d7708 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 004d7709
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004d770e
    POP EBX                             ; 004d7711
    RET                                 ; 004d7712

