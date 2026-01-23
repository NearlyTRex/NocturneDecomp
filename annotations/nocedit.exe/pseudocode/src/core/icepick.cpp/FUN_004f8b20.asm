; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f8b20()
;
; Local Variables:
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_core_icepick_cpp_0062f75b
;   TerminatedCString s_CIcePick_getCarryObjToBo_0062f76f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8b20
        ;   Label: core_icepick.cpp_FUN_004f8b20
    PUSH EDI                            ; 004f8b21
    PUSH EBP                            ; 004f8b22
    SUB ESP,0x9c                        ; 004f8b23
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004f8b29
    MOV EBX,ESI                         ; 004f8b30
    MOV EAX,EDX                         ; 004f8b32
    SHL EAX,0x4                         ; 004f8b34
    ADD EAX,EDX                         ; 004f8b37
    MOV ECX,dword ptr [ESP + 0xac]      ; 004f8b39
    SHL EAX,0x2                         ; 004f8b40
    ADD EAX,ECX                         ; 004f8b43
    MOV EDI,dword ptr [EAX + 0x24ac]    ; 004f8b45
    CMP EDX,0x1                         ; 004f8b4b
    JNZ 0x004f8c48                      ; 004f8b4e
        ;   XREF to: 004f8c48 (CONDITIONAL_JUMP)  ; LAB_004f8c48
    MOV EAX,0x3ee66666                  ; 004f8b54
    MOV EDX,0xbe6a7efa                  ; 004f8b59
    MOV ECX,0xbca3d70a                  ; 004f8b5e
    LEA ESI,[ESP + 0x6c]                ; 004f8b63
    MOV dword ptr [ESP + 0x90],EAX      ; 004f8b67
    MOV dword ptr [ESP + 0x94],EDX      ; 004f8b6e
    LEA EAX,[ESP + 0x90]                ; 004f8b75
    MOV dword ptr [ESP + 0x98],ECX      ; 004f8b7c
    CMP ESI,EAX                         ; 004f8b83
    JNZ 0x004f8c32                      ; 004f8b85
        ;   XREF to: 004f8c32 (CONDITIONAL_JUMP)  ; LAB_004f8c32
    MOV ECX,0x3fb76c8b                  ; 004f8b8b
        ;   Label: LAB_004f8b8b
    MOV ESI,0x3f96872b                  ; 004f8b90
    MOV EDX,0xbec7ae14                  ; 004f8b95
    LEA EAX,[ESP + 0x78]                ; 004f8b9a
    MOV dword ptr [ESP + 0x80],ECX      ; 004f8b9e
    MOV dword ptr [ESP + 0x7c],ESI      ; 004f8ba5
    LEA ESI,[ESP + 0x84]                ; 004f8ba9
    MOV dword ptr [ESP + 0x78],EDX      ; 004f8bb0
    CMP ESI,EAX                         ; 004f8bb4
    JZ 0x004f8bd2                       ; 004f8bb6
        ;   XREF to: 004f8bd2 (CONDITIONAL_JUMP)  ; LAB_004f8bd2
    MOV EAX,0x3f96872b                  ; 004f8bb8
    MOV dword ptr [ESP + 0x8c],ECX      ; 004f8bbd
    MOV dword ptr [ESP + 0x84],EDX      ; 004f8bc4
    MOV dword ptr [ESP + 0x88],EAX      ; 004f8bcb
    LEA EAX,[ESP + 0x84]                ; 004f8bd2
        ;   Label: LAB_004f8bd2
    PUSH EAX                            ; 004f8bd9
    LEA EAX,[ESP + 0x70]                ; 004f8bda
    PUSH EAX                            ; 004f8bde
    LEA EAX,[ESP + 0x38]                ; 004f8bdf
    PUSH EAX                            ; 004f8be3
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004f8be4
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[EDI*0x4 + 0x0]             ; 004f8be9
    ADD ESP,0xc                         ; 004f8bf0
    SUB EAX,EDI                         ; 004f8bf3
    MOV ESI,dword ptr [ESP + 0xac]      ; 004f8bf5
    SHL EAX,0x4                         ; 004f8bfc
    ADD ESI,0xfd8                       ; 004f8bff
    ADD EAX,ESI                         ; 004f8c05
    PUSH EAX                            ; 004f8c07
    LEA EAX,[ESP + 0x34]                ; 004f8c08
    PUSH EAX                            ; 004f8c0c
    LEA ESI,[ESP + 0x8]                 ; 004f8c0d
    MOV EDI,EBX                         ; 004f8c11
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004f8c13
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004f8c18
    LEA ESI,[ESP + 0x8]                 ; 004f8c1d
    ADD ESP,0x8                         ; 004f8c21
    MOVSD.REP ES:EDI,ESI                ; 004f8c24
    MOV EAX,EBX                         ; 004f8c26
    ADD ESP,0x9c                        ; 004f8c28
    POP EBP                             ; 004f8c2e
    POP EDI                             ; 004f8c2f
    POP EBX                             ; 004f8c30
    RET                                 ; 004f8c31
    MOV ESI,0x3ee66666                  ; 004f8c32
        ;   Label: LAB_004f8c32
    MOV dword ptr [ESP + 0x70],EDX      ; 004f8c37
    MOV dword ptr [ESP + 0x74],ECX      ; 004f8c3b
    MOV dword ptr [ESP + 0x6c],ESI      ; 004f8c3f
    JMP 0x004f8b8b                      ; 004f8c43
        ;   XREF to: 004f8b8b (UNCONDITIONAL_JUMP)  ; LAB_004f8b8b
    MOV ESI,0x62f75b                    ; 004f8c48 | = "..\\core\\icepick.cpp"
        ;   Label: LAB_004f8c48
    MOV EBP,0x28a                       ; 004f8c4d
    PUSH 0x62f76f                       ; 004f8c52 | = "CIcePick::getCarryObjToBodyXForm - wr..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004f8c57 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004f8c5d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004f8c63
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004f8c68
    JMP 0x004f8bd2                      ; 004f8c6b
        ;   XREF to: 004f8bd2 (UNCONDITIONAL_JUMP)  ; LAB_004f8bd2

