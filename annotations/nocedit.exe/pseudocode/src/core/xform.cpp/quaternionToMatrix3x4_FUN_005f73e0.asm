; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack_esi core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f *quat_in,CMatrix3x4f *matrix_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat_in
; Local Variables:
; CMatrix3x4f      Stack[-0x38]:48  local_38
;
; XREF[2]:
;   core_course.cpp_CCourse_evaluate_FUN_00442710 at 00442753
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
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 005f73f6
    MOV EAX,ESP                         ; 005f73f9
    PUSH EAX                            ; 005f73fb
    MOV EDI,ESI                         ; 005f73fc
    LEA ESI,[ESP + 0x4]                 ; 005f73fe
    CALL core_xform.cpp_clearTranslation_FUN_005f5370 ; 005f7402
        ;   XREF to: 005f5370 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
    JMP 0x03fc39aa                      ; 005f7407
        ;   XREF to: 03fc39aa (UNCONDITIONAL_JUMP)  ; LAB_03fc39aa
    MOV EAX,EBX                         ; 005f7411
        ;   Label: LAB_005f7411
    ADD ESP,0x30                        ; 005f7413
    POP EDI                             ; 005f7416
    POP EBX                             ; 005f7417
    RET                                 ; 005f7418
    MOV ECX,0xc                         ; 03fc39aa
        ;   Label: LAB_03fc39aa
    ADD ESP,0x4                         ; 03fc39af
    MOV ECX,dword ptr [ESI]             ; 03fc39b2
    MOV dword ptr [EDI],ECX             ; 03fc39b4
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc39b6
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc39b9
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc39bc
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc39bf
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc39c2
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc39c5
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc39c8
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc39cb
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc39ce
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc39d1
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc39d4
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc39d7
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc39da
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc39dd
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc39e0
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc39e3
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc39e6
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc39e9
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc39ec
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc39ef
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc39f2
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc39f5
    ADD ESI,0x30                        ; 03fc39f8
    ADD EDI,0x30                        ; 03fc39fb
    XOR ECX,ECX                         ; 03fc39fe
    JMP 0x005f7411                      ; 03fc3a00
        ;   XREF to: 005f7411 (UNCONDITIONAL_JUMP)  ; LAB_005f7411

