; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004d7970(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7970
        ;   Label: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004d7970
    PUSH EDI                            ; 004d7971
    PUSH EBP                            ; 004d7972
    SUB ESP,0xc0                        ; 004d7973
    MOV EBX,ESI                         ; 004d7979
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004d797b
    LEA EAX,[ESI*0x8 + 0x0]             ; 004d7982
    MOV EDX,EAX                         ; 004d7989
    SHL EAX,0x4                         ; 004d798b
    SUB EAX,EDX                         ; 004d798e
    ADD EAX,dword ptr [ESP + 0xd0]      ; 004d7990
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 004d7997
    CMP ESI,0x1                         ; 004d799d
    JNZ 0x004d7abe                      ; 004d79a0
        ;   XREF to: 004d7abe (CONDITIONAL_JUMP)  ; LAB_004d7abe
    MOV EDX,0x3e52f1aa                  ; 004d79a6
    MOV ECX,0xbf0147ae                  ; 004d79ab
    MOV ESI,0x3ec72b02                  ; 004d79b0
    LEA EAX,[ESP + 0xb4]                ; 004d79b5
    MOV dword ptr [ESP + 0x84],EDX      ; 004d79bc
    MOV dword ptr [ESP + 0x88],ECX      ; 004d79c3
    LEA EDX,[ESP + 0x84]                ; 004d79ca
    MOV dword ptr [ESP + 0x8c],ESI      ; 004d79d1
    CMP EAX,EDX                         ; 004d79d8
    JZ 0x004d79f6                       ; 004d79da
        ;   XREF to: 004d79f6 (CONDITIONAL_JUMP)  ; LAB_004d79f6
    MOV EDI,0x3e52f1aa                  ; 004d79dc
    MOV dword ptr [ESP + 0xb8],ECX      ; 004d79e1
    MOV dword ptr [ESP + 0xbc],ESI      ; 004d79e8
    MOV dword ptr [ESP + 0xb4],EDI      ; 004d79ef
    MOV ESI,0x3f7e353f                  ; 004d79f6
        ;   Label: LAB_004d79f6
    MOV EDI,0x3ee0c49c                  ; 004d79fb
    MOV ECX,0xbf2ed917                  ; 004d7a00
    LEA EAX,[ESP + 0x90]                ; 004d7a05
    MOV dword ptr [ESP + 0xb0],ESI      ; 004d7a0c
    MOV dword ptr [ESP + 0xac],EDI      ; 004d7a13
    LEA EDI,[ESP + 0x90]                ; 004d7a1a
    LEA ESI,[ESP + 0xa8]                ; 004d7a21
    MOV dword ptr [ESP + 0xa8],ECX      ; 004d7a28
    LEA EDX,[ESP + 0x78]                ; 004d7a2f
    MOVSD ES:EDI,ESI                    ; 004d7a33
    MOVSD ES:EDI,ESI                    ; 004d7a34
    MOVSD ES:EDI,ESI                    ; 004d7a35
    CMP EDX,EAX                         ; 004d7a36
    JZ 0x004d7a5e                       ; 004d7a38
        ;   XREF to: 004d7a5e (CONDITIONAL_JUMP)  ; LAB_004d7a5e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004d7a3a
    MOV dword ptr [ESP + 0x78],EAX      ; 004d7a41
    MOV EAX,dword ptr [ESP + 0x94]      ; 004d7a45
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d7a4c
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d7a50
    MOV dword ptr [ESP + 0x80],EAX      ; 004d7a57
        ;   Label: LAB_004d7a57
    LEA EAX,[ESP + 0x78]                ; 004d7a5e
        ;   Label: LAB_004d7a5e
    PUSH EAX                            ; 004d7a62
    LEA EAX,[ESP + 0xb8]                ; 004d7a63
    PUSH EAX                            ; 004d7a6a
    LEA EAX,[ESP + 0x8]                 ; 004d7a6b
    PUSH EAX                            ; 004d7a6f
    CALL core_xform.cpp_FUN_00583940    ; 004d7a70
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 004d7a75
    ADD ESP,0xc                         ; 004d7a7c
    SUB EAX,EBP                         ; 004d7a7f
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004d7a81
    SHL EAX,0x4                         ; 004d7a88
    ADD EDX,0xfd8                       ; 004d7a8b
    ADD EAX,EDX                         ; 004d7a91
    PUSH EAX                            ; 004d7a93
    LEA EAX,[ESP + 0x4]                 ; 004d7a94
    PUSH EAX                            ; 004d7a98
    LEA ESI,[ESP + 0x38]                ; 004d7a99
    MOV EDI,EBX                         ; 004d7a9d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004d7a9f
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004d7aa4
    LEA ESI,[ESP + 0x38]                ; 004d7aa9
    ADD ESP,0x8                         ; 004d7aad
    MOVSD.REP ES:EDI,ESI                ; 004d7ab0
    MOV EAX,EBX                         ; 004d7ab2
    ADD ESP,0xc0                        ; 004d7ab4
    POP EBP                             ; 004d7aba
    POP EDI                             ; 004d7abb
    POP EBX                             ; 004d7abc
    RET                                 ; 004d7abd
    MOV ESI,0xbf07ae14                  ; 004d7abe
        ;   Label: LAB_004d7abe
    MOV EDI,0x3ed1eb85                  ; 004d7ac3
    MOV ECX,0xbed58106                  ; 004d7ac8
    LEA EAX,[ESP + 0x60]                ; 004d7acd
    LEA EDX,[ESP + 0xb4]                ; 004d7ad1
    MOV dword ptr [ESP + 0x64],ESI      ; 004d7ad8
    MOV dword ptr [ESP + 0x68],EDI      ; 004d7adc
    MOV dword ptr [ESP + 0x60],ECX      ; 004d7ae0
    CMP EDX,EAX                         ; 004d7ae4
    JZ 0x004d7afd                       ; 004d7ae6
        ;   XREF to: 004d7afd (CONDITIONAL_JUMP)  ; LAB_004d7afd
    MOV dword ptr [ESP + 0xb8],ESI      ; 004d7ae8
    MOV dword ptr [ESP + 0xbc],EDI      ; 004d7aef
    MOV dword ptr [ESP + 0xb4],ECX      ; 004d7af6
    MOV EDI,0x3f7e353f                  ; 004d7afd
        ;   Label: LAB_004d7afd
    MOV ESI,0xbf2ed917                  ; 004d7b02
    MOV EAX,0x3ee0c49c                  ; 004d7b07
    LEA EDX,[ESP + 0x78]                ; 004d7b0c
    MOV dword ptr [ESP + 0x74],EDI      ; 004d7b10
    MOV dword ptr [ESP + 0x6c],ESI      ; 004d7b14
    LEA EDI,[ESP + 0x9c]                ; 004d7b18
    LEA ESI,[ESP + 0x6c]                ; 004d7b1f
    MOV dword ptr [ESP + 0x70],EAX      ; 004d7b23
    LEA EAX,[ESP + 0x9c]                ; 004d7b27
    MOVSD ES:EDI,ESI                    ; 004d7b2e
    MOVSD ES:EDI,ESI                    ; 004d7b2f
    MOVSD ES:EDI,ESI                    ; 004d7b30
    CMP EDX,EAX                         ; 004d7b31
    JZ 0x004d7a5e                       ; 004d7b33
        ;   XREF to: 004d7a5e (CONDITIONAL_JUMP)  ; LAB_004d7a5e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d7b39
    MOV dword ptr [ESP + 0x78],EAX      ; 004d7b40
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004d7b44
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d7b4b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004d7b4f
    JMP 0x004d7a57                      ; 004d7b56
        ;   XREF to: 004d7a57 (UNCONDITIONAL_JUMP)  ; LAB_004d7a57

