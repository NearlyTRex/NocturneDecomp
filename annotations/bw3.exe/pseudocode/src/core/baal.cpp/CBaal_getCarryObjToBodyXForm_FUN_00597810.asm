; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_baal_cpp_CBaal_getCarryObjToBodyXForm_FUN_00597810(CBaal *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597810
        ;   Label: core_baal.cpp_CBaal_getCarryObjToBodyXForm_FUN_00597810
    PUSH EDI                            ; 00597811
    PUSH EBP                            ; 00597812
    SUB ESP,0x9c                        ; 00597813
    MOV EBX,ESI                         ; 00597819
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0059781b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00597822
    MOV EDX,EAX                         ; 00597829
    SHL EAX,0x4                         ; 0059782b
    SUB EAX,EDX                         ; 0059782e
    ADD EAX,dword ptr [ESP + 0xac]      ; 00597830
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 00597837
    TEST ESI,ESI                        ; 0059783d
    JNZ 0x005978dd                      ; 0059783f
        ;   XREF to: 005978dd (CONDITIONAL_JUMP)  ; LAB_005978dd
    MOV ESI,0xbdf61e4f                  ; 00597845
    MOV EDI,0xbe57caea                  ; 0059784a
    MOV ECX,0x3ec1cbab                  ; 0059784f
    LEA EDX,[ESP + 0x78]                ; 00597854
    LEA EAX,[ESP + 0x6c]                ; 00597858
    MOV dword ptr [ESP + 0x7c],ESI      ; 0059785c
    MOV dword ptr [ESP + 0x80],EDI      ; 00597860
    MOV dword ptr [ESP + 0x78],ECX      ; 00597867
    CMP EAX,EDX                         ; 0059786b
    JZ 0x0059787b                       ; 0059786d
        ;   XREF to: 0059787b (CONDITIONAL_JUMP)  ; LAB_0059787b
    MOV dword ptr [ESP + 0x70],ESI      ; 0059786f
    MOV dword ptr [ESP + 0x74],EDI      ; 00597873
    MOV dword ptr [ESP + 0x6c],ECX      ; 00597877
    MOV EDI,0xbfcbdfe3                  ; 0059787b
        ;   Label: LAB_0059787b
    MOV ESI,0xbd2a6076                  ; 00597880
    MOV EAX,0xbfbf0f28                  ; 00597885
    LEA EDX,[ESP + 0x60]                ; 0059788a
    MOV dword ptr [ESP + 0x98],EDI      ; 0059788e
    MOV dword ptr [ESP + 0x90],ESI      ; 00597895
    LEA EDI,[ESP + 0x60]                ; 0059789c
    LEA ESI,[ESP + 0x90]                ; 005978a0
    MOV dword ptr [ESP + 0x94],EAX      ; 005978a7
    LEA EAX,[ESP + 0x84]                ; 005978ae
    MOVSD ES:EDI,ESI                    ; 005978b5
    MOVSD ES:EDI,ESI                    ; 005978b6
    MOVSD ES:EDI,ESI                    ; 005978b7
    CMP EAX,EDX                         ; 005978b8
    JZ 0x005978dd                       ; 005978ba
        ;   XREF to: 005978dd (CONDITIONAL_JUMP)  ; LAB_005978dd
    MOV EAX,dword ptr [ESP + 0x60]      ; 005978bc
    MOV dword ptr [ESP + 0x84],EAX      ; 005978c0
    MOV EAX,dword ptr [ESP + 0x64]      ; 005978c7
    MOV dword ptr [ESP + 0x88],EAX      ; 005978cb
    MOV EAX,dword ptr [ESP + 0x68]      ; 005978d2
    MOV dword ptr [ESP + 0x8c],EAX      ; 005978d6
    LEA EAX,[ESP + 0x84]                ; 005978dd
        ;   Label: LAB_005978dd
    PUSH EAX                            ; 005978e4
    LEA EAX,[ESP + 0x70]                ; 005978e5
    PUSH EAX                            ; 005978e9
    LEA EAX,[ESP + 0x38]                ; 005978ea
    PUSH EAX                            ; 005978ee
    CALL core_xform.cpp_FUN_00583940    ; 005978ef
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    LEA EAX,[EBP*0x4 + 0x0]             ; 005978f4
    ADD ESP,0xc                         ; 005978fb
    SUB EAX,EBP                         ; 005978fe
    MOV EDX,dword ptr [ESP + 0xac]      ; 00597900
    SHL EAX,0x4                         ; 00597907
    ADD EDX,0xfd8                       ; 0059790a
    ADD EAX,EDX                         ; 00597910
    PUSH EAX                            ; 00597912
    LEA EAX,[ESP + 0x34]                ; 00597913
    PUSH EAX                            ; 00597917
    LEA ESI,[ESP + 0x8]                 ; 00597918
    MOV EDI,EBX                         ; 0059791c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0059791e
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00597923
    LEA ESI,[ESP + 0x8]                 ; 00597928
    ADD ESP,0x8                         ; 0059792c
    MOVSD.REP ES:EDI,ESI                ; 0059792f
    MOV EAX,EBX                         ; 00597931
    ADD ESP,0x9c                        ; 00597933
    POP EBP                             ; 00597939
    POP EDI                             ; 0059793a
    POP EBX                             ; 0059793b
    RET                                 ; 0059793c

