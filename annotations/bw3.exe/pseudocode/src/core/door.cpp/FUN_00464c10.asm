; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_00464c10(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_prye.cpp_FUN_0051c1c0 at 0051c306
;
; Referenced Globals:
;   undefined4 DAT_005deb98
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464c10
        ;   Label: core_door.cpp_FUN_00464c10
    PUSH EDI                            ; 00464c11
    PUSH EBP                            ; 00464c12
    SUB ESP,0x20                        ; 00464c13
    MOV EBP,ESI                         ; 00464c16
    MOV ESI,dword ptr [ESP + 0x30]      ; 00464c18
    LEA EBX,[ESI + 0x158]               ; 00464c1c
    PUSH EBX                            ; 00464c22
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00464c23
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00464c28
    PUSH EBX                            ; 00464c2b
    MOV EDI,dword ptr [EAX + 0x10c]     ; 00464c2c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00464c32
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00464c37
    ADD ESP,0x4                         ; 00464c3d
    DEC EAX                             ; 00464c40
    MOV dword ptr [ESP + 0x1c],EAX      ; 00464c41
    FILD dword ptr [ESP + 0x1c]         ; 00464c45
    FMUL float ptr [ESI + 0x9ac]        ; 00464c49
    PUSH EBX                            ; 00464c4f
    CALL crt_math.c_round_FUN_005a3120  ; 00464c50
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 00464c55
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00464c59
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00464c5e
    MOV EAX,dword ptr [EAX + 0x104]     ; 00464c61
    IMUL EAX,dword ptr [ESP + 0x18]     ; 00464c67
    MOV EBX,dword ptr [ESI + 0xa48]     ; 00464c6c
    ADD EBX,EAX                         ; 00464c72
    LEA EAX,[EBX*0x4 + 0x0]             ; 00464c74
    SUB EAX,EBX                         ; 00464c7b
    SHL EAX,0x2                         ; 00464c7d
    MOV EBX,ESP                         ; 00464c80
    ADD EAX,EDI                         ; 00464c82
    FILD dword ptr [EAX]                ; 00464c84
    FMUL float ptr [0x005deb98]         ; 00464c86 | DAT_005deb98
    FSTP float ptr [EBX]                ; 00464c8c
    FILD dword ptr [EAX + 0x4]          ; 00464c8e
    FMUL float ptr [0x005deb98]         ; 00464c91 | DAT_005deb98
    FSTP float ptr [EBX + 0x4]          ; 00464c97
    FILD dword ptr [EAX + 0x8]          ; 00464c9a
    FMUL float ptr [0x005deb98]         ; 00464c9d | DAT_005deb98
    FSTP float ptr [EBX + 0x8]          ; 00464ca3
    MOV EAX,ESP                         ; 00464ca6
    PUSH EAX                            ; 00464ca8
    PUSH ESI                            ; 00464ca9
    LEA ESI,[ESP + 0x14]                ; 00464caa
    MOV EDI,EBP                         ; 00464cae
    CALL core_actor.cpp_FUN_00408b80    ; 00464cb0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 00464cb5
    ADD ESP,0x8                         ; 00464cb9
    MOVSD ES:EDI,ESI                    ; 00464cbc
    MOVSD ES:EDI,ESI                    ; 00464cbd
    MOVSD ES:EDI,ESI                    ; 00464cbe
    MOV EAX,EBP                         ; 00464cbf
    ADD ESP,0x20                        ; 00464cc1
    POP EBP                             ; 00464cc4
    POP EDI                             ; 00464cc5
    POP EBX                             ; 00464cc6
    RET                                 ; 00464cc7

