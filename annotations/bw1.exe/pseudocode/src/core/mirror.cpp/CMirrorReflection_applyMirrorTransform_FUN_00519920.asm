; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_mirror_cpp_CMirrorReflection_applyMirrorTransform_FUN_00519920(CMirrorReflection *this_ptr,CVector3f *input_vector,CVector3f *output_buffer)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_vector
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   core_mirror.cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_0051a0a0 at 0051a17d
;   core_mirror.cpp_CMirrorReflection_transformMirrorVertex_FUN_00519ff0 at 0051a038
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519920
        ;   Label: core_mirror.cpp_CMirrorReflection_applyMirrorTransform_FUN_00519920
    PUSH EDI                            ; 00519921
    SUB ESP,0xc                         ; 00519922
    MOV EBX,ESI                         ; 00519925
    MOV ESI,dword ptr [ESP + 0x18]      ; 00519927
    ADD ESI,0x30                        ; 0051992b
    PUSH ESI                            ; 0051992e
    MOV EDX,dword ptr [ESP + 0x20]      ; 0051992f
    PUSH EDX                            ; 00519933
    LEA ESI,[ESP + 0x8]                 ; 00519934
    MOV EDI,EBX                         ; 00519938
    CALL core_xform.cpp_transformVector3x4_FUN_005b5080 ; 0051993a
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005b5080(CVector3f * input_vector, CMatrix3x4f * matrix, CVector3f * output_vector)
    LEA ESI,[ESP + 0x8]                 ; 0051993f
    ADD ESP,0x8                         ; 00519943
    MOVSD ES:EDI,ESI                    ; 00519946
    MOVSD ES:EDI,ESI                    ; 00519947
    MOVSD ES:EDI,ESI                    ; 00519948
    MOV EAX,EBX                         ; 00519949
    ADD ESP,0xc                         ; 0051994b
    POP EDI                             ; 0051994e
    POP EBX                             ; 0051994f
    RET                                 ; 00519950

