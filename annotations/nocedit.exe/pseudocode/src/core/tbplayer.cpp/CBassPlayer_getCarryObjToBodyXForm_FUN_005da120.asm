; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; CMatrix3x4f      Stack[-0xa8]:48  local_a8
; CMatrix3x4f      Stack[-0x78]:48  local_78
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; CVector3f        Stack[-0x24]:12  local_24
; CVector3f        Stack[-0x18]:12  local_18
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da120
        ;   Label: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120
    PUSH EDI                            ; 005da121
    PUSH EBP                            ; 005da122
    SUB ESP,0x9c                        ; 005da123
    MOV ECX,dword ptr [ESP + 0xb0]      ; 005da129
    MOV EBX,ESI                         ; 005da130
    MOV EAX,ECX                         ; 005da132
    SHL EAX,0x4                         ; 005da134
    ADD EAX,ECX                         ; 005da137
    MOV EDX,dword ptr [ESP + 0xac]      ; 005da139
    SHL EAX,0x2                         ; 005da140
    ADD EAX,EDX                         ; 005da143
    MOV ESI,dword ptr [EAX + 0x24ac]    ; 005da145
    TEST ECX,ECX                        ; 005da14b
    JNZ 0x005da1d9                      ; 005da14d
        ;   XREF to: 005da1d9 (CONDITIONAL_JUMP)  ; LAB_005da1d9
    MOV EDI,0xbfeed917                  ; 005da153
    MOV EBP,0xc08374bc                  ; 005da158
    MOV ECX,0x4006a7f0                  ; 005da15d
    LEA EDX,[ESP + 0x90]                ; 005da162
    LEA EAX,[ESP + 0x6c]                ; 005da169
    MOV dword ptr [ESP + 0x94],EDI      ; 005da16d
    MOV dword ptr [ESP + 0x98],EBP      ; 005da174
    MOV dword ptr [ESP + 0x90],ECX      ; 005da17b
    CMP EAX,EDX                         ; 005da182
    JZ 0x005da192                       ; 005da184
        ;   XREF to: 005da192 (CONDITIONAL_JUMP)  ; LAB_005da192
    MOV dword ptr [ESP + 0x70],EDI      ; 005da186
    MOV dword ptr [ESP + 0x74],EBP      ; 005da18a
    MOV dword ptr [ESP + 0x6c],ECX      ; 005da18e
    MOV EBP,0x3dced917                  ; 005da192
        ;   Label: LAB_005da192
    MOV EAX,0xbef8d4fe                  ; 005da197
    MOV EDI,0x3faf7cee                  ; 005da19c
    LEA EDX,[ESP + 0x78]                ; 005da1a1
    MOV dword ptr [ESP + 0x80],EBP      ; 005da1a5
    MOV dword ptr [ESP + 0x7c],EAX      ; 005da1ac
    LEA EAX,[ESP + 0x84]                ; 005da1b0
    MOV dword ptr [ESP + 0x78],EDI      ; 005da1b7
    CMP EAX,EDX                         ; 005da1bb
    JZ 0x005da1d9                       ; 005da1bd
        ;   XREF to: 005da1d9 (CONDITIONAL_JUMP)  ; LAB_005da1d9
    MOV ECX,0xbef8d4fe                  ; 005da1bf
    MOV dword ptr [ESP + 0x8c],EBP      ; 005da1c4
    MOV dword ptr [ESP + 0x84],EDI      ; 005da1cb
    MOV dword ptr [ESP + 0x88],ECX      ; 005da1d2
    LEA EAX,[ESP + 0x84]                ; 005da1d9
        ;   Label: LAB_005da1d9
    PUSH EAX                            ; 005da1e0
    LEA EAX,[ESP + 0x70]                ; 005da1e1
    PUSH EAX                            ; 005da1e5
    LEA EAX,[ESP + 0x38]                ; 005da1e6
    PUSH EAX                            ; 005da1ea
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005da1eb
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[ESI*0x4 + 0x0]             ; 005da1f0
    ADD ESP,0xc                         ; 005da1f7
    SUB EAX,ESI                         ; 005da1fa
    MOV EDX,dword ptr [ESP + 0xac]      ; 005da1fc
    SHL EAX,0x4                         ; 005da203
    ADD EDX,0xfd8                       ; 005da206
    ADD EAX,EDX                         ; 005da20c
    PUSH EAX                            ; 005da20e
    LEA EAX,[ESP + 0x34]                ; 005da20f
    PUSH EAX                            ; 005da213
    LEA ESI,[ESP + 0x8]                 ; 005da214
    MOV EDI,EBX                         ; 005da218
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005da21a
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005da21f
    LEA ESI,[ESP + 0x8]                 ; 005da224
    ADD ESP,0x8                         ; 005da228
    MOVSD.REP ES:EDI,ESI                ; 005da22b
    MOV EAX,EBX                         ; 005da22d
    ADD ESP,0x9c                        ; 005da22f
    POP EBP                             ; 005da235
    POP EDI                             ; 005da236
    POP EBX                             ; 005da237
    RET                                 ; 005da238

