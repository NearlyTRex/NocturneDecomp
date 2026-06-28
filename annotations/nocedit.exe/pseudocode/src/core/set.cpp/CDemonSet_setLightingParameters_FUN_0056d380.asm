; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
;
; XREF[11]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c7253
;   core_fire.cpp_CFireball_render_FUN_004c0e70 at 004c0f4d
;   core_fire.cpp_CRock_render_FUN_004c1870 at 004c1919
;   core_fire.cpp_CShell_render_FUN_004c6200 at 004c62aa
;   core_fire.cpp_CStake_render_FUN_004c0140 at 004c01f4
;   core_gore.cpp_CGore_renderParticles_FUN_004ed7b0 at 004ed7e8
;   core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0 at 0056ad28
;   core_set.cpp_CDemonSet_renderGogglesView_FUN_0056c990 at 0056cbcf
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60 at 0056ce1b
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_0056cf00 at 0056cfbb
;   ... and 1 more
;
; Referenced Globals:
;   int g_LightingSystemDirty
;   CVector3f g_LightingReferencePosition
;   undefined4 g_LightingReferencePosition.y
;   undefined4 g_LightingReferencePosition.z
;   CVector3f g_LightingOrientation
;   undefined4 g_LightingOrientation.y
;   undefined4 g_LightingOrientation.z
;   CVector3f g_LightingAABBMin
;   undefined4 g_LightingAABBMin.y
;   undefined4 g_LightingAABBMin.z
;   CVector3f g_LightingAABBMax
;   undefined4 g_LightingAABBMax.y
;   undefined4 g_LightingAABBMax.z
;   CMatrix3x3f g_LightingRotationMatrix
;   undefined4 g_LightingRotationMatrix.m[0].y
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d380
        ;   Label: core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
    PUSH ESI                            ; 0056d381
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056d382
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056d386
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056d38a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056d38e
    MOV ESI,dword ptr [ESP + 0x20]      ; 0056d392
    TEST EAX,EAX                        ; 0056d396
    JZ 0x0056d42c                       ; 0056d398
        ;   XREF to: 0056d42c (CONDITIONAL_JUMP)  ; LAB_0056d42c
    PUSH EDI                            ; 0056d39e
    CMP EAX,0x32c1c68                   ; 0056d39f | g_LightingReferencePosition
    JNZ 0x0056d433                      ; 0056d3a4
        ;   XREF to: 0056d433 (CONDITIONAL_JUMP)  ; LAB_0056d433
    CMP ECX,0x32c1c74                   ; 0056d3aa | g_LightingOrientation
        ;   Label: LAB_0056d3aa
    JZ 0x0056d3cb                       ; 0056d3b0
        ;   XREF to: 0056d3cb (CONDITIONAL_JUMP)  ; LAB_0056d3cb
    FLD float ptr [ECX]                 ; 0056d3b2
    FLD float ptr [ECX + 0x8]           ; 0056d3b4
    MOV EAX,dword ptr [ECX + 0x4]       ; 0056d3b7
    MOV [0x032c1c78],EAX                ; 0056d3ba | g_LightingOrientation.y
    FSTP float ptr [0x032c1c7c]         ; 0056d3bf | g_LightingOrientation.z
    FSTP float ptr [0x032c1c74]         ; 0056d3c5 | g_LightingOrientation
    CMP EDX,0x32c1c80                   ; 0056d3cb | g_LightingAABBMin
        ;   Label: LAB_0056d3cb
    JZ 0x0056d3ec                       ; 0056d3d1
        ;   XREF to: 0056d3ec (CONDITIONAL_JUMP)  ; LAB_0056d3ec
    FLD float ptr [EDX]                 ; 0056d3d3
    FLD float ptr [EDX + 0x8]           ; 0056d3d5
    MOV EAX,dword ptr [EDX + 0x4]       ; 0056d3d8
    MOV [0x032c1c84],EAX                ; 0056d3db | g_LightingAABBMin.y
    FSTP float ptr [0x032c1c88]         ; 0056d3e0 | g_LightingAABBMin.z
    FSTP float ptr [0x032c1c80]         ; 0056d3e6 | g_LightingAABBMin
    CMP EBX,0x32c1c8c                   ; 0056d3ec | g_LightingAABBMax
        ;   Label: LAB_0056d3ec
    JZ 0x0056d40d                       ; 0056d3f2
        ;   XREF to: 0056d40d (CONDITIONAL_JUMP)  ; LAB_0056d40d
    FLD float ptr [EBX]                 ; 0056d3f4
    FLD float ptr [EBX + 0x8]           ; 0056d3f6
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056d3f9
    MOV [0x032c1c90],EAX                ; 0056d3fc | g_LightingAABBMax.y
    FSTP float ptr [0x032c1c94]         ; 0056d401 | g_LightingAABBMax.z
    FSTP float ptr [0x032c1c8c]         ; 0056d407 | g_LightingAABBMax
    TEST ESI,ESI                        ; 0056d40d
        ;   Label: LAB_0056d40d
    JZ 0x0056d452                       ; 0056d40f
        ;   XREF to: 0056d452 (CONDITIONAL_JUMP)  ; LAB_0056d452
    MOV ECX,0xa                         ; 0056d411
    MOV EDI,0x32c1c98                   ; 0056d416 | g_LightingRotationMatrix
    MOVSD.REP ES:EDI,ESI                ; 0056d41b | g_LightingRotationMatrix | g_LightingRotationMatrix.m[0].y
    MOV EDX,0x2                         ; 0056d41d
    POP EDI                             ; 0056d422
    MOV dword ptr [0x032c1c64],EDX      ; 0056d423 | g_LightingSystemDirty
        ;   Label: LAB_0056d423
    POP ESI                             ; 0056d429
    POP EBX                             ; 0056d42a
    RET                                 ; 0056d42b
    MOV EDX,0x1                         ; 0056d42c
        ;   Label: LAB_0056d42c
    JMP 0x0056d423                      ; 0056d431
        ;   XREF to: 0056d423 (UNCONDITIONAL_JUMP)  ; LAB_0056d423
    FLD float ptr [EAX]                 ; 0056d433
        ;   Label: LAB_0056d433
    FLD float ptr [EAX + 0x8]           ; 0056d435
    MOV EDI,dword ptr [EAX + 0x4]       ; 0056d438
    MOV dword ptr [0x032c1c6c],EDI      ; 0056d43b | g_LightingReferencePosition.y
    FSTP float ptr [0x032c1c70]         ; 0056d441 | g_LightingReferencePosition.z
    FSTP float ptr [0x032c1c68]         ; 0056d447 | g_LightingReferencePosition
    JMP 0x0056d3aa                      ; 0056d44d
        ;   XREF to: 0056d3aa (UNCONDITIONAL_JUMP)  ; LAB_0056d3aa
    MOV EDX,0x3f800000                  ; 0056d452
        ;   Label: LAB_0056d452
    MOV dword ptr [0x032c1c9c],ESI      ; 0056d457 | g_LightingRotationMatrix.m[0].y
    MOV dword ptr [0x032c1ca0],ESI      ; 0056d45d | g_LightingRotationMatrix.m[0].z
    MOV dword ptr [0x032c1ca4],ESI      ; 0056d463 | g_LightingRotationMatrix.m[1].x
    MOV dword ptr [0x032c1cac],ESI      ; 0056d469 | g_LightingRotationMatrix.m[1].z
    MOV dword ptr [0x032c1cb0],ESI      ; 0056d46f | g_LightingRotationMatrix.m[2].x
    MOV dword ptr [0x032c1cb4],ESI      ; 0056d475 | g_LightingRotationMatrix.m[2].y
    MOV dword ptr [0x032c1ca8],EDX      ; 0056d47b | g_LightingRotationMatrix.m[1].y
    MOV dword ptr [0x032c1cb8],EDX      ; 0056d481 | g_LightingRotationMatrix.m[2].z
    MOV dword ptr [0x032c1c98],EDX      ; 0056d487 | g_LightingRotationMatrix
    MOV EDX,0x2                         ; 0056d48d
    POP EDI                             ; 0056d492
    MOV dword ptr [0x032c1c64],EDX      ; 0056d493 | g_LightingSystemDirty
    POP ESI                             ; 0056d499
    POP EBX                             ; 0056d49a
    RET                                 ; 0056d49b

