; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aee94(int param_1,undefined1 *param_2)
;
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005a4ee0
;   crt_unknown.c_FUN_005aee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aee94
        ;   Label: crt_unknown.c_FUN_005aee94
    PUSH ESI                            ; 005aee95
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aee96
    MOV ESI,dword ptr [ESP + 0x10]      ; 005aee9a
    LEA EAX,[EBX + 0x16]                ; 005aee9e
    PUSH EAX                            ; 005aeea1
    LEA EAX,[EBX + 0x18]                ; 005aeea2
    PUSH EAX                            ; 005aeea5
    LEA EAX,[ESI + 0x14]                ; 005aeea6
    PUSH EAX                            ; 005aeea9
    CALL crt_unknown.c_FUN_005aee30     ; 005aeeaa
        ;   XREF to: 005aee30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aee30()
    ADD ESP,0xc                         ; 005aeeaf
    MOV AL,byte ptr [ESI]               ; 005aeeb2
    ADD ESI,0x2c                        ; 005aeeb4
    MOV byte ptr [EBX + 0x15],AL        ; 005aeeb7
    PUSH 0xff                           ; 005aeeba
    MOV EAX,dword ptr [ESI + -0xc]      ; 005aeebf
    PUSH ESI                            ; 005aeec2
    MOV dword ptr [EBX + 0x1a],EAX      ; 005aeec3
    LEA EAX,[EBX + 0x1e]                ; 005aeec6
    PUSH EAX                            ; 005aeec9
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 005aeeca
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005aeecf
    MOV byte ptr [EBX + 0x11d],0x0      ; 005aeed2
    POP ESI                             ; 005aeed9
    POP EBX                             ; 005aeeda
    RET                                 ; 005aeedb

