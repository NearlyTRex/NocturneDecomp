; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004ab110(int param_1,CVector3f *param_2)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01c78c14
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab110
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004ab110
    PUSH ESI                            ; 004ab111
    PUSH EDI                            ; 004ab112
    PUSH EBP                            ; 004ab113
    MOV EBP,ESP                         ; 004ab114
    SUB ESP,0x6c                        ; 004ab116
    MOV EBX,dword ptr [EBP + 0x18]      ; 004ab119
    MOV EDX,dword ptr [0x01c78c14]      ; 004ab11c | DAT_01c78c14
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ab122
    PUSH EDX                            ; 004ab125
    ADD ESI,0x150                       ; 004ab126
    PUSH ESI                            ; 004ab12c
    LEA ESI,[EBP + -0x3c]               ; 004ab12d
    LEA EDI,[EBP + -0x6c]               ; 004ab130
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 004ab133
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0()
    MOV ECX,0xc                         ; 004ab138
    LEA ESI,[EBP + -0x3c]               ; 004ab13d
    MOVSD.REP ES:EDI,ESI                ; 004ab140
    ADD ESP,0x8                         ; 004ab142
    LEA ESI,[EBP + -0x6c]               ; 004ab145
    PUSH ESI                            ; 004ab148
    MOV dword ptr [EBP + -0x8],0x3f333333 ; 004ab149
    LEA ESI,[EBP + -0xc]                ; 004ab150
    PUSH ESI                            ; 004ab153
    MOV EDI,0x3e99999a                  ; 004ab154
    XOR ECX,ECX                         ; 004ab159
    PUSH EBX                            ; 004ab15b
    MOV dword ptr [EBP + -0xc],ECX      ; 004ab15c
    MOV dword ptr [EBP + -0x4],EDI      ; 004ab15f
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004ab162
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 004ab167
    MOV EAX,EBX                         ; 004ab16a
    MOV ESP,EBP                         ; 004ab16c
    POP EBP                             ; 004ab16e
    POP EDI                             ; 004ab16f
    POP ESI                             ; 004ab170
    POP EBX                             ; 004ab171
    RET                                 ; 004ab172

