; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004d7850(CImp *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7850
        ;   Label: core_imp.cpp_CImp_getCarryObjToBodyXForm_FUN_004d7850
    PUSH EDI                            ; 004d7851
    PUSH EBP                            ; 004d7852
    SUB ESP,0xc0                        ; 004d7853
    MOV EBX,ESI                         ; 004d7859
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004d785b
    LEA EAX,[ESI*0x8 + 0x0]             ; 004d7862
    MOV EDX,EAX                         ; 004d7869
    SHL EAX,0x4                         ; 004d786b
    SUB EAX,EDX                         ; 004d786e
    ADD EAX,dword ptr [ESP + 0xd0]      ; 004d7870
    MOV EBP,dword ptr [EAX + 0x2618]    ; 004d7877
    CMP ESI,0x1                         ; 004d787d
    JNZ 0x004d799e                      ; 004d7880
        ;   XREF to: 004d799e (CONDITIONAL_JUMP)  ; LAB_004d799e
    MOV EDX,0x3e52f1aa                  ; 004d7886
    MOV ECX,0xbf0147ae                  ; 004d788b
    MOV ESI,0x3ec72b02                  ; 004d7890
    LEA EAX,[ESP + 0xb4]                ; 004d7895
    MOV dword ptr [ESP + 0x84],EDX      ; 004d789c
    MOV dword ptr [ESP + 0x88],ECX      ; 004d78a3
    LEA EDX,[ESP + 0x84]                ; 004d78aa
    MOV dword ptr [ESP + 0x8c],ESI      ; 004d78b1
    CMP EAX,EDX                         ; 004d78b8
    JZ 0x004d78d6                       ; 004d78ba
        ;   XREF to: 004d78d6 (CONDITIONAL_JUMP)  ; LAB_004d78d6
    MOV EDI,0x3e52f1aa                  ; 004d78bc
    MOV dword ptr [ESP + 0xb8],ECX      ; 004d78c1
    MOV dword ptr [ESP + 0xbc],ESI      ; 004d78c8
    MOV dword ptr [ESP + 0xb4],EDI      ; 004d78cf
    MOV ESI,0x3f7e353f                  ; 004d78d6
        ;   Label: LAB_004d78d6
    MOV EDI,0x3ee0c49c                  ; 004d78db
    MOV ECX,0xbf2ed917                  ; 004d78e0
    LEA EAX,[ESP + 0x90]                ; 004d78e5
    MOV dword ptr [ESP + 0xb0],ESI      ; 004d78ec
    MOV dword ptr [ESP + 0xac],EDI      ; 004d78f3
    LEA EDI,[ESP + 0x90]                ; 004d78fa
    LEA ESI,[ESP + 0xa8]                ; 004d7901
    MOV dword ptr [ESP + 0xa8],ECX      ; 004d7908
    LEA EDX,[ESP + 0x78]                ; 004d790f
    MOVSD ES:EDI,ESI                    ; 004d7913
    MOVSD ES:EDI,ESI                    ; 004d7914
    MOVSD ES:EDI,ESI                    ; 004d7915
    CMP EDX,EAX                         ; 004d7916
    JZ 0x004d793e                       ; 004d7918
        ;   XREF to: 004d793e (CONDITIONAL_JUMP)  ; LAB_004d793e
    MOV EAX,dword ptr [ESP + 0x90]      ; 004d791a
    MOV dword ptr [ESP + 0x78],EAX      ; 004d7921
    MOV EAX,dword ptr [ESP + 0x94]      ; 004d7925
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d792c
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d7930
    MOV dword ptr [ESP + 0x80],EAX      ; 004d7937
        ;   Label: LAB_004d7937
    LEA EAX,[ESP + 0x78]                ; 004d793e
        ;   Label: LAB_004d793e
    PUSH EAX                            ; 004d7942
    LEA EAX,[ESP + 0xb8]                ; 004d7943
    PUSH EAX                            ; 004d794a
    LEA EAX,[ESP + 0x8]                 ; 004d794b
    PUSH EAX                            ; 004d794f
    CALL core_xform.cpp_FUN_00591c10    ; 004d7950
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    LEA EAX,[EBP*0x4 + 0x0]             ; 004d7955
    ADD ESP,0xc                         ; 004d795c
    SUB EAX,EBP                         ; 004d795f
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004d7961
    SHL EAX,0x4                         ; 004d7968
    ADD EDX,0x1134                      ; 004d796b
    ADD EAX,EDX                         ; 004d7971
    PUSH EAX                            ; 004d7973
    LEA EAX,[ESP + 0x4]                 ; 004d7974
    PUSH EAX                            ; 004d7978
    LEA ESI,[ESP + 0x38]                ; 004d7979
    MOV EDI,EBX                         ; 004d797d
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004d797f
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 004d7984
    LEA ESI,[ESP + 0x38]                ; 004d7989
    ADD ESP,0x8                         ; 004d798d
    MOVSD.REP ES:EDI,ESI                ; 004d7990
    MOV EAX,EBX                         ; 004d7992
    ADD ESP,0xc0                        ; 004d7994
    POP EBP                             ; 004d799a
    POP EDI                             ; 004d799b
    POP EBX                             ; 004d799c
    RET                                 ; 004d799d
    MOV ESI,0xbf07ae14                  ; 004d799e
        ;   Label: LAB_004d799e
    MOV EDI,0x3ed1eb85                  ; 004d79a3
    MOV ECX,0xbed58106                  ; 004d79a8
    LEA EAX,[ESP + 0x60]                ; 004d79ad
    LEA EDX,[ESP + 0xb4]                ; 004d79b1
    MOV dword ptr [ESP + 0x64],ESI      ; 004d79b8
    MOV dword ptr [ESP + 0x68],EDI      ; 004d79bc
    MOV dword ptr [ESP + 0x60],ECX      ; 004d79c0
    CMP EDX,EAX                         ; 004d79c4
    JZ 0x004d79dd                       ; 004d79c6
        ;   XREF to: 004d79dd (CONDITIONAL_JUMP)  ; LAB_004d79dd
    MOV dword ptr [ESP + 0xb8],ESI      ; 004d79c8
    MOV dword ptr [ESP + 0xbc],EDI      ; 004d79cf
    MOV dword ptr [ESP + 0xb4],ECX      ; 004d79d6
    MOV EDI,0x3f7e353f                  ; 004d79dd
        ;   Label: LAB_004d79dd
    MOV ESI,0xbf2ed917                  ; 004d79e2
    MOV EAX,0x3ee0c49c                  ; 004d79e7
    LEA EDX,[ESP + 0x78]                ; 004d79ec
    MOV dword ptr [ESP + 0x74],EDI      ; 004d79f0
    MOV dword ptr [ESP + 0x6c],ESI      ; 004d79f4
    LEA EDI,[ESP + 0x9c]                ; 004d79f8
    LEA ESI,[ESP + 0x6c]                ; 004d79ff
    MOV dword ptr [ESP + 0x70],EAX      ; 004d7a03
    LEA EAX,[ESP + 0x9c]                ; 004d7a07
    MOVSD ES:EDI,ESI                    ; 004d7a0e
    MOVSD ES:EDI,ESI                    ; 004d7a0f
    MOVSD ES:EDI,ESI                    ; 004d7a10
    CMP EDX,EAX                         ; 004d7a11
    JZ 0x004d793e                       ; 004d7a13
        ;   XREF to: 004d793e (CONDITIONAL_JUMP)  ; LAB_004d793e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d7a19
    MOV dword ptr [ESP + 0x78],EAX      ; 004d7a20
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004d7a24
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d7a2b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004d7a2f
    JMP 0x004d7937                      ; 004d7a36
        ;   XREF to: 004d7937 (UNCONDITIONAL_JUMP)  ; LAB_004d7937

