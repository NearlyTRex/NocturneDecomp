; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_004340f0(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005cd993
;
; Called Functions:
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0
;   support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
;   support_trstream.cpp_COutStreamFile_isOpen_FUN_0057dd40
;   unkaddr_0057b9a0.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0
;   unkaddr_0057b9a0.cpp_CInStreamFile_isOpen_FUN_0057d130
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004340f0
        ;   Label: support_codec.cpp_FUN_004340f0
    SUB ESP,0x30                        ; 004340f1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004340f4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004340f8
    PUSH EDX                            ; 004340fc
    LEA EAX,[ESP + 0x4]                 ; 004340fd
    PUSH EAX                            ; 00434101
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0 ; 00434102
        ;   XREF to: 0057cdb0 (UNCONDITIONAL_CALL)  ; undefined4 * unkaddr_0057b9a0.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(CInStreamFile * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 00434107
    MOV EAX,ESP                         ; 0043410a
    PUSH EAX                            ; 0043410c
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_isOpen_FUN_0057d130 ; 0043410d
        ;   XREF to: 0057d130 (UNCONDITIONAL_CALL)  ; bool unkaddr_0057b9a0.cpp_CInStreamFile_isOpen_FUN_0057d130(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00434112
    TEST EAX,EAX                        ; 00434115
    JZ 0x004341a2                       ; 00434117
        ;   XREF to: 004341a2 (CONDITIONAL_JUMP)  ; LAB_004341a2
    PUSH 0x5cd993                       ; 0043411d | DAT_005cd993
    MOV ECX,dword ptr [ESP + 0x44]      ; 00434122
    PUSH ECX                            ; 00434126
    LEA EAX,[ESP + 0x30]                ; 00434127
    PUSH EAX                            ; 0043412b
    CALL support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0 ; 0043412c
        ;   XREF to: 0057dba0 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00434131
    LEA EAX,[ESP + 0x28]                ; 00434134
    PUSH EAX                            ; 00434138
    CALL support_trstream.cpp_COutStreamFile_isOpen_FUN_0057dd40 ; 00434139
        ;   XREF to: 0057dd40 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_COutStreamFile_isOpen_FUN_0057dd40(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0043413e
    TEST EAX,EAX                        ; 00434141
    JZ 0x004341ac                       ; 00434143
        ;   XREF to: 004341ac (CONDITIONAL_JUMP)  ; LAB_004341ac
    PUSH EBX                            ; 00434145
    MOV EAX,dword ptr [EBX]             ; 00434146
    CALL dword ptr [EAX + 0x4]          ; 00434148
    ADD ESP,0x4                         ; 0043414b
    LEA EDX,[ESP + 0x28]                ; 0043414e
    PUSH EDX                            ; 00434152
    LEA EDX,[ESP + 0x4]                 ; 00434153
    PUSH EDX                            ; 00434157
    MOV EAX,dword ptr [EBX]             ; 00434158
    PUSH EBX                            ; 0043415a
    CALL dword ptr [EAX + 0x8]          ; 0043415b
    ADD ESP,0xc                         ; 0043415e
    CMP EAX,0x1                         ; 00434161
    JNZ 0x00434179                      ; 00434164
        ;   XREF to: 00434179 (CONDITIONAL_JUMP)  ; LAB_00434179
    LEA EDX,[ESP + 0x28]                ; 00434166
    PUSH EDX                            ; 0043416a
    MOV EAX,dword ptr [EBX]             ; 0043416b
    PUSH EBX                            ; 0043416d
    CALL dword ptr [EAX + 0xc]          ; 0043416e
    ADD ESP,0x8                         ; 00434171
    CMP EAX,0x1                         ; 00434174
    JZ 0x0043417b                       ; 00434177
        ;   XREF to: 0043417b (CONDITIONAL_JUMP)  ; LAB_0043417b
    XOR EAX,EAX                         ; 00434179
        ;   Label: LAB_00434179
    PUSH 0x0                            ; 0043417b
        ;   Label: LAB_0043417b
    MOV EBX,EAX                         ; 0043417d
    LEA EAX,[ESP + 0x2c]                ; 0043417f
    PUSH EAX                            ; 00434183
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 00434184
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00434189
    PUSH 0x0                            ; 0043418c
    LEA EAX,[ESP + 0x4]                 ; 0043418e
    PUSH EAX                            ; 00434192
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 00434193
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
        ;   Label: LAB_00434193
    ADD ESP,0x8                         ; 00434198
    MOV EAX,EBX                         ; 0043419b
    ADD ESP,0x30                        ; 0043419d
    POP EBX                             ; 004341a0
    RET                                 ; 004341a1
    PUSH EAX                            ; 004341a2
        ;   Label: LAB_004341a2
    LEA EAX,[ESP + 0x4]                 ; 004341a3
    PUSH EAX                            ; 004341a7
    XOR EBX,EBX                         ; 004341a8
    JMP 0x00434193                      ; 004341aa
        ;   XREF to: 00434193 (UNCONDITIONAL_JUMP)  ; LAB_00434193
    PUSH EAX                            ; 004341ac
        ;   Label: LAB_004341ac
    LEA EAX,[ESP + 0x2c]                ; 004341ad
    PUSH EAX                            ; 004341b1
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004341b2
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004341b7
    XOR EBX,EBX                         ; 004341ba
    PUSH EBX                            ; 004341bc
    LEA EAX,[ESP + 0x4]                 ; 004341bd
    PUSH EAX                            ; 004341c1
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004341c2
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004341c7
    MOV EAX,EBX                         ; 004341ca
    ADD ESP,0x30                        ; 004341cc
    POP EBX                             ; 004341cf
    RET                                 ; 004341d0

