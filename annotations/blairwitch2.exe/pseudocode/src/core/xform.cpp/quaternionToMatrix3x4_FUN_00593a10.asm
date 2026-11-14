; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; XREF[12]:
;   core_ammo.cpp_CAmmo_process_FUN_0040ded0 at 0040e00c
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0dc1
;   core_course.cpp_CCourse_evaluate_FUN_00438c40 at 00438c81
;   core_cross.cpp_CCross_process_FUN_005a6ed0 at 005a757b
;   core_doc.cpp_FUN_00450c60 at 004517b2
;   core_health.cpp_CHealthItem_process_FUN_004cdb60 at 004cdcb1
;   core_hellhag.cpp_FUN_005ab260 at 005ab638
;   core_hpatrol.cpp_CPatrolPoint_process_FUN_0059c680 at 0059c7e3
;   core_mine.cpp_CSpiritMine_process_FUN_005ad530 at 005ad67e
;   core_necklace.cpp_CNecklace_process_FUN_005adad0 at 005adc15
;   ... and 2 more
;
; Called Functions:
;   core_xform.cpp_clearTranslation_FUN_00591ab0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593a10
        ;   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
    PUSH EDI                            ; 00593a11
    SUB ESP,0x30                        ; 00593a12
    MOV EBX,ESI                         ; 00593a15
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00593a17
    PUSH EDX                            ; 00593a1b
    LEA EAX,[ESP + 0x4]                 ; 00593a1c
    PUSH EAX                            ; 00593a20
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0 ; 00593a21
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 00593a26
    MOV EAX,ESP                         ; 00593a29
    PUSH EAX                            ; 00593a2b
    MOV EDI,ESI                         ; 00593a2c
    LEA ESI,[ESP + 0x4]                 ; 00593a2e
    CALL core_xform.cpp_clearTranslation_FUN_00591ab0 ; 00593a32
        ;   XREF to: 00591ab0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_00591ab0(CMatrix3x4f * matrix)
    MOV ECX,0xc                         ; 00593a37
    ADD ESP,0x4                         ; 00593a3c
    MOVSD.REP ES:EDI,ESI                ; 00593a3f
    MOV EAX,EBX                         ; 00593a41
    ADD ESP,0x30                        ; 00593a43
    POP EDI                             ; 00593a46
    POP EBX                             ; 00593a47
    RET                                 ; 00593a48

