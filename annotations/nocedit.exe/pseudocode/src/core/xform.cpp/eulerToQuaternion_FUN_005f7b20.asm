; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler_angles,CQuaternion4f *quat_out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   euler_angles
; Local Variables:
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[14]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004130f9
;   core_boneguy.cpp_CBoneGuy_FUN_0041d8a0 at 0041d8d5
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fc64
;   core_conveyor.cpp_CConveyor_setup_FUN_00441d60 at 00441d9b
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443585
;   core_gabriela.cpp_FUN_004d4d80 at 004d4dcb
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f10b6
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f838e
;   core_platfrm.cpp_CPlatform_ctor_FUN_0054c850 at 0054c92f
;   core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00 at 0054eb07
;   ... and 4 more
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToQuaternion_FUN_005f7420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7b20
        ;   Label: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
    PUSH EDI                            ; 005f7b21
    PUSH EBP                            ; 005f7b22
    MOV EBP,ESP                         ; 005f7b23
    SUB ESP,0x4c                        ; 005f7b25
    MOV EBX,ESI                         ; 005f7b28
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f7b2a
    PUSH EDX                            ; 005f7b2d
    LEA ESI,[EBP + -0xc]                ; 005f7b2e
    XOR ECX,ECX                         ; 005f7b31
    PUSH ESI                            ; 005f7b33
    LEA ESI,[EBP + -0x4c]               ; 005f7b34
    MOV dword ptr [EBP + -0xc],ECX      ; 005f7b37
    PUSH ESI                            ; 005f7b3a
    MOV dword ptr [EBP + -0x8],ECX      ; 005f7b3b
    MOV dword ptr [EBP + -0x4],ECX      ; 005f7b3e
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005f7b41
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005f7b46
    LEA ESI,[EBP + -0x4c]               ; 005f7b49
    PUSH ESI                            ; 005f7b4c
    LEA ESI,[EBP + -0x1c]               ; 005f7b4d
    MOV EDI,EBX                         ; 005f7b50
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 005f7b52
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[EBP + -0x1c]               ; 005f7b57
    ADD ESP,0x4                         ; 005f7b5a
    MOVSD ES:EDI,ESI                    ; 005f7b5d
    MOVSD ES:EDI,ESI                    ; 005f7b5e
    MOVSD ES:EDI,ESI                    ; 005f7b5f
    MOVSD ES:EDI,ESI                    ; 005f7b60
    MOV EAX,EBX                         ; 005f7b61
    MOV ESP,EBP                         ; 005f7b63
    POP EBP                             ; 005f7b65
    POP EDI                             ; 005f7b66
    POP EBX                             ; 005f7b67
    RET                                 ; 005f7b68

