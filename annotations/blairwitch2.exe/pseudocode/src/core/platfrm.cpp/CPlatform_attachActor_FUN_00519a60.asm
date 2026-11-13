; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_00519a60(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x40]:1  local_40
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_setup_FUN_00518280 at 005182fa
;   core_script.cpp_CScript_step_FUN_00522350 at 005241e9
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_005e23cc
;   TerminatedCString s_CPlatform_attachActor_to_005e23e0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519a60
        ;   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_00519a60
    PUSH ESI                            ; 00519a61
    PUSH EDI                            ; 00519a62
    PUSH EBP                            ; 00519a63
    SUB ESP,0x90                        ; 00519a64
    MOV ESI,dword ptr [ESP + 0xa4]      ; 00519a6a
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00519a71
    TEST EBX,EBX                        ; 00519a78
    JZ 0x00519a9b                       ; 00519a7a
        ;   XREF to: 00519a9b (CONDITIONAL_JUMP)  ; LAB_00519a9b
    MOV EDI,ESI                         ; 00519a7c
    MOV EDX,dword ptr [ESI + 0x678]     ; 00519a7e
    XOR EAX,EAX                         ; 00519a84
    CMP EBX,EDX                         ; 00519a86
    JZ 0x00519a9b                       ; 00519a88
        ;   XREF to: 00519a9b (CONDITIONAL_JUMP)  ; LAB_00519a9b
    INC EAX                             ; 00519a8a
        ;   Label: LAB_00519a8a
    ADD EDI,0x34                        ; 00519a8b
    CMP EAX,0xa                         ; 00519a8e
    JGE 0x00519aa6                      ; 00519a91
        ;   XREF to: 00519aa6 (CONDITIONAL_JUMP)  ; LAB_00519aa6
    CMP EBX,dword ptr [EDI + 0x678]     ; 00519a93
    JNZ 0x00519a8a                      ; 00519a99
        ;   XREF to: 00519a8a (CONDITIONAL_JUMP)  ; LAB_00519a8a
    ADD ESP,0x90                        ; 00519a9b
        ;   Label: LAB_00519a9b
    POP EBP                             ; 00519aa1
    POP EDI                             ; 00519aa2
    POP ESI                             ; 00519aa3
    POP EBX                             ; 00519aa4
    RET                                 ; 00519aa5
    MOV EDI,ESI                         ; 00519aa6
        ;   Label: LAB_00519aa6
    MOV EBP,dword ptr [ESI + 0x678]     ; 00519aa8
    XOR EAX,EAX                         ; 00519aae
    TEST EBP,EBP                        ; 00519ab0
    JZ 0x00519ac6                       ; 00519ab2
        ;   XREF to: 00519ac6 (CONDITIONAL_JUMP)  ; LAB_00519ac6
    INC EAX                             ; 00519ab4
        ;   Label: LAB_00519ab4
    ADD EDI,0x34                        ; 00519ab5
    CMP EAX,0xa                         ; 00519ab8
    JGE 0x00519b28                      ; 00519abb
        ;   XREF to: 00519b28 (CONDITIONAL_JUMP)  ; LAB_00519b28
    CMP dword ptr [EDI + 0x678],0x0     ; 00519abd
    JNZ 0x00519ab4                      ; 00519ac4
        ;   XREF to: 00519ab4 (CONDITIONAL_JUMP)  ; LAB_00519ab4
    LEA EAX,[EBX + 0x30]                ; 00519ac6
        ;   Label: LAB_00519ac6
    PUSH EAX                            ; 00519ac9
    LEA EAX,[EBX + 0x20]                ; 00519aca
    PUSH EAX                            ; 00519acd
    LEA EAX,[ESP + 0x8]                 ; 00519ace
    PUSH EAX                            ; 00519ad2
    CALL core_xform.cpp_FUN_00591c10    ; 00519ad3
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00519ad8
    LEA EAX,[ESI + 0x30]                ; 00519adb
    PUSH EAX                            ; 00519ade
    ADD ESI,0x20                        ; 00519adf
    PUSH ESI                            ; 00519ae2
    LEA EAX,[ESP + 0x68]                ; 00519ae3
    PUSH EAX                            ; 00519ae7
    CALL core_xform.cpp_FUN_00591ad0    ; 00519ae8
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00519aed
    LEA EAX,[ESP + 0x60]                ; 00519af0
    PUSH EAX                            ; 00519af4
    LEA EAX,[ESP + 0x4]                 ; 00519af5
    PUSH EAX                            ; 00519af9
    LEA ESI,[ESP + 0x38]                ; 00519afa
    MOV dword ptr [EDI + 0x678],EBX     ; 00519afe
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00519b04
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00519b09
    LEA ESI,[ESP + 0x38]                ; 00519b0e
    LEA EDI,[EDI + 0x67c]               ; 00519b12
    ADD ESP,0x8                         ; 00519b18
    MOVSD.REP ES:EDI,ESI                ; 00519b1b
    ADD ESP,0x90                        ; 00519b1d
    POP EBP                             ; 00519b23
    POP EDI                             ; 00519b24
    POP ESI                             ; 00519b25
    POP EBX                             ; 00519b26
    RET                                 ; 00519b27
    MOV ECX,0x5e23cc                    ; 00519b28 | = "..\\core\\platfrm.cpp"
        ;   Label: LAB_00519b28
    MOV EBX,0x3d0                       ; 00519b2d
    PUSH 0x5e23e0                       ; 00519b32 | = "CPlatform::attachActor - too many!"
    MOV dword ptr [0x01d046a0],ECX      ; 00519b37 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00519b3d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00519b43
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00519b48
    ADD ESP,0x90                        ; 00519b4b
    POP EBP                             ; 00519b51
    POP EDI                             ; 00519b52
    POP ESI                             ; 00519b53
    POP EBX                             ; 00519b54
    RET                                 ; 00519b55

