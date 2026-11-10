; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_005340b0 at 005340ed
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fac50
        ;   Label: core_mirror.cpp_CMirror_clipAndRenderReflectedPrimitive_FUN_004fac50
    PUSH EDX                            ; 004fac54
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fac55
    PUSH ECX                            ; 004fac59
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10 ; 004fac5a
        ;   XREF to: 004faa10 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004faa10(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004fac5f
    TEST EAX,EAX                        ; 004fac62
    JNZ 0x004fac67                      ; 004fac64
        ;   XREF to: 004fac67 (CONDITIONAL_JUMP)  ; LAB_004fac67
    RET                                 ; 004fac66
    PUSH EBX                            ; 004fac67
        ;   Label: LAB_004fac67
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fac68
    ADD EAX,0xe8                        ; 004fac6c
    PUSH EAX                            ; 004fac71
    MOV EBX,dword ptr [0x0060b280]      ; 004fac72 | DAT_0060b280
    PUSH EBX                            ; 004fac78 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670 ; 004fac79
        ;   XREF to: 00469670 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00469670(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004fac7e
    POP EBX                             ; 004fac81
    RET                                 ; 004fac82

