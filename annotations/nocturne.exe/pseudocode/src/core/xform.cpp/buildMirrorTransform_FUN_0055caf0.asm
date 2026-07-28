; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildMirrorTransform_FUN_0055caf0(float *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildZFlipMatrix_FUN_0055ca90
;   core_xform.cpp_inverse_FUN_0055bd00
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055caf0
        ;   Label: core_xform.cpp_buildMirrorTransform_FUN_0055caf0
    PUSH EDI                            ; 0055caf1
    SUB ESP,0x19c                       ; 0055caf2
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0055caf8
    MOV EBX,ESI                         ; 0055caff
    FLD float ptr [EAX + 0x4]           ; 0055cb01
    FMUL ST0                            ; 0055cb04
    FLD float ptr [EAX]                 ; 0055cb06
    FMUL ST0                            ; 0055cb08
    FADDP                               ; 0055cb0a
    FLD float ptr [EAX + 0x8]           ; 0055cb0c
    FMUL ST0                            ; 0055cb0f
    FADDP                               ; 0055cb11
    FDIVR float ptr [ESP + 0x1ac]       ; 0055cb13
    FLD float ptr [EAX]                 ; 0055cb1a
    FXCH                                ; 0055cb1c
    FSTP float ptr [ESP + 0x198]        ; 0055cb1e
    FMUL float ptr [ESP + 0x198]        ; 0055cb25
    FSTP float ptr [ESP + 0x180]        ; 0055cb2c
    FLD float ptr [EAX + 0x4]           ; 0055cb33
    FMUL float ptr [ESP + 0x198]        ; 0055cb36
    PUSH EAX                            ; 0055cb3d
    FSTP float ptr [ESP + 0x188]        ; 0055cb3e
    FLD float ptr [EAX + 0x8]           ; 0055cb45
    LEA EAX,[ESP + 0x190]               ; 0055cb48
    FMUL float ptr [ESP + 0x19c]        ; 0055cb4f
    PUSH EAX                            ; 0055cb56
    FSTP float ptr [ESP + 0x190]        ; 0055cb57
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0055cb5e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0055cb63
    PUSH EAX                            ; 0055cb66
    LEA EAX,[ESP + 0x184]               ; 0055cb67
    PUSH EAX                            ; 0055cb6e
    LEA EAX,[ESP + 0x128]               ; 0055cb6f
    PUSH EAX                            ; 0055cb76
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 0055cb77
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0055cb7c
    LEA EAX,[ESP + 0x120]               ; 0055cb7f
    PUSH EAX                            ; 0055cb86
    LEA ESI,[ESP + 0x154]               ; 0055cb87
    LEA EDI,[ESP + 0xf4]                ; 0055cb8e
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 0055cb95
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_0055bd00()
    MOV ECX,0xc                         ; 0055cb9a
    ADD ESP,0x4                         ; 0055cb9f
    LEA EAX,[ESP + 0xf0]                ; 0055cba2
    LEA ESI,[ESP + 0x150]               ; 0055cba9
    PUSH EAX                            ; 0055cbb0
    MOVSD.REP ES:EDI,ESI                ; 0055cbb1
    PUSH 0x0                            ; 0055cbb3
    LEA ESI,[ESP + 0x8]                 ; 0055cbb5
    LEA EDI,[ESP + 0x98]                ; 0055cbb9
    CALL core_xform.cpp_buildZFlipMatrix_FUN_0055ca90 ; 0055cbc0
        ;   XREF to: 0055ca90 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildZFlipMatrix_FUN_0055ca90()
    MOV ECX,0xc                         ; 0055cbc5
    ADD ESP,0x4                         ; 0055cbca
    LEA EAX,[ESP + 0x94]                ; 0055cbcd
    LEA ESI,[ESP + 0x4]                 ; 0055cbd4
    PUSH EAX                            ; 0055cbd8
    LEA EAX,[ESP + 0x128]               ; 0055cbd9
    MOVSD.REP ES:EDI,ESI                ; 0055cbe0
    PUSH EAX                            ; 0055cbe2
    LEA ESI,[ESP + 0x3c]                ; 0055cbe3
    LEA EDI,[ESP + 0xcc]                ; 0055cbe7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0055cbee
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0055cbf3
    LEA ESI,[ESP + 0x3c]                ; 0055cbf8
    ADD ESP,0x8                         ; 0055cbfc
    LEA EAX,[ESP + 0xc4]                ; 0055cbff
    MOVSD.REP ES:EDI,ESI                ; 0055cc06
    PUSH EAX                            ; 0055cc08
    LEA ESI,[ESP + 0x68]                ; 0055cc09
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0055cc0d
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV EDI,EBX                         ; 0055cc12
    MOV ECX,0xc                         ; 0055cc14
    LEA ESI,[ESP + 0x68]                ; 0055cc19
    ADD ESP,0x8                         ; 0055cc1d
    MOVSD.REP ES:EDI,ESI                ; 0055cc20
    MOV EAX,EBX                         ; 0055cc22
    ADD ESP,0x19c                       ; 0055cc24
    POP EDI                             ; 0055cc2a
    POP EBX                             ; 0055cc2b
    RET                                 ; 0055cc2c

