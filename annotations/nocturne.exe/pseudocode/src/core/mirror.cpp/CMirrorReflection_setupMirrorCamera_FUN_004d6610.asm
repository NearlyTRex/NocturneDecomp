; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(CMirrorReflection *this_ptr)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004d6650 at 004d7076
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6610
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6611
    LEA EAX,[EBX + 0x60]                ; 004d6615
    PUSH EAX                            ; 004d6618
    MOV EDX,dword ptr [0x005ae704]      ; 004d6619 | DAT_005ae704
    PUSH EDX                            ; 004d661f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 004d6620
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004d6625
    MOV ECX,dword ptr [0x005ae704]      ; 004d6628 | DAT_005ae704
    PUSH dword ptr [EBX + 0x6c]         ; 004d662e
    PUSH ECX                            ; 004d6631 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004d6632
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004d6637
    LEA EAX,[EBX + 0x70]                ; 004d663a
    PUSH EAX                            ; 004d663d
    MOV EBX,dword ptr [0x005ae704]      ; 004d663e | DAT_005ae704
    PUSH EBX                            ; 004d6644 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0 ; 004d6645
        ;   XREF to: 004607b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004d664a
    POP EBX                             ; 004d664d
    RET                                 ; 004d664e

