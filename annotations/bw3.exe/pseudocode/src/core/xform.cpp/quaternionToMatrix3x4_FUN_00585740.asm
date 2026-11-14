; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_00585740(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   core_course.cpp_CCourse_evaluate_FUN_00444ac0 at 00444b01
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e30a
;
; Called Functions:
;   core_xform.cpp_clearTranslation_FUN_005837e0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585740
        ;   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_00585740
    PUSH EDI                            ; 00585741
    SUB ESP,0x30                        ; 00585742
    MOV EBX,ESI                         ; 00585745
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00585747
    PUSH EDX                            ; 0058574b
    LEA EAX,[ESP + 0x4]                 ; 0058574c
    PUSH EAX                            ; 00585750
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0 ; 00585751
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 00585756
    MOV EAX,ESP                         ; 00585759
    PUSH EAX                            ; 0058575b
    MOV EDI,ESI                         ; 0058575c
    LEA ESI,[ESP + 0x4]                 ; 0058575e
    CALL core_xform.cpp_clearTranslation_FUN_005837e0 ; 00585762
        ;   XREF to: 005837e0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_005837e0(CMatrix3x4f * matrix)
    MOV ECX,0xc                         ; 00585767
    ADD ESP,0x4                         ; 0058576c
    MOVSD.REP ES:EDI,ESI                ; 0058576f
    MOV EAX,EBX                         ; 00585771
    ADD ESP,0x30                        ; 00585773
    POP EDI                             ; 00585776
    POP EBX                             ; 00585777
    RET                                 ; 00585778

