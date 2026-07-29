; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_strstream_cpp_strstreambuf_overflow_FUN_0057000d(strstreambuf *this_ptr,int character)
;
; Parameters:
; strstreambuf *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057000d
        ;   Label: crt_strstream.cpp_strstreambuf_overflow_FUN_0057000d
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057000e
    MOV AH,byte ptr [EBX + 0x3c]        ; 00570012
    TEST AH,0x2                         ; 00570015
    JZ 0x00570048                       ; 00570018
        ;   XREF to: 00570048 (CONDITIONAL_JUMP)  ; LAB_00570048
    TEST AH,0x4                         ; 0057001a
    JZ 0x0057004f                       ; 0057001d
        ;   XREF to: 0057004f (CONDITIONAL_JUMP)  ; LAB_0057004f
    PUSH EDI                            ; 0057001f
    PUSH ESI                            ; 00570020
    MOV ECX,dword ptr [EBX + 0x20]      ; 00570021
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00570024
    MOV ESI,dword ptr [EBX + 0x18]      ; 00570027
    ADD EDX,0x200                       ; 0057002a
    MOV EAX,ESI                         ; 00570030
    MOV dword ptr [EBX + 0x20],ESI      ; 00570032
    SUB ECX,ESI                         ; 00570035
    MOV EDI,dword ptr [EBX + 0x20]      ; 00570037
    MOV dword ptr [EBX + 0x1c],EDX      ; 0057003a
    ADD EDI,ECX                         ; 0057003d
    XOR EAX,ESI                         ; 0057003f
    MOV dword ptr [EBX + 0x20],EDI      ; 00570041
    POP ESI                             ; 00570044
    POP EDI                             ; 00570045
    POP EBX                             ; 00570046
        ;   Label: LAB_00570046
    RET                                 ; 00570047
    MOV EAX,0xffffffff                  ; 00570048
        ;   Label: LAB_00570048
    POP EBX                             ; 0057004d
    RET                                 ; 0057004e
    PUSH EBX                            ; 0057004f
        ;   Label: LAB_0057004f
    MOV EAX,dword ptr [EBX + 0x28]      ; 00570050
    CALL dword ptr [EAX + 0x28]         ; 00570053
    ADD ESP,0x4                         ; 00570056
    CMP EAX,-0x1                        ; 00570059
    JZ 0x00570046                       ; 0057005c
        ;   XREF to: 00570046 (CONDITIONAL_JUMP)  ; LAB_00570046
    CMP dword ptr [ESP + 0xc],-0x1      ; 0057005e
    JZ 0x00570071                       ; 00570063
        ;   XREF to: 00570071 (CONDITIONAL_JUMP)  ; LAB_00570071
    MOV EAX,dword ptr [EBX + 0x20]      ; 00570065
    MOV DL,byte ptr [ESP + 0xc]         ; 00570068
    MOV byte ptr [EAX],DL               ; 0057006c
    INC dword ptr [EBX + 0x20]          ; 0057006e
    XOR EAX,EAX                         ; 00570071
        ;   Label: LAB_00570071
    POP EBX                             ; 00570073
    RET                                 ; 00570074

