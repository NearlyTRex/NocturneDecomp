; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0(CMirrorReflection *this_ptr)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0 at 00519444
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
;   engine_matrix.c_FUN_004839b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005188a0
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_005188a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005188a1
    LEA EAX,[EBX + 0x60]                ; 005188a5
    PUSH EAX                            ; 005188a8
    MOV EDX,dword ptr [0x00612560]      ; 005188a9 | DAT_00612560
    PUSH EDX                            ; 005188af | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 ; 005188b0
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005188b5
    MOV ECX,dword ptr [0x00612560]      ; 005188b8 | DAT_00612560
    PUSH dword ptr [EBX + 0x6c]         ; 005188be
    PUSH ECX                            ; 005188c1 | DAT_01bc120c
    CALL engine_matrix.c_FUN_004839b0   ; 005188c2
        ;   XREF to: 004839b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004839b0()
    ADD ESP,0x8                         ; 005188c7
    LEA EAX,[EBX + 0x70]                ; 005188ca
    PUSH EAX                            ; 005188cd
    MOV EBX,dword ptr [0x00612560]      ; 005188ce | DAT_00612560
    PUSH EBX                            ; 005188d4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 ; 005188d5
        ;   XREF to: 00483560 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 005188da
    POP EBX                             ; 005188dd
    RET                                 ; 005188de

