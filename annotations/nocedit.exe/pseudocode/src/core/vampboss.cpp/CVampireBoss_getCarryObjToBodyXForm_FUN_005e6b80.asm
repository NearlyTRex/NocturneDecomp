; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi void __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005e6b80 (CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
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
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e6b80
        ;   Label: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005e6b80
    PUSH EDI                            ; 005e6b81
    PUSH EBP                            ; 005e6b82
    SUB ESP,0x9c                        ; 005e6b83
    MOV EBX,ESI                         ; 005e6b89
    MOV ESI,dword ptr [ESP + 0xb0]      ; 005e6b8b
    MOV EAX,ESI                         ; 005e6b92
    SHL EAX,0x4                         ; 005e6b94
    ADD EAX,ESI                         ; 005e6b97
    MOV EDX,dword ptr [ESP + 0xac]      ; 005e6b99
    SHL EAX,0x2                         ; 005e6ba0
    MOV EBP,0x40847ae1                  ; 005e6ba3
    ADD EAX,EDX                         ; 005e6ba8
    XOR ECX,ECX                         ; 005e6baa
    MOV ESI,0x3e03126f                  ; 005e6bac
    MOV EDI,dword ptr [EAX + 0x24ac]    ; 005e6bb1
    LEA EAX,[ESP + 0x78]                ; 005e6bb7
    MOV dword ptr [ESP + 0x78],ECX      ; 005e6bbb
    MOV dword ptr [ESP + 0x7c],ESI      ; 005e6bbf
    LEA ESI,[ESP + 0x6c]                ; 005e6bc3
    MOV dword ptr [ESP + 0x80],EBP      ; 005e6bc7
    CMP ESI,EAX                         ; 005e6bce
    JNZ 0x005e6c80                      ; 005e6bd0
        ;   XREF to: 005e6c80 (CONDITIONAL_JUMP)  ; LAB_005e6c80
    XOR ESI,ESI                         ; 005e6bd6
        ;   Label: LAB_005e6bd6
    MOV EAX,0x4048f5c3                  ; 005e6bd8
    MOV dword ptr [ESP + 0x98],ESI      ; 005e6bdd
    MOV dword ptr [ESP + 0x90],ESI      ; 005e6be4
    MOV dword ptr [ESP + 0x94],EAX      ; 005e6beb
    LEA ESI,[ESP + 0x90]                ; 005e6bf2
    LEA EAX,[ESP + 0x84]                ; 005e6bf9
    CMP EAX,ESI                         ; 005e6c00
    JZ 0x005e6c20                       ; 005e6c02
        ;   XREF to: 005e6c20 (CONDITIONAL_JUMP)  ; LAB_005e6c20
    MOV ECX,0x4048f5c3                  ; 005e6c04
    XOR EDX,EDX                         ; 005e6c09
    MOV dword ptr [ESP + 0x88],ECX      ; 005e6c0b
    MOV dword ptr [ESP + 0x8c],EDX      ; 005e6c12
    MOV dword ptr [ESP + 0x84],EDX      ; 005e6c19
    LEA EAX,[ESP + 0x84]                ; 005e6c20
        ;   Label: LAB_005e6c20
    PUSH EAX                            ; 005e6c27
    LEA EAX,[ESP + 0x70]                ; 005e6c28
    PUSH EAX                            ; 005e6c2c
    LEA EAX,[ESP + 0x38]                ; 005e6c2d
    PUSH EAX                            ; 005e6c31
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005e6c32
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[EDI*0x4 + 0x0]             ; 005e6c37
    ADD ESP,0xc                         ; 005e6c3e
    SUB EAX,EDI                         ; 005e6c41
    MOV ESI,dword ptr [ESP + 0xac]      ; 005e6c43
    SHL EAX,0x4                         ; 005e6c4a
    ADD ESI,0xfd8                       ; 005e6c4d
    ADD EAX,ESI                         ; 005e6c53
    PUSH EAX                            ; 005e6c55
    LEA EAX,[ESP + 0x34]                ; 005e6c56
    PUSH EAX                            ; 005e6c5a
    LEA ESI,[ESP + 0x8]                 ; 005e6c5b
    MOV EDI,EBX                         ; 005e6c5f
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005e6c61
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005e6c66
    LEA ESI,[ESP + 0x8]                 ; 005e6c6b
    ADD ESP,0x8                         ; 005e6c6f
    MOVSD.REP ES:EDI,ESI                ; 005e6c72
    MOV EAX,EBX                         ; 005e6c74
    ADD ESP,0x9c                        ; 005e6c76
    POP EBP                             ; 005e6c7c
    POP EDI                             ; 005e6c7d
    POP EBX                             ; 005e6c7e
    RET                                 ; 005e6c7f
    MOV EDX,0x3e03126f                  ; 005e6c80
        ;   Label: LAB_005e6c80
    MOV dword ptr [ESP + 0x74],EBP      ; 005e6c85
    MOV dword ptr [ESP + 0x6c],ECX      ; 005e6c89
    MOV dword ptr [ESP + 0x70],EDX      ; 005e6c8d
    JMP 0x005e6bd6                      ; 005e6c91
        ;   XREF to: 005e6bd6 (UNCONDITIONAL_JUMP)  ; LAB_005e6bd6

