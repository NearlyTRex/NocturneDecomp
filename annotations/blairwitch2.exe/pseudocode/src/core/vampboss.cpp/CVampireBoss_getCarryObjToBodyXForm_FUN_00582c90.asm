; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_00582c90(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582c90
        ;   Label: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_00582c90
    PUSH EDI                            ; 00582c91
    PUSH EBP                            ; 00582c92
    SUB ESP,0x9c                        ; 00582c93
    MOV EBX,ESI                         ; 00582c99
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00582c9b
    SHL EAX,0x3                         ; 00582ca2
    MOV EDX,EAX                         ; 00582ca5
    SHL EAX,0x4                         ; 00582ca7
    MOV ESI,0x3e03126f                  ; 00582caa
    SUB EAX,EDX                         ; 00582caf
    MOV EDX,dword ptr [ESP + 0xac]      ; 00582cb1
    MOV EDI,0x40847ae1                  ; 00582cb8
    ADD EAX,EDX                         ; 00582cbd
    XOR ECX,ECX                         ; 00582cbf
    LEA EDX,[ESP + 0x78]                ; 00582cc1
    MOV EBP,dword ptr [EAX + 0x2618]    ; 00582cc5
    LEA EAX,[ESP + 0x60]                ; 00582ccb
    MOV dword ptr [ESP + 0x60],ECX      ; 00582ccf
    MOV dword ptr [ESP + 0x64],ESI      ; 00582cd3
    MOV dword ptr [ESP + 0x68],EDI      ; 00582cd7
    CMP EDX,EAX                         ; 00582cdb
    JNZ 0x00582d9d                      ; 00582cdd
        ;   XREF to: 00582d9d (CONDITIONAL_JUMP)  ; LAB_00582d9d
    MOV EAX,0x4048f5c3                  ; 00582ce3
        ;   Label: LAB_00582ce3
    LEA EDI,[ESP + 0x84]                ; 00582ce8
    XOR ESI,ESI                         ; 00582cef
    LEA EDX,[ESP + 0x6c]                ; 00582cf1
    MOV dword ptr [ESP + 0x98],ESI      ; 00582cf5
    MOV dword ptr [ESP + 0x90],ESI      ; 00582cfc
    LEA ESI,[ESP + 0x90]                ; 00582d03
    MOV dword ptr [ESP + 0x94],EAX      ; 00582d0a
    LEA EAX,[ESP + 0x84]                ; 00582d11
    MOVSD ES:EDI,ESI                    ; 00582d18
    MOVSD ES:EDI,ESI                    ; 00582d19
    MOVSD ES:EDI,ESI                    ; 00582d1a
    CMP EDX,EAX                         ; 00582d1b
    JZ 0x00582d40                       ; 00582d1d
        ;   XREF to: 00582d40 (CONDITIONAL_JUMP)  ; LAB_00582d40
    MOV EAX,dword ptr [ESP + 0x84]      ; 00582d1f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00582d26
    MOV EAX,dword ptr [ESP + 0x88]      ; 00582d2a
    MOV dword ptr [ESP + 0x70],EAX      ; 00582d31
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00582d35
    MOV dword ptr [ESP + 0x74],EAX      ; 00582d3c
    LEA EAX,[ESP + 0x6c]                ; 00582d40
        ;   Label: LAB_00582d40
    PUSH EAX                            ; 00582d44
    LEA EAX,[ESP + 0x7c]                ; 00582d45
    PUSH EAX                            ; 00582d49
    LEA EAX,[ESP + 0x38]                ; 00582d4a
    PUSH EAX                            ; 00582d4e
    CALL core_xform.cpp_FUN_00591c10    ; 00582d4f
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EAX,[EBP*0x4 + 0x0]             ; 00582d54
    ADD ESP,0xc                         ; 00582d5b
    SUB EAX,EBP                         ; 00582d5e
    MOV EDX,dword ptr [ESP + 0xac]      ; 00582d60
    SHL EAX,0x4                         ; 00582d67
    ADD EDX,0x1134                      ; 00582d6a
    ADD EAX,EDX                         ; 00582d70
    PUSH EAX                            ; 00582d72
    LEA EAX,[ESP + 0x34]                ; 00582d73
    PUSH EAX                            ; 00582d77
    LEA ESI,[ESP + 0x8]                 ; 00582d78
    MOV EDI,EBX                         ; 00582d7c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 00582d7e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00582d83
    LEA ESI,[ESP + 0x8]                 ; 00582d88
    ADD ESP,0x8                         ; 00582d8c
    MOVSD.REP ES:EDI,ESI                ; 00582d8f
    MOV EAX,EBX                         ; 00582d91
    ADD ESP,0x9c                        ; 00582d93
    POP EBP                             ; 00582d99
    POP EDI                             ; 00582d9a
    POP EBX                             ; 00582d9b
    RET                                 ; 00582d9c
    MOV dword ptr [ESP + 0x7c],ESI      ; 00582d9d
        ;   Label: LAB_00582d9d
    MOV dword ptr [ESP + 0x80],EDI      ; 00582da1
    MOV dword ptr [ESP + 0x78],ECX      ; 00582da8
    JMP 0x00582ce3                      ; 00582dac
        ;   XREF to: 00582ce3 (UNCONDITIONAL_JUMP)  ; LAB_00582ce3

