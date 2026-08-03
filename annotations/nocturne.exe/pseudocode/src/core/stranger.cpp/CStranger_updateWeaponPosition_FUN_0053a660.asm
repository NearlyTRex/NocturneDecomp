; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(CStranger *this_ptr,int hand_index)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x18]:1  local_18
;
; XREF[3]:
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0053d100 at 0053d347
;   core_stranger.cpp_FUN_00535900 at 00536325
;   core_stranger.cpp_FUN_0053ffe0 at 00540282
;
; Called Functions:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a660
        ;   Label: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
    PUSH EDI                            ; 0053a661
    PUSH EBP                            ; 0053a662
    SUB ESP,0x108                       ; 0053a663
    MOV EBX,dword ptr [ESP + 0x118]     ; 0053a669
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 0053a670
    TEST EDX,EDX                        ; 0053a676
    JZ 0x0053a753                       ; 0053a678
        ;   XREF to: 0053a753 (CONDITIONAL_JUMP)  ; LAB_0053a753
    CMP EDX,dword ptr [EBX + 0x24ac]    ; 0053a67e
    JZ 0x0053a753                       ; 0053a684
        ;   XREF to: 0053a753 (CONDITIONAL_JUMP)  ; LAB_0053a753
    CMP EDX,dword ptr [EBX + 0x24f0]    ; 0053a68a
    JZ 0x0053a753                       ; 0053a690
        ;   XREF to: 0053a753 (CONDITIONAL_JUMP)  ; LAB_0053a753
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0053a696
    MOV EAX,0x1                         ; 0053a69d
    TEST EDI,EDI                        ; 0053a6a2
    JZ 0x0053a6a8                       ; 0053a6a4
        ;   XREF to: 0053a6a8 (CONDITIONAL_JUMP)  ; LAB_0053a6a8
    XOR EAX,EAX                         ; 0053a6a6
    PUSH ESI                            ; 0053a6a8
        ;   Label: LAB_0053a6a8
    PUSH EAX                            ; 0053a6a9
    MOV EBP,dword ptr [EBX + 0x1fa94]   ; 0053a6aa
    PUSH EBP                            ; 0053a6b0
    PUSH EBX                            ; 0053a6b1
    LEA ESI,[ESP + 0x10]                ; 0053a6b2
    CALL core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 ; 0053a6b6
        ;   XREF to: 0053a760 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760(CStranger * this_ptr, CDemonActor * carried_actor, int hand_index, CMatrix3x4f * output_matrix)
    ADD ESP,0xc                         ; 0053a6bb
    LEA EAX,[EBX + 0x30]                ; 0053a6be
    LEA EDI,[ESP + 0x64]                ; 0053a6c1
    PUSH EAX                            ; 0053a6c5
    LEA EAX,[EBX + 0x20]                ; 0053a6c6
    MOV ECX,0xc                         ; 0053a6c9
    PUSH EAX                            ; 0053a6ce
    LEA EAX,[ESP + 0x9c]                ; 0053a6cf
    LEA ESI,[ESP + 0xc]                 ; 0053a6d6
    PUSH EAX                            ; 0053a6da
    MOVSD.REP ES:EDI,ESI                ; 0053a6db
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0053a6dd
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0053a6e2
    LEA EAX,[ESP + 0x94]                ; 0053a6e5
    PUSH EAX                            ; 0053a6ec
    LEA EAX,[ESP + 0x68]                ; 0053a6ed
    PUSH EAX                            ; 0053a6f1
    LEA ESI,[ESP + 0xcc]                ; 0053a6f2
    LEA EDI,[ESP + 0x3c]                ; 0053a6f9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0053a6fd
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0053a702
    ADD ESP,0x8                         ; 0053a707
    LEA EAX,[ESP + 0xf4]                ; 0053a70a
    LEA ESI,[ESP + 0xc4]                ; 0053a711
    PUSH EAX                            ; 0053a718
    MOVSD.REP ES:EDI,ESI                ; 0053a719
    LEA EAX,[ESP + 0x38]                ; 0053a71b
    MOV EBX,dword ptr [EBX + 0x1fa94]   ; 0053a71f
    PUSH EAX                            ; 0053a725
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0053a726
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0053a72c
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0053a731
    PUSH EAX                            ; 0053a734
    LEA EAX,[ESP + 0x104]               ; 0053a735
    PUSH EAX                            ; 0053a73c
    LEA EAX,[ESP + 0x3c]                ; 0053a73d
    PUSH EAX                            ; 0053a741
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 0053a742
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0053a747
    PUSH EAX                            ; 0053a74a
    PUSH EBX                            ; 0053a74b
    CALL dword ptr [ESI + 0x60]         ; 0053a74c
    ADD ESP,0xc                         ; 0053a74f
    POP ESI                             ; 0053a752
    ADD ESP,0x108                       ; 0053a753
        ;   Label: LAB_0053a753
    POP EBP                             ; 0053a759
    POP EDI                             ; 0053a75a
    POP EBX                             ; 0053a75b
    RET                                 ; 0053a75c

