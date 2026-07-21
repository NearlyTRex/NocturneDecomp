; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00549cd0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549cd0
        ;   Label: FUN_00549cd0
    PUSH EBP                            ; 00549cd1
    SUB ESP,0xf8                        ; 00549cd2
    MOV EBX,dword ptr [ESP + 0x104]     ; 00549cd8
    MOV EBP,dword ptr [ESP + 0x108]     ; 00549cdf
    PUSH 0x0                            ; 00549ce6
    PUSH EBX                            ; 00549ce8
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0 ; 00549ce9
        ;   XREF to: 00549ef0 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0()
    MOV dword ptr [ESP + 0xfc],EAX      ; 00549cee
    FLD float ptr [ESP + 0xfc]          ; 00549cf5
    LEA EAX,[EBX + 0x150]               ; 00549cfc
    ADD ESP,0x8                         ; 00549d02
    CALL crt_math.c_round_FUN_00563a30  ; 00549d05
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 00549d0a
    FISTP dword ptr [ESP + 0xf8]        ; 00549d0b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00549d12
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 00549d17
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00549d1a
    MOV ECX,EAX                         ; 00549d21
    LEA EAX,[EDX*0x4 + 0x0]             ; 00549d23
    SUB EAX,EDX                         ; 00549d2a
    SHL EAX,0x3                         ; 00549d2c
    MOV EDX,dword ptr [ECX + 0x350]     ; 00549d2f
    ADD EAX,EDX                         ; 00549d35
    MOV EDX,dword ptr [EAX]             ; 00549d37
    LEA ECX,[EAX + 0x4]                 ; 00549d39
    MOV dword ptr [EBP],EDX             ; 00549d3c
    LEA EDX,[EBP + 0x4]                 ; 00549d3f
    MOV ECX,dword ptr [ECX]             ; 00549d42
    MOV dword ptr [EDX],ECX             ; 00549d44
    LEA ECX,[EAX + 0x8]                 ; 00549d46
    MOV ECX,dword ptr [ECX]             ; 00549d49
    MOV dword ptr [EDX + 0x4],ECX       ; 00549d4b
    MOV ECX,dword ptr [EAX + 0xc]       ; 00549d4e
    ADD EAX,0xc                         ; 00549d51
    MOV dword ptr [EDX + 0x8],ECX       ; 00549d54
    LEA ECX,[EAX + 0x4]                 ; 00549d57
    MOV ECX,dword ptr [ECX]             ; 00549d5a
    MOV dword ptr [EDX + 0xc],ECX       ; 00549d5c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00549d5f
    MOV dword ptr [EDX + 0x10],EAX      ; 00549d62
    LEA EAX,[EBX + 0x57c]               ; 00549d65
    PUSH EAX                            ; 00549d6b
    MOV dword ptr [ESP + 0xf4],EAX      ; 00549d6c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00549d73
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV ECX,dword ptr [EAX + 0x110]     ; 00549d78
    ADD ESP,0x4                         ; 00549d7e
    CMP ECX,0x1                         ; 00549d81
    JGE 0x00549d91                      ; 00549d84
        ;   XREF to: 00549d91 (CONDITIONAL_JUMP)  ; LAB_00549d91
    MOV EAX,EBP                         ; 00549d86
    ADD ESP,0xf8                        ; 00549d88
    POP EBP                             ; 00549d8e
    POP EBX                             ; 00549d8f
    RET                                 ; 00549d90
    PUSH EDI                            ; 00549d91
        ;   Label: LAB_00549d91
    PUSH ESI                            ; 00549d92
    LEA EAX,[EBX + 0x570]               ; 00549d93
    PUSH EAX                            ; 00549d99
    PUSH 0x2dd1184                      ; 00549d9a | DAT_02dd1184
    LEA EAX,[ESP + 0xa0]                ; 00549d9f
    PUSH EAX                            ; 00549da6
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00549da7
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 00549dac
    LEA EAX,[EBX + 0x30]                ; 00549daf
    PUSH EAX                            ; 00549db2
    PUSH 0x2dd1184                      ; 00549db3 | DAT_02dd1184
    LEA EAX,[ESP + 0x10]                ; 00549db8
    PUSH EAX                            ; 00549dbc
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 00549dbd
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80()
    ADD ESP,0xc                         ; 00549dc2
    LEA EAX,[ESP + 0x8]                 ; 00549dc5
    PUSH EAX                            ; 00549dc9
    LEA EAX,[ESP + 0x9c]                ; 00549dca
    PUSH EAX                            ; 00549dd1
    LEA ESI,[ESP + 0x70]                ; 00549dd2
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00549dd6
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 00549ddb
    LEA EDI,[ESP + 0x38]                ; 00549dde
    PUSH 0x1                            ; 00549de2
    MOV ECX,0xc                         ; 00549de4
    LEA ESI,[ESP + 0x6c]                ; 00549de9
    PUSH EBX                            ; 00549ded
    MOVSD.REP ES:EDI,ESI                ; 00549dee
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0 ; 00549df0
        ;   XREF to: 00549ef0 (UNCONDITIONAL_CALL)  ; undefined core_turret.cpp_CTurret_getCurFrame_FUN_00549ef0()
    MOV dword ptr [ESP + 0x104],EAX     ; 00549df5
    FLD float ptr [ESP + 0x104]         ; 00549dfc
    ADD ESP,0x8                         ; 00549e03
    MOV EBX,dword ptr [ESP + 0xf8]      ; 00549e06
    CALL crt_math.c_round_FUN_00563a30  ; 00549e0d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EBX                            ; 00549e12
    FISTP dword ptr [ESP + 0x100]       ; 00549e13
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00549e1a
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 00549e1f
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00549e22
    MOV EBX,EAX                         ; 00549e29
    LEA EAX,[EDX*0x4 + 0x0]             ; 00549e2b
    SUB EAX,EDX                         ; 00549e32
    MOV EBX,dword ptr [EBX + 0x350]     ; 00549e34
    SHL EAX,0x3                         ; 00549e3a
    ADD EBX,EAX                         ; 00549e3d
    MOV EAX,dword ptr [EBX]             ; 00549e3f
    MOV dword ptr [ESP + 0xc8],EAX      ; 00549e41
    LEA EAX,[EBX + 0x4]                 ; 00549e48
    MOV EAX,dword ptr [EAX]             ; 00549e4b
    MOV dword ptr [ESP + 0xcc],EAX      ; 00549e4d
    LEA EAX,[EBX + 0x8]                 ; 00549e54
    MOV EAX,dword ptr [EAX]             ; 00549e57
    MOV dword ptr [ESP + 0xd0],EAX      ; 00549e59
    MOV EAX,dword ptr [EBX + 0xc]       ; 00549e60
    ADD EBX,0xc                         ; 00549e63
    MOV dword ptr [ESP + 0xd4],EAX      ; 00549e66
    LEA EAX,[EBX + 0x4]                 ; 00549e6d
    MOV EAX,dword ptr [EAX]             ; 00549e70
    MOV dword ptr [ESP + 0xd8],EAX      ; 00549e72
    LEA EAX,[EBX + 0x8]                 ; 00549e79
    MOV EAX,dword ptr [EAX]             ; 00549e7c
    XOR EBX,EBX                         ; 00549e7e
    MOV dword ptr [ESP + 0xdc],EAX      ; 00549e80
    POP ESI                             ; 00549e87
    POP EDI                             ; 00549e88
    LEA EAX,[ESP + 0x30]                ; 00549e89
        ;   Label: LAB_00549e89
    PUSH EAX                            ; 00549e8d
    PUSH EBX                            ; 00549e8e
    LEA EAX,[ESP + 0xec]                ; 00549e8f
    PUSH EAX                            ; 00549e96
    LEA EAX,[ESP + 0xcc]                ; 00549e97
    PUSH EAX                            ; 00549e9e
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70 ; 00549e9f
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_getCorner_FUN_0041cc70()
    ADD ESP,0xc                         ; 00549ea4
    PUSH EAX                            ; 00549ea7
    LEA EAX,[ESP + 0xe0]                ; 00549ea8
    PUSH EAX                            ; 00549eaf
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00549eb0
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00549eb5
    PUSH EAX                            ; 00549eb8
    PUSH EBP                            ; 00549eb9
    INC EBX                             ; 00549eba
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 00549ebb
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 00549ec0
    CMP EBX,0x8                         ; 00549ec3
    JL 0x00549e89                       ; 00549ec6
        ;   XREF to: 00549e89 (CONDITIONAL_JUMP)  ; LAB_00549e89
    MOV EAX,EBP                         ; 00549ec8
    ADD ESP,0xf8                        ; 00549eca
    POP EBP                             ; 00549ed0
    POP EBX                             ; 00549ed1
    RET                                 ; 00549ed2

