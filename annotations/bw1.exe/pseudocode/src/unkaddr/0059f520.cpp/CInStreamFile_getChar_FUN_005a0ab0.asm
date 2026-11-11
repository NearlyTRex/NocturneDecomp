; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl unkaddr_0059f520_cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile *this_ptr)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0e86
;
; Called Functions:
;   unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0ab0
        ;   Label: unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0
    PUSH ESI                            ; 005a0ab1
    PUSH EDI                            ; 005a0ab2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a0ab3
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a0ab7
    PUSH EDX                            ; 005a0aba
    PUSH EBX                            ; 005a0abb
    CALL unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0 ; 005a0abc
        ;   XREF to: 005a0ba0 (UNCONDITIONAL_CALL)  ; uint unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0ac1
    MOV ESI,EAX                         ; 005a0ac4
    TEST EAX,EAX                        ; 005a0ac6
    JL 0x005a0add                       ; 005a0ac8
        ;   XREF to: 005a0add (CONDITIONAL_JUMP)  ; LAB_005a0add
    MOV ECX,dword ptr [EBX + 0x10]      ; 005a0aca
    INC ECX                             ; 005a0acd
    MOV EDI,dword ptr [EBX + 0x28]      ; 005a0ace
    MOV dword ptr [EBX + 0x10],ECX      ; 005a0ad1
    TEST EDI,EDI                        ; 005a0ad4
    JNZ 0x005a0add                      ; 005a0ad6
        ;   XREF to: 005a0add (CONDITIONAL_JUMP)  ; LAB_005a0add
    CMP EAX,0xd                         ; 005a0ad8
    JZ 0x005a0ae3                       ; 005a0adb
        ;   XREF to: 005a0ae3 (CONDITIONAL_JUMP)  ; LAB_005a0ae3
    MOV EAX,ESI                         ; 005a0add
        ;   Label: LAB_005a0add
    POP EDI                             ; 005a0adf
    POP ESI                             ; 005a0ae0
    POP EBX                             ; 005a0ae1
    RET                                 ; 005a0ae2
    PUSH ECX                            ; 005a0ae3
        ;   Label: LAB_005a0ae3
    PUSH EBX                            ; 005a0ae4
    MOV ESI,0xa                         ; 005a0ae5
    CALL unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0 ; 005a0aea
        ;   XREF to: 005a0ba0 (UNCONDITIONAL_CALL)  ; uint unkaddr_0059f520.cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0aef
    CMP EAX,ESI                         ; 005a0af2
    JNZ 0x005a0add                      ; 005a0af4
        ;   XREF to: 005a0add (CONDITIONAL_JUMP)  ; LAB_005a0add
    INC dword ptr [EBX + 0x10]          ; 005a0af6
    MOV EAX,ESI                         ; 005a0af9
    POP EDI                             ; 005a0afb
    POP ESI                             ; 005a0afc
    POP EBX                             ; 005a0afd
    RET                                 ; 005a0afe

