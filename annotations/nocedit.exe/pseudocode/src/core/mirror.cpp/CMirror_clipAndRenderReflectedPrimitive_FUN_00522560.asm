; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005708e0 at 0057091d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00522560
        ;   Label: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_00522560
    PUSH EDX                            ; 00522564
    MOV ECX,dword ptr [ESP + 0x8]       ; 00522565
    PUSH ECX                            ; 00522569
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 ; 0052256a
        ;   XREF to: 00522310 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 0052256f
    TEST EAX,EAX                        ; 00522572
    JNZ 0x00522577                      ; 00522574
        ;   XREF to: 00522577 (CONDITIONAL_JUMP)  ; LAB_00522577
    RET                                 ; 00522576
    PUSH EBX                            ; 00522577
        ;   Label: LAB_00522577
    MOV EAX,dword ptr [ESP + 0x8]       ; 00522578
    ADD EAX,0xe8                        ; 0052257c
    PUSH EAX                            ; 00522581
    MOV EBX,dword ptr [0x006703ec]      ; 00522582 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EBX                            ; 00522588 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 ; 00522589
        ;   XREF to: 0048a820 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0052258e
    POP EBX                             ; 00522591
    RET                                 ; 00522592

