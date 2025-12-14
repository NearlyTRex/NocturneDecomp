; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_00570df0 at 00570e0c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005225a0
        ;   Label: core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
    PUSH EDX                            ; 005225a4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005225a5
    PUSH ECX                            ; 005225a9
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 ; 005225aa
        ;   XREF to: 00522310 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 005225af
    TEST EAX,EAX                        ; 005225b2
    JNZ 0x005225b7                      ; 005225b4
        ;   XREF to: 005225b7 (CONDITIONAL_JUMP)  ; LAB_005225b7
    RET                                 ; 005225b6
    PUSH EBX                            ; 005225b7
        ;   Label: LAB_005225b7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005225b8
    ADD EAX,0xe8                        ; 005225bc
    PUSH EAX                            ; 005225c1
    MOV EBX,dword ptr [0x006703ec]      ; 005225c2 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EBX                            ; 005225c8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 005225c9
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005225ce
    POP EBX                             ; 005225d1
    RET                                 ; 005225d2

