; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_imp.cpp_FUN_004fa920()
;
; Local Variables:
; undefined1       Stack[-0xc0]:1  local_c0
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa920
        ;   Label: core_imp.cpp_FUN_004fa920
    PUSH EDI                            ; 004fa921
    PUSH EBP                            ; 004fa922
    SUB ESP,0xb4                        ; 004fa923
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004fa929
    MOV EBX,ESI                         ; 004fa930
    MOV EAX,ECX                         ; 004fa932
    SHL EAX,0x4                         ; 004fa934
    ADD EAX,ECX                         ; 004fa937
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004fa939
    SHL EAX,0x2                         ; 004fa940
    ADD EAX,EDX                         ; 004fa943
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 004fa945
    CMP ECX,0x1                         ; 004fa94b
    JNZ 0x004faa55                      ; 004fa94e
        ;   XREF to: 004faa55 (CONDITIONAL_JUMP)  ; LAB_004faa55
    MOV EAX,0xbf0147ae                  ; 004fa954
    MOV EDX,0x3ec72b02                  ; 004fa959
    MOV EBP,0x3e52f1aa                  ; 004fa95e
    MOV dword ptr [ESP + 0x64],EAX      ; 004fa963
    MOV dword ptr [ESP + 0x68],EDX      ; 004fa967
    LEA EDX,[ESP + 0x60]                ; 004fa96b
    LEA EAX,[ESP + 0xa8]                ; 004fa96f
    MOV dword ptr [ESP + 0x60],EBP      ; 004fa976
    CMP EAX,EDX                         ; 004fa97a
    JZ 0x004fa99d                       ; 004fa97c
        ;   XREF to: 004fa99d (CONDITIONAL_JUMP)  ; LAB_004fa99d
    MOV EDI,0xbf0147ae                  ; 004fa97e
    MOV dword ptr [ESP + 0xa8],EBP      ; 004fa983
    MOV EBP,0x3ec72b02                  ; 004fa98a
    MOV dword ptr [ESP + 0xac],EDI      ; 004fa98f
    MOV dword ptr [ESP + 0xb0],EBP      ; 004fa996
    MOV EAX,0xbf2ed917                  ; 004fa99d
        ;   Label: LAB_004fa99d
    MOV EDX,0x3f7e353f                  ; 004fa9a2
    MOV ECX,0x3ee0c49c                  ; 004fa9a7
    MOV dword ptr [ESP + 0x90],EAX      ; 004fa9ac
    MOV dword ptr [ESP + 0x98],EDX      ; 004fa9b3
    LEA EAX,[ESP + 0x90]                ; 004fa9ba
    LEA EDX,[ESP + 0x84]                ; 004fa9c1
    MOV dword ptr [ESP + 0x94],ECX      ; 004fa9c8
    CMP EDX,EAX                         ; 004fa9cf
    JZ 0x004fa9f2                       ; 004fa9d1
        ;   XREF to: 004fa9f2 (CONDITIONAL_JUMP)  ; LAB_004fa9f2
    MOV EAX,0x3f7e353f                  ; 004fa9d3
    MOV EDI,0xbf2ed917                  ; 004fa9d8
    MOV dword ptr [ESP + 0x88],ECX      ; 004fa9dd
    MOV dword ptr [ESP + 0x8c],EAX      ; 004fa9e4
    MOV dword ptr [ESP + 0x84],EDI      ; 004fa9eb
    LEA EAX,[ESP + 0x84]                ; 004fa9f2
        ;   Label: LAB_004fa9f2
    PUSH EAX                            ; 004fa9f9
    LEA EAX,[ESP + 0xac]                ; 004fa9fa
    PUSH EAX                            ; 004faa01
    LEA EAX,[ESP + 0x38]                ; 004faa02
    PUSH EAX                            ; 004faa06
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 004faa07
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 004faa0c
    ADD ESP,0xc                         ; 004faa13
    SUB EAX,ESI                         ; 004faa16
    MOV EDX,dword ptr [ESP + 0xc4]      ; 004faa18
    SHL EAX,0x4                         ; 004faa1f
    ADD EDX,0xfd8                       ; 004faa22
    ADD EAX,EDX                         ; 004faa28
    PUSH EAX                            ; 004faa2a
    LEA EAX,[ESP + 0x34]                ; 004faa2b
    PUSH EAX                            ; 004faa2f
    LEA ESI,[ESP + 0x8]                 ; 004faa30
    MOV EDI,EBX                         ; 004faa34
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 004faa36
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004faa3b
    LEA ESI,[ESP + 0x8]                 ; 004faa40
    ADD ESP,0x8                         ; 004faa44
    MOVSD.REP ES:EDI,ESI                ; 004faa47
    MOV EAX,EBX                         ; 004faa49
    ADD ESP,0xb4                        ; 004faa4b
    POP EBP                             ; 004faa51
    POP EDI                             ; 004faa52
    POP EBX                             ; 004faa53
    RET                                 ; 004faa54
    MOV EDI,0xbf07ae14                  ; 004faa55
        ;   Label: LAB_004faa55
    MOV EBP,0x3ed1eb85                  ; 004faa5a
    MOV ECX,0xbed58106                  ; 004faa5f
    LEA EAX,[ESP + 0x9c]                ; 004faa64
    LEA EDX,[ESP + 0xa8]                ; 004faa6b
    MOV dword ptr [ESP + 0xa0],EDI      ; 004faa72
    MOV dword ptr [ESP + 0xa4],EBP      ; 004faa79
    MOV dword ptr [ESP + 0x9c],ECX      ; 004faa80
    CMP EDX,EAX                         ; 004faa87
    JZ 0x004faaa0                       ; 004faa89
        ;   XREF to: 004faaa0 (CONDITIONAL_JUMP)  ; LAB_004faaa0
    MOV dword ptr [ESP + 0xac],EDI      ; 004faa8b
    MOV dword ptr [ESP + 0xb0],EBP      ; 004faa92
    MOV dword ptr [ESP + 0xa8],ECX      ; 004faa99
    MOV EBP,0x3f7e353f                  ; 004faaa0
        ;   Label: LAB_004faaa0
    MOV EAX,0x3ee0c49c                  ; 004faaa5
    MOV EDI,0xbf2ed917                  ; 004faaaa
    LEA EDX,[ESP + 0x84]                ; 004faaaf
    MOV dword ptr [ESP + 0x80],EBP      ; 004faab6
    MOV dword ptr [ESP + 0x7c],EAX      ; 004faabd
    LEA EAX,[ESP + 0x78]                ; 004faac1
    MOV dword ptr [ESP + 0x78],EDI      ; 004faac5
    CMP EDX,EAX                         ; 004faac9
    JZ 0x004fa9f2                       ; 004faacb
        ;   XREF to: 004fa9f2 (CONDITIONAL_JUMP)  ; LAB_004fa9f2
    MOV ECX,0x3ee0c49c                  ; 004faad1
    MOV dword ptr [ESP + 0x8c],EBP      ; 004faad6
    MOV dword ptr [ESP + 0x84],EDI      ; 004faadd
    MOV dword ptr [ESP + 0x88],ECX      ; 004faae4
    JMP 0x004fa9f2                      ; 004faaeb
        ;   XREF to: 004fa9f2 (UNCONDITIONAL_JUMP)  ; LAB_004fa9f2

