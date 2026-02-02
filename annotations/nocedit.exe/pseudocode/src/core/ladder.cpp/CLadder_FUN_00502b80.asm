; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_FUN_00502b80(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xe4]:1  local_e4
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_ladder.cpp_CLadder_archive_FUN_005029c0 at 00502a0b
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502b80
        ;   Label: core_ladder.cpp_CLadder_FUN_00502b80
    PUSH ESI                            ; 00502b81
    PUSH EDI                            ; 00502b82
    SUB ESP,0xd8                        ; 00502b83
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00502b89
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00502b90
    JNZ 0x00502ba3                      ; 00502b97
        ;   XREF to: 00502ba3 (CONDITIONAL_JUMP)  ; LAB_00502ba3
    ADD ESP,0xd8                        ; 00502b99
        ;   Label: LAB_00502b99
    POP EDI                             ; 00502b9f
    POP ESI                             ; 00502ba0
    POP EBX                             ; 00502ba1
    RET                                 ; 00502ba2
    LEA EAX,[EBX + 0x30]                ; 00502ba3
        ;   Label: LAB_00502ba3
    PUSH EAX                            ; 00502ba6
    LEA EAX,[EBX + 0x20]                ; 00502ba7
    PUSH EAX                            ; 00502baa
    LEA EAX,[ESP + 0x8]                 ; 00502bab
    PUSH EAX                            ; 00502baf
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00502bb0
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00502bb5
    ADD ESP,0xc                         ; 00502bbb
    LEA EDX,[EAX + 0x30]                ; 00502bbe
    PUSH EDX                            ; 00502bc1
    ADD EAX,0x20                        ; 00502bc2
    PUSH EAX                            ; 00502bc5
    LEA EAX,[ESP + 0x38]                ; 00502bc6
    PUSH EAX                            ; 00502bca
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 00502bcb
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00502bd0
    LEA EAX,[ESP + 0x30]                ; 00502bd3
    PUSH EAX                            ; 00502bd7
    LEA EAX,[ESP + 0x4]                 ; 00502bd8
    PUSH EAX                            ; 00502bdc
    LEA ESI,[ESP + 0x98]                ; 00502bdd
    LEA EDI,[ESP + 0x68]                ; 00502be4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00502be8
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00502bed
    LEA ESI,[ESP + 0x98]                ; 00502bf2
    ADD ESP,0x8                         ; 00502bf9
    MOVSD.REP ES:EDI,ESI                ; 00502bfc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00502bfe
    MOV dword ptr [ESP + 0xc0],EAX      ; 00502c02
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00502c09
    MOV dword ptr [ESP + 0xc4],EAX      ; 00502c0d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00502c14
    LEA EDX,[EBX + 0x2e4]               ; 00502c1b
    MOV dword ptr [ESP + 0xc8],EAX      ; 00502c21
    LEA EAX,[ESP + 0xc0]                ; 00502c28
    CMP EDX,EAX                         ; 00502c2f
    JZ 0x00502c4d                       ; 00502c31
        ;   XREF to: 00502c4d (CONDITIONAL_JUMP)  ; LAB_00502c4d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00502c33
    MOV dword ptr [EDX],EAX             ; 00502c37
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00502c39
    MOV dword ptr [EDX + 0x4],EAX       ; 00502c40
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00502c43
    MOV dword ptr [EDX + 0x8],EAX       ; 00502c4a
    LEA EAX,[ESP + 0xcc]                ; 00502c4d
        ;   Label: LAB_00502c4d
    PUSH EAX                            ; 00502c54
    LEA EAX,[ESP + 0x64]                ; 00502c55
    PUSH EAX                            ; 00502c59
    ADD EBX,0x2f0                       ; 00502c5a
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00502c60
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 00502c65
    CMP EBX,EAX                         ; 00502c68
    JZ 0x00502b99                       ; 00502c6a
        ;   XREF to: 00502b99 (CONDITIONAL_JUMP)  ; LAB_00502b99
    MOV EDX,dword ptr [EAX]             ; 00502c70
    MOV dword ptr [EBX],EDX             ; 00502c72
    MOV EDX,dword ptr [EAX + 0x4]       ; 00502c74
    MOV dword ptr [EBX + 0x4],EDX       ; 00502c77
    MOV EDX,dword ptr [EAX + 0x8]       ; 00502c7a
    MOV dword ptr [EBX + 0x8],EDX       ; 00502c7d
    ADD ESP,0xd8                        ; 00502c80
    POP EDI                             ; 00502c86
    POP ESI                             ; 00502c87
    POP EBX                             ; 00502c88
    RET                                 ; 00502c89

