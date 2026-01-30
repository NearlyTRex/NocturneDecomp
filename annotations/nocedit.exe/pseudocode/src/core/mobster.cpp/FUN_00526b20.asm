; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mobster_cpp_FUN_00526b20(void)
;
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xa8]:1  local_a8
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; Referenced Globals:
;   undefined4 g_CElephantGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526b20
        ;   Label: core_mobster.cpp_FUN_00526b20
    PUSH EDI                            ; 00526b21
    PUSH EBP                            ; 00526b22
    SUB ESP,0xcc                        ; 00526b23
    MOV ECX,dword ptr [ESP + 0xe0]      ; 00526b29
    MOV EBX,ESI                         ; 00526b30
    MOV EAX,ECX                         ; 00526b32
    SHL EAX,0x4                         ; 00526b34
    ADD EAX,ECX                         ; 00526b37
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00526b39
    SHL EAX,0x2                         ; 00526b40
    ADD EAX,EDX                         ; 00526b43
    MOV EDX,dword ptr [EAX + 0x24b4]    ; 00526b45
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 00526b4b
    CMP ECX,0x1                         ; 00526b51
    JZ 0x00526c41                       ; 00526b54
        ;   XREF to: 00526c41 (CONDITIONAL_JUMP)  ; LAB_00526c41
    MOV EDI,0xbe0f5c29                  ; 00526b5a
    MOV EBP,0xbe333333                  ; 00526b5f
    MOV ECX,0xbe7df3b6                  ; 00526b64
    LEA EAX,[ESP + 0x9c]                ; 00526b69
    LEA EDX,[ESP + 0x78]                ; 00526b70
    MOV dword ptr [ESP + 0xa0],EDI      ; 00526b74
    MOV dword ptr [ESP + 0xa4],EBP      ; 00526b7b
    MOV dword ptr [ESP + 0x9c],ECX      ; 00526b82
    CMP EDX,EAX                         ; 00526b89
    JNZ 0x00526d78                      ; 00526b8b
        ;   XREF to: 00526d78 (CONDITIONAL_JUMP)  ; LAB_00526d78
    MOV EBP,0xbfdac083                  ; 00526b91
        ;   Label: LAB_00526b91
    MOV EAX,0xbfbbe76d                  ; 00526b96
    MOV EDI,0xbee978d5                  ; 00526b9b
    LEA EDX,[ESP + 0xa8]                ; 00526ba0
    MOV dword ptr [ESP + 0x98],EBP      ; 00526ba7
    MOV dword ptr [ESP + 0x94],EAX      ; 00526bae
    LEA EAX,[ESP + 0x90]                ; 00526bb5
    MOV dword ptr [ESP + 0x90],EDI      ; 00526bbc
    CMP EDX,EAX                         ; 00526bc3
    JZ 0x00526be1                       ; 00526bc5
        ;   XREF to: 00526be1 (CONDITIONAL_JUMP)  ; LAB_00526be1
    MOV ECX,0xbfbbe76d                  ; 00526bc7
    MOV dword ptr [ESP + 0xb0],EBP      ; 00526bcc
        ;   Label: LAB_00526bcc
    MOV dword ptr [ESP + 0xa8],EDI      ; 00526bd3
    MOV dword ptr [ESP + 0xac],ECX      ; 00526bda
    LEA EAX,[ESP + 0xa8]                ; 00526be1
        ;   Label: LAB_00526be1
    PUSH EAX                            ; 00526be8
    LEA EAX,[ESP + 0x7c]                ; 00526be9
    PUSH EAX                            ; 00526bed
    LEA EAX,[ESP + 0x8]                 ; 00526bee
    PUSH EAX                            ; 00526bf2
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00526bf3
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 00526bf8
    ADD ESP,0xc                         ; 00526bff
    SUB EAX,ESI                         ; 00526c02
    MOV EDX,dword ptr [ESP + 0xdc]      ; 00526c04
    SHL EAX,0x4                         ; 00526c0b
    ADD EDX,0xfd8                       ; 00526c0e
    ADD EAX,EDX                         ; 00526c14
    PUSH EAX                            ; 00526c16
    LEA EAX,[ESP + 0x4]                 ; 00526c17
    PUSH EAX                            ; 00526c1b
    LEA ESI,[ESP + 0x38]                ; 00526c1c
    MOV EDI,EBX                         ; 00526c20
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00526c22
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00526c27
    LEA ESI,[ESP + 0x38]                ; 00526c2c
    ADD ESP,0x8                         ; 00526c30
    MOVSD.REP ES:EDI,ESI                ; 00526c33
    MOV EAX,EBX                         ; 00526c35
    ADD ESP,0xcc                        ; 00526c37
    POP EBP                             ; 00526c3d
    POP EDI                             ; 00526c3e
    POP EBX                             ; 00526c3f
    RET                                 ; 00526c40
    MOV EBP,dword ptr [0x02cf2b58]      ; 00526c41 | g_CElephantGunClassInfo.name_hash
        ;   Label: LAB_00526c41
    PUSH EBP                            ; 00526c47
    PUSH EDX                            ; 00526c48
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00526c49
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00526c4e
    TEST EAX,EAX                        ; 00526c51
    JZ 0x00526cdf                       ; 00526c53
        ;   XREF to: 00526cdf (CONDITIONAL_JUMP)  ; LAB_00526cdf
    MOV EDI,0xbdcccccd                  ; 00526c59
    MOV EBP,0x3e9e353f                  ; 00526c5e
    MOV ECX,0x3ec18937                  ; 00526c63
    LEA EAX,[ESP + 0xc0]                ; 00526c68
    LEA EDX,[ESP + 0x78]                ; 00526c6f
    MOV dword ptr [ESP + 0xc4],EDI      ; 00526c73
    MOV dword ptr [ESP + 0xc8],EBP      ; 00526c7a
    MOV dword ptr [ESP + 0xc0],ECX      ; 00526c81
    CMP EDX,EAX                         ; 00526c88
    JZ 0x00526c9b                       ; 00526c8a
        ;   XREF to: 00526c9b (CONDITIONAL_JUMP)  ; LAB_00526c9b
    MOV dword ptr [ESP + 0x7c],EDI      ; 00526c8c
    MOV dword ptr [ESP + 0x80],EBP      ; 00526c90
    MOV dword ptr [ESP + 0x78],ECX      ; 00526c97
    MOV EBP,0x3fbf3b64                  ; 00526c9b
        ;   Label: LAB_00526c9b
    MOV EAX,0x3fcb4396                  ; 00526ca0
    MOV EDI,0xbe810625                  ; 00526ca5
    LEA EDX,[ESP + 0xb4]                ; 00526caa
    MOV dword ptr [ESP + 0xbc],EBP      ; 00526cb1
    MOV dword ptr [ESP + 0xb8],EAX      ; 00526cb8
    LEA EAX,[ESP + 0xa8]                ; 00526cbf
    MOV dword ptr [ESP + 0xb4],EDI      ; 00526cc6
    CMP EAX,EDX                         ; 00526ccd
    JZ 0x00526be1                       ; 00526ccf
        ;   XREF to: 00526be1 (CONDITIONAL_JUMP)  ; LAB_00526be1
    MOV ECX,0x3fcb4396                  ; 00526cd5
    JMP 0x00526bcc                      ; 00526cda
        ;   XREF to: 00526bcc (UNCONDITIONAL_JUMP)  ; LAB_00526bcc
    MOV EAX,0x3e698e54                  ; 00526cdf
        ;   Label: LAB_00526cdf
    MOV EDX,0xbe0d3d86                  ; 00526ce4
    MOV ECX,0xbde5c704                  ; 00526ce9
    MOV dword ptr [ESP + 0x60],EAX      ; 00526cee
    MOV dword ptr [ESP + 0x64],EDX      ; 00526cf2
    LEA EAX,[ESP + 0x60]                ; 00526cf6
    LEA EDX,[ESP + 0x78]                ; 00526cfa
    MOV dword ptr [ESP + 0x68],ECX      ; 00526cfe
    CMP EDX,EAX                         ; 00526d02
    JZ 0x00526d1f                       ; 00526d04
        ;   XREF to: 00526d1f (CONDITIONAL_JUMP)  ; LAB_00526d1f
    MOV EBP,0xbe0d3d86                  ; 00526d06
    MOV EDI,0x3e698e54                  ; 00526d0b
    MOV dword ptr [ESP + 0x80],ECX      ; 00526d10
    MOV dword ptr [ESP + 0x7c],EBP      ; 00526d17
    MOV dword ptr [ESP + 0x78],EDI      ; 00526d1b
    MOV EDX,0xbe8ed8b2                  ; 00526d1f
        ;   Label: LAB_00526d1f
    MOV ECX,0x3fc66a55                  ; 00526d24
    MOV EDI,0x3fcad9be                  ; 00526d29
    LEA EAX,[ESP + 0x84]                ; 00526d2e
    MOV dword ptr [ESP + 0x84],EDX      ; 00526d35
    MOV dword ptr [ESP + 0x8c],ECX      ; 00526d3c
    LEA EDX,[ESP + 0xa8]                ; 00526d43
    MOV dword ptr [ESP + 0x88],EDI      ; 00526d4a
    CMP EDX,EAX                         ; 00526d51
    JZ 0x00526be1                       ; 00526d53
        ;   XREF to: 00526be1 (CONDITIONAL_JUMP)  ; LAB_00526be1
    MOV EBP,0xbe8ed8b2                  ; 00526d59
    MOV dword ptr [ESP + 0xac],EDI      ; 00526d5e
    MOV dword ptr [ESP + 0xb0],ECX      ; 00526d65
    MOV dword ptr [ESP + 0xa8],EBP      ; 00526d6c
    JMP 0x00526be1                      ; 00526d73
        ;   XREF to: 00526be1 (UNCONDITIONAL_JUMP)  ; LAB_00526be1
    MOV dword ptr [ESP + 0x7c],EDI      ; 00526d78
        ;   Label: LAB_00526d78
    MOV dword ptr [ESP + 0x80],EBP      ; 00526d7c
    MOV dword ptr [ESP + 0x78],ECX      ; 00526d83
    JMP 0x00526b91                      ; 00526d87
        ;   XREF to: 00526b91 (UNCONDITIONAL_JUMP)  ; LAB_00526b91

