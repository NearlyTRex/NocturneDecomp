; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdlib_c_utoa_FUN_0060ae50(uint value,char *buffer,int base)
;
; Parameters:
; uint             Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
; Local Variables:
; char[39]         Stack[-0x37]:39  local_37
;
; Referenced Globals:
;   char[36] g_AlphaNumericCharacters2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ae50
        ;   Label: crt_stdlib.c_utoa_FUN_0060ae50
    PUSH ESI                            ; 0060ae51
    PUSH EDI                            ; 0060ae52
    PUSH EBP                            ; 0060ae53
    SUB ESP,0x28                        ; 0060ae54
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0060ae57
    MOV EBP,dword ptr [ESP + 0x40]      ; 0060ae5b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0060ae5f
    LEA ECX,[ESP + 0x1]                 ; 0060ae63
    XOR DL,DL                           ; 0060ae67
    MOV ESI,EBP                         ; 0060ae69
    MOV byte ptr [ESP],DL               ; 0060ae6b
    LEA EBX,[ESP + 0x24]                ; 0060ae6e
        ;   Label: LAB_0060ae6e
    MOV dword ptr [ESP + 0x24],EDI      ; 0060ae72
    XOR EDX,EDX                         ; 0060ae76
    DIV dword ptr [EBX]                 ; 0060ae78
    MOV dword ptr [EBX],EDX             ; 0060ae7a
    MOV EBX,dword ptr [ESP + 0x24]      ; 0060ae7c
    INC ECX                             ; 0060ae80
    MOV BL,byte ptr [EBX + 0x68543c]    ; 0060ae81 | g_AlphaNumericCharacters2
    MOV byte ptr [ECX + -0x1],BL        ; 0060ae87
    TEST EAX,EAX                        ; 0060ae8a
    JNZ 0x0060ae6e                      ; 0060ae8c
        ;   XREF to: 0060ae6e (CONDITIONAL_JUMP)  ; LAB_0060ae6e
    INC ESI                             ; 0060ae8e
        ;   Label: LAB_0060ae8e
    MOV AL,byte ptr [ECX + -0x1]        ; 0060ae8f
    DEC ECX                             ; 0060ae92
    MOV byte ptr [ESI + -0x1],AL        ; 0060ae93
    TEST AL,AL                          ; 0060ae96
    JNZ 0x0060ae8e                      ; 0060ae98
        ;   XREF to: 0060ae8e (CONDITIONAL_JUMP)  ; LAB_0060ae8e
    MOV EAX,EBP                         ; 0060ae9a
    ADD ESP,0x28                        ; 0060ae9c
    POP EBP                             ; 0060ae9f
    POP EDI                             ; 0060aea0
    POP ESI                             ; 0060aea1
    POP EBX                             ; 0060aea2
    RET                                 ; 0060aea3

