; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection *this_ptr)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0 at 004f4c14
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4070
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f4071
    LEA EAX,[EBX + 0x60]                ; 004f4075
    PUSH EAX                            ; 004f4078
    MOV EDX,dword ptr [0x005f2afc]      ; 004f4079 | DAT_005f2afc
    PUSH EDX                            ; 004f407f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 004f4080
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004f4085
    MOV ECX,dword ptr [0x005f2afc]      ; 004f4088 | DAT_005f2afc
    PUSH dword ptr [EBX + 0x6c]         ; 004f408e
    PUSH ECX                            ; 004f4091 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 004f4092
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004f4097
    LEA EAX,[EBX + 0x70]                ; 004f409a
    PUSH EAX                            ; 004f409d
    MOV EBX,dword ptr [0x005f2afc]      ; 004f409e | DAT_005f2afc
    PUSH EBX                            ; 004f40a4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 ; 004f40a5
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004f40aa
    POP EBX                             ; 004f40ad
    RET                                 ; 004f40ae

