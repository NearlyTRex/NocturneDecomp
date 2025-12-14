; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMatrix3x4f * core_xform.cpp_buildMirrorTransform_FUN_005f7000(CMatrix3x4f * matrix_out, CVector3f * axis_vector, float distance)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; CVector3f *      Stack[0x8]:4   axis_vector
; float            Stack[0xc]:4   distance
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
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7000
        ;   Label: core_xform.cpp_buildMirrorTransform_FUN_005f7000
    PUSH EDI                            ; 005f7001
    SUB ESP,0x19c                       ; 005f7002
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005f7008
    MOV EBX,ESI                         ; 005f700f
    FLD float ptr [EAX + 0x4]           ; 005f7011
    FMUL ST0                            ; 005f7014
    FLD float ptr [EAX]                 ; 005f7016
    FMUL ST0                            ; 005f7018
    FADDP                               ; 005f701a
    FLD float ptr [EAX + 0x8]           ; 005f701c
    FMUL ST0                            ; 005f701f
    FADDP                               ; 005f7021
    FDIVR float ptr [ESP + 0x1ac]       ; 005f7023
    FLD float ptr [EAX]                 ; 005f702a
    FXCH                                ; 005f702c
    FSTP float ptr [ESP + 0x198]        ; 005f702e
    FMUL float ptr [ESP + 0x198]        ; 005f7035
    FSTP float ptr [ESP + 0x180]        ; 005f703c
    FLD float ptr [EAX + 0x4]           ; 005f7043
    FMUL float ptr [ESP + 0x198]        ; 005f7046
    PUSH EAX                            ; 005f704d
    FSTP float ptr [ESP + 0x188]        ; 005f704e
    FLD float ptr [EAX + 0x8]           ; 005f7055
    LEA EAX,[ESP + 0x190]               ; 005f7058
    FMUL float ptr [ESP + 0x19c]        ; 005f705f
    PUSH EAX                            ; 005f7066
    FSTP float ptr [ESP + 0x190]        ; 005f7067
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005f706e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005f7073
    PUSH EAX                            ; 005f7076
    LEA EAX,[ESP + 0x184]               ; 005f7077
    PUSH EAX                            ; 005f707e
    LEA EAX,[ESP + 0x128]               ; 005f707f
    PUSH EAX                            ; 005f7086
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005f7087
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005f708c
    LEA EAX,[ESP + 0x120]               ; 005f708f
    PUSH EAX                            ; 005f7096
    LEA ESI,[ESP + 0x154]               ; 005f7097
    LEA EDI,[ESP + 0xf4]                ; 005f709e
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005f70a5
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * output_matrix, CMatrix3x4f * input_matrix)
    MOV ECX,0xc                         ; 005f70aa
    ADD ESP,0x4                         ; 005f70af
    LEA EAX,[ESP + 0xf0]                ; 005f70b2
    LEA ESI,[ESP + 0x150]               ; 005f70b9
    PUSH EAX                            ; 005f70c0
    MOVSD.REP ES:EDI,ESI                ; 005f70c1
    PUSH 0x0                            ; 005f70c3
    LEA ESI,[ESP + 0x8]                 ; 005f70c5
    LEA EDI,[ESP + 0x98]                ; 005f70c9
    CALL core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0 ; 005f70d0
        ;   XREF to: 005f6fa0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0(CMatrix3x4f * matrix_out, float z_offset)
    MOV ECX,0xc                         ; 005f70d5
    ADD ESP,0x4                         ; 005f70da
    LEA EAX,[ESP + 0x94]                ; 005f70dd
    LEA ESI,[ESP + 0x4]                 ; 005f70e4
    PUSH EAX                            ; 005f70e8
    LEA EAX,[ESP + 0x128]               ; 005f70e9
    MOVSD.REP ES:EDI,ESI                ; 005f70f0
    PUSH EAX                            ; 005f70f2
    LEA ESI,[ESP + 0x3c]                ; 005f70f3
    LEA EDI,[ESP + 0xcc]                ; 005f70f7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005f70fe
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV ECX,0xc                         ; 005f7103
    LEA ESI,[ESP + 0x3c]                ; 005f7108
    ADD ESP,0x8                         ; 005f710c
    LEA EAX,[ESP + 0xc4]                ; 005f710f
    MOVSD.REP ES:EDI,ESI                ; 005f7116
    PUSH EAX                            ; 005f7118
    LEA ESI,[ESP + 0x68]                ; 005f7119
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005f711d
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
    MOV EDI,EBX                         ; 005f7122
    MOV ECX,0xc                         ; 005f7124
    LEA ESI,[ESP + 0x68]                ; 005f7129
    ADD ESP,0x8                         ; 005f712d
    MOVSD.REP ES:EDI,ESI                ; 005f7130
    MOV EAX,EBX                         ; 005f7132
    ADD ESP,0x19c                       ; 005f7134
    POP EDI                             ; 005f713a
    POP EBX                             ; 005f713b
    RET                                 ; 005f713c

