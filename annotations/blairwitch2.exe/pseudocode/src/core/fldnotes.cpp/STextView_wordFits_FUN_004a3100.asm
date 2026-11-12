; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_STextView_wordFits_FUN_004a3100(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 at 004a2938
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3100
        ;   Label: core_fldnotes.cpp_STextView_wordFits_FUN_004a3100
    PUSH ESI                            ; 004a3101
    PUSH EDI                            ; 004a3102
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a3103
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a3107
    PUSH EBX                            ; 004a310b
    MOV EDX,dword ptr [EDI + 0x2c]      ; 004a310c
    PUSH EDX                            ; 004a310f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004a3110
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    MOV ECX,dword ptr [EDI + 0x14]      ; 004a3115
    MOV ESI,dword ptr [EDI + 0x24]      ; 004a3118
    ADD EAX,ECX                         ; 004a311b
    ADD ESP,0x8                         ; 004a311d
    CMP EAX,ESI                         ; 004a3120
    JL 0x004a312a                       ; 004a3122
        ;   XREF to: 004a312a (CONDITIONAL_JUMP)  ; LAB_004a312a
    XOR EAX,EAX                         ; 004a3124
        ;   Label: LAB_004a3124
    POP EDI                             ; 004a3126
    POP ESI                             ; 004a3127
    POP EBX                             ; 004a3128
    RET                                 ; 004a3129
    ADD EDI,0x48                        ; 004a312a
        ;   Label: LAB_004a312a
    SUB ECX,ECX                         ; 004a312d
    DEC ECX                             ; 004a312f
    XOR EAX,EAX                         ; 004a3130
    SCASB.REPNE ES:EDI                  ; 004a3132
    NOT ECX                             ; 004a3134
    DEC ECX                             ; 004a3136
    MOV EDI,EBX                         ; 004a3137
    MOV EDX,ECX                         ; 004a3139
    SUB ECX,ECX                         ; 004a313b
    DEC ECX                             ; 004a313d
    XOR EAX,EAX                         ; 004a313e
    SCASB.REPNE ES:EDI                  ; 004a3140
    NOT ECX                             ; 004a3142
    DEC ECX                             ; 004a3144
    ADD EDX,ECX                         ; 004a3145
    CMP EDX,0xfa                        ; 004a3147
    JNC 0x004a3124                      ; 004a314d
        ;   XREF to: 004a3124 (CONDITIONAL_JUMP)  ; LAB_004a3124
    MOV EAX,0x1                         ; 004a314f
    POP EDI                             ; 004a3154
    POP ESI                             ; 004a3155
    POP EBX                             ; 004a3156
    RET                                 ; 004a3157

