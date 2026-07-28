; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * core_skeleton_cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860(undefined4 param_1,undefined4 param_2,CVector3f *param_3,UOrientationVector *param_4,CVector3f *param_5,CDemonActor *param_6)
;
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e860
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_spawnDismemberedBodyPart_FUN_0051e860
    PUSH ESI                            ; 0051e861
    PUSH EDI                            ; 0051e862
    PUSH EBP                            ; 0051e863
    PUSH 0x0                            ; 0051e864
    PUSH 0x0                            ; 0051e866
    PUSH 0x0                            ; 0051e868
    MOV EDX,dword ptr [ESP + 0x34]      ; 0051e86a
    PUSH EDX                            ; 0051e86e
    MOV ECX,dword ptr [ESP + 0x34]      ; 0051e86f
    PUSH ECX                            ; 0051e873
    MOV EBX,dword ptr [ESP + 0x34]      ; 0051e874
    PUSH EBX                            ; 0051e878
    MOV ESI,dword ptr [ESP + 0x34]      ; 0051e879
    PUSH ESI                            ; 0051e87d
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 0051e87e
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0051e883
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051e886
    PUSH EDI                            ; 0051e88a
    PUSH EAX                            ; 0051e88b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051e88c
    PUSH EBP                            ; 0051e890
    MOV EBX,EAX                         ; 0051e891
    MOV ESI,EAX                         ; 0051e893
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0 ; 0051e895
        ;   XREF to: 0051e8c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0()
    ADD ESP,0xc                         ; 0051e89a
    TEST EBX,EBX                        ; 0051e89d
    JNZ 0x0051e8a8                      ; 0051e89f
        ;   XREF to: 0051e8a8 (CONDITIONAL_JUMP)  ; LAB_0051e8a8
    MOV EAX,ESI                         ; 0051e8a1
    POP EBP                             ; 0051e8a3
    POP EDI                             ; 0051e8a4
    POP ESI                             ; 0051e8a5
    POP EBX                             ; 0051e8a6
    RET                                 ; 0051e8a7
    PUSH EBX                            ; 0051e8a8
        ;   Label: LAB_0051e8a8
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 0051e8a9
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0051e8ae
    MOV EAX,ESI                         ; 0051e8b1
    POP EBP                             ; 0051e8b3
    POP EDI                             ; 0051e8b4
    POP ESI                             ; 0051e8b5
    POP EBX                             ; 0051e8b6
    RET                                 ; 0051e8b7

