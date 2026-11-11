; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_appendWord_FUN_004bbb90(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004bb2f0 at 004bb38e
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbb90
        ;   Label: core_fldnotes.cpp_STextView_appendWord_FUN_004bbb90
    PUSH ESI                            ; 004bbb91
    PUSH EDI                            ; 004bbb92
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bbb93
    CMP byte ptr [EBX + 0x48],0x0       ; 004bbb97
    JNZ 0x004bbba9                      ; 004bbb9b
        ;   XREF to: 004bbba9 (CONDITIONAL_JUMP)  ; LAB_004bbba9
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bbb9d
    MOV dword ptr [EBX + 0x40],EAX      ; 004bbba0
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bbba3
    MOV dword ptr [EBX + 0x44],EAX      ; 004bbba6
    LEA EDX,[EBX + 0x48]                ; 004bbba9
        ;   Label: LAB_004bbba9
    MOV ESI,dword ptr [ESP + 0x14]      ; 004bbbac
    MOV EDI,EDX                         ; 004bbbb0
    PUSH EDI                            ; 004bbbb2
    SUB ECX,ECX                         ; 004bbbb3
    DEC ECX                             ; 004bbbb5
    MOV AL,0x0                          ; 004bbbb6
    SCASB.REPNE ES:EDI                  ; 004bbbb8
    DEC EDI                             ; 004bbbba
    MOV AL,byte ptr [ESI]               ; 004bbbbb
        ;   Label: LAB_004bbbbb
    MOV byte ptr [EDI],AL               ; 004bbbbd
    CMP AL,0x0                          ; 004bbbbf
    JZ 0x004bbbd3                       ; 004bbbc1
        ;   XREF to: 004bbbd3 (CONDITIONAL_JUMP)  ; LAB_004bbbd3
    MOV AL,byte ptr [ESI + 0x1]         ; 004bbbc3
    ADD ESI,0x2                         ; 004bbbc6
    MOV byte ptr [EDI + 0x1],AL         ; 004bbbc9
    ADD EDI,0x2                         ; 004bbbcc
    CMP AL,0x0                          ; 004bbbcf
    JNZ 0x004bbbbb                      ; 004bbbd1
        ;   XREF to: 004bbbbb (CONDITIONAL_JUMP)  ; LAB_004bbbbb
    POP EDI                             ; 004bbbd3
        ;   Label: LAB_004bbbd3
    PUSH EDX                            ; 004bbbd4
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004bbbd5
    PUSH EDX                            ; 004bbbd8
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004bbbd9
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004bbbde
    MOV EAX,dword ptr [EBX + 0x40]      ; 004bbbe0
    ADD EAX,EDX                         ; 004bbbe3
    ADD ESP,0x8                         ; 004bbbe5
    MOV dword ptr [EBX + 0x14],EAX      ; 004bbbe8
    POP EDI                             ; 004bbbeb
    POP ESI                             ; 004bbbec
    POP EBX                             ; 004bbbed
    RET                                 ; 004bbbee

