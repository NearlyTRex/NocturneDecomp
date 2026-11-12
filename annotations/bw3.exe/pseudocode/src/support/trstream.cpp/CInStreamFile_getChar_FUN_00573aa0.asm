; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afad6
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573aa0
        ;   Label: support_trstream.cpp_CInStreamFile_getChar_FUN_00573aa0
    PUSH ESI                            ; 00573aa1
    PUSH EDI                            ; 00573aa2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00573aa3
    MOV EDX,dword ptr [EBX + 0x10]      ; 00573aa7
    PUSH EDX                            ; 00573aaa
    PUSH EBX                            ; 00573aab
    CALL support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90 ; 00573aac
        ;   XREF to: 00573b90 (UNCONDITIONAL_CALL)  ; uint support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00573ab1
    MOV ESI,EAX                         ; 00573ab4
    TEST EAX,EAX                        ; 00573ab6
    JL 0x00573acd                       ; 00573ab8
        ;   XREF to: 00573acd (CONDITIONAL_JUMP)  ; LAB_00573acd
    MOV ECX,dword ptr [EBX + 0x10]      ; 00573aba
    INC ECX                             ; 00573abd
    MOV EDI,dword ptr [EBX + 0x28]      ; 00573abe
    MOV dword ptr [EBX + 0x10],ECX      ; 00573ac1
    TEST EDI,EDI                        ; 00573ac4
    JNZ 0x00573acd                      ; 00573ac6
        ;   XREF to: 00573acd (CONDITIONAL_JUMP)  ; LAB_00573acd
    CMP EAX,0xd                         ; 00573ac8
    JZ 0x00573ad3                       ; 00573acb
        ;   XREF to: 00573ad3 (CONDITIONAL_JUMP)  ; LAB_00573ad3
    MOV EAX,ESI                         ; 00573acd
        ;   Label: LAB_00573acd
    POP EDI                             ; 00573acf
    POP ESI                             ; 00573ad0
    POP EBX                             ; 00573ad1
    RET                                 ; 00573ad2
    PUSH ECX                            ; 00573ad3
        ;   Label: LAB_00573ad3
    PUSH EBX                            ; 00573ad4
    MOV ESI,0xa                         ; 00573ad5
    CALL support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90 ; 00573ada
        ;   XREF to: 00573b90 (UNCONDITIONAL_CALL)  ; uint support_trstream.cpp_CInStreamFile_readByteAt_FUN_00573b90(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00573adf
    CMP EAX,ESI                         ; 00573ae2
    JNZ 0x00573acd                      ; 00573ae4
        ;   XREF to: 00573acd (CONDITIONAL_JUMP)  ; LAB_00573acd
    INC dword ptr [EBX + 0x10]          ; 00573ae6
    MOV EAX,ESI                         ; 00573ae9
    POP EDI                             ; 00573aeb
    POP ESI                             ; 00573aec
    POP EBX                             ; 00573aed
    RET                                 ; 00573aee

