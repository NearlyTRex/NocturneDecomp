; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00594850(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Called Functions:
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594850
        ;   Label: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00594850
    PUSH EDI                            ; 00594851
    PUSH EBP                            ; 00594852
    SUB ESP,0x9c                        ; 00594853
    MOV EBX,ESI                         ; 00594859
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0059485b
    LEA EAX,[ESI*0x8 + 0x0]             ; 00594862
    MOV EDX,EAX                         ; 00594869
    SHL EAX,0x4                         ; 0059486b
    SUB EAX,EDX                         ; 0059486e
    ADD EAX,dword ptr [ESP + 0xac]      ; 00594870
    MOV EBP,dword ptr [EAX + 0x25a8]    ; 00594877
    TEST ESI,ESI                        ; 0059487d
    JNZ 0x0059491d                      ; 0059487f
        ;   XREF to: 0059491d (CONDITIONAL_JUMP)  ; LAB_0059491d
    MOV ESI,0xbfeed917                  ; 00594885
    MOV EDI,0xc08374bc                  ; 0059488a
    MOV ECX,0x4006a7f0                  ; 0059488f
    LEA EDX,[ESP + 0x78]                ; 00594894
    LEA EAX,[ESP + 0x84]                ; 00594898
    MOV dword ptr [ESP + 0x7c],ESI      ; 0059489f
    MOV dword ptr [ESP + 0x80],EDI      ; 005948a3
    MOV dword ptr [ESP + 0x78],ECX      ; 005948aa
    CMP EAX,EDX                         ; 005948ae
    JZ 0x005948c7                       ; 005948b0
        ;   XREF to: 005948c7 (CONDITIONAL_JUMP)  ; LAB_005948c7
    MOV dword ptr [ESP + 0x88],ESI      ; 005948b2
    MOV dword ptr [ESP + 0x8c],EDI      ; 005948b9
    MOV dword ptr [ESP + 0x84],ECX      ; 005948c0
    MOV EDI,0x3dced917                  ; 005948c7
        ;   Label: LAB_005948c7
    MOV ESI,0x3faf7cee                  ; 005948cc
    MOV EAX,0xbef8d4fe                  ; 005948d1
    LEA EDX,[ESP + 0x6c]                ; 005948d6
    MOV dword ptr [ESP + 0x98],EDI      ; 005948da
    MOV dword ptr [ESP + 0x90],ESI      ; 005948e1
    LEA EDI,[ESP + 0x60]                ; 005948e8
    LEA ESI,[ESP + 0x90]                ; 005948ec
    MOV dword ptr [ESP + 0x94],EAX      ; 005948f3
    LEA EAX,[ESP + 0x60]                ; 005948fa
    MOVSD ES:EDI,ESI                    ; 005948fe
    MOVSD ES:EDI,ESI                    ; 005948ff
    MOVSD ES:EDI,ESI                    ; 00594900
    CMP EDX,EAX                         ; 00594901
    JZ 0x0059491d                       ; 00594903
        ;   XREF to: 0059491d (CONDITIONAL_JUMP)  ; LAB_0059491d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00594905
    MOV dword ptr [ESP + 0x6c],EAX      ; 00594909
    MOV EAX,dword ptr [ESP + 0x64]      ; 0059490d
    MOV dword ptr [ESP + 0x70],EAX      ; 00594911
    MOV EAX,dword ptr [ESP + 0x68]      ; 00594915
    MOV dword ptr [ESP + 0x74],EAX      ; 00594919
    LEA EAX,[ESP + 0x6c]                ; 0059491d
        ;   Label: LAB_0059491d
    PUSH EAX                            ; 00594921
    LEA EAX,[ESP + 0x88]                ; 00594922
    PUSH EAX                            ; 00594929
    LEA EAX,[ESP + 0x38]                ; 0059492a
    PUSH EAX                            ; 0059492e
    CALL core_xform.cpp_FUN_005b5760    ; 0059492f
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    LEA EAX,[EBP*0x4 + 0x0]             ; 00594934
    ADD ESP,0xc                         ; 0059493b
    SUB EAX,EBP                         ; 0059493e
    MOV EDX,dword ptr [ESP + 0xac]      ; 00594940
    SHL EAX,0x4                         ; 00594947
    ADD EDX,0xfd8                       ; 0059494a
    ADD EAX,EDX                         ; 00594950
    PUSH EAX                            ; 00594952
    LEA EAX,[ESP + 0x34]                ; 00594953
    PUSH EAX                            ; 00594957
    LEA ESI,[ESP + 0x8]                 ; 00594958
    MOV EDI,EBX                         ; 0059495c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0059495e
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00594963
    LEA ESI,[ESP + 0x8]                 ; 00594968
    ADD ESP,0x8                         ; 0059496c
    MOVSD.REP ES:EDI,ESI                ; 0059496f
    MOV EAX,EBX                         ; 00594971
    ADD ESP,0x9c                        ; 00594973
    POP EBP                             ; 00594979
    POP EDI                             ; 0059497a
    POP EBX                             ; 0059497b
    RET                                 ; 0059497c

