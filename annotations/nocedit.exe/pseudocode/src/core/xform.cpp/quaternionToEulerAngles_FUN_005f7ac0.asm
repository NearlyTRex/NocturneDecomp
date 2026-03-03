; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f *quat_in,CVector3f *vector_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
;
; XREF[7]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c169
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443565
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0 at 0054cbae
;   core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00 at 0054ee28
;   core_platfrm.cpp_CPlatform_renderOpaque_FUN_0054d720 at 0054d8a8
;   core_stranger.cpp_CStranger_extractTurnPoseData_FUN_005bf720 at 005bf77f
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e281f
;
; Called Functions:
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7ac0
        ;   Label: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
    SUB ESP,0x30                        ; 005f7ac1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005f7ac4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005f7ac8
    PUSH EDX                            ; 005f7acc
    LEA EAX,[ESP + 0x4]                 ; 005f7acd
    PUSH EAX                            ; 005f7ad1
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005f7ad2
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 005f7ad7
    PUSH EBX                            ; 005f7ada
    LEA EAX,[ESP + 0x4]                 ; 005f7adb
    PUSH EAX                            ; 005f7adf
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005f7ae0
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005f7ae5
    MOV EAX,EBX                         ; 005f7ae8
    ADD ESP,0x30                        ; 005f7aea
    POP EBX                             ; 005f7aed
    RET                                 ; 005f7aee

