; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950(CMirrorReflection *this_ptr)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mirror.cpp_FUN_004f9990 at 004fa4f4
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
;   engine_drender.cpp_FUN_0046afb0
;   engine_matrix.c_FUN_0046b4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9950
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9951
    LEA EAX,[EBX + 0x60]                ; 004f9955
    PUSH EAX                            ; 004f9958
    MOV EDX,dword ptr [0x0060b280]      ; 004f9959 | DAT_0060b280
    PUSH EDX                            ; 004f995f | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046afb0 ; 004f9960
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004f9965
    MOV ECX,dword ptr [0x0060b280]      ; 004f9968 | DAT_0060b280
    PUSH dword ptr [EBX + 0x6c]         ; 004f996e
    PUSH ECX                            ; 004f9971 | DAT_01ba5c50
    CALL engine_matrix.c_FUN_0046b4b0   ; 004f9972
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b4b0()
    ADD ESP,0x8                         ; 004f9977
    LEA EAX,[EBX + 0x70]                ; 004f997a
    PUSH EAX                            ; 004f997d
    MOV EBX,dword ptr [0x0060b280]      ; 004f997e | DAT_0060b280
    PUSH EBX                            ; 004f9984 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 ; 004f9985
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004f998a
    POP EBX                             ; 004f998d
    RET                                 ; 004f998e

