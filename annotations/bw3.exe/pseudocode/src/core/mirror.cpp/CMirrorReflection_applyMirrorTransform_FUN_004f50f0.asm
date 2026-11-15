; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0(CMirrorReflection *this_ptr,CVector3f *input_vector,CVector3f *output_buffer)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004f5870 at 004f594d
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004f57c0 at 004f5808
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f50f0
        ;   Label: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004f50f0
    PUSH EDI                            ; 004f50f1
    SUB ESP,0xc                         ; 004f50f2
    MOV EBX,ESI                         ; 004f50f5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f50f7
    ADD ESI,0x30                        ; 004f50fb
    PUSH ESI                            ; 004f50fe
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f50ff
    PUSH EDX                            ; 004f5103
    LEA ESI,[ESP + 0x8]                 ; 004f5104
    MOV EDI,EBX                         ; 004f5108
    CALL core_xform.cpp_transformVector3x4_FUN_00583260 ; 004f510a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_00583260(CVector3f * input_vector, CMatrix3x4f * matrix, CVector3f * output_vector)
    LEA ESI,[ESP + 0x8]                 ; 004f510f
    ADD ESP,0x8                         ; 004f5113
    MOVSD ES:EDI,ESI                    ; 004f5116
    MOVSD ES:EDI,ESI                    ; 004f5117
    MOVSD ES:EDI,ESI                    ; 004f5118
    MOV EAX,EBX                         ; 004f5119
    ADD ESP,0xc                         ; 004f511b
    POP EDI                             ; 004f511e
    POP EBX                             ; 004f511f
    RET                                 ; 004f5120

