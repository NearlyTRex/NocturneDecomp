; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 at 00433e8f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5d9b
;   TerminatedCString s_CCharacter_applyLookAt_n_005d5db0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0
;   core_xform.cpp_multiplyQuaternion_FUN_005b77b0
;   core_xform.cpp_quaternionFromAngleX_FUN_005b7af0
;   core_xform.cpp_quaternionFromAngleY_FUN_005b7b30
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433b30
        ;   Label: core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30
    SUB ESP,0x80                        ; 00433b31
    MOV EBX,dword ptr [ESP + 0x88]      ; 00433b37
    FLD float ptr [EBX + 0x2770]        ; 00433b3e
    FLDZ                                ; 00433b44
    FCOMPP                              ; 00433b46
    FNSTSW AX                           ; 00433b48
    SAHF                                ; 00433b4a
    JNC 0x00433c12                      ; 00433b4b
        ;   XREF to: 00433c12 (CONDITIONAL_JUMP)  ; LAB_00433c12
    PUSH EDI                            ; 00433b51
    PUSH ESI                            ; 00433b52
    CMP dword ptr [EBX + 0x2774],0x0    ; 00433b53
    JL 0x00433c1a                       ; 00433b5a
        ;   XREF to: 00433c1a (CONDITIONAL_JUMP)  ; LAB_00433c1a
    PUSH dword ptr [EBX + 0x276c]       ; 00433b60
        ;   Label: LAB_00433b60
    LEA ESI,[ESP + 0x6c]                ; 00433b66
    LEA EDI,[ESP + 0x3c]                ; 00433b6a
    CALL core_xform.cpp_quaternionFromAngleX_FUN_005b7af0 ; 00433b6e
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_005b7af0()
    LEA ESI,[ESP + 0x6c]                ; 00433b73
    ADD ESP,0x4                         ; 00433b77
    MOVSD ES:EDI,ESI                    ; 00433b7a
    MOVSD ES:EDI,ESI                    ; 00433b7b
    MOVSD ES:EDI,ESI                    ; 00433b7c
    MOVSD ES:EDI,ESI                    ; 00433b7d
    LEA ESI,[ESP + 0x38]                ; 00433b7e
    PUSH ESI                            ; 00433b82
    PUSH dword ptr [EBX + 0x2768]       ; 00433b83
    LEA ESI,[ESP + 0x10]                ; 00433b89
    LEA EDI,[ESP + 0x30]                ; 00433b8d
    CALL core_xform.cpp_quaternionFromAngleY_FUN_005b7b30 ; 00433b91
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_005b7b30()
    LEA ESI,[ESP + 0x10]                ; 00433b96
    ADD ESP,0x4                         ; 00433b9a
    MOVSD ES:EDI,ESI                    ; 00433b9d
    MOVSD ES:EDI,ESI                    ; 00433b9e
    MOVSD ES:EDI,ESI                    ; 00433b9f
    MOVSD ES:EDI,ESI                    ; 00433ba0
    LEA ESI,[ESP + 0x2c]                ; 00433ba1
    PUSH ESI                            ; 00433ba5
    LEA ESI,[ESP + 0x60]                ; 00433ba6
    LEA EDI,[ESP + 0x20]                ; 00433baa
    CALL core_xform.cpp_multiplyQuaternion_FUN_005b77b0 ; 00433bae
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_005b77b0()
    LEA ESI,[ESP + 0x60]                ; 00433bb3
    ADD ESP,0x8                         ; 00433bb7
    MOVSD ES:EDI,ESI                    ; 00433bba
    MOVSD ES:EDI,ESI                    ; 00433bbb
    MOVSD ES:EDI,ESI                    ; 00433bbc
    MOVSD ES:EDI,ESI                    ; 00433bbd
    MOV EDI,dword ptr [EBX + 0x2774]    ; 00433bbe
    PUSH EDI                            ; 00433bc4
    LEA ESI,[ESP + 0x1c]                ; 00433bc5
    PUSH dword ptr [EBX + 0x2770]       ; 00433bc9
    PUSH ESI                            ; 00433bcf
    MOV ESI,EDI                         ; 00433bd0
    LEA EAX,[EBX + 0x808]               ; 00433bd2
    SHL ESI,0x4                         ; 00433bd8
    ADD ESI,EAX                         ; 00433bdb
    PUSH ESI                            ; 00433bdd
    LEA ESI,[ESP + 0x88]                ; 00433bde
    LEA EDI,[ESP + 0x58]                ; 00433be5
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 00433be9
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[ESP + 0x88]                ; 00433bee
    ADD ESP,0xc                         ; 00433bf5
    MOVSD ES:EDI,ESI                    ; 00433bf8
    MOVSD ES:EDI,ESI                    ; 00433bf9
    MOVSD ES:EDI,ESI                    ; 00433bfa
    MOVSD ES:EDI,ESI                    ; 00433bfb
    LEA ESI,[ESP + 0x4c]                ; 00433bfc
    PUSH ESI                            ; 00433c00
    ADD EBX,0x158                       ; 00433c01
    PUSH EBX                            ; 00433c07
    CALL core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0 ; 00433c08
        ;   XREF to: 00568cf0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index)
    ADD ESP,0xc                         ; 00433c0d
    POP ESI                             ; 00433c10
    POP EDI                             ; 00433c11
    ADD ESP,0x80                        ; 00433c12
        ;   Label: LAB_00433c12
    POP EBX                             ; 00433c18
    RET                                 ; 00433c19
    PUSH EBX                            ; 00433c1a
        ;   Label: LAB_00433c1a
    MOV ECX,0x5d5d9b                    ; 00433c1b | = "..\\core\\charactr.cpp"
    MOV ESI,0x1036                      ; 00433c20
    PUSH 0x5d5db0                       ; 00433c25 | = "CCharacter::applyLookAt - never set l..."
    MOV dword ptr [0x01d1d400],ECX      ; 00433c2a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00433c30 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00433c36
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00433c3b
    JMP 0x00433b60                      ; 00433c3e
        ;   XREF to: 00433b60 (UNCONDITIONAL_JUMP)  ; LAB_00433b60

