; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429b40(CCharacter *this_ptr)
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
;   core_charactr.cpp_FUN_00429e90 at 00429e9f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005cd0de
;   TerminatedCString s_CCharacter_applyLookAt_n_005cd0f3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_FUN_00546650
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429b40
        ;   Label: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40
    SUB ESP,0x80                        ; 00429b41
    MOV EBX,dword ptr [ESP + 0x88]      ; 00429b47
    FLD float ptr [EBX + 0x27dc]        ; 00429b4e
    FLDZ                                ; 00429b54
    FCOMPP                              ; 00429b56
    FNSTSW AX                           ; 00429b58
    SAHF                                ; 00429b5a
    JNC 0x00429c22                      ; 00429b5b
        ;   XREF to: 00429c22 (CONDITIONAL_JUMP)  ; LAB_00429c22
    PUSH EDI                            ; 00429b61
    PUSH ESI                            ; 00429b62
    CMP dword ptr [EBX + 0x27e0],0x0    ; 00429b63
    JL 0x00429c2a                       ; 00429b6a
        ;   XREF to: 00429c2a (CONDITIONAL_JUMP)  ; LAB_00429c2a
    PUSH dword ptr [EBX + 0x27d8]       ; 00429b70
        ;   Label: LAB_00429b70
    LEA ESI,[ESP + 0x6c]                ; 00429b76
    LEA EDI,[ESP + 0x3c]                ; 00429b7a
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00429b7e
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[ESP + 0x6c]                ; 00429b83
    ADD ESP,0x4                         ; 00429b87
    MOVSD ES:EDI,ESI                    ; 00429b8a
    MOVSD ES:EDI,ESI                    ; 00429b8b
    MOVSD ES:EDI,ESI                    ; 00429b8c
    MOVSD ES:EDI,ESI                    ; 00429b8d
    LEA ESI,[ESP + 0x38]                ; 00429b8e
    PUSH ESI                            ; 00429b92
    PUSH dword ptr [EBX + 0x27d4]       ; 00429b93
    LEA ESI,[ESP + 0x10]                ; 00429b99
    LEA EDI,[ESP + 0x30]                ; 00429b9d
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00429ba1
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0x10]                ; 00429ba6
    ADD ESP,0x4                         ; 00429baa
    MOVSD ES:EDI,ESI                    ; 00429bad
    MOVSD ES:EDI,ESI                    ; 00429bae
    MOVSD ES:EDI,ESI                    ; 00429baf
    MOVSD ES:EDI,ESI                    ; 00429bb0
    LEA ESI,[ESP + 0x2c]                ; 00429bb1
    PUSH ESI                            ; 00429bb5
    LEA ESI,[ESP + 0x60]                ; 00429bb6
    LEA EDI,[ESP + 0x20]                ; 00429bba
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00429bbe
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x60]                ; 00429bc3
    ADD ESP,0x8                         ; 00429bc7
    MOVSD ES:EDI,ESI                    ; 00429bca
    MOVSD ES:EDI,ESI                    ; 00429bcb
    MOVSD ES:EDI,ESI                    ; 00429bcc
    MOVSD ES:EDI,ESI                    ; 00429bcd
    MOV EDI,dword ptr [EBX + 0x27e0]    ; 00429bce
    PUSH EDI                            ; 00429bd4
    LEA ESI,[ESP + 0x1c]                ; 00429bd5
    PUSH dword ptr [EBX + 0x27dc]       ; 00429bd9
    PUSH ESI                            ; 00429bdf
    MOV ESI,EDI                         ; 00429be0
    LEA EAX,[EBX + 0x964]               ; 00429be2
    SHL ESI,0x4                         ; 00429be8
    ADD ESI,EAX                         ; 00429beb
    PUSH ESI                            ; 00429bed
    LEA ESI,[ESP + 0x88]                ; 00429bee
    LEA EDI,[ESP + 0x58]                ; 00429bf5
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00429bf9
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0x88]                ; 00429bfe
    ADD ESP,0xc                         ; 00429c05
    MOVSD ES:EDI,ESI                    ; 00429c08
    MOVSD ES:EDI,ESI                    ; 00429c09
    MOVSD ES:EDI,ESI                    ; 00429c0a
    MOVSD ES:EDI,ESI                    ; 00429c0b
    LEA ESI,[ESP + 0x4c]                ; 00429c0c
    PUSH ESI                            ; 00429c10
    ADD EBX,0x2b4                       ; 00429c11
    PUSH EBX                            ; 00429c17
    CALL core_skeleton.cpp_FUN_00546650 ; 00429c18
        ;   XREF to: 00546650 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00546650(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index)
    ADD ESP,0xc                         ; 00429c1d
    POP ESI                             ; 00429c20
    POP EDI                             ; 00429c21
    ADD ESP,0x80                        ; 00429c22
        ;   Label: LAB_00429c22
    POP EBX                             ; 00429c28
    RET                                 ; 00429c29
    PUSH EBX                            ; 00429c2a
        ;   Label: LAB_00429c2a
    MOV ECX,0x5cd0de                    ; 00429c2b | = "..\\core\\charactr.cpp"
    MOV ESI,0x105c                      ; 00429c30
    PUSH 0x5cd0f3                       ; 00429c35 | = "CCharacter::applyLookAt - never set l..."
    MOV dword ptr [0x01d046a0],ECX      ; 00429c3a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00429c40 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00429c46
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00429c4b
    JMP 0x00429b70                      ; 00429c4e
        ;   XREF to: 00429b70 (UNCONDITIONAL_JUMP)  ; LAB_00429b70

