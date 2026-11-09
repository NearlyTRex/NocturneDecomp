; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_FUN_004f3a50(int param_1,int param_2)
;
;
; Called Functions:
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3a50
        ;   Label: core_imp.cpp_FUN_004f3a50
    PUSH EDI                            ; 004f3a51
    PUSH EBP                            ; 004f3a52
    SUB ESP,0xc0                        ; 004f3a53
    MOV EBX,ESI                         ; 004f3a59
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004f3a5b
    LEA EAX,[ESI*0x8 + 0x0]             ; 004f3a62
    MOV EDX,EAX                         ; 004f3a69
    SHL EAX,0x4                         ; 004f3a6b
    SUB EAX,EDX                         ; 004f3a6e
    ADD EAX,dword ptr [ESP + 0xd0]      ; 004f3a70
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 004f3a77
    CMP ESI,0x1                         ; 004f3a7d
    JNZ 0x004f3b9e                      ; 004f3a80
        ;   XREF to: 004f3b9e (CONDITIONAL_JUMP)  ; LAB_004f3b9e
    MOV EDX,0x3e52f1aa                  ; 004f3a86
    MOV ECX,0xbf0147ae                  ; 004f3a8b
    MOV ESI,0x3ec72b02                  ; 004f3a90
    LEA EAX,[ESP + 0xb4]                ; 004f3a95
    MOV dword ptr [ESP + 0x84],EDX      ; 004f3a9c
    MOV dword ptr [ESP + 0x88],ECX      ; 004f3aa3
    LEA EDX,[ESP + 0x84]                ; 004f3aaa
    MOV dword ptr [ESP + 0x8c],ESI      ; 004f3ab1
    CMP EAX,EDX                         ; 004f3ab8
    JZ 0x004f3ad6                       ; 004f3aba
        ;   XREF to: 004f3ad6 (CONDITIONAL_JUMP)  ; LAB_004f3ad6
    MOV EDI,0x3e52f1aa                  ; 004f3abc
    MOV dword ptr [ESP + 0xb8],ECX      ; 004f3ac1
    MOV dword ptr [ESP + 0xbc],ESI      ; 004f3ac8
    MOV dword ptr [ESP + 0xb4],EDI      ; 004f3acf
    MOV ESI,0x3f7e353f                  ; 004f3ad6
        ;   Label: LAB_004f3ad6
    MOV EDI,0x3ee0c49c                  ; 004f3adb
    MOV ECX,0xbf2ed917                  ; 004f3ae0
    LEA EAX,[ESP + 0x90]                ; 004f3ae5
    MOV dword ptr [ESP + 0xb0],ESI      ; 004f3aec
    MOV dword ptr [ESP + 0xac],EDI      ; 004f3af3
    LEA EDI,[ESP + 0x90]                ; 004f3afa
    LEA ESI,[ESP + 0xa8]                ; 004f3b01
    MOV dword ptr [ESP + 0xa8],ECX      ; 004f3b08
    LEA EDX,[ESP + 0x78]                ; 004f3b0f
    MOVSD ES:EDI,ESI                    ; 004f3b13
    MOVSD ES:EDI,ESI                    ; 004f3b14
    MOVSD ES:EDI,ESI                    ; 004f3b15
    CMP EDX,EAX                         ; 004f3b16
    JZ 0x004f3b3e                       ; 004f3b18
        ;   XREF to: 004f3b3e (CONDITIONAL_JUMP)  ; LAB_004f3b3e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004f3b1a
    MOV dword ptr [ESP + 0x78],EAX      ; 004f3b21
    MOV EAX,dword ptr [ESP + 0x94]      ; 004f3b25
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f3b2c
    MOV EAX,dword ptr [ESP + 0x98]      ; 004f3b30
    MOV dword ptr [ESP + 0x80],EAX      ; 004f3b37
        ;   Label: LAB_004f3b37
    LEA EAX,[ESP + 0x78]                ; 004f3b3e
        ;   Label: LAB_004f3b3e
    PUSH EAX                            ; 004f3b42
    LEA EAX,[ESP + 0xb8]                ; 004f3b43
    PUSH EAX                            ; 004f3b4a
    LEA EAX,[ESP + 0x8]                 ; 004f3b4b
    PUSH EAX                            ; 004f3b4f
    CALL core_xform.cpp_FUN_005b5760    ; 004f3b50
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[EBP*0x4 + 0x0]             ; 004f3b55
    ADD ESP,0xc                         ; 004f3b5c
    SUB EAX,EBP                         ; 004f3b5f
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004f3b61
    SHL EAX,0x4                         ; 004f3b68
    ADD EDX,0xfd8                       ; 004f3b6b
    ADD EAX,EDX                         ; 004f3b71
    PUSH EAX                            ; 004f3b73
    LEA EAX,[ESP + 0x4]                 ; 004f3b74
    PUSH EAX                            ; 004f3b78
    LEA ESI,[ESP + 0x38]                ; 004f3b79
    MOV EDI,EBX                         ; 004f3b7d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004f3b7f
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004f3b84
    LEA ESI,[ESP + 0x38]                ; 004f3b89
    ADD ESP,0x8                         ; 004f3b8d
    MOVSD.REP ES:EDI,ESI                ; 004f3b90
    MOV EAX,EBX                         ; 004f3b92
    ADD ESP,0xc0                        ; 004f3b94
    POP EBP                             ; 004f3b9a
    POP EDI                             ; 004f3b9b
    POP EBX                             ; 004f3b9c
    RET                                 ; 004f3b9d
    MOV ESI,0xbf07ae14                  ; 004f3b9e
        ;   Label: LAB_004f3b9e
    MOV EDI,0x3ed1eb85                  ; 004f3ba3
    MOV ECX,0xbed58106                  ; 004f3ba8
    LEA EAX,[ESP + 0x60]                ; 004f3bad
    LEA EDX,[ESP + 0xb4]                ; 004f3bb1
    MOV dword ptr [ESP + 0x64],ESI      ; 004f3bb8
    MOV dword ptr [ESP + 0x68],EDI      ; 004f3bbc
    MOV dword ptr [ESP + 0x60],ECX      ; 004f3bc0
    CMP EDX,EAX                         ; 004f3bc4
    JZ 0x004f3bdd                       ; 004f3bc6
        ;   XREF to: 004f3bdd (CONDITIONAL_JUMP)  ; LAB_004f3bdd
    MOV dword ptr [ESP + 0xb8],ESI      ; 004f3bc8
    MOV dword ptr [ESP + 0xbc],EDI      ; 004f3bcf
    MOV dword ptr [ESP + 0xb4],ECX      ; 004f3bd6
    MOV EDI,0x3f7e353f                  ; 004f3bdd
        ;   Label: LAB_004f3bdd
    MOV ESI,0xbf2ed917                  ; 004f3be2
    MOV EAX,0x3ee0c49c                  ; 004f3be7
    LEA EDX,[ESP + 0x78]                ; 004f3bec
    MOV dword ptr [ESP + 0x74],EDI      ; 004f3bf0
    MOV dword ptr [ESP + 0x6c],ESI      ; 004f3bf4
    LEA EDI,[ESP + 0x9c]                ; 004f3bf8
    LEA ESI,[ESP + 0x6c]                ; 004f3bff
    MOV dword ptr [ESP + 0x70],EAX      ; 004f3c03
    LEA EAX,[ESP + 0x9c]                ; 004f3c07
    MOVSD ES:EDI,ESI                    ; 004f3c0e
    MOVSD ES:EDI,ESI                    ; 004f3c0f
    MOVSD ES:EDI,ESI                    ; 004f3c10
    CMP EDX,EAX                         ; 004f3c11
    JZ 0x004f3b3e                       ; 004f3c13
        ;   XREF to: 004f3b3e (CONDITIONAL_JUMP)  ; LAB_004f3b3e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f3c19
    MOV dword ptr [ESP + 0x78],EAX      ; 004f3c20
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004f3c24
    MOV dword ptr [ESP + 0x7c],EAX      ; 004f3c2b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004f3c2f
    JMP 0x004f3b37                      ; 004f3c36
        ;   XREF to: 004f3b37 (UNCONDITIONAL_JUMP)  ; LAB_004f3b37

