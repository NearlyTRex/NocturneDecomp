; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_STextView_wordFits_FUN_004bbb30(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004bb2f0 at 004bb378
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbb30
        ;   Label: core_fldnotes.cpp_STextView_wordFits_FUN_004bbb30
    PUSH ESI                            ; 004bbb31
    PUSH EDI                            ; 004bbb32
    MOV EDI,dword ptr [ESP + 0x10]      ; 004bbb33
    MOV EBX,dword ptr [ESP + 0x14]      ; 004bbb37
    PUSH EBX                            ; 004bbb3b
    MOV EDX,dword ptr [EDI + 0x2c]      ; 004bbb3c
    PUSH EDX                            ; 004bbb3f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004bbb40
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    MOV ECX,dword ptr [EDI + 0x14]      ; 004bbb45
    MOV ESI,dword ptr [EDI + 0x24]      ; 004bbb48
    ADD EAX,ECX                         ; 004bbb4b
    ADD ESP,0x8                         ; 004bbb4d
    CMP EAX,ESI                         ; 004bbb50
    JL 0x004bbb5a                       ; 004bbb52
        ;   XREF to: 004bbb5a (CONDITIONAL_JUMP)  ; LAB_004bbb5a
    XOR EAX,EAX                         ; 004bbb54
        ;   Label: LAB_004bbb54
    POP EDI                             ; 004bbb56
    POP ESI                             ; 004bbb57
    POP EBX                             ; 004bbb58
    RET                                 ; 004bbb59
    ADD EDI,0x48                        ; 004bbb5a
        ;   Label: LAB_004bbb5a
    SUB ECX,ECX                         ; 004bbb5d
    DEC ECX                             ; 004bbb5f
    XOR EAX,EAX                         ; 004bbb60
    SCASB.REPNE ES:EDI                  ; 004bbb62
    NOT ECX                             ; 004bbb64
    DEC ECX                             ; 004bbb66
    MOV EDI,EBX                         ; 004bbb67
    MOV EDX,ECX                         ; 004bbb69
    SUB ECX,ECX                         ; 004bbb6b
    DEC ECX                             ; 004bbb6d
    XOR EAX,EAX                         ; 004bbb6e
    SCASB.REPNE ES:EDI                  ; 004bbb70
    NOT ECX                             ; 004bbb72
    DEC ECX                             ; 004bbb74
    ADD EDX,ECX                         ; 004bbb75
    CMP EDX,0xfa                        ; 004bbb77
    JNC 0x004bbb54                      ; 004bbb7d
        ;   XREF to: 004bbb54 (CONDITIONAL_JUMP)  ; LAB_004bbb54
    MOV EAX,0x1                         ; 004bbb7f
    POP EDI                             ; 004bbb84
    POP ESI                             ; 004bbb85
    POP EBX                             ; 004bbb86
    RET                                 ; 004bbb87

