; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0(CMirrorReflection *this_ptr,CVector3f *output_buffer,CVector3f *input_vector)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_buffer
; CVector3f *      Stack[0xc]:4   input_vector
;
; XREF[2]:
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50 at 00522b0b
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0 at 005229ed
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005222f0
        ;   Label: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_005222f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005222f1
    MOV EAX,dword ptr [ESP + 0x8]       ; 005222f5
    ADD EAX,0x30                        ; 005222f9
    PUSH EAX                            ; 005222fc
    MOV EDX,dword ptr [ESP + 0x14]      ; 005222fd
    PUSH EDX                            ; 00522301
    PUSH EBX                            ; 00522302
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00522303
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00522308
    MOV EAX,EBX                         ; 0052230b
    POP EBX                             ; 0052230d
    RET                                 ; 0052230e

