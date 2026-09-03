; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00515c40(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80 at 00508431
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 00515c40
        ;   Label: core_setutil.cpp_C3DSLight_isVisible_FUN_00515c40
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00515c43
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00515c47
    JNZ 0x00515c5c                      ; 00515c51
        ;   XREF to: 00515c5c (CONDITIONAL_JUMP)  ; LAB_00515c5c
    MOV EAX,0x1                         ; 00515c53
    ADD ESP,0x18                        ; 00515c58
    RET                                 ; 00515c5b
    PUSH EBX                            ; 00515c5c
        ;   Label: LAB_00515c5c
    FLD float ptr [EDX + 0x11d4]        ; 00515c5d
    MOV EBX,dword ptr [0x005ae704]      ; 00515c63 | g_CDemonRenderer_PTR_005ae704
    FCHS                                ; 00515c69
    ADD EDX,0x104                       ; 00515c6b
    FSTP float ptr [ESP + 0x4]          ; 00515c71
    PUSH EDX                            ; 00515c75
    FLD float ptr [EDX + 0x10d0]        ; 00515c76
    FCHS                                ; 00515c7c
    FSTP float ptr [ESP + 0xc]          ; 00515c7e
    FLD float ptr [EDX + 0x10d0]        ; 00515c82
    FCHS                                ; 00515c88
    FSTP float ptr [ESP + 0x10]         ; 00515c8a
    MOV EAX,dword ptr [EDX + 0x10d0]    ; 00515c8e
    PUSH EBX                            ; 00515c94
    MOV dword ptr [ESP + 0x18],EAX      ; 00515c95
    MOV dword ptr [ESP + 0x1c],EAX      ; 00515c99
    MOV dword ptr [ESP + 0x20],EAX      ; 00515c9d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00515ca1
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00515ca6
    PUSH 0x0                            ; 00515ca9
    LEA EAX,[ESP + 0x8]                 ; 00515cab
    PUSH EAX                            ; 00515caf
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00515cb0
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00515cb5
    POP EBX                             ; 00515cb8
    ADD ESP,0x18                        ; 00515cb9
    RET                                 ; 00515cbc

