; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(CInStreamFile *this_ptr,int param_2)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[3]:
;   support_trstream.cpp_CInStreamFile_getChar_FUN_005a0ab0 at 005a0abc
;   support_trstream.cpp_CInStreamFile_peekChar_FUN_005a0b70 at 005a0b7a
;   support_trstream.cpp_CInStreamFile_ungetChar_FUN_005a0b00 at 005a0b45
;
; Called Functions:
;   support_trstream.cpp_CInStreamFile_fillBuffer_FUN_005a0ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0ba0
        ;   Label: support_trstream.cpp_CInStreamFile_readByteAt_FUN_005a0ba0
    PUSH ESI                            ; 005a0ba1
    PUSH EDI                            ; 005a0ba2
    PUSH EBP                            ; 005a0ba3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a0ba4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a0ba8
    CMP dword ptr [EBX + 0x4],0x0       ; 005a0bac
    JZ 0x005a0bdb                       ; 005a0bb0
        ;   XREF to: 005a0bdb (CONDITIONAL_JUMP)  ; LAB_005a0bdb
    CMP ESI,dword ptr [EBX + 0x8]       ; 005a0bb2
    JGE 0x005a0be5                      ; 005a0bb5
        ;   XREF to: 005a0be5 (CONDITIONAL_JUMP)  ; LAB_005a0be5
    MOV EDI,dword ptr [EBX + 0x1c]      ; 005a0bb7
    CMP ESI,EDI                         ; 005a0bba
    JL 0x005a0bef                       ; 005a0bbc
        ;   XREF to: 005a0bef (CONDITIONAL_JUMP)  ; LAB_005a0bef
    MOV EBP,dword ptr [EBX + 0x24]      ; 005a0bbe
    LEA EAX,[EDI + EBP*0x1]             ; 005a0bc1
    CMP EAX,ESI                         ; 005a0bc4
    JLE 0x005a0bef                      ; 005a0bc6
        ;   XREF to: 005a0bef (CONDITIONAL_JUMP)  ; LAB_005a0bef
    SUB ESI,dword ptr [EBX + 0x1c]      ; 005a0bc8
        ;   Label: LAB_005a0bc8
    MOV EAX,dword ptr [EBX + 0x18]      ; 005a0bcb
    MOV AL,byte ptr [ESI + EAX*0x1]     ; 005a0bce
    AND EAX,0xff                        ; 005a0bd1
    POP EBP                             ; 005a0bd6
    POP EDI                             ; 005a0bd7
    POP ESI                             ; 005a0bd8
    POP EBX                             ; 005a0bd9
    RET                                 ; 005a0bda
    MOV EAX,0xfffffffe                  ; 005a0bdb
        ;   Label: LAB_005a0bdb
    POP EBP                             ; 005a0be0
    POP EDI                             ; 005a0be1
    POP ESI                             ; 005a0be2
    POP EBX                             ; 005a0be3
    RET                                 ; 005a0be4
    MOV EAX,0xffffffff                  ; 005a0be5
        ;   Label: LAB_005a0be5
    POP EBP                             ; 005a0bea
    POP EDI                             ; 005a0beb
    POP ESI                             ; 005a0bec
    POP EBX                             ; 005a0bed
    RET                                 ; 005a0bee
    PUSH ESI                            ; 005a0bef
        ;   Label: LAB_005a0bef
    PUSH EBX                            ; 005a0bf0
    CALL support_trstream.cpp_CInStreamFile_fillBuffer_FUN_005a0ec0 ; 005a0bf1
        ;   XREF to: 005a0ec0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_fillBuffer_FUN_005a0ec0(CInStreamFile * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a0bf6
    TEST EAX,EAX                        ; 005a0bf9
    JNZ 0x005a0bc8                      ; 005a0bfb
        ;   XREF to: 005a0bc8 (CONDITIONAL_JUMP)  ; LAB_005a0bc8
    MOV EAX,0xffffffff                  ; 005a0bfd
    POP EBP                             ; 005a0c02
    POP EDI                             ; 005a0c03
    POP ESI                             ; 005a0c04
    POP EBX                             ; 005a0c05
    RET                                 ; 005a0c06

