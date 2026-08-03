; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_0055ced0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800 at 0043b843
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 at 0051d93a
;
; Called Functions:
;   core_xform.cpp_clearTranslation_FUN_0055ae60
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ced0
        ;   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0
    PUSH EDI                            ; 0055ced1
    SUB ESP,0x30                        ; 0055ced2
    MOV EBX,ESI                         ; 0055ced5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055ced7
    PUSH EDX                            ; 0055cedb
    LEA EAX,[ESP + 0x4]                 ; 0055cedc
    PUSH EAX                            ; 0055cee0
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0055cee1
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 0055cee6
    MOV EAX,ESP                         ; 0055cee9
    PUSH EAX                            ; 0055ceeb
    MOV EDI,ESI                         ; 0055ceec
    LEA ESI,[ESP + 0x4]                 ; 0055ceee
    CALL core_xform.cpp_clearTranslation_FUN_0055ae60 ; 0055cef2
        ;   XREF to: 0055ae60 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_0055ae60(CMatrix3x4f * matrix)
    MOV ECX,0xc                         ; 0055cef7
    ADD ESP,0x4                         ; 0055cefc
    MOVSD.REP ES:EDI,ESI                ; 0055ceff
    MOV EAX,EBX                         ; 0055cf01
    ADD ESP,0x30                        ; 0055cf03
    POP EDI                             ; 0055cf06
    POP EBX                             ; 0055cf07
    RET                                 ; 0055cf08

