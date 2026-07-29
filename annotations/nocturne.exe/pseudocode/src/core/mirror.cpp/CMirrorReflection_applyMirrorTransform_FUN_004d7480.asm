; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_buffer
; CVector3f *      Stack[0xc]:4   input_vector
;
; XREF[2]:
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0 at 004d7c8b
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30 at 004d7b6d
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7480
        ;   Label: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004d7480
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d7481
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7485
    ADD EAX,0x30                        ; 004d7489
    PUSH EAX                            ; 004d748c
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d748d
    PUSH EDX                            ; 004d7491
    PUSH EBX                            ; 004d7492
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004d7493
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004d7498
    MOV EAX,EBX                         ; 004d749b
    POP EBX                             ; 004d749d
    RET                                 ; 004d749e

