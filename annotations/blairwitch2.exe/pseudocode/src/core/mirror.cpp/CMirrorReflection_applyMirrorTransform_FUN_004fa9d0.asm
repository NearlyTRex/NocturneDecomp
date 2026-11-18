; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_004fa9d0(CMirrorReflection *this_ptr,CVector3f *input_vector,CVector3f *output_buffer)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004fb150 at 004fb22d
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_004fb0a0 at 004fb0e8
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa9d0
        ;   Label: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_004fa9d0
    PUSH EDI                            ; 004fa9d1
    SUB ESP,0xc                         ; 004fa9d2
    MOV EBX,ESI                         ; 004fa9d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fa9d7
    ADD ESI,0x30                        ; 004fa9db
    PUSH ESI                            ; 004fa9de
    MOV EDX,dword ptr [ESP + 0x20]      ; 004fa9df
    PUSH EDX                            ; 004fa9e3
    LEA ESI,[ESP + 0x8]                 ; 004fa9e4
    MOV EDI,EBX                         ; 004fa9e8
    CALL core_xform.cpp_transformVector3x4_FUN_00591530 ; 004fa9ea
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_00591530(CVector3f * input_vector, CMatrix3x4f * matrix, CVector3f * output_vector)
    LEA ESI,[ESP + 0x8]                 ; 004fa9ef
    ADD ESP,0x8                         ; 004fa9f3
    MOVSD ES:EDI,ESI                    ; 004fa9f6
    MOVSD ES:EDI,ESI                    ; 004fa9f7
    MOVSD ES:EDI,ESI                    ; 004fa9f8
    MOV EAX,EBX                         ; 004fa9f9
    ADD ESP,0xc                         ; 004fa9fb
    POP EDI                             ; 004fa9fe
    POP EBX                             ; 004fa9ff
    RET                                 ; 004faa00

