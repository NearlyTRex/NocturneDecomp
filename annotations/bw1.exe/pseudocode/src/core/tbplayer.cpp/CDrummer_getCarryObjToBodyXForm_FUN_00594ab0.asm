; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_00594ab0(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594ab0
        ;   Label: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00594ab0
    PUSH EDI                            ; 00594ab1
    PUSH EBP                            ; 00594ab2
    SUB ESP,0xc0                        ; 00594ab3
    MOV EBX,ESI                         ; 00594ab9
    MOV ESI,dword ptr [ESP + 0xd4]      ; 00594abb
    LEA EAX,[ESI*0x8 + 0x0]             ; 00594ac2
    MOV EDX,EAX                         ; 00594ac9
    SHL EAX,0x4                         ; 00594acb
    SUB EAX,EDX                         ; 00594ace
    ADD EAX,dword ptr [ESP + 0xd0]      ; 00594ad0
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 00594ad7
    TEST ESI,ESI                        ; 00594add
    JNZ 0x00594bf0                      ; 00594adf
        ;   XREF to: 00594bf0 (CONDITIONAL_JUMP)  ; LAB_00594bf0
    MOV EDX,0x3f228f5c                  ; 00594ae5
    MOV ECX,0xbde353f8                  ; 00594aea
    MOV ESI,0xbe322d0e                  ; 00594aef
    LEA EAX,[ESP + 0xb4]                ; 00594af4
    MOV dword ptr [ESP + 0x84],EDX      ; 00594afb
    MOV dword ptr [ESP + 0x88],ECX      ; 00594b02
    LEA EDX,[ESP + 0x84]                ; 00594b09
    MOV dword ptr [ESP + 0x8c],ESI      ; 00594b10
    CMP EAX,EDX                         ; 00594b17
    JZ 0x00594b35                       ; 00594b19
        ;   XREF to: 00594b35 (CONDITIONAL_JUMP)  ; LAB_00594b35
    MOV EDI,0x3f228f5c                  ; 00594b1b
    MOV dword ptr [ESP + 0xb8],ECX      ; 00594b20
    MOV dword ptr [ESP + 0xbc],ESI      ; 00594b27
    MOV dword ptr [ESP + 0xb4],EDI      ; 00594b2e
    LEA EDI,[ESP + 0x90]                ; 00594b35
        ;   Label: LAB_00594b35
    LEA ESI,[ESP + 0xa8]                ; 00594b3c
    XOR ECX,ECX                         ; 00594b43
    LEA EAX,[ESP + 0x90]                ; 00594b45
    MOV dword ptr [ESP + 0xb0],ECX      ; 00594b4c
    MOV dword ptr [ESP + 0xac],ECX      ; 00594b53
    MOV dword ptr [ESP + 0xa8],ECX      ; 00594b5a
    LEA EDX,[ESP + 0x78]                ; 00594b61
    MOVSD ES:EDI,ESI                    ; 00594b65
    MOVSD ES:EDI,ESI                    ; 00594b66
    MOVSD ES:EDI,ESI                    ; 00594b67
    CMP EDX,EAX                         ; 00594b68
    JZ 0x00594b90                       ; 00594b6a
        ;   XREF to: 00594b90 (CONDITIONAL_JUMP)  ; LAB_00594b90
    MOV EAX,dword ptr [ESP + 0x90]      ; 00594b6c
    MOV dword ptr [ESP + 0x78],EAX      ; 00594b73
    MOV EAX,dword ptr [ESP + 0x94]      ; 00594b77
    MOV dword ptr [ESP + 0x7c],EAX      ; 00594b7e
    MOV EAX,dword ptr [ESP + 0x98]      ; 00594b82
    MOV dword ptr [ESP + 0x80],EAX      ; 00594b89
        ;   Label: LAB_00594b89
    LEA EAX,[ESP + 0x78]                ; 00594b90
        ;   Label: LAB_00594b90
    PUSH EAX                            ; 00594b94
    LEA EAX,[ESP + 0xb8]                ; 00594b95
    PUSH EAX                            ; 00594b9c
    LEA EAX,[ESP + 0x8]                 ; 00594b9d
    PUSH EAX                            ; 00594ba1
    CALL core_xform.cpp_FUN_005b5760    ; 00594ba2
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[EBP*0x4 + 0x0]             ; 00594ba7
    ADD ESP,0xc                         ; 00594bae
    SUB EAX,EBP                         ; 00594bb1
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00594bb3
    SHL EAX,0x4                         ; 00594bba
    ADD EDX,0xfd8                       ; 00594bbd
    ADD EAX,EDX                         ; 00594bc3
    PUSH EAX                            ; 00594bc5
    LEA EAX,[ESP + 0x4]                 ; 00594bc6
    PUSH EAX                            ; 00594bca
    LEA ESI,[ESP + 0x38]                ; 00594bcb
    MOV EDI,EBX                         ; 00594bcf
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00594bd1
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00594bd6
    LEA ESI,[ESP + 0x38]                ; 00594bdb
    ADD ESP,0x8                         ; 00594bdf
    MOVSD.REP ES:EDI,ESI                ; 00594be2
    MOV EAX,EBX                         ; 00594be4
    ADD ESP,0xc0                        ; 00594be6
    POP EBP                             ; 00594bec
    POP EDI                             ; 00594bed
    POP EBX                             ; 00594bee
    RET                                 ; 00594bef
    MOV ESI,0xbde353f8                  ; 00594bf0
        ;   Label: LAB_00594bf0
    MOV EDI,0xbe322d0e                  ; 00594bf5
    MOV ECX,0xbf228f5c                  ; 00594bfa
    LEA EAX,[ESP + 0x60]                ; 00594bff
    LEA EDX,[ESP + 0xb4]                ; 00594c03
    MOV dword ptr [ESP + 0x64],ESI      ; 00594c0a
    MOV dword ptr [ESP + 0x68],EDI      ; 00594c0e
    MOV dword ptr [ESP + 0x60],ECX      ; 00594c12
    CMP EDX,EAX                         ; 00594c16
    JZ 0x00594c2f                       ; 00594c18
        ;   XREF to: 00594c2f (CONDITIONAL_JUMP)  ; LAB_00594c2f
    MOV dword ptr [ESP + 0xb8],ESI      ; 00594c1a
    MOV dword ptr [ESP + 0xbc],EDI      ; 00594c21
    MOV dword ptr [ESP + 0xb4],ECX      ; 00594c28
    XOR ESI,ESI                         ; 00594c2f
        ;   Label: LAB_00594c2f
    LEA EDI,[ESP + 0x9c]                ; 00594c31
    MOV dword ptr [ESP + 0x74],ESI      ; 00594c38
    MOV dword ptr [ESP + 0x70],ESI      ; 00594c3c
    MOV dword ptr [ESP + 0x6c],ESI      ; 00594c40
    LEA ESI,[ESP + 0x6c]                ; 00594c44
    LEA EAX,[ESP + 0x9c]                ; 00594c48
    LEA EDX,[ESP + 0x78]                ; 00594c4f
    MOVSD ES:EDI,ESI                    ; 00594c53
    MOVSD ES:EDI,ESI                    ; 00594c54
    MOVSD ES:EDI,ESI                    ; 00594c55
    CMP EDX,EAX                         ; 00594c56
    JZ 0x00594b90                       ; 00594c58
        ;   XREF to: 00594b90 (CONDITIONAL_JUMP)  ; LAB_00594b90
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00594c5e
    MOV dword ptr [ESP + 0x78],EAX      ; 00594c65
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00594c69
    MOV dword ptr [ESP + 0x7c],EAX      ; 00594c70
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00594c74
    JMP 0x00594b89                      ; 00594c7b
        ;   XREF to: 00594b89 (UNCONDITIONAL_JUMP)  ; LAB_00594b89

