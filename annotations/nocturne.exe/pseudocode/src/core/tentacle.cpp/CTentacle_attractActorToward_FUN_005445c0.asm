; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_005445c0(CTentacle *this_ptr,CCharacter *character)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   character
; Local Variables:
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060
;   core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_lerpMatrix3x4_FUN_0055cc30
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005445c0
        ;   Label: core_tentacle.cpp_CTentacle_attractActorToward_FUN_005445c0
    SUB ESP,0x1c8                       ; 005445c1
    MOV EBX,dword ptr [ESP + 0x1d0]     ; 005445c7
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005445ce
    CMP EAX,dword ptr [EBX + 0xbca4]    ; 005445d5
    JZ 0x005445e7                       ; 005445db
        ;   XREF to: 005445e7 (CONDITIONAL_JUMP)  ; LAB_005445e7
    XOR EAX,EAX                         ; 005445dd
    ADD ESP,0x1c8                       ; 005445df
    POP EBX                             ; 005445e5
    RET                                 ; 005445e6
    PUSH EDI                            ; 005445e7
        ;   Label: LAB_005445e7
    PUSH ESI                            ; 005445e8
    LEA EAX,[EBX + 0xbd64]              ; 005445e9
    PUSH dword ptr [EBX + 0xbd30]       ; 005445ef
    PUSH EAX                            ; 005445f5
    LEA EAX,[EBX + 0xbd34]              ; 005445f6
    PUSH EAX                            ; 005445fc
    LEA ESI,[ESP + 0x14]                ; 005445fd
    CALL core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 ; 00544601
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_lerpMatrix3x4_FUN_0055cc30(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t, CMatrix3x4f * matrix_out)
    ADD ESP,0xc                         ; 00544606
    LEA EAX,[EBX + 0x30]                ; 00544609
    LEA EDI,[ESP + 0x68]                ; 0054460c
    PUSH EAX                            ; 00544610
    LEA EAX,[EBX + 0x20]                ; 00544611
    MOV ECX,0xc                         ; 00544614
    PUSH EAX                            ; 00544619
    LEA EAX,[ESP + 0xa0]                ; 0054461a
    LEA ESI,[ESP + 0x10]                ; 00544621
    PUSH EAX                            ; 00544625
    MOVSD.REP ES:EDI,ESI                ; 00544626
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00544628
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054462d
    LEA EAX,[ESP + 0x98]                ; 00544630
    PUSH EAX                            ; 00544637
    PUSH EBX                            ; 00544638
    LEA ESI,[ESP + 0x190]               ; 00544639
    LEA EDI,[ESP + 0x100]               ; 00544640
    CALL core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760 ; 00544647
        ;   XREF to: 00544760 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_tentacle.cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(CTentacle * this_ptr, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 0054464c
    ADD ESP,0x4                         ; 00544651
    LEA EAX,[ESP + 0xfc]                ; 00544654
    LEA ESI,[ESP + 0x18c]               ; 0054465b
    PUSH EAX                            ; 00544662
    LEA EAX,[ESP + 0x70]                ; 00544663
    MOVSD.REP ES:EDI,ESI                ; 00544667
    PUSH EAX                            ; 00544669
    LEA ESI,[ESP + 0x164]               ; 0054466a
    LEA EDI,[ESP + 0x44]                ; 00544671
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00544675
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054467a
    LEA ESI,[ESP + 0x164]               ; 0054467f
    ADD ESP,0x8                         ; 00544686
    LEA EAX,[ESP + 0x3c]                ; 00544689
    MOVSD.REP ES:EDI,ESI                ; 0054468d
    PUSH EAX                            ; 0054468f
    LEA ESI,[ESP + 0x130]               ; 00544690
    LEA EDI,[ESP + 0xd0]                ; 00544697
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0054469e
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 005446a3
    LEA EAX,[ESP + 0x1c4]               ; 005446a6
    MOV ECX,0xc                         ; 005446ad
    PUSH EAX                            ; 005446b2
    LEA EAX,[ESP + 0xcc]                ; 005446b3
    LEA ESI,[ESP + 0x12c]               ; 005446ba
    PUSH EAX                            ; 005446c1
    MOVSD.REP ES:EDI,ESI                ; 005446c2
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 005446c4
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 005446c9
    FLD float ptr [EAX]                 ; 005446cf
    ADD ESP,0x8                         ; 005446d1
    FSTP float ptr [EDX + 0x20]         ; 005446d4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005446d7
    MOV dword ptr [EDX + 0x24],ECX      ; 005446da
    FLD float ptr [EAX + 0x8]           ; 005446dd
    LEA EAX,[ESP + 0x1b8]               ; 005446e0
    PUSH EAX                            ; 005446e7
    LEA EAX,[ESP + 0xcc]                ; 005446e8
    PUSH EAX                            ; 005446ef
    FSTP float ptr [EDX + 0x28]         ; 005446f0
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 005446f3
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005446f8
    PUSH EAX                            ; 005446fb
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 005446fc
    PUSH ECX                            ; 00544702
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060 ; 00544703
        ;   XREF to: 0042a060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042a060(CCharacter * this_ptr, UOrientationVector * orientation)
    MOV EAX,0x1                         ; 00544708
    ADD ESP,0x8                         ; 0054470d
    POP ESI                             ; 00544710
    POP EDI                             ; 00544711
    ADD ESP,0x1c8                       ; 00544712
    POP EBX                             ; 00544718
    RET                                 ; 00544719

