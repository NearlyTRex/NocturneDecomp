; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_appendWord_FUN_004a3160(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a28b0 at 004a294e
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3160
        ;   Label: core_fldnotes.cpp_STextView_appendWord_FUN_004a3160
    PUSH ESI                            ; 004a3161
    PUSH EDI                            ; 004a3162
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a3163
    CMP byte ptr [EBX + 0x48],0x0       ; 004a3167
    JNZ 0x004a3179                      ; 004a316b
        ;   XREF to: 004a3179 (CONDITIONAL_JUMP)  ; LAB_004a3179
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a316d
    MOV dword ptr [EBX + 0x40],EAX      ; 004a3170
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a3173
    MOV dword ptr [EBX + 0x44],EAX      ; 004a3176
    LEA EDX,[EBX + 0x48]                ; 004a3179
        ;   Label: LAB_004a3179
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a317c
    MOV EDI,EDX                         ; 004a3180
    PUSH EDI                            ; 004a3182
    SUB ECX,ECX                         ; 004a3183
    DEC ECX                             ; 004a3185
    MOV AL,0x0                          ; 004a3186
    SCASB.REPNE ES:EDI                  ; 004a3188
    DEC EDI                             ; 004a318a
    MOV AL,byte ptr [ESI]               ; 004a318b
        ;   Label: LAB_004a318b
    MOV byte ptr [EDI],AL               ; 004a318d
    CMP AL,0x0                          ; 004a318f
    JZ 0x004a31a3                       ; 004a3191
        ;   XREF to: 004a31a3 (CONDITIONAL_JUMP)  ; LAB_004a31a3
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3193
    ADD ESI,0x2                         ; 004a3196
    MOV byte ptr [EDI + 0x1],AL         ; 004a3199
    ADD EDI,0x2                         ; 004a319c
    CMP AL,0x0                          ; 004a319f
    JNZ 0x004a318b                      ; 004a31a1
        ;   XREF to: 004a318b (CONDITIONAL_JUMP)  ; LAB_004a318b
    POP EDI                             ; 004a31a3
        ;   Label: LAB_004a31a3
    PUSH EDX                            ; 004a31a4
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004a31a5
    PUSH EDX                            ; 004a31a8
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004a31a9
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004a31ae
    MOV EAX,dword ptr [EBX + 0x40]      ; 004a31b0
    ADD EAX,EDX                         ; 004a31b3
    ADD ESP,0x8                         ; 004a31b5
    MOV dword ptr [EBX + 0x14],EAX      ; 004a31b8
    POP EDI                             ; 004a31bb
    POP ESI                             ; 004a31bc
    POP EBX                             ; 004a31bd
    RET                                 ; 004a31be

