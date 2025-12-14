; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight * this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a989
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 00587df0
        ;   Label: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00587df3
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00587df7
    JNZ 0x00587e0c                      ; 00587e01
        ;   XREF to: 00587e0c (CONDITIONAL_JUMP)  ; LAB_00587e0c
    MOV EAX,0x1                         ; 00587e03
    ADD ESP,0x18                        ; 00587e08
    RET                                 ; 00587e0b
    PUSH EBX                            ; 00587e0c
        ;   Label: LAB_00587e0c
    FLD float ptr [EDX + 0x11d4]        ; 00587e0d
    MOV EBX,dword ptr [0x006703ec]      ; 00587e13 | g_CDemonRendererInstance | g_CDemonRendererPtr
    FCHS                                ; 00587e19
    ADD EDX,0x104                       ; 00587e1b
    FSTP float ptr [ESP + 0x4]          ; 00587e21
    PUSH EDX                            ; 00587e25
    FLD float ptr [EDX + 0x10d0]        ; 00587e26
    FCHS                                ; 00587e2c
    FSTP float ptr [ESP + 0xc]          ; 00587e2e
    FLD float ptr [EDX + 0x10d0]        ; 00587e32
    FCHS                                ; 00587e38
    FSTP float ptr [ESP + 0x10]         ; 00587e3a
    MOV EAX,dword ptr [EDX + 0x10d0]    ; 00587e3e
    PUSH EBX                            ; 00587e44 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x18],EAX      ; 00587e45
    MOV dword ptr [ESP + 0x1c],EAX      ; 00587e49
    MOV dword ptr [ESP + 0x20],EAX      ; 00587e4d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00587e51
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00587e56
    LEA EAX,[ESP + 0x4]                 ; 00587e59
    PUSH EAX                            ; 00587e5d
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00587e5e
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00587e63
    POP EBX                             ; 00587e66
    ADD ESP,0x18                        ; 00587e67
    RET                                 ; 00587e6a

