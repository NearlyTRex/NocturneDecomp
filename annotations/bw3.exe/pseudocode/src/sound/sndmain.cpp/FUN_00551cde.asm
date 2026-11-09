; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSample * sound_sndmain_cpp_FUN_00551cde(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00551cde
        ;   Label: sound_sndmain.cpp_FUN_00551cde
    PUSH EBX                            ; 00551ce0
    PUSH ESI                            ; 00551ce1
    PUSH EDI                            ; 00551ce2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00551ce3
    MOV EBX,0x2cebc24                   ; 00551ce7
    XOR ESI,ESI                         ; 00551cec
    PUSH EDI                            ; 00551cee
        ;   Label: LAB_00551cee
    PUSH EBX                            ; 00551cef
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00551cf0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551cf5
    TEST EAX,EAX                        ; 00551cf8
    JZ 0x00551d0e                       ; 00551cfa
        ;   XREF to: 00551d0e (CONDITIONAL_JUMP)  ; LAB_00551d0e
    INC ESI                             ; 00551cfc
    ADD EBX,0x1b0                       ; 00551cfd
    CMP ESI,0x40                        ; 00551d03
    JL 0x00551cee                       ; 00551d06
        ;   XREF to: 00551cee (CONDITIONAL_JUMP)  ; LAB_00551cee
    XOR EAX,EAX                         ; 00551d08
    POP EDI                             ; 00551d0a
    POP ESI                             ; 00551d0b
    POP EBX                             ; 00551d0c
    RET                                 ; 00551d0d
    MOV EAX,EBX                         ; 00551d0e
        ;   Label: LAB_00551d0e
    POP EDI                             ; 00551d10
    POP ESI                             ; 00551d11
    POP EBX                             ; 00551d12
    RET                                 ; 00551d13

