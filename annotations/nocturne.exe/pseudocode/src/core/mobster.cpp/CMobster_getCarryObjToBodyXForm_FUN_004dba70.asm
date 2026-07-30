; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
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
;   undefined4 g_CElephantGunActorType_01bcde44.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dba70
        ;   Label: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70
    PUSH EDI                            ; 004dba71
    PUSH EBP                            ; 004dba72
    SUB ESP,0xcc                        ; 004dba73
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004dba79
    MOV EBX,ESI                         ; 004dba80
    MOV EAX,ECX                         ; 004dba82
    SHL EAX,0x4                         ; 004dba84
    ADD EAX,ECX                         ; 004dba87
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004dba89
    SHL EAX,0x2                         ; 004dba90
    ADD EAX,EDX                         ; 004dba93
    MOV EDX,dword ptr [EAX + 0x24ac]    ; 004dba95
    MOV ESI,dword ptr [EAX + 0x24a4]    ; 004dba9b
    CMP ECX,0x1                         ; 004dbaa1
    JZ 0x004dbb91                       ; 004dbaa4
        ;   XREF to: 004dbb91 (CONDITIONAL_JUMP)  ; LAB_004dbb91
    MOV EDI,0xbe0f5c29                  ; 004dbaaa
    MOV EBP,0xbe333333                  ; 004dbaaf
    MOV ECX,0xbe7df3b6                  ; 004dbab4
    LEA EAX,[ESP + 0x9c]                ; 004dbab9
    LEA EDX,[ESP + 0x78]                ; 004dbac0
    MOV dword ptr [ESP + 0xa0],EDI      ; 004dbac4
    MOV dword ptr [ESP + 0xa4],EBP      ; 004dbacb
    MOV dword ptr [ESP + 0x9c],ECX      ; 004dbad2
    CMP EDX,EAX                         ; 004dbad9
    JNZ 0x004dbcc8                      ; 004dbadb
        ;   XREF to: 004dbcc8 (CONDITIONAL_JUMP)  ; LAB_004dbcc8
    MOV EBP,0xbfdac083                  ; 004dbae1
        ;   Label: LAB_004dbae1
    MOV EAX,0xbfbbe76d                  ; 004dbae6
    MOV EDI,0xbee978d5                  ; 004dbaeb
    LEA EDX,[ESP + 0xa8]                ; 004dbaf0
    MOV dword ptr [ESP + 0x98],EBP      ; 004dbaf7
    MOV dword ptr [ESP + 0x94],EAX      ; 004dbafe
    LEA EAX,[ESP + 0x90]                ; 004dbb05
    MOV dword ptr [ESP + 0x90],EDI      ; 004dbb0c
    CMP EDX,EAX                         ; 004dbb13
    JZ 0x004dbb31                       ; 004dbb15
        ;   XREF to: 004dbb31 (CONDITIONAL_JUMP)  ; LAB_004dbb31
    MOV ECX,0xbfbbe76d                  ; 004dbb17
    MOV dword ptr [ESP + 0xb0],EBP      ; 004dbb1c
        ;   Label: LAB_004dbb1c
    MOV dword ptr [ESP + 0xa8],EDI      ; 004dbb23
    MOV dword ptr [ESP + 0xac],ECX      ; 004dbb2a
    LEA EAX,[ESP + 0xa8]                ; 004dbb31
        ;   Label: LAB_004dbb31
    PUSH EAX                            ; 004dbb38
    LEA EAX,[ESP + 0x7c]                ; 004dbb39
    PUSH EAX                            ; 004dbb3d
    LEA EAX,[ESP + 0x8]                 ; 004dbb3e
    PUSH EAX                            ; 004dbb42
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004dbb43
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 004dbb48
    ADD ESP,0xc                         ; 004dbb4f
    SUB EAX,ESI                         ; 004dbb52
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004dbb54
    SHL EAX,0x4                         ; 004dbb5b
    ADD EDX,0xfd0                       ; 004dbb5e
    ADD EAX,EDX                         ; 004dbb64
    PUSH EAX                            ; 004dbb66
    LEA EAX,[ESP + 0x4]                 ; 004dbb67
    PUSH EAX                            ; 004dbb6b
    LEA ESI,[ESP + 0x38]                ; 004dbb6c
    MOV EDI,EBX                         ; 004dbb70
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004dbb72
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004dbb77
    LEA ESI,[ESP + 0x38]                ; 004dbb7c
    ADD ESP,0x8                         ; 004dbb80
    MOVSD.REP ES:EDI,ESI                ; 004dbb83
    MOV EAX,EBX                         ; 004dbb85
    ADD ESP,0xcc                        ; 004dbb87
    POP EBP                             ; 004dbb8d
    POP EDI                             ; 004dbb8e
    POP EBX                             ; 004dbb8f
    RET                                 ; 004dbb90
    MOV EBP,dword ptr [0x01bcde7c]      ; 004dbb91 | g_CElephantGunActorType_01bcde44.name_hash
        ;   Label: LAB_004dbb91
    PUSH EBP                            ; 004dbb97
    PUSH EDX                            ; 004dbb98
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004dbb99
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dbb9e
    TEST EAX,EAX                        ; 004dbba1
    JZ 0x004dbc2f                       ; 004dbba3
        ;   XREF to: 004dbc2f (CONDITIONAL_JUMP)  ; LAB_004dbc2f
    MOV EDI,0xbdcccccd                  ; 004dbba9
    MOV EBP,0x3e9e353f                  ; 004dbbae
    MOV ECX,0x3ec18937                  ; 004dbbb3
    LEA EAX,[ESP + 0xc0]                ; 004dbbb8
    LEA EDX,[ESP + 0x78]                ; 004dbbbf
    MOV dword ptr [ESP + 0xc4],EDI      ; 004dbbc3
    MOV dword ptr [ESP + 0xc8],EBP      ; 004dbbca
    MOV dword ptr [ESP + 0xc0],ECX      ; 004dbbd1
    CMP EDX,EAX                         ; 004dbbd8
    JZ 0x004dbbeb                       ; 004dbbda
        ;   XREF to: 004dbbeb (CONDITIONAL_JUMP)  ; LAB_004dbbeb
    MOV dword ptr [ESP + 0x7c],EDI      ; 004dbbdc
    MOV dword ptr [ESP + 0x80],EBP      ; 004dbbe0
    MOV dword ptr [ESP + 0x78],ECX      ; 004dbbe7
    MOV EBP,0x3fbf3b64                  ; 004dbbeb
        ;   Label: LAB_004dbbeb
    MOV EAX,0x3fcb4396                  ; 004dbbf0
    MOV EDI,0xbe810625                  ; 004dbbf5
    LEA EDX,[ESP + 0xb4]                ; 004dbbfa
    MOV dword ptr [ESP + 0xbc],EBP      ; 004dbc01
    MOV dword ptr [ESP + 0xb8],EAX      ; 004dbc08
    LEA EAX,[ESP + 0xa8]                ; 004dbc0f
    MOV dword ptr [ESP + 0xb4],EDI      ; 004dbc16
    CMP EAX,EDX                         ; 004dbc1d
    JZ 0x004dbb31                       ; 004dbc1f
        ;   XREF to: 004dbb31 (CONDITIONAL_JUMP)  ; LAB_004dbb31
    MOV ECX,0x3fcb4396                  ; 004dbc25
    JMP 0x004dbb1c                      ; 004dbc2a
        ;   XREF to: 004dbb1c (UNCONDITIONAL_JUMP)  ; LAB_004dbb1c
    MOV EAX,0x3e698e54                  ; 004dbc2f
        ;   Label: LAB_004dbc2f
    MOV EDX,0xbe0d3d86                  ; 004dbc34
    MOV ECX,0xbde5c704                  ; 004dbc39
    MOV dword ptr [ESP + 0x60],EAX      ; 004dbc3e
    MOV dword ptr [ESP + 0x64],EDX      ; 004dbc42
    LEA EAX,[ESP + 0x60]                ; 004dbc46
    LEA EDX,[ESP + 0x78]                ; 004dbc4a
    MOV dword ptr [ESP + 0x68],ECX      ; 004dbc4e
    CMP EDX,EAX                         ; 004dbc52
    JZ 0x004dbc6f                       ; 004dbc54
        ;   XREF to: 004dbc6f (CONDITIONAL_JUMP)  ; LAB_004dbc6f
    MOV EBP,0xbe0d3d86                  ; 004dbc56
    MOV EDI,0x3e698e54                  ; 004dbc5b
    MOV dword ptr [ESP + 0x80],ECX      ; 004dbc60
    MOV dword ptr [ESP + 0x7c],EBP      ; 004dbc67
    MOV dword ptr [ESP + 0x78],EDI      ; 004dbc6b
    MOV EDX,0xbe8ed8b2                  ; 004dbc6f
        ;   Label: LAB_004dbc6f
    MOV ECX,0x3fc66a55                  ; 004dbc74
    MOV EDI,0x3fcad9be                  ; 004dbc79
    LEA EAX,[ESP + 0x84]                ; 004dbc7e
    MOV dword ptr [ESP + 0x84],EDX      ; 004dbc85
    MOV dword ptr [ESP + 0x8c],ECX      ; 004dbc8c
    LEA EDX,[ESP + 0xa8]                ; 004dbc93
    MOV dword ptr [ESP + 0x88],EDI      ; 004dbc9a
    CMP EDX,EAX                         ; 004dbca1
    JZ 0x004dbb31                       ; 004dbca3
        ;   XREF to: 004dbb31 (CONDITIONAL_JUMP)  ; LAB_004dbb31
    MOV EBP,0xbe8ed8b2                  ; 004dbca9
    MOV dword ptr [ESP + 0xac],EDI      ; 004dbcae
    MOV dword ptr [ESP + 0xb0],ECX      ; 004dbcb5
    MOV dword ptr [ESP + 0xa8],EBP      ; 004dbcbc
    JMP 0x004dbb31                      ; 004dbcc3
        ;   XREF to: 004dbb31 (UNCONDITIONAL_JUMP)  ; LAB_004dbb31
    MOV dword ptr [ESP + 0x7c],EDI      ; 004dbcc8
        ;   Label: LAB_004dbcc8
    MOV dword ptr [ESP + 0x80],EBP      ; 004dbccc
    MOV dword ptr [ESP + 0x78],ECX      ; 004dbcd3
    JMP 0x004dbae1                      ; 004dbcd7
        ;   XREF to: 004dbae1 (UNCONDITIONAL_JUMP)  ; LAB_004dbae1

