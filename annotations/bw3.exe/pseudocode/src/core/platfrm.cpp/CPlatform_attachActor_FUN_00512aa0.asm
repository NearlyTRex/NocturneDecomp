; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_00512aa0(CPlatform *this_ptr,CDemonActor *actor)
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
;   core_platfrm.cpp_CPlatform_setup_FUN_005112b0 at 0051132a
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b785
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_005cc48f
;   TerminatedCString s_CPlatform_attachActor_to_005cc4a3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512aa0
        ;   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_00512aa0
    PUSH ESI                            ; 00512aa1
    PUSH EDI                            ; 00512aa2
    PUSH EBP                            ; 00512aa3
    SUB ESP,0x90                        ; 00512aa4
    MOV ESI,dword ptr [ESP + 0xa4]      ; 00512aaa
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00512ab1
    TEST EBX,EBX                        ; 00512ab8
    JZ 0x00512adb                       ; 00512aba
        ;   XREF to: 00512adb (CONDITIONAL_JUMP)  ; LAB_00512adb
    MOV EDI,ESI                         ; 00512abc
    MOV EDX,dword ptr [ESI + 0x51c]     ; 00512abe
    XOR EAX,EAX                         ; 00512ac4
    CMP EBX,EDX                         ; 00512ac6
    JZ 0x00512adb                       ; 00512ac8
        ;   XREF to: 00512adb (CONDITIONAL_JUMP)  ; LAB_00512adb
    INC EAX                             ; 00512aca
        ;   Label: LAB_00512aca
    ADD EDI,0x34                        ; 00512acb
    CMP EAX,0xa                         ; 00512ace
    JGE 0x00512ae6                      ; 00512ad1
        ;   XREF to: 00512ae6 (CONDITIONAL_JUMP)  ; LAB_00512ae6
    CMP EBX,dword ptr [EDI + 0x51c]     ; 00512ad3
    JNZ 0x00512aca                      ; 00512ad9
        ;   XREF to: 00512aca (CONDITIONAL_JUMP)  ; LAB_00512aca
    ADD ESP,0x90                        ; 00512adb
        ;   Label: LAB_00512adb
    POP EBP                             ; 00512ae1
    POP EDI                             ; 00512ae2
    POP ESI                             ; 00512ae3
    POP EBX                             ; 00512ae4
    RET                                 ; 00512ae5
    MOV EDI,ESI                         ; 00512ae6
        ;   Label: LAB_00512ae6
    MOV EBP,dword ptr [ESI + 0x51c]     ; 00512ae8
    XOR EAX,EAX                         ; 00512aee
    TEST EBP,EBP                        ; 00512af0
    JZ 0x00512b06                       ; 00512af2
        ;   XREF to: 00512b06 (CONDITIONAL_JUMP)  ; LAB_00512b06
    INC EAX                             ; 00512af4
        ;   Label: LAB_00512af4
    ADD EDI,0x34                        ; 00512af5
    CMP EAX,0xa                         ; 00512af8
    JGE 0x00512b68                      ; 00512afb
        ;   XREF to: 00512b68 (CONDITIONAL_JUMP)  ; LAB_00512b68
    CMP dword ptr [EDI + 0x51c],0x0     ; 00512afd
    JNZ 0x00512af4                      ; 00512b04
        ;   XREF to: 00512af4 (CONDITIONAL_JUMP)  ; LAB_00512af4
    LEA EAX,[EBX + 0x30]                ; 00512b06
        ;   Label: LAB_00512b06
    PUSH EAX                            ; 00512b09
    LEA EAX,[EBX + 0x20]                ; 00512b0a
    PUSH EAX                            ; 00512b0d
    LEA EAX,[ESP + 0x8]                 ; 00512b0e
    PUSH EAX                            ; 00512b12
    CALL core_xform.cpp_FUN_00583940    ; 00512b13
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00512b18
    LEA EAX,[ESI + 0x30]                ; 00512b1b
    PUSH EAX                            ; 00512b1e
    ADD ESI,0x20                        ; 00512b1f
    PUSH ESI                            ; 00512b22
    LEA EAX,[ESP + 0x68]                ; 00512b23
    PUSH EAX                            ; 00512b27
    CALL core_xform.cpp_FUN_00583800    ; 00512b28
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00512b2d
    LEA EAX,[ESP + 0x60]                ; 00512b30
    PUSH EAX                            ; 00512b34
    LEA EAX,[ESP + 0x4]                 ; 00512b35
    PUSH EAX                            ; 00512b39
    LEA ESI,[ESP + 0x38]                ; 00512b3a
    MOV dword ptr [EDI + 0x51c],EBX     ; 00512b3e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00512b44
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00512b49
    LEA ESI,[ESP + 0x38]                ; 00512b4e
    LEA EDI,[EDI + 0x520]               ; 00512b52
    ADD ESP,0x8                         ; 00512b58
    MOVSD.REP ES:EDI,ESI                ; 00512b5b
    ADD ESP,0x90                        ; 00512b5d
    POP EBP                             ; 00512b63
    POP EDI                             ; 00512b64
    POP ESI                             ; 00512b65
    POP EBX                             ; 00512b66
    RET                                 ; 00512b67
    MOV ECX,0x5cc48f                    ; 00512b68 | = "..\\core\\platfrm.cpp"
        ;   Label: LAB_00512b68
    MOV EBX,0x3d0                       ; 00512b6d
    PUSH 0x5cc4a3                       ; 00512b72 | = "CPlatform::attachActor - too many!"
    MOV dword ptr [0x01d71de0],ECX      ; 00512b77 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00512b7d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00512b83
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00512b88
    ADD ESP,0x90                        ; 00512b8b
    POP EBP                             ; 00512b91
    POP EDI                             ; 00512b92
    POP ESI                             ; 00512b93
    POP EBX                             ; 00512b94
    RET                                 ; 00512b95

