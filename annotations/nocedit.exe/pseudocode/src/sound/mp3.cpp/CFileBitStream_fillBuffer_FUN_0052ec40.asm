; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ec40
        ;   Label: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40
    PUSH ESI                            ; 0052ec41
    PUSH EDI                            ; 0052ec42
    PUSH EBP                            ; 0052ec43
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052ec44
    MOV ESI,dword ptr [EBX + 0x8]       ; 0052ec48
    MOV EDX,dword ptr [EBX + 0x10]      ; 0052ec4b
    SUB ESI,0x2                         ; 0052ec4e
    SUB ESI,EDX                         ; 0052ec51
    TEST ESI,ESI                        ; 0052ec53
    JL 0x0052ec72                       ; 0052ec55
        ;   XREF to: 0052ec72 (CONDITIONAL_JUMP)  ; LAB_0052ec72
    CMP dword ptr [EBX + 0x18],0x0      ; 0052ec57
        ;   Label: LAB_0052ec57
    JNZ 0x0052ec72                      ; 0052ec5b
        ;   XREF to: 0052ec72 (CONDITIONAL_JUMP)  ; LAB_0052ec72
    MOV EDI,dword ptr [EBX + 0x28]      ; 0052ec5d
    XOR EAX,EAX                         ; 0052ec60
    TEST EDI,EDI                        ; 0052ec62
    JG 0x0052ec77                       ; 0052ec64
        ;   XREF to: 0052ec77 (CONDITIONAL_JUMP)  ; LAB_0052ec77
    CMP EAX,0x1                         ; 0052ec66
        ;   Label: LAB_0052ec66
    JNZ 0x0052ec91                      ; 0052ec69
        ;   XREF to: 0052ec91 (CONDITIONAL_JUMP)  ; LAB_0052ec91
    DEC dword ptr [EBX + 0x28]          ; 0052ec6b
    TEST ESI,ESI                        ; 0052ec6e
    JGE 0x0052ec57                      ; 0052ec70
        ;   XREF to: 0052ec57 (CONDITIONAL_JUMP)  ; LAB_0052ec57
    POP EBP                             ; 0052ec72
        ;   Label: LAB_0052ec72
    POP EDI                             ; 0052ec73
    POP ESI                             ; 0052ec74
    POP EBX                             ; 0052ec75
    RET                                 ; 0052ec76
    MOV EBP,dword ptr [EBX]             ; 0052ec77
        ;   Label: LAB_0052ec77
    PUSH EBP                            ; 0052ec79
    PUSH 0x1                            ; 0052ec7a
    MOV EDX,ESI                         ; 0052ec7c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052ec7e
    PUSH 0x1                            ; 0052ec81
    ADD EAX,EDX                         ; 0052ec83
    PUSH EAX                            ; 0052ec85
    DEC ESI                             ; 0052ec86
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0052ec87
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0052ec8c
    JMP 0x0052ec66                      ; 0052ec8f
        ;   XREF to: 0052ec66 (UNCONDITIONAL_JUMP)  ; LAB_0052ec66
    LEA EAX,[ESI + 0x1]                 ; 0052ec91
        ;   Label: LAB_0052ec91
    MOV dword ptr [EBX + 0x18],EAX      ; 0052ec94
    TEST ESI,ESI                        ; 0052ec97
    JGE 0x0052ec57                      ; 0052ec99
        ;   XREF to: 0052ec57 (CONDITIONAL_JUMP)  ; LAB_0052ec57
    POP EBP                             ; 0052ec9b
    POP EDI                             ; 0052ec9c
    POP ESI                             ; 0052ec9d
    POP EBX                             ; 0052ec9e
    RET                                 ; 0052ec9f

