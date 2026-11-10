; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_mattnntt_cpp_CMattanntote_getCarryObjToBodyXForm_FUN_00593ae0(CMattanntote *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593ae0
        ;   Label: core_mattnntt.cpp_CMattanntote_getCarryObjToBodyXForm_FUN_00593ae0
    PUSH EDI                            ; 00593ae1
    PUSH EBP                            ; 00593ae2
    SUB ESP,0x9c                        ; 00593ae3
    MOV EBX,ESI                         ; 00593ae9
    MOV ESI,dword ptr [ESP + 0xb0]      ; 00593aeb
    LEA EAX,[ESI*0x8 + 0x0]             ; 00593af2
    MOV EDX,EAX                         ; 00593af9
    SHL EAX,0x4                         ; 00593afb
    SUB EAX,EDX                         ; 00593afe
    ADD EAX,dword ptr [ESP + 0xac]      ; 00593b00
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 00593b07
    CMP ESI,0x1                         ; 00593b0d
    JNZ 0x00593bae                      ; 00593b10
        ;   XREF to: 00593bae (CONDITIONAL_JUMP)  ; LAB_00593bae
    MOV ESI,0xbda77e94                  ; 00593b16
    MOV EDI,0x3ef35569                  ; 00593b1b
    MOV ECX,0xbe51c1d7                  ; 00593b20
    LEA EDX,[ESP + 0x78]                ; 00593b25
    LEA EAX,[ESP + 0x6c]                ; 00593b29
    MOV dword ptr [ESP + 0x7c],ESI      ; 00593b2d
    MOV dword ptr [ESP + 0x80],EDI      ; 00593b31
    MOV dword ptr [ESP + 0x78],ECX      ; 00593b38
    CMP EAX,EDX                         ; 00593b3c
    JZ 0x00593b4c                       ; 00593b3e
        ;   XREF to: 00593b4c (CONDITIONAL_JUMP)  ; LAB_00593b4c
    MOV dword ptr [ESP + 0x70],ESI      ; 00593b40
    MOV dword ptr [ESP + 0x74],EDI      ; 00593b44
    MOV dword ptr [ESP + 0x6c],ECX      ; 00593b48
    MOV EDI,0x3fc5cc10                  ; 00593b4c
        ;   Label: LAB_00593b4c
    MOV ESI,0xbc98ca9c                  ; 00593b51
    MOV EAX,0x3fcf0e2c                  ; 00593b56
    LEA EDX,[ESP + 0x60]                ; 00593b5b
    MOV dword ptr [ESP + 0x98],EDI      ; 00593b5f
    MOV dword ptr [ESP + 0x90],ESI      ; 00593b66
    LEA EDI,[ESP + 0x60]                ; 00593b6d
    LEA ESI,[ESP + 0x90]                ; 00593b71
    MOV dword ptr [ESP + 0x94],EAX      ; 00593b78
    LEA EAX,[ESP + 0x84]                ; 00593b7f
    MOVSD ES:EDI,ESI                    ; 00593b86
    MOVSD ES:EDI,ESI                    ; 00593b87
    MOVSD ES:EDI,ESI                    ; 00593b88
    CMP EAX,EDX                         ; 00593b89
    JZ 0x00593bae                       ; 00593b8b
        ;   XREF to: 00593bae (CONDITIONAL_JUMP)  ; LAB_00593bae
    MOV EAX,dword ptr [ESP + 0x60]      ; 00593b8d
    MOV dword ptr [ESP + 0x84],EAX      ; 00593b91
    MOV EAX,dword ptr [ESP + 0x64]      ; 00593b98
    MOV dword ptr [ESP + 0x88],EAX      ; 00593b9c
    MOV EAX,dword ptr [ESP + 0x68]      ; 00593ba3
    MOV dword ptr [ESP + 0x8c],EAX      ; 00593ba7
    LEA EAX,[ESP + 0x84]                ; 00593bae
        ;   Label: LAB_00593bae
    PUSH EAX                            ; 00593bb5
    LEA EAX,[ESP + 0x70]                ; 00593bb6
    PUSH EAX                            ; 00593bba
    LEA EAX,[ESP + 0x38]                ; 00593bbb
    PUSH EAX                            ; 00593bbf
    CALL core_xform.cpp_FUN_00583940    ; 00593bc0
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 00593bc5
    ADD ESP,0xc                         ; 00593bcc
    SUB EAX,EBP                         ; 00593bcf
    MOV EDX,dword ptr [ESP + 0xac]      ; 00593bd1
    SHL EAX,0x4                         ; 00593bd8
    ADD EDX,0xfd8                       ; 00593bdb
    ADD EAX,EDX                         ; 00593be1
    PUSH EAX                            ; 00593be3
    LEA EAX,[ESP + 0x34]                ; 00593be4
    PUSH EAX                            ; 00593be8
    LEA ESI,[ESP + 0x8]                 ; 00593be9
    MOV EDI,EBX                         ; 00593bed
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00593bef
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 00593bf4
    LEA ESI,[ESP + 0x8]                 ; 00593bf9
    ADD ESP,0x8                         ; 00593bfd
    MOVSD.REP ES:EDI,ESI                ; 00593c00
    MOV EAX,EBX                         ; 00593c02
    ADD ESP,0x9c                        ; 00593c04
    POP EBP                             ; 00593c0a
    POP EDI                             ; 00593c0b
    POP EBX                             ; 00593c0c
    RET                                 ; 00593c0d

