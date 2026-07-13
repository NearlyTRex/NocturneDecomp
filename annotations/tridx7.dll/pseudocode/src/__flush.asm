; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __flush(FILE *_File)
;
; Parameters:
; FILE *           Stack[0x4]:4   _File
;
; XREF[2]:
;   __fclose_lk at 10005482
;   __ftbuf at 10005f13
;
; Called Functions:
;   __write
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10005d10
        ;   Label: __flush
    PUSH ESI                            ; 10005d11
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005d12
    PUSH EDI                            ; 10005d16
    XOR EDI,EDI                         ; 10005d17
    MOV EAX,dword ptr [ESI + 0xc]       ; 10005d19
    MOV ECX,EAX                         ; 10005d1c
    AND CL,0x3                          ; 10005d1e
    CMP CL,0x2                          ; 10005d21
    JNZ 0x10005d62                      ; 10005d24
        ;   XREF to: 10005d62 (CONDITIONAL_JUMP)  ; LAB_10005d62
    TEST EAX,0x108                      ; 10005d26
    JZ 0x10005d62                       ; 10005d2b
        ;   XREF to: 10005d62 (CONDITIONAL_JUMP)  ; LAB_10005d62
    MOV EAX,dword ptr [ESI + 0x8]       ; 10005d2d
    MOV EBX,dword ptr [ESI]             ; 10005d30
    SUB EBX,EAX                         ; 10005d32
    TEST EBX,EBX                        ; 10005d34
    JLE 0x10005d62                      ; 10005d36
        ;   XREF to: 10005d62 (CONDITIONAL_JUMP)  ; LAB_10005d62
    PUSH EBX                            ; 10005d38
    PUSH EAX                            ; 10005d39
    MOV EAX,dword ptr [ESI + 0x10]      ; 10005d3a
    PUSH EAX                            ; 10005d3d
    CALL __write                        ; 10005d3e
        ;   XREF to: 10008f30 (UNCONDITIONAL_CALL)  ; int __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
    ADD ESP,0xc                         ; 10005d43
    CMP EAX,EBX                         ; 10005d46
    JNZ 0x10005d59                      ; 10005d48
        ;   XREF to: 10005d59 (CONDITIONAL_JUMP)  ; LAB_10005d59
    MOV EAX,dword ptr [ESI + 0xc]       ; 10005d4a
    TEST AL,0x80                        ; 10005d4d
    JZ 0x10005d62                       ; 10005d4f
        ;   XREF to: 10005d62 (CONDITIONAL_JUMP)  ; LAB_10005d62
    AND EAX,0xfffffffd                  ; 10005d51
    MOV dword ptr [ESI + 0xc],EAX       ; 10005d54
    JMP 0x10005d62                      ; 10005d57
        ;   XREF to: 10005d62 (UNCONDITIONAL_JUMP)  ; LAB_10005d62
    OR dword ptr [ESI + 0xc],0x20       ; 10005d59
        ;   Label: LAB_10005d59
    MOV EDI,0xffffffff                  ; 10005d5d
    MOV EAX,dword ptr [ESI + 0x8]       ; 10005d62
        ;   Label: LAB_10005d62
    MOV dword ptr [ESI],EAX             ; 10005d65
    MOV EAX,EDI                         ; 10005d67
    MOV dword ptr [ESI + 0x4],0x0       ; 10005d69
    POP EDI                             ; 10005d70
    POP ESI                             ; 10005d71
    POP EBX                             ; 10005d72
    RET                                 ; 10005d73

