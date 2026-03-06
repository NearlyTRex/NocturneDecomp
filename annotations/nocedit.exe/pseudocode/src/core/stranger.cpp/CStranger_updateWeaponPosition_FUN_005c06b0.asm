; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(CStranger *this_ptr,int hand_index)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[3]:
;   core_stranger.cpp_CStranger_handleFireButton_FUN_005c5f10 at 005c61b2
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc387
;   core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150 at 005c3397
;
; Called Functions:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c06b0
        ;   Label: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005c06b0
    PUSH EDI                            ; 005c06b1
    PUSH EBP                            ; 005c06b2
    SUB ESP,0x108                       ; 005c06b3
    MOV EBX,dword ptr [ESP + 0x118]     ; 005c06b9
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c06c0
    TEST EDX,EDX                        ; 005c06c6
    JZ 0x005c07a3                       ; 005c06c8
        ;   XREF to: 005c07a3 (CONDITIONAL_JUMP)  ; LAB_005c07a3
    CMP EDX,dword ptr [EBX + 0x24b4]    ; 005c06ce
    JZ 0x005c07a3                       ; 005c06d4
        ;   XREF to: 005c07a3 (CONDITIONAL_JUMP)  ; LAB_005c07a3
    CMP EDX,dword ptr [EBX + 0x24f8]    ; 005c06da
    JZ 0x005c07a3                       ; 005c06e0
        ;   XREF to: 005c07a3 (CONDITIONAL_JUMP)  ; LAB_005c07a3
    MOV EDI,dword ptr [ESP + 0x11c]     ; 005c06e6
    MOV EAX,0x1                         ; 005c06ed
    TEST EDI,EDI                        ; 005c06f2
    JZ 0x005c06f8                       ; 005c06f4
        ;   XREF to: 005c06f8 (CONDITIONAL_JUMP)  ; LAB_005c06f8
    XOR EAX,EAX                         ; 005c06f6
    PUSH ESI                            ; 005c06f8
        ;   Label: LAB_005c06f8
    PUSH EAX                            ; 005c06f9
    MOV EBP,dword ptr [EBX + 0x1fc2c]   ; 005c06fa
    PUSH EBP                            ; 005c0700
    PUSH EBX                            ; 005c0701
    LEA ESI,[ESP + 0x10]                ; 005c0702
    CALL core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0 ; 005c0706
        ;   XREF to: 005c07b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger * this_ptr, CDemonActor * carried_actor, int hand_index, CMatrix3x4f * output_matrix)
    ADD ESP,0xc                         ; 005c070b
    LEA EAX,[EBX + 0x30]                ; 005c070e
    LEA EDI,[ESP + 0x64]                ; 005c0711
    PUSH EAX                            ; 005c0715
    LEA EAX,[EBX + 0x20]                ; 005c0716
    MOV ECX,0xc                         ; 005c0719
    PUSH EAX                            ; 005c071e
    LEA EAX,[ESP + 0x9c]                ; 005c071f
    LEA ESI,[ESP + 0xc]                 ; 005c0726
    PUSH EAX                            ; 005c072a
    MOVSD.REP ES:EDI,ESI                ; 005c072b
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005c072d
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005c0732
    LEA EAX,[ESP + 0x94]                ; 005c0735
    PUSH EAX                            ; 005c073c
    LEA EAX,[ESP + 0x68]                ; 005c073d
    PUSH EAX                            ; 005c0741
    LEA ESI,[ESP + 0xcc]                ; 005c0742
    LEA EDI,[ESP + 0x3c]                ; 005c0749
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005c074d
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005c0752
    ADD ESP,0x8                         ; 005c0757
    LEA EAX,[ESP + 0xf4]                ; 005c075a
    LEA ESI,[ESP + 0xc4]                ; 005c0761
    PUSH EAX                            ; 005c0768
    MOVSD.REP ES:EDI,ESI                ; 005c0769
    LEA EAX,[ESP + 0x38]                ; 005c076b
    MOV EBX,dword ptr [EBX + 0x1fc2c]   ; 005c076f
    PUSH EAX                            ; 005c0775
    MOV ESI,dword ptr [EBX + 0x154]     ; 005c0776
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005c077c
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005c0781
    PUSH EAX                            ; 005c0784
    LEA EAX,[ESP + 0x104]               ; 005c0785
    PUSH EAX                            ; 005c078c
    LEA EAX,[ESP + 0x3c]                ; 005c078d
    PUSH EAX                            ; 005c0791
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005c0792
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005c0797
    PUSH EAX                            ; 005c079a
    PUSH EBX                            ; 005c079b
    CALL dword ptr [ESI + 0x60]         ; 005c079c
    ADD ESP,0xc                         ; 005c079f
    POP ESI                             ; 005c07a2
    ADD ESP,0x108                       ; 005c07a3
        ;   Label: LAB_005c07a3
    POP EBP                             ; 005c07a9
    POP EDI                             ; 005c07aa
    POP EBX                             ; 005c07ab
    RET                                 ; 005c07ac

