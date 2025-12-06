; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd(strstreambuf * this_ptr, int character)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060b9bd
        ;   Label: crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060b9be
    MOV AH,byte ptr [EBX + 0x3c]        ; 0060b9c2
    TEST AH,0x2                         ; 0060b9c5
    JZ 0x0060b9f8                       ; 0060b9c8 | LAB_0060b9f8
        ;   XREF to: 0060b9f8 (CONDITIONAL_JUMP)
    TEST AH,0x4                         ; 0060b9ca
    JZ 0x0060b9ff                       ; 0060b9cd | LAB_0060b9ff
        ;   XREF to: 0060b9ff (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0060b9cf
    PUSH ESI                            ; 0060b9d0
    MOV ECX,dword ptr [EBX + 0x20]      ; 0060b9d1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0060b9d4
    MOV ESI,dword ptr [EBX + 0x18]      ; 0060b9d7
    ADD EDX,0x200                       ; 0060b9da
    MOV EAX,ESI                         ; 0060b9e0
    MOV dword ptr [EBX + 0x20],ESI      ; 0060b9e2
    SUB ECX,ESI                         ; 0060b9e5
    MOV EDI,dword ptr [EBX + 0x20]      ; 0060b9e7
    MOV dword ptr [EBX + 0x1c],EDX      ; 0060b9ea
    ADD EDI,ECX                         ; 0060b9ed
    XOR EAX,ESI                         ; 0060b9ef
    MOV dword ptr [EBX + 0x20],EDI      ; 0060b9f1
    POP ESI                             ; 0060b9f4
    POP EDI                             ; 0060b9f5
    POP EBX                             ; 0060b9f6
        ;   Label: LAB_0060b9f6
    RET                                 ; 0060b9f7
    MOV EAX,0xffffffff                  ; 0060b9f8
        ;   Label: LAB_0060b9f8
    POP EBX                             ; 0060b9fd
    RET                                 ; 0060b9fe
    PUSH EBX                            ; 0060b9ff
        ;   Label: LAB_0060b9ff
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060ba00
    CALL dword ptr [EAX + 0x28]         ; 0060ba03
    ADD ESP,0x4                         ; 0060ba06
    CMP EAX,-0x1                        ; 0060ba09
    JZ 0x0060b9f6                       ; 0060ba0c | LAB_0060b9f6
        ;   XREF to: 0060b9f6 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xc],-0x1      ; 0060ba0e
    JZ 0x0060ba21                       ; 0060ba13 | LAB_0060ba21
        ;   XREF to: 0060ba21 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060ba15
    MOV DL,byte ptr [ESP + 0xc]         ; 0060ba18
    MOV byte ptr [EAX],DL               ; 0060ba1c
    INC dword ptr [EBX + 0x20]          ; 0060ba1e
    XOR EAX,EAX                         ; 0060ba21
        ;   Label: LAB_0060ba21
    POP EBX                             ; 0060ba23
    RET                                 ; 0060ba24

