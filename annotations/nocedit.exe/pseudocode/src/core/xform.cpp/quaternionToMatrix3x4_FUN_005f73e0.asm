; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_ptr)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
;
; XREF[2]:
;   core_course.cpp_CCourse_FUN_00442710 at 00442753
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 005a00ba
;
; Called Functions:
;   core_xform.cpp_clearTranslation_FUN_005f5370
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f73e0
        ;   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
    PUSH EDI                            ; 005f73e1
    SUB ESP,0x30                        ; 005f73e2
    MOV EBX,ESI                         ; 005f73e5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005f73e7
    PUSH EDX                            ; 005f73eb
    LEA EAX,[ESP + 0x4]                 ; 005f73ec
    PUSH EAX                            ; 005f73f0
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005f73f1
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_ptr, CQuaternion4f * quat_ptr)
    ADD ESP,0x8                         ; 005f73f6
    MOV EAX,ESP                         ; 005f73f9
    PUSH EAX                            ; 005f73fb
    MOV EDI,ESI                         ; 005f73fc
    LEA ESI,[ESP + 0x4]                 ; 005f73fe
    CALL core_xform.cpp_clearTranslation_FUN_005f5370 ; 005f7402
        ;   XREF to: 005f5370 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
    MOV ECX,0xc                         ; 005f7407
    ADD ESP,0x4                         ; 005f740c
    MOVSD.REP ES:EDI,ESI                ; 005f740f
    MOV EAX,EBX                         ; 005f7411
    ADD ESP,0x30                        ; 005f7413
    POP EDI                             ; 005f7416
    POP EBX                             ; 005f7417
    RET                                 ; 005f7418

