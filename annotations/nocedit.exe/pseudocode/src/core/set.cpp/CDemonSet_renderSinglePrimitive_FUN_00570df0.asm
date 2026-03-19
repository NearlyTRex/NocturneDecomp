; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_testVisibility_FUN_004544f0 at 004546e3
;   core_dlight.cpp_CDemonLight_testVisibility_FUN_00476a60 at 00476b4a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_CDemonRendererInstance.advanced_culling_enabled
;
; Called Functions:
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 00570df0
        ;   Label: core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00570df0
    MOV EAX,[0x006703ec]                ; 00570df4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX + 0x18]      ; 00570df9 | g_CDemonRendererInstance.advanced_culling_enabled
    TEST EDX,EDX                        ; 00570dfc
    JZ 0x00570e15                       ; 00570dfe
        ;   XREF to: 00570e15 (CONDITIONAL_JUMP)  ; LAB_00570e15
    MOV EAX,dword ptr [ESP + 0x4]       ; 00570e00
    PUSH ECX                            ; 00570e04
    MOV EDX,dword ptr [EAX + 0x161650]  ; 00570e05
    PUSH EDX                            ; 00570e0b
    CALL core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0 ; 00570e0c
        ;   XREF to: 005225a0 (UNCONDITIONAL_CALL)  ; int core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_005225a0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00570e11
    RET                                 ; 00570e14
    PUSH ECX                            ; 00570e15
        ;   Label: LAB_00570e15
    PUSH EAX                            ; 00570e16 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 00570e17
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00570e1c
    RET                                 ; 00570e1f

