; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fldnotes_cpp_STextView_wordFits_FUN_004a9770(STextView *this_ptr,char *param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_layoutChunk_FUN_004a8f30 at 004a8fb8
;
; Called Functions:
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9770
        ;   Label: core_fldnotes.cpp_STextView_wordFits_FUN_004a9770
    PUSH ESI                            ; 004a9771
    PUSH EDI                            ; 004a9772
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a9773
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a9777
    PUSH EBX                            ; 004a977b
    MOV EDX,dword ptr [EDI + 0x2c]      ; 004a977c
    PUSH EDX                            ; 004a977f
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004a9780
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV ECX,dword ptr [EDI + 0x14]      ; 004a9785
    MOV ESI,dword ptr [EDI + 0x24]      ; 004a9788
    ADD EAX,ECX                         ; 004a978b
    ADD ESP,0x8                         ; 004a978d
    CMP EAX,ESI                         ; 004a9790
    JL 0x004a979a                       ; 004a9792
        ;   XREF to: 004a979a (CONDITIONAL_JUMP)  ; LAB_004a979a
    XOR EAX,EAX                         ; 004a9794
        ;   Label: LAB_004a9794
    POP EDI                             ; 004a9796
    POP ESI                             ; 004a9797
    POP EBX                             ; 004a9798
    RET                                 ; 004a9799
    ADD EDI,0x48                        ; 004a979a
        ;   Label: LAB_004a979a
    SUB ECX,ECX                         ; 004a979d
    DEC ECX                             ; 004a979f
    XOR EAX,EAX                         ; 004a97a0
    SCASB.REPNE ES:EDI                  ; 004a97a2
    NOT ECX                             ; 004a97a4
    DEC ECX                             ; 004a97a6
    MOV EDI,EBX                         ; 004a97a7
    MOV EDX,ECX                         ; 004a97a9
    SUB ECX,ECX                         ; 004a97ab
    DEC ECX                             ; 004a97ad
    XOR EAX,EAX                         ; 004a97ae
    SCASB.REPNE ES:EDI                  ; 004a97b0
    NOT ECX                             ; 004a97b2
    DEC ECX                             ; 004a97b4
    ADD EDX,ECX                         ; 004a97b5
    CMP EDX,0xfa                        ; 004a97b7
    JNC 0x004a9794                      ; 004a97bd
        ;   XREF to: 004a9794 (CONDITIONAL_JUMP)  ; LAB_004a9794
    MOV EAX,0x1                         ; 004a97bf
    POP EDI                             ; 004a97c4
    POP ESI                             ; 004a97c5
    POP EBX                             ; 004a97c6
    RET                                 ; 004a97c7

