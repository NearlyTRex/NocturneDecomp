; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionToMatrix3x4_FUN_005b7560(CQuaternion4f *param_1)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[2]:
;   core_course.cpp_CCourse_evaluate_FUN_00447f00 at 00447f41
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0 at 0056977a
;
; Called Functions:
;   core_xform.cpp_clearTranslation_FUN_005b5600
;   core_xform.cpp_FUN_005b7410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7560
        ;   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560
    PUSH EDI                            ; 005b7561
    SUB ESP,0x30                        ; 005b7562
    MOV EBX,ESI                         ; 005b7565
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005b7567
    PUSH EDX                            ; 005b756b
    LEA EAX,[ESP + 0x4]                 ; 005b756c
    PUSH EAX                            ; 005b7570
    CALL core_xform.cpp_FUN_005b7410    ; 005b7571
        ;   XREF to: 005b7410 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005b7410(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 005b7576
    MOV EAX,ESP                         ; 005b7579
    PUSH EAX                            ; 005b757b
    MOV EDI,ESI                         ; 005b757c
    LEA ESI,[ESP + 0x4]                 ; 005b757e
    CALL core_xform.cpp_clearTranslation_FUN_005b5600 ; 005b7582
        ;   XREF to: 005b5600 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clearTranslation_FUN_005b5600()
    MOV ECX,0xc                         ; 005b7587
    ADD ESP,0x4                         ; 005b758c
    MOVSD.REP ES:EDI,ESI                ; 005b758f
    MOV EAX,EBX                         ; 005b7591
    ADD ESP,0x30                        ; 005b7593
    POP EDI                             ; 005b7596
    POP EBX                             ; 005b7597
    RET                                 ; 005b7598

